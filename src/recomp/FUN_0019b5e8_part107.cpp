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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part107(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf224u: goto label_1cf224;
        case 0x1cf228u: goto label_1cf228;
        case 0x1cf22cu: goto label_1cf22c;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf234u: goto label_1cf234;
        case 0x1cf238u: goto label_1cf238;
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf240u: goto label_1cf240;
        case 0x1cf244u: goto label_1cf244;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf24cu: goto label_1cf24c;
        case 0x1cf250u: goto label_1cf250;
        case 0x1cf254u: goto label_1cf254;
        case 0x1cf258u: goto label_1cf258;
        case 0x1cf25cu: goto label_1cf25c;
        case 0x1cf260u: goto label_1cf260;
        case 0x1cf264u: goto label_1cf264;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf26cu: goto label_1cf26c;
        case 0x1cf270u: goto label_1cf270;
        case 0x1cf274u: goto label_1cf274;
        case 0x1cf278u: goto label_1cf278;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf284u: goto label_1cf284;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf28cu: goto label_1cf28c;
        case 0x1cf290u: goto label_1cf290;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2a4u: goto label_1cf2a4;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2b0u: goto label_1cf2b0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2b8u: goto label_1cf2b8;
        case 0x1cf2bcu: goto label_1cf2bc;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2c4u: goto label_1cf2c4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf2d0u: goto label_1cf2d0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2d8u: goto label_1cf2d8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2e4u: goto label_1cf2e4;
        case 0x1cf2e8u: goto label_1cf2e8;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2f0u: goto label_1cf2f0;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf300u: goto label_1cf300;
        case 0x1cf304u: goto label_1cf304;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf30cu: goto label_1cf30c;
        case 0x1cf310u: goto label_1cf310;
        case 0x1cf314u: goto label_1cf314;
        case 0x1cf318u: goto label_1cf318;
        case 0x1cf31cu: goto label_1cf31c;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf328u: goto label_1cf328;
        case 0x1cf32cu: goto label_1cf32c;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf334u: goto label_1cf334;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf340u: goto label_1cf340;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf348u: goto label_1cf348;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf354u: goto label_1cf354;
        case 0x1cf358u: goto label_1cf358;
        case 0x1cf35cu: goto label_1cf35c;
        case 0x1cf360u: goto label_1cf360;
        case 0x1cf364u: goto label_1cf364;
        case 0x1cf368u: goto label_1cf368;
        case 0x1cf36cu: goto label_1cf36c;
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf378u: goto label_1cf378;
        case 0x1cf37cu: goto label_1cf37c;
        case 0x1cf380u: goto label_1cf380;
        case 0x1cf384u: goto label_1cf384;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf38cu: goto label_1cf38c;
        case 0x1cf390u: goto label_1cf390;
        case 0x1cf394u: goto label_1cf394;
        case 0x1cf398u: goto label_1cf398;
        case 0x1cf39cu: goto label_1cf39c;
        case 0x1cf3a0u: goto label_1cf3a0;
        case 0x1cf3a4u: goto label_1cf3a4;
        case 0x1cf3a8u: goto label_1cf3a8;
        case 0x1cf3acu: goto label_1cf3ac;
        case 0x1cf3b0u: goto label_1cf3b0;
        case 0x1cf3b4u: goto label_1cf3b4;
        case 0x1cf3b8u: goto label_1cf3b8;
        case 0x1cf3bcu: goto label_1cf3bc;
        case 0x1cf3c0u: goto label_1cf3c0;
        case 0x1cf3c4u: goto label_1cf3c4;
        case 0x1cf3c8u: goto label_1cf3c8;
        case 0x1cf3ccu: goto label_1cf3cc;
        case 0x1cf3d0u: goto label_1cf3d0;
        case 0x1cf3d4u: goto label_1cf3d4;
        case 0x1cf3d8u: goto label_1cf3d8;
        case 0x1cf3dcu: goto label_1cf3dc;
        case 0x1cf3e0u: goto label_1cf3e0;
        case 0x1cf3e4u: goto label_1cf3e4;
        case 0x1cf3e8u: goto label_1cf3e8;
        case 0x1cf3ecu: goto label_1cf3ec;
        case 0x1cf3f0u: goto label_1cf3f0;
        case 0x1cf3f4u: goto label_1cf3f4;
        case 0x1cf3f8u: goto label_1cf3f8;
        case 0x1cf3fcu: goto label_1cf3fc;
        case 0x1cf400u: goto label_1cf400;
        case 0x1cf404u: goto label_1cf404;
        case 0x1cf408u: goto label_1cf408;
        case 0x1cf40cu: goto label_1cf40c;
        case 0x1cf410u: goto label_1cf410;
        case 0x1cf414u: goto label_1cf414;
        case 0x1cf418u: goto label_1cf418;
        case 0x1cf41cu: goto label_1cf41c;
        case 0x1cf420u: goto label_1cf420;
        case 0x1cf424u: goto label_1cf424;
        case 0x1cf428u: goto label_1cf428;
        case 0x1cf42cu: goto label_1cf42c;
        case 0x1cf430u: goto label_1cf430;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf438u: goto label_1cf438;
        case 0x1cf43cu: goto label_1cf43c;
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4f4u: goto label_1cf4f4;
        case 0x1cf4f8u: goto label_1cf4f8;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf500u: goto label_1cf500;
        case 0x1cf504u: goto label_1cf504;
        case 0x1cf508u: goto label_1cf508;
        case 0x1cf50cu: goto label_1cf50c;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf518u: goto label_1cf518;
        case 0x1cf51cu: goto label_1cf51c;
        case 0x1cf520u: goto label_1cf520;
        case 0x1cf524u: goto label_1cf524;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf52cu: goto label_1cf52c;
        case 0x1cf530u: goto label_1cf530;
        case 0x1cf534u: goto label_1cf534;
        case 0x1cf538u: goto label_1cf538;
        case 0x1cf53cu: goto label_1cf53c;
        case 0x1cf540u: goto label_1cf540;
        case 0x1cf544u: goto label_1cf544;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf54cu: goto label_1cf54c;
        case 0x1cf550u: goto label_1cf550;
        case 0x1cf554u: goto label_1cf554;
        case 0x1cf558u: goto label_1cf558;
        case 0x1cf55cu: goto label_1cf55c;
        case 0x1cf560u: goto label_1cf560;
        case 0x1cf564u: goto label_1cf564;
        case 0x1cf568u: goto label_1cf568;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf570u: goto label_1cf570;
        case 0x1cf574u: goto label_1cf574;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf57cu: goto label_1cf57c;
        case 0x1cf580u: goto label_1cf580;
        case 0x1cf584u: goto label_1cf584;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf58cu: goto label_1cf58c;
        case 0x1cf590u: goto label_1cf590;
        case 0x1cf594u: goto label_1cf594;
        case 0x1cf598u: goto label_1cf598;
        case 0x1cf59cu: goto label_1cf59c;
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5a4u: goto label_1cf5a4;
        case 0x1cf5a8u: goto label_1cf5a8;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5b0u: goto label_1cf5b0;
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5b8u: goto label_1cf5b8;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c4u: goto label_1cf5c4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5ccu: goto label_1cf5cc;
        case 0x1cf5d0u: goto label_1cf5d0;
        case 0x1cf5d4u: goto label_1cf5d4;
        case 0x1cf5d8u: goto label_1cf5d8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5e0u: goto label_1cf5e0;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5e8u: goto label_1cf5e8;
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf5f4u: goto label_1cf5f4;
        case 0x1cf5f8u: goto label_1cf5f8;
        case 0x1cf5fcu: goto label_1cf5fc;
        case 0x1cf600u: goto label_1cf600;
        case 0x1cf604u: goto label_1cf604;
        case 0x1cf608u: goto label_1cf608;
        case 0x1cf60cu: goto label_1cf60c;
        case 0x1cf610u: goto label_1cf610;
        case 0x1cf614u: goto label_1cf614;
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf61cu: goto label_1cf61c;
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf62cu: goto label_1cf62c;
        case 0x1cf630u: goto label_1cf630;
        case 0x1cf634u: goto label_1cf634;
        case 0x1cf638u: goto label_1cf638;
        case 0x1cf63cu: goto label_1cf63c;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf644u: goto label_1cf644;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf64cu: goto label_1cf64c;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf654u: goto label_1cf654;
        case 0x1cf658u: goto label_1cf658;
        case 0x1cf65cu: goto label_1cf65c;
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        case 0x1cf710u: goto label_1cf710;
        case 0x1cf714u: goto label_1cf714;
        case 0x1cf718u: goto label_1cf718;
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf720u: goto label_1cf720;
        case 0x1cf724u: goto label_1cf724;
        case 0x1cf728u: goto label_1cf728;
        case 0x1cf72cu: goto label_1cf72c;
        case 0x1cf730u: goto label_1cf730;
        case 0x1cf734u: goto label_1cf734;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7bcu: goto label_1cf7bc;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf7c8u: goto label_1cf7c8;
        case 0x1cf7ccu: goto label_1cf7cc;
        case 0x1cf7d0u: goto label_1cf7d0;
        case 0x1cf7d4u: goto label_1cf7d4;
        case 0x1cf7d8u: goto label_1cf7d8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e0u: goto label_1cf7e0;
        case 0x1cf7e4u: goto label_1cf7e4;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7ecu: goto label_1cf7ec;
        case 0x1cf7f0u: goto label_1cf7f0;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf7f8u: goto label_1cf7f8;
        case 0x1cf7fcu: goto label_1cf7fc;
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf804u: goto label_1cf804;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf810u: goto label_1cf810;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf818u: goto label_1cf818;
        case 0x1cf81cu: goto label_1cf81c;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf828u: goto label_1cf828;
        case 0x1cf82cu: goto label_1cf82c;
        case 0x1cf830u: goto label_1cf830;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf840u: goto label_1cf840;
        case 0x1cf844u: goto label_1cf844;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf85cu: goto label_1cf85c;
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf864u: goto label_1cf864;
        case 0x1cf868u: goto label_1cf868;
        case 0x1cf86cu: goto label_1cf86c;
        case 0x1cf870u: goto label_1cf870;
        case 0x1cf874u: goto label_1cf874;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf87cu: goto label_1cf87c;
        case 0x1cf880u: goto label_1cf880;
        case 0x1cf884u: goto label_1cf884;
        case 0x1cf888u: goto label_1cf888;
        case 0x1cf88cu: goto label_1cf88c;
        case 0x1cf890u: goto label_1cf890;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf89cu: goto label_1cf89c;
        case 0x1cf8a0u: goto label_1cf8a0;
        case 0x1cf8a4u: goto label_1cf8a4;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8acu: goto label_1cf8ac;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8b4u: goto label_1cf8b4;
        case 0x1cf8b8u: goto label_1cf8b8;
        case 0x1cf8bcu: goto label_1cf8bc;
        case 0x1cf8c0u: goto label_1cf8c0;
        case 0x1cf8c4u: goto label_1cf8c4;
        case 0x1cf8c8u: goto label_1cf8c8;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d0u: goto label_1cf8d0;
        case 0x1cf8d4u: goto label_1cf8d4;
        case 0x1cf8d8u: goto label_1cf8d8;
        case 0x1cf8dcu: goto label_1cf8dc;
        case 0x1cf8e0u: goto label_1cf8e0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8e8u: goto label_1cf8e8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf8f0u: goto label_1cf8f0;
        case 0x1cf8f4u: goto label_1cf8f4;
        case 0x1cf8f8u: goto label_1cf8f8;
        case 0x1cf8fcu: goto label_1cf8fc;
        case 0x1cf900u: goto label_1cf900;
        case 0x1cf904u: goto label_1cf904;
        case 0x1cf908u: goto label_1cf908;
        case 0x1cf90cu: goto label_1cf90c;
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf914u: goto label_1cf914;
        case 0x1cf918u: goto label_1cf918;
        case 0x1cf91cu: goto label_1cf91c;
        case 0x1cf920u: goto label_1cf920;
        case 0x1cf924u: goto label_1cf924;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf92cu: goto label_1cf92c;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf934u: goto label_1cf934;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf940u: goto label_1cf940;
        case 0x1cf944u: goto label_1cf944;
        case 0x1cf948u: goto label_1cf948;
        case 0x1cf94cu: goto label_1cf94c;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf958u: goto label_1cf958;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf960u: goto label_1cf960;
        case 0x1cf964u: goto label_1cf964;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf96cu: goto label_1cf96c;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf978u: goto label_1cf978;
        case 0x1cf97cu: goto label_1cf97c;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf984u: goto label_1cf984;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf98cu: goto label_1cf98c;
        case 0x1cf990u: goto label_1cf990;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf998u: goto label_1cf998;
        case 0x1cf99cu: goto label_1cf99c;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9a4u: goto label_1cf9a4;
        case 0x1cf9a8u: goto label_1cf9a8;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9b0u: goto label_1cf9b0;
        case 0x1cf9b4u: goto label_1cf9b4;
        case 0x1cf9b8u: goto label_1cf9b8;
        case 0x1cf9bcu: goto label_1cf9bc;
        case 0x1cf9c0u: goto label_1cf9c0;
        case 0x1cf9c4u: goto label_1cf9c4;
        case 0x1cf9c8u: goto label_1cf9c8;
        case 0x1cf9ccu: goto label_1cf9cc;
        case 0x1cf9d0u: goto label_1cf9d0;
        case 0x1cf9d4u: goto label_1cf9d4;
        default: return;
    }

label_1cf208:
    if (ctx->pc == 0x1CF208u) {
        ctx->pc = 0x1CF20Cu;
        goto label_1cf20c;
    }
    ctx->pc = 0x1CF204u;
    {
        const bool branch_taken_0x1cf204 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cf204) {
            ctx->pc = 0x1CF218u;
            goto label_1cf218;
        }
    }
    ctx->pc = 0x1CF20Cu;
label_1cf20c:
    // 0x1cf20c: 0x95490080  lhu         $t1, 0x80($t2)
    ctx->pc = 0x1cf20cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 128)));
label_1cf210:
    // 0x1cf210: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cf214:
    if (ctx->pc == 0x1CF214u) {
        ctx->pc = 0x1CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF210u;
        // 0x1cf214: 0xa5490090  sh          $t1, 0x90($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF218u;
        goto label_1cf218;
    }
    ctx->pc = 0x1CF210u;
    {
        const bool branch_taken_0x1cf210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF210u;
        // 0x1cf214: 0xa5490090  sh          $t1, 0x90($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf210) {
            ctx->pc = 0x1CF284u;
            goto label_1cf284;
        }
    }
    ctx->pc = 0x1CF218u;
label_1cf218:
    // 0x1cf218: 0x854e0080  lh          $t6, 0x80($t2)
    ctx->pc = 0x1cf218u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 128)));
label_1cf21c:
    // 0x1cf21c: 0xd4840  sll         $t1, $t5, 1
    ctx->pc = 0x1cf21cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_1cf220:
    // 0x1cf220: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_1cf224:
    // 0x1cf224: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1cf228:
    // 0x1cf228: 0x25300100  addiu       $s0, $t1, 0x100
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
label_1cf22c:
    // 0x1cf22c: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x1cf22cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1cf230:
    // 0x1cf230: 0x2609000c  addiu       $t1, $s0, 0xC
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1cf234:
    // 0x1cf234: 0x25cf00c0  addiu       $t7, $t6, 0xC0
    ctx->pc = 0x1cf234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
label_1cf238:
    // 0x1cf238: 0x25ae0008  addiu       $t6, $t5, 0x8
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1cf23c:
    // 0x1cf23c: 0xa54f0090  sh          $t7, 0x90($t2)
    ctx->pc = 0x1cf23cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 15));
label_1cf240:
    // 0x1cf240: 0xa54e0078  sh          $t6, 0x78($t2)
    ctx->pc = 0x1cf240u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 120), (uint16_t)GPR_U32(ctx, 14));
label_1cf244:
    // 0x1cf244: 0x10683c  dsll32      $t5, $s0, 0
    ctx->pc = 0x1cf244u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 16) << (32 + 0));
label_1cf248:
    // 0x1cf248: 0x97100  sll         $t6, $t1, 4
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1cf24c:
    // 0x1cf24c: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1cf24cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_1cf250:
    // 0x1cf250: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1cf254:
    // 0x1cf254: 0xd6938  dsll        $t5, $t5, 4
    ctx->pc = 0x1cf254u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 4);
label_1cf258:
    // 0x1cf258: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1cf258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_1cf25c:
    // 0x1cf25c: 0x35ad000a  ori         $t5, $t5, 0xA
    ctx->pc = 0x1cf25cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)10);
label_1cf260:
    // 0x1cf260: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1cf260u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_1cf264:
    // 0x1cf264: 0xa543007a  sh          $v1, 0x7A($t2)
    ctx->pc = 0x1cf264u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 122), (uint16_t)GPR_U32(ctx, 3));
label_1cf268:
    // 0x1cf268: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_1cf26c:
    // 0x1cf26c: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1cf26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
label_1cf270:
    // 0x1cf270: 0xa54e0088  sh          $t6, 0x88($t2)
    ctx->pc = 0x1cf270u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 136), (uint16_t)GPR_U32(ctx, 14));
label_1cf274:
    // 0x1cf274: 0x1a94825  or          $t1, $t5, $t1
    ctx->pc = 0x1cf274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
label_1cf278:
    // 0x1cf278: 0xa542008a  sh          $v0, 0x8A($t2)
    ctx->pc = 0x1cf278u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 138), (uint16_t)GPR_U32(ctx, 2));
label_1cf27c:
    // 0x1cf27c: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x1cf27cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
label_1cf280:
    // 0x1cf280: 0xfd490040  sd          $t1, 0x40($t2)
    ctx->pc = 0x1cf280u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 9));
label_1cf284:
    // 0x1cf284: 0x0  nop
    ctx->pc = 0x1cf284u;
    // NOP
label_1cf288:
    // 0x1cf288: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf28c:
    // 0x1cf28c: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x1cf28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cf290:
    // 0x1cf290: 0x857c2  srl         $t2, $t0, 31
    ctx->pc = 0x1cf290u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1cf294:
    // 0x1cf294: 0x28e90002  slti        $t1, $a3, 0x2
    ctx->pc = 0x1cf294u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf298:
    // 0x1cf298: 0x4010  mfhi        $t0
    ctx->pc = 0x1cf298u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1cf29c:
    // 0x1cf29c: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x1cf29cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_1cf2a0:
    // 0x1cf2a0: 0x1520ffc0  bnez        $t1, . + 4 + (-0x40 << 2)
label_1cf2a4:
    if (ctx->pc == 0x1CF2A4u) {
        ctx->pc = 0x1CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2A0u;
        // 0x1cf2a4: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2A8u;
        goto label_1cf2a8;
    }
    ctx->pc = 0x1CF2A0u;
    {
        const bool branch_taken_0x1cf2a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2A0u;
        // 0x1cf2a4: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2a0) {
            ctx->pc = 0x1CF1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1cf1a4; return; }
        }
    }
    ctx->pc = 0x1CF2A8u;
label_1cf2a8:
    // 0x1cf2a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2ac:
    // 0x1cf2ac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1cf2acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2b0:
    // 0x1cf2b0: 0x0  nop
    ctx->pc = 0x1cf2b0u;
    // NOP
label_1cf2b4:
    // 0x1cf2b4: 0x23e9821  addu        $s3, $s1, $fp
    ctx->pc = 0x1cf2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_1cf2b8:
    // 0x1cf2b8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1cf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1cf2bc:
    // 0x1cf2bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1cf2c0:
    // 0x1cf2c0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cf2c4:
    // 0x1cf2c4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1cf2c8:
    if (ctx->pc == 0x1CF2C8u) {
        ctx->pc = 0x1CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C4u;
        // 0x1cf2c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2CCu;
        goto label_1cf2cc;
    }
    ctx->pc = 0x1CF2C4u;
    {
        const bool branch_taken_0x1cf2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C4u;
        // 0x1cf2c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2c4) {
            ctx->pc = 0x1CF34Cu;
            goto label_1cf34c;
        }
    }
    ctx->pc = 0x1CF2CCu;
label_1cf2cc:
    // 0x1cf2cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf2d0:
    // 0x1cf2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf2d4:
    // 0x1cf2d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cf2d8:
    // 0x1cf2d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cf2dc:
    // 0x1cf2dc: 0x24530690  addiu       $s3, $v0, 0x690
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
label_1cf2e0:
    // 0x1cf2e0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1cf2e4:
    // 0x1cf2e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cf2e8:
    if (ctx->pc == 0x1CF2E8u) {
        ctx->pc = 0x1CF2ECu;
        goto label_1cf2ec;
    }
    ctx->pc = 0x1CF2E4u;
    {
        const bool branch_taken_0x1cf2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2e4) {
            ctx->pc = 0x1CF2F4u;
            goto label_1cf2f4;
        }
    }
    ctx->pc = 0x1CF2ECu;
label_1cf2ec:
    // 0x1cf2ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_1cf2f0:
    if (ctx->pc == 0x1CF2F0u) {
        ctx->pc = 0x1CF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2ECu;
        // 0x1cf2f0: 0xa2600073  sb          $zero, 0x73($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2F4u;
        goto label_1cf2f4;
    }
    ctx->pc = 0x1CF2ECu;
    {
        const bool branch_taken_0x1cf2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2ECu;
        // 0x1cf2f0: 0xa2600073  sb          $zero, 0x73($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2ec) {
            ctx->pc = 0x1CF320u;
            goto label_1cf320;
        }
    }
    ctx->pc = 0x1CF2F4u;
label_1cf2f4:
    // 0x1cf2f4: 0x0  nop
    ctx->pc = 0x1cf2f4u;
    // NOP
label_1cf2f8:
    // 0x1cf2f8: 0xc070834  jal         func_1C20D0
label_1cf2fc:
    if (ctx->pc == 0x1CF2FCu) {
        ctx->pc = 0x1CF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F8u;
        // 0x1cf2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF300u;
        goto label_1cf300;
    }
    ctx->pc = 0x1CF2F8u;
    SET_GPR_U32(ctx, 31, 0x1CF300u);
    ctx->pc = 0x1CF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2F8u;
    // 0x1cf2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CF300u;
label_1cf300:
    // 0x1cf300: 0xfe620060  sd          $v0, 0x60($s3)
    ctx->pc = 0x1cf300u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 2));
label_1cf304:
    // 0x1cf304: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf308:
    // 0x1cf308: 0xa2630070  sb          $v1, 0x70($s3)
    ctx->pc = 0x1cf308u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 3));
label_1cf30c:
    // 0x1cf30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cf310:
    // 0x1cf310: 0xa2630071  sb          $v1, 0x71($s3)
    ctx->pc = 0x1cf310u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 3));
label_1cf314:
    // 0x1cf314: 0xa2630072  sb          $v1, 0x72($s3)
    ctx->pc = 0x1cf314u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 3));
label_1cf318:
    // 0x1cf318: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cf318u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cf31c:
    // 0x1cf31c: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cf320:
    // 0x1cf320: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1cf324:
    // 0x1cf324: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1cf324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cf328:
    // 0x1cf328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf32c:
    // 0x1cf32c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf330:
    // 0x1cf330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf334:
    // 0x1cf334: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1cf338:
    // 0x1cf338: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cf33c:
    // 0x1cf33c: 0x94620090  lhu         $v0, 0x90($v1)
    ctx->pc = 0x1cf33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1cf340:
    // 0x1cf340: 0xa46200d8  sh          $v0, 0xD8($v1)
    ctx->pc = 0x1cf340u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 216), (uint16_t)GPR_U32(ctx, 2));
label_1cf344:
    // 0x1cf344: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1cf348:
    if (ctx->pc == 0x1CF348u) {
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF344u;
        // 0x1cf348: 0xa46200a8  sh          $v0, 0xA8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF34Cu;
        goto label_1cf34c;
    }
    ctx->pc = 0x1CF344u;
    {
        const bool branch_taken_0x1cf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF344u;
        // 0x1cf348: 0xa46200a8  sh          $v0, 0xA8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf344) {
            ctx->pc = 0x1CF534u;
            goto label_1cf534;
        }
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0x0  nop
    ctx->pc = 0x1cf34cu;
    // NOP
label_1cf350:
    // 0x1cf350: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1cf354:
    // 0x1cf354: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf358:
    // 0x1cf358: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1cf35c:
    // 0x1cf35c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf360:
    // 0x1cf360: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cf364:
    // 0x1cf364: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cf364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cf368:
    // 0x1cf368: 0xc070834  jal         func_1C20D0
label_1cf36c:
    if (ctx->pc == 0x1CF36Cu) {
        ctx->pc = 0x1CF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF368u;
        // 0x1cf36c: 0x24540690  addiu       $s4, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF370u;
        goto label_1cf370;
    }
    ctx->pc = 0x1CF368u;
    SET_GPR_U32(ctx, 31, 0x1CF370u);
    ctx->pc = 0x1CF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF368u;
    // 0x1cf36c: 0x24540690  addiu       $s4, $v0, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CF370u;
label_1cf370:
    // 0x1cf370: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x1cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
label_1cf374:
    // 0x1cf374: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1cf378:
    // 0x1cf378: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1cf37c:
    if (ctx->pc == 0x1CF37Cu) {
        ctx->pc = 0x1CF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF378u;
        // 0x1cf37c: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF380u;
        goto label_1cf380;
    }
    ctx->pc = 0x1CF378u;
    {
        const bool branch_taken_0x1cf378 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF378u;
        // 0x1cf37c: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf378) {
            ctx->pc = 0x1CF38Cu;
            goto label_1cf38c;
        }
    }
    ctx->pc = 0x1CF380u;
label_1cf380:
    // 0x1cf380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cf384:
    if (ctx->pc == 0x1CF384u) {
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF380u;
        // 0x1cf384: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF388u;
        goto label_1cf388;
    }
    ctx->pc = 0x1CF380u;
    {
        const bool branch_taken_0x1cf380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF380u;
        // 0x1cf384: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf380) {
            ctx->pc = 0x1CF390u;
            goto label_1cf390;
        }
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1cf38c:
    // 0x1cf38c: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1cf38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_1cf390:
    // 0x1cf390: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1cf394:
    if (ctx->pc == 0x1CF394u) {
        ctx->pc = 0x1CF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF390u;
        // 0x1cf394: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF398u;
        goto label_1cf398;
    }
    ctx->pc = 0x1CF390u;
    {
        const bool branch_taken_0x1cf390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF390u;
        // 0x1cf394: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf390) {
            ctx->pc = 0x1CF39Cu;
            goto label_1cf39c;
        }
    }
    ctx->pc = 0x1CF398u;
label_1cf398:
    // 0x1cf398: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf39c:
    // 0x1cf39c: 0x0  nop
    ctx->pc = 0x1cf39cu;
    // NOP
label_1cf3a0:
    // 0x1cf3a0: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_1cf3a4:
    if (ctx->pc == 0x1CF3A4u) {
        ctx->pc = 0x1CF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A0u;
        // 0x1cf3a4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3A8u;
        goto label_1cf3a8;
    }
    ctx->pc = 0x1CF3A0u;
    {
        const bool branch_taken_0x1cf3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A0u;
        // 0x1cf3a4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a0) {
            ctx->pc = 0x1CF400u;
            goto label_1cf400;
        }
    }
    ctx->pc = 0x1CF3A8u;
label_1cf3a8:
    // 0x1cf3a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf3ac:
    if (ctx->pc == 0x1CF3ACu) {
        ctx->pc = 0x1CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A8u;
        // 0x1cf3ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3B0u;
        goto label_1cf3b0;
    }
    ctx->pc = 0x1CF3A8u;
    {
        const bool branch_taken_0x1cf3a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A8u;
        // 0x1cf3ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a8) {
            ctx->pc = 0x1CF3B8u;
            goto label_1cf3b8;
        }
    }
    ctx->pc = 0x1CF3B0u;
label_1cf3b0:
    // 0x1cf3b0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf3b4:
    // 0x1cf3b4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf3b8:
    // 0x1cf3b8: 0x2475007c  addiu       $s5, $v1, 0x7C
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
label_1cf3bc:
    // 0x1cf3bc: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1cf3c0:
    // 0x1cf3c0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf3c4:
    if (ctx->pc == 0x1CF3C4u) {
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C0u;
        // 0x1cf3c4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3C8u;
        goto label_1cf3c8;
    }
    ctx->pc = 0x1CF3C0u;
    {
        const bool branch_taken_0x1cf3c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C0u;
        // 0x1cf3c4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c0) {
            ctx->pc = 0x1CF3D0u;
            goto label_1cf3d0;
        }
    }
    ctx->pc = 0x1CF3C8u;
label_1cf3c8:
    // 0x1cf3c8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf3cc:
    // 0x1cf3cc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf3d0:
    // 0x1cf3d0: 0x24770040  addiu       $s7, $v1, 0x40
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1cf3d4:
    // 0x1cf3d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf3d8:
    // 0x1cf3d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf3dc:
    // 0x1cf3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf3e0:
    // 0x1cf3e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf3e4:
    // 0x1cf3e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf3e8:
    // 0x1cf3e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf3ec:
    if (ctx->pc == 0x1CF3ECu) {
        ctx->pc = 0x1CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3E8u;
        // 0x1cf3ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3F0u;
        goto label_1cf3f0;
    }
    ctx->pc = 0x1CF3E8u;
    {
        const bool branch_taken_0x1cf3e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3E8u;
        // 0x1cf3ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3e8) {
            ctx->pc = 0x1CF3F8u;
            goto label_1cf3f8;
        }
    }
    ctx->pc = 0x1CF3F0u;
label_1cf3f0:
    // 0x1cf3f0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf3f4:
    // 0x1cf3f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf3f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf3f8:
    // 0x1cf3f8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1cf3fc:
    if (ctx->pc == 0x1CF3FCu) {
        ctx->pc = 0x1CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F8u;
        // 0x1cf3fc: 0x2456000c  addiu       $s6, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF400u;
        goto label_1cf400;
    }
    ctx->pc = 0x1CF3F8u;
    {
        const bool branch_taken_0x1cf3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F8u;
        // 0x1cf3fc: 0x2456000c  addiu       $s6, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3f8) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF400u;
label_1cf400:
    // 0x1cf400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf404:
    // 0x1cf404: 0x1603001b  bne         $s0, $v1, . + 4 + (0x1B << 2)
label_1cf408:
    if (ctx->pc == 0x1CF408u) {
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF40Cu;
        goto label_1cf40c;
    }
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF474u;
            goto label_1cf474;
        }
    }
    ctx->pc = 0x1CF40Cu;
label_1cf40c:
    // 0x1cf40c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf410:
    // 0x1cf410: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf414:
    // 0x1cf414: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cf418:
    // 0x1cf418: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf41c:
    // 0x1cf41c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf420:
    if (ctx->pc == 0x1CF420u) {
        ctx->pc = 0x1CF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF41Cu;
        // 0x1cf420: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF424u;
        goto label_1cf424;
    }
    ctx->pc = 0x1CF41Cu;
    {
        const bool branch_taken_0x1cf41c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF41Cu;
        // 0x1cf420: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf41c) {
            ctx->pc = 0x1CF42Cu;
            goto label_1cf42c;
        }
    }
    ctx->pc = 0x1CF424u;
label_1cf424:
    // 0x1cf424: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf428:
    // 0x1cf428: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf42c:
    // 0x1cf42c: 0x2475001c  addiu       $s5, $v1, 0x1C
    ctx->pc = 0x1cf42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1cf430:
    // 0x1cf430: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf434:
    // 0x1cf434: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf438:
    if (ctx->pc == 0x1CF438u) {
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF43Cu;
        goto label_1cf43c;
    }
    ctx->pc = 0x1CF434u;
    {
        const bool branch_taken_0x1cf434 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf434) {
            ctx->pc = 0x1CF444u;
            goto label_1cf444;
        }
    }
    ctx->pc = 0x1CF43Cu;
label_1cf43c:
    // 0x1cf43c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf440:
    // 0x1cf440: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf444:
    // 0x1cf444: 0x24770078  addiu       $s7, $v1, 0x78
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cf448:
    // 0x1cf448: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf44c:
    // 0x1cf44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf450:
    // 0x1cf450: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf454:
    // 0x1cf454: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf458:
    // 0x1cf458: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf45c:
    // 0x1cf45c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf460:
    if (ctx->pc == 0x1CF460u) {
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF464u;
        goto label_1cf464;
    }
    ctx->pc = 0x1CF45Cu;
    {
        const bool branch_taken_0x1cf45c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf45c) {
            ctx->pc = 0x1CF46Cu;
            goto label_1cf46c;
        }
    }
    ctx->pc = 0x1CF464u;
label_1cf464:
    // 0x1cf464: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf468:
    // 0x1cf468: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf46c:
    // 0x1cf46c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cf470:
    if (ctx->pc == 0x1CF470u) {
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0x24560014  addiu       $s6, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF474u;
        goto label_1cf474;
    }
    ctx->pc = 0x1CF46Cu;
    {
        const bool branch_taken_0x1cf46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0x24560014  addiu       $s6, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf46c) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF474u;
label_1cf474:
    // 0x1cf474: 0x0  nop
    ctx->pc = 0x1cf474u;
    // NOP
label_1cf478:
    // 0x1cf478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf47c:
    // 0x1cf47c: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
label_1cf480:
    if (ctx->pc == 0x1CF480u) {
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF484u;
        goto label_1cf484;
    }
    ctx->pc = 0x1CF47Cu;
    {
        const bool branch_taken_0x1cf47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf47c) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF484u;
label_1cf484:
    // 0x1cf484: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf488:
    if (ctx->pc == 0x1CF488u) {
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF48Cu;
        goto label_1cf48c;
    }
    ctx->pc = 0x1CF484u;
    {
        const bool branch_taken_0x1cf484 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf484) {
            ctx->pc = 0x1CF494u;
            goto label_1cf494;
        }
    }
    ctx->pc = 0x1CF48Cu;
label_1cf48c:
    // 0x1cf48c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf490:
    // 0x1cf490: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf494:
    // 0x1cf494: 0x24750078  addiu       $s5, $v1, 0x78
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cf498:
    // 0x1cf498: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf49c:
    // 0x1cf49c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf4a0:
    // 0x1cf4a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf4a4:
    // 0x1cf4a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cf4a8:
    // 0x1cf4a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf4ac:
    // 0x1cf4ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf4b0:
    if (ctx->pc == 0x1CF4B0u) {
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4B4u;
        goto label_1cf4b4;
    }
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1CF4BCu;
            goto label_1cf4bc;
        }
    }
    ctx->pc = 0x1CF4B4u;
label_1cf4b4:
    // 0x1cf4b4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf4b8:
    // 0x1cf4b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf4bc:
    // 0x1cf4bc: 0x24770014  addiu       $s7, $v1, 0x14
    ctx->pc = 0x1cf4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1cf4c0:
    // 0x1cf4c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf4c4:
    // 0x1cf4c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf4c8:
    // 0x1cf4c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf4cc:
    // 0x1cf4cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf4d0:
    if (ctx->pc == 0x1CF4D0u) {
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4D4u;
        goto label_1cf4d4;
    }
    ctx->pc = 0x1CF4CCu;
    {
        const bool branch_taken_0x1cf4cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4cc) {
            ctx->pc = 0x1CF4DCu;
            goto label_1cf4dc;
        }
    }
    ctx->pc = 0x1CF4D4u;
label_1cf4d4:
    // 0x1cf4d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf4d8:
    // 0x1cf4d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf4dc:
    // 0x1cf4dc: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1cf4e0:
    // 0x1cf4e0: 0xa2950070  sb          $s5, 0x70($s4)
    ctx->pc = 0x1cf4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 21));
label_1cf4e4:
    // 0x1cf4e4: 0xa2970071  sb          $s7, 0x71($s4)
    ctx->pc = 0x1cf4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 23));
label_1cf4e8:
    // 0x1cf4e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf4ec:
    // 0x1cf4ec: 0xa2960072  sb          $s6, 0x72($s4)
    ctx->pc = 0x1cf4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 22));
label_1cf4f0:
    // 0x1cf4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cf4f4:
    // 0x1cf4f4: 0xa2830073  sb          $v1, 0x73($s4)
    ctx->pc = 0x1cf4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cf4f8:
    // 0x1cf4f8: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1cf4fc:
    // 0x1cf4fc: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1cf4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_1cf500:
    // 0x1cf500: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1cf504:
    // 0x1cf504: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cf508:
    // 0x1cf508: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1cf50c:
    // 0x1cf50c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf510:
    // 0x1cf510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cf510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cf514:
    // 0x1cf514: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cf518:
    // 0x1cf518: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1cf51c:
    // 0x1cf51c: 0x84830090  lh          $v1, 0x90($a0)
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
label_1cf520:
    // 0x1cf520: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf524:
    // 0x1cf524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1cf528:
    // 0x1cf528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf52c:
    // 0x1cf52c: 0xa48200d8  sh          $v0, 0xD8($a0)
    ctx->pc = 0x1cf52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 216), (uint16_t)GPR_U32(ctx, 2));
label_1cf530:
    // 0x1cf530: 0xa48200a8  sh          $v0, 0xA8($a0)
    ctx->pc = 0x1cf530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 2));
label_1cf534:
    // 0x1cf534: 0x0  nop
    ctx->pc = 0x1cf534u;
    // NOP
label_1cf538:
    // 0x1cf538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf53c:
    // 0x1cf53c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1cf53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cf540:
    // 0x1cf540: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
label_1cf544:
    if (ctx->pc == 0x1CF544u) {
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF540u;
        // 0x1cf544: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF548u;
        goto label_1cf548;
    }
    ctx->pc = 0x1CF540u;
    {
        const bool branch_taken_0x1cf540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF540u;
        // 0x1cf544: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf540) {
            ctx->pc = 0x1CF2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf2b0;
        }
    }
    ctx->pc = 0x1CF548u;
label_1cf548:
    // 0x1cf548: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1cf54c:
    // 0x1cf54c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cf550:
    if (ctx->pc == 0x1CF550u) {
        ctx->pc = 0x1CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF54Cu;
        // 0x1cf550: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF554u;
        goto label_1cf554;
    }
    ctx->pc = 0x1CF54Cu;
    {
        const bool branch_taken_0x1cf54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF54Cu;
        // 0x1cf550: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf54c) {
            ctx->pc = 0x1CF564u;
            goto label_1cf564;
        }
    }
    ctx->pc = 0x1CF554u;
label_1cf554:
    // 0x1cf554: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf558:
    // 0x1cf558: 0xc070e2c  jal         func_1C38B0
label_1cf55c:
    if (ctx->pc == 0x1CF55Cu) {
        ctx->pc = 0x1CF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF558u;
        // 0x1cf55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF560u;
        goto label_1cf560;
    }
    ctx->pc = 0x1CF558u;
    SET_GPR_U32(ctx, 31, 0x1CF560u);
    ctx->pc = 0x1CF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF558u;
    // 0x1cf55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1CF560u;
label_1cf560:
    // 0x1cf560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1cf564:
    // 0x1cf564: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1cf568:
    // 0x1cf568: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1cf56c:
    // 0x1cf56c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1cf570:
    // 0x1cf570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cf574:
    // 0x1cf574: 0x2406013a  addiu       $a2, $zero, 0x13A
    ctx->pc = 0x1cf574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_1cf578:
    // 0x1cf578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf57c:
    // 0x1cf57c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf580:
    // 0x1cf580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cf580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf584:
    // 0x1cf584: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cf588:
    // 0x1cf588: 0xc066c72  jal         func_19B1C8
label_1cf58c:
    if (ctx->pc == 0x1CF58Cu) {
        ctx->pc = 0x1CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF588u;
        // 0x1cf58c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF590u;
        goto label_1cf590;
    }
    ctx->pc = 0x1CF588u;
    SET_GPR_U32(ctx, 31, 0x1CF590u);
    ctx->pc = 0x1CF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF588u;
    // 0x1cf58c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1CF588u, 0x1CF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF590u;
label_1cf590:
    // 0x1cf590: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cf590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1cf594:
    // 0x1cf594: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cf594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf598:
    // 0x1cf598: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cf598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cf59c:
    // 0x1cf59c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cf59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cf5a0:
    // 0x1cf5a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cf5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cf5a4:
    // 0x1cf5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cf5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cf5a8:
    // 0x1cf5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cf5ac:
    // 0x1cf5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf5b0:
    // 0x1cf5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf5b4:
    // 0x1cf5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf5b8:
    // 0x1cf5b8: 0x3e00008  jr          $ra
label_1cf5bc:
    if (ctx->pc == 0x1CF5BCu) {
        ctx->pc = 0x1CF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B8u;
        // 0x1cf5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF5C0u;
        goto label_1cf5c0;
    }
    ctx->pc = 0x1CF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B8u;
        // 0x1cf5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF5C0u;
label_1cf5c0:
    // 0x1cf5c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cf5c4:
    // 0x1cf5c4: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1cf5c8:
    // 0x1cf5c8: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cf5cc:
    // 0x1cf5cc: 0x24c603c0  addiu       $a2, $a2, 0x3C0
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
label_1cf5d0:
    // 0x1cf5d0: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1cf5d4:
    // 0x1cf5d4: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1cf5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1cf5d8:
    // 0x1cf5d8: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1cf5dc:
    // 0x1cf5dc: 0x24a503c4  addiu       $a1, $a1, 0x3C4
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 964));
label_1cf5e0:
    // 0x1cf5e0: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1cf5e4:
    // 0x1cf5e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cf5e8:
    // 0x1cf5e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cf5ec:
    // 0x1cf5ec: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1cf5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf5f0:
    // 0x1cf5f0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1cf5f4:
    // 0x1cf5f4: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1cf5f8:
    // 0x1cf5f8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_1cf5fc:
    // 0x1cf5fc: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1cf600:
    // 0x1cf600: 0x24e77a80  addiu       $a3, $a3, 0x7A80
    ctx->pc = 0x1cf600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31360));
label_1cf604:
    // 0x1cf604: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_1cf608:
    // 0x1cf608: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1cf60c:
    // 0x1cf60c: 0x84a70220  lh          $a3, 0x220($a1)
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_1cf610:
    // 0x1cf610: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x1cf610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf614:
    // 0x1cf614: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf618:
    if (ctx->pc == 0x1CF618u) {
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF61Cu;
        goto label_1cf61c;
    }
    ctx->pc = 0x1CF614u;
    {
        const bool branch_taken_0x1cf614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf614) {
            ctx->pc = 0x1CF624u;
            goto label_1cf624;
        }
    }
    ctx->pc = 0x1CF61Cu;
label_1cf61c:
    // 0x1cf61c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf620:
    if (ctx->pc == 0x1CF620u) {
        ctx->pc = 0x1CF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF61Cu;
        // 0x1cf620: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF624u;
        goto label_1cf624;
    }
    ctx->pc = 0x1CF61Cu;
    {
        const bool branch_taken_0x1cf61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF61Cu;
        // 0x1cf620: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf61c) {
            ctx->pc = 0x1CF62Cu;
            goto label_1cf62c;
        }
    }
    ctx->pc = 0x1CF624u;
label_1cf624:
    // 0x1cf624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf628:
    // 0x1cf628: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_1cf62c:
    // 0x1cf62c: 0x84a7021c  lh          $a3, 0x21C($a1)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
label_1cf630:
    // 0x1cf630: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cf634:
    // 0x1cf634: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x1cf634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf638:
    // 0x1cf638: 0xe1480a  movz        $t1, $a3, $at
    ctx->pc = 0x1cf638u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
label_1cf63c:
    // 0x1cf63c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1cf63cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1cf640:
    // 0x1cf640: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1cf640u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1cf644:
    // 0x1cf644: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cf648:
    // 0x1cf648: 0x10e9000a  beq         $a3, $t1, . + 4 + (0xA << 2)
label_1cf64c:
    if (ctx->pc == 0x1CF64Cu) {
        ctx->pc = 0x1CF650u;
        goto label_1cf650;
    }
    ctx->pc = 0x1CF648u;
    {
        const bool branch_taken_0x1cf648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x1cf648) {
            ctx->pc = 0x1CF674u;
            goto label_1cf674;
        }
    }
    ctx->pc = 0x1CF650u;
label_1cf650:
    // 0x1cf650: 0xe94023  subu        $t0, $a3, $t1
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1cf654:
    // 0x1cf654: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cf658:
    // 0x1cf658: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1cf65c:
    // 0x1cf65c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cf660:
    // 0x1cf660: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf664:
    // 0x1cf664: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cf668:
    // 0x1cf668: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf66c:
    // 0x1cf66c: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf66cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1cf670:
    // 0x1cf670: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf674:
    // 0x1cf674: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cf678:
    // 0x1cf678: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
label_1cf67c:
    if (ctx->pc == 0x1CF67Cu) {
        ctx->pc = 0x1CF680u;
        goto label_1cf680;
    }
    ctx->pc = 0x1CF678u;
    {
        const bool branch_taken_0x1cf678 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1cf678) {
            ctx->pc = 0x1CF688u;
            goto label_1cf688;
        }
    }
    ctx->pc = 0x1CF680u;
label_1cf680:
    // 0x1cf680: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1cf684:
    // 0x1cf684: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf688:
    // 0x1cf688: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x1cf688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
label_1cf68c:
    // 0x1cf68c: 0x84a70252  lh          $a3, 0x252($a1)
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
label_1cf690:
    // 0x1cf690: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x1cf690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf694:
    // 0x1cf694: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf698:
    if (ctx->pc == 0x1CF698u) {
        ctx->pc = 0x1CF69Cu;
        goto label_1cf69c;
    }
    ctx->pc = 0x1CF694u;
    {
        const bool branch_taken_0x1cf694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf694) {
            ctx->pc = 0x1CF6A4u;
            goto label_1cf6a4;
        }
    }
    ctx->pc = 0x1CF69Cu;
label_1cf69c:
    // 0x1cf69c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf6a0:
    if (ctx->pc == 0x1CF6A0u) {
        ctx->pc = 0x1CF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF69Cu;
        // 0x1cf6a0: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6A4u;
        goto label_1cf6a4;
    }
    ctx->pc = 0x1CF69Cu;
    {
        const bool branch_taken_0x1cf69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF69Cu;
        // 0x1cf6a0: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf69c) {
            ctx->pc = 0x1CF6ACu;
            goto label_1cf6ac;
        }
    }
    ctx->pc = 0x1CF6A4u;
label_1cf6a4:
    // 0x1cf6a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf6a8:
    // 0x1cf6a8: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1cf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
label_1cf6ac:
    // 0x1cf6ac: 0x84a70222  lh          $a3, 0x222($a1)
    ctx->pc = 0x1cf6acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
label_1cf6b0:
    // 0x1cf6b0: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cf6b4:
    // 0x1cf6b4: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf6b8:
    // 0x1cf6b8: 0xe1400a  movz        $t0, $a3, $at
    ctx->pc = 0x1cf6b8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_1cf6bc:
    // 0x1cf6bc: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x1cf6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
label_1cf6c0:
    // 0x1cf6c0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cf6c4:
    // 0x1cf6c4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf6c8:
    // 0x1cf6c8: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf6c8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1cf6cc:
    // 0x1cf6cc: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1cf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
label_1cf6d0:
    // 0x1cf6d0: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cf6d4:
    // 0x1cf6d4: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cf6d8:
    // 0x1cf6d8: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
label_1cf6dc:
    if (ctx->pc == 0x1CF6DCu) {
        ctx->pc = 0x1CF6E0u;
        goto label_1cf6e0;
    }
    ctx->pc = 0x1CF6D8u;
    {
        const bool branch_taken_0x1cf6d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf6d8) {
            ctx->pc = 0x1CF6F0u;
            goto label_1cf6f0;
        }
    }
    ctx->pc = 0x1CF6E0u;
label_1cf6e0:
    // 0x1cf6e0: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1cf6e4:
    // 0x1cf6e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf6e8:
    // 0x1cf6e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf6ec:
    if (ctx->pc == 0x1CF6ECu) {
        ctx->pc = 0x1CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E8u;
        // 0x1cf6ec: 0xac870018  sw          $a3, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6F0u;
        goto label_1cf6f0;
    }
    ctx->pc = 0x1CF6E8u;
    {
        const bool branch_taken_0x1cf6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E8u;
        // 0x1cf6ec: 0xac870018  sw          $a3, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6e8) {
            ctx->pc = 0x1CF6F4u;
            goto label_1cf6f4;
        }
    }
    ctx->pc = 0x1CF6F0u;
label_1cf6f0:
    // 0x1cf6f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cf6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1cf6f4:
    // 0x1cf6f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cf6f8:
    // 0x1cf6f8: 0x90274af6  lbu         $a3, 0x4AF6($at)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1cf6fc:
    // 0x1cf6fc: 0x28e10029  slti        $at, $a3, 0x29
    ctx->pc = 0x1cf6fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
label_1cf700:
    // 0x1cf700: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cf704:
    if (ctx->pc == 0x1CF704u) {
        ctx->pc = 0x1CF708u;
        goto label_1cf708;
    }
    ctx->pc = 0x1CF700u;
    {
        const bool branch_taken_0x1cf700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf700) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF708u;
label_1cf708:
    // 0x1cf708: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cf70c:
    // 0x1cf70c: 0x8c274948  lw          $a3, 0x4948($at)
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18760)));
label_1cf710:
    // 0x1cf710: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_1cf714:
    if (ctx->pc == 0x1CF714u) {
        ctx->pc = 0x1CF718u;
        goto label_1cf718;
    }
    ctx->pc = 0x1CF710u;
    {
        const bool branch_taken_0x1cf710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf710) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF718u;
label_1cf718:
    // 0x1cf718: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cf71c:
    // 0x1cf71c: 0x90274998  lbu         $a3, 0x4998($at)
    ctx->pc = 0x1cf71cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18840)));
label_1cf720:
    // 0x1cf720: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_1cf724:
    if (ctx->pc == 0x1CF724u) {
        ctx->pc = 0x1CF728u;
        goto label_1cf728;
    }
    ctx->pc = 0x1CF720u;
    {
        const bool branch_taken_0x1cf720 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf720) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF728u;
label_1cf728:
    // 0x1cf728: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cf72c:
    // 0x1cf72c: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1cf72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cf730:
    // 0x1cf730: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
label_1cf734:
    if (ctx->pc == 0x1CF734u) {
        ctx->pc = 0x1CF738u;
        goto label_1cf738;
    }
    ctx->pc = 0x1CF730u;
    {
        const bool branch_taken_0x1cf730 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf730) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF738u;
label_1cf738:
    // 0x1cf738: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1cf73c:
    // 0x1cf73c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf740:
    // 0x1cf740: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf744:
    if (ctx->pc == 0x1CF744u) {
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF748u;
        goto label_1cf748;
    }
    ctx->pc = 0x1CF740u;
    {
        const bool branch_taken_0x1cf740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf740) {
            ctx->pc = 0x1CF74Cu;
            goto label_1cf74c;
        }
    }
    ctx->pc = 0x1CF748u;
label_1cf748:
    // 0x1cf748: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1cf748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_1cf74c:
    // 0x1cf74c: 0x84a70250  lh          $a3, 0x250($a1)
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
label_1cf750:
    // 0x1cf750: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x1cf750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_1cf754:
    // 0x1cf754: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1cf758:
    if (ctx->pc == 0x1CF758u) {
        ctx->pc = 0x1CF75Cu;
        goto label_1cf75c;
    }
    ctx->pc = 0x1CF754u;
    {
        const bool branch_taken_0x1cf754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf754) {
            ctx->pc = 0x1CF760u;
            goto label_1cf760;
        }
    }
    ctx->pc = 0x1CF75Cu;
label_1cf75c:
    // 0x1cf75c: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1cf760:
    // 0x1cf760: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1cf760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
label_1cf764:
    // 0x1cf764: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cf764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf768:
    // 0x1cf768: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1cf768u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf76c:
    // 0x1cf76c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1cf76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf770:
    // 0x1cf770: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf774:
    // 0x1cf774: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
label_1cf778:
    if (ctx->pc == 0x1CF778u) {
        ctx->pc = 0x1CF77Cu;
        goto label_1cf77c;
    }
    ctx->pc = 0x1CF774u;
    {
        const bool branch_taken_0x1cf774 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf774) {
            ctx->pc = 0x1CF784u;
            goto label_1cf784;
        }
    }
    ctx->pc = 0x1CF77Cu;
label_1cf77c:
    // 0x1cf77c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cf780:
    if (ctx->pc == 0x1CF780u) {
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF784u;
        goto label_1cf784;
    }
    ctx->pc = 0x1CF77Cu;
    {
        const bool branch_taken_0x1cf77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf77c) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF784u;
label_1cf784:
    // 0x1cf784: 0x0  nop
    ctx->pc = 0x1cf784u;
    // NOP
label_1cf788:
    // 0x1cf788: 0x156a0003  bne         $t3, $t2, . + 4 + (0x3 << 2)
label_1cf78c:
    if (ctx->pc == 0x1CF78Cu) {
        ctx->pc = 0x1CF790u;
        goto label_1cf790;
    }
    ctx->pc = 0x1CF788u;
    {
        const bool branch_taken_0x1cf788 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x1cf788) {
            ctx->pc = 0x1CF798u;
            goto label_1cf798;
        }
    }
    ctx->pc = 0x1CF790u;
label_1cf790:
    // 0x1cf790: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cf794:
    if (ctx->pc == 0x1CF794u) {
        ctx->pc = 0x1CF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF790u;
        // 0x1cf794: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF798u;
        goto label_1cf798;
    }
    ctx->pc = 0x1CF790u;
    {
        const bool branch_taken_0x1cf790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF790u;
        // 0x1cf794: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf790) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF798u;
label_1cf798:
    // 0x1cf798: 0x15690002  bne         $t3, $t1, . + 4 + (0x2 << 2)
label_1cf79c:
    if (ctx->pc == 0x1CF79Cu) {
        ctx->pc = 0x1CF7A0u;
        goto label_1cf7a0;
    }
    ctx->pc = 0x1CF798u;
    {
        const bool branch_taken_0x1cf798 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        if (branch_taken_0x1cf798) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF7A0u;
label_1cf7a0:
    // 0x1cf7a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cf7a4:
    // 0x1cf7a4: 0x0  nop
    ctx->pc = 0x1cf7a4u;
    // NOP
label_1cf7a8:
    // 0x1cf7a8: 0x8cc70198  lw          $a3, 0x198($a2)
    ctx->pc = 0x1cf7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
label_1cf7ac:
    // 0x1cf7ac: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1cf7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1cf7b0:
    // 0x1cf7b0: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_1cf7b4:
    if (ctx->pc == 0x1CF7B4u) {
        ctx->pc = 0x1CF7B8u;
        goto label_1cf7b8;
    }
    ctx->pc = 0x1CF7B0u;
    {
        const bool branch_taken_0x1cf7b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7b0) {
            ctx->pc = 0x1CF840u;
            goto label_1cf840;
        }
    }
    ctx->pc = 0x1CF7B8u;
label_1cf7b8:
    // 0x1cf7b8: 0xac3821  addu        $a3, $a1, $t4
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_1cf7bc:
    // 0x1cf7bc: 0x84ed0202  lh          $t5, 0x202($a3)
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 514)));
label_1cf7c0:
    // 0x1cf7c0: 0x29a10002  slti        $at, $t5, 0x2
    ctx->pc = 0x1cf7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf7c4:
    // 0x1cf7c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf7c8:
    if (ctx->pc == 0x1CF7C8u) {
        ctx->pc = 0x1CF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7C4u;
        // 0x1cf7c8: 0x24e80200  addiu       $t0, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7CCu;
        goto label_1cf7cc;
    }
    ctx->pc = 0x1CF7C4u;
    {
        const bool branch_taken_0x1cf7c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7C4u;
        // 0x1cf7c8: 0x24e80200  addiu       $t0, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7c4) {
            ctx->pc = 0x1CF7D4u;
            goto label_1cf7d4;
        }
    }
    ctx->pc = 0x1CF7CCu;
label_1cf7cc:
    // 0x1cf7cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf7d0:
    if (ctx->pc == 0x1CF7D0u) {
        ctx->pc = 0x1CF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7CCu;
        // 0x1cf7d0: 0x850e0000  lh          $t6, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7D4u;
        goto label_1cf7d4;
    }
    ctx->pc = 0x1CF7CCu;
    {
        const bool branch_taken_0x1cf7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7CCu;
        // 0x1cf7d0: 0x850e0000  lh          $t6, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7cc) {
            ctx->pc = 0x1CF7DCu;
            goto label_1cf7dc;
        }
    }
    ctx->pc = 0x1CF7D4u;
label_1cf7d4:
    // 0x1cf7d4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf7d8:
    // 0x1cf7d8: 0x850e0000  lh          $t6, 0x0($t0)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1cf7dc:
    // 0x1cf7dc: 0x1ae082a  slt         $at, $t5, $t6
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_1cf7e0:
    // 0x1cf7e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1cf7e4:
    if (ctx->pc == 0x1CF7E4u) {
        ctx->pc = 0x1CF7E8u;
        goto label_1cf7e8;
    }
    ctx->pc = 0x1CF7E0u;
    {
        const bool branch_taken_0x1cf7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7e0) {
            ctx->pc = 0x1CF7ECu;
            goto label_1cf7ec;
        }
    }
    ctx->pc = 0x1CF7E8u;
label_1cf7e8:
    // 0x1cf7e8: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7ec:
    // 0x1cf7ec: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x1cf7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_1cf7f0:
    // 0x1cf7f0: 0x1700a  movz        $t6, $zero, $at
    ctx->pc = 0x1cf7f0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_1cf7f4:
    // 0x1cf7f4: 0xe3900  sll         $a3, $t6, 4
    ctx->pc = 0x1cf7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1cf7f8:
    // 0x1cf7f8: 0x8c7821  addu        $t7, $a0, $t4
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1cf7fc:
    // 0x1cf7fc: 0xee4023  subu        $t0, $a3, $t6
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_1cf800:
    // 0x1cf800: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cf800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1cf804:
    // 0x1cf804: 0xe3840  sll         $a3, $t6, 1
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
label_1cf808:
    // 0x1cf808: 0x10d001a  div         $zero, $t0, $t5
    ctx->pc = 0x1cf808u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf80c:
    // 0x1cf80c: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_1cf810:
    // 0x1cf810: 0xed082a  slt         $at, $a3, $t5
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_1cf814:
    // 0x1cf814: 0x4012  mflo        $t0
    ctx->pc = 0x1cf814u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_1cf818:
    // 0x1cf818: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1cf81c:
    if (ctx->pc == 0x1CF81Cu) {
        ctx->pc = 0x1CF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF818u;
        // 0x1cf81c: 0xade80020  sw          $t0, 0x20($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF820u;
        goto label_1cf820;
    }
    ctx->pc = 0x1CF818u;
    {
        const bool branch_taken_0x1cf818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF818u;
        // 0x1cf81c: 0xade80020  sw          $t0, 0x20($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf818) {
            ctx->pc = 0x1CF830u;
            goto label_1cf830;
        }
    }
    ctx->pc = 0x1CF820u;
label_1cf820:
    // 0x1cf820: 0x8de7002c  lw          $a3, 0x2C($t7)
    ctx->pc = 0x1cf820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
label_1cf824:
    // 0x1cf824: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1cf828:
    // 0x1cf828: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cf82c:
    if (ctx->pc == 0x1CF82Cu) {
        ctx->pc = 0x1CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF828u;
        // 0x1cf82c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF830u;
        goto label_1cf830;
    }
    ctx->pc = 0x1CF828u;
    {
        const bool branch_taken_0x1cf828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF828u;
        // 0x1cf82c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf828) {
            ctx->pc = 0x1CF84Cu;
            goto label_1cf84c;
        }
    }
    ctx->pc = 0x1CF830u;
label_1cf830:
    // 0x1cf830: 0x8de7002c  lw          $a3, 0x2C($t7)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
label_1cf834:
    // 0x1cf834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf838:
    // 0x1cf838: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cf83c:
    if (ctx->pc == 0x1CF83Cu) {
        ctx->pc = 0x1CF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF838u;
        // 0x1cf83c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF840u;
        goto label_1cf840;
    }
    ctx->pc = 0x1CF838u;
    {
        const bool branch_taken_0x1cf838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF838u;
        // 0x1cf83c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf838) {
            ctx->pc = 0x1CF84Cu;
            goto label_1cf84c;
        }
    }
    ctx->pc = 0x1CF840u;
label_1cf840:
    // 0x1cf840: 0x8c3821  addu        $a3, $a0, $t4
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1cf844:
    // 0x1cf844: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1cf844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
label_1cf848:
    // 0x1cf848: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1cf848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
label_1cf84c:
    // 0x1cf84c: 0x0  nop
    ctx->pc = 0x1cf84cu;
    // NOP
label_1cf850:
    // 0x1cf850: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1cf854:
    // 0x1cf854: 0x29670003  slti        $a3, $t3, 0x3
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cf858:
    // 0x1cf858: 0x14e0ffc6  bnez        $a3, . + 4 + (-0x3A << 2)
label_1cf85c:
    if (ctx->pc == 0x1CF85Cu) {
        ctx->pc = 0x1CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF858u;
        // 0x1cf85c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF860u;
        goto label_1cf860;
    }
    ctx->pc = 0x1CF858u;
    {
        const bool branch_taken_0x1cf858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF858u;
        // 0x1cf85c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf858) {
            ctx->pc = 0x1CF774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf774;
        }
    }
    ctx->pc = 0x1CF860u;
label_1cf860:
    // 0x1cf860: 0x8cc60198  lw          $a2, 0x198($a2)
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
label_1cf864:
    // 0x1cf864: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x1cf864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_1cf868:
    // 0x1cf868: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_1cf86c:
    if (ctx->pc == 0x1CF86Cu) {
        ctx->pc = 0x1CF870u;
        goto label_1cf870;
    }
    ctx->pc = 0x1CF868u;
    {
        const bool branch_taken_0x1cf868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf868) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF870u;
label_1cf870:
    // 0x1cf870: 0x30c32000  andi        $v1, $a2, 0x2000
    ctx->pc = 0x1cf870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
label_1cf874:
    // 0x1cf874: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1cf878:
    if (ctx->pc == 0x1CF878u) {
        ctx->pc = 0x1CF87Cu;
        goto label_1cf87c;
    }
    ctx->pc = 0x1CF874u;
    {
        const bool branch_taken_0x1cf874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf874) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF87Cu;
label_1cf87c:
    // 0x1cf87c: 0x84a6027e  lh          $a2, 0x27E($a1)
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 638)));
label_1cf880:
    // 0x1cf880: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x1cf880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf884:
    // 0x1cf884: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cf888:
    if (ctx->pc == 0x1CF888u) {
        ctx->pc = 0x1CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF884u;
        // 0x1cf888: 0x24a3027c  addiu       $v1, $a1, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF88Cu;
        goto label_1cf88c;
    }
    ctx->pc = 0x1CF884u;
    {
        const bool branch_taken_0x1cf884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF884u;
        // 0x1cf888: 0x24a3027c  addiu       $v1, $a1, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf884) {
            ctx->pc = 0x1CF894u;
            goto label_1cf894;
        }
    }
    ctx->pc = 0x1CF88Cu;
label_1cf88c:
    // 0x1cf88c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cf890:
    if (ctx->pc == 0x1CF890u) {
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF894u;
        goto label_1cf894;
    }
    ctx->pc = 0x1CF88Cu;
    {
        const bool branch_taken_0x1cf88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf88c) {
            ctx->pc = 0x1CF89Cu;
            goto label_1cf89c;
        }
    }
    ctx->pc = 0x1CF894u;
label_1cf894:
    // 0x1cf894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf898:
    // 0x1cf898: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1cf898u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cf89c:
    // 0x1cf89c: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1cf89cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf8a0:
    // 0x1cf8a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1cf8a4:
    if (ctx->pc == 0x1CF8A4u) {
        ctx->pc = 0x1CF8A8u;
        goto label_1cf8a8;
    }
    ctx->pc = 0x1CF8A0u;
    {
        const bool branch_taken_0x1cf8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8a0) {
            ctx->pc = 0x1CF8ACu;
            goto label_1cf8ac;
        }
    }
    ctx->pc = 0x1CF8A8u;
label_1cf8a8:
    // 0x1cf8a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1cf8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cf8ac:
    // 0x1cf8ac: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cf8b0:
    // 0x1cf8b0: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf8b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1cf8b4:
    // 0x1cf8b4: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1cf8b8:
    // 0x1cf8b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1cf8bc:
    // 0x1cf8bc: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1cf8c0:
    // 0x1cf8c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cf8c4:
    // 0x1cf8c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cf8c8:
    // 0x1cf8c8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1cf8c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cf8cc:
    // 0x1cf8cc: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1cf8ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf8d0:
    // 0x1cf8d0: 0x0  nop
    ctx->pc = 0x1cf8d0u;
    // NOP
label_1cf8d4:
    // 0x1cf8d4: 0x0  nop
    ctx->pc = 0x1cf8d4u;
    // NOP
label_1cf8d8:
    // 0x1cf8d8: 0x2812  mflo        $a1
    ctx->pc = 0x1cf8d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1cf8dc:
    // 0x1cf8dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1cf8e0:
    if (ctx->pc == 0x1CF8E0u) {
        ctx->pc = 0x1CF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8DCu;
        // 0x1cf8e0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8E4u;
        goto label_1cf8e4;
    }
    ctx->pc = 0x1CF8DCu;
    {
        const bool branch_taken_0x1cf8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8DCu;
        // 0x1cf8e0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8dc) {
            ctx->pc = 0x1CF8F4u;
            goto label_1cf8f4;
        }
    }
    ctx->pc = 0x1CF8E4u;
label_1cf8e4:
    // 0x1cf8e4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cf8e8:
    // 0x1cf8e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cf8ec:
    // 0x1cf8ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cf8f0:
    if (ctx->pc == 0x1CF8F0u) {
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF8F4u;
        goto label_1cf8f4;
    }
    ctx->pc = 0x1CF8ECu;
    {
        const bool branch_taken_0x1cf8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8ec) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF8F4u;
label_1cf8f4:
    // 0x1cf8f4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cf8f8:
    // 0x1cf8f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cf8fc:
    // 0x1cf8fc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_1cf900:
    // 0x1cf900: 0x3e00008  jr          $ra
label_1cf904:
    if (ctx->pc == 0x1CF904u) {
        ctx->pc = 0x1CF908u;
        goto label_1cf908;
    }
    ctx->pc = 0x1CF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF908u;
label_1cf908:
    // 0x1cf908: 0x0  nop
    ctx->pc = 0x1cf908u;
    // NOP
label_1cf90c:
    // 0x1cf90c: 0x0  nop
    ctx->pc = 0x1cf90cu;
    // NOP
label_1cf910:
    // 0x1cf910: 0x3e00008  jr          $ra
label_1cf914:
    if (ctx->pc == 0x1CF914u) {
        ctx->pc = 0x1CF918u;
        goto label_1cf918;
    }
    ctx->pc = 0x1CF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF918u;
label_1cf918:
    // 0x1cf918: 0x0  nop
    ctx->pc = 0x1cf918u;
    // NOP
label_1cf91c:
    // 0x1cf91c: 0x0  nop
    ctx->pc = 0x1cf91cu;
    // NOP
label_1cf920:
    // 0x1cf920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cf924:
    // 0x1cf924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cf928:
    // 0x1cf928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cf92c:
    // 0x1cf92c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1cf930:
    if (ctx->pc == 0x1CF930u) {
        ctx->pc = 0x1CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF92Cu;
        // 0x1cf930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF934u;
        goto label_1cf934;
    }
    ctx->pc = 0x1CF92Cu;
    {
        const bool branch_taken_0x1cf92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF92Cu;
        // 0x1cf930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf92c) {
            ctx->pc = 0x1CF96Cu;
            goto label_1cf96c;
        }
    }
    ctx->pc = 0x1CF934u;
label_1cf934:
    // 0x1cf934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf938:
    // 0x1cf938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf93c:
    // 0x1cf93c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cf940:
    // 0x1cf940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf944:
    // 0x1cf944: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
label_1cf948:
    // 0x1cf948: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf94c:
    // 0x1cf94c: 0xc073e68  jal         func_1CF9A0
label_1cf950:
    if (ctx->pc == 0x1CF950u) {
        ctx->pc = 0x1CF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF94Cu;
        // 0x1cf950: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF954u;
        goto label_1cf954;
    }
    ctx->pc = 0x1CF94Cu;
    SET_GPR_U32(ctx, 31, 0x1CF954u);
    ctx->pc = 0x1CF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF94Cu;
    // 0x1cf950: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    goto label_1cf9a0;
    ctx->pc = 0x1CF954u;
label_1cf954:
    // 0x1cf954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf958:
    // 0x1cf958: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1cf958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf95c:
    // 0x1cf95c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1cf960:
    if (ctx->pc == 0x1CF960u) {
        ctx->pc = 0x1CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF95Cu;
        // 0x1cf960: 0x26312780  addiu       $s1, $s1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF964u;
        goto label_1cf964;
    }
    ctx->pc = 0x1CF95Cu;
    {
        const bool branch_taken_0x1cf95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF95Cu;
        // 0x1cf960: 0x26312780  addiu       $s1, $s1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf95c) {
            ctx->pc = 0x1CF93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf93c;
        }
    }
    ctx->pc = 0x1CF964u;
label_1cf964:
    // 0x1cf964: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cf968:
    if (ctx->pc == 0x1CF968u) {
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF964u;
        // 0x1cf968: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF96Cu;
        goto label_1cf96c;
    }
    ctx->pc = 0x1CF964u;
    {
        const bool branch_taken_0x1cf964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF964u;
        // 0x1cf968: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf964) {
            ctx->pc = 0x1CF984u;
            goto label_1cf984;
        }
    }
    ctx->pc = 0x1CF96Cu;
label_1cf96c:
    // 0x1cf96c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cf96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cf970:
    // 0x1cf970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf974:
    // 0x1cf974: 0x24847a80  addiu       $a0, $a0, 0x7A80
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31360));
label_1cf978:
    // 0x1cf978: 0xc073e68  jal         func_1CF9A0
label_1cf97c:
    if (ctx->pc == 0x1CF97Cu) {
        ctx->pc = 0x1CF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF978u;
        // 0x1cf97c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF980u;
        goto label_1cf980;
    }
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x1CF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF978u;
    // 0x1cf97c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    goto label_1cf9a0;
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf984:
    // 0x1cf984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf988:
    // 0x1cf988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf98c:
    // 0x1cf98c: 0x3e00008  jr          $ra
label_1cf990:
    if (ctx->pc == 0x1CF990u) {
        ctx->pc = 0x1CF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF98Cu;
        // 0x1cf990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF994u;
        goto label_1cf994;
    }
    ctx->pc = 0x1CF98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF98Cu;
        // 0x1cf990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF994u;
label_1cf994:
    // 0x1cf994: 0x0  nop
    ctx->pc = 0x1cf994u;
    // NOP
label_1cf998:
    // 0x1cf998: 0x0  nop
    ctx->pc = 0x1cf998u;
    // NOP
label_1cf99c:
    // 0x1cf99c: 0x0  nop
    ctx->pc = 0x1cf99cu;
    // NOP
label_1cf9a0:
    // 0x1cf9a0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1cf9a4:
    // 0x1cf9a4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1cf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1cf9a8:
    // 0x1cf9a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1cf9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1cf9ac:
    // 0x1cf9ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cf9b0:
    // 0x1cf9b0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1cf9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1cf9b4:
    // 0x1cf9b4: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_1cf9b8:
    // 0x1cf9b8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1cf9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1cf9bc:
    // 0x1cf9bc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1cf9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1cf9c0:
    // 0x1cf9c0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1cf9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1cf9c4:
    // 0x1cf9c4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1cf9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1cf9c8:
    // 0x1cf9c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cf9c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9cc:
    // 0x1cf9cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cf9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1cf9d0:
    // 0x1cf9d0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1cf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1cf9d4:
    // 0x1cf9d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1cf9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    ctx->pc = 0x1cf9d8u;
    return;
}

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


void FUN_0014eba0_part786(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ce070u: goto label_2ce070;
        case 0x2ce074u: goto label_2ce074;
        case 0x2ce078u: goto label_2ce078;
        case 0x2ce07cu: goto label_2ce07c;
        case 0x2ce080u: goto label_2ce080;
        case 0x2ce084u: goto label_2ce084;
        case 0x2ce088u: goto label_2ce088;
        case 0x2ce08cu: goto label_2ce08c;
        case 0x2ce090u: goto label_2ce090;
        case 0x2ce094u: goto label_2ce094;
        case 0x2ce098u: goto label_2ce098;
        case 0x2ce09cu: goto label_2ce09c;
        case 0x2ce0a0u: goto label_2ce0a0;
        case 0x2ce0a4u: goto label_2ce0a4;
        case 0x2ce0a8u: goto label_2ce0a8;
        case 0x2ce0acu: goto label_2ce0ac;
        case 0x2ce0b0u: goto label_2ce0b0;
        case 0x2ce0b4u: goto label_2ce0b4;
        case 0x2ce0b8u: goto label_2ce0b8;
        case 0x2ce0bcu: goto label_2ce0bc;
        case 0x2ce0c0u: goto label_2ce0c0;
        case 0x2ce0c4u: goto label_2ce0c4;
        case 0x2ce0c8u: goto label_2ce0c8;
        case 0x2ce0ccu: goto label_2ce0cc;
        case 0x2ce0d0u: goto label_2ce0d0;
        case 0x2ce0d4u: goto label_2ce0d4;
        case 0x2ce0d8u: goto label_2ce0d8;
        case 0x2ce0dcu: goto label_2ce0dc;
        case 0x2ce0e0u: goto label_2ce0e0;
        case 0x2ce0e4u: goto label_2ce0e4;
        case 0x2ce0e8u: goto label_2ce0e8;
        case 0x2ce0ecu: goto label_2ce0ec;
        case 0x2ce0f0u: goto label_2ce0f0;
        case 0x2ce0f4u: goto label_2ce0f4;
        case 0x2ce0f8u: goto label_2ce0f8;
        case 0x2ce0fcu: goto label_2ce0fc;
        case 0x2ce100u: goto label_2ce100;
        case 0x2ce104u: goto label_2ce104;
        case 0x2ce108u: goto label_2ce108;
        case 0x2ce10cu: goto label_2ce10c;
        case 0x2ce110u: goto label_2ce110;
        case 0x2ce114u: goto label_2ce114;
        case 0x2ce118u: goto label_2ce118;
        case 0x2ce11cu: goto label_2ce11c;
        case 0x2ce120u: goto label_2ce120;
        case 0x2ce124u: goto label_2ce124;
        case 0x2ce128u: goto label_2ce128;
        case 0x2ce12cu: goto label_2ce12c;
        case 0x2ce130u: goto label_2ce130;
        case 0x2ce134u: goto label_2ce134;
        case 0x2ce138u: goto label_2ce138;
        case 0x2ce13cu: goto label_2ce13c;
        case 0x2ce140u: goto label_2ce140;
        case 0x2ce144u: goto label_2ce144;
        case 0x2ce148u: goto label_2ce148;
        case 0x2ce14cu: goto label_2ce14c;
        case 0x2ce150u: goto label_2ce150;
        case 0x2ce154u: goto label_2ce154;
        case 0x2ce158u: goto label_2ce158;
        case 0x2ce15cu: goto label_2ce15c;
        case 0x2ce160u: goto label_2ce160;
        case 0x2ce164u: goto label_2ce164;
        case 0x2ce168u: goto label_2ce168;
        case 0x2ce16cu: goto label_2ce16c;
        case 0x2ce170u: goto label_2ce170;
        case 0x2ce174u: goto label_2ce174;
        case 0x2ce178u: goto label_2ce178;
        case 0x2ce17cu: goto label_2ce17c;
        case 0x2ce180u: goto label_2ce180;
        case 0x2ce184u: goto label_2ce184;
        case 0x2ce188u: goto label_2ce188;
        case 0x2ce18cu: goto label_2ce18c;
        case 0x2ce190u: goto label_2ce190;
        case 0x2ce194u: goto label_2ce194;
        case 0x2ce198u: goto label_2ce198;
        case 0x2ce19cu: goto label_2ce19c;
        case 0x2ce1a0u: goto label_2ce1a0;
        case 0x2ce1a4u: goto label_2ce1a4;
        case 0x2ce1a8u: goto label_2ce1a8;
        case 0x2ce1acu: goto label_2ce1ac;
        case 0x2ce1b0u: goto label_2ce1b0;
        case 0x2ce1b4u: goto label_2ce1b4;
        case 0x2ce1b8u: goto label_2ce1b8;
        case 0x2ce1bcu: goto label_2ce1bc;
        case 0x2ce1c0u: goto label_2ce1c0;
        case 0x2ce1c4u: goto label_2ce1c4;
        case 0x2ce1c8u: goto label_2ce1c8;
        case 0x2ce1ccu: goto label_2ce1cc;
        case 0x2ce1d0u: goto label_2ce1d0;
        case 0x2ce1d4u: goto label_2ce1d4;
        case 0x2ce1d8u: goto label_2ce1d8;
        case 0x2ce1dcu: goto label_2ce1dc;
        case 0x2ce1e0u: goto label_2ce1e0;
        case 0x2ce1e4u: goto label_2ce1e4;
        case 0x2ce1e8u: goto label_2ce1e8;
        case 0x2ce1ecu: goto label_2ce1ec;
        case 0x2ce1f0u: goto label_2ce1f0;
        case 0x2ce1f4u: goto label_2ce1f4;
        case 0x2ce1f8u: goto label_2ce1f8;
        case 0x2ce1fcu: goto label_2ce1fc;
        case 0x2ce200u: goto label_2ce200;
        case 0x2ce204u: goto label_2ce204;
        case 0x2ce208u: goto label_2ce208;
        case 0x2ce20cu: goto label_2ce20c;
        case 0x2ce210u: goto label_2ce210;
        case 0x2ce214u: goto label_2ce214;
        case 0x2ce218u: goto label_2ce218;
        case 0x2ce21cu: goto label_2ce21c;
        case 0x2ce220u: goto label_2ce220;
        case 0x2ce224u: goto label_2ce224;
        case 0x2ce228u: goto label_2ce228;
        case 0x2ce22cu: goto label_2ce22c;
        case 0x2ce230u: goto label_2ce230;
        case 0x2ce234u: goto label_2ce234;
        case 0x2ce238u: goto label_2ce238;
        case 0x2ce23cu: goto label_2ce23c;
        case 0x2ce240u: goto label_2ce240;
        case 0x2ce244u: goto label_2ce244;
        case 0x2ce248u: goto label_2ce248;
        case 0x2ce24cu: goto label_2ce24c;
        case 0x2ce250u: goto label_2ce250;
        case 0x2ce254u: goto label_2ce254;
        case 0x2ce258u: goto label_2ce258;
        case 0x2ce25cu: goto label_2ce25c;
        case 0x2ce260u: goto label_2ce260;
        case 0x2ce264u: goto label_2ce264;
        case 0x2ce268u: goto label_2ce268;
        case 0x2ce26cu: goto label_2ce26c;
        case 0x2ce270u: goto label_2ce270;
        case 0x2ce274u: goto label_2ce274;
        case 0x2ce278u: goto label_2ce278;
        case 0x2ce27cu: goto label_2ce27c;
        case 0x2ce280u: goto label_2ce280;
        case 0x2ce284u: goto label_2ce284;
        case 0x2ce288u: goto label_2ce288;
        case 0x2ce28cu: goto label_2ce28c;
        case 0x2ce290u: goto label_2ce290;
        case 0x2ce294u: goto label_2ce294;
        case 0x2ce298u: goto label_2ce298;
        case 0x2ce29cu: goto label_2ce29c;
        case 0x2ce2a0u: goto label_2ce2a0;
        case 0x2ce2a4u: goto label_2ce2a4;
        case 0x2ce2a8u: goto label_2ce2a8;
        case 0x2ce2acu: goto label_2ce2ac;
        case 0x2ce2b0u: goto label_2ce2b0;
        case 0x2ce2b4u: goto label_2ce2b4;
        case 0x2ce2b8u: goto label_2ce2b8;
        case 0x2ce2bcu: goto label_2ce2bc;
        case 0x2ce2c0u: goto label_2ce2c0;
        case 0x2ce2c4u: goto label_2ce2c4;
        case 0x2ce2c8u: goto label_2ce2c8;
        case 0x2ce2ccu: goto label_2ce2cc;
        case 0x2ce2d0u: goto label_2ce2d0;
        case 0x2ce2d4u: goto label_2ce2d4;
        case 0x2ce2d8u: goto label_2ce2d8;
        case 0x2ce2dcu: goto label_2ce2dc;
        case 0x2ce2e0u: goto label_2ce2e0;
        case 0x2ce2e4u: goto label_2ce2e4;
        case 0x2ce2e8u: goto label_2ce2e8;
        case 0x2ce2ecu: goto label_2ce2ec;
        case 0x2ce2f0u: goto label_2ce2f0;
        case 0x2ce2f4u: goto label_2ce2f4;
        case 0x2ce2f8u: goto label_2ce2f8;
        case 0x2ce2fcu: goto label_2ce2fc;
        case 0x2ce300u: goto label_2ce300;
        case 0x2ce304u: goto label_2ce304;
        case 0x2ce308u: goto label_2ce308;
        case 0x2ce30cu: goto label_2ce30c;
        case 0x2ce310u: goto label_2ce310;
        case 0x2ce314u: goto label_2ce314;
        case 0x2ce318u: goto label_2ce318;
        case 0x2ce31cu: goto label_2ce31c;
        case 0x2ce320u: goto label_2ce320;
        case 0x2ce324u: goto label_2ce324;
        case 0x2ce328u: goto label_2ce328;
        case 0x2ce32cu: goto label_2ce32c;
        case 0x2ce330u: goto label_2ce330;
        case 0x2ce334u: goto label_2ce334;
        case 0x2ce338u: goto label_2ce338;
        case 0x2ce33cu: goto label_2ce33c;
        case 0x2ce340u: goto label_2ce340;
        case 0x2ce344u: goto label_2ce344;
        case 0x2ce348u: goto label_2ce348;
        case 0x2ce34cu: goto label_2ce34c;
        case 0x2ce350u: goto label_2ce350;
        case 0x2ce354u: goto label_2ce354;
        case 0x2ce358u: goto label_2ce358;
        case 0x2ce35cu: goto label_2ce35c;
        case 0x2ce360u: goto label_2ce360;
        case 0x2ce364u: goto label_2ce364;
        case 0x2ce368u: goto label_2ce368;
        case 0x2ce36cu: goto label_2ce36c;
        case 0x2ce370u: goto label_2ce370;
        case 0x2ce374u: goto label_2ce374;
        case 0x2ce378u: goto label_2ce378;
        case 0x2ce37cu: goto label_2ce37c;
        case 0x2ce380u: goto label_2ce380;
        case 0x2ce384u: goto label_2ce384;
        case 0x2ce388u: goto label_2ce388;
        case 0x2ce38cu: goto label_2ce38c;
        case 0x2ce390u: goto label_2ce390;
        case 0x2ce394u: goto label_2ce394;
        case 0x2ce398u: goto label_2ce398;
        case 0x2ce39cu: goto label_2ce39c;
        case 0x2ce3a0u: goto label_2ce3a0;
        case 0x2ce3a4u: goto label_2ce3a4;
        case 0x2ce3a8u: goto label_2ce3a8;
        case 0x2ce3acu: goto label_2ce3ac;
        case 0x2ce3b0u: goto label_2ce3b0;
        case 0x2ce3b4u: goto label_2ce3b4;
        case 0x2ce3b8u: goto label_2ce3b8;
        case 0x2ce3bcu: goto label_2ce3bc;
        case 0x2ce3c0u: goto label_2ce3c0;
        case 0x2ce3c4u: goto label_2ce3c4;
        case 0x2ce3c8u: goto label_2ce3c8;
        case 0x2ce3ccu: goto label_2ce3cc;
        case 0x2ce3d0u: goto label_2ce3d0;
        case 0x2ce3d4u: goto label_2ce3d4;
        case 0x2ce3d8u: goto label_2ce3d8;
        case 0x2ce3dcu: goto label_2ce3dc;
        case 0x2ce3e0u: goto label_2ce3e0;
        case 0x2ce3e4u: goto label_2ce3e4;
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce3ecu: goto label_2ce3ec;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce3f4u: goto label_2ce3f4;
        case 0x2ce3f8u: goto label_2ce3f8;
        case 0x2ce3fcu: goto label_2ce3fc;
        case 0x2ce400u: goto label_2ce400;
        case 0x2ce404u: goto label_2ce404;
        case 0x2ce408u: goto label_2ce408;
        case 0x2ce40cu: goto label_2ce40c;
        case 0x2ce410u: goto label_2ce410;
        case 0x2ce414u: goto label_2ce414;
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce41cu: goto label_2ce41c;
        case 0x2ce420u: goto label_2ce420;
        case 0x2ce424u: goto label_2ce424;
        case 0x2ce428u: goto label_2ce428;
        case 0x2ce42cu: goto label_2ce42c;
        case 0x2ce430u: goto label_2ce430;
        case 0x2ce434u: goto label_2ce434;
        case 0x2ce438u: goto label_2ce438;
        case 0x2ce43cu: goto label_2ce43c;
        case 0x2ce440u: goto label_2ce440;
        case 0x2ce444u: goto label_2ce444;
        case 0x2ce448u: goto label_2ce448;
        case 0x2ce44cu: goto label_2ce44c;
        case 0x2ce450u: goto label_2ce450;
        case 0x2ce454u: goto label_2ce454;
        case 0x2ce458u: goto label_2ce458;
        case 0x2ce45cu: goto label_2ce45c;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce464u: goto label_2ce464;
        case 0x2ce468u: goto label_2ce468;
        case 0x2ce46cu: goto label_2ce46c;
        case 0x2ce470u: goto label_2ce470;
        case 0x2ce474u: goto label_2ce474;
        case 0x2ce478u: goto label_2ce478;
        case 0x2ce47cu: goto label_2ce47c;
        case 0x2ce480u: goto label_2ce480;
        case 0x2ce484u: goto label_2ce484;
        case 0x2ce488u: goto label_2ce488;
        case 0x2ce48cu: goto label_2ce48c;
        case 0x2ce490u: goto label_2ce490;
        case 0x2ce494u: goto label_2ce494;
        case 0x2ce498u: goto label_2ce498;
        case 0x2ce49cu: goto label_2ce49c;
        case 0x2ce4a0u: goto label_2ce4a0;
        case 0x2ce4a4u: goto label_2ce4a4;
        case 0x2ce4a8u: goto label_2ce4a8;
        case 0x2ce4acu: goto label_2ce4ac;
        case 0x2ce4b0u: goto label_2ce4b0;
        case 0x2ce4b4u: goto label_2ce4b4;
        case 0x2ce4b8u: goto label_2ce4b8;
        case 0x2ce4bcu: goto label_2ce4bc;
        case 0x2ce4c0u: goto label_2ce4c0;
        case 0x2ce4c4u: goto label_2ce4c4;
        case 0x2ce4c8u: goto label_2ce4c8;
        case 0x2ce4ccu: goto label_2ce4cc;
        case 0x2ce4d0u: goto label_2ce4d0;
        case 0x2ce4d4u: goto label_2ce4d4;
        case 0x2ce4d8u: goto label_2ce4d8;
        case 0x2ce4dcu: goto label_2ce4dc;
        case 0x2ce4e0u: goto label_2ce4e0;
        case 0x2ce4e4u: goto label_2ce4e4;
        case 0x2ce4e8u: goto label_2ce4e8;
        case 0x2ce4ecu: goto label_2ce4ec;
        case 0x2ce4f0u: goto label_2ce4f0;
        case 0x2ce4f4u: goto label_2ce4f4;
        case 0x2ce4f8u: goto label_2ce4f8;
        case 0x2ce4fcu: goto label_2ce4fc;
        case 0x2ce500u: goto label_2ce500;
        case 0x2ce504u: goto label_2ce504;
        case 0x2ce508u: goto label_2ce508;
        case 0x2ce50cu: goto label_2ce50c;
        case 0x2ce510u: goto label_2ce510;
        case 0x2ce514u: goto label_2ce514;
        case 0x2ce518u: goto label_2ce518;
        case 0x2ce51cu: goto label_2ce51c;
        case 0x2ce520u: goto label_2ce520;
        case 0x2ce524u: goto label_2ce524;
        case 0x2ce528u: goto label_2ce528;
        case 0x2ce52cu: goto label_2ce52c;
        case 0x2ce530u: goto label_2ce530;
        case 0x2ce534u: goto label_2ce534;
        case 0x2ce538u: goto label_2ce538;
        case 0x2ce53cu: goto label_2ce53c;
        case 0x2ce540u: goto label_2ce540;
        case 0x2ce544u: goto label_2ce544;
        case 0x2ce548u: goto label_2ce548;
        case 0x2ce54cu: goto label_2ce54c;
        case 0x2ce550u: goto label_2ce550;
        case 0x2ce554u: goto label_2ce554;
        case 0x2ce558u: goto label_2ce558;
        case 0x2ce55cu: goto label_2ce55c;
        case 0x2ce560u: goto label_2ce560;
        case 0x2ce564u: goto label_2ce564;
        case 0x2ce568u: goto label_2ce568;
        case 0x2ce56cu: goto label_2ce56c;
        case 0x2ce570u: goto label_2ce570;
        case 0x2ce574u: goto label_2ce574;
        case 0x2ce578u: goto label_2ce578;
        case 0x2ce57cu: goto label_2ce57c;
        case 0x2ce580u: goto label_2ce580;
        case 0x2ce584u: goto label_2ce584;
        case 0x2ce588u: goto label_2ce588;
        case 0x2ce58cu: goto label_2ce58c;
        case 0x2ce590u: goto label_2ce590;
        case 0x2ce594u: goto label_2ce594;
        case 0x2ce598u: goto label_2ce598;
        case 0x2ce59cu: goto label_2ce59c;
        case 0x2ce5a0u: goto label_2ce5a0;
        case 0x2ce5a4u: goto label_2ce5a4;
        case 0x2ce5a8u: goto label_2ce5a8;
        case 0x2ce5acu: goto label_2ce5ac;
        case 0x2ce5b0u: goto label_2ce5b0;
        case 0x2ce5b4u: goto label_2ce5b4;
        case 0x2ce5b8u: goto label_2ce5b8;
        case 0x2ce5bcu: goto label_2ce5bc;
        case 0x2ce5c0u: goto label_2ce5c0;
        case 0x2ce5c4u: goto label_2ce5c4;
        case 0x2ce5c8u: goto label_2ce5c8;
        case 0x2ce5ccu: goto label_2ce5cc;
        case 0x2ce5d0u: goto label_2ce5d0;
        case 0x2ce5d4u: goto label_2ce5d4;
        case 0x2ce5d8u: goto label_2ce5d8;
        case 0x2ce5dcu: goto label_2ce5dc;
        case 0x2ce5e0u: goto label_2ce5e0;
        case 0x2ce5e4u: goto label_2ce5e4;
        case 0x2ce5e8u: goto label_2ce5e8;
        case 0x2ce5ecu: goto label_2ce5ec;
        case 0x2ce5f0u: goto label_2ce5f0;
        case 0x2ce5f4u: goto label_2ce5f4;
        case 0x2ce5f8u: goto label_2ce5f8;
        case 0x2ce5fcu: goto label_2ce5fc;
        case 0x2ce600u: goto label_2ce600;
        case 0x2ce604u: goto label_2ce604;
        case 0x2ce608u: goto label_2ce608;
        case 0x2ce60cu: goto label_2ce60c;
        case 0x2ce610u: goto label_2ce610;
        case 0x2ce614u: goto label_2ce614;
        case 0x2ce618u: goto label_2ce618;
        case 0x2ce61cu: goto label_2ce61c;
        case 0x2ce620u: goto label_2ce620;
        case 0x2ce624u: goto label_2ce624;
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce62cu: goto label_2ce62c;
        case 0x2ce630u: goto label_2ce630;
        case 0x2ce634u: goto label_2ce634;
        case 0x2ce638u: goto label_2ce638;
        case 0x2ce63cu: goto label_2ce63c;
        case 0x2ce640u: goto label_2ce640;
        case 0x2ce644u: goto label_2ce644;
        case 0x2ce648u: goto label_2ce648;
        case 0x2ce64cu: goto label_2ce64c;
        case 0x2ce650u: goto label_2ce650;
        case 0x2ce654u: goto label_2ce654;
        case 0x2ce658u: goto label_2ce658;
        case 0x2ce65cu: goto label_2ce65c;
        case 0x2ce660u: goto label_2ce660;
        case 0x2ce664u: goto label_2ce664;
        case 0x2ce668u: goto label_2ce668;
        case 0x2ce66cu: goto label_2ce66c;
        case 0x2ce670u: goto label_2ce670;
        case 0x2ce674u: goto label_2ce674;
        case 0x2ce678u: goto label_2ce678;
        case 0x2ce67cu: goto label_2ce67c;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce684u: goto label_2ce684;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce68cu: goto label_2ce68c;
        case 0x2ce690u: goto label_2ce690;
        case 0x2ce694u: goto label_2ce694;
        case 0x2ce698u: goto label_2ce698;
        case 0x2ce69cu: goto label_2ce69c;
        case 0x2ce6a0u: goto label_2ce6a0;
        case 0x2ce6a4u: goto label_2ce6a4;
        case 0x2ce6a8u: goto label_2ce6a8;
        case 0x2ce6acu: goto label_2ce6ac;
        case 0x2ce6b0u: goto label_2ce6b0;
        case 0x2ce6b4u: goto label_2ce6b4;
        case 0x2ce6b8u: goto label_2ce6b8;
        case 0x2ce6bcu: goto label_2ce6bc;
        case 0x2ce6c0u: goto label_2ce6c0;
        case 0x2ce6c4u: goto label_2ce6c4;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6ccu: goto label_2ce6cc;
        case 0x2ce6d0u: goto label_2ce6d0;
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6d8u: goto label_2ce6d8;
        case 0x2ce6dcu: goto label_2ce6dc;
        case 0x2ce6e0u: goto label_2ce6e0;
        case 0x2ce6e4u: goto label_2ce6e4;
        case 0x2ce6e8u: goto label_2ce6e8;
        case 0x2ce6ecu: goto label_2ce6ec;
        case 0x2ce6f0u: goto label_2ce6f0;
        case 0x2ce6f4u: goto label_2ce6f4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce6fcu: goto label_2ce6fc;
        case 0x2ce700u: goto label_2ce700;
        case 0x2ce704u: goto label_2ce704;
        case 0x2ce708u: goto label_2ce708;
        case 0x2ce70cu: goto label_2ce70c;
        case 0x2ce710u: goto label_2ce710;
        case 0x2ce714u: goto label_2ce714;
        case 0x2ce718u: goto label_2ce718;
        case 0x2ce71cu: goto label_2ce71c;
        case 0x2ce720u: goto label_2ce720;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce728u: goto label_2ce728;
        case 0x2ce72cu: goto label_2ce72c;
        case 0x2ce730u: goto label_2ce730;
        case 0x2ce734u: goto label_2ce734;
        case 0x2ce738u: goto label_2ce738;
        case 0x2ce73cu: goto label_2ce73c;
        case 0x2ce740u: goto label_2ce740;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce748u: goto label_2ce748;
        case 0x2ce74cu: goto label_2ce74c;
        case 0x2ce750u: goto label_2ce750;
        case 0x2ce754u: goto label_2ce754;
        case 0x2ce758u: goto label_2ce758;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce760u: goto label_2ce760;
        case 0x2ce764u: goto label_2ce764;
        case 0x2ce768u: goto label_2ce768;
        case 0x2ce76cu: goto label_2ce76c;
        case 0x2ce770u: goto label_2ce770;
        case 0x2ce774u: goto label_2ce774;
        case 0x2ce778u: goto label_2ce778;
        case 0x2ce77cu: goto label_2ce77c;
        case 0x2ce780u: goto label_2ce780;
        case 0x2ce784u: goto label_2ce784;
        case 0x2ce788u: goto label_2ce788;
        case 0x2ce78cu: goto label_2ce78c;
        case 0x2ce790u: goto label_2ce790;
        case 0x2ce794u: goto label_2ce794;
        case 0x2ce798u: goto label_2ce798;
        case 0x2ce79cu: goto label_2ce79c;
        case 0x2ce7a0u: goto label_2ce7a0;
        case 0x2ce7a4u: goto label_2ce7a4;
        case 0x2ce7a8u: goto label_2ce7a8;
        case 0x2ce7acu: goto label_2ce7ac;
        case 0x2ce7b0u: goto label_2ce7b0;
        case 0x2ce7b4u: goto label_2ce7b4;
        case 0x2ce7b8u: goto label_2ce7b8;
        case 0x2ce7bcu: goto label_2ce7bc;
        case 0x2ce7c0u: goto label_2ce7c0;
        case 0x2ce7c4u: goto label_2ce7c4;
        case 0x2ce7c8u: goto label_2ce7c8;
        case 0x2ce7ccu: goto label_2ce7cc;
        case 0x2ce7d0u: goto label_2ce7d0;
        case 0x2ce7d4u: goto label_2ce7d4;
        case 0x2ce7d8u: goto label_2ce7d8;
        case 0x2ce7dcu: goto label_2ce7dc;
        case 0x2ce7e0u: goto label_2ce7e0;
        case 0x2ce7e4u: goto label_2ce7e4;
        case 0x2ce7e8u: goto label_2ce7e8;
        case 0x2ce7ecu: goto label_2ce7ec;
        case 0x2ce7f0u: goto label_2ce7f0;
        case 0x2ce7f4u: goto label_2ce7f4;
        case 0x2ce7f8u: goto label_2ce7f8;
        case 0x2ce7fcu: goto label_2ce7fc;
        case 0x2ce800u: goto label_2ce800;
        case 0x2ce804u: goto label_2ce804;
        case 0x2ce808u: goto label_2ce808;
        case 0x2ce80cu: goto label_2ce80c;
        case 0x2ce810u: goto label_2ce810;
        case 0x2ce814u: goto label_2ce814;
        case 0x2ce818u: goto label_2ce818;
        case 0x2ce81cu: goto label_2ce81c;
        case 0x2ce820u: goto label_2ce820;
        case 0x2ce824u: goto label_2ce824;
        case 0x2ce828u: goto label_2ce828;
        case 0x2ce82cu: goto label_2ce82c;
        case 0x2ce830u: goto label_2ce830;
        case 0x2ce834u: goto label_2ce834;
        case 0x2ce838u: goto label_2ce838;
        case 0x2ce83cu: goto label_2ce83c;
        default: return;
    }

label_2ce070:
    // 0x2ce070: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x2ce070u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_2ce074:
    // 0x2ce074: 0x6173206e  daddi       $s3, $t3, 0x206E
    ctx->pc = 0x2ce074u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce078:
    // 0x2ce078: 0x2e646576  sltiu       $a0, $s3, 0x6576
    ctx->pc = 0x2ce078u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25974) ? 1 : 0);
label_2ce07c:
    // 0x2ce07c: 0x6f440a20  ldr         $a0, 0xA20($k0)
    ctx->pc = 0x2ce07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 2592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2ce080:
    // 0x2ce080: 0x756f7920  .word       0x756F7920                   # INVALID     $t3, $t7, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce080u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE080 raw=0x756F7920");
 /* MITIGATED */
label_2ce084:
    // 0x2ce084: 0x73697720  .word       0x73697720                   # madd1       $t6, $k1, $t1 # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce084u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2ce088:
    // 0x2ce088: 0x6f742068  ldr         $s4, 0x2068($k1)
    ctx->pc = 0x2ce088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2ce08c:
    // 0x2ce08c: 0x6e6f6320  ldr         $t7, 0x6320($s3)
    ctx->pc = 0x2ce08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2ce090:
    // 0x2ce090: 0x756e6974  .word       0x756E6974                   # INVALID     $t3, $t6, 0x6974 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce090u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE090 raw=0x756E6974");
 /* MITIGATED */
label_2ce094:
    // 0x2ce094: 0x3f65  .word       0x00003F65                   # move        $a3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ce098:
    // 0x2ce098: 0x0  nop
    ctx->pc = 0x2ce098u;
    // NOP
label_2ce09c:
    // 0x2ce09c: 0x0  nop
    ctx->pc = 0x2ce09cu;
    // NOP
label_2ce0a0:
    // 0x2ce0a0: 0x44204f4e  .word       0x44204F4E                   # dmfc1       $zero, $f9 # 0000074E <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce0a0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0xE at 0x2CE0A0 raw=0x44204F4E");
 /* MITIGATED */
label_2ce0a4:
    // 0x2ce0a4: 0x415441  .word       0x00415441                   # INVALID     $v0, $at, 0x5441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce0a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CE0A4 raw=0x00415441");
 /* MITIGATED */
label_2ce0a8:
    // 0x2ce0a8: 0x643225  .word       0x00643225                   # or          $a2, $v1, $a0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce0a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ce0ac:
    // 0x2ce0ac: 0x0  nop
    ctx->pc = 0x2ce0acu;
    // NOP
label_2ce0b0:
    // 0x2ce0b0: 0x643525  .word       0x00643525                   # or          $a2, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ce0b4:
    // 0x2ce0b4: 0x0  nop
    ctx->pc = 0x2ce0b4u;
    // NOP
label_2ce0b8:
    // 0x2ce0b8: 0x27643325  addiu       $a0, $k1, 0x3325
    ctx->pc = 0x2ce0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 13093));
label_2ce0bc:
    // 0x2ce0bc: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2ce0bcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2ce0c0:
    // 0x2ce0c0: 0x0  nop
    ctx->pc = 0x2ce0c0u;
    // NOP
label_2ce0c4:
    // 0x2ce0c4: 0x0  nop
    ctx->pc = 0x2ce0c4u;
    // NOP
label_2ce0c8:
    // 0x2ce0c8: 0x0  nop
    ctx->pc = 0x2ce0c8u;
    // NOP
label_2ce0cc:
    // 0x2ce0cc: 0x0  nop
    ctx->pc = 0x2ce0ccu;
    // NOP
label_2ce0d0:
    // 0x2ce0d0: 0x3c3c1010  .word       0x3C3C1010                   # lui         $gp, 0x1010 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce0d0u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)4112 << 16));
label_2ce0d4:
    // 0x2ce0d4: 0x28282814  slti        $t0, $at, 0x2814
    ctx->pc = 0x2ce0d4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10260) ? 1 : 0);
label_2ce0d8:
    // 0x2ce0d8: 0x14142828  bne         $zero, $s4, . + 4 + (0x2828 << 2)
label_2ce0dc:
    if (ctx->pc == 0x2CE0DCu) {
        ctx->pc = 0x2CE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0D8u;
        // 0x2ce0dc: 0x140014  dsllv       $zero, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE0E0u;
        goto label_2ce0e0;
    }
    ctx->pc = 0x2CE0D8u;
    {
        const bool branch_taken_0x2ce0d8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 20));
        ctx->pc = 0x2CE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0D8u;
        // 0x2ce0dc: 0x140014  dsllv       $zero, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0d8) {
            ctx->pc = 0x2D817Cu;
            return;
        }
    }
    ctx->pc = 0x2CE0E0u;
label_2ce0e0:
    // 0x2ce0e0: 0x0  nop
    ctx->pc = 0x2ce0e0u;
    // NOP
label_2ce0e4:
    // 0x2ce0e4: 0x0  nop
    ctx->pc = 0x2ce0e4u;
    // NOP
label_2ce0e8:
    // 0x2ce0e8: 0x0  nop
    ctx->pc = 0x2ce0e8u;
    // NOP
label_2ce0ec:
    // 0x2ce0ec: 0x0  nop
    ctx->pc = 0x2ce0ecu;
    // NOP
label_2ce0f0:
    // 0x2ce0f0: 0x0  nop
    ctx->pc = 0x2ce0f0u;
    // NOP
label_2ce0f4:
    // 0x2ce0f4: 0x0  nop
    ctx->pc = 0x2ce0f4u;
    // NOP
label_2ce0f8:
    // 0x2ce0f8: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2ce0f8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2ce0fc:
    // 0x2ce0fc: 0x3230253a  andi        $s0, $s1, 0x253A
    ctx->pc = 0x2ce0fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9530);
label_2ce100:
    // 0x2ce100: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce100u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ce104:
    // 0x2ce104: 0x0  nop
    ctx->pc = 0x2ce104u;
    // NOP
label_2ce108:
    // 0x2ce108: 0x0  nop
    ctx->pc = 0x2ce108u;
    // NOP
label_2ce10c:
    // 0x2ce10c: 0x0  nop
    ctx->pc = 0x2ce10cu;
    // NOP
label_2ce110:
    // 0x2ce110: 0x27643225  addiu       $a0, $k1, 0x3225
    ctx->pc = 0x2ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 12837));
label_2ce114:
    // 0x2ce114: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2ce114u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2ce118:
    // 0x2ce118: 0x32302522  andi        $s0, $s1, 0x2522
    ctx->pc = 0x2ce118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9506);
label_2ce11c:
    // 0x2ce11c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce11cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ce120:
    // 0x2ce120: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x2ce120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ce124:
    // 0x2ce124: 0x0  nop
    ctx->pc = 0x2ce124u;
    // NOP
label_2ce128:
    // 0x2ce128: 0x0  nop
    ctx->pc = 0x2ce128u;
    // NOP
label_2ce12c:
    // 0x2ce12c: 0x0  nop
    ctx->pc = 0x2ce12cu;
    // NOP
label_2ce130:
    // 0x2ce130: 0x21c198  .word       0x0021C198                   # mult        $t8, $at, $at # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_2ce134:
    // 0x2ce134: 0x21c1a8  .word       0x0021C1A8                   # mfsa        $t8 # 00210180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce134u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_2ce138:
    // 0x2ce138: 0x21c238  .word       0x0021C238                   # dsll        $t8, $at, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce138u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) << 8);
label_2ce13c:
    // 0x2ce13c: 0x21c270  tge         $at, $at, 777
    ctx->pc = 0x2ce13cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2ce140:
    // 0x2ce140: 0x21c29c  .word       0x0021C29C                   # dmult       $at, $at # 0000C280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce140u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CE140 raw=0x0021C29C");
 /* MITIGATED */
label_2ce144:
    // 0x2ce144: 0x21c2bc  .word       0x0021C2BC                   # dsll32      $t8, $at, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce144u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) << (32 + 10));
label_2ce148:
    // 0x2ce148: 0x21c2e4  .word       0x0021C2E4                   # and         $t8, $at, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce148u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) & GPR_U64(ctx, 1));
label_2ce14c:
    // 0x2ce14c: 0x0  nop
    ctx->pc = 0x2ce14cu;
    // NOP
label_2ce150:
    // 0x2ce150: 0x544e494e  bnel        $v0, $t6, . + 4 + (0x494E << 2)
label_2ce154:
    if (ctx->pc == 0x2CE154u) {
        ctx->pc = 0x2CE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE150u;
        // 0x2ce154: 0x4e45  .word       0x00004E45                   # INVALID     $zero, $zero, 0x4E45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CE154 raw=0x00004E45");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE158u;
        goto label_2ce158;
    }
    ctx->pc = 0x2CE150u;
    {
        const bool branch_taken_0x2ce150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x2ce150) {
            ctx->pc = 0x2CE154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE150u;
            // 0x2ce154: 0x4e45  .word       0x00004E45                   # INVALID     $zero, $zero, 0x4E45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CE154 raw=0x00004E45");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E068Cu;
            return;
        }
    }
    ctx->pc = 0x2CE158u;
label_2ce158:
    // 0x2ce158: 0x55434d47  bnel        $t2, $v1, . + 4 + (0x4D47 << 2)
label_2ce15c:
    if (ctx->pc == 0x2CE15Cu) {
        ctx->pc = 0x2CE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE158u;
        // 0x2ce15c: 0x4542  srl         $t0, $zero, 21 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE160u;
        goto label_2ce160;
    }
    ctx->pc = 0x2CE158u;
    {
        const bool branch_taken_0x2ce158 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce158) {
            ctx->pc = 0x2CE15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE158u;
            // 0x2ce15c: 0x4542  srl         $t0, $zero, 21 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1678u;
            return;
        }
    }
    ctx->pc = 0x2CE160u;
label_2ce160:
    // 0x2ce160: 0x21f024  and         $fp, $at, $at
    ctx->pc = 0x2ce160u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) & GPR_U64(ctx, 1));
label_2ce164:
    // 0x2ce164: 0x21f048  .word       0x0021F048                   # jr          $at # 0001F040 <InstrIdType: CPU_SPECIAL>
label_2ce168:
    if (ctx->pc == 0x2CE168u) {
        ctx->pc = 0x2CE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE164u;
        // 0x2ce168: 0x21f0b0  tge         $at, $at, 962 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE16Cu;
        goto label_2ce16c;
    }
    ctx->pc = 0x2CE164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE164u;
        // 0x2ce168: 0x21f0b0  tge         $at, $at, 962 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE164u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE16Cu;
label_2ce16c:
    // 0x2ce16c: 0x21f0b0  tge         $at, $at, 962
    ctx->pc = 0x2ce16cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2ce170:
    // 0x2ce170: 0x21f0d4  .word       0x0021F0D4                   # dsllv       $fp, $at, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce170u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) << (GPR_U32(ctx, 1) & 0x3F));
label_2ce174:
    // 0x2ce174: 0x21f188  .word       0x0021F188                   # jr          $at # 0001F180 <InstrIdType: CPU_SPECIAL>
label_2ce178:
    if (ctx->pc == 0x2CE178u) {
        ctx->pc = 0x2CE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE174u;
        // 0x2ce178: 0x21f23c  .word       0x0021F23C                   # dsll32      $fp, $at, 8 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) << (32 + 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE17Cu;
        goto label_2ce17c;
    }
    ctx->pc = 0x2CE174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE174u;
        // 0x2ce178: 0x21f23c  .word       0x0021F23C                   # dsll32      $fp, $at, 8 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) << (32 + 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE174u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE17Cu;
label_2ce17c:
    // 0x2ce17c: 0x21f2f0  tge         $at, $at, 971
    ctx->pc = 0x2ce17cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2ce180:
    // 0x2ce180: 0x223fdc  .word       0x00223FDC                   # dmult       $at, $v0 # 00003FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce180u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CE180 raw=0x00223FDC");
 /* MITIGATED */
label_2ce184:
    // 0x2ce184: 0x224054  .word       0x00224054                   # dsllv       $t0, $v0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (GPR_U32(ctx, 1) & 0x3F));
label_2ce188:
    // 0x2ce188: 0x2240cc  .word       0x002240CC                   # syscall     259 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce188u;
    ctx->pc = 0x2CE18Cu;
runtime->handleSyscall(rdram, ctx, 0x8903u);
label_2ce18c:
    // 0x2ce18c: 0x2240e8  .word       0x002240E8                   # mfsa        $t0 # 002200C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce18cu;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_2ce190:
    // 0x2ce190: 0x224104  .word       0x00224104                   # sllv        $t0, $v0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce190u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 1) & 0x1F));
label_2ce194:
    // 0x2ce194: 0x2242a4  .word       0x002242A4                   # and         $t0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_2ce198:
    // 0x2ce198: 0x2242b8  .word       0x002242B8                   # dsll        $t0, $v0, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 10);
label_2ce19c:
    // 0x2ce19c: 0x0  nop
    ctx->pc = 0x2ce19cu;
    // NOP
label_2ce1a0:
    // 0x2ce1a0: 0x471b2041  .word       0x471B2041                   # INVALID     $t8, $k1, 0x2041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce1a0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x1 at 0x2CE1A0 raw=0x471B2041");
 /* MITIGATED */
label_2ce1a4:
    // 0x2ce1a4: 0x65727432  daddiu      $s2, $t3, 0x7432
    ctx->pc = 0x2ce1a4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29746);
label_2ce1a8:
    // 0x2ce1a8: 0x72757361  .word       0x72757361                   # maddu1      $t6, $s3, $s5 # 00000340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce1a8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2ce1ac:
    // 0x2ce1ac: 0x68632065  ldl         $v1, 0x2065($v1)
    ctx->pc = 0x2ce1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2ce1b0:
    // 0x2ce1b0: 0x1b747365  .word       0x1B747365                   # blez        $k1, . + 4 + (0x7365 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2ce1b4:
    if (ctx->pc == 0x2CE1B4u) {
        ctx->pc = 0x2CE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1B0u;
        // 0x2ce1b4: 0x61683747  daddi       $t0, $t3, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1B8u;
        goto label_2ce1b8;
    }
    ctx->pc = 0x2CE1B0u;
    {
        const bool branch_taken_0x2ce1b0 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1B0u;
        // 0x2ce1b4: 0x61683747  daddi       $t0, $t3, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1b0) {
            ctx->pc = 0x2EAF48u;
            return;
        }
    }
    ctx->pc = 0x2CE1B8u;
label_2ce1b8:
    // 0x2ce1b8: 0x70612073  .word       0x70612073                   # INVALID     $v1, $at, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce1b8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CE1B8 raw=0x70612073");
 /* MITIGATED */
label_2ce1bc:
    // 0x2ce1bc: 0x72616570  .word       0x72616570                   # INVALID     $s3, $at, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2ce1bcu;
//     throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x2CE1BC raw=0x72616570");
 /* MITIGATED */
label_2ce1c0:
    // 0x2ce1c0: 0x216465  .word       0x00216465                   # or          $t4, $at, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce1c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 1));
label_2ce1c4:
    // 0x2ce1c4: 0x0  nop
    ctx->pc = 0x2ce1c4u;
    // NOP
label_2ce1c8:
    // 0x2ce1c8: 0x0  nop
    ctx->pc = 0x2ce1c8u;
    // NOP
label_2ce1cc:
    // 0x2ce1cc: 0x0  nop
    ctx->pc = 0x2ce1ccu;
    // NOP
label_2ce1d0:
    // 0x2ce1d0: 0x22e8b8  .word       0x0022E8B8                   # dsll        $sp, $v0, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce1d0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << 2);
label_2ce1d4:
    // 0x2ce1d4: 0x22e8c8  .word       0x0022E8C8                   # jr          $at # 0002E8C0 <InstrIdType: CPU_SPECIAL>
label_2ce1d8:
    if (ctx->pc == 0x2CE1D8u) {
        ctx->pc = 0x2CE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1D4u;
        // 0x2ce1d8: 0x22e8ec  .word       0x0022E8EC                   # dadd        $sp, $at, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1DCu;
        goto label_2ce1dc;
    }
    ctx->pc = 0x2CE1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1D4u;
        // 0x2ce1d8: 0x22e8ec  .word       0x0022E8EC                   # dadd        $sp, $at, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE1D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE1DCu;
label_2ce1dc:
    // 0x2ce1dc: 0x22e8fc  .word       0x0022E8FC                   # dsll32      $sp, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce1dcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 3));
label_2ce1e0:
    // 0x2ce1e0: 0x22e90c  .word       0x0022E90C                   # syscall     932 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce1e0u;
    ctx->pc = 0x2CE1E4u;
runtime->handleSyscall(rdram, ctx, 0x8BA4u);
label_2ce1e4:
    // 0x2ce1e4: 0x22e98c  .word       0x0022E98C                   # syscall     934 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce1e4u;
    ctx->pc = 0x2CE1E8u;
runtime->handleSyscall(rdram, ctx, 0x8BA6u);
label_2ce1e8:
    // 0x2ce1e8: 0x22e9a8  .word       0x0022E9A8                   # mfsa        $sp # 00220180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce1e8u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2ce1ec:
    // 0x2ce1ec: 0x22e9c0  .word       0x0022E9C0                   # sll         $sp, $v0, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_2ce1f0:
    // 0x2ce1f0: 0x20202000  addi        $zero, $at, 0x2000
    ctx->pc = 0x2ce1f0u;
    // NOP (addi to $zero)
label_2ce1f4:
    // 0x2ce1f4: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce1f4u;
    // NOP (addi to $zero)
label_2ce1f8:
    // 0x2ce1f8: 0x28282020  slti        $t0, $at, 0x2020
    ctx->pc = 0x2ce1f8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)8224) ? 1 : 0);
label_2ce1fc:
    // 0x2ce1fc: 0x20282828  addi        $t0, $at, 0x2828
    ctx->pc = 0x2ce1fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2ce200:
    // 0x2ce200: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce200u;
    // NOP (addi to $zero)
label_2ce204:
    // 0x2ce204: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce204u;
    // NOP (addi to $zero)
label_2ce208:
    // 0x2ce208: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce208u;
    // NOP (addi to $zero)
label_2ce20c:
    // 0x2ce20c: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce20cu;
    // NOP (addi to $zero)
label_2ce210:
    // 0x2ce210: 0x10108820  beq         $zero, $s0, . + 4 + (-0x77E0 << 2)
label_2ce214:
    if (ctx->pc == 0x2CE214u) {
        ctx->pc = 0x2CE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE210u;
        // 0x2ce214: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CE214 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE218u;
        goto label_2ce218;
    }
    ctx->pc = 0x2CE210u;
    {
        const bool branch_taken_0x2ce210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE210u;
        // 0x2ce214: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CE214 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce210) {
            ctx->pc = 0x2B0294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2b0294; return; }
        }
    }
    ctx->pc = 0x2CE218u;
label_2ce218:
    // 0x2ce218: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_2ce21c:
    if (ctx->pc == 0x2CE21Cu) {
        ctx->pc = 0x2CE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE218u;
        // 0x2ce21c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CE21C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE220u;
        goto label_2ce220;
    }
    ctx->pc = 0x2CE218u;
    {
        const bool branch_taken_0x2ce218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE218u;
        // 0x2ce21c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CE21C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce218) {
            ctx->pc = 0x2D225Cu;
            return;
        }
    }
    ctx->pc = 0x2CE220u;
label_2ce220:
    // 0x2ce220: 0x4040410  .word       0x04040410                   # INVALID     $zero, $a0, 0x410 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2ce220u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CE220 raw=0x04040410");
 /* MITIGATED */
label_2ce224:
    // 0x2ce224: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2ce224u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CE224 raw=0x04040404");
 /* MITIGATED */
label_2ce228:
    // 0x2ce228: 0x10040404  beq         $zero, $a0, . + 4 + (0x404 << 2)
label_2ce22c:
    if (ctx->pc == 0x2CE22Cu) {
        ctx->pc = 0x2CE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE228u;
        // 0x2ce22c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CE22C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE230u;
        goto label_2ce230;
    }
    ctx->pc = 0x2CE228u;
    {
        const bool branch_taken_0x2ce228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE228u;
        // 0x2ce22c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CE22C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce228) {
            ctx->pc = 0x2CF23Cu;
            return;
        }
    }
    ctx->pc = 0x2CE230u;
label_2ce230:
    // 0x2ce230: 0x41411010  .word       0x41411010                   # INVALID     $t2, $at, 0x1010 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce230u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2CE230 raw=0x41411010");
 /* MITIGATED */
label_2ce234:
    // 0x2ce234: 0x41414141  .word       0x41414141                   # INVALID     $t2, $at, 0x4141 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce234u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2CE234 raw=0x41414141");
 /* MITIGATED */
label_2ce238:
    // 0x2ce238: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce238u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CE238 raw=0x01010101");
 /* MITIGATED */
label_2ce23c:
    // 0x2ce23c: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce23cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CE23C raw=0x01010101");
 /* MITIGATED */
label_2ce240:
    // 0x2ce240: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce240u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CE240 raw=0x01010101");
 /* MITIGATED */
label_2ce244:
    // 0x2ce244: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce244u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CE244 raw=0x01010101");
 /* MITIGATED */
label_2ce248:
    // 0x2ce248: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce248u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CE248 raw=0x01010101");
 /* MITIGATED */
label_2ce24c:
    // 0x2ce24c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_2ce250:
    if (ctx->pc == 0x2CE250u) {
        ctx->pc = 0x2CE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE24Cu;
        // 0x2ce250: 0x42421010  .word       0x42421010                   # INVALID     $s2, $v0, 0x1010 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CE250 raw=0x42421010");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE254u;
        goto label_2ce254;
    }
    ctx->pc = 0x2CE24Cu;
    {
        const bool branch_taken_0x2ce24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE24Cu;
        // 0x2ce250: 0x42421010  .word       0x42421010                   # INVALID     $s2, $v0, 0x1010 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CE250 raw=0x42421010");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce24c) {
            ctx->pc = 0x2D2290u;
            return;
        }
    }
    ctx->pc = 0x2CE254u;
label_2ce254:
    // 0x2ce254: 0x42424242  .word       0x42424242                   # INVALID     $s2, $v0, 0x4242 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce254u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CE254 raw=0x42424242");
 /* MITIGATED */
label_2ce258:
    // 0x2ce258: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce258u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2ce25c:
    // 0x2ce25c: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce25cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2ce260:
    // 0x2ce260: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2ce264:
    // 0x2ce264: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce264u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2ce268:
    // 0x2ce268: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2ce26c:
    // 0x2ce26c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_2ce270:
    if (ctx->pc == 0x2CE270u) {
        ctx->pc = 0x2CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE26Cu;
        // 0x2ce270: 0x20  add         $zero, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE274u;
        goto label_2ce274;
    }
    ctx->pc = 0x2CE26Cu;
    {
        const bool branch_taken_0x2ce26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE26Cu;
        // 0x2ce270: 0x20  add         $zero, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce26c) {
            ctx->pc = 0x2D22B0u;
            return;
        }
    }
    ctx->pc = 0x2CE274u;
label_2ce274:
    // 0x2ce274: 0x0  nop
    ctx->pc = 0x2ce274u;
    // NOP
label_2ce278:
    // 0x2ce278: 0x0  nop
    ctx->pc = 0x2ce278u;
    // NOP
label_2ce27c:
    // 0x2ce27c: 0x0  nop
    ctx->pc = 0x2ce27cu;
    // NOP
label_2ce280:
    // 0x2ce280: 0x0  nop
    ctx->pc = 0x2ce280u;
    // NOP
label_2ce284:
    // 0x2ce284: 0x0  nop
    ctx->pc = 0x2ce284u;
    // NOP
label_2ce288:
    // 0x2ce288: 0x0  nop
    ctx->pc = 0x2ce288u;
    // NOP
label_2ce28c:
    // 0x2ce28c: 0x0  nop
    ctx->pc = 0x2ce28cu;
    // NOP
label_2ce290:
    // 0x2ce290: 0x0  nop
    ctx->pc = 0x2ce290u;
    // NOP
label_2ce294:
    // 0x2ce294: 0x0  nop
    ctx->pc = 0x2ce294u;
    // NOP
label_2ce298:
    // 0x2ce298: 0x0  nop
    ctx->pc = 0x2ce298u;
    // NOP
label_2ce29c:
    // 0x2ce29c: 0x0  nop
    ctx->pc = 0x2ce29cu;
    // NOP
label_2ce2a0:
    // 0x2ce2a0: 0x0  nop
    ctx->pc = 0x2ce2a0u;
    // NOP
label_2ce2a4:
    // 0x2ce2a4: 0x0  nop
    ctx->pc = 0x2ce2a4u;
    // NOP
label_2ce2a8:
    // 0x2ce2a8: 0x0  nop
    ctx->pc = 0x2ce2a8u;
    // NOP
label_2ce2ac:
    // 0x2ce2ac: 0x0  nop
    ctx->pc = 0x2ce2acu;
    // NOP
label_2ce2b0:
    // 0x2ce2b0: 0x0  nop
    ctx->pc = 0x2ce2b0u;
    // NOP
label_2ce2b4:
    // 0x2ce2b4: 0x0  nop
    ctx->pc = 0x2ce2b4u;
    // NOP
label_2ce2b8:
    // 0x2ce2b8: 0x0  nop
    ctx->pc = 0x2ce2b8u;
    // NOP
label_2ce2bc:
    // 0x2ce2bc: 0x0  nop
    ctx->pc = 0x2ce2bcu;
    // NOP
label_2ce2c0:
    // 0x2ce2c0: 0x0  nop
    ctx->pc = 0x2ce2c0u;
    // NOP
label_2ce2c4:
    // 0x2ce2c4: 0x0  nop
    ctx->pc = 0x2ce2c4u;
    // NOP
label_2ce2c8:
    // 0x2ce2c8: 0x0  nop
    ctx->pc = 0x2ce2c8u;
    // NOP
label_2ce2cc:
    // 0x2ce2cc: 0x0  nop
    ctx->pc = 0x2ce2ccu;
    // NOP
label_2ce2d0:
    // 0x2ce2d0: 0x0  nop
    ctx->pc = 0x2ce2d0u;
    // NOP
label_2ce2d4:
    // 0x2ce2d4: 0x0  nop
    ctx->pc = 0x2ce2d4u;
    // NOP
label_2ce2d8:
    // 0x2ce2d8: 0x0  nop
    ctx->pc = 0x2ce2d8u;
    // NOP
label_2ce2dc:
    // 0x2ce2dc: 0x0  nop
    ctx->pc = 0x2ce2dcu;
    // NOP
label_2ce2e0:
    // 0x2ce2e0: 0x0  nop
    ctx->pc = 0x2ce2e0u;
    // NOP
label_2ce2e4:
    // 0x2ce2e4: 0x0  nop
    ctx->pc = 0x2ce2e4u;
    // NOP
label_2ce2e8:
    // 0x2ce2e8: 0x0  nop
    ctx->pc = 0x2ce2e8u;
    // NOP
label_2ce2ec:
    // 0x2ce2ec: 0x0  nop
    ctx->pc = 0x2ce2ecu;
    // NOP
label_2ce2f0:
    // 0x2ce2f0: 0x0  nop
    ctx->pc = 0x2ce2f0u;
    // NOP
label_2ce2f4:
    // 0x2ce2f4: 0x0  nop
    ctx->pc = 0x2ce2f4u;
    // NOP
label_2ce2f8:
    // 0x2ce2f8: 0x0  nop
    ctx->pc = 0x2ce2f8u;
    // NOP
label_2ce2fc:
    // 0x2ce2fc: 0x0  nop
    ctx->pc = 0x2ce2fcu;
    // NOP
label_2ce300:
    // 0x2ce300: 0x69666e49  ldl         $a2, 0x6E49($t3)
    ctx->pc = 0x2ce300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2ce304:
    // 0x2ce304: 0x7974696e  lq          $s4, 0x696E($t3)
    ctx->pc = 0x2ce304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 26990)));
label_2ce308:
    // 0x2ce308: 0x0  nop
    ctx->pc = 0x2ce308u;
    // NOP
label_2ce30c:
    // 0x2ce30c: 0x0  nop
    ctx->pc = 0x2ce30cu;
    // NOP
label_2ce310:
    // 0x2ce310: 0x4e614e  .word       0x004E614E                   # INVALID     $v0, $t6, 0x614E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce310u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2CE310 raw=0x004E614E");
 /* MITIGATED */
label_2ce314:
    // 0x2ce314: 0x0  nop
    ctx->pc = 0x2ce314u;
    // NOP
label_2ce318:
    // 0x2ce318: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2ce318u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ce31c:
    // 0x2ce31c: 0x0  nop
    ctx->pc = 0x2ce31cu;
    // NOP
label_2ce320:
    // 0x2ce320: 0x636f4361  daddi       $t7, $k1, 0x4361
    ctx->pc = 0x2ce320u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)17249; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2ce324:
    // 0x2ce324: 0x3fd287a7  .word       0x3FD287A7                   # lui         $s2, 0x87A7 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34727 << 16));
label_2ce328:
    // 0x2ce328: 0x8b60c8b3  lwl         $zero, -0x374D($k1)
    ctx->pc = 0x2ce328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294953139); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_2ce32c:
    // 0x2ce32c: 0x3fc68a28  .word       0x3FC68A28                   # lui         $a2, 0x8A28 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce32cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35368 << 16));
label_2ce330:
    // 0x2ce330: 0x509f79fb  beql        $a0, $ra, . + 4 + (0x79FB << 2)
label_2ce334:
    if (ctx->pc == 0x2CE334u) {
        ctx->pc = 0x2CE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE330u;
        // 0x2ce334: 0x3fd34413  .word       0x3FD34413                   # lui         $s3, 0x4413 # 03C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)17427 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE338u;
        goto label_2ce338;
    }
    ctx->pc = 0x2CE330u;
    {
        const bool branch_taken_0x2ce330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 31));
        if (branch_taken_0x2ce330) {
            ctx->pc = 0x2CE334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE330u;
            // 0x2ce334: 0x3fd34413  .word       0x3FD34413                   # lui         $s3, 0x4413 # 03C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)17427 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECB20u;
            return;
        }
    }
    ctx->pc = 0x2CE338u;
label_2ce338:
    // 0x2ce338: 0x0  nop
    ctx->pc = 0x2ce338u;
    // NOP
label_2ce33c:
    // 0x2ce33c: 0x0  nop
    ctx->pc = 0x2ce33cu;
    // NOP
label_2ce340:
    // 0x2ce340: 0x2378f8  .word       0x002378F8                   # dsll        $t7, $v1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce340u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << 3);
label_2ce344:
    // 0x2ce344: 0x2378f8  .word       0x002378F8                   # dsll        $t7, $v1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce344u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << 3);
label_2ce348:
    // 0x2ce348: 0x237908  .word       0x00237908                   # jr          $at # 00037900 <InstrIdType: CPU_SPECIAL>
label_2ce34c:
    if (ctx->pc == 0x2CE34Cu) {
        ctx->pc = 0x2CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE348u;
        // 0x2ce34c: 0x237930  tge         $at, $v1, 484 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE350u;
        goto label_2ce350;
    }
    ctx->pc = 0x2CE348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE348u;
        // 0x2ce34c: 0x237930  tge         $at, $v1, 484 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE348u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE350u;
label_2ce350:
    // 0x2ce350: 0x23790c  .word       0x0023790C                   # syscall     484 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce350u;
    ctx->pc = 0x2CE354u;
runtime->handleSyscall(rdram, ctx, 0x8DE4u);
label_2ce354:
    // 0x2ce354: 0x237934  teq         $at, $v1, 484
    ctx->pc = 0x2ce354u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce358:
    // 0x2ce358: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x2ce358u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_2ce35c:
    // 0x2ce35c: 0x0  nop
    ctx->pc = 0x2ce35cu;
    // NOP
label_2ce360:
    // 0x2ce360: 0x2ce398  .word       0x002CE398                   # mult        $gp, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2ce364:
    // 0x2ce364: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce364u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce368:
    // 0x2ce368: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce368u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce36c:
    // 0x2ce36c: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce36cu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce370:
    // 0x2ce370: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce370u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce374:
    // 0x2ce374: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce374u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce378:
    // 0x2ce378: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce378u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce37c:
    // 0x2ce37c: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce37cu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce380:
    // 0x2ce380: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce380u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce384:
    // 0x2ce384: 0x2ce390  .word       0x002CE390                   # mfhi        $gp # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce384u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2ce388:
    // 0x2ce388: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x2ce388u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_2ce38c:
    // 0x2ce38c: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x2ce38cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_2ce390:
    // 0x2ce390: 0x0  nop
    ctx->pc = 0x2ce390u;
    // NOP
label_2ce394:
    // 0x2ce394: 0x0  nop
    ctx->pc = 0x2ce394u;
    // NOP
label_2ce398:
    // 0x2ce398: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2ce398u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2ce39c:
    // 0x2ce39c: 0x0  nop
    ctx->pc = 0x2ce39cu;
    // NOP
label_2ce3a0:
    // 0x2ce3a0: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x2ce3a0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_2ce3a4:
    // 0x2ce3a4: 0x0  nop
    ctx->pc = 0x2ce3a4u;
    // NOP
label_2ce3a8:
    // 0x2ce3a8: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce3a8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CE3A8 raw=0x00000005");
 /* MITIGATED */
label_2ce3ac:
    // 0x2ce3ac: 0x19  multu       $zero, $zero
    ctx->pc = 0x2ce3acu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ce3b0:
    // 0x2ce3b0: 0x7d  .word       0x0000007D                   # INVALID     $zero, $zero, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce3b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2CE3B0 raw=0x0000007D");
 /* MITIGATED */
label_2ce3b4:
    // 0x2ce3b4: 0x0  nop
    ctx->pc = 0x2ce3b4u;
    // NOP
label_2ce3b8:
    // 0x2ce3b8: 0x0  nop
    ctx->pc = 0x2ce3b8u;
    // NOP
label_2ce3bc:
    // 0x2ce3bc: 0x3ff00000  .word       0x3FF00000                   # lui         $s0, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_2ce3c0:
    // 0x2ce3c0: 0x0  nop
    ctx->pc = 0x2ce3c0u;
    // NOP
label_2ce3c4:
    // 0x2ce3c4: 0x40240000  dmfc0       $a0, Index
    ctx->pc = 0x2ce3c4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2CE3C4 raw=0x40240000");
 /* MITIGATED */
label_2ce3c8:
    // 0x2ce3c8: 0x0  nop
    ctx->pc = 0x2ce3c8u;
    // NOP
label_2ce3cc:
    // 0x2ce3cc: 0x40590000  cfc0        $t9, Index
    ctx->pc = 0x2ce3ccu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2CE3CC raw=0x40590000");
 /* MITIGATED */
label_2ce3d0:
    // 0x2ce3d0: 0x0  nop
    ctx->pc = 0x2ce3d0u;
    // NOP
label_2ce3d4:
    // 0x2ce3d4: 0x408f4000  mtc0        $t7, BadVaddr
    ctx->pc = 0x2ce3d4u;
    // MTC0 to BADVADDR register ignored (read-only)
label_2ce3d8:
    // 0x2ce3d8: 0x0  nop
    ctx->pc = 0x2ce3d8u;
    // NOP
label_2ce3dc:
    // 0x2ce3dc: 0x40c38800  ctc0        $v1, LLAddr
    ctx->pc = 0x2ce3dcu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2CE3DC raw=0x40C38800");
 /* MITIGATED */
label_2ce3e0:
    // 0x2ce3e0: 0x0  nop
    ctx->pc = 0x2ce3e0u;
    // NOP
label_2ce3e4:
    // 0x2ce3e4: 0x40f86a00  .word       0x40F86A00                   # INVALID     $a3, $t8, 0x6A00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce3e4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x2CE3E4 raw=0x40F86A00");
 /* MITIGATED */
label_2ce3e8:
    // 0x2ce3e8: 0x0  nop
    ctx->pc = 0x2ce3e8u;
    // NOP
label_2ce3ec:
    // 0x2ce3ec: 0x412e8480  .word       0x412E8480                   # INVALID     $t1, $t6, -0x7B80 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce3ecu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2CE3EC raw=0x412E8480");
 /* MITIGATED */
label_2ce3f0:
    // 0x2ce3f0: 0x0  nop
    ctx->pc = 0x2ce3f0u;
    // NOP
label_2ce3f4:
    // 0x2ce3f4: 0x416312d0  .word       0x416312D0                   # INVALID     $t3, $v1, 0x12D0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce3f4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2CE3F4 raw=0x416312D0");
 /* MITIGATED */
label_2ce3f8:
    // 0x2ce3f8: 0x0  nop
    ctx->pc = 0x2ce3f8u;
    // NOP
label_2ce3fc:
    // 0x2ce3fc: 0x4197d784  .word       0x4197D784                   # INVALID     $t4, $s7, -0x287C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce3fcu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x2CE3FC raw=0x4197D784");
 /* MITIGATED */
label_2ce400:
    // 0x2ce400: 0x0  nop
    ctx->pc = 0x2ce400u;
    // NOP
label_2ce404:
    // 0x2ce404: 0x41cdcd65  .word       0x41CDCD65                   # INVALID     $t6, $t5, -0x329B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce404u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2CE404 raw=0x41CDCD65");
 /* MITIGATED */
label_2ce408:
    // 0x2ce408: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2ce408u;
    // NOP (addi to $zero)
label_2ce40c:
    // 0x2ce40c: 0x4202a05f  .word       0x4202A05F                   # INVALID     $s0, $v0, -0x5FA1 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ce40cu;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1F at 0x2CE40C raw=0x4202A05F");
 /* MITIGATED */
label_2ce410:
    // 0x2ce410: 0xe8000000  swc2        $0, 0x0($zero)
    ctx->pc = 0x2ce410u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x2CE410 raw=0xE8000000");
 /* MITIGATED */
label_2ce414:
    // 0x2ce414: 0x42374876  .word       0x42374876                   # INVALID     $s1, $s7, 0x4876 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce414u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CE414 raw=0x42374876");
 /* MITIGATED */
label_2ce418:
    // 0x2ce418: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2ce418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ce41c:
    // 0x2ce41c: 0x426d1a94  .word       0x426D1A94                   # INVALID     $s3, $t5, 0x1A94 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce41cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x2CE41C raw=0x426D1A94");
 /* MITIGATED */
label_2ce420:
    // 0x2ce420: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2ce420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_2ce424:
    // 0x2ce424: 0x42a2309c  .word       0x42A2309C                   # INVALID     $s5, $v0, 0x309C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce424u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2CE424 raw=0x42A2309C");
 /* MITIGATED */
label_2ce428:
    // 0x2ce428: 0x1e900000  .word       0x1E900000                   # bgtz        $s4, . + 4 + (0x0 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_2ce42c:
    if (ctx->pc == 0x2CE42Cu) {
        ctx->pc = 0x2CE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE428u;
        // 0x2ce42c: 0x42d6bcc4  .word       0x42D6BCC4                   # INVALID     $s6, $s6, -0x433C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2CE42C raw=0x42D6BCC4");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE430u;
        goto label_2ce430;
    }
    ctx->pc = 0x2CE428u;
    {
        const bool branch_taken_0x2ce428 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2CE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE428u;
        // 0x2ce42c: 0x42d6bcc4  .word       0x42D6BCC4                   # INVALID     $s6, $s6, -0x433C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
//         throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2CE42C raw=0x42D6BCC4");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce428) {
            ctx->pc = 0x2CE42Cu;
            goto label_2ce42c;
        }
    }
    ctx->pc = 0x2CE430u;
label_2ce430:
    // 0x2ce430: 0x26340000  addiu       $s4, $s1, 0x0
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 0));
label_2ce434:
    // 0x2ce434: 0x430c6bf5  .word       0x430C6BF5                   # INVALID     $t8, $t4, 0x6BF5 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce434u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2CE434 raw=0x430C6BF5");
 /* MITIGATED */
label_2ce438:
    // 0x2ce438: 0x37e08000  ori         $zero, $ra, 0x8000
    ctx->pc = 0x2ce438u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) | (uint64_t)(uint16_t)32768);
label_2ce43c:
    // 0x2ce43c: 0x4341c379  .word       0x4341C379                   # INVALID     $k0, $at, -0x3C87 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce43cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2CE43C raw=0x4341C379");
 /* MITIGATED */
label_2ce440:
    // 0x2ce440: 0x85d8a000  lh          $t8, -0x6000($t6)
    ctx->pc = 0x2ce440u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294942720)));
label_2ce444:
    // 0x2ce444: 0x43763457  .word       0x43763457                   # INVALID     $k1, $s6, 0x3457 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce444u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CE444 raw=0x43763457");
 /* MITIGATED */
label_2ce448:
    // 0x2ce448: 0x674ec800  daddiu      $t6, $k0, -0x3800
    ctx->pc = 0x2ce448u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294952960);
label_2ce44c:
    // 0x2ce44c: 0x43abc16d  .word       0x43ABC16D                   # INVALID     $sp, $t3, -0x3E93 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce44cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x2CE44C raw=0x43ABC16D");
 /* MITIGATED */
label_2ce450:
    // 0x2ce450: 0x60913d00  daddi       $s1, $a0, 0x3D00
    ctx->pc = 0x2ce450u;
    { int64_t src = (int64_t)GPR_S64(ctx, 4); int64_t imm = (int64_t)(int32_t)15616; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_2ce454:
    // 0x2ce454: 0x43e158e4  .word       0x43E158E4                   # INVALID     $ra, $at, 0x58E4 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce454u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x2CE454 raw=0x43E158E4");
 /* MITIGATED */
label_2ce458:
    // 0x2ce458: 0x78b58c40  lq          $s5, -0x73C0($a1)
    ctx->pc = 0x2ce458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 5), 4294937664)));
label_2ce45c:
    // 0x2ce45c: 0x4415af1d  .word       0x4415AF1D                   # mfc1        $s5, $f21 # 0000071D <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce45cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_2ce460:
    // 0x2ce460: 0xd6e2ef50  ldc1        $f2, -0x10B0($s7)
    ctx->pc = 0x2ce460u;
//     throw std::runtime_error("Unhandled opcode: 0x35 at 0x2CE460 raw=0xD6E2EF50");
 /* MITIGATED */
label_2ce464:
    // 0x2ce464: 0x444b1ae4  .word       0x444B1AE4                   # cfc1        $t3, $3 # 000002E4 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce464u;
    SET_GPR_U32(ctx, 11, 0); // Unimplemented FCR3
label_2ce468:
    // 0x2ce468: 0x64dd592  .word       0x064DD592                   # INVALID     $s2, $t5, -0x2A6E # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2ce468u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x2CE468 raw=0x064DD592");
 /* MITIGATED */
label_2ce46c:
    // 0x2ce46c: 0x4480f0cf  .word       0x4480F0CF                   # mtc1        $zero, $f30 # 000000CF <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_2ce470:
    // 0x2ce470: 0xc7e14af6  lwc1        $f1, 0x4AF6($ra)
    ctx->pc = 0x2ce470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 31), 19190)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce474:
    // 0x2ce474: 0x44b52d02  .word       0x44B52D02                   # dmtc1       $s5, $f5 # 00000502 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce474u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x2 at 0x2CE474 raw=0x44B52D02");
 /* MITIGATED */
label_2ce478:
    // 0x2ce478: 0x79d99db4  lq          $t9, -0x624C($t6)
    ctx->pc = 0x2ce478u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 14), 4294942132)));
label_2ce47c:
    // 0x2ce47c: 0x44ea7843  .word       0x44EA7843                   # INVALID     $a3, $t2, 0x7843 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce47cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x3 at 0x2CE47C raw=0x44EA7843");
 /* MITIGATED */
label_2ce480:
    // 0x2ce480: 0x37e08000  ori         $zero, $ra, 0x8000
    ctx->pc = 0x2ce480u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) | (uint64_t)(uint16_t)32768);
label_2ce484:
    // 0x2ce484: 0x4341c379  .word       0x4341C379                   # INVALID     $k0, $at, -0x3C87 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce484u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2CE484 raw=0x4341C379");
 /* MITIGATED */
label_2ce488:
    // 0x2ce488: 0xb5056e17  sdr         $a1, 0x6E17($t0)
    ctx->pc = 0x2ce488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 28183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ce48c:
    // 0x2ce48c: 0x4693b8b5  .word       0x4693B8B5                   # INVALID     $s4, $s3, -0x474B # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x2ce48cu;
//     throw std::runtime_error("Unhandled FPU.W instruction: function 0x35 at 0x2CE48C raw=0x4693B8B5");
 /* MITIGATED */
label_2ce490:
    // 0x2ce490: 0xe93ff9f5  swc2        $31, -0x60B($t1)
    ctx->pc = 0x2ce490u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x2CE490 raw=0xE93FF9F5");
 /* MITIGATED */
label_2ce494:
    // 0x2ce494: 0x4d384f03  .word       0x4D384F03                   # INVALID     $t1, $t8, 0x4F03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce494u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CE494 raw=0x4D384F03");
 /* MITIGATED */
label_2ce498:
    // 0x2ce498: 0xf9301d32  sqc2        $vf16, 0x1D32($t1)
    ctx->pc = 0x2ce498u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 7474), _mm_castps_si128(ctx->vu0_vf[16]));
label_2ce49c:
    // 0x2ce49c: 0x5a827748  .word       0x5A827748                   # blezl       $s4, . + 4 + (0x7748 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_2ce4a0:
    if (ctx->pc == 0x2CE4A0u) {
        ctx->pc = 0x2CE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE49Cu;
        // 0x2ce4a0: 0x7f73bf3c  sq          $s3, -0x40C4($k1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 27), 4294950716), GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4A4u;
        goto label_2ce4a4;
    }
    ctx->pc = 0x2CE49Cu;
    {
        const bool branch_taken_0x2ce49c = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2ce49c) {
            ctx->pc = 0x2CE4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE49Cu;
            // 0x2ce4a0: 0x7f73bf3c  sq          $s3, -0x40C4($k1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 27), 4294950716), GPR_VEC(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC1C0u;
            return;
        }
    }
    ctx->pc = 0x2CE4A4u;
label_2ce4a4:
    // 0x2ce4a4: 0x75154fdd  .word       0x75154FDD                   # INVALID     $t0, $s5, 0x4FDD # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce4a4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE4A4 raw=0x75154FDD");
 /* MITIGATED */
label_2ce4a8:
    // 0x2ce4a8: 0x97d889bc  lhu         $t8, -0x7644($fp)
    ctx->pc = 0x2ce4a8u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294937020)));
label_2ce4ac:
    // 0x2ce4ac: 0x3c9cd2b2  .word       0x3C9CD2B2                   # lui         $gp, 0xD2B2 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce4acu;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)53938 << 16));
label_2ce4b0:
    // 0x2ce4b0: 0xd5a8a733  ldc1        $f8, -0x58CD($t5)
    ctx->pc = 0x2ce4b0u;
//     throw std::runtime_error("Unhandled opcode: 0x35 at 0x2CE4B0 raw=0xD5A8A733");
 /* MITIGATED */
label_2ce4b4:
    // 0x2ce4b4: 0x3949f623  xori        $t1, $t2, 0xF623
    ctx->pc = 0x2ce4b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)63011);
label_2ce4b8:
    // 0x2ce4b8: 0x44f4a73d  .word       0x44F4A73D                   # INVALID     $a3, $s4, -0x58C3 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce4b8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x3D at 0x2CE4B8 raw=0x44F4A73D");
 /* MITIGATED */
label_2ce4bc:
    // 0x2ce4bc: 0x32a50ffd  andi        $a1, $s5, 0xFFD
    ctx->pc = 0x2ce4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4093);
label_2ce4c0:
    // 0x2ce4c0: 0xcf8c979d  pref        0x0C, -0x6863($gp)
    ctx->pc = 0x2ce4c0u;
    // PREF instruction (ignored)
label_2ce4c4:
    // 0x2ce4c4: 0x255bba08  addiu       $k1, $t2, -0x45F8
    ctx->pc = 0x2ce4c4u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949384));
label_2ce4c8:
    // 0x2ce4c8: 0x64ac6f43  daddiu      $t4, $a1, 0x6F43
    ctx->pc = 0x2ce4c8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)28483);
label_2ce4cc:
    // 0x2ce4cc: 0xac80628  j           func_B2018A0
label_2ce4d0:
    if (ctx->pc == 0x2CE4D0u) {
        ctx->pc = 0x2CE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4CCu;
        // 0x2ce4d0: 0x20202020  addi        $zero, $at, 0x2020 (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4D4u;
        goto label_2ce4d4;
    }
    ctx->pc = 0x2CE4CCu;
    ctx->pc = 0x2CE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4CCu;
    // 0x2ce4d0: 0x20202020  addi        $zero, $at, 0x2020 (Delay Slot)
    // NOP (addi to $zero)
    ctx->in_delay_slot = false;
    ctx->pc = 0xB2018A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB2018A0u, 0x2CE4CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CE4D4u;
label_2ce4d4:
    // 0x2ce4d4: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce4d4u;
    // NOP (addi to $zero)
label_2ce4d8:
    // 0x2ce4d8: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce4d8u;
    // NOP (addi to $zero)
label_2ce4dc:
    // 0x2ce4dc: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ce4dcu;
    // NOP (addi to $zero)
label_2ce4e0:
    // 0x2ce4e0: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x2ce4e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_2ce4e4:
    // 0x2ce4e4: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x2ce4e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_2ce4e8:
    // 0x2ce4e8: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x2ce4e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_2ce4ec:
    // 0x2ce4ec: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x2ce4ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_2ce4f0:
    // 0x2ce4f0: 0x666e49  .word       0x00666E49                   # jalr        $t5, $v1 # 00060640 <InstrIdType: CPU_SPECIAL>
label_2ce4f4:
    if (ctx->pc == 0x2CE4F4u) {
        ctx->pc = 0x2CE4F8u;
        goto label_2ce4f8;
    }
    ctx->pc = 0x2CE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 13, 0x2CE4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE4F0u, 0x2CE4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE4F8u;
label_2ce4f8:
    // 0x2ce4f8: 0x4e614e  .word       0x004E614E                   # INVALID     $v0, $t6, 0x614E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce4f8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2CE4F8 raw=0x004E614E");
 /* MITIGATED */
label_2ce4fc:
    // 0x2ce4fc: 0x0  nop
    ctx->pc = 0x2ce4fcu;
    // NOP
label_2ce500:
    // 0x2ce500: 0x33323130  andi        $s2, $t9, 0x3130
    ctx->pc = 0x2ce500u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12592);
label_2ce504:
    // 0x2ce504: 0x37363534  ori         $s6, $t9, 0x3534
    ctx->pc = 0x2ce504u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13620);
label_2ce508:
    // 0x2ce508: 0x62613938  daddi       $at, $s3, 0x3938
    ctx->pc = 0x2ce508u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)14648; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2ce50c:
    // 0x2ce50c: 0x66656463  daddiu      $a1, $s3, 0x6463
    ctx->pc = 0x2ce50cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25699);
label_2ce510:
    // 0x2ce510: 0x0  nop
    ctx->pc = 0x2ce510u;
    // NOP
label_2ce514:
    // 0x2ce514: 0x0  nop
    ctx->pc = 0x2ce514u;
    // NOP
label_2ce518:
    // 0x2ce518: 0x6c756e28  ldr         $s5, 0x6E28($v1)
    ctx->pc = 0x2ce518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2ce51c:
    // 0x2ce51c: 0x296c  .word       0x0000296C                   # dadd        $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce51cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2ce520:
    // 0x2ce520: 0x33323130  andi        $s2, $t9, 0x3130
    ctx->pc = 0x2ce520u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12592);
label_2ce524:
    // 0x2ce524: 0x37363534  ori         $s6, $t9, 0x3534
    ctx->pc = 0x2ce524u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13620);
label_2ce528:
    // 0x2ce528: 0x42413938  .word       0x42413938                   # INVALID     $s2, $at, 0x3938 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce528u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CE528 raw=0x42413938");
 /* MITIGATED */
label_2ce52c:
    // 0x2ce52c: 0x46454443  .word       0x46454443                   # INVALID     $s2, $a1, 0x4443 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce52cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x2CE52C raw=0x46454443");
 /* MITIGATED */
label_2ce530:
    // 0x2ce530: 0x0  nop
    ctx->pc = 0x2ce530u;
    // NOP
label_2ce534:
    // 0x2ce534: 0x0  nop
    ctx->pc = 0x2ce534u;
    // NOP
label_2ce538:
    // 0x2ce538: 0x20677562  addi        $a3, $v1, 0x7562
    ctx->pc = 0x2ce538u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30050, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2ce53c:
    // 0x2ce53c: 0x76206e69  .word       0x76206E69                   # INVALID     $s1, $zero, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce53cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE53C raw=0x76206E69");
 /* MITIGATED */
label_2ce540:
    // 0x2ce540: 0x69727066  ldl         $s2, 0x7066($t3)
    ctx->pc = 0x2ce540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28774); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2ce544:
    // 0x2ce544: 0x3a66746e  xori        $a2, $s3, 0x746E
    ctx->pc = 0x2ce544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29806);
label_2ce548:
    // 0x2ce548: 0x64616220  daddiu      $at, $v1, 0x6220
    ctx->pc = 0x2ce548u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25120);
label_2ce54c:
    // 0x2ce54c: 0x73616220  .word       0x73616220                   # madd1       $t4, $k1, $at # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce54cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2ce550:
    // 0x2ce550: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce550u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ce554:
    // 0x2ce554: 0x0  nop
    ctx->pc = 0x2ce554u;
    // NOP
label_2ce558:
    // 0x2ce558: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2ce558u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ce55c:
    // 0x2ce55c: 0x0  nop
    ctx->pc = 0x2ce55cu;
    // NOP
label_2ce560:
    // 0x2ce560: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2ce560u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2ce564:
    // 0x2ce564: 0x0  nop
    ctx->pc = 0x2ce564u;
    // NOP
label_2ce568:
    // 0x2ce568: 0x0  nop
    ctx->pc = 0x2ce568u;
    // NOP
label_2ce56c:
    // 0x2ce56c: 0x0  nop
    ctx->pc = 0x2ce56cu;
    // NOP
label_2ce570:
    // 0x2ce570: 0x23db80  .word       0x0023DB80                   # sll         $k1, $v1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce570u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_2ce574:
    // 0x2ce574: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce574u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce578:
    // 0x2ce578: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce578u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce57c:
    // 0x2ce57c: 0x23db98  .word       0x0023DB98                   # mult        $k1, $at, $v1 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2ce580:
    // 0x2ce580: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce580u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce584:
    // 0x2ce584: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce584u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce588:
    // 0x2ce588: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce588u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce58c:
    // 0x2ce58c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce58cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce590:
    // 0x2ce590: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce590u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce594:
    // 0x2ce594: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce594u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce598:
    // 0x2ce598: 0x23dba0  .word       0x0023DBA0                   # add         $k1, $at, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce598u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce59c:
    // 0x2ce59c: 0x23dbc8  .word       0x0023DBC8                   # jr          $at # 0003DBC0 <InstrIdType: CPU_SPECIAL>
label_2ce5a0:
    if (ctx->pc == 0x2CE5A0u) {
        ctx->pc = 0x2CE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE59Cu;
        // 0x2ce5a0: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5A4u;
        goto label_2ce5a4;
    }
    ctx->pc = 0x2CE59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE59Cu;
        // 0x2ce5a0: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE59Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE5A4u;
label_2ce5a4:
    // 0x2ce5a4: 0x23dbbc  .word       0x0023DBBC                   # dsll32      $k1, $v1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5a4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) << (32 + 14));
label_2ce5a8:
    // 0x2ce5a8: 0x23dbd8  .word       0x0023DBD8                   # mult        $k1, $at, $v1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2ce5ac:
    // 0x2ce5ac: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5b0:
    // 0x2ce5b0: 0x23dc58  .word       0x0023DC58                   # mult        $k1, $at, $v1 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2ce5b4:
    // 0x2ce5b4: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5b8:
    // 0x2ce5b8: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5bc:
    // 0x2ce5bc: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5c0:
    // 0x2ce5c0: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5c4:
    // 0x2ce5c4: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5c8:
    // 0x2ce5c8: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5cc:
    // 0x2ce5cc: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5d0:
    // 0x2ce5d0: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5d4:
    // 0x2ce5d4: 0x23dc60  .word       0x0023DC60                   # add         $k1, $at, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce5d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2ce5d8:
    // 0x2ce5d8: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5dc:
    // 0x2ce5dc: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5e0:
    // 0x2ce5e0: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5e4:
    // 0x2ce5e4: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5e8:
    // 0x2ce5e8: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5ec:
    // 0x2ce5ec: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5f0:
    // 0x2ce5f0: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5f4:
    // 0x2ce5f4: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5f8:
    // 0x2ce5f8: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce5fc:
    // 0x2ce5fc: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce5fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce600:
    // 0x2ce600: 0x23dcf0  tge         $at, $v1, 883
    ctx->pc = 0x2ce600u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce604:
    // 0x2ce604: 0x23dd48  .word       0x0023DD48                   # jr          $at # 0003DD40 <InstrIdType: CPU_SPECIAL>
label_2ce608:
    if (ctx->pc == 0x2CE608u) {
        ctx->pc = 0x2CE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE604u;
        // 0x2ce608: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE60Cu;
        goto label_2ce60c;
    }
    ctx->pc = 0x2CE604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE604u;
        // 0x2ce608: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE60Cu;
label_2ce60c:
    // 0x2ce60c: 0x23dd48  .word       0x0023DD48                   # jr          $at # 0003DD40 <InstrIdType: CPU_SPECIAL>
label_2ce610:
    if (ctx->pc == 0x2CE610u) {
        ctx->pc = 0x2CE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE60Cu;
        // 0x2ce610: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE614u;
        goto label_2ce614;
    }
    ctx->pc = 0x2CE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE60Cu;
        // 0x2ce610: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE60Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE614u;
label_2ce614:
    // 0x2ce614: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce614u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce618:
    // 0x2ce618: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce618u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce61c:
    // 0x2ce61c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce61cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce620:
    // 0x2ce620: 0x23dc98  .word       0x0023DC98                   # mult        $k1, $at, $v1 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2ce624:
    // 0x2ce624: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce624u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce628:
    // 0x2ce628: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce628u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce62c:
    // 0x2ce62c: 0x23df88  .word       0x0023DF88                   # jr          $at # 0003DF80 <InstrIdType: CPU_SPECIAL>
label_2ce630:
    if (ctx->pc == 0x2CE630u) {
        ctx->pc = 0x2CE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE62Cu;
        // 0x2ce630: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE634u;
        goto label_2ce634;
    }
    ctx->pc = 0x2CE62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE62Cu;
        // 0x2ce630: 0x23e230  tge         $at, $v1, 904 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE62Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE634u;
label_2ce634:
    // 0x2ce634: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce634u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce638:
    // 0x2ce638: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce638u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce63c:
    // 0x2ce63c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce63cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce640:
    // 0x2ce640: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce640u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce644:
    // 0x2ce644: 0x23e058  .word       0x0023E058                   # mult        $gp, $at, $v1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2ce648:
    // 0x2ce648: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce648u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce64c:
    // 0x2ce64c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce64cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce650:
    // 0x2ce650: 0x23e0a0  .word       0x0023E0A0                   # add         $gp, $at, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce650u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2ce654:
    // 0x2ce654: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce654u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce658:
    // 0x2ce658: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce658u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce65c:
    // 0x2ce65c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce65cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce660:
    // 0x2ce660: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce660u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce664:
    // 0x2ce664: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce664u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce668:
    // 0x2ce668: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce668u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce66c:
    // 0x2ce66c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce66cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce670:
    // 0x2ce670: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce670u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce674:
    // 0x2ce674: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce674u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce678:
    // 0x2ce678: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce678u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce67c:
    // 0x2ce67c: 0x23dcd0  .word       0x0023DCD0                   # mfhi        $k1 # 002304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce67cu;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2ce680:
    // 0x2ce680: 0x23dcf4  teq         $at, $v1, 883
    ctx->pc = 0x2ce680u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce684:
    // 0x2ce684: 0x23dd48  .word       0x0023DD48                   # jr          $at # 0003DD40 <InstrIdType: CPU_SPECIAL>
label_2ce688:
    if (ctx->pc == 0x2CE688u) {
        ctx->pc = 0x2CE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE684u;
        // 0x2ce688: 0x23dd48  .word       0x0023DD48                   # jr          $at # 0003DD40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE68Cu;
        goto label_2ce68c;
    }
    ctx->pc = 0x2CE684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE684u;
        // 0x2ce688: 0x23dd48  .word       0x0023DD48                   # jr          $at # 0003DD40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE684u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE68Cu;
label_2ce68c:
    // 0x2ce68c: 0x23dd48  .word       0x0023DD48                   # jr          $at # 0003DD40 <InstrIdType: CPU_SPECIAL>
label_2ce690:
    if (ctx->pc == 0x2CE690u) {
        ctx->pc = 0x2CE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE68Cu;
        // 0x2ce690: 0x23dca0  .word       0x0023DCA0                   # add         $k1, $at, $v1 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE694u;
        goto label_2ce694;
    }
    ctx->pc = 0x2CE68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE68Cu;
        // 0x2ce690: 0x23dca0  .word       0x0023DCA0                   # add         $k1, $at, $v1 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE68Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE694u;
label_2ce694:
    // 0x2ce694: 0x23dcf4  teq         $at, $v1, 883
    ctx->pc = 0x2ce694u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce698:
    // 0x2ce698: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce698u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce69c:
    // 0x2ce69c: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce69cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6a0:
    // 0x2ce6a0: 0x23dca8  .word       0x0023DCA8                   # mfsa        $k1 # 00230480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce6a0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2ce6a4:
    // 0x2ce6a4: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce6a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6a8:
    // 0x2ce6a8: 0x23df28  .word       0x0023DF28                   # mfsa        $k1 # 00230700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce6a8u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2ce6ac:
    // 0x2ce6ac: 0x23df8c  .word       0x0023DF8C                   # syscall     894 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce6acu;
    ctx->pc = 0x2CE6B0u;
runtime->handleSyscall(rdram, ctx, 0x8F7Eu);
label_2ce6b0:
    // 0x2ce6b0: 0x23dfd0  .word       0x0023DFD0                   # mfhi        $k1 # 002307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce6b0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2ce6b4:
    // 0x2ce6b4: 0x23dcbc  .word       0x0023DCBC                   # dsll32      $k1, $v1, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce6b4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) << (32 + 18));
label_2ce6b8:
    // 0x2ce6b8: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce6b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6bc:
    // 0x2ce6bc: 0x23dff8  .word       0x0023DFF8                   # dsll        $k1, $v1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce6bcu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) << 31);
label_2ce6c0:
    // 0x2ce6c0: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce6c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6c4:
    // 0x2ce6c4: 0x23e05c  .word       0x0023E05C                   # dmult       $at, $v1 # 0000E040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce6c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CE6C4 raw=0x0023E05C");
 /* MITIGATED */
label_2ce6c8:
    // 0x2ce6c8: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce6c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6cc:
    // 0x2ce6cc: 0x23e230  tge         $at, $v1, 904
    ctx->pc = 0x2ce6ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6d0:
    // 0x2ce6d0: 0x23e0b0  tge         $at, $v1, 898
    ctx->pc = 0x2ce6d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2ce6d4:
    // 0x2ce6d4: 0x0  nop
    ctx->pc = 0x2ce6d4u;
    // NOP
label_2ce6d8:
    // 0x2ce6d8: 0x0  nop
    ctx->pc = 0x2ce6d8u;
    // NOP
label_2ce6dc:
    // 0x2ce6dc: 0x0  nop
    ctx->pc = 0x2ce6dcu;
    // NOP
label_2ce6e0:
    // 0x2ce6e0: 0x6f206e49  ldr         $zero, 0x6E49($t9)
    ctx->pc = 0x2ce6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ce6e4:
    // 0x2ce6e4: 0x72656472  .word       0x72656472                   # INVALID     $s3, $a1, 0x6472 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce6e4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CE6E4 raw=0x72656472");
 /* MITIGATED */
label_2ce6e8:
    // 0x2ce6e8: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x2ce6e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ce6ec:
    // 0x2ce6ec: 0x79616c70  lq          $at, 0x6C70($t3)
    ctx->pc = 0x2ce6ecu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27760)));
label_2ce6f0:
    // 0x2ce6f0: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2ce6f0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2ce6f4:
    // 0x2ce6f4: 0x69724f20  ldl         $s2, 0x4F20($t3)
    ctx->pc = 0x2ce6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2ce6f8:
    // 0x2ce6f8: 0x616e6967  daddi       $t6, $t3, 0x6967
    ctx->pc = 0x2ce6f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26983; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2ce6fc:
    // 0x2ce6fc: 0x6353206c  daddi       $s3, $k0, 0x206C
    ctx->pc = 0x2ce6fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)8300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce700:
    // 0x2ce700: 0x72616e65  .word       0x72616E65                   # INVALID     $s3, $at, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce700u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CE700 raw=0x72616E65");
 /* MITIGATED */
label_2ce704:
    // 0x2ce704: 0x2c736f69  sltiu       $s3, $v1, 0x6F69
    ctx->pc = 0x2ce704u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28521) ? 1 : 0);
label_2ce708:
    // 0x2ce708: 0x7461640a  .word       0x7461640A                   # INVALID     $v1, $at, 0x640A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce708u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE708 raw=0x7461640A");
 /* MITIGATED */
label_2ce70c:
    // 0x2ce70c: 0x756d2061  .word       0x756D2061                   # INVALID     $t3, $t5, 0x2061 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce70cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE70C raw=0x756D2061");
 /* MITIGATED */
label_2ce710:
    // 0x2ce710: 0x62207473  daddi       $zero, $s1, 0x7473
    ctx->pc = 0x2ce710u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2ce714:
    // 0x2ce714: 0x6f6c2065  ldr         $t4, 0x2065($k1)
    ctx->pc = 0x2ce714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2ce718:
    // 0x2ce718: 0x64656461  daddiu      $a1, $v1, 0x6461
    ctx->pc = 0x2ce718u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25697);
label_2ce71c:
    // 0x2ce71c: 0x6f726620  ldr         $s2, 0x6620($k1)
    ctx->pc = 0x2ce71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ce720:
    // 0x2ce720: 0x7944206d  lq          $a0, 0x206D($t2)
    ctx->pc = 0x2ce720u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 8301)));
label_2ce724:
    // 0x2ce724: 0x7473616e  .word       0x7473616E                   # INVALID     $v1, $s3, 0x616E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce724u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE724 raw=0x7473616E");
 /* MITIGATED */
label_2ce728:
    // 0x2ce728: 0x61572079  daddi       $s7, $t2, 0x2079
    ctx->pc = 0x2ce728u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_2ce72c:
    // 0x2ce72c: 0x6f697272  ldr         $t1, 0x7272($k1)
    ctx->pc = 0x2ce72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ce730:
    // 0x2ce730: 0x33207372  andi        $zero, $t9, 0x7372
    ctx->pc = 0x2ce730u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)29554);
label_2ce734:
    // 0x2ce734: 0x500a0a2e  beql        $zero, $t2, . + 4 + (0xA2E << 2)
label_2ce738:
    if (ctx->pc == 0x2CE738u) {
        ctx->pc = 0x2CE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE734u;
        // 0x2ce738: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CE738 raw=0x7361656C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE73Cu;
        goto label_2ce73c;
    }
    ctx->pc = 0x2CE734u;
    {
        const bool branch_taken_0x2ce734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ce734) {
            ctx->pc = 0x2CE738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE734u;
            // 0x2ce738: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CE738 raw=0x7361656C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FF0u;
            return;
        }
    }
    ctx->pc = 0x2CE73Cu;
label_2ce73c:
    // 0x2ce73c: 0x65732065  daddiu      $s3, $t3, 0x2065
    ctx->pc = 0x2ce73cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2ce740:
    // 0x2ce740: 0x7463656c  .word       0x7463656C                   # INVALID     $v1, $v1, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce740u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE740 raw=0x7463656C");
 /* MITIGATED */
label_2ce744:
    // 0x2ce744: 0x49524f20  .word       0x49524F20                   # INVALID     $t2, $s2, 0x4F20 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ce744u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2CE744 raw=0x49524F20");
 /* MITIGATED */
label_2ce748:
    // 0x2ce748: 0x414e4947  .word       0x414E4947                   # INVALID     $t2, $t6, 0x4947 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ce748u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2CE748 raw=0x414E4947");
 /* MITIGATED */
label_2ce74c:
    // 0x2ce74c: 0x7266204c  .word       0x7266204C                   # INVALID     $s3, $a2, 0x204C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce74cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x2CE74C raw=0x7266204C");
 /* MITIGATED */
label_2ce750:
    // 0x2ce750: 0x74206d6f  .word       0x74206D6F                   # INVALID     $at, $zero, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce750u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE750 raw=0x74206D6F");
 /* MITIGATED */
label_2ce754:
    // 0x2ce754: 0x4d206568  .word       0x4D206568                   # INVALID     $t1, $zero, 0x6568 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce754u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CE754 raw=0x4D206568");
 /* MITIGATED */
label_2ce758:
    // 0x2ce758: 0x206e6961  addi        $t6, $v1, 0x6961
    ctx->pc = 0x2ce758u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26977, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2ce75c:
    // 0x2ce75c: 0x756e654d  .word       0x756E654D                   # INVALID     $t3, $t6, 0x654D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce75cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE75C raw=0x756E654D");
 /* MITIGATED */
label_2ce760:
    // 0x2ce760: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2ce760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2ce764:
    // 0x2ce764: 0x0  nop
    ctx->pc = 0x2ce764u;
    // NOP
label_2ce768:
    // 0x2ce768: 0x0  nop
    ctx->pc = 0x2ce768u;
    // NOP
label_2ce76c:
    // 0x2ce76c: 0x0  nop
    ctx->pc = 0x2ce76cu;
    // NOP
label_2ce770:
    // 0x2ce770: 0x6f206e49  ldr         $zero, 0x6E49($t9)
    ctx->pc = 0x2ce770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ce774:
    // 0x2ce774: 0x72656472  .word       0x72656472                   # INVALID     $s3, $a1, 0x6472 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce774u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CE774 raw=0x72656472");
 /* MITIGATED */
label_2ce778:
    // 0x2ce778: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x2ce778u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ce77c:
    // 0x2ce77c: 0x79616c70  lq          $at, 0x6C70($t3)
    ctx->pc = 0x2ce77cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27760)));
label_2ce780:
    // 0x2ce780: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2ce780u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2ce784:
    // 0x2ce784: 0x20535620  addi        $s3, $v0, 0x5620
    ctx->pc = 0x2ce784u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)22048, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ce788:
    // 0x2ce788: 0x65646f4d  daddiu      $a0, $t3, 0x6F4D
    ctx->pc = 0x2ce788u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28493);
label_2ce78c:
    // 0x2ce78c: 0x61640a2c  daddi       $a0, $t3, 0xA2C
    ctx->pc = 0x2ce78cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)2604; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_2ce790:
    // 0x2ce790: 0x6d206174  ldr         $zero, 0x6174($t1)
    ctx->pc = 0x2ce790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ce794:
    // 0x2ce794: 0x20747375  addi        $s4, $v1, 0x7375
    ctx->pc = 0x2ce794u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29557, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2ce798:
    // 0x2ce798: 0x6c206562  ldr         $zero, 0x6562($at)
    ctx->pc = 0x2ce798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ce79c:
    // 0x2ce79c: 0x6564616f  daddiu      $a0, $t3, 0x616F
    ctx->pc = 0x2ce79cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24943);
label_2ce7a0:
    // 0x2ce7a0: 0x72662064  .word       0x72662064                   # INVALID     $s3, $a2, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce7a0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2CE7A0 raw=0x72662064");
 /* MITIGATED */
label_2ce7a4:
    // 0x2ce7a4: 0x44206d6f  .word       0x44206D6F                   # dmfc1       $zero, $f13 # 0000056F <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ce7a4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2F at 0x2CE7A4 raw=0x44206D6F");
 /* MITIGATED */
label_2ce7a8:
    // 0x2ce7a8: 0x73616e79  .word       0x73616E79                   # INVALID     $k1, $at, 0x6E79 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce7a8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x2CE7A8 raw=0x73616E79");
 /* MITIGATED */
label_2ce7ac:
    // 0x2ce7ac: 0x57207974  bnel        $t9, $zero, . + 4 + (0x7974 << 2)
label_2ce7b0:
    if (ctx->pc == 0x2CE7B0u) {
        ctx->pc = 0x2CE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7ACu;
        // 0x2ce7b0: 0x69727261  ldl         $s2, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7B4u;
        goto label_2ce7b4;
    }
    ctx->pc = 0x2CE7ACu;
    {
        const bool branch_taken_0x2ce7ac = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7ac) {
            ctx->pc = 0x2CE7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE7ACu;
            // 0x2ce7b0: 0x69727261  ldl         $s2, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD80u;
            return;
        }
    }
    ctx->pc = 0x2CE7B4u;
label_2ce7b4:
    // 0x2ce7b4: 0x2073726f  addi        $s3, $v1, 0x726F
    ctx->pc = 0x2ce7b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ce7b8:
    // 0x2ce7b8: 0xa0a2e33  j           func_828B8CC
label_2ce7bc:
    if (ctx->pc == 0x2CE7BCu) {
        ctx->pc = 0x2CE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7B8u;
        // 0x2ce7bc: 0x61656c50  daddi       $a1, $t3, 0x6C50 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7C0u;
        goto label_2ce7c0;
    }
    ctx->pc = 0x2CE7B8u;
    ctx->pc = 0x2CE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE7B8u;
    // 0x2ce7bc: 0x61656c50  daddi       $a1, $t3, 0x6C50 (Delay Slot)
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x828B8CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x828B8CCu, 0x2CE7B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CE7C0u;
label_2ce7c0:
    // 0x2ce7c0: 0x73206573  .word       0x73206573                   # INVALID     $t9, $zero, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce7c0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CE7C0 raw=0x73206573");
 /* MITIGATED */
label_2ce7c4:
    // 0x2ce7c4: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x2ce7c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ce7c8:
    // 0x2ce7c8: 0x524f2074  beql        $s2, $t7, . + 4 + (0x2074 << 2)
label_2ce7cc:
    if (ctx->pc == 0x2CE7CCu) {
        ctx->pc = 0x2CE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7C8u;
        // 0x2ce7cc: 0x4e494749  .word       0x4E494749                   # INVALID     $s2, $t1, 0x4749 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CE7CC raw=0x4E494749");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7D0u;
        goto label_2ce7d0;
    }
    ctx->pc = 0x2CE7C8u;
    {
        const bool branch_taken_0x2ce7c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        if (branch_taken_0x2ce7c8) {
            ctx->pc = 0x2CE7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE7C8u;
            // 0x2ce7cc: 0x4e494749  .word       0x4E494749                   # INVALID     $s2, $t1, 0x4749 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CE7CC raw=0x4E494749");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D699Cu;
            return;
        }
    }
    ctx->pc = 0x2CE7D0u;
label_2ce7d0:
    // 0x2ce7d0: 0x66204c41  daddiu      $zero, $s1, 0x4C41
    ctx->pc = 0x2ce7d0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)19521);
label_2ce7d4:
    // 0x2ce7d4: 0x206d6f72  addi        $t5, $v1, 0x6F72
    ctx->pc = 0x2ce7d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28530, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_2ce7d8:
    // 0x2ce7d8: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2ce7d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce7dc:
    // 0x2ce7dc: 0x6e69614d  ldr         $t1, 0x614D($s3)
    ctx->pc = 0x2ce7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ce7e0:
    // 0x2ce7e0: 0x6e654d20  ldr         $a1, 0x4D20($s3)
    ctx->pc = 0x2ce7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ce7e4:
    // 0x2ce7e4: 0x2e75  .word       0x00002E75                   # INVALID     $zero, $zero, 0x2E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce7e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CE7E4 raw=0x00002E75");
 /* MITIGATED */
label_2ce7e8:
    // 0x2ce7e8: 0x0  nop
    ctx->pc = 0x2ce7e8u;
    // NOP
label_2ce7ec:
    // 0x2ce7ec: 0x0  nop
    ctx->pc = 0x2ce7ecu;
    // NOP
label_2ce7f0:
    // 0x2ce7f0: 0x61746144  daddi       $s4, $t3, 0x6144
    ctx->pc = 0x2ce7f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24900; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2ce7f4:
    // 0x2ce7f4: 0x6c697720  ldr         $t1, 0x7720($v1)
    ctx->pc = 0x2ce7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ce7f8:
    // 0x2ce7f8: 0x6562206c  daddiu      $v0, $t3, 0x206C
    ctx->pc = 0x2ce7f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
label_2ce7fc:
    // 0x2ce7fc: 0x616f6c20  daddi       $t7, $t3, 0x6C20
    ctx->pc = 0x2ce7fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2ce800:
    // 0x2ce800: 0x20646564  addi        $a0, $v1, 0x6564
    ctx->pc = 0x2ce800u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ce804:
    // 0x2ce804: 0x6d6f7266  ldr         $t7, 0x7266($t3)
    ctx->pc = 0x2ce804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29286); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2ce808:
    // 0x2ce808: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2ce808u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2ce80c:
    // 0x2ce80c: 0x6e794420  ldr         $t9, 0x4420($s3)
    ctx->pc = 0x2ce80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2ce810:
    // 0x2ce810: 0x79747361  lq          $s4, 0x7361($t3)
    ctx->pc = 0x2ce810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 29537)));
label_2ce814:
    // 0x2ce814: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce814u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_2ce818:
    // 0x2ce818: 0x726f6972  .word       0x726F6972                   # INVALID     $s3, $t7, 0x6972 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce818u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CE818 raw=0x726F6972");
 /* MITIGATED */
label_2ce81c:
    // 0x2ce81c: 0x20332073  addi        $s3, $at, 0x2073
    ctx->pc = 0x2ce81cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8307, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2ce820:
    // 0x2ce820: 0x63736964  daddi       $s3, $k1, 0x6964
    ctx->pc = 0x2ce820u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26980; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2ce824:
    // 0x2ce824: 0x4f0a202e  .word       0x4F0A202E                   # INVALID     $t8, $t2, 0x202E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce824u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CE824 raw=0x4F0A202E");
 /* MITIGATED */
label_2ce828:
    // 0x2ce828: 0x3f4b  .word       0x00003F4B                   # movn        $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce828u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2ce82c:
    // 0x2ce82c: 0x0  nop
    ctx->pc = 0x2ce82cu;
    // NOP
label_2ce830:
    // 0x2ce830: 0x61656c50  daddi       $a1, $t3, 0x6C50
    ctx->pc = 0x2ce830u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ce834:
    // 0x2ce834: 0x69206573  ldl         $zero, 0x6573($t1)
    ctx->pc = 0x2ce834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2ce838:
    // 0x2ce838: 0x7265736e  .word       0x7265736E                   # INVALID     $s3, $a1, 0x736E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ce838u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CE838 raw=0x7265736E");
 /* MITIGATED */
label_2ce83c:
    // 0x2ce83c: 0x68742074  ldl         $s4, 0x2074($v1)
    ctx->pc = 0x2ce83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    ctx->pc = 0x2ce840u;
    return;
}

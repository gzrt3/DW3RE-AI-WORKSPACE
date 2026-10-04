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


void FUN_0014eba0_part780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2cb190u: goto label_2cb190;
        case 0x2cb194u: goto label_2cb194;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb19cu: goto label_2cb19c;
        case 0x2cb1a0u: goto label_2cb1a0;
        case 0x2cb1a4u: goto label_2cb1a4;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1acu: goto label_2cb1ac;
        case 0x2cb1b0u: goto label_2cb1b0;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1b8u: goto label_2cb1b8;
        case 0x2cb1bcu: goto label_2cb1bc;
        case 0x2cb1c0u: goto label_2cb1c0;
        case 0x2cb1c4u: goto label_2cb1c4;
        case 0x2cb1c8u: goto label_2cb1c8;
        case 0x2cb1ccu: goto label_2cb1cc;
        case 0x2cb1d0u: goto label_2cb1d0;
        case 0x2cb1d4u: goto label_2cb1d4;
        case 0x2cb1d8u: goto label_2cb1d8;
        case 0x2cb1dcu: goto label_2cb1dc;
        case 0x2cb1e0u: goto label_2cb1e0;
        case 0x2cb1e4u: goto label_2cb1e4;
        case 0x2cb1e8u: goto label_2cb1e8;
        case 0x2cb1ecu: goto label_2cb1ec;
        case 0x2cb1f0u: goto label_2cb1f0;
        case 0x2cb1f4u: goto label_2cb1f4;
        case 0x2cb1f8u: goto label_2cb1f8;
        case 0x2cb1fcu: goto label_2cb1fc;
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb204u: goto label_2cb204;
        case 0x2cb208u: goto label_2cb208;
        case 0x2cb20cu: goto label_2cb20c;
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb214u: goto label_2cb214;
        case 0x2cb218u: goto label_2cb218;
        case 0x2cb21cu: goto label_2cb21c;
        case 0x2cb220u: goto label_2cb220;
        case 0x2cb224u: goto label_2cb224;
        case 0x2cb228u: goto label_2cb228;
        case 0x2cb22cu: goto label_2cb22c;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb234u: goto label_2cb234;
        case 0x2cb238u: goto label_2cb238;
        case 0x2cb23cu: goto label_2cb23c;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb244u: goto label_2cb244;
        case 0x2cb248u: goto label_2cb248;
        case 0x2cb24cu: goto label_2cb24c;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb254u: goto label_2cb254;
        case 0x2cb258u: goto label_2cb258;
        case 0x2cb25cu: goto label_2cb25c;
        case 0x2cb260u: goto label_2cb260;
        case 0x2cb264u: goto label_2cb264;
        case 0x2cb268u: goto label_2cb268;
        case 0x2cb26cu: goto label_2cb26c;
        case 0x2cb270u: goto label_2cb270;
        case 0x2cb274u: goto label_2cb274;
        case 0x2cb278u: goto label_2cb278;
        case 0x2cb27cu: goto label_2cb27c;
        case 0x2cb280u: goto label_2cb280;
        case 0x2cb284u: goto label_2cb284;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb28cu: goto label_2cb28c;
        case 0x2cb290u: goto label_2cb290;
        case 0x2cb294u: goto label_2cb294;
        case 0x2cb298u: goto label_2cb298;
        case 0x2cb29cu: goto label_2cb29c;
        case 0x2cb2a0u: goto label_2cb2a0;
        case 0x2cb2a4u: goto label_2cb2a4;
        case 0x2cb2a8u: goto label_2cb2a8;
        case 0x2cb2acu: goto label_2cb2ac;
        case 0x2cb2b0u: goto label_2cb2b0;
        case 0x2cb2b4u: goto label_2cb2b4;
        case 0x2cb2b8u: goto label_2cb2b8;
        case 0x2cb2bcu: goto label_2cb2bc;
        case 0x2cb2c0u: goto label_2cb2c0;
        case 0x2cb2c4u: goto label_2cb2c4;
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2ccu: goto label_2cb2cc;
        case 0x2cb2d0u: goto label_2cb2d0;
        case 0x2cb2d4u: goto label_2cb2d4;
        case 0x2cb2d8u: goto label_2cb2d8;
        case 0x2cb2dcu: goto label_2cb2dc;
        case 0x2cb2e0u: goto label_2cb2e0;
        case 0x2cb2e4u: goto label_2cb2e4;
        case 0x2cb2e8u: goto label_2cb2e8;
        case 0x2cb2ecu: goto label_2cb2ec;
        case 0x2cb2f0u: goto label_2cb2f0;
        case 0x2cb2f4u: goto label_2cb2f4;
        case 0x2cb2f8u: goto label_2cb2f8;
        case 0x2cb2fcu: goto label_2cb2fc;
        case 0x2cb300u: goto label_2cb300;
        case 0x2cb304u: goto label_2cb304;
        case 0x2cb308u: goto label_2cb308;
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb310u: goto label_2cb310;
        case 0x2cb314u: goto label_2cb314;
        case 0x2cb318u: goto label_2cb318;
        case 0x2cb31cu: goto label_2cb31c;
        case 0x2cb320u: goto label_2cb320;
        case 0x2cb324u: goto label_2cb324;
        case 0x2cb328u: goto label_2cb328;
        case 0x2cb32cu: goto label_2cb32c;
        case 0x2cb330u: goto label_2cb330;
        case 0x2cb334u: goto label_2cb334;
        case 0x2cb338u: goto label_2cb338;
        case 0x2cb33cu: goto label_2cb33c;
        case 0x2cb340u: goto label_2cb340;
        case 0x2cb344u: goto label_2cb344;
        case 0x2cb348u: goto label_2cb348;
        case 0x2cb34cu: goto label_2cb34c;
        case 0x2cb350u: goto label_2cb350;
        case 0x2cb354u: goto label_2cb354;
        case 0x2cb358u: goto label_2cb358;
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb360u: goto label_2cb360;
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb368u: goto label_2cb368;
        case 0x2cb36cu: goto label_2cb36c;
        case 0x2cb370u: goto label_2cb370;
        case 0x2cb374u: goto label_2cb374;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb37cu: goto label_2cb37c;
        case 0x2cb380u: goto label_2cb380;
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb388u: goto label_2cb388;
        case 0x2cb38cu: goto label_2cb38c;
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb39cu: goto label_2cb39c;
        case 0x2cb3a0u: goto label_2cb3a0;
        case 0x2cb3a4u: goto label_2cb3a4;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3acu: goto label_2cb3ac;
        case 0x2cb3b0u: goto label_2cb3b0;
        case 0x2cb3b4u: goto label_2cb3b4;
        case 0x2cb3b8u: goto label_2cb3b8;
        case 0x2cb3bcu: goto label_2cb3bc;
        case 0x2cb3c0u: goto label_2cb3c0;
        case 0x2cb3c4u: goto label_2cb3c4;
        case 0x2cb3c8u: goto label_2cb3c8;
        case 0x2cb3ccu: goto label_2cb3cc;
        case 0x2cb3d0u: goto label_2cb3d0;
        case 0x2cb3d4u: goto label_2cb3d4;
        case 0x2cb3d8u: goto label_2cb3d8;
        case 0x2cb3dcu: goto label_2cb3dc;
        case 0x2cb3e0u: goto label_2cb3e0;
        case 0x2cb3e4u: goto label_2cb3e4;
        case 0x2cb3e8u: goto label_2cb3e8;
        case 0x2cb3ecu: goto label_2cb3ec;
        case 0x2cb3f0u: goto label_2cb3f0;
        case 0x2cb3f4u: goto label_2cb3f4;
        case 0x2cb3f8u: goto label_2cb3f8;
        case 0x2cb3fcu: goto label_2cb3fc;
        case 0x2cb400u: goto label_2cb400;
        case 0x2cb404u: goto label_2cb404;
        case 0x2cb408u: goto label_2cb408;
        case 0x2cb40cu: goto label_2cb40c;
        case 0x2cb410u: goto label_2cb410;
        case 0x2cb414u: goto label_2cb414;
        case 0x2cb418u: goto label_2cb418;
        case 0x2cb41cu: goto label_2cb41c;
        case 0x2cb420u: goto label_2cb420;
        case 0x2cb424u: goto label_2cb424;
        case 0x2cb428u: goto label_2cb428;
        case 0x2cb42cu: goto label_2cb42c;
        case 0x2cb430u: goto label_2cb430;
        case 0x2cb434u: goto label_2cb434;
        case 0x2cb438u: goto label_2cb438;
        case 0x2cb43cu: goto label_2cb43c;
        case 0x2cb440u: goto label_2cb440;
        case 0x2cb444u: goto label_2cb444;
        case 0x2cb448u: goto label_2cb448;
        case 0x2cb44cu: goto label_2cb44c;
        case 0x2cb450u: goto label_2cb450;
        case 0x2cb454u: goto label_2cb454;
        case 0x2cb458u: goto label_2cb458;
        case 0x2cb45cu: goto label_2cb45c;
        case 0x2cb460u: goto label_2cb460;
        case 0x2cb464u: goto label_2cb464;
        case 0x2cb468u: goto label_2cb468;
        case 0x2cb46cu: goto label_2cb46c;
        case 0x2cb470u: goto label_2cb470;
        case 0x2cb474u: goto label_2cb474;
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb47cu: goto label_2cb47c;
        case 0x2cb480u: goto label_2cb480;
        case 0x2cb484u: goto label_2cb484;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb48cu: goto label_2cb48c;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb494u: goto label_2cb494;
        case 0x2cb498u: goto label_2cb498;
        case 0x2cb49cu: goto label_2cb49c;
        case 0x2cb4a0u: goto label_2cb4a0;
        case 0x2cb4a4u: goto label_2cb4a4;
        case 0x2cb4a8u: goto label_2cb4a8;
        case 0x2cb4acu: goto label_2cb4ac;
        case 0x2cb4b0u: goto label_2cb4b0;
        case 0x2cb4b4u: goto label_2cb4b4;
        case 0x2cb4b8u: goto label_2cb4b8;
        case 0x2cb4bcu: goto label_2cb4bc;
        case 0x2cb4c0u: goto label_2cb4c0;
        case 0x2cb4c4u: goto label_2cb4c4;
        case 0x2cb4c8u: goto label_2cb4c8;
        case 0x2cb4ccu: goto label_2cb4cc;
        case 0x2cb4d0u: goto label_2cb4d0;
        case 0x2cb4d4u: goto label_2cb4d4;
        case 0x2cb4d8u: goto label_2cb4d8;
        case 0x2cb4dcu: goto label_2cb4dc;
        case 0x2cb4e0u: goto label_2cb4e0;
        case 0x2cb4e4u: goto label_2cb4e4;
        case 0x2cb4e8u: goto label_2cb4e8;
        case 0x2cb4ecu: goto label_2cb4ec;
        case 0x2cb4f0u: goto label_2cb4f0;
        case 0x2cb4f4u: goto label_2cb4f4;
        case 0x2cb4f8u: goto label_2cb4f8;
        case 0x2cb4fcu: goto label_2cb4fc;
        case 0x2cb500u: goto label_2cb500;
        case 0x2cb504u: goto label_2cb504;
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb50cu: goto label_2cb50c;
        case 0x2cb510u: goto label_2cb510;
        case 0x2cb514u: goto label_2cb514;
        case 0x2cb518u: goto label_2cb518;
        case 0x2cb51cu: goto label_2cb51c;
        case 0x2cb520u: goto label_2cb520;
        case 0x2cb524u: goto label_2cb524;
        case 0x2cb528u: goto label_2cb528;
        case 0x2cb52cu: goto label_2cb52c;
        case 0x2cb530u: goto label_2cb530;
        case 0x2cb534u: goto label_2cb534;
        case 0x2cb538u: goto label_2cb538;
        case 0x2cb53cu: goto label_2cb53c;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb544u: goto label_2cb544;
        case 0x2cb548u: goto label_2cb548;
        case 0x2cb54cu: goto label_2cb54c;
        case 0x2cb550u: goto label_2cb550;
        case 0x2cb554u: goto label_2cb554;
        case 0x2cb558u: goto label_2cb558;
        case 0x2cb55cu: goto label_2cb55c;
        case 0x2cb560u: goto label_2cb560;
        case 0x2cb564u: goto label_2cb564;
        case 0x2cb568u: goto label_2cb568;
        case 0x2cb56cu: goto label_2cb56c;
        case 0x2cb570u: goto label_2cb570;
        case 0x2cb574u: goto label_2cb574;
        case 0x2cb578u: goto label_2cb578;
        case 0x2cb57cu: goto label_2cb57c;
        case 0x2cb580u: goto label_2cb580;
        case 0x2cb584u: goto label_2cb584;
        case 0x2cb588u: goto label_2cb588;
        case 0x2cb58cu: goto label_2cb58c;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb594u: goto label_2cb594;
        case 0x2cb598u: goto label_2cb598;
        case 0x2cb59cu: goto label_2cb59c;
        case 0x2cb5a0u: goto label_2cb5a0;
        case 0x2cb5a4u: goto label_2cb5a4;
        case 0x2cb5a8u: goto label_2cb5a8;
        case 0x2cb5acu: goto label_2cb5ac;
        case 0x2cb5b0u: goto label_2cb5b0;
        case 0x2cb5b4u: goto label_2cb5b4;
        case 0x2cb5b8u: goto label_2cb5b8;
        case 0x2cb5bcu: goto label_2cb5bc;
        case 0x2cb5c0u: goto label_2cb5c0;
        case 0x2cb5c4u: goto label_2cb5c4;
        case 0x2cb5c8u: goto label_2cb5c8;
        case 0x2cb5ccu: goto label_2cb5cc;
        case 0x2cb5d0u: goto label_2cb5d0;
        case 0x2cb5d4u: goto label_2cb5d4;
        case 0x2cb5d8u: goto label_2cb5d8;
        case 0x2cb5dcu: goto label_2cb5dc;
        case 0x2cb5e0u: goto label_2cb5e0;
        case 0x2cb5e4u: goto label_2cb5e4;
        case 0x2cb5e8u: goto label_2cb5e8;
        case 0x2cb5ecu: goto label_2cb5ec;
        case 0x2cb5f0u: goto label_2cb5f0;
        case 0x2cb5f4u: goto label_2cb5f4;
        case 0x2cb5f8u: goto label_2cb5f8;
        case 0x2cb5fcu: goto label_2cb5fc;
        case 0x2cb600u: goto label_2cb600;
        case 0x2cb604u: goto label_2cb604;
        case 0x2cb608u: goto label_2cb608;
        case 0x2cb60cu: goto label_2cb60c;
        case 0x2cb610u: goto label_2cb610;
        case 0x2cb614u: goto label_2cb614;
        case 0x2cb618u: goto label_2cb618;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb620u: goto label_2cb620;
        case 0x2cb624u: goto label_2cb624;
        case 0x2cb628u: goto label_2cb628;
        case 0x2cb62cu: goto label_2cb62c;
        case 0x2cb630u: goto label_2cb630;
        case 0x2cb634u: goto label_2cb634;
        case 0x2cb638u: goto label_2cb638;
        case 0x2cb63cu: goto label_2cb63c;
        case 0x2cb640u: goto label_2cb640;
        case 0x2cb644u: goto label_2cb644;
        case 0x2cb648u: goto label_2cb648;
        case 0x2cb64cu: goto label_2cb64c;
        case 0x2cb650u: goto label_2cb650;
        case 0x2cb654u: goto label_2cb654;
        case 0x2cb658u: goto label_2cb658;
        case 0x2cb65cu: goto label_2cb65c;
        case 0x2cb660u: goto label_2cb660;
        case 0x2cb664u: goto label_2cb664;
        case 0x2cb668u: goto label_2cb668;
        case 0x2cb66cu: goto label_2cb66c;
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb674u: goto label_2cb674;
        case 0x2cb678u: goto label_2cb678;
        case 0x2cb67cu: goto label_2cb67c;
        case 0x2cb680u: goto label_2cb680;
        case 0x2cb684u: goto label_2cb684;
        case 0x2cb688u: goto label_2cb688;
        case 0x2cb68cu: goto label_2cb68c;
        case 0x2cb690u: goto label_2cb690;
        case 0x2cb694u: goto label_2cb694;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb69cu: goto label_2cb69c;
        case 0x2cb6a0u: goto label_2cb6a0;
        case 0x2cb6a4u: goto label_2cb6a4;
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6acu: goto label_2cb6ac;
        case 0x2cb6b0u: goto label_2cb6b0;
        case 0x2cb6b4u: goto label_2cb6b4;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6bcu: goto label_2cb6bc;
        case 0x2cb6c0u: goto label_2cb6c0;
        case 0x2cb6c4u: goto label_2cb6c4;
        case 0x2cb6c8u: goto label_2cb6c8;
        case 0x2cb6ccu: goto label_2cb6cc;
        case 0x2cb6d0u: goto label_2cb6d0;
        case 0x2cb6d4u: goto label_2cb6d4;
        case 0x2cb6d8u: goto label_2cb6d8;
        case 0x2cb6dcu: goto label_2cb6dc;
        case 0x2cb6e0u: goto label_2cb6e0;
        case 0x2cb6e4u: goto label_2cb6e4;
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb6ecu: goto label_2cb6ec;
        case 0x2cb6f0u: goto label_2cb6f0;
        case 0x2cb6f4u: goto label_2cb6f4;
        case 0x2cb6f8u: goto label_2cb6f8;
        case 0x2cb6fcu: goto label_2cb6fc;
        case 0x2cb700u: goto label_2cb700;
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb708u: goto label_2cb708;
        case 0x2cb70cu: goto label_2cb70c;
        case 0x2cb710u: goto label_2cb710;
        case 0x2cb714u: goto label_2cb714;
        case 0x2cb718u: goto label_2cb718;
        case 0x2cb71cu: goto label_2cb71c;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb724u: goto label_2cb724;
        case 0x2cb728u: goto label_2cb728;
        case 0x2cb72cu: goto label_2cb72c;
        case 0x2cb730u: goto label_2cb730;
        case 0x2cb734u: goto label_2cb734;
        case 0x2cb738u: goto label_2cb738;
        case 0x2cb73cu: goto label_2cb73c;
        case 0x2cb740u: goto label_2cb740;
        case 0x2cb744u: goto label_2cb744;
        case 0x2cb748u: goto label_2cb748;
        case 0x2cb74cu: goto label_2cb74c;
        case 0x2cb750u: goto label_2cb750;
        case 0x2cb754u: goto label_2cb754;
        case 0x2cb758u: goto label_2cb758;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb760u: goto label_2cb760;
        case 0x2cb764u: goto label_2cb764;
        case 0x2cb768u: goto label_2cb768;
        case 0x2cb76cu: goto label_2cb76c;
        case 0x2cb770u: goto label_2cb770;
        case 0x2cb774u: goto label_2cb774;
        case 0x2cb778u: goto label_2cb778;
        case 0x2cb77cu: goto label_2cb77c;
        case 0x2cb780u: goto label_2cb780;
        case 0x2cb784u: goto label_2cb784;
        case 0x2cb788u: goto label_2cb788;
        case 0x2cb78cu: goto label_2cb78c;
        case 0x2cb790u: goto label_2cb790;
        case 0x2cb794u: goto label_2cb794;
        case 0x2cb798u: goto label_2cb798;
        case 0x2cb79cu: goto label_2cb79c;
        case 0x2cb7a0u: goto label_2cb7a0;
        case 0x2cb7a4u: goto label_2cb7a4;
        case 0x2cb7a8u: goto label_2cb7a8;
        case 0x2cb7acu: goto label_2cb7ac;
        case 0x2cb7b0u: goto label_2cb7b0;
        case 0x2cb7b4u: goto label_2cb7b4;
        case 0x2cb7b8u: goto label_2cb7b8;
        case 0x2cb7bcu: goto label_2cb7bc;
        case 0x2cb7c0u: goto label_2cb7c0;
        case 0x2cb7c4u: goto label_2cb7c4;
        case 0x2cb7c8u: goto label_2cb7c8;
        case 0x2cb7ccu: goto label_2cb7cc;
        case 0x2cb7d0u: goto label_2cb7d0;
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7d8u: goto label_2cb7d8;
        case 0x2cb7dcu: goto label_2cb7dc;
        case 0x2cb7e0u: goto label_2cb7e0;
        case 0x2cb7e4u: goto label_2cb7e4;
        case 0x2cb7e8u: goto label_2cb7e8;
        case 0x2cb7ecu: goto label_2cb7ec;
        case 0x2cb7f0u: goto label_2cb7f0;
        case 0x2cb7f4u: goto label_2cb7f4;
        case 0x2cb7f8u: goto label_2cb7f8;
        case 0x2cb7fcu: goto label_2cb7fc;
        case 0x2cb800u: goto label_2cb800;
        case 0x2cb804u: goto label_2cb804;
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb80cu: goto label_2cb80c;
        case 0x2cb810u: goto label_2cb810;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb818u: goto label_2cb818;
        case 0x2cb81cu: goto label_2cb81c;
        case 0x2cb820u: goto label_2cb820;
        case 0x2cb824u: goto label_2cb824;
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb82cu: goto label_2cb82c;
        case 0x2cb830u: goto label_2cb830;
        case 0x2cb834u: goto label_2cb834;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb83cu: goto label_2cb83c;
        case 0x2cb840u: goto label_2cb840;
        case 0x2cb844u: goto label_2cb844;
        case 0x2cb848u: goto label_2cb848;
        case 0x2cb84cu: goto label_2cb84c;
        case 0x2cb850u: goto label_2cb850;
        case 0x2cb854u: goto label_2cb854;
        case 0x2cb858u: goto label_2cb858;
        case 0x2cb85cu: goto label_2cb85c;
        case 0x2cb860u: goto label_2cb860;
        case 0x2cb864u: goto label_2cb864;
        case 0x2cb868u: goto label_2cb868;
        case 0x2cb86cu: goto label_2cb86c;
        case 0x2cb870u: goto label_2cb870;
        case 0x2cb874u: goto label_2cb874;
        case 0x2cb878u: goto label_2cb878;
        case 0x2cb87cu: goto label_2cb87c;
        case 0x2cb880u: goto label_2cb880;
        case 0x2cb884u: goto label_2cb884;
        case 0x2cb888u: goto label_2cb888;
        case 0x2cb88cu: goto label_2cb88c;
        case 0x2cb890u: goto label_2cb890;
        case 0x2cb894u: goto label_2cb894;
        case 0x2cb898u: goto label_2cb898;
        case 0x2cb89cu: goto label_2cb89c;
        case 0x2cb8a0u: goto label_2cb8a0;
        case 0x2cb8a4u: goto label_2cb8a4;
        case 0x2cb8a8u: goto label_2cb8a8;
        case 0x2cb8acu: goto label_2cb8ac;
        case 0x2cb8b0u: goto label_2cb8b0;
        case 0x2cb8b4u: goto label_2cb8b4;
        case 0x2cb8b8u: goto label_2cb8b8;
        case 0x2cb8bcu: goto label_2cb8bc;
        case 0x2cb8c0u: goto label_2cb8c0;
        case 0x2cb8c4u: goto label_2cb8c4;
        case 0x2cb8c8u: goto label_2cb8c8;
        case 0x2cb8ccu: goto label_2cb8cc;
        case 0x2cb8d0u: goto label_2cb8d0;
        case 0x2cb8d4u: goto label_2cb8d4;
        case 0x2cb8d8u: goto label_2cb8d8;
        case 0x2cb8dcu: goto label_2cb8dc;
        case 0x2cb8e0u: goto label_2cb8e0;
        case 0x2cb8e4u: goto label_2cb8e4;
        case 0x2cb8e8u: goto label_2cb8e8;
        case 0x2cb8ecu: goto label_2cb8ec;
        case 0x2cb8f0u: goto label_2cb8f0;
        case 0x2cb8f4u: goto label_2cb8f4;
        case 0x2cb8f8u: goto label_2cb8f8;
        case 0x2cb8fcu: goto label_2cb8fc;
        case 0x2cb900u: goto label_2cb900;
        case 0x2cb904u: goto label_2cb904;
        case 0x2cb908u: goto label_2cb908;
        case 0x2cb90cu: goto label_2cb90c;
        case 0x2cb910u: goto label_2cb910;
        case 0x2cb914u: goto label_2cb914;
        case 0x2cb918u: goto label_2cb918;
        case 0x2cb91cu: goto label_2cb91c;
        case 0x2cb920u: goto label_2cb920;
        case 0x2cb924u: goto label_2cb924;
        case 0x2cb928u: goto label_2cb928;
        case 0x2cb92cu: goto label_2cb92c;
        case 0x2cb930u: goto label_2cb930;
        case 0x2cb934u: goto label_2cb934;
        case 0x2cb938u: goto label_2cb938;
        case 0x2cb93cu: goto label_2cb93c;
        case 0x2cb940u: goto label_2cb940;
        case 0x2cb944u: goto label_2cb944;
        case 0x2cb948u: goto label_2cb948;
        case 0x2cb94cu: goto label_2cb94c;
        case 0x2cb950u: goto label_2cb950;
        case 0x2cb954u: goto label_2cb954;
        case 0x2cb958u: goto label_2cb958;
        case 0x2cb95cu: goto label_2cb95c;
        default: return;
    }

label_2cb190:
    // 0x2cb190: 0x4242c700  .word       0x4242C700                   # INVALID     $s2, $v0, -0x3900 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb190u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CB190 raw=0x4242C700");
 /* MITIGATED */
label_2cb194:
    // 0x2cb194: 0x42490f00  .word       0x42490F00                   # INVALID     $s2, $t1, 0xF00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb194u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CB194 raw=0x42490F00");
 /* MITIGATED */
label_2cb198:
    // 0x2cb198: 0x0  nop
    ctx->pc = 0x2cb198u;
    // NOP
label_2cb19c:
    // 0x2cb19c: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb19cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cb1a0:
    // 0x2cb1a0: 0x43800000  .word       0x43800000                   # INVALID     $gp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb1a0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x2CB1A0 raw=0x43800000");
 /* MITIGATED */
label_2cb1a4:
    // 0x2cb1a4: 0x3f22f984  .word       0x3F22F984                   # lui         $v0, 0xF984 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63876 << 16));
label_2cb1a8:
    // 0x2cb1a8: 0x3fc90f80  .word       0x3FC90F80                   # lui         $t1, 0xF80 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3968 << 16));
label_2cb1ac:
    // 0x2cb1ac: 0x37354443  ori         $s5, $t9, 0x4443
    ctx->pc = 0x2cb1acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)17475);
label_2cb1b0:
    // 0x2cb1b0: 0x37354400  ori         $s5, $t9, 0x4400
    ctx->pc = 0x2cb1b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)17408);
label_2cb1b4:
    // 0x2cb1b4: 0x2e85a308  sltiu       $a1, $s4, -0x5CF8
    ctx->pc = 0x2cb1b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4294943496) ? 1 : 0);
label_2cb1b8:
    // 0x2cb1b8: 0x2e85a300  sltiu       $a1, $s4, -0x5D00
    ctx->pc = 0x2cb1b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4294943488) ? 1 : 0);
label_2cb1bc:
    // 0x2cb1bc: 0x248d3132  addiu       $t5, $a0, 0x3132
    ctx->pc = 0x2cb1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 12594));
label_2cb1c0:
    // 0x2cb1c0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2cb1c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cb1c4:
    // 0x2cb1c4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2cb1c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cb1c8:
    // 0x2cb1c8: 0x9  jalr        $zero, $zero
label_2cb1cc:
    if (ctx->pc == 0x2CB1CCu) {
        ctx->pc = 0x2CB1D0u;
        goto label_2cb1d0;
    }
    ctx->pc = 0x2CB1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB1C8u, 0x2CB1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB1D0u;
label_2cb1d0:
    // 0x2cb1d0: 0x3fc90000  .word       0x3FC90000                   # lui         $t1, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)0 << 16));
label_2cb1d4:
    // 0x2cb1d4: 0x39f00000  xori        $s0, $t7, 0x0
    ctx->pc = 0x2cb1d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
label_2cb1d8:
    // 0x2cb1d8: 0x37da0000  ori         $k0, $fp, 0x0
    ctx->pc = 0x2cb1d8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)0);
label_2cb1dc:
    // 0x2cb1dc: 0x33a20000  andi        $v0, $sp, 0x0
    ctx->pc = 0x2cb1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)0);
label_2cb1e0:
    // 0x2cb1e0: 0x2e840000  sltiu       $a0, $s4, 0x0
    ctx->pc = 0x2cb1e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)0) ? 1 : 0);
label_2cb1e4:
    // 0x2cb1e4: 0x2b500000  slti        $s0, $k0, 0x0
    ctx->pc = 0x2cb1e4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 26) < (int64_t)(int32_t)0) ? 1 : 0);
label_2cb1e8:
    // 0x2cb1e8: 0x27c20000  addiu       $v0, $fp, 0x0
    ctx->pc = 0x2cb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 0));
label_2cb1ec:
    // 0x2cb1ec: 0x22d00000  addi        $s0, $s6, 0x0
    ctx->pc = 0x2cb1ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 22), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_2cb1f0:
    // 0x2cb1f0: 0x1fc40000  .word       0x1FC40000                   # bgtz        $fp, . + 4 + (0x0 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_2cb1f4:
    if (ctx->pc == 0x2CB1F4u) {
        ctx->pc = 0x2CB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F0u;
        // 0x2cb1f4: 0x1bc60000  .word       0x1BC60000                   # blez        $fp, . + 4 + (0x0 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2CB1F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1F8u;
        goto label_2cb1f8;
    }
    ctx->pc = 0x2CB1F0u;
    {
        const bool branch_taken_0x2cb1f0 = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x2CB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F0u;
        // 0x2cb1f4: 0x1bc60000  .word       0x1BC60000                   # blez        $fp, . + 4 + (0x0 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2CB1F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1f0) {
            ctx->pc = 0x2CB1F4u;
            goto label_2cb1f4;
        }
    }
    ctx->pc = 0x2CB1F8u;
label_2cb1f8:
    // 0x2cb1f8: 0x17440000  bne         $k0, $a0, . + 4 + (0x0 << 2)
label_2cb1fc:
    if (ctx->pc == 0x2CB1FCu) {
        ctx->pc = 0x2CB200u;
        goto label_2cb200;
    }
    ctx->pc = 0x2CB1F8u;
    {
        const bool branch_taken_0x2cb1f8 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cb1f8) {
            ctx->pc = 0x2CB1FCu;
            goto label_2cb1fc;
        }
    }
    ctx->pc = 0x2CB200u;
label_2cb200:
    // 0x2cb200: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cb204:
    // 0x2cb204: 0x43800000  .word       0x43800000                   # INVALID     $gp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb204u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x2CB204 raw=0x43800000");
 /* MITIGATED */
label_2cb208:
    // 0x2cb208: 0x3b800000  xori        $zero, $gp, 0x0
    ctx->pc = 0x2cb208u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)0);
label_2cb20c:
    // 0x2cb20c: 0x0  nop
    ctx->pc = 0x2cb20cu;
    // NOP
label_2cb210:
    // 0x2cb210: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb210u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cb214:
    // 0x2cb214: 0x3f490fda  .word       0x3F490FDA                   # lui         $t1, 0xFDA # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb214u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_2cb218:
    // 0x2cb218: 0x33222168  andi        $v0, $t9, 0x2168
    ctx->pc = 0x2cb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8552);
label_2cb21c:
    // 0x2cb21c: 0x0  nop
    ctx->pc = 0x2cb21cu;
    // NOP
label_2cb220:
    // 0x2cb220: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb220u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_2cb224:
    // 0x2cb224: 0x3e088889  .word       0x3E088889                   # lui         $t0, 0x8889 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb224u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_2cb228:
    // 0x2cb228: 0x3d5d0dd1  .word       0x3D5D0DD1                   # lui         $sp, 0xDD1 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb228u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)3537 << 16));
label_2cb22c:
    // 0x2cb22c: 0x3cb327a4  .word       0x3CB327A4                   # lui         $s3, 0x27A4 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb22cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)10148 << 16));
label_2cb230:
    // 0x2cb230: 0x3c11371f  lui         $s1, 0x371F
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)14111 << 16));
label_2cb234:
    // 0x2cb234: 0x3b6b6916  xori        $t3, $k1, 0x6916
    ctx->pc = 0x2cb234u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)26902);
label_2cb238:
    // 0x2cb238: 0x3abede48  xori        $fp, $s5, 0xDE48
    ctx->pc = 0x2cb238u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)56904);
label_2cb23c:
    // 0x2cb23c: 0x3a1a26c8  xori        $k0, $s0, 0x26C8
    ctx->pc = 0x2cb23cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)9928);
label_2cb240:
    // 0x2cb240: 0x398137b9  xori        $at, $t4, 0x37B9
    ctx->pc = 0x2cb240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)14265);
label_2cb244:
    // 0x2cb244: 0x38a3f445  xori        $v1, $a1, 0xF445
    ctx->pc = 0x2cb244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)62533);
label_2cb248:
    // 0x2cb248: 0x3895c07a  xori        $s5, $a0, 0xC07A
    ctx->pc = 0x2cb248u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)49274);
label_2cb24c:
    // 0x2cb24c: 0xb79bae5f  sdr         $k1, -0x51A1($gp)
    ctx->pc = 0x2cb24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294946399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 27); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb250:
    // 0x2cb250: 0x37d95384  ori         $t9, $fp, 0x5384
    ctx->pc = 0x2cb250u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)21380);
label_2cb254:
    // 0x2cb254: 0x0  nop
    ctx->pc = 0x2cb254u;
    // NOP
label_2cb258:
    // 0x2cb258: 0x3eed6338  .word       0x3EED6338                   # lui         $t5, 0x6338 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb258u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)25400 << 16));
label_2cb25c:
    // 0x2cb25c: 0x3f490fda  .word       0x3F490FDA                   # lui         $t1, 0xFDA # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb25cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_2cb260:
    // 0x2cb260: 0x3f7b985e  .word       0x3F7B985E                   # lui         $k1, 0x985E # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb260u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)39006 << 16));
label_2cb264:
    // 0x2cb264: 0x3fc90fda  .word       0x3FC90FDA                   # lui         $t1, 0xFDA # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_2cb268:
    // 0x2cb268: 0x31ac3769  andi        $t4, $t5, 0x3769
    ctx->pc = 0x2cb268u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)14185);
label_2cb26c:
    // 0x2cb26c: 0x33222168  andi        $v0, $t9, 0x2168
    ctx->pc = 0x2cb26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8552);
label_2cb270:
    // 0x2cb270: 0x33140fb4  andi        $s4, $t8, 0xFB4
    ctx->pc = 0x2cb270u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4020);
label_2cb274:
    // 0x2cb274: 0x33a22168  andi        $v0, $sp, 0x2168
    ctx->pc = 0x2cb274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)8552);
label_2cb278:
    // 0x2cb278: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb278u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_2cb27c:
    // 0x2cb27c: 0xbe4ccccd  cache       0x0C, -0x3333($s2)
    ctx->pc = 0x2cb27cu;
    // CACHE instruction (ignored)
label_2cb280:
    // 0x2cb280: 0x3e124925  .word       0x3E124925                   # lui         $s2, 0x4925 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb280u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_2cb284:
    // 0x2cb284: 0xbde38e38  cache       0x03, -0x71C8($t7)
    ctx->pc = 0x2cb284u;
    // CACHE instruction (ignored)
label_2cb288:
    // 0x2cb288: 0x3dba2e6e  .word       0x3DBA2E6E                   # lui         $k0, 0x2E6E # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb288u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)11886 << 16));
label_2cb28c:
    // 0x2cb28c: 0xbd9d8795  cache       0x1D, -0x786B($t4)
    ctx->pc = 0x2cb28cu;
    // CACHE instruction (ignored)
label_2cb290:
    // 0x2cb290: 0x3d886b35  .word       0x3D886B35                   # lui         $t0, 0x6B35 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb290u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27445 << 16));
label_2cb294:
    // 0x2cb294: 0xbd6ef16b  cache       0x0E, -0xE95($t3)
    ctx->pc = 0x2cb294u;
    // CACHE instruction (ignored)
label_2cb298:
    // 0x2cb298: 0x3d4bda59  .word       0x3D4BDA59                   # lui         $t3, 0xDA59 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb298u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55897 << 16));
label_2cb29c:
    // 0x2cb29c: 0xbd15a221  cache       0x15, -0x5DDF($t0)
    ctx->pc = 0x2cb29cu;
    // CACHE instruction (ignored)
label_2cb2a0:
    // 0x2cb2a0: 0x3c8569d7  .word       0x3C8569D7                   # lui         $a1, 0x69D7 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27095 << 16));
label_2cb2a4:
    // 0x2cb2a4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cb2a8:
    // 0x2cb2a8: 0x7149f2ca  .word       0x7149F2CA                   # INVALID     $t2, $t1, -0xD36 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb2a8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xA at 0x2CB2A8 raw=0x7149F2CA");
 /* MITIGATED */
label_2cb2ac:
    // 0x2cb2ac: 0x0  nop
    ctx->pc = 0x2cb2acu;
    // NOP
label_2cb2b0:
    // 0x2cb2b0: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb2b0u;
    
label_2cb2b4:
    // 0x2cb2b4: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb2b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_2cb2b8:
    // 0x2cb2b8: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2b8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB2B8 raw=0x04040404");
 /* MITIGATED */
label_2cb2bc:
    // 0x2cb2bc: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2bcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB2BC raw=0x04040404");
 /* MITIGATED */
label_2cb2c0:
    // 0x2cb2c0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2c0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB2C0 raw=0x05050505");
 /* MITIGATED */
label_2cb2c4:
    // 0x2cb2c4: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2c4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB2C4 raw=0x05050505");
 /* MITIGATED */
label_2cb2c8:
    // 0x2cb2c8: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2c8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB2C8 raw=0x05050505");
 /* MITIGATED */
label_2cb2cc:
    // 0x2cb2cc: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2ccu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB2CC raw=0x05050505");
 /* MITIGATED */
label_2cb2d0:
    // 0x2cb2d0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2d0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2D0 raw=0x06060606");
 /* MITIGATED */
label_2cb2d4:
    // 0x2cb2d4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2d4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2D4 raw=0x06060606");
 /* MITIGATED */
label_2cb2d8:
    // 0x2cb2d8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2d8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2D8 raw=0x06060606");
 /* MITIGATED */
label_2cb2dc:
    // 0x2cb2dc: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2dcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2DC raw=0x06060606");
 /* MITIGATED */
label_2cb2e0:
    // 0x2cb2e0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2e0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2E0 raw=0x06060606");
 /* MITIGATED */
label_2cb2e4:
    // 0x2cb2e4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2e4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2E4 raw=0x06060606");
 /* MITIGATED */
label_2cb2e8:
    // 0x2cb2e8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2e8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2E8 raw=0x06060606");
 /* MITIGATED */
label_2cb2ec:
    // 0x2cb2ec: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2ecu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB2EC raw=0x06060606");
 /* MITIGATED */
label_2cb2f0:
    // 0x2cb2f0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB2F0 raw=0x07070707");
 /* MITIGATED */
label_2cb2f4:
    // 0x2cb2f4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2f4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB2F4 raw=0x07070707");
 /* MITIGATED */
label_2cb2f8:
    // 0x2cb2f8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2f8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB2F8 raw=0x07070707");
 /* MITIGATED */
label_2cb2fc:
    // 0x2cb2fc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb2fcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB2FC raw=0x07070707");
 /* MITIGATED */
label_2cb300:
    // 0x2cb300: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb300u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB300 raw=0x07070707");
 /* MITIGATED */
label_2cb304:
    // 0x2cb304: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb304u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB304 raw=0x07070707");
 /* MITIGATED */
label_2cb308:
    // 0x2cb308: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb308u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB308 raw=0x07070707");
 /* MITIGATED */
label_2cb30c:
    // 0x2cb30c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb30cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB30C raw=0x07070707");
 /* MITIGATED */
label_2cb310:
    // 0x2cb310: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb310u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB310 raw=0x07070707");
 /* MITIGATED */
label_2cb314:
    // 0x2cb314: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb314u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB314 raw=0x07070707");
 /* MITIGATED */
label_2cb318:
    // 0x2cb318: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb318u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB318 raw=0x07070707");
 /* MITIGATED */
label_2cb31c:
    // 0x2cb31c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb31cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB31C raw=0x07070707");
 /* MITIGATED */
label_2cb320:
    // 0x2cb320: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb320u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB320 raw=0x07070707");
 /* MITIGATED */
label_2cb324:
    // 0x2cb324: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb324u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB324 raw=0x07070707");
 /* MITIGATED */
label_2cb328:
    // 0x2cb328: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb328u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB328 raw=0x07070707");
 /* MITIGATED */
label_2cb32c:
    // 0x2cb32c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb32cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB32C raw=0x07070707");
 /* MITIGATED */
label_2cb330:
    // 0x2cb330: 0x8080808  j           func_202020
label_2cb334:
    if (ctx->pc == 0x2CB334u) {
        ctx->pc = 0x2CB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB330u;
        // 0x2cb334: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB338u;
        goto label_2cb338;
    }
    ctx->pc = 0x2CB330u;
    ctx->pc = 0x2CB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB330u;
    // 0x2cb334: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB338u;
label_2cb338:
    // 0x2cb338: 0x8080808  j           func_202020
label_2cb33c:
    if (ctx->pc == 0x2CB33Cu) {
        ctx->pc = 0x2CB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB338u;
        // 0x2cb33c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB340u;
        goto label_2cb340;
    }
    ctx->pc = 0x2CB338u;
    ctx->pc = 0x2CB33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB338u;
    // 0x2cb33c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB340u;
label_2cb340:
    // 0x2cb340: 0x8080808  j           func_202020
label_2cb344:
    if (ctx->pc == 0x2CB344u) {
        ctx->pc = 0x2CB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB340u;
        // 0x2cb344: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB348u;
        goto label_2cb348;
    }
    ctx->pc = 0x2CB340u;
    ctx->pc = 0x2CB344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB340u;
    // 0x2cb344: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB348u;
label_2cb348:
    // 0x2cb348: 0x8080808  j           func_202020
label_2cb34c:
    if (ctx->pc == 0x2CB34Cu) {
        ctx->pc = 0x2CB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB348u;
        // 0x2cb34c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB350u;
        goto label_2cb350;
    }
    ctx->pc = 0x2CB348u;
    ctx->pc = 0x2CB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB348u;
    // 0x2cb34c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB350u;
label_2cb350:
    // 0x2cb350: 0x8080808  j           func_202020
label_2cb354:
    if (ctx->pc == 0x2CB354u) {
        ctx->pc = 0x2CB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB350u;
        // 0x2cb354: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB358u;
        goto label_2cb358;
    }
    ctx->pc = 0x2CB350u;
    ctx->pc = 0x2CB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB350u;
    // 0x2cb354: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB358u;
label_2cb358:
    // 0x2cb358: 0x8080808  j           func_202020
label_2cb35c:
    if (ctx->pc == 0x2CB35Cu) {
        ctx->pc = 0x2CB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB358u;
        // 0x2cb35c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB360u;
        goto label_2cb360;
    }
    ctx->pc = 0x2CB358u;
    ctx->pc = 0x2CB35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB358u;
    // 0x2cb35c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB360u;
label_2cb360:
    // 0x2cb360: 0x8080808  j           func_202020
label_2cb364:
    if (ctx->pc == 0x2CB364u) {
        ctx->pc = 0x2CB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB360u;
        // 0x2cb364: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB368u;
        goto label_2cb368;
    }
    ctx->pc = 0x2CB360u;
    ctx->pc = 0x2CB364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB360u;
    // 0x2cb364: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB368u;
label_2cb368:
    // 0x2cb368: 0x8080808  j           func_202020
label_2cb36c:
    if (ctx->pc == 0x2CB36Cu) {
        ctx->pc = 0x2CB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB368u;
        // 0x2cb36c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB370u;
        goto label_2cb370;
    }
    ctx->pc = 0x2CB368u;
    ctx->pc = 0x2CB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB368u;
    // 0x2cb36c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB370u;
label_2cb370:
    // 0x2cb370: 0x8080808  j           func_202020
label_2cb374:
    if (ctx->pc == 0x2CB374u) {
        ctx->pc = 0x2CB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB370u;
        // 0x2cb374: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB378u;
        goto label_2cb378;
    }
    ctx->pc = 0x2CB370u;
    ctx->pc = 0x2CB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB370u;
    // 0x2cb374: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB378u;
label_2cb378:
    // 0x2cb378: 0x8080808  j           func_202020
label_2cb37c:
    if (ctx->pc == 0x2CB37Cu) {
        ctx->pc = 0x2CB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB378u;
        // 0x2cb37c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB380u;
        goto label_2cb380;
    }
    ctx->pc = 0x2CB378u;
    ctx->pc = 0x2CB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB378u;
    // 0x2cb37c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB380u;
label_2cb380:
    // 0x2cb380: 0x8080808  j           func_202020
label_2cb384:
    if (ctx->pc == 0x2CB384u) {
        ctx->pc = 0x2CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB380u;
        // 0x2cb384: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB388u;
        goto label_2cb388;
    }
    ctx->pc = 0x2CB380u;
    ctx->pc = 0x2CB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB380u;
    // 0x2cb384: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB388u;
label_2cb388:
    // 0x2cb388: 0x8080808  j           func_202020
label_2cb38c:
    if (ctx->pc == 0x2CB38Cu) {
        ctx->pc = 0x2CB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB388u;
        // 0x2cb38c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB390u;
        goto label_2cb390;
    }
    ctx->pc = 0x2CB388u;
    ctx->pc = 0x2CB38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB388u;
    // 0x2cb38c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB390u;
label_2cb390:
    // 0x2cb390: 0x8080808  j           func_202020
label_2cb394:
    if (ctx->pc == 0x2CB394u) {
        ctx->pc = 0x2CB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB390u;
        // 0x2cb394: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB398u;
        goto label_2cb398;
    }
    ctx->pc = 0x2CB390u;
    ctx->pc = 0x2CB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB390u;
    // 0x2cb394: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB398u;
label_2cb398:
    // 0x2cb398: 0x8080808  j           func_202020
label_2cb39c:
    if (ctx->pc == 0x2CB39Cu) {
        ctx->pc = 0x2CB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB398u;
        // 0x2cb39c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3A0u;
        goto label_2cb3a0;
    }
    ctx->pc = 0x2CB398u;
    ctx->pc = 0x2CB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB398u;
    // 0x2cb39c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB3A0u;
label_2cb3a0:
    // 0x2cb3a0: 0x8080808  j           func_202020
label_2cb3a4:
    if (ctx->pc == 0x2CB3A4u) {
        ctx->pc = 0x2CB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A0u;
        // 0x2cb3a4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3A8u;
        goto label_2cb3a8;
    }
    ctx->pc = 0x2CB3A0u;
    ctx->pc = 0x2CB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3A0u;
    // 0x2cb3a4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB3A8u;
label_2cb3a8:
    // 0x2cb3a8: 0x8080808  j           func_202020
label_2cb3ac:
    if (ctx->pc == 0x2CB3ACu) {
        ctx->pc = 0x2CB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A8u;
        // 0x2cb3ac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3B0u;
        goto label_2cb3b0;
    }
    ctx->pc = 0x2CB3A8u;
    ctx->pc = 0x2CB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3A8u;
    // 0x2cb3ac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB3B0u;
label_2cb3b0:
    // 0x2cb3b0: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb3b0u;
    
label_2cb3b4:
    // 0x2cb3b4: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb3b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_2cb3b8:
    // 0x2cb3b8: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3b8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB3B8 raw=0x04040404");
 /* MITIGATED */
label_2cb3bc:
    // 0x2cb3bc: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3bcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB3BC raw=0x04040404");
 /* MITIGATED */
label_2cb3c0:
    // 0x2cb3c0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3c0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB3C0 raw=0x05050505");
 /* MITIGATED */
label_2cb3c4:
    // 0x2cb3c4: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3c4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB3C4 raw=0x05050505");
 /* MITIGATED */
label_2cb3c8:
    // 0x2cb3c8: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3c8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB3C8 raw=0x05050505");
 /* MITIGATED */
label_2cb3cc:
    // 0x2cb3cc: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3ccu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB3CC raw=0x05050505");
 /* MITIGATED */
label_2cb3d0:
    // 0x2cb3d0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3d0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3D0 raw=0x06060606");
 /* MITIGATED */
label_2cb3d4:
    // 0x2cb3d4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3d4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3D4 raw=0x06060606");
 /* MITIGATED */
label_2cb3d8:
    // 0x2cb3d8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3d8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3D8 raw=0x06060606");
 /* MITIGATED */
label_2cb3dc:
    // 0x2cb3dc: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3dcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3DC raw=0x06060606");
 /* MITIGATED */
label_2cb3e0:
    // 0x2cb3e0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3e0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3E0 raw=0x06060606");
 /* MITIGATED */
label_2cb3e4:
    // 0x2cb3e4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3e4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3E4 raw=0x06060606");
 /* MITIGATED */
label_2cb3e8:
    // 0x2cb3e8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3e8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3E8 raw=0x06060606");
 /* MITIGATED */
label_2cb3ec:
    // 0x2cb3ec: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3ecu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB3EC raw=0x06060606");
 /* MITIGATED */
label_2cb3f0:
    // 0x2cb3f0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB3F0 raw=0x07070707");
 /* MITIGATED */
label_2cb3f4:
    // 0x2cb3f4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3f4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB3F4 raw=0x07070707");
 /* MITIGATED */
label_2cb3f8:
    // 0x2cb3f8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3f8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB3F8 raw=0x07070707");
 /* MITIGATED */
label_2cb3fc:
    // 0x2cb3fc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb3fcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB3FC raw=0x07070707");
 /* MITIGATED */
label_2cb400:
    // 0x2cb400: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb400u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB400 raw=0x07070707");
 /* MITIGATED */
label_2cb404:
    // 0x2cb404: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb404u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB404 raw=0x07070707");
 /* MITIGATED */
label_2cb408:
    // 0x2cb408: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb408u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB408 raw=0x07070707");
 /* MITIGATED */
label_2cb40c:
    // 0x2cb40c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb40cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB40C raw=0x07070707");
 /* MITIGATED */
label_2cb410:
    // 0x2cb410: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb410u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB410 raw=0x07070707");
 /* MITIGATED */
label_2cb414:
    // 0x2cb414: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb414u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB414 raw=0x07070707");
 /* MITIGATED */
label_2cb418:
    // 0x2cb418: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb418u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB418 raw=0x07070707");
 /* MITIGATED */
label_2cb41c:
    // 0x2cb41c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb41cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB41C raw=0x07070707");
 /* MITIGATED */
label_2cb420:
    // 0x2cb420: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb420u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB420 raw=0x07070707");
 /* MITIGATED */
label_2cb424:
    // 0x2cb424: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb424u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB424 raw=0x07070707");
 /* MITIGATED */
label_2cb428:
    // 0x2cb428: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb428u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB428 raw=0x07070707");
 /* MITIGATED */
label_2cb42c:
    // 0x2cb42c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb42cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB42C raw=0x07070707");
 /* MITIGATED */
label_2cb430:
    // 0x2cb430: 0x8080808  j           func_202020
label_2cb434:
    if (ctx->pc == 0x2CB434u) {
        ctx->pc = 0x2CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB430u;
        // 0x2cb434: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB438u;
        goto label_2cb438;
    }
    ctx->pc = 0x2CB430u;
    ctx->pc = 0x2CB434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB430u;
    // 0x2cb434: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB438u;
label_2cb438:
    // 0x2cb438: 0x8080808  j           func_202020
label_2cb43c:
    if (ctx->pc == 0x2CB43Cu) {
        ctx->pc = 0x2CB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB438u;
        // 0x2cb43c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB440u;
        goto label_2cb440;
    }
    ctx->pc = 0x2CB438u;
    ctx->pc = 0x2CB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB438u;
    // 0x2cb43c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB440u;
label_2cb440:
    // 0x2cb440: 0x8080808  j           func_202020
label_2cb444:
    if (ctx->pc == 0x2CB444u) {
        ctx->pc = 0x2CB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB440u;
        // 0x2cb444: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB448u;
        goto label_2cb448;
    }
    ctx->pc = 0x2CB440u;
    ctx->pc = 0x2CB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB440u;
    // 0x2cb444: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB448u;
label_2cb448:
    // 0x2cb448: 0x8080808  j           func_202020
label_2cb44c:
    if (ctx->pc == 0x2CB44Cu) {
        ctx->pc = 0x2CB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB448u;
        // 0x2cb44c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB450u;
        goto label_2cb450;
    }
    ctx->pc = 0x2CB448u;
    ctx->pc = 0x2CB44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB448u;
    // 0x2cb44c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB450u;
label_2cb450:
    // 0x2cb450: 0x8080808  j           func_202020
label_2cb454:
    if (ctx->pc == 0x2CB454u) {
        ctx->pc = 0x2CB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB450u;
        // 0x2cb454: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB458u;
        goto label_2cb458;
    }
    ctx->pc = 0x2CB450u;
    ctx->pc = 0x2CB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB450u;
    // 0x2cb454: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB458u;
label_2cb458:
    // 0x2cb458: 0x8080808  j           func_202020
label_2cb45c:
    if (ctx->pc == 0x2CB45Cu) {
        ctx->pc = 0x2CB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB458u;
        // 0x2cb45c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB460u;
        goto label_2cb460;
    }
    ctx->pc = 0x2CB458u;
    ctx->pc = 0x2CB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB458u;
    // 0x2cb45c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB460u;
label_2cb460:
    // 0x2cb460: 0x8080808  j           func_202020
label_2cb464:
    if (ctx->pc == 0x2CB464u) {
        ctx->pc = 0x2CB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB460u;
        // 0x2cb464: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB468u;
        goto label_2cb468;
    }
    ctx->pc = 0x2CB460u;
    ctx->pc = 0x2CB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB460u;
    // 0x2cb464: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB468u;
label_2cb468:
    // 0x2cb468: 0x8080808  j           func_202020
label_2cb46c:
    if (ctx->pc == 0x2CB46Cu) {
        ctx->pc = 0x2CB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB468u;
        // 0x2cb46c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB470u;
        goto label_2cb470;
    }
    ctx->pc = 0x2CB468u;
    ctx->pc = 0x2CB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB468u;
    // 0x2cb46c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB470u;
label_2cb470:
    // 0x2cb470: 0x8080808  j           func_202020
label_2cb474:
    if (ctx->pc == 0x2CB474u) {
        ctx->pc = 0x2CB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB470u;
        // 0x2cb474: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB478u;
        goto label_2cb478;
    }
    ctx->pc = 0x2CB470u;
    ctx->pc = 0x2CB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB470u;
    // 0x2cb474: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB478u;
label_2cb478:
    // 0x2cb478: 0x8080808  j           func_202020
label_2cb47c:
    if (ctx->pc == 0x2CB47Cu) {
        ctx->pc = 0x2CB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB478u;
        // 0x2cb47c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB480u;
        goto label_2cb480;
    }
    ctx->pc = 0x2CB478u;
    ctx->pc = 0x2CB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB478u;
    // 0x2cb47c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB480u;
label_2cb480:
    // 0x2cb480: 0x8080808  j           func_202020
label_2cb484:
    if (ctx->pc == 0x2CB484u) {
        ctx->pc = 0x2CB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB480u;
        // 0x2cb484: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB488u;
        goto label_2cb488;
    }
    ctx->pc = 0x2CB480u;
    ctx->pc = 0x2CB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB480u;
    // 0x2cb484: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB488u;
label_2cb488:
    // 0x2cb488: 0x8080808  j           func_202020
label_2cb48c:
    if (ctx->pc == 0x2CB48Cu) {
        ctx->pc = 0x2CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB488u;
        // 0x2cb48c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB490u;
        goto label_2cb490;
    }
    ctx->pc = 0x2CB488u;
    ctx->pc = 0x2CB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB488u;
    // 0x2cb48c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB490u;
label_2cb490:
    // 0x2cb490: 0x8080808  j           func_202020
label_2cb494:
    if (ctx->pc == 0x2CB494u) {
        ctx->pc = 0x2CB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB490u;
        // 0x2cb494: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB498u;
        goto label_2cb498;
    }
    ctx->pc = 0x2CB490u;
    ctx->pc = 0x2CB494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB490u;
    // 0x2cb494: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB498u;
label_2cb498:
    // 0x2cb498: 0x8080808  j           func_202020
label_2cb49c:
    if (ctx->pc == 0x2CB49Cu) {
        ctx->pc = 0x2CB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB498u;
        // 0x2cb49c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4A0u;
        goto label_2cb4a0;
    }
    ctx->pc = 0x2CB498u;
    ctx->pc = 0x2CB49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB498u;
    // 0x2cb49c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB4A0u;
label_2cb4a0:
    // 0x2cb4a0: 0x8080808  j           func_202020
label_2cb4a4:
    if (ctx->pc == 0x2CB4A4u) {
        ctx->pc = 0x2CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A0u;
        // 0x2cb4a4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4A8u;
        goto label_2cb4a8;
    }
    ctx->pc = 0x2CB4A0u;
    ctx->pc = 0x2CB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4A0u;
    // 0x2cb4a4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB4A8u;
label_2cb4a8:
    // 0x2cb4a8: 0x8080808  j           func_202020
label_2cb4ac:
    if (ctx->pc == 0x2CB4ACu) {
        ctx->pc = 0x2CB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A8u;
        // 0x2cb4ac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4B0u;
        goto label_2cb4b0;
    }
    ctx->pc = 0x2CB4A8u;
    ctx->pc = 0x2CB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB4A8u;
    // 0x2cb4ac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB4B0u;
label_2cb4b0:
    // 0x2cb4b0: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb4b0u;
    
label_2cb4b4:
    // 0x2cb4b4: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb4b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_2cb4b8:
    // 0x2cb4b8: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4b8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB4B8 raw=0x04040404");
 /* MITIGATED */
label_2cb4bc:
    // 0x2cb4bc: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4bcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB4BC raw=0x04040404");
 /* MITIGATED */
label_2cb4c0:
    // 0x2cb4c0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4c0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB4C0 raw=0x05050505");
 /* MITIGATED */
label_2cb4c4:
    // 0x2cb4c4: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4c4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB4C4 raw=0x05050505");
 /* MITIGATED */
label_2cb4c8:
    // 0x2cb4c8: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4c8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB4C8 raw=0x05050505");
 /* MITIGATED */
label_2cb4cc:
    // 0x2cb4cc: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4ccu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB4CC raw=0x05050505");
 /* MITIGATED */
label_2cb4d0:
    // 0x2cb4d0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4d0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4D0 raw=0x06060606");
 /* MITIGATED */
label_2cb4d4:
    // 0x2cb4d4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4d4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4D4 raw=0x06060606");
 /* MITIGATED */
label_2cb4d8:
    // 0x2cb4d8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4d8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4D8 raw=0x06060606");
 /* MITIGATED */
label_2cb4dc:
    // 0x2cb4dc: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4dcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4DC raw=0x06060606");
 /* MITIGATED */
label_2cb4e0:
    // 0x2cb4e0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4e0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4E0 raw=0x06060606");
 /* MITIGATED */
label_2cb4e4:
    // 0x2cb4e4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4e4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4E4 raw=0x06060606");
 /* MITIGATED */
label_2cb4e8:
    // 0x2cb4e8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4e8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4E8 raw=0x06060606");
 /* MITIGATED */
label_2cb4ec:
    // 0x2cb4ec: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4ecu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB4EC raw=0x06060606");
 /* MITIGATED */
label_2cb4f0:
    // 0x2cb4f0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB4F0 raw=0x07070707");
 /* MITIGATED */
label_2cb4f4:
    // 0x2cb4f4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4f4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB4F4 raw=0x07070707");
 /* MITIGATED */
label_2cb4f8:
    // 0x2cb4f8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4f8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB4F8 raw=0x07070707");
 /* MITIGATED */
label_2cb4fc:
    // 0x2cb4fc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb4fcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB4FC raw=0x07070707");
 /* MITIGATED */
label_2cb500:
    // 0x2cb500: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb500u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB500 raw=0x07070707");
 /* MITIGATED */
label_2cb504:
    // 0x2cb504: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb504u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB504 raw=0x07070707");
 /* MITIGATED */
label_2cb508:
    // 0x2cb508: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb508u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB508 raw=0x07070707");
 /* MITIGATED */
label_2cb50c:
    // 0x2cb50c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb50cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB50C raw=0x07070707");
 /* MITIGATED */
label_2cb510:
    // 0x2cb510: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb510u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB510 raw=0x07070707");
 /* MITIGATED */
label_2cb514:
    // 0x2cb514: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb514u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB514 raw=0x07070707");
 /* MITIGATED */
label_2cb518:
    // 0x2cb518: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb518u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB518 raw=0x07070707");
 /* MITIGATED */
label_2cb51c:
    // 0x2cb51c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb51cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB51C raw=0x07070707");
 /* MITIGATED */
label_2cb520:
    // 0x2cb520: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb520u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB520 raw=0x07070707");
 /* MITIGATED */
label_2cb524:
    // 0x2cb524: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb524u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB524 raw=0x07070707");
 /* MITIGATED */
label_2cb528:
    // 0x2cb528: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb528u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB528 raw=0x07070707");
 /* MITIGATED */
label_2cb52c:
    // 0x2cb52c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb52cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB52C raw=0x07070707");
 /* MITIGATED */
label_2cb530:
    // 0x2cb530: 0x8080808  j           func_202020
label_2cb534:
    if (ctx->pc == 0x2CB534u) {
        ctx->pc = 0x2CB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB530u;
        // 0x2cb534: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB538u;
        goto label_2cb538;
    }
    ctx->pc = 0x2CB530u;
    ctx->pc = 0x2CB534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB530u;
    // 0x2cb534: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB538u;
label_2cb538:
    // 0x2cb538: 0x8080808  j           func_202020
label_2cb53c:
    if (ctx->pc == 0x2CB53Cu) {
        ctx->pc = 0x2CB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB538u;
        // 0x2cb53c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB540u;
        goto label_2cb540;
    }
    ctx->pc = 0x2CB538u;
    ctx->pc = 0x2CB53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB538u;
    // 0x2cb53c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB540u;
label_2cb540:
    // 0x2cb540: 0x8080808  j           func_202020
label_2cb544:
    if (ctx->pc == 0x2CB544u) {
        ctx->pc = 0x2CB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB540u;
        // 0x2cb544: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB548u;
        goto label_2cb548;
    }
    ctx->pc = 0x2CB540u;
    ctx->pc = 0x2CB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB540u;
    // 0x2cb544: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB548u;
label_2cb548:
    // 0x2cb548: 0x8080808  j           func_202020
label_2cb54c:
    if (ctx->pc == 0x2CB54Cu) {
        ctx->pc = 0x2CB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB548u;
        // 0x2cb54c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB550u;
        goto label_2cb550;
    }
    ctx->pc = 0x2CB548u;
    ctx->pc = 0x2CB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB548u;
    // 0x2cb54c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB550u;
label_2cb550:
    // 0x2cb550: 0x8080808  j           func_202020
label_2cb554:
    if (ctx->pc == 0x2CB554u) {
        ctx->pc = 0x2CB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB550u;
        // 0x2cb554: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB558u;
        goto label_2cb558;
    }
    ctx->pc = 0x2CB550u;
    ctx->pc = 0x2CB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB550u;
    // 0x2cb554: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB558u;
label_2cb558:
    // 0x2cb558: 0x8080808  j           func_202020
label_2cb55c:
    if (ctx->pc == 0x2CB55Cu) {
        ctx->pc = 0x2CB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB558u;
        // 0x2cb55c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB560u;
        goto label_2cb560;
    }
    ctx->pc = 0x2CB558u;
    ctx->pc = 0x2CB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB558u;
    // 0x2cb55c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB560u;
label_2cb560:
    // 0x2cb560: 0x8080808  j           func_202020
label_2cb564:
    if (ctx->pc == 0x2CB564u) {
        ctx->pc = 0x2CB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB560u;
        // 0x2cb564: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB568u;
        goto label_2cb568;
    }
    ctx->pc = 0x2CB560u;
    ctx->pc = 0x2CB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB560u;
    // 0x2cb564: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB568u;
label_2cb568:
    // 0x2cb568: 0x8080808  j           func_202020
label_2cb56c:
    if (ctx->pc == 0x2CB56Cu) {
        ctx->pc = 0x2CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB568u;
        // 0x2cb56c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB570u;
        goto label_2cb570;
    }
    ctx->pc = 0x2CB568u;
    ctx->pc = 0x2CB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB568u;
    // 0x2cb56c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB570u;
label_2cb570:
    // 0x2cb570: 0x8080808  j           func_202020
label_2cb574:
    if (ctx->pc == 0x2CB574u) {
        ctx->pc = 0x2CB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB570u;
        // 0x2cb574: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB578u;
        goto label_2cb578;
    }
    ctx->pc = 0x2CB570u;
    ctx->pc = 0x2CB574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB570u;
    // 0x2cb574: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB578u;
label_2cb578:
    // 0x2cb578: 0x8080808  j           func_202020
label_2cb57c:
    if (ctx->pc == 0x2CB57Cu) {
        ctx->pc = 0x2CB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB578u;
        // 0x2cb57c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB580u;
        goto label_2cb580;
    }
    ctx->pc = 0x2CB578u;
    ctx->pc = 0x2CB57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB578u;
    // 0x2cb57c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB580u;
label_2cb580:
    // 0x2cb580: 0x8080808  j           func_202020
label_2cb584:
    if (ctx->pc == 0x2CB584u) {
        ctx->pc = 0x2CB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB580u;
        // 0x2cb584: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB588u;
        goto label_2cb588;
    }
    ctx->pc = 0x2CB580u;
    ctx->pc = 0x2CB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB580u;
    // 0x2cb584: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB588u;
label_2cb588:
    // 0x2cb588: 0x8080808  j           func_202020
label_2cb58c:
    if (ctx->pc == 0x2CB58Cu) {
        ctx->pc = 0x2CB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB588u;
        // 0x2cb58c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB590u;
        goto label_2cb590;
    }
    ctx->pc = 0x2CB588u;
    ctx->pc = 0x2CB58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB588u;
    // 0x2cb58c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB590u;
label_2cb590:
    // 0x2cb590: 0x8080808  j           func_202020
label_2cb594:
    if (ctx->pc == 0x2CB594u) {
        ctx->pc = 0x2CB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB590u;
        // 0x2cb594: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB598u;
        goto label_2cb598;
    }
    ctx->pc = 0x2CB590u;
    ctx->pc = 0x2CB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB590u;
    // 0x2cb594: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB598u;
label_2cb598:
    // 0x2cb598: 0x8080808  j           func_202020
label_2cb59c:
    if (ctx->pc == 0x2CB59Cu) {
        ctx->pc = 0x2CB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB598u;
        // 0x2cb59c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB5A0u;
        goto label_2cb5a0;
    }
    ctx->pc = 0x2CB598u;
    ctx->pc = 0x2CB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB598u;
    // 0x2cb59c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB5A0u;
label_2cb5a0:
    // 0x2cb5a0: 0x8080808  j           func_202020
label_2cb5a4:
    if (ctx->pc == 0x2CB5A4u) {
        ctx->pc = 0x2CB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5A0u;
        // 0x2cb5a4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB5A8u;
        goto label_2cb5a8;
    }
    ctx->pc = 0x2CB5A0u;
    ctx->pc = 0x2CB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB5A0u;
    // 0x2cb5a4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB5A8u;
label_2cb5a8:
    // 0x2cb5a8: 0x8080808  j           func_202020
label_2cb5ac:
    if (ctx->pc == 0x2CB5ACu) {
        ctx->pc = 0x2CB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5A8u;
        // 0x2cb5ac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB5B0u;
        goto label_2cb5b0;
    }
    ctx->pc = 0x2CB5A8u;
    ctx->pc = 0x2CB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB5A8u;
    // 0x2cb5ac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB5B0u;
label_2cb5b0:
    // 0x2cb5b0: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb5b0u;
    
label_2cb5b4:
    // 0x2cb5b4: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb5b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_2cb5b8:
    // 0x2cb5b8: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5b8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB5B8 raw=0x04040404");
 /* MITIGATED */
label_2cb5bc:
    // 0x2cb5bc: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5bcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2CB5BC raw=0x04040404");
 /* MITIGATED */
label_2cb5c0:
    // 0x2cb5c0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5c0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB5C0 raw=0x05050505");
 /* MITIGATED */
label_2cb5c4:
    // 0x2cb5c4: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5c4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB5C4 raw=0x05050505");
 /* MITIGATED */
label_2cb5c8:
    // 0x2cb5c8: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5c8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB5C8 raw=0x05050505");
 /* MITIGATED */
label_2cb5cc:
    // 0x2cb5cc: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5ccu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2CB5CC raw=0x05050505");
 /* MITIGATED */
label_2cb5d0:
    // 0x2cb5d0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5d0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5D0 raw=0x06060606");
 /* MITIGATED */
label_2cb5d4:
    // 0x2cb5d4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5d4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5D4 raw=0x06060606");
 /* MITIGATED */
label_2cb5d8:
    // 0x2cb5d8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5d8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5D8 raw=0x06060606");
 /* MITIGATED */
label_2cb5dc:
    // 0x2cb5dc: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5dcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5DC raw=0x06060606");
 /* MITIGATED */
label_2cb5e0:
    // 0x2cb5e0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5e0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5E0 raw=0x06060606");
 /* MITIGATED */
label_2cb5e4:
    // 0x2cb5e4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5e4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5E4 raw=0x06060606");
 /* MITIGATED */
label_2cb5e8:
    // 0x2cb5e8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5e8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5E8 raw=0x06060606");
 /* MITIGATED */
label_2cb5ec:
    // 0x2cb5ec: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5ecu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x2CB5EC raw=0x06060606");
 /* MITIGATED */
label_2cb5f0:
    // 0x2cb5f0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB5F0 raw=0x07070707");
 /* MITIGATED */
label_2cb5f4:
    // 0x2cb5f4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5f4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB5F4 raw=0x07070707");
 /* MITIGATED */
label_2cb5f8:
    // 0x2cb5f8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5f8u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB5F8 raw=0x07070707");
 /* MITIGATED */
label_2cb5fc:
    // 0x2cb5fc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb5fcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB5FC raw=0x07070707");
 /* MITIGATED */
label_2cb600:
    // 0x2cb600: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb600u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB600 raw=0x07070707");
 /* MITIGATED */
label_2cb604:
    // 0x2cb604: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb604u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB604 raw=0x07070707");
 /* MITIGATED */
label_2cb608:
    // 0x2cb608: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb608u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB608 raw=0x07070707");
 /* MITIGATED */
label_2cb60c:
    // 0x2cb60c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb60cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB60C raw=0x07070707");
 /* MITIGATED */
label_2cb610:
    // 0x2cb610: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb610u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB610 raw=0x07070707");
 /* MITIGATED */
label_2cb614:
    // 0x2cb614: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb614u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB614 raw=0x07070707");
 /* MITIGATED */
label_2cb618:
    // 0x2cb618: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb618u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB618 raw=0x07070707");
 /* MITIGATED */
label_2cb61c:
    // 0x2cb61c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb61cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB61C raw=0x07070707");
 /* MITIGATED */
label_2cb620:
    // 0x2cb620: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb620u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB620 raw=0x07070707");
 /* MITIGATED */
label_2cb624:
    // 0x2cb624: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb624u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB624 raw=0x07070707");
 /* MITIGATED */
label_2cb628:
    // 0x2cb628: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb628u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB628 raw=0x07070707");
 /* MITIGATED */
label_2cb62c:
    // 0x2cb62c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2cb62cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x2CB62C raw=0x07070707");
 /* MITIGATED */
label_2cb630:
    // 0x2cb630: 0x8080808  j           func_202020
label_2cb634:
    if (ctx->pc == 0x2CB634u) {
        ctx->pc = 0x2CB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB630u;
        // 0x2cb634: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB638u;
        goto label_2cb638;
    }
    ctx->pc = 0x2CB630u;
    ctx->pc = 0x2CB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB630u;
    // 0x2cb634: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB638u;
label_2cb638:
    // 0x2cb638: 0x8080808  j           func_202020
label_2cb63c:
    if (ctx->pc == 0x2CB63Cu) {
        ctx->pc = 0x2CB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB638u;
        // 0x2cb63c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB640u;
        goto label_2cb640;
    }
    ctx->pc = 0x2CB638u;
    ctx->pc = 0x2CB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB638u;
    // 0x2cb63c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB640u;
label_2cb640:
    // 0x2cb640: 0x8080808  j           func_202020
label_2cb644:
    if (ctx->pc == 0x2CB644u) {
        ctx->pc = 0x2CB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB640u;
        // 0x2cb644: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB648u;
        goto label_2cb648;
    }
    ctx->pc = 0x2CB640u;
    ctx->pc = 0x2CB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB640u;
    // 0x2cb644: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB648u;
label_2cb648:
    // 0x2cb648: 0x8080808  j           func_202020
label_2cb64c:
    if (ctx->pc == 0x2CB64Cu) {
        ctx->pc = 0x2CB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB648u;
        // 0x2cb64c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB650u;
        goto label_2cb650;
    }
    ctx->pc = 0x2CB648u;
    ctx->pc = 0x2CB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB648u;
    // 0x2cb64c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB650u;
label_2cb650:
    // 0x2cb650: 0x8080808  j           func_202020
label_2cb654:
    if (ctx->pc == 0x2CB654u) {
        ctx->pc = 0x2CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB650u;
        // 0x2cb654: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB658u;
        goto label_2cb658;
    }
    ctx->pc = 0x2CB650u;
    ctx->pc = 0x2CB654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB650u;
    // 0x2cb654: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB658u;
label_2cb658:
    // 0x2cb658: 0x8080808  j           func_202020
label_2cb65c:
    if (ctx->pc == 0x2CB65Cu) {
        ctx->pc = 0x2CB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB658u;
        // 0x2cb65c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB660u;
        goto label_2cb660;
    }
    ctx->pc = 0x2CB658u;
    ctx->pc = 0x2CB65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB658u;
    // 0x2cb65c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB660u;
label_2cb660:
    // 0x2cb660: 0x8080808  j           func_202020
label_2cb664:
    if (ctx->pc == 0x2CB664u) {
        ctx->pc = 0x2CB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB660u;
        // 0x2cb664: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB668u;
        goto label_2cb668;
    }
    ctx->pc = 0x2CB660u;
    ctx->pc = 0x2CB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB660u;
    // 0x2cb664: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB668u;
label_2cb668:
    // 0x2cb668: 0x8080808  j           func_202020
label_2cb66c:
    if (ctx->pc == 0x2CB66Cu) {
        ctx->pc = 0x2CB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB668u;
        // 0x2cb66c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB670u;
        goto label_2cb670;
    }
    ctx->pc = 0x2CB668u;
    ctx->pc = 0x2CB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB668u;
    // 0x2cb66c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB670u;
label_2cb670:
    // 0x2cb670: 0x8080808  j           func_202020
label_2cb674:
    if (ctx->pc == 0x2CB674u) {
        ctx->pc = 0x2CB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB670u;
        // 0x2cb674: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB678u;
        goto label_2cb678;
    }
    ctx->pc = 0x2CB670u;
    ctx->pc = 0x2CB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB670u;
    // 0x2cb674: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB678u;
label_2cb678:
    // 0x2cb678: 0x8080808  j           func_202020
label_2cb67c:
    if (ctx->pc == 0x2CB67Cu) {
        ctx->pc = 0x2CB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB678u;
        // 0x2cb67c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB680u;
        goto label_2cb680;
    }
    ctx->pc = 0x2CB678u;
    ctx->pc = 0x2CB67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB678u;
    // 0x2cb67c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB680u;
label_2cb680:
    // 0x2cb680: 0x8080808  j           func_202020
label_2cb684:
    if (ctx->pc == 0x2CB684u) {
        ctx->pc = 0x2CB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB680u;
        // 0x2cb684: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB688u;
        goto label_2cb688;
    }
    ctx->pc = 0x2CB680u;
    ctx->pc = 0x2CB684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB680u;
    // 0x2cb684: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB688u;
label_2cb688:
    // 0x2cb688: 0x8080808  j           func_202020
label_2cb68c:
    if (ctx->pc == 0x2CB68Cu) {
        ctx->pc = 0x2CB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB688u;
        // 0x2cb68c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB690u;
        goto label_2cb690;
    }
    ctx->pc = 0x2CB688u;
    ctx->pc = 0x2CB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB688u;
    // 0x2cb68c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB690u;
label_2cb690:
    // 0x2cb690: 0x8080808  j           func_202020
label_2cb694:
    if (ctx->pc == 0x2CB694u) {
        ctx->pc = 0x2CB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB690u;
        // 0x2cb694: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB698u;
        goto label_2cb698;
    }
    ctx->pc = 0x2CB690u;
    ctx->pc = 0x2CB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB690u;
    // 0x2cb694: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB698u;
label_2cb698:
    // 0x2cb698: 0x8080808  j           func_202020
label_2cb69c:
    if (ctx->pc == 0x2CB69Cu) {
        ctx->pc = 0x2CB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB698u;
        // 0x2cb69c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6A0u;
        goto label_2cb6a0;
    }
    ctx->pc = 0x2CB698u;
    ctx->pc = 0x2CB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB698u;
    // 0x2cb69c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB6A0u;
label_2cb6a0:
    // 0x2cb6a0: 0x8080808  j           func_202020
label_2cb6a4:
    if (ctx->pc == 0x2CB6A4u) {
        ctx->pc = 0x2CB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6A0u;
        // 0x2cb6a4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6A8u;
        goto label_2cb6a8;
    }
    ctx->pc = 0x2CB6A0u;
    ctx->pc = 0x2CB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6A0u;
    // 0x2cb6a4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB6A8u;
label_2cb6a8:
    // 0x2cb6a8: 0x8080808  j           func_202020
label_2cb6ac:
    if (ctx->pc == 0x2CB6ACu) {
        ctx->pc = 0x2CB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6A8u;
        // 0x2cb6ac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6B0u;
        goto label_2cb6b0;
    }
    ctx->pc = 0x2CB6A8u;
    ctx->pc = 0x2CB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6A8u;
    // 0x2cb6ac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x2CB6B0u;
label_2cb6b0:
    // 0x2cb6b0: 0x0  nop
    ctx->pc = 0x2cb6b0u;
    // NOP
label_2cb6b4:
    // 0x2cb6b4: 0x0  nop
    ctx->pc = 0x2cb6b4u;
    // NOP
label_2cb6b8:
    // 0x2cb6b8: 0x0  nop
    ctx->pc = 0x2cb6b8u;
    // NOP
label_2cb6bc:
    // 0x2cb6bc: 0x0  nop
    ctx->pc = 0x2cb6bcu;
    // NOP
label_2cb6c0:
    // 0x2cb6c0: 0x0  nop
    ctx->pc = 0x2cb6c0u;
    // NOP
label_2cb6c4:
    // 0x2cb6c4: 0x0  nop
    ctx->pc = 0x2cb6c4u;
    // NOP
label_2cb6c8:
    // 0x2cb6c8: 0x0  nop
    ctx->pc = 0x2cb6c8u;
    // NOP
label_2cb6cc:
    // 0x2cb6cc: 0x0  nop
    ctx->pc = 0x2cb6ccu;
    // NOP
label_2cb6d0:
    // 0x2cb6d0: 0x1bc56c  .word       0x001BC56C                   # dadd        $t8, $zero, $k1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb6d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_2cb6d4:
    // 0x2cb6d4: 0x1bc580  sll         $t8, $k1, 22
    ctx->pc = 0x2cb6d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
label_2cb6d8:
    // 0x2cb6d8: 0x1bc590  .word       0x001BC590                   # mfhi        $t8 # 001B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb6d8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2cb6dc:
    // 0x2cb6dc: 0x1bc5dc  .word       0x001BC5DC                   # dmult       $zero, $k1 # 0000C5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb6dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CB6DC raw=0x001BC5DC");
 /* MITIGATED */
label_2cb6e0:
    // 0x2cb6e0: 0x1bc5a0  .word       0x001BC5A0                   # add         $t8, $zero, $k1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb6e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2cb6e4:
    // 0x2cb6e4: 0x1bc5b0  tge         $zero, $k1, 790
    ctx->pc = 0x2cb6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2cb6e8:
    // 0x2cb6e8: 0x1bc5c0  sll         $t8, $k1, 23
    ctx->pc = 0x2cb6e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 27), 23));
label_2cb6ec:
    // 0x2cb6ec: 0x1bc5d0  .word       0x001BC5D0                   # mfhi        $t8 # 001B05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb6ecu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2cb6f0:
    // 0x2cb6f0: 0x1beb3c  dsll32      $sp, $k1, 12
    ctx->pc = 0x2cb6f0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << (32 + 12));
label_2cb6f4:
    // 0x2cb6f4: 0x1beb48  .word       0x001BEB48                   # jr          $zero # 001BEB40 <InstrIdType: CPU_SPECIAL>
label_2cb6f8:
    if (ctx->pc == 0x2CB6F8u) {
        ctx->pc = 0x2CB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6F4u;
        // 0x2cb6f8: 0x1beb3c  dsll32      $sp, $k1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << (32 + 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6FCu;
        goto label_2cb6fc;
    }
    ctx->pc = 0x2CB6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6F4u;
        // 0x2cb6f8: 0x1beb3c  dsll32      $sp, $k1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << (32 + 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB6F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB6FCu;
label_2cb6fc:
    // 0x2cb6fc: 0x1beb48  .word       0x001BEB48                   # jr          $zero # 001BEB40 <InstrIdType: CPU_SPECIAL>
label_2cb700:
    if (ctx->pc == 0x2CB700u) {
        ctx->pc = 0x2CB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6FCu;
        // 0x2cb700: 0x1beb30  tge         $zero, $k1, 940 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB704u;
        goto label_2cb704;
    }
    ctx->pc = 0x2CB6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6FCu;
        // 0x2cb700: 0x1beb30  tge         $zero, $k1, 940 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB6FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB704u;
label_2cb704:
    // 0x2cb704: 0x1beb50  .word       0x001BEB50                   # mfhi        $sp # 001B0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb704u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2cb708:
    // 0x2cb708: 0x1beb30  tge         $zero, $k1, 940
    ctx->pc = 0x2cb708u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2cb70c:
    // 0x2cb70c: 0x0  nop
    ctx->pc = 0x2cb70cu;
    // NOP
label_2cb710:
    // 0x2cb710: 0x1be6ac  .word       0x001BE6AC                   # dadd        $gp, $zero, $k1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb710u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_2cb714:
    // 0x2cb714: 0x1be6bc  dsll32      $gp, $k1, 26
    ctx->pc = 0x2cb714u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 27) << (32 + 26));
label_2cb718:
    // 0x2cb718: 0x1be6cc  .word       0x001BE6CC                   # syscall     923 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb718u;
    ctx->pc = 0x2CB71Cu;
runtime->handleSyscall(rdram, ctx, 0x6F9Bu);
label_2cb71c:
    // 0x2cb71c: 0x1be718  .word       0x001BE718                   # mult        $gp, $zero, $k1 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2cb720:
    // 0x2cb720: 0x1be6dc  .word       0x001BE6DC                   # dmult       $zero, $k1 # 0000E6C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb720u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CB720 raw=0x001BE6DC");
 /* MITIGATED */
label_2cb724:
    // 0x2cb724: 0x1be6ec  .word       0x001BE6EC                   # dadd        $gp, $zero, $k1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb724u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_2cb728:
    // 0x2cb728: 0x1be6fc  dsll32      $gp, $k1, 27
    ctx->pc = 0x2cb728u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 27) << (32 + 27));
label_2cb72c:
    // 0x2cb72c: 0x1be70c  .word       0x001BE70C                   # syscall     924 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb72cu;
    ctx->pc = 0x2CB730u;
runtime->handleSyscall(rdram, ctx, 0x6F9Cu);
label_2cb730:
    // 0x2cb730: 0x1befd8  .word       0x001BEFD8                   # mult        $sp, $zero, $k1 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2cb734:
    // 0x2cb734: 0x1befe4  .word       0x001BEFE4                   # and         $sp, $zero, $k1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb734u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 27));
label_2cb738:
    // 0x2cb738: 0x1bef20  .word       0x001BEF20                   # add         $sp, $zero, $k1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_2cb73c:
    // 0x2cb73c: 0x1bef34  teq         $zero, $k1, 956
    ctx->pc = 0x2cb73cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2cb740:
    // 0x2cb740: 0x1bef48  .word       0x001BEF48                   # jr          $zero # 001BEF40 <InstrIdType: CPU_SPECIAL>
label_2cb744:
    if (ctx->pc == 0x2CB744u) {
        ctx->pc = 0x2CB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB740u;
        // 0x2cb744: 0x1bef60  .word       0x001BEF60                   # add         $sp, $zero, $k1 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB748u;
        goto label_2cb748;
    }
    ctx->pc = 0x2CB740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB740u;
        // 0x2cb744: 0x1bef60  .word       0x001BEF60                   # add         $sp, $zero, $k1 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB740u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB748u;
label_2cb748:
    // 0x2cb748: 0x1bef90  .word       0x001BEF90                   # mfhi        $sp # 001B0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb748u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2cb74c:
    // 0x2cb74c: 0x1bef78  dsll        $sp, $k1, 29
    ctx->pc = 0x2cb74cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << 29);
label_2cb750:
    // 0x2cb750: 0x1befa8  .word       0x001BEFA8                   # mfsa        $sp # 001B0780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb750u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2cb754:
    // 0x2cb754: 0x1befc0  sll         $sp, $k1, 31
    ctx->pc = 0x2cb754u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 27), 31));
label_2cb758:
    // 0x2cb758: 0x0  nop
    ctx->pc = 0x2cb758u;
    // NOP
label_2cb75c:
    // 0x2cb75c: 0x0  nop
    ctx->pc = 0x2cb75cu;
    // NOP
label_2cb760:
    // 0x2cb760: 0x1beed4  .word       0x001BEED4                   # dsllv       $sp, $k1, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb760u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << (GPR_U32(ctx, 0) & 0x3F));
label_2cb764:
    // 0x2cb764: 0x1beee0  .word       0x001BEEE0                   # add         $sp, $zero, $k1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_2cb768:
    // 0x2cb768: 0x1bed8c  .word       0x001BED8C                   # syscall     950 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb768u;
    ctx->pc = 0x2CB76Cu;
runtime->handleSyscall(rdram, ctx, 0x6FB6u);
label_2cb76c:
    // 0x2cb76c: 0x1bedb8  dsll        $sp, $k1, 22
    ctx->pc = 0x2cb76cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << 22);
label_2cb770:
    // 0x2cb770: 0x1bede4  .word       0x001BEDE4                   # and         $sp, $zero, $k1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb770u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 27));
label_2cb774:
    // 0x2cb774: 0x1beff4  teq         $zero, $k1, 959
    ctx->pc = 0x2cb774u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2cb778:
    // 0x2cb778: 0x1bee14  .word       0x001BEE14                   # dsllv       $sp, $k1, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb778u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 27) << (GPR_U32(ctx, 0) & 0x3F));
label_2cb77c:
    // 0x2cb77c: 0x1bee44  .word       0x001BEE44                   # sllv        $sp, $k1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb77cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 0) & 0x1F));
label_2cb780:
    // 0x2cb780: 0x1bee74  teq         $zero, $k1, 953
    ctx->pc = 0x2cb780u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2cb784:
    // 0x2cb784: 0x1beea4  .word       0x001BEEA4                   # and         $sp, $zero, $k1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb784u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 27));
label_2cb788:
    // 0x2cb788: 0x0  nop
    ctx->pc = 0x2cb788u;
    // NOP
label_2cb78c:
    // 0x2cb78c: 0x0  nop
    ctx->pc = 0x2cb78cu;
    // NOP
label_2cb790:
    // 0x2cb790: 0x1bf2a0  .word       0x001BF2A0                   # add         $fp, $zero, $k1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb790u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2cb794:
    // 0x2cb794: 0x1bf2a8  .word       0x001BF2A8                   # mfsa        $fp # 001B0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb794u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_2cb798:
    // 0x2cb798: 0x1bf2b0  tge         $zero, $k1, 970
    ctx->pc = 0x2cb798u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2cb79c:
    // 0x2cb79c: 0x1bf2bc  dsll32      $fp, $k1, 10
    ctx->pc = 0x2cb79cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 27) << (32 + 10));
label_2cb7a0:
    // 0x2cb7a0: 0x1bf2e8  .word       0x001BF2E8                   # mfsa        $fp # 001B02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb7a0u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_2cb7a4:
    // 0x2cb7a4: 0x1bf2c8  .word       0x001BF2C8                   # jr          $zero # 001BF2C0 <InstrIdType: CPU_SPECIAL>
label_2cb7a8:
    if (ctx->pc == 0x2CB7A8u) {
        ctx->pc = 0x2CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7A4u;
        // 0x2cb7a8: 0x1bf2e8  .word       0x001BF2E8                   # mfsa        $fp # 001B02C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 30, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7ACu;
        goto label_2cb7ac;
    }
    ctx->pc = 0x2CB7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7A4u;
        // 0x2cb7a8: 0x1bf2e8  .word       0x001BF2E8                   # mfsa        $fp # 001B02C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 30, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB7ACu;
label_2cb7ac:
    // 0x2cb7ac: 0x0  nop
    ctx->pc = 0x2cb7acu;
    // NOP
label_2cb7b0:
    // 0x2cb7b0: 0x1bf8c0  sll         $ra, $k1, 3
    ctx->pc = 0x2cb7b0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 27), 3));
label_2cb7b4:
    // 0x2cb7b4: 0x1bf948  .word       0x001BF948                   # jr          $zero # 001BF940 <InstrIdType: CPU_SPECIAL>
label_2cb7b8:
    if (ctx->pc == 0x2CB7B8u) {
        ctx->pc = 0x2CB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B4u;
        // 0x2cb7b8: 0x1bf8cc  .word       0x001BF8CC                   # syscall     995 # 001B0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2CB7BCu;
        runtime->handleSyscall(rdram, ctx, 0x6FE3u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7BCu;
        goto label_2cb7bc;
    }
    ctx->pc = 0x2CB7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B4u;
        // 0x2cb7b8: 0x1bf8cc  .word       0x001BF8CC                   # syscall     995 # 001B0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2CB7BCu;
        runtime->handleSyscall(rdram, ctx, 0x6FE3u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB7BCu;
label_2cb7bc:
    // 0x2cb7bc: 0x1bf8cc  .word       0x001BF8CC                   # syscall     995 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb7bcu;
    ctx->pc = 0x2CB7C0u;
runtime->handleSyscall(rdram, ctx, 0x6FE3u);
label_2cb7c0:
    // 0x2cb7c0: 0x1bf8cc  .word       0x001BF8CC                   # syscall     995 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb7c0u;
    ctx->pc = 0x2CB7C4u;
runtime->handleSyscall(rdram, ctx, 0x6FE3u);
label_2cb7c4:
    // 0x2cb7c4: 0x1bf8dc  .word       0x001BF8DC                   # dmult       $zero, $k1 # 0000F8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb7c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CB7C4 raw=0x001BF8DC");
 /* MITIGATED */
label_2cb7c8:
    // 0x2cb7c8: 0x1bf8ec  .word       0x001BF8EC                   # dadd        $ra, $zero, $k1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb7c8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2cb7cc:
    // 0x2cb7cc: 0x1bf8fc  dsll32      $ra, $k1, 3
    ctx->pc = 0x2cb7ccu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 27) << (32 + 3));
label_2cb7d0:
    // 0x2cb7d0: 0x10  mfhi        $zero
    ctx->pc = 0x2cb7d0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2cb7d4:
    // 0x2cb7d4: 0x10  mfhi        $zero
    ctx->pc = 0x2cb7d4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2cb7d8:
    // 0x2cb7d8: 0x10  mfhi        $zero
    ctx->pc = 0x2cb7d8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2cb7dc:
    // 0x2cb7dc: 0x10  mfhi        $zero
    ctx->pc = 0x2cb7dcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2cb7e0:
    // 0x2cb7e0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2cb7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2cb7e4:
    // 0x2cb7e4: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2cb7e4u;
    
label_2cb7e8:
    // 0x2cb7e8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2cb7e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb7ec:
    // 0x2cb7ec: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2cb7ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb7f0:
    // 0x2cb7f0: 0x0  nop
    ctx->pc = 0x2cb7f0u;
    // NOP
label_2cb7f4:
    // 0x2cb7f4: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2cb7f4u;
    
label_2cb7f8:
    // 0x2cb7f8: 0x0  nop
    ctx->pc = 0x2cb7f8u;
    // NOP
label_2cb7fc:
    // 0x2cb7fc: 0x10  mfhi        $zero
    ctx->pc = 0x2cb7fcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2cb800:
    // 0x2cb800: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2cb800u;
    
label_2cb804:
    // 0x2cb804: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2cb804u;
    
label_2cb808:
    // 0x2cb808: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2cb808u;
    
label_2cb80c:
    // 0x2cb80c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x2cb80cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2cb810:
    // 0x2cb810: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2cb810u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb814:
    // 0x2cb814: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x2cb814u;
    
label_2cb818:
    // 0x2cb818: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb818u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2cb81c:
    // 0x2cb81c: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb81cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2cb820:
    // 0x2cb820: 0x0  nop
    ctx->pc = 0x2cb820u;
    // NOP
label_2cb824:
    // 0x2cb824: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x2cb824u;
    
label_2cb828:
    // 0x2cb828: 0x0  nop
    ctx->pc = 0x2cb828u;
    // NOP
label_2cb82c:
    // 0x2cb82c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x2cb82cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2cb830:
    // 0x2cb830: 0x5450  .word       0x00005450                   # mfhi        $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb830u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2cb834:
    // 0x2cb834: 0x0  nop
    ctx->pc = 0x2cb834u;
    // NOP
label_2cb838:
    // 0x2cb838: 0x0  nop
    ctx->pc = 0x2cb838u;
    // NOP
label_2cb83c:
    // 0x2cb83c: 0x0  nop
    ctx->pc = 0x2cb83cu;
    // NOP
label_2cb840:
    // 0x2cb840: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cb840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb844:
    // 0x2cb844: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb848:
    // 0x2cb848: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cb848u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cb84c:
    // 0x2cb84c: 0x67656220  daddiu      $a1, $k1, 0x6220
    ctx->pc = 0x2cb84cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25120);
label_2cb850:
    // 0x2cb850: 0x62206e75  daddi       $zero, $s1, 0x6E75
    ctx->pc = 0x2cb850u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)28277; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cb854:
    // 0x2cb854: 0x6c747461  ldr         $s4, 0x7461($v1)
    ctx->pc = 0x2cb854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2cb858:
    // 0x2cb858: 0x69772065  ldl         $s7, 0x2065($t3)
    ctx->pc = 0x2cb858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_2cb85c:
    // 0x2cb85c: 0x1b206874  blez        $t9, . + 4 + (0x6874 << 2)
label_2cb860:
    if (ctx->pc == 0x2CB860u) {
        ctx->pc = 0x2CB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB85Cu;
        // 0x2cb860: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CB860 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB864u;
        goto label_2cb864;
    }
    ctx->pc = 0x2CB85Cu;
    {
        const bool branch_taken_0x2cb85c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB85Cu;
        // 0x2cb860: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CB860 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb85c) {
            ctx->pc = 0x2E5A30u;
            return;
        }
    }
    ctx->pc = 0x2CB864u;
label_2cb864:
    // 0x2cb864: 0x2137471b  addi        $s7, $t1, 0x471B
    ctx->pc = 0x2cb864u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cb868:
    // 0x2cb868: 0x0  nop
    ctx->pc = 0x2cb868u;
    // NOP
label_2cb86c:
    // 0x2cb86c: 0x0  nop
    ctx->pc = 0x2cb86cu;
    // NOP
label_2cb870:
    // 0x2cb870: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cb870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb874:
    // 0x2cb874: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb878:
    // 0x2cb878: 0x74207327  .word       0x74207327                   # INVALID     $at, $zero, 0x7327 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb878u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CB878 raw=0x74207327");
 /* MITIGATED */
label_2cb87c:
    // 0x2cb87c: 0x706f6f72  .word       0x706F6F72                   # INVALID     $v1, $t7, 0x6F72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb87cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CB87C raw=0x706F6F72");
 /* MITIGATED */
label_2cb880:
    // 0x2cb880: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cb880u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cb884:
    // 0x2cb884: 0x66656420  daddiu      $a1, $s3, 0x6420
    ctx->pc = 0x2cb884u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25632);
label_2cb888:
    // 0x2cb888: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x2cb888u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2cb88c:
    // 0x2cb88c: 0x471b2064  .word       0x471B2064                   # INVALID     $t8, $k1, 0x2064 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cb88cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x24 at 0x2CB88C raw=0x471B2064");
 /* MITIGATED */
label_2cb890:
    // 0x2cb890: 0x1b732531  .word       0x1B732531                   # blez        $k1, . + 4 + (0x2531 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cb894:
    if (ctx->pc == 0x2CB894u) {
        ctx->pc = 0x2CB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB890u;
        // 0x2cb894: 0x73273747  .word       0x73273747                   # INVALID     $t9, $a3, 0x3747 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CB894 raw=0x73273747");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB898u;
        goto label_2cb898;
    }
    ctx->pc = 0x2CB890u;
    {
        const bool branch_taken_0x2cb890 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB890u;
        // 0x2cb894: 0x73273747  .word       0x73273747                   # INVALID     $t9, $a3, 0x3747 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CB894 raw=0x73273747");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb890) {
            ctx->pc = 0x2D4D58u;
            return;
        }
    }
    ctx->pc = 0x2CB898u;
label_2cb898:
    // 0x2cb898: 0x6f727420  ldr         $s2, 0x7420($k1)
    ctx->pc = 0x2cb898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cb89c:
    // 0x2cb89c: 0x21706f  .word       0x0021706F                   # dsubu       $t6, $at, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb89cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) - GPR_U64(ctx, 1));
label_2cb8a0:
    // 0x2cb8a0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cb8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb8a4:
    // 0x2cb8a4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb8a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb8a8:
    // 0x2cb8a8: 0x74207327  .word       0x74207327                   # INVALID     $at, $zero, 0x7327 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb8a8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CB8A8 raw=0x74207327");
 /* MITIGATED */
label_2cb8ac:
    // 0x2cb8ac: 0x706f6f72  .word       0x706F6F72                   # INVALID     $v1, $t7, 0x6F72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb8acu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CB8AC raw=0x706F6F72");
 /* MITIGATED */
label_2cb8b0:
    // 0x2cb8b0: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cb8b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cb8b4:
    // 0x2cb8b4: 0x6c6c7570  ldr         $t4, 0x7570($v1)
    ctx->pc = 0x2cb8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30064); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cb8b8:
    // 0x2cb8b8: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x2cb8b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2cb8bc:
    // 0x2cb8bc: 0x6b636162  ldl         $v1, 0x6162($k1)
    ctx->pc = 0x2cb8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb8c0:
    // 0x2cb8c0: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2cb8c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cb8c4:
    // 0x2cb8c4: 0x0  nop
    ctx->pc = 0x2cb8c4u;
    // NOP
label_2cb8c8:
    // 0x2cb8c8: 0x0  nop
    ctx->pc = 0x2cb8c8u;
    // NOP
label_2cb8cc:
    // 0x2cb8cc: 0x0  nop
    ctx->pc = 0x2cb8ccu;
    // NOP
label_2cb8d0:
    // 0x2cb8d0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cb8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb8d4:
    // 0x2cb8d4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb8d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb8d8:
    // 0x2cb8d8: 0x66207327  daddiu      $zero, $s1, 0x7327
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29479);
label_2cb8dc:
    // 0x2cb8dc: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cb8e0:
    // 0x2cb8e0: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cb8e0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cb8e4:
    // 0x2cb8e4: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_2cb8e8:
    // 0x2cb8e8: 0x6564206e  daddiu      $a0, $t3, 0x206E
    ctx->pc = 0x2cb8e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8302);
label_2cb8ec:
    // 0x2cb8ec: 0x6f727473  ldr         $s2, 0x7473($k1)
    ctx->pc = 0x2cb8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cb8f0:
    // 0x2cb8f0: 0x21646579  addi        $a0, $t3, 0x6579
    ctx->pc = 0x2cb8f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25977, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cb8f4:
    // 0x2cb8f4: 0x0  nop
    ctx->pc = 0x2cb8f4u;
    // NOP
label_2cb8f8:
    // 0x2cb8f8: 0x0  nop
    ctx->pc = 0x2cb8f8u;
    // NOP
label_2cb8fc:
    // 0x2cb8fc: 0x0  nop
    ctx->pc = 0x2cb8fcu;
    // NOP
label_2cb900:
    // 0x2cb900: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cb900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb904:
    // 0x2cb904: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb908:
    // 0x2cb908: 0x74207327  .word       0x74207327                   # INVALID     $at, $zero, 0x7327 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb908u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CB908 raw=0x74207327");
 /* MITIGATED */
label_2cb90c:
    // 0x2cb90c: 0x706f6f72  .word       0x706F6F72                   # INVALID     $v1, $t7, 0x6F72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb90cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CB90C raw=0x706F6F72");
 /* MITIGATED */
label_2cb910:
    // 0x2cb910: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cb910u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cb914:
    // 0x2cb914: 0x63657320  daddi       $a1, $k1, 0x7320
    ctx->pc = 0x2cb914u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cb918:
    // 0x2cb918: 0x64657275  daddiu      $a1, $v1, 0x7275
    ctx->pc = 0x2cb918u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29301);
label_2cb91c:
    // 0x2cb91c: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cb91cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cb920:
    // 0x2cb920: 0x74616720  .word       0x74616720                   # INVALID     $v1, $at, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb920u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CB920 raw=0x74616720");
 /* MITIGATED */
label_2cb924:
    // 0x2cb924: 0x2165  .word       0x00002165                   # move        $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cb928:
    // 0x2cb928: 0x0  nop
    ctx->pc = 0x2cb928u;
    // NOP
label_2cb92c:
    // 0x2cb92c: 0x0  nop
    ctx->pc = 0x2cb92cu;
    // NOP
label_2cb930:
    // 0x2cb930: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cb930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb934:
    // 0x2cb934: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb938:
    // 0x2cb938: 0x66207327  daddiu      $zero, $s1, 0x7327
    ctx->pc = 0x2cb938u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29479);
label_2cb93c:
    // 0x2cb93c: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cb93cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cb940:
    // 0x2cb940: 0x6d207327  ldr         $zero, 0x7327($t1)
    ctx->pc = 0x2cb940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cb944:
    // 0x2cb944: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x2cb944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cb948:
    // 0x2cb948: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb948u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CB948 raw=0x73692065");
 /* MITIGATED */
label_2cb94c:
    // 0x2cb94c: 0x6f726420  ldr         $s2, 0x6420($k1)
    ctx->pc = 0x2cb94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cb950:
    // 0x2cb950: 0x6e697070  ldr         $t1, 0x7070($s3)
    ctx->pc = 0x2cb950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28784); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cb954:
    // 0x2cb954: 0x2167  .word       0x00002167                   # not         $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb954u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cb958:
    // 0x2cb958: 0x0  nop
    ctx->pc = 0x2cb958u;
    // NOP
label_2cb95c:
    // 0x2cb95c: 0x0  nop
    ctx->pc = 0x2cb95cu;
    // NOP
    ctx->pc = 0x2cb960u;
    return;
}

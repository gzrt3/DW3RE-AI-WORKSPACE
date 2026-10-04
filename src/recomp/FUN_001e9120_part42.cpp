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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part42(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fd170u: goto label_1fd170;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd17cu: goto label_1fd17c;
        case 0x1fd180u: goto label_1fd180;
        case 0x1fd184u: goto label_1fd184;
        case 0x1fd188u: goto label_1fd188;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd190u: goto label_1fd190;
        case 0x1fd194u: goto label_1fd194;
        case 0x1fd198u: goto label_1fd198;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1a0u: goto label_1fd1a0;
        case 0x1fd1a4u: goto label_1fd1a4;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd1acu: goto label_1fd1ac;
        case 0x1fd1b0u: goto label_1fd1b0;
        case 0x1fd1b4u: goto label_1fd1b4;
        case 0x1fd1b8u: goto label_1fd1b8;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1c0u: goto label_1fd1c0;
        case 0x1fd1c4u: goto label_1fd1c4;
        case 0x1fd1c8u: goto label_1fd1c8;
        case 0x1fd1ccu: goto label_1fd1cc;
        case 0x1fd1d0u: goto label_1fd1d0;
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1d8u: goto label_1fd1d8;
        case 0x1fd1dcu: goto label_1fd1dc;
        case 0x1fd1e0u: goto label_1fd1e0;
        case 0x1fd1e4u: goto label_1fd1e4;
        case 0x1fd1e8u: goto label_1fd1e8;
        case 0x1fd1ecu: goto label_1fd1ec;
        case 0x1fd1f0u: goto label_1fd1f0;
        case 0x1fd1f4u: goto label_1fd1f4;
        case 0x1fd1f8u: goto label_1fd1f8;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd200u: goto label_1fd200;
        case 0x1fd204u: goto label_1fd204;
        case 0x1fd208u: goto label_1fd208;
        case 0x1fd20cu: goto label_1fd20c;
        case 0x1fd210u: goto label_1fd210;
        case 0x1fd214u: goto label_1fd214;
        case 0x1fd218u: goto label_1fd218;
        case 0x1fd21cu: goto label_1fd21c;
        case 0x1fd220u: goto label_1fd220;
        case 0x1fd224u: goto label_1fd224;
        case 0x1fd228u: goto label_1fd228;
        case 0x1fd22cu: goto label_1fd22c;
        case 0x1fd230u: goto label_1fd230;
        case 0x1fd234u: goto label_1fd234;
        case 0x1fd238u: goto label_1fd238;
        case 0x1fd23cu: goto label_1fd23c;
        case 0x1fd240u: goto label_1fd240;
        case 0x1fd244u: goto label_1fd244;
        case 0x1fd248u: goto label_1fd248;
        case 0x1fd24cu: goto label_1fd24c;
        case 0x1fd250u: goto label_1fd250;
        case 0x1fd254u: goto label_1fd254;
        case 0x1fd258u: goto label_1fd258;
        case 0x1fd25cu: goto label_1fd25c;
        case 0x1fd260u: goto label_1fd260;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd268u: goto label_1fd268;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd270u: goto label_1fd270;
        case 0x1fd274u: goto label_1fd274;
        case 0x1fd278u: goto label_1fd278;
        case 0x1fd27cu: goto label_1fd27c;
        case 0x1fd280u: goto label_1fd280;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd288u: goto label_1fd288;
        case 0x1fd28cu: goto label_1fd28c;
        case 0x1fd290u: goto label_1fd290;
        case 0x1fd294u: goto label_1fd294;
        case 0x1fd298u: goto label_1fd298;
        case 0x1fd29cu: goto label_1fd29c;
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2a4u: goto label_1fd2a4;
        case 0x1fd2a8u: goto label_1fd2a8;
        case 0x1fd2acu: goto label_1fd2ac;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2b4u: goto label_1fd2b4;
        case 0x1fd2b8u: goto label_1fd2b8;
        case 0x1fd2bcu: goto label_1fd2bc;
        case 0x1fd2c0u: goto label_1fd2c0;
        case 0x1fd2c4u: goto label_1fd2c4;
        case 0x1fd2c8u: goto label_1fd2c8;
        case 0x1fd2ccu: goto label_1fd2cc;
        case 0x1fd2d0u: goto label_1fd2d0;
        case 0x1fd2d4u: goto label_1fd2d4;
        case 0x1fd2d8u: goto label_1fd2d8;
        case 0x1fd2dcu: goto label_1fd2dc;
        case 0x1fd2e0u: goto label_1fd2e0;
        case 0x1fd2e4u: goto label_1fd2e4;
        case 0x1fd2e8u: goto label_1fd2e8;
        case 0x1fd2ecu: goto label_1fd2ec;
        case 0x1fd2f0u: goto label_1fd2f0;
        case 0x1fd2f4u: goto label_1fd2f4;
        case 0x1fd2f8u: goto label_1fd2f8;
        case 0x1fd2fcu: goto label_1fd2fc;
        case 0x1fd300u: goto label_1fd300;
        case 0x1fd304u: goto label_1fd304;
        case 0x1fd308u: goto label_1fd308;
        case 0x1fd30cu: goto label_1fd30c;
        case 0x1fd310u: goto label_1fd310;
        case 0x1fd314u: goto label_1fd314;
        case 0x1fd318u: goto label_1fd318;
        case 0x1fd31cu: goto label_1fd31c;
        case 0x1fd320u: goto label_1fd320;
        case 0x1fd324u: goto label_1fd324;
        case 0x1fd328u: goto label_1fd328;
        case 0x1fd32cu: goto label_1fd32c;
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd334u: goto label_1fd334;
        case 0x1fd338u: goto label_1fd338;
        case 0x1fd33cu: goto label_1fd33c;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd344u: goto label_1fd344;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd350u: goto label_1fd350;
        case 0x1fd354u: goto label_1fd354;
        case 0x1fd358u: goto label_1fd358;
        case 0x1fd35cu: goto label_1fd35c;
        case 0x1fd360u: goto label_1fd360;
        case 0x1fd364u: goto label_1fd364;
        case 0x1fd368u: goto label_1fd368;
        case 0x1fd36cu: goto label_1fd36c;
        case 0x1fd370u: goto label_1fd370;
        case 0x1fd374u: goto label_1fd374;
        case 0x1fd378u: goto label_1fd378;
        case 0x1fd37cu: goto label_1fd37c;
        case 0x1fd380u: goto label_1fd380;
        case 0x1fd384u: goto label_1fd384;
        case 0x1fd388u: goto label_1fd388;
        case 0x1fd38cu: goto label_1fd38c;
        case 0x1fd390u: goto label_1fd390;
        case 0x1fd394u: goto label_1fd394;
        case 0x1fd398u: goto label_1fd398;
        case 0x1fd39cu: goto label_1fd39c;
        case 0x1fd3a0u: goto label_1fd3a0;
        case 0x1fd3a4u: goto label_1fd3a4;
        case 0x1fd3a8u: goto label_1fd3a8;
        case 0x1fd3acu: goto label_1fd3ac;
        case 0x1fd3b0u: goto label_1fd3b0;
        case 0x1fd3b4u: goto label_1fd3b4;
        case 0x1fd3b8u: goto label_1fd3b8;
        case 0x1fd3bcu: goto label_1fd3bc;
        case 0x1fd3c0u: goto label_1fd3c0;
        case 0x1fd3c4u: goto label_1fd3c4;
        case 0x1fd3c8u: goto label_1fd3c8;
        case 0x1fd3ccu: goto label_1fd3cc;
        case 0x1fd3d0u: goto label_1fd3d0;
        case 0x1fd3d4u: goto label_1fd3d4;
        case 0x1fd3d8u: goto label_1fd3d8;
        case 0x1fd3dcu: goto label_1fd3dc;
        case 0x1fd3e0u: goto label_1fd3e0;
        case 0x1fd3e4u: goto label_1fd3e4;
        case 0x1fd3e8u: goto label_1fd3e8;
        case 0x1fd3ecu: goto label_1fd3ec;
        case 0x1fd3f0u: goto label_1fd3f0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd3f8u: goto label_1fd3f8;
        case 0x1fd3fcu: goto label_1fd3fc;
        case 0x1fd400u: goto label_1fd400;
        case 0x1fd404u: goto label_1fd404;
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd40cu: goto label_1fd40c;
        case 0x1fd410u: goto label_1fd410;
        case 0x1fd414u: goto label_1fd414;
        case 0x1fd418u: goto label_1fd418;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd420u: goto label_1fd420;
        case 0x1fd424u: goto label_1fd424;
        case 0x1fd428u: goto label_1fd428;
        case 0x1fd42cu: goto label_1fd42c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd434u: goto label_1fd434;
        case 0x1fd438u: goto label_1fd438;
        case 0x1fd43cu: goto label_1fd43c;
        case 0x1fd440u: goto label_1fd440;
        case 0x1fd444u: goto label_1fd444;
        case 0x1fd448u: goto label_1fd448;
        case 0x1fd44cu: goto label_1fd44c;
        case 0x1fd450u: goto label_1fd450;
        case 0x1fd454u: goto label_1fd454;
        case 0x1fd458u: goto label_1fd458;
        case 0x1fd45cu: goto label_1fd45c;
        case 0x1fd460u: goto label_1fd460;
        case 0x1fd464u: goto label_1fd464;
        case 0x1fd468u: goto label_1fd468;
        case 0x1fd46cu: goto label_1fd46c;
        case 0x1fd470u: goto label_1fd470;
        case 0x1fd474u: goto label_1fd474;
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd47cu: goto label_1fd47c;
        case 0x1fd480u: goto label_1fd480;
        case 0x1fd484u: goto label_1fd484;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd48cu: goto label_1fd48c;
        case 0x1fd490u: goto label_1fd490;
        case 0x1fd494u: goto label_1fd494;
        case 0x1fd498u: goto label_1fd498;
        case 0x1fd49cu: goto label_1fd49c;
        case 0x1fd4a0u: goto label_1fd4a0;
        case 0x1fd4a4u: goto label_1fd4a4;
        case 0x1fd4a8u: goto label_1fd4a8;
        case 0x1fd4acu: goto label_1fd4ac;
        case 0x1fd4b0u: goto label_1fd4b0;
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4b8u: goto label_1fd4b8;
        case 0x1fd4bcu: goto label_1fd4bc;
        case 0x1fd4c0u: goto label_1fd4c0;
        case 0x1fd4c4u: goto label_1fd4c4;
        case 0x1fd4c8u: goto label_1fd4c8;
        case 0x1fd4ccu: goto label_1fd4cc;
        case 0x1fd4d0u: goto label_1fd4d0;
        case 0x1fd4d4u: goto label_1fd4d4;
        case 0x1fd4d8u: goto label_1fd4d8;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e0u: goto label_1fd4e0;
        case 0x1fd4e4u: goto label_1fd4e4;
        case 0x1fd4e8u: goto label_1fd4e8;
        case 0x1fd4ecu: goto label_1fd4ec;
        case 0x1fd4f0u: goto label_1fd4f0;
        case 0x1fd4f4u: goto label_1fd4f4;
        case 0x1fd4f8u: goto label_1fd4f8;
        case 0x1fd4fcu: goto label_1fd4fc;
        case 0x1fd500u: goto label_1fd500;
        case 0x1fd504u: goto label_1fd504;
        case 0x1fd508u: goto label_1fd508;
        case 0x1fd50cu: goto label_1fd50c;
        case 0x1fd510u: goto label_1fd510;
        case 0x1fd514u: goto label_1fd514;
        case 0x1fd518u: goto label_1fd518;
        case 0x1fd51cu: goto label_1fd51c;
        case 0x1fd520u: goto label_1fd520;
        case 0x1fd524u: goto label_1fd524;
        case 0x1fd528u: goto label_1fd528;
        case 0x1fd52cu: goto label_1fd52c;
        case 0x1fd530u: goto label_1fd530;
        case 0x1fd534u: goto label_1fd534;
        case 0x1fd538u: goto label_1fd538;
        case 0x1fd53cu: goto label_1fd53c;
        case 0x1fd540u: goto label_1fd540;
        case 0x1fd544u: goto label_1fd544;
        case 0x1fd548u: goto label_1fd548;
        case 0x1fd54cu: goto label_1fd54c;
        case 0x1fd550u: goto label_1fd550;
        case 0x1fd554u: goto label_1fd554;
        case 0x1fd558u: goto label_1fd558;
        case 0x1fd55cu: goto label_1fd55c;
        case 0x1fd560u: goto label_1fd560;
        case 0x1fd564u: goto label_1fd564;
        case 0x1fd568u: goto label_1fd568;
        case 0x1fd56cu: goto label_1fd56c;
        case 0x1fd570u: goto label_1fd570;
        case 0x1fd574u: goto label_1fd574;
        case 0x1fd578u: goto label_1fd578;
        case 0x1fd57cu: goto label_1fd57c;
        case 0x1fd580u: goto label_1fd580;
        case 0x1fd584u: goto label_1fd584;
        case 0x1fd588u: goto label_1fd588;
        case 0x1fd58cu: goto label_1fd58c;
        case 0x1fd590u: goto label_1fd590;
        case 0x1fd594u: goto label_1fd594;
        case 0x1fd598u: goto label_1fd598;
        case 0x1fd59cu: goto label_1fd59c;
        case 0x1fd5a0u: goto label_1fd5a0;
        case 0x1fd5a4u: goto label_1fd5a4;
        case 0x1fd5a8u: goto label_1fd5a8;
        case 0x1fd5acu: goto label_1fd5ac;
        case 0x1fd5b0u: goto label_1fd5b0;
        case 0x1fd5b4u: goto label_1fd5b4;
        case 0x1fd5b8u: goto label_1fd5b8;
        case 0x1fd5bcu: goto label_1fd5bc;
        case 0x1fd5c0u: goto label_1fd5c0;
        case 0x1fd5c4u: goto label_1fd5c4;
        case 0x1fd5c8u: goto label_1fd5c8;
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5d0u: goto label_1fd5d0;
        case 0x1fd5d4u: goto label_1fd5d4;
        case 0x1fd5d8u: goto label_1fd5d8;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd5e0u: goto label_1fd5e0;
        case 0x1fd5e4u: goto label_1fd5e4;
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd5ecu: goto label_1fd5ec;
        case 0x1fd5f0u: goto label_1fd5f0;
        case 0x1fd5f4u: goto label_1fd5f4;
        case 0x1fd5f8u: goto label_1fd5f8;
        case 0x1fd5fcu: goto label_1fd5fc;
        case 0x1fd600u: goto label_1fd600;
        case 0x1fd604u: goto label_1fd604;
        case 0x1fd608u: goto label_1fd608;
        case 0x1fd60cu: goto label_1fd60c;
        case 0x1fd610u: goto label_1fd610;
        case 0x1fd614u: goto label_1fd614;
        case 0x1fd618u: goto label_1fd618;
        case 0x1fd61cu: goto label_1fd61c;
        case 0x1fd620u: goto label_1fd620;
        case 0x1fd624u: goto label_1fd624;
        case 0x1fd628u: goto label_1fd628;
        case 0x1fd62cu: goto label_1fd62c;
        case 0x1fd630u: goto label_1fd630;
        case 0x1fd634u: goto label_1fd634;
        case 0x1fd638u: goto label_1fd638;
        case 0x1fd63cu: goto label_1fd63c;
        case 0x1fd640u: goto label_1fd640;
        case 0x1fd644u: goto label_1fd644;
        case 0x1fd648u: goto label_1fd648;
        case 0x1fd64cu: goto label_1fd64c;
        case 0x1fd650u: goto label_1fd650;
        case 0x1fd654u: goto label_1fd654;
        case 0x1fd658u: goto label_1fd658;
        case 0x1fd65cu: goto label_1fd65c;
        case 0x1fd660u: goto label_1fd660;
        case 0x1fd664u: goto label_1fd664;
        case 0x1fd668u: goto label_1fd668;
        case 0x1fd66cu: goto label_1fd66c;
        case 0x1fd670u: goto label_1fd670;
        case 0x1fd674u: goto label_1fd674;
        case 0x1fd678u: goto label_1fd678;
        case 0x1fd67cu: goto label_1fd67c;
        case 0x1fd680u: goto label_1fd680;
        case 0x1fd684u: goto label_1fd684;
        case 0x1fd688u: goto label_1fd688;
        case 0x1fd68cu: goto label_1fd68c;
        case 0x1fd690u: goto label_1fd690;
        case 0x1fd694u: goto label_1fd694;
        case 0x1fd698u: goto label_1fd698;
        case 0x1fd69cu: goto label_1fd69c;
        case 0x1fd6a0u: goto label_1fd6a0;
        case 0x1fd6a4u: goto label_1fd6a4;
        case 0x1fd6a8u: goto label_1fd6a8;
        case 0x1fd6acu: goto label_1fd6ac;
        case 0x1fd6b0u: goto label_1fd6b0;
        case 0x1fd6b4u: goto label_1fd6b4;
        case 0x1fd6b8u: goto label_1fd6b8;
        case 0x1fd6bcu: goto label_1fd6bc;
        case 0x1fd6c0u: goto label_1fd6c0;
        case 0x1fd6c4u: goto label_1fd6c4;
        case 0x1fd6c8u: goto label_1fd6c8;
        case 0x1fd6ccu: goto label_1fd6cc;
        case 0x1fd6d0u: goto label_1fd6d0;
        case 0x1fd6d4u: goto label_1fd6d4;
        case 0x1fd6d8u: goto label_1fd6d8;
        case 0x1fd6dcu: goto label_1fd6dc;
        case 0x1fd6e0u: goto label_1fd6e0;
        case 0x1fd6e4u: goto label_1fd6e4;
        case 0x1fd6e8u: goto label_1fd6e8;
        case 0x1fd6ecu: goto label_1fd6ec;
        case 0x1fd6f0u: goto label_1fd6f0;
        case 0x1fd6f4u: goto label_1fd6f4;
        case 0x1fd6f8u: goto label_1fd6f8;
        case 0x1fd6fcu: goto label_1fd6fc;
        case 0x1fd700u: goto label_1fd700;
        case 0x1fd704u: goto label_1fd704;
        case 0x1fd708u: goto label_1fd708;
        case 0x1fd70cu: goto label_1fd70c;
        case 0x1fd710u: goto label_1fd710;
        case 0x1fd714u: goto label_1fd714;
        case 0x1fd718u: goto label_1fd718;
        case 0x1fd71cu: goto label_1fd71c;
        case 0x1fd720u: goto label_1fd720;
        case 0x1fd724u: goto label_1fd724;
        case 0x1fd728u: goto label_1fd728;
        case 0x1fd72cu: goto label_1fd72c;
        case 0x1fd730u: goto label_1fd730;
        case 0x1fd734u: goto label_1fd734;
        case 0x1fd738u: goto label_1fd738;
        case 0x1fd73cu: goto label_1fd73c;
        case 0x1fd740u: goto label_1fd740;
        case 0x1fd744u: goto label_1fd744;
        case 0x1fd748u: goto label_1fd748;
        case 0x1fd74cu: goto label_1fd74c;
        case 0x1fd750u: goto label_1fd750;
        case 0x1fd754u: goto label_1fd754;
        case 0x1fd758u: goto label_1fd758;
        case 0x1fd75cu: goto label_1fd75c;
        case 0x1fd760u: goto label_1fd760;
        case 0x1fd764u: goto label_1fd764;
        case 0x1fd768u: goto label_1fd768;
        case 0x1fd76cu: goto label_1fd76c;
        case 0x1fd770u: goto label_1fd770;
        case 0x1fd774u: goto label_1fd774;
        case 0x1fd778u: goto label_1fd778;
        case 0x1fd77cu: goto label_1fd77c;
        case 0x1fd780u: goto label_1fd780;
        case 0x1fd784u: goto label_1fd784;
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd78cu: goto label_1fd78c;
        case 0x1fd790u: goto label_1fd790;
        case 0x1fd794u: goto label_1fd794;
        case 0x1fd798u: goto label_1fd798;
        case 0x1fd79cu: goto label_1fd79c;
        case 0x1fd7a0u: goto label_1fd7a0;
        case 0x1fd7a4u: goto label_1fd7a4;
        case 0x1fd7a8u: goto label_1fd7a8;
        case 0x1fd7acu: goto label_1fd7ac;
        case 0x1fd7b0u: goto label_1fd7b0;
        case 0x1fd7b4u: goto label_1fd7b4;
        case 0x1fd7b8u: goto label_1fd7b8;
        case 0x1fd7bcu: goto label_1fd7bc;
        case 0x1fd7c0u: goto label_1fd7c0;
        case 0x1fd7c4u: goto label_1fd7c4;
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd7ccu: goto label_1fd7cc;
        case 0x1fd7d0u: goto label_1fd7d0;
        case 0x1fd7d4u: goto label_1fd7d4;
        case 0x1fd7d8u: goto label_1fd7d8;
        case 0x1fd7dcu: goto label_1fd7dc;
        case 0x1fd7e0u: goto label_1fd7e0;
        case 0x1fd7e4u: goto label_1fd7e4;
        case 0x1fd7e8u: goto label_1fd7e8;
        case 0x1fd7ecu: goto label_1fd7ec;
        case 0x1fd7f0u: goto label_1fd7f0;
        case 0x1fd7f4u: goto label_1fd7f4;
        case 0x1fd7f8u: goto label_1fd7f8;
        case 0x1fd7fcu: goto label_1fd7fc;
        case 0x1fd800u: goto label_1fd800;
        case 0x1fd804u: goto label_1fd804;
        case 0x1fd808u: goto label_1fd808;
        case 0x1fd80cu: goto label_1fd80c;
        case 0x1fd810u: goto label_1fd810;
        case 0x1fd814u: goto label_1fd814;
        case 0x1fd818u: goto label_1fd818;
        case 0x1fd81cu: goto label_1fd81c;
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd824u: goto label_1fd824;
        case 0x1fd828u: goto label_1fd828;
        case 0x1fd82cu: goto label_1fd82c;
        case 0x1fd830u: goto label_1fd830;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd840u: goto label_1fd840;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd850u: goto label_1fd850;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd864u: goto label_1fd864;
        case 0x1fd868u: goto label_1fd868;
        case 0x1fd86cu: goto label_1fd86c;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd874u: goto label_1fd874;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd87cu: goto label_1fd87c;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd884u: goto label_1fd884;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd88cu: goto label_1fd88c;
        case 0x1fd890u: goto label_1fd890;
        case 0x1fd894u: goto label_1fd894;
        case 0x1fd898u: goto label_1fd898;
        case 0x1fd89cu: goto label_1fd89c;
        case 0x1fd8a0u: goto label_1fd8a0;
        case 0x1fd8a4u: goto label_1fd8a4;
        case 0x1fd8a8u: goto label_1fd8a8;
        case 0x1fd8acu: goto label_1fd8ac;
        case 0x1fd8b0u: goto label_1fd8b0;
        case 0x1fd8b4u: goto label_1fd8b4;
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8bcu: goto label_1fd8bc;
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd8d0u: goto label_1fd8d0;
        case 0x1fd8d4u: goto label_1fd8d4;
        case 0x1fd8d8u: goto label_1fd8d8;
        case 0x1fd8dcu: goto label_1fd8dc;
        case 0x1fd8e0u: goto label_1fd8e0;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f0u: goto label_1fd8f0;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd8f8u: goto label_1fd8f8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd900u: goto label_1fd900;
        case 0x1fd904u: goto label_1fd904;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd914u: goto label_1fd914;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd91cu: goto label_1fd91c;
        case 0x1fd920u: goto label_1fd920;
        case 0x1fd924u: goto label_1fd924;
        case 0x1fd928u: goto label_1fd928;
        case 0x1fd92cu: goto label_1fd92c;
        case 0x1fd930u: goto label_1fd930;
        case 0x1fd934u: goto label_1fd934;
        case 0x1fd938u: goto label_1fd938;
        case 0x1fd93cu: goto label_1fd93c;
        default: return;
    }

label_1fd170:
    if (ctx->pc == 0x1FD170u) {
        ctx->pc = 0x1FD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD16Cu;
        // 0x1fd170: 0xae270b74  sw          $a3, 0xB74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2932), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD174u;
        goto label_1fd174;
    }
    ctx->pc = 0x1FD16Cu;
    {
        const bool branch_taken_0x1fd16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD16Cu;
        // 0x1fd170: 0xae270b74  sw          $a3, 0xB74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2932), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd16c) {
            ctx->pc = 0x1FCF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fcf54; return; }
        }
    }
    ctx->pc = 0x1FD174u;
label_1fd174:
    // 0x1fd174: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fd174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fd178:
    // 0x1fd178: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1fd178u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fd17c:
    // 0x1fd17c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1fd17cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fd180:
    // 0x1fd180: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1fd180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fd184:
    // 0x1fd184: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1fd184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fd188:
    // 0x1fd188: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fd188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fd18c:
    // 0x1fd18c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fd18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd190:
    // 0x1fd190: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd194:
    // 0x1fd194: 0x3e00008  jr          $ra
label_1fd198:
    if (ctx->pc == 0x1FD198u) {
        ctx->pc = 0x1FD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD194u;
        // 0x1fd198: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD19Cu;
        goto label_1fd19c;
    }
    ctx->pc = 0x1FD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD194u;
        // 0x1fd198: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD19Cu;
label_1fd19c:
    // 0x1fd19c: 0x0  nop
    ctx->pc = 0x1fd19cu;
    // NOP
label_1fd1a0:
    // 0x1fd1a0: 0xaf809054  sw          $zero, -0x6FAC($gp)
    ctx->pc = 0x1fd1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938708), GPR_U32(ctx, 0));
label_1fd1a4:
    // 0x1fd1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd1a8:
    // 0x1fd1a8: 0xaf809050  sw          $zero, -0x6FB0($gp)
    ctx->pc = 0x1fd1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938704), GPR_U32(ctx, 0));
label_1fd1ac:
    // 0x1fd1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd1b0:
    // 0x1fd1b0: 0xaf80904c  sw          $zero, -0x6FB4($gp)
    ctx->pc = 0x1fd1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 0));
label_1fd1b4:
    // 0x1fd1b4: 0xaf809048  sw          $zero, -0x6FB8($gp)
    ctx->pc = 0x1fd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938696), GPR_U32(ctx, 0));
label_1fd1b8:
    // 0x1fd1b8: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fd1bc:
    // 0x1fd1bc: 0x2484a780  addiu       $a0, $a0, -0x5880
    ctx->pc = 0x1fd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944640));
label_1fd1c0:
    // 0x1fd1c0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1fd1c4:
    // 0x1fd1c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fd1c8:
    // 0x1fd1c8: 0xe01821  addu        $v1, $a3, $zero
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_1fd1cc:
    // 0x1fd1cc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1fd1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1fd1d0:
    // 0x1fd1d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fd1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1fd1d4:
    // 0x1fd1d4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1fd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1fd1d8:
    // 0x1fd1d8: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1fd1d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fd1dc:
    // 0x1fd1dc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1fd1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_1fd1e0:
    // 0x1fd1e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1fd1e4:
    if (ctx->pc == 0x1FD1E4u) {
        ctx->pc = 0x1FD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1E0u;
        // 0x1fd1e4: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1E8u;
        goto label_1fd1e8;
    }
    ctx->pc = 0x1FD1E0u;
    {
        const bool branch_taken_0x1fd1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1E0u;
        // 0x1fd1e4: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1e0) {
            ctx->pc = 0x1FD1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd1c0;
        }
    }
    ctx->pc = 0x1FD1E8u;
label_1fd1e8:
    // 0x1fd1e8: 0x3e00008  jr          $ra
label_1fd1ec:
    if (ctx->pc == 0x1FD1ECu) {
        ctx->pc = 0x1FD1F0u;
        goto label_1fd1f0;
    }
    ctx->pc = 0x1FD1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD1F0u;
label_1fd1f0:
    // 0x1fd1f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fd1f4:
    // 0x1fd1f4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fd1f8:
    // 0x1fd1f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1fd1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1fd1fc:
    // 0x1fd1fc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fd200:
    // 0x1fd200: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fd200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1fd204:
    // 0x1fd204: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1fd204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1fd208:
    // 0x1fd208: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fd208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fd20c:
    // 0x1fd20c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1fd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1fd210:
    // 0x1fd210: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fd210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fd214:
    // 0x1fd214: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1fd218:
    // 0x1fd218: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fd21c:
    // 0x1fd21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd220:
    // 0x1fd220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd224:
    // 0x1fd224: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fd228:
    // 0x1fd228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fd22c:
    // 0x1fd22c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fd22cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd230:
    // 0x1fd230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd234:
    // 0x1fd234: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1fd234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fd238:
    // 0x1fd238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fd23c:
    // 0x1fd23c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd240:
    // 0x1fd240: 0xaf89904c  sw          $t1, -0x6FB4($gp)
    ctx->pc = 0x1fd240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 9));
label_1fd244:
    // 0x1fd244: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fd244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd248:
    // 0x1fd248: 0xaf8a9048  sw          $t2, -0x6FB8($gp)
    ctx->pc = 0x1fd248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938696), GPR_U32(ctx, 10));
label_1fd24c:
    // 0x1fd24c: 0x24723620  addiu       $s2, $v1, 0x3620
    ctx->pc = 0x1fd24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1fd250:
    // 0x1fd250: 0x15620080  bne         $t3, $v0, . + 4 + (0x80 << 2)
label_1fd254:
    if (ctx->pc == 0x1FD254u) {
        ctx->pc = 0x1FD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD250u;
        // 0x1fd254: 0xaf8b9054  sw          $t3, -0x6FAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938708), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD258u;
        goto label_1fd258;
    }
    ctx->pc = 0x1FD250u;
    {
        const bool branch_taken_0x1fd250 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD250u;
        // 0x1fd254: 0xaf8b9054  sw          $t3, -0x6FAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938708), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd250) {
            ctx->pc = 0x1FD454u;
            goto label_1fd454;
        }
    }
    ctx->pc = 0x1FD258u;
label_1fd258:
    // 0x1fd258: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fd258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd25c:
    // 0x1fd25c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fd25cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd260:
    // 0x1fd260: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
label_1fd264:
    if (ctx->pc == 0x1FD264u) {
        ctx->pc = 0x1FD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD260u;
        // 0x1fd264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD268u;
        goto label_1fd268;
    }
    ctx->pc = 0x1FD260u;
    {
        const bool branch_taken_0x1fd260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD260u;
        // 0x1fd264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd260) {
            ctx->pc = 0x1FD288u;
            goto label_1fd288;
        }
    }
    ctx->pc = 0x1FD268u;
label_1fd268:
    // 0x1fd268: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fd26c:
    // 0x1fd26c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd270:
    // 0x1fd270: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fd270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fd274:
    // 0x1fd274: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd278:
    // 0x1fd278: 0xc08053c  jal         func_2014F0
label_1fd27c:
    if (ctx->pc == 0x1FD27Cu) {
        ctx->pc = 0x1FD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD278u;
        // 0x1fd27c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD280u;
        goto label_1fd280;
    }
    ctx->pc = 0x1FD278u;
    SET_GPR_U32(ctx, 31, 0x1FD280u);
    ctx->pc = 0x1FD27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD278u;
    // 0x1fd27c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014F0u;
    { ctx->pc = 0x2014f0; return; }
    ctx->pc = 0x1FD280u;
label_1fd280:
    // 0x1fd280: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fd284:
    if (ctx->pc == 0x1FD284u) {
        ctx->pc = 0x1FD288u;
        goto label_1fd288;
    }
    ctx->pc = 0x1FD280u;
    {
        const bool branch_taken_0x1fd280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd280) {
            ctx->pc = 0x1FD2A4u;
            goto label_1fd2a4;
        }
    }
    ctx->pc = 0x1FD288u;
label_1fd288:
    // 0x1fd288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd28c:
    // 0x1fd28c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fd290:
    // 0x1fd290: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd294:
    // 0x1fd294: 0x240700ab  addiu       $a3, $zero, 0xAB
    ctx->pc = 0x1fd294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_1fd298:
    // 0x1fd298: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd29c:
    // 0x1fd29c: 0xc08053c  jal         func_2014F0
label_1fd2a0:
    if (ctx->pc == 0x1FD2A0u) {
        ctx->pc = 0x1FD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD29Cu;
        // 0x1fd2a0: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2A4u;
        goto label_1fd2a4;
    }
    ctx->pc = 0x1FD29Cu;
    SET_GPR_U32(ctx, 31, 0x1FD2A4u);
    ctx->pc = 0x1FD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD29Cu;
    // 0x1fd2a0: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014F0u;
    { ctx->pc = 0x2014f0; return; }
    ctx->pc = 0x1FD2A4u;
label_1fd2a4:
    // 0x1fd2a4: 0x0  nop
    ctx->pc = 0x1fd2a4u;
    // NOP
label_1fd2a8:
    // 0x1fd2a8: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x1fd2a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1fd2ac:
    // 0x1fd2ac: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fd2b0:
    // 0x1fd2b0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fd2b4:
    // 0x1fd2b4: 0x2463a780  addiu       $v1, $v1, -0x5880
    ctx->pc = 0x1fd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944640));
label_1fd2b8:
    // 0x1fd2b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1fd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1fd2bc:
    // 0x1fd2bc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1fd2c0:
    // 0x1fd2c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1fd2c4:
    // 0x1fd2c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fd2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd2c8:
    // 0x1fd2c8: 0x28810191  slti        $at, $a0, 0x191
    ctx->pc = 0x1fd2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)401) ? 1 : 0);
label_1fd2cc:
    // 0x1fd2cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd2d0:
    if (ctx->pc == 0x1FD2D0u) {
        ctx->pc = 0x1FD2D4u;
        goto label_1fd2d4;
    }
    ctx->pc = 0x1FD2CCu;
    {
        const bool branch_taken_0x1fd2cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2cc) {
            ctx->pc = 0x1FD2D8u;
            goto label_1fd2d8;
        }
    }
    ctx->pc = 0x1FD2D4u;
label_1fd2d4:
    // 0x1fd2d4: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1fd2d8:
    // 0x1fd2d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1fd2dc:
    // 0x1fd2dc: 0x24070190  addiu       $a3, $zero, 0x190
    ctx->pc = 0x1fd2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1fd2e0:
    // 0x1fd2e0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd2e4:
    // 0x1fd2e4: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1fd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1fd2e8:
    // 0x1fd2e8: 0x3485851f  ori         $a1, $a0, 0x851F
    ctx->pc = 0x1fd2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1fd2ec:
    // 0x1fd2ec: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1fd2f0:
    // 0x1fd2f0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1fd2f4:
    // 0x1fd2f4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1fd2f8:
    // 0x1fd2f8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd2fc:
    // 0x1fd2fc: 0x0  nop
    ctx->pc = 0x1fd2fcu;
    // NOP
label_1fd300:
    // 0x1fd300: 0x0  nop
    ctx->pc = 0x1fd300u;
    // NOP
label_1fd304:
    // 0x1fd304: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd304u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1fd308:
    // 0x1fd308: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1fd30c:
    // 0x1fd30c: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1fd30cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
label_1fd310:
    // 0x1fd310: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fd314:
    // 0x1fd314: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1fd314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1fd318:
    // 0x1fd318: 0x86460006  lh          $a2, 0x6($s2)
    ctx->pc = 0x1fd318u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1fd31c:
    // 0x1fd31c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1fd31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1fd320:
    // 0x1fd320: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1fd320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1fd324:
    // 0x1fd324: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1fd324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_1fd328:
    // 0x1fd328: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1fd328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1fd32c:
    // 0x1fd32c: 0x28a10191  slti        $at, $a1, 0x191
    ctx->pc = 0x1fd32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)401) ? 1 : 0);
label_1fd330:
    // 0x1fd330: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd334:
    if (ctx->pc == 0x1FD334u) {
        ctx->pc = 0x1FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD330u;
        // 0x1fd334: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD338u;
        goto label_1fd338;
    }
    ctx->pc = 0x1FD330u;
    {
        const bool branch_taken_0x1fd330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD330u;
        // 0x1fd334: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd330) {
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD338u;
label_1fd338:
    // 0x1fd338: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1fd338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd33c:
    // 0x1fd33c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1fd340:
    // 0x1fd340: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd344:
    // 0x1fd344: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
label_1fd348:
    // 0x1fd348: 0x34a6851f  ori         $a2, $a1, 0x851F
    ctx->pc = 0x1fd348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
label_1fd34c:
    // 0x1fd34c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1fd350:
    // 0x1fd350: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1fd354:
    // 0x1fd354: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1fd358:
    // 0x1fd358: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1fd358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd35c:
    // 0x1fd35c: 0x0  nop
    ctx->pc = 0x1fd35cu;
    // NOP
label_1fd360:
    // 0x1fd360: 0x0  nop
    ctx->pc = 0x1fd360u;
    // NOP
label_1fd364:
    // 0x1fd364: 0x3010  mfhi        $a2
    ctx->pc = 0x1fd364u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1fd368:
    // 0x1fd368: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1fd368u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1fd36c:
    // 0x1fd36c: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x1fd36cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
label_1fd370:
    // 0x1fd370: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1fd374:
    // 0x1fd374: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1fd374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1fd378:
    // 0x1fd378: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x1fd378u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_1fd37c:
    // 0x1fd37c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1fd380:
    // 0x1fd380: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1fd380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1fd384:
    // 0x1fd384: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1fd384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1fd388:
    // 0x1fd388: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1fd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fd38c:
    // 0x1fd38c: 0x288100fb  slti        $at, $a0, 0xFB
    ctx->pc = 0x1fd38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)251) ? 1 : 0);
label_1fd390:
    // 0x1fd390: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd394:
    if (ctx->pc == 0x1FD394u) {
        ctx->pc = 0x1FD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD390u;
        // 0x1fd394: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD398u;
        goto label_1fd398;
    }
    ctx->pc = 0x1FD390u;
    {
        const bool branch_taken_0x1fd390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD390u;
        // 0x1fd394: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd390) {
            ctx->pc = 0x1FD39Cu;
            goto label_1fd39c;
        }
    }
    ctx->pc = 0x1FD398u;
label_1fd398:
    // 0x1fd398: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x1fd398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1fd39c:
    // 0x1fd39c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1fd3a0:
    // 0x1fd3a0: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1fd3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd3a4:
    // 0x1fd3a4: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x1fd3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
label_1fd3a8:
    // 0x1fd3a8: 0x34864dd3  ori         $a2, $a0, 0x4DD3
    ctx->pc = 0x1fd3a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
label_1fd3ac:
    // 0x1fd3ac: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1fd3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fd3b0:
    // 0x1fd3b0: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1fd3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1fd3b4:
    // 0x1fd3b4: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1fd3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1fd3b8:
    // 0x1fd3b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1fd3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1fd3bc:
    // 0x1fd3bc: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1fd3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd3c0:
    // 0x1fd3c0: 0x0  nop
    ctx->pc = 0x1fd3c0u;
    // NOP
label_1fd3c4:
    // 0x1fd3c4: 0x0  nop
    ctx->pc = 0x1fd3c4u;
    // NOP
label_1fd3c8:
    // 0x1fd3c8: 0x3010  mfhi        $a2
    ctx->pc = 0x1fd3c8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1fd3cc:
    // 0x1fd3cc: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1fd3d0:
    // 0x1fd3d0: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_1fd3d4:
    // 0x1fd3d4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1fd3d8:
    // 0x1fd3d8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1fd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1fd3dc:
    // 0x1fd3dc: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x1fd3dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_1fd3e0:
    // 0x1fd3e0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1fd3e4:
    // 0x1fd3e4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1fd3e8:
    // 0x1fd3e8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1fd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_1fd3ec:
    // 0x1fd3ec: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fd3f0:
    // 0x1fd3f0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1fd3f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1fd3f4:
    // 0x1fd3f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd3f8:
    if (ctx->pc == 0x1FD3F8u) {
        ctx->pc = 0x1FD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3F4u;
        // 0x1fd3f8: 0x240800fa  addiu       $t0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD3FCu;
        goto label_1fd3fc;
    }
    ctx->pc = 0x1FD3F4u;
    {
        const bool branch_taken_0x1fd3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3F4u;
        // 0x1fd3f8: 0x240800fa  addiu       $t0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3f4) {
            ctx->pc = 0x1FD400u;
            goto label_1fd400;
        }
    }
    ctx->pc = 0x1FD3FCu;
label_1fd3fc:
    // 0x1fd3fc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1fd3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fd400:
    // 0x1fd400: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fd400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fd404:
    // 0x1fd404: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fd404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fd408:
    // 0x1fd408: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1fd408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd40c:
    // 0x1fd40c: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1fd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_1fd410:
    // 0x1fd410: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x1fd410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_1fd414:
    // 0x1fd414: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1fd414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1fd418:
    // 0x1fd418: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1fd418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fd41c:
    // 0x1fd41c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1fd41cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1fd420:
    // 0x1fd420: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1fd424:
    // 0x1fd424: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd424u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1fd428:
    // 0x1fd428: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd42c:
    // 0x1fd42c: 0x0  nop
    ctx->pc = 0x1fd42cu;
    // NOP
label_1fd430:
    // 0x1fd430: 0x0  nop
    ctx->pc = 0x1fd430u;
    // NOP
label_1fd434:
    // 0x1fd434: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd434u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1fd438:
    // 0x1fd438: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1fd43c:
    // 0x1fd43c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd43cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd440:
    // 0x1fd440: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fd444:
    // 0x1fd444: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
label_1fd448:
    if (ctx->pc == 0x1FD448u) {
        ctx->pc = 0x1FD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD444u;
        // 0x1fd448: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD44Cu;
        goto label_1fd44c;
    }
    ctx->pc = 0x1FD444u;
    {
        const bool branch_taken_0x1fd444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD444u;
        // 0x1fd448: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd444) {
            ctx->pc = 0x1FD260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD44Cu;
label_1fd44c:
    // 0x1fd44c: 0x10000083  b           . + 4 + (0x83 << 2)
label_1fd450:
    if (ctx->pc == 0x1FD450u) {
        ctx->pc = 0x1FD454u;
        goto label_1fd454;
    }
    ctx->pc = 0x1FD44Cu;
    {
        const bool branch_taken_0x1fd44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd44c) {
            ctx->pc = 0x1FD65Cu;
            goto label_1fd65c;
        }
    }
    ctx->pc = 0x1FD454u;
label_1fd454:
    // 0x1fd454: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1fd454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd458:
    // 0x1fd458: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fd458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd45c:
    // 0x1fd45c: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
label_1fd460:
    if (ctx->pc == 0x1FD460u) {
        ctx->pc = 0x1FD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD45Cu;
        // 0x1fd460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD464u;
        goto label_1fd464;
    }
    ctx->pc = 0x1FD45Cu;
    {
        const bool branch_taken_0x1fd45c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD45Cu;
        // 0x1fd460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd45c) {
            ctx->pc = 0x1FD484u;
            goto label_1fd484;
        }
    }
    ctx->pc = 0x1FD464u;
label_1fd464:
    // 0x1fd464: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fd468:
    // 0x1fd468: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd46c:
    // 0x1fd46c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fd46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fd470:
    // 0x1fd470: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd474:
    // 0x1fd474: 0xc0804a0  jal         func_201280
label_1fd478:
    if (ctx->pc == 0x1FD478u) {
        ctx->pc = 0x1FD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD474u;
        // 0x1fd478: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD47Cu;
        goto label_1fd47c;
    }
    ctx->pc = 0x1FD474u;
    SET_GPR_U32(ctx, 31, 0x1FD47Cu);
    ctx->pc = 0x1FD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD474u;
    // 0x1fd478: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    { ctx->pc = 0x201280; return; }
    ctx->pc = 0x1FD47Cu;
label_1fd47c:
    // 0x1fd47c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fd480:
    if (ctx->pc == 0x1FD480u) {
        ctx->pc = 0x1FD484u;
        goto label_1fd484;
    }
    ctx->pc = 0x1FD47Cu;
    {
        const bool branch_taken_0x1fd47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd47c) {
            ctx->pc = 0x1FD4A4u;
            goto label_1fd4a4;
        }
    }
    ctx->pc = 0x1FD484u;
label_1fd484:
    // 0x1fd484: 0x0  nop
    ctx->pc = 0x1fd484u;
    // NOP
label_1fd488:
    // 0x1fd488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd48c:
    // 0x1fd48c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fd490:
    // 0x1fd490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd494:
    // 0x1fd494: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1fd498:
    // 0x1fd498: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd49c:
    // 0x1fd49c: 0xc0804a0  jal         func_201280
label_1fd4a0:
    if (ctx->pc == 0x1FD4A0u) {
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD49Cu;
        // 0x1fd4a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4A4u;
        goto label_1fd4a4;
    }
    ctx->pc = 0x1FD49Cu;
    SET_GPR_U32(ctx, 31, 0x1FD4A4u);
    ctx->pc = 0x1FD4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD49Cu;
    // 0x1fd4a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    { ctx->pc = 0x201280; return; }
    ctx->pc = 0x1FD4A4u;
label_1fd4a4:
    // 0x1fd4a4: 0x0  nop
    ctx->pc = 0x1fd4a4u;
    // NOP
label_1fd4a8:
    // 0x1fd4a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fd4ac:
    // 0x1fd4ac: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x1fd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
label_1fd4b0:
    // 0x1fd4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4b4:
    // 0x1fd4b4: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x1fd4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1fd4b8:
    // 0x1fd4b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4bc:
    // 0x1fd4bc: 0xc06f1d4  jal         func_1BC750
label_1fd4c0:
    if (ctx->pc == 0x1FD4C0u) {
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4C4u;
        goto label_1fd4c4;
    }
    ctx->pc = 0x1FD4BCu;
    SET_GPR_U32(ctx, 31, 0x1FD4C4u);
    ctx->pc = 0x1FD4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4BCu;
    // 0x1fd4c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC750u, 0x1FD4BCu, 0x1FD4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4C4u;
label_1fd4c4:
    // 0x1fd4c4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1fd4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fd4c8:
    // 0x1fd4c8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1fd4cc:
    // 0x1fd4cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1fd4d0:
    // 0x1fd4d0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1fd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1fd4d4:
    // 0x1fd4d4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1fd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fd4d8:
    // 0x1fd4d8: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1fd4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_1fd4dc:
    // 0x1fd4dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd4e0:
    if (ctx->pc == 0x1FD4E0u) {
        ctx->pc = 0x1FD4E4u;
        goto label_1fd4e4;
    }
    ctx->pc = 0x1FD4DCu;
    {
        const bool branch_taken_0x1fd4dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd4dc) {
            ctx->pc = 0x1FD4E8u;
            goto label_1fd4e8;
        }
    }
    ctx->pc = 0x1FD4E4u;
label_1fd4e4:
    // 0x1fd4e4: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1fd4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1fd4e8:
    // 0x1fd4e8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1fd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1fd4ec:
    // 0x1fd4ec: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1fd4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1fd4f0:
    // 0x1fd4f0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fd4f4:
    // 0x1fd4f4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1fd4f8:
    // 0x1fd4f8: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x1fd4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1fd4fc:
    // 0x1fd4fc: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1fd500:
    // 0x1fd500: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1fd504:
    // 0x1fd504: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fd508:
    // 0x1fd508: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1fd508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd50c:
    // 0x1fd50c: 0x0  nop
    ctx->pc = 0x1fd50cu;
    // NOP
label_1fd510:
    // 0x1fd510: 0x0  nop
    ctx->pc = 0x1fd510u;
    // NOP
label_1fd514:
    // 0x1fd514: 0x2010  mfhi        $a0
    ctx->pc = 0x1fd514u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1fd518:
    // 0x1fd518: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1fd518u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1fd51c:
    // 0x1fd51c: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x1fd51cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_1fd520:
    // 0x1fd520: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1fd520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1fd524:
    // 0x1fd524: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1fd524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_1fd528:
    // 0x1fd528: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1fd528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fd52c:
    // 0x1fd52c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x1fd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1fd530:
    // 0x1fd530: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1fd534:
    // 0x1fd534: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x1fd534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
label_1fd538:
    // 0x1fd538: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1fd538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fd53c:
    // 0x1fd53c: 0x28810191  slti        $at, $a0, 0x191
    ctx->pc = 0x1fd53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)401) ? 1 : 0);
label_1fd540:
    // 0x1fd540: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd544:
    if (ctx->pc == 0x1FD544u) {
        ctx->pc = 0x1FD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD540u;
        // 0x1fd544: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD548u;
        goto label_1fd548;
    }
    ctx->pc = 0x1FD540u;
    {
        const bool branch_taken_0x1fd540 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD540u;
        // 0x1fd544: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd540) {
            ctx->pc = 0x1FD54Cu;
            goto label_1fd54c;
        }
    }
    ctx->pc = 0x1FD548u;
label_1fd548:
    // 0x1fd548: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1fd548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd54c:
    // 0x1fd54c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1fd550:
    // 0x1fd550: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1fd550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd554:
    // 0x1fd554: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1fd558:
    // 0x1fd558: 0x3485851f  ori         $a1, $a0, 0x851F
    ctx->pc = 0x1fd558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1fd55c:
    // 0x1fd55c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1fd55cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1fd560:
    // 0x1fd560: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1fd564:
    // 0x1fd564: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd564u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1fd568:
    // 0x1fd568: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd56c:
    // 0x1fd56c: 0x0  nop
    ctx->pc = 0x1fd56cu;
    // NOP
label_1fd570:
    // 0x1fd570: 0x0  nop
    ctx->pc = 0x1fd570u;
    // NOP
label_1fd574:
    // 0x1fd574: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd574u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1fd578:
    // 0x1fd578: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd578u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1fd57c:
    // 0x1fd57c: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1fd57cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
label_1fd580:
    // 0x1fd580: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fd584:
    // 0x1fd584: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1fd584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1fd588:
    // 0x1fd588: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1fd588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fd58c:
    // 0x1fd58c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1fd590:
    // 0x1fd590: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1fd590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1fd594:
    // 0x1fd594: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1fd594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1fd598:
    // 0x1fd598: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1fd598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fd59c:
    // 0x1fd59c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1fd59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1fd5a0:
    // 0x1fd5a0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd5a4:
    if (ctx->pc == 0x1FD5A4u) {
        ctx->pc = 0x1FD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A0u;
        // 0x1fd5a4: 0x26840008  addiu       $a0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5A8u;
        goto label_1fd5a8;
    }
    ctx->pc = 0x1FD5A0u;
    {
        const bool branch_taken_0x1fd5a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A0u;
        // 0x1fd5a4: 0x26840008  addiu       $a0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5a0) {
            ctx->pc = 0x1FD5ACu;
            goto label_1fd5ac;
        }
    }
    ctx->pc = 0x1FD5A8u;
label_1fd5a8:
    // 0x1fd5a8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1fd5ac:
    // 0x1fd5ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fd5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fd5b0:
    // 0x1fd5b0: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x1fd5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1fd5b4:
    // 0x1fd5b4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1fd5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd5b8:
    // 0x1fd5b8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1fd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_1fd5bc:
    // 0x1fd5bc: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x1fd5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_1fd5c0:
    // 0x1fd5c0: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1fd5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1fd5c4:
    // 0x1fd5c4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1fd5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1fd5c8:
    // 0x1fd5c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1fd5cc:
    // 0x1fd5cc: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd5d0:
    // 0x1fd5d0: 0x0  nop
    ctx->pc = 0x1fd5d0u;
    // NOP
label_1fd5d4:
    // 0x1fd5d4: 0x0  nop
    ctx->pc = 0x1fd5d4u;
    // NOP
label_1fd5d8:
    // 0x1fd5d8: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd5d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1fd5dc:
    // 0x1fd5dc: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1fd5e0:
    // 0x1fd5e0: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd5e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd5e4:
    // 0x1fd5e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fd5e8:
    // 0x1fd5e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1fd5ec:
    // 0x1fd5ec: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x1fd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fd5f0:
    // 0x1fd5f0: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1fd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1fd5f4:
    // 0x1fd5f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1fd5f8:
    // 0x1fd5f8: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x1fd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
label_1fd5fc:
    // 0x1fd5fc: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fd600:
    // 0x1fd600: 0x288100fb  slti        $at, $a0, 0xFB
    ctx->pc = 0x1fd600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)251) ? 1 : 0);
label_1fd604:
    // 0x1fd604: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fd608:
    if (ctx->pc == 0x1FD608u) {
        ctx->pc = 0x1FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD604u;
        // 0x1fd608: 0x2683000c  addiu       $v1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD60Cu;
        goto label_1fd60c;
    }
    ctx->pc = 0x1FD604u;
    {
        const bool branch_taken_0x1fd604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD604u;
        // 0x1fd608: 0x2683000c  addiu       $v1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd604) {
            ctx->pc = 0x1FD610u;
            goto label_1fd610;
        }
    }
    ctx->pc = 0x1FD60Cu;
label_1fd60c:
    // 0x1fd60c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1fd60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd610:
    // 0x1fd610: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1fd614:
    // 0x1fd614: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1fd614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1fd618:
    // 0x1fd618: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd61c:
    // 0x1fd61c: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
label_1fd620:
    // 0x1fd620: 0x34854dd3  ori         $a1, $a0, 0x4DD3
    ctx->pc = 0x1fd620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
label_1fd624:
    // 0x1fd624: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1fd624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1fd628:
    // 0x1fd628: 0x2aa40002  slti        $a0, $s5, 0x2
    ctx->pc = 0x1fd628u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fd62c:
    // 0x1fd62c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1fd62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1fd630:
    // 0x1fd630: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1fd634:
    // 0x1fd634: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1fd638:
    // 0x1fd638: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1fd63c:
    // 0x1fd63c: 0x0  nop
    ctx->pc = 0x1fd63cu;
    // NOP
label_1fd640:
    // 0x1fd640: 0x0  nop
    ctx->pc = 0x1fd640u;
    // NOP
label_1fd644:
    // 0x1fd644: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd644u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1fd648:
    // 0x1fd648: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd648u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1fd64c:
    // 0x1fd64c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd650:
    // 0x1fd650: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fd654:
    // 0x1fd654: 0x1480ff81  bnez        $a0, . + 4 + (-0x7F << 2)
label_1fd658:
    if (ctx->pc == 0x1FD658u) {
        ctx->pc = 0x1FD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD654u;
        // 0x1fd658: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD65Cu;
        goto label_1fd65c;
    }
    ctx->pc = 0x1FD654u;
    {
        const bool branch_taken_0x1fd654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD654u;
        // 0x1fd658: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd654) {
            ctx->pc = 0x1FD45Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd45c;
        }
    }
    ctx->pc = 0x1FD65Cu;
label_1fd65c:
    // 0x1fd65c: 0x0  nop
    ctx->pc = 0x1fd65cu;
    // NOP
label_1fd660:
    // 0x1fd660: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1fd660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1fd664:
    // 0x1fd664: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fd664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fd668:
    // 0x1fd668: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fd668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fd66c:
    // 0x1fd66c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fd66cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fd670:
    // 0x1fd670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fd670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fd674:
    // 0x1fd674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd678:
    // 0x1fd678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd67c:
    // 0x1fd67c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd680:
    // 0x1fd680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd684:
    // 0x1fd684: 0x3e00008  jr          $ra
label_1fd688:
    if (ctx->pc == 0x1FD688u) {
        ctx->pc = 0x1FD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD684u;
        // 0x1fd688: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD68Cu;
        goto label_1fd68c;
    }
    ctx->pc = 0x1FD684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD684u;
        // 0x1fd688: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD68Cu;
label_1fd68c:
    // 0x1fd68c: 0x0  nop
    ctx->pc = 0x1fd68cu;
    // NOP
label_1fd690:
    // 0x1fd690: 0x8f839054  lw          $v1, -0x6FAC($gp)
    ctx->pc = 0x1fd690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938708)));
label_1fd694:
    // 0x1fd694: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1fd698:
    if (ctx->pc == 0x1FD698u) {
        ctx->pc = 0x1FD69Cu;
        goto label_1fd69c;
    }
    ctx->pc = 0x1FD694u;
    {
        const bool branch_taken_0x1fd694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd694) {
            ctx->pc = 0x1FD6BCu;
            goto label_1fd6bc;
        }
    }
    ctx->pc = 0x1FD69Cu;
label_1fd69c:
    // 0x1fd69c: 0x8f839050  lw          $v1, -0x6FB0($gp)
    ctx->pc = 0x1fd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938704)));
label_1fd6a0:
    // 0x1fd6a0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fd6a4:
    // 0x1fd6a4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1fd6a8:
    if (ctx->pc == 0x1FD6A8u) {
        ctx->pc = 0x1FD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6A4u;
        // 0x1fd6a8: 0x3083001f  andi        $v1, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD6ACu;
        goto label_1fd6ac;
    }
    ctx->pc = 0x1FD6A4u;
    {
        const bool branch_taken_0x1fd6a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6A4u;
        // 0x1fd6a8: 0x3083001f  andi        $v1, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6a4) {
            ctx->pc = 0x1FD6B8u;
            goto label_1fd6b8;
        }
    }
    ctx->pc = 0x1FD6ACu;
label_1fd6ac:
    // 0x1fd6ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1fd6b0:
    if (ctx->pc == 0x1FD6B0u) {
        ctx->pc = 0x1FD6B4u;
        goto label_1fd6b4;
    }
    ctx->pc = 0x1FD6ACu;
    {
        const bool branch_taken_0x1fd6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6ac) {
            ctx->pc = 0x1FD6B8u;
            goto label_1fd6b8;
        }
    }
    ctx->pc = 0x1FD6B4u;
label_1fd6b4:
    // 0x1fd6b4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1fd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1fd6b8:
    // 0x1fd6b8: 0xaf839050  sw          $v1, -0x6FB0($gp)
    ctx->pc = 0x1fd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938704), GPR_U32(ctx, 3));
label_1fd6bc:
    // 0x1fd6bc: 0x3e00008  jr          $ra
label_1fd6c0:
    if (ctx->pc == 0x1FD6C0u) {
        ctx->pc = 0x1FD6C4u;
        goto label_1fd6c4;
    }
    ctx->pc = 0x1FD6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD6C4u;
label_1fd6c4:
    // 0x1fd6c4: 0x0  nop
    ctx->pc = 0x1fd6c4u;
    // NOP
label_1fd6c8:
    // 0x1fd6c8: 0x0  nop
    ctx->pc = 0x1fd6c8u;
    // NOP
label_1fd6cc:
    // 0x1fd6cc: 0x0  nop
    ctx->pc = 0x1fd6ccu;
    // NOP
label_1fd6d0:
    // 0x1fd6d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fd6d4:
    // 0x1fd6d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fd6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fd6d8:
    // 0x1fd6d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd6dc:
    // 0x1fd6dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fd6e0:
    // 0x1fd6e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd6e4:
    // 0x1fd6e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fd6e8:
    // 0x1fd6e8: 0x8f839054  lw          $v1, -0x6FAC($gp)
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938708)));
label_1fd6ec:
    // 0x1fd6ec: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_1fd6f0:
    if (ctx->pc == 0x1FD6F0u) {
        ctx->pc = 0x1FD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6ECu;
        // 0x1fd6f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD6F4u;
        goto label_1fd6f4;
    }
    ctx->pc = 0x1FD6ECu;
    {
        const bool branch_taken_0x1fd6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6ECu;
        // 0x1fd6f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6ec) {
            ctx->pc = 0x1FD9F0u;
            { ctx->pc = 0x1fd9f0; return; }
        }
    }
    ctx->pc = 0x1FD6F4u;
label_1fd6f4:
    // 0x1fd6f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1fd6f8:
    // 0x1fd6f8: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fd6fc:
    // 0x1fd6fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fd700:
    // 0x1fd700: 0x8f85904c  lw          $a1, -0x6FB4($gp)
    ctx->pc = 0x1fd700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938700)));
label_1fd704:
    // 0x1fd704: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1fd704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fd708:
    // 0x1fd708: 0x8f869048  lw          $a2, -0x6FB8($gp)
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938696)));
label_1fd70c:
    // 0x1fd70c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1fd70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1fd710:
    // 0x1fd710: 0x2442a7a0  addiu       $v0, $v0, -0x5860
    ctx->pc = 0x1fd710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944672));
label_1fd714:
    // 0x1fd714: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1fd714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fd718:
    // 0x1fd718: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fd718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fd71c:
    // 0x1fd71c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fd71cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fd720:
    // 0x1fd720: 0xb2140  sll         $a0, $t3, 5
    ctx->pc = 0x1fd720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
label_1fd724:
    // 0x1fd724: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1fd724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fd728:
    // 0x1fd728: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fd728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd72c:
    // 0x1fd72c: 0x8b2023  subu        $a0, $a0, $t3
    ctx->pc = 0x1fd72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1fd730:
    // 0x1fd730: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fd730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd734:
    // 0x1fd734: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1fd734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fd738:
    // 0x1fd738: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fd738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fd73c:
    // 0x1fd73c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1fd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1fd740:
    // 0x1fd740: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fd740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fd744:
    // 0x1fd744: 0xc07c17c  jal         func_1F05F0
label_1fd748:
    if (ctx->pc == 0x1FD748u) {
        ctx->pc = 0x1FD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD744u;
        // 0x1fd748: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD74Cu;
        goto label_1fd74c;
    }
    ctx->pc = 0x1FD744u;
    SET_GPR_U32(ctx, 31, 0x1FD74Cu);
    ctx->pc = 0x1FD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD744u;
    // 0x1fd748: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FD74Cu;
label_1fd74c:
    // 0x1fd74c: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1fd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1fd750:
    // 0x1fd750: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1fd750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1fd754:
    // 0x1fd754: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fd758:
    // 0x1fd758: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1fd758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fd75c:
    // 0x1fd75c: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x1fd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_1fd760:
    // 0x1fd760: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fd760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fd764:
    // 0x1fd764: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fd764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fd768:
    // 0x1fd768: 0xa6030400  sh          $v1, 0x400($s0)
    ctx->pc = 0x1fd768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 3));
label_1fd76c:
    // 0x1fd76c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fd770:
    // 0x1fd770: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1fd774:
    // 0x1fd774: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x1fd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_1fd778:
    // 0x1fd778: 0xa6040402  sh          $a0, 0x402($s0)
    ctx->pc = 0x1fd778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 4));
label_1fd77c:
    // 0x1fd77c: 0x340efe00  ori         $t6, $zero, 0xFE00
    ctx->pc = 0x1fd77cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fd780:
    // 0x1fd780: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fd784:
    // 0x1fd784: 0xae0e0404  sw          $t6, 0x404($s0)
    ctx->pc = 0x1fd784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 14));
label_1fd788:
    // 0x1fd788: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1fd788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fd78c:
    // 0x1fd78c: 0xa6030410  sh          $v1, 0x410($s0)
    ctx->pc = 0x1fd78cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 3));
label_1fd790:
    // 0x1fd790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd794:
    // 0x1fd794: 0xa6020412  sh          $v0, 0x412($s0)
    ctx->pc = 0x1fd794u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1042), (uint16_t)GPR_U32(ctx, 2));
label_1fd798:
    // 0x1fd798: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd79c:
    // 0x1fd79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd7a0:
    // 0x1fd7a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fd7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd7a4:
    // 0x1fd7a4: 0xae0e0414  sw          $t6, 0x414($s0)
    ctx->pc = 0x1fd7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 14));
label_1fd7a8:
    // 0x1fd7a8: 0x264f0040  addiu       $t7, $s2, 0x40
    ctx->pc = 0x1fd7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1fd7ac:
    // 0x1fd7ac: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1fd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1fd7b0:
    // 0x1fd7b0: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1fd7b4:
    // 0x1fd7b4: 0x25e20088  addiu       $v0, $t7, 0x88
    ctx->pc = 0x1fd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 136));
label_1fd7b8:
    // 0x1fd7b8: 0x246d6c00  addiu       $t5, $v1, 0x6C00
    ctx->pc = 0x1fd7b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fd7bc:
    // 0x1fd7bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fd7c0:
    // 0x1fd7c0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fd7c4:
    // 0x1fd7c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fd7c8:
    // 0x1fd7c8: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x1fd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
label_1fd7cc:
    // 0x1fd7cc: 0x865821  addu        $t3, $a0, $a2
    ctx->pc = 0x1fd7ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1fd7d0:
    // 0x1fd7d0: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1fd7d4:
    // 0x1fd7d4: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1fd7d8:
    // 0x1fd7d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fd7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fd7dc:
    // 0x1fd7dc: 0xa52d04a0  sh          $t5, 0x4A0($t1)
    ctx->pc = 0x1fd7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1184), (uint16_t)GPR_U32(ctx, 13));
label_1fd7e0:
    // 0x1fd7e0: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x1fd7e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
label_1fd7e4:
    // 0x1fd7e4: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1fd7e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_1fd7e8:
    // 0x1fd7e8: 0xa52a04a2  sh          $t2, 0x4A2($t1)
    ctx->pc = 0x1fd7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1186), (uint16_t)GPR_U32(ctx, 10));
label_1fd7ec:
    // 0x1fd7ec: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x1fd7ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1fd7f0:
    // 0x1fd7f0: 0xad2e04a4  sw          $t6, 0x4A4($t1)
    ctx->pc = 0x1fd7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1188), GPR_U32(ctx, 14));
label_1fd7f4:
    // 0x1fd7f4: 0x256c7900  addiu       $t4, $t3, 0x7900
    ctx->pc = 0x1fd7f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_1fd7f8:
    // 0x1fd7f8: 0xa52304b0  sh          $v1, 0x4B0($t1)
    ctx->pc = 0x1fd7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1200), (uint16_t)GPR_U32(ctx, 3));
label_1fd7fc:
    // 0x1fd7fc: 0xa52c04b2  sh          $t4, 0x4B2($t1)
    ctx->pc = 0x1fd7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1202), (uint16_t)GPR_U32(ctx, 12));
label_1fd800:
    // 0x1fd800: 0x485821  addu        $t3, $v0, $t0
    ctx->pc = 0x1fd800u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fd804:
    // 0x1fd804: 0xad2e04b4  sw          $t6, 0x4B4($t1)
    ctx->pc = 0x1fd804u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1204), GPR_U32(ctx, 14));
label_1fd808:
    // 0x1fd808: 0x28b20004  slti        $s2, $a1, 0x4
    ctx->pc = 0x1fd808u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1fd80c:
    // 0x1fd80c: 0x85730010  lh          $s3, 0x10($t3)
    ctx->pc = 0x1fd80cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
label_1fd810:
    // 0x1fd810: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1fd810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1fd814:
    // 0x1fd814: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x1fd814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
label_1fd818:
    // 0x1fd818: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1fd818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1fd81c:
    // 0x1fd81c: 0x1f39821  addu        $s3, $t7, $s3
    ctx->pc = 0x1fd81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_1fd820:
    // 0x1fd820: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x1fd820u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1fd824:
    // 0x1fd824: 0x26736c00  addiu       $s3, $s3, 0x6C00
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27648));
label_1fd828:
    // 0x1fd828: 0xa5330720  sh          $s3, 0x720($t1)
    ctx->pc = 0x1fd828u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1824), (uint16_t)GPR_U32(ctx, 19));
label_1fd82c:
    // 0x1fd82c: 0xa52a0722  sh          $t2, 0x722($t1)
    ctx->pc = 0x1fd82cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1826), (uint16_t)GPR_U32(ctx, 10));
label_1fd830:
    // 0x1fd830: 0xad2e0724  sw          $t6, 0x724($t1)
    ctx->pc = 0x1fd830u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1828), GPR_U32(ctx, 14));
label_1fd834:
    // 0x1fd834: 0x85730000  lh          $s3, 0x0($t3)
    ctx->pc = 0x1fd834u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_1fd838:
    // 0x1fd838: 0x1f39821  addu        $s3, $t7, $s3
    ctx->pc = 0x1fd838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_1fd83c:
    // 0x1fd83c: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x1fd83cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1fd840:
    // 0x1fd840: 0x26736c00  addiu       $s3, $s3, 0x6C00
    ctx->pc = 0x1fd840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27648));
label_1fd844:
    // 0x1fd844: 0xa5330730  sh          $s3, 0x730($t1)
    ctx->pc = 0x1fd844u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1840), (uint16_t)GPR_U32(ctx, 19));
label_1fd848:
    // 0x1fd848: 0xa52c0732  sh          $t4, 0x732($t1)
    ctx->pc = 0x1fd848u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1842), (uint16_t)GPR_U32(ctx, 12));
label_1fd84c:
    // 0x1fd84c: 0xad2e0734  sw          $t6, 0x734($t1)
    ctx->pc = 0x1fd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1844), GPR_U32(ctx, 14));
label_1fd850:
    // 0x1fd850: 0xa52d09a0  sh          $t5, 0x9A0($t1)
    ctx->pc = 0x1fd850u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2464), (uint16_t)GPR_U32(ctx, 13));
label_1fd854:
    // 0x1fd854: 0xa52a09a2  sh          $t2, 0x9A2($t1)
    ctx->pc = 0x1fd854u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2466), (uint16_t)GPR_U32(ctx, 10));
label_1fd858:
    // 0x1fd858: 0xad2e09a4  sw          $t6, 0x9A4($t1)
    ctx->pc = 0x1fd858u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2468), GPR_U32(ctx, 14));
label_1fd85c:
    // 0x1fd85c: 0x856a0010  lh          $t2, 0x10($t3)
    ctx->pc = 0x1fd85cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
label_1fd860:
    // 0x1fd860: 0x1ea5021  addu        $t2, $t7, $t2
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
label_1fd864:
    // 0x1fd864: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1fd864u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1fd868:
    // 0x1fd868: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1fd86c:
    // 0x1fd86c: 0xa52a09b0  sh          $t2, 0x9B0($t1)
    ctx->pc = 0x1fd86cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2480), (uint16_t)GPR_U32(ctx, 10));
label_1fd870:
    // 0x1fd870: 0xa52c09b2  sh          $t4, 0x9B2($t1)
    ctx->pc = 0x1fd870u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2482), (uint16_t)GPR_U32(ctx, 12));
label_1fd874:
    // 0x1fd874: 0x1640ffd5  bnez        $s2, . + 4 + (-0x2B << 2)
label_1fd878:
    if (ctx->pc == 0x1FD878u) {
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0xad2e09b4  sw          $t6, 0x9B4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 2484), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD87Cu;
        goto label_1fd87c;
    }
    ctx->pc = 0x1FD874u;
    {
        const bool branch_taken_0x1fd874 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0xad2e09b4  sw          $t6, 0x9B4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 2484), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd874) {
            ctx->pc = 0x1FD7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd7cc;
        }
    }
    ctx->pc = 0x1FD87Cu;
label_1fd87c:
    // 0x1fd87c: 0x8f829050  lw          $v0, -0x6FB0($gp)
    ctx->pc = 0x1fd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938704)));
label_1fd880:
    // 0x1fd880: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1fd880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1fd884:
    // 0x1fd884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fd888:
    if (ctx->pc == 0x1FD888u) {
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD884u;
        // 0x1fd888: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD88Cu;
        goto label_1fd88c;
    }
    ctx->pc = 0x1FD884u;
    {
        const bool branch_taken_0x1fd884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD884u;
        // 0x1fd888: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd884) {
            ctx->pc = 0x1FD894u;
            goto label_1fd894;
        }
    }
    ctx->pc = 0x1FD88Cu;
label_1fd88c:
    // 0x1fd88c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fd890:
    if (ctx->pc == 0x1FD890u) {
        ctx->pc = 0x1FD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD88Cu;
        // 0x1fd890: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD894u;
        goto label_1fd894;
    }
    ctx->pc = 0x1FD88Cu;
    {
        const bool branch_taken_0x1fd88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD88Cu;
        // 0x1fd890: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd88c) {
            ctx->pc = 0x1FD89Cu;
            goto label_1fd89c;
        }
    }
    ctx->pc = 0x1FD894u;
label_1fd894:
    // 0x1fd894: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fd894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd898:
    // 0x1fd898: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fd898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fd89c:
    // 0x1fd89c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd8a0:
    // 0x1fd8a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1fd8a4:
    // 0x1fd8a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1fd8a8:
    if (ctx->pc == 0x1FD8A8u) {
        ctx->pc = 0x1FD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8A4u;
        // 0x1fd8a8: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8ACu;
        goto label_1fd8ac;
    }
    ctx->pc = 0x1FD8A4u;
    {
        const bool branch_taken_0x1fd8a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8A4u;
        // 0x1fd8a8: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8a4) {
            ctx->pc = 0x1FD8B4u;
            goto label_1fd8b4;
        }
    }
    ctx->pc = 0x1FD8ACu;
label_1fd8ac:
    // 0x1fd8ac: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1fd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1fd8b0:
    // 0x1fd8b0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1fd8b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1fd8b4:
    // 0x1fd8b4: 0x24640011  addiu       $a0, $v1, 0x11
    ctx->pc = 0x1fd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
label_1fd8b8:
    // 0x1fd8b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1fd8bc:
    // 0x1fd8bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd8c0:
    // 0x1fd8c0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fd8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fd8c4:
    // 0x1fd8c4: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1fd8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
label_1fd8c8:
    // 0x1fd8c8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1fd8cc:
    if (ctx->pc == 0x1FD8CCu) {
        ctx->pc = 0x1FD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8C8u;
        // 0x1fd8cc: 0x3193f  dsra32      $v1, $v1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8D0u;
        goto label_1fd8d0;
    }
    ctx->pc = 0x1FD8C8u;
    {
        const bool branch_taken_0x1fd8c8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8C8u;
        // 0x1fd8cc: 0x3193f  dsra32      $v1, $v1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8c8) {
            ctx->pc = 0x1FD8D8u;
            goto label_1fd8d8;
        }
    }
    ctx->pc = 0x1FD8D0u;
label_1fd8d0:
    // 0x1fd8d0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1fd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1fd8d4:
    // 0x1fd8d4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1fd8d8:
    // 0x1fd8d8: 0x2463002f  addiu       $v1, $v1, 0x2F
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
label_1fd8dc:
    // 0x1fd8dc: 0xa2040710  sb          $a0, 0x710($s0)
    ctx->pc = 0x1fd8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1808), (uint8_t)GPR_U32(ctx, 4));
label_1fd8e0:
    // 0x1fd8e0: 0xa2030711  sb          $v1, 0x711($s0)
    ctx->pc = 0x1fd8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1809), (uint8_t)GPR_U32(ctx, 3));
label_1fd8e4:
    // 0x1fd8e4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1fd8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fd8e8:
    // 0x1fd8e8: 0xa2030712  sb          $v1, 0x712($s0)
    ctx->pc = 0x1fd8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1810), (uint8_t)GPR_U32(ctx, 3));
label_1fd8ec:
    // 0x1fd8ec: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1fd8f0:
    // 0x1fd8f0: 0xa2050713  sb          $a1, 0x713($s0)
    ctx->pc = 0x1fd8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1811), (uint8_t)GPR_U32(ctx, 5));
label_1fd8f4:
    // 0x1fd8f4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd8f8:
    // 0x1fd8f8: 0xae060714  sw          $a2, 0x714($s0)
    ctx->pc = 0x1fd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1812), GPR_U32(ctx, 6));
label_1fd8fc:
    // 0x1fd8fc: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1fd8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd900:
    // 0x1fd900: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1fd904:
    // 0x1fd904: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1fd908:
    // 0x1fd908: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1fd90c:
    if (ctx->pc == 0x1FD90Cu) {
        ctx->pc = 0x1FD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD908u;
        // 0x1fd90c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD910u;
        goto label_1fd910;
    }
    ctx->pc = 0x1FD908u;
    {
        const bool branch_taken_0x1fd908 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD908u;
        // 0x1fd90c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd908) {
            ctx->pc = 0x1FD918u;
            goto label_1fd918;
        }
    }
    ctx->pc = 0x1FD910u;
label_1fd910:
    // 0x1fd910: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1fd910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fd914:
    // 0x1fd914: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd918:
    // 0x1fd918: 0x24a80019  addiu       $t0, $a1, 0x19
    ctx->pc = 0x1fd918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 25));
label_1fd91c:
    // 0x1fd91c: 0xa20307b0  sb          $v1, 0x7B0($s0)
    ctx->pc = 0x1fd91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1968), (uint8_t)GPR_U32(ctx, 3));
label_1fd920:
    // 0x1fd920: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fd924:
    // 0x1fd924: 0xa20807b1  sb          $t0, 0x7B1($s0)
    ctx->pc = 0x1fd924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1969), (uint8_t)GPR_U32(ctx, 8));
label_1fd928:
    // 0x1fd928: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd92c:
    // 0x1fd92c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1fd930:
    // 0x1fd930: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fd930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd934:
    // 0x1fd934: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1fd934u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1fd938:
    // 0x1fd938: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1fd93c:
    if (ctx->pc == 0x1FD93Cu) {
        ctx->pc = 0x1FD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD938u;
        // 0x1fd93c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD940u;
        { ctx->pc = 0x1fd940; return; }
    }
    ctx->pc = 0x1FD938u;
    {
        const bool branch_taken_0x1fd938 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD938u;
        // 0x1fd93c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd938) {
            ctx->pc = 0x1FD948u;
            { ctx->pc = 0x1fd948; return; }
        }
    }
    ctx->pc = 0x1FD940u;
    ctx->pc = 0x1fd940u;
    return;
}

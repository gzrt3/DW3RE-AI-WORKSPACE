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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bc188u: goto label_1bc188;
        case 0x1bc18cu: goto label_1bc18c;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc194u: goto label_1bc194;
        case 0x1bc198u: goto label_1bc198;
        case 0x1bc19cu: goto label_1bc19c;
        case 0x1bc1a0u: goto label_1bc1a0;
        case 0x1bc1a4u: goto label_1bc1a4;
        case 0x1bc1a8u: goto label_1bc1a8;
        case 0x1bc1acu: goto label_1bc1ac;
        case 0x1bc1b0u: goto label_1bc1b0;
        case 0x1bc1b4u: goto label_1bc1b4;
        case 0x1bc1b8u: goto label_1bc1b8;
        case 0x1bc1bcu: goto label_1bc1bc;
        case 0x1bc1c0u: goto label_1bc1c0;
        case 0x1bc1c4u: goto label_1bc1c4;
        case 0x1bc1c8u: goto label_1bc1c8;
        case 0x1bc1ccu: goto label_1bc1cc;
        case 0x1bc1d0u: goto label_1bc1d0;
        case 0x1bc1d4u: goto label_1bc1d4;
        case 0x1bc1d8u: goto label_1bc1d8;
        case 0x1bc1dcu: goto label_1bc1dc;
        case 0x1bc1e0u: goto label_1bc1e0;
        case 0x1bc1e4u: goto label_1bc1e4;
        case 0x1bc1e8u: goto label_1bc1e8;
        case 0x1bc1ecu: goto label_1bc1ec;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc1f4u: goto label_1bc1f4;
        case 0x1bc1f8u: goto label_1bc1f8;
        case 0x1bc1fcu: goto label_1bc1fc;
        case 0x1bc200u: goto label_1bc200;
        case 0x1bc204u: goto label_1bc204;
        case 0x1bc208u: goto label_1bc208;
        case 0x1bc20cu: goto label_1bc20c;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc214u: goto label_1bc214;
        case 0x1bc218u: goto label_1bc218;
        case 0x1bc21cu: goto label_1bc21c;
        case 0x1bc220u: goto label_1bc220;
        case 0x1bc224u: goto label_1bc224;
        case 0x1bc228u: goto label_1bc228;
        case 0x1bc22cu: goto label_1bc22c;
        case 0x1bc230u: goto label_1bc230;
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc238u: goto label_1bc238;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc240u: goto label_1bc240;
        case 0x1bc244u: goto label_1bc244;
        case 0x1bc248u: goto label_1bc248;
        case 0x1bc24cu: goto label_1bc24c;
        case 0x1bc250u: goto label_1bc250;
        case 0x1bc254u: goto label_1bc254;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc25cu: goto label_1bc25c;
        case 0x1bc260u: goto label_1bc260;
        case 0x1bc264u: goto label_1bc264;
        case 0x1bc268u: goto label_1bc268;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc270u: goto label_1bc270;
        case 0x1bc274u: goto label_1bc274;
        case 0x1bc278u: goto label_1bc278;
        case 0x1bc27cu: goto label_1bc27c;
        case 0x1bc280u: goto label_1bc280;
        case 0x1bc284u: goto label_1bc284;
        case 0x1bc288u: goto label_1bc288;
        case 0x1bc28cu: goto label_1bc28c;
        case 0x1bc290u: goto label_1bc290;
        case 0x1bc294u: goto label_1bc294;
        case 0x1bc298u: goto label_1bc298;
        case 0x1bc29cu: goto label_1bc29c;
        case 0x1bc2a0u: goto label_1bc2a0;
        case 0x1bc2a4u: goto label_1bc2a4;
        case 0x1bc2a8u: goto label_1bc2a8;
        case 0x1bc2acu: goto label_1bc2ac;
        case 0x1bc2b0u: goto label_1bc2b0;
        case 0x1bc2b4u: goto label_1bc2b4;
        case 0x1bc2b8u: goto label_1bc2b8;
        case 0x1bc2bcu: goto label_1bc2bc;
        case 0x1bc2c0u: goto label_1bc2c0;
        case 0x1bc2c4u: goto label_1bc2c4;
        case 0x1bc2c8u: goto label_1bc2c8;
        case 0x1bc2ccu: goto label_1bc2cc;
        case 0x1bc2d0u: goto label_1bc2d0;
        case 0x1bc2d4u: goto label_1bc2d4;
        case 0x1bc2d8u: goto label_1bc2d8;
        case 0x1bc2dcu: goto label_1bc2dc;
        case 0x1bc2e0u: goto label_1bc2e0;
        case 0x1bc2e4u: goto label_1bc2e4;
        case 0x1bc2e8u: goto label_1bc2e8;
        case 0x1bc2ecu: goto label_1bc2ec;
        case 0x1bc2f0u: goto label_1bc2f0;
        case 0x1bc2f4u: goto label_1bc2f4;
        case 0x1bc2f8u: goto label_1bc2f8;
        case 0x1bc2fcu: goto label_1bc2fc;
        case 0x1bc300u: goto label_1bc300;
        case 0x1bc304u: goto label_1bc304;
        case 0x1bc308u: goto label_1bc308;
        case 0x1bc30cu: goto label_1bc30c;
        case 0x1bc310u: goto label_1bc310;
        case 0x1bc314u: goto label_1bc314;
        case 0x1bc318u: goto label_1bc318;
        case 0x1bc31cu: goto label_1bc31c;
        case 0x1bc320u: goto label_1bc320;
        case 0x1bc324u: goto label_1bc324;
        case 0x1bc328u: goto label_1bc328;
        case 0x1bc32cu: goto label_1bc32c;
        case 0x1bc330u: goto label_1bc330;
        case 0x1bc334u: goto label_1bc334;
        case 0x1bc338u: goto label_1bc338;
        case 0x1bc33cu: goto label_1bc33c;
        case 0x1bc340u: goto label_1bc340;
        case 0x1bc344u: goto label_1bc344;
        case 0x1bc348u: goto label_1bc348;
        case 0x1bc34cu: goto label_1bc34c;
        case 0x1bc350u: goto label_1bc350;
        case 0x1bc354u: goto label_1bc354;
        case 0x1bc358u: goto label_1bc358;
        case 0x1bc35cu: goto label_1bc35c;
        case 0x1bc360u: goto label_1bc360;
        case 0x1bc364u: goto label_1bc364;
        case 0x1bc368u: goto label_1bc368;
        case 0x1bc36cu: goto label_1bc36c;
        case 0x1bc370u: goto label_1bc370;
        case 0x1bc374u: goto label_1bc374;
        case 0x1bc378u: goto label_1bc378;
        case 0x1bc37cu: goto label_1bc37c;
        case 0x1bc380u: goto label_1bc380;
        case 0x1bc384u: goto label_1bc384;
        case 0x1bc388u: goto label_1bc388;
        case 0x1bc38cu: goto label_1bc38c;
        case 0x1bc390u: goto label_1bc390;
        case 0x1bc394u: goto label_1bc394;
        case 0x1bc398u: goto label_1bc398;
        case 0x1bc39cu: goto label_1bc39c;
        case 0x1bc3a0u: goto label_1bc3a0;
        case 0x1bc3a4u: goto label_1bc3a4;
        case 0x1bc3a8u: goto label_1bc3a8;
        case 0x1bc3acu: goto label_1bc3ac;
        case 0x1bc3b0u: goto label_1bc3b0;
        case 0x1bc3b4u: goto label_1bc3b4;
        case 0x1bc3b8u: goto label_1bc3b8;
        case 0x1bc3bcu: goto label_1bc3bc;
        case 0x1bc3c0u: goto label_1bc3c0;
        case 0x1bc3c4u: goto label_1bc3c4;
        case 0x1bc3c8u: goto label_1bc3c8;
        case 0x1bc3ccu: goto label_1bc3cc;
        case 0x1bc3d0u: goto label_1bc3d0;
        case 0x1bc3d4u: goto label_1bc3d4;
        case 0x1bc3d8u: goto label_1bc3d8;
        case 0x1bc3dcu: goto label_1bc3dc;
        case 0x1bc3e0u: goto label_1bc3e0;
        case 0x1bc3e4u: goto label_1bc3e4;
        case 0x1bc3e8u: goto label_1bc3e8;
        case 0x1bc3ecu: goto label_1bc3ec;
        case 0x1bc3f0u: goto label_1bc3f0;
        case 0x1bc3f4u: goto label_1bc3f4;
        case 0x1bc3f8u: goto label_1bc3f8;
        case 0x1bc3fcu: goto label_1bc3fc;
        case 0x1bc400u: goto label_1bc400;
        case 0x1bc404u: goto label_1bc404;
        case 0x1bc408u: goto label_1bc408;
        case 0x1bc40cu: goto label_1bc40c;
        case 0x1bc410u: goto label_1bc410;
        case 0x1bc414u: goto label_1bc414;
        case 0x1bc418u: goto label_1bc418;
        case 0x1bc41cu: goto label_1bc41c;
        case 0x1bc420u: goto label_1bc420;
        case 0x1bc424u: goto label_1bc424;
        case 0x1bc428u: goto label_1bc428;
        case 0x1bc42cu: goto label_1bc42c;
        case 0x1bc430u: goto label_1bc430;
        case 0x1bc434u: goto label_1bc434;
        case 0x1bc438u: goto label_1bc438;
        case 0x1bc43cu: goto label_1bc43c;
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
        default: return;
    }

label_1bc188:
    // 0x1bc188: 0xa083003d  sb          $v1, 0x3D($a0)
    ctx->pc = 0x1bc188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 3));
label_1bc18c:
    // 0x1bc18c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bc190:
    // 0x1bc190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc194:
    // 0x1bc194: 0xa263002f  sb          $v1, 0x2F($s3)
    ctx->pc = 0x1bc194u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 47), (uint8_t)GPR_U32(ctx, 3));
label_1bc198:
    // 0x1bc198: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bc198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bc19c:
    // 0x1bc19c: 0xa265002e  sb          $a1, 0x2E($s3)
    ctx->pc = 0x1bc19cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 46), (uint8_t)GPR_U32(ctx, 5));
label_1bc1a0:
    // 0x1bc1a0: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x1bc1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
label_1bc1a4:
    // 0x1bc1a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1bc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bc1a8:
    // 0x1bc1a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bc1ac:
    if (ctx->pc == 0x1BC1ACu) {
        ctx->pc = 0x1BC1B0u;
        goto label_1bc1b0;
    }
    ctx->pc = 0x1BC1A8u;
    {
        const bool branch_taken_0x1bc1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1a8) {
            ctx->pc = 0x1BC1B8u;
            goto label_1bc1b8;
        }
    }
    ctx->pc = 0x1BC1B0u;
label_1bc1b0:
    // 0x1bc1b0: 0x90630240  lbu         $v1, 0x240($v1)
    ctx->pc = 0x1bc1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 576)));
label_1bc1b4:
    // 0x1bc1b4: 0xa0830047  sb          $v1, 0x47($a0)
    ctx->pc = 0x1bc1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 3));
label_1bc1b8:
    // 0x1bc1b8: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
label_1bc1bc:
    if (ctx->pc == 0x1BC1BCu) {
        ctx->pc = 0x1BC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1B8u;
        // 0x1bc1bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1C0u;
        goto label_1bc1c0;
    }
    ctx->pc = 0x1BC1B8u;
    {
        const bool branch_taken_0x1bc1b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1B8u;
        // 0x1bc1bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1b8) {
            ctx->pc = 0x1BC248u;
            goto label_1bc248;
        }
    }
    ctx->pc = 0x1BC1C0u;
label_1bc1c0:
    // 0x1bc1c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc1c4:
    // 0x1bc1c4: 0x0  nop
    ctx->pc = 0x1bc1c4u;
    // NOP
label_1bc1c8:
    // 0x1bc1c8: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1bc1cc:
    // 0x1bc1cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bc1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc1d0:
    // 0x1bc1d0: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1bc1d4:
    if (ctx->pc == 0x1BC1D4u) {
        ctx->pc = 0x1BC1D8u;
        goto label_1bc1d8;
    }
    ctx->pc = 0x1BC1D0u;
    {
        const bool branch_taken_0x1bc1d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1d0) {
            ctx->pc = 0x1BC22Cu;
            goto label_1bc22c;
        }
    }
    ctx->pc = 0x1BC1D8u;
label_1bc1d8:
    // 0x1bc1d8: 0x90a3023a  lbu         $v1, 0x23A($a1)
    ctx->pc = 0x1bc1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_1bc1dc:
    // 0x1bc1dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1bc1e0:
    if (ctx->pc == 0x1BC1E0u) {
        ctx->pc = 0x1BC1E4u;
        goto label_1bc1e4;
    }
    ctx->pc = 0x1BC1DCu;
    {
        const bool branch_taken_0x1bc1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1dc) {
            ctx->pc = 0x1BC1FCu;
            goto label_1bc1fc;
        }
    }
    ctx->pc = 0x1BC1E4u;
label_1bc1e4:
    // 0x1bc1e4: 0x90a40231  lbu         $a0, 0x231($a1)
    ctx->pc = 0x1bc1e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 561)));
label_1bc1e8:
    // 0x1bc1e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bc1ec:
    // 0x1bc1ec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1bc1f0:
    if (ctx->pc == 0x1BC1F0u) {
        ctx->pc = 0x1BC1F4u;
        goto label_1bc1f4;
    }
    ctx->pc = 0x1BC1ECu;
    {
        const bool branch_taken_0x1bc1ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc1ec) {
            ctx->pc = 0x1BC1FCu;
            goto label_1bc1fc;
        }
    }
    ctx->pc = 0x1BC1F4u;
label_1bc1f4:
    // 0x1bc1f4: 0xc0542d8  jal         func_150B60
label_1bc1f8:
    if (ctx->pc == 0x1BC1F8u) {
        ctx->pc = 0x1BC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1F4u;
        // 0x1bc1f8: 0x8ca40038  lw          $a0, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1FCu;
        goto label_1bc1fc;
    }
    ctx->pc = 0x1BC1F4u;
    SET_GPR_U32(ctx, 31, 0x1BC1FCu);
    ctx->pc = 0x1BC1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1F4u;
    // 0x1bc1f8: 0x8ca40038  lw          $a0, 0x38($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x1BC1F4u, 0x1BC1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1FCu;
label_1bc1fc:
    // 0x1bc1fc: 0x0  nop
    ctx->pc = 0x1bc1fcu;
    // NOP
label_1bc200:
    // 0x1bc200: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bc200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc204:
    // 0x1bc204: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bc204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bc208:
    // 0x1bc208: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bc208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bc20c:
    // 0x1bc20c: 0xa0850238  sb          $a1, 0x238($a0)
    ctx->pc = 0x1bc20cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 568), (uint8_t)GPR_U32(ctx, 5));
label_1bc210:
    // 0x1bc210: 0xa0830233  sb          $v1, 0x233($a0)
    ctx->pc = 0x1bc210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 563), (uint8_t)GPR_U32(ctx, 3));
label_1bc214:
    // 0x1bc214: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x1bc214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
label_1bc218:
    // 0x1bc218: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bc21c:
    if (ctx->pc == 0x1BC21Cu) {
        ctx->pc = 0x1BC220u;
        goto label_1bc220;
    }
    ctx->pc = 0x1BC218u;
    {
        const bool branch_taken_0x1bc218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc218) {
            ctx->pc = 0x1BC228u;
            goto label_1bc228;
        }
    }
    ctx->pc = 0x1BC220u;
label_1bc220:
    // 0x1bc220: 0xc0452cc  jal         func_114B30
label_1bc224:
    if (ctx->pc == 0x1BC224u) {
        ctx->pc = 0x1BC228u;
        goto label_1bc228;
    }
    ctx->pc = 0x1BC220u;
    SET_GPR_U32(ctx, 31, 0x1BC228u);
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x1BC220u, 0x1BC228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC228u;
label_1bc228:
    // 0x1bc228: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1bc228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1bc22c:
    // 0x1bc22c: 0x0  nop
    ctx->pc = 0x1bc22cu;
    // NOP
label_1bc230:
    // 0x1bc230: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bc230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bc234:
    // 0x1bc234: 0x2a430009  slti        $v1, $s2, 0x9
    ctx->pc = 0x1bc234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bc238:
    // 0x1bc238: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1bc23c:
    if (ctx->pc == 0x1BC23Cu) {
        ctx->pc = 0x1BC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC238u;
        // 0x1bc23c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC240u;
        goto label_1bc240;
    }
    ctx->pc = 0x1BC238u;
    {
        const bool branch_taken_0x1bc238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC238u;
        // 0x1bc23c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc238) {
            ctx->pc = 0x1BC1C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc1c4;
        }
    }
    ctx->pc = 0x1BC240u;
label_1bc240:
    // 0x1bc240: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bc244:
    if (ctx->pc == 0x1BC244u) {
        ctx->pc = 0x1BC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC240u;
        // 0x1bc244: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC248u;
        goto label_1bc248;
    }
    ctx->pc = 0x1BC240u;
    {
        const bool branch_taken_0x1bc240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC240u;
        // 0x1bc244: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc240) {
            ctx->pc = 0x1BC254u;
            goto label_1bc254;
        }
    }
    ctx->pc = 0x1BC248u;
label_1bc248:
    // 0x1bc248: 0xc06f09c  jal         func_1BC270
label_1bc24c:
    if (ctx->pc == 0x1BC24Cu) {
        ctx->pc = 0x1BC250u;
        goto label_1bc250;
    }
    ctx->pc = 0x1BC248u;
    SET_GPR_U32(ctx, 31, 0x1BC250u);
    ctx->pc = 0x1BC270u;
    goto label_1bc270;
    ctx->pc = 0x1BC250u;
label_1bc250:
    // 0x1bc250: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bc250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc254:
    // 0x1bc254: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc258:
    // 0x1bc258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc25c:
    // 0x1bc25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc260:
    // 0x1bc260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc264:
    // 0x1bc264: 0x3e00008  jr          $ra
label_1bc268:
    if (ctx->pc == 0x1BC268u) {
        ctx->pc = 0x1BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC264u;
        // 0x1bc268: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC26Cu;
        goto label_1bc26c;
    }
    ctx->pc = 0x1BC264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC264u;
        // 0x1bc268: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC26Cu;
label_1bc26c:
    // 0x1bc26c: 0x0  nop
    ctx->pc = 0x1bc26cu;
    // NOP
label_1bc270:
    // 0x1bc270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bc274:
    // 0x1bc274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bc274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bc278:
    // 0x1bc278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bc278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bc27c:
    // 0x1bc27c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bc280:
    // 0x1bc280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bc284:
    // 0x1bc284: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bc284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc288:
    // 0x1bc288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bc28c:
    // 0x1bc28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bc290:
    // 0x1bc290: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bc290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bc294:
    // 0x1bc294: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1bc294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1bc298:
    // 0x1bc298: 0x10830064  beq         $a0, $v1, . + 4 + (0x64 << 2)
label_1bc29c:
    if (ctx->pc == 0x1BC29Cu) {
        ctx->pc = 0x1BC2A0u;
        goto label_1bc2a0;
    }
    ctx->pc = 0x1BC298u;
    {
        const bool branch_taken_0x1bc298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc298) {
            ctx->pc = 0x1BC42Cu;
            goto label_1bc42c;
        }
    }
    ctx->pc = 0x1BC2A0u;
label_1bc2a0:
    // 0x1bc2a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bc2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc2a4:
    // 0x1bc2a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc2a8:
    // 0x1bc2a8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bc2ac:
    // 0x1bc2ac: 0x92640022  lbu         $a0, 0x22($s3)
    ctx->pc = 0x1bc2acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_1bc2b0:
    // 0x1bc2b0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bc2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bc2b4:
    // 0x1bc2b4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bc2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bc2b8:
    // 0x1bc2b8: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x1bc2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bc2bc:
    // 0x1bc2bc: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x1bc2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_1bc2c0:
    // 0x1bc2c0: 0x102fc2  srl         $a1, $s0, 31
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_1bc2c4:
    // 0x1bc2c4: 0x9266003a  lbu         $a2, 0x3A($s3)
    ctx->pc = 0x1bc2c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
label_1bc2c8:
    // 0x1bc2c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bc2cc:
    // 0x1bc2cc: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x1bc2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bc2d0:
    // 0x1bc2d0: 0x2010  mfhi        $a0
    ctx->pc = 0x1bc2d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bc2d4:
    // 0x1bc2d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bc2d8:
    // 0x1bc2d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bc2dc:
    // 0x1bc2dc: 0x207001a  div         $zero, $s0, $a3
    ctx->pc = 0x1bc2dcu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bc2e0:
    // 0x1bc2e0: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x1bc2e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
label_1bc2e4:
    // 0x1bc2e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bc2e8:
    // 0x1bc2e8: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x1bc2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1bc2ec:
    // 0x1bc2ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc2ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bc2f0:
    // 0x1bc2f0: 0xc0449b8  jal         func_1126E0
label_1bc2f4:
    if (ctx->pc == 0x1BC2F4u) {
        ctx->pc = 0x1BC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2F0u;
        // 0x1bc2f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2F8u;
        goto label_1bc2f8;
    }
    ctx->pc = 0x1BC2F0u;
    SET_GPR_U32(ctx, 31, 0x1BC2F8u);
    ctx->pc = 0x1BC2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2F0u;
    // 0x1bc2f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BC2F0u, 0x1BC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2F8u;
label_1bc2f8:
    // 0x1bc2f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1bc2fc:
    if (ctx->pc == 0x1BC2FCu) {
        ctx->pc = 0x1BC300u;
        goto label_1bc300;
    }
    ctx->pc = 0x1BC2F8u;
    {
        const bool branch_taken_0x1bc2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2f8) {
            ctx->pc = 0x1BC308u;
            goto label_1bc308;
        }
    }
    ctx->pc = 0x1BC300u;
label_1bc300:
    // 0x1bc300: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bc304:
    if (ctx->pc == 0x1BC304u) {
        ctx->pc = 0x1BC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC300u;
        // 0x1bc304: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC308u;
        goto label_1bc308;
    }
    ctx->pc = 0x1BC300u;
    {
        const bool branch_taken_0x1bc300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC300u;
        // 0x1bc304: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc300) {
            ctx->pc = 0x1BC318u;
            goto label_1bc318;
        }
    }
    ctx->pc = 0x1BC308u;
label_1bc308:
    // 0x1bc308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bc308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bc30c:
    // 0x1bc30c: 0x2a030019  slti        $v1, $s0, 0x19
    ctx->pc = 0x1bc30cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
label_1bc310:
    // 0x1bc310: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_1bc314:
    if (ctx->pc == 0x1BC314u) {
        ctx->pc = 0x1BC318u;
        goto label_1bc318;
    }
    ctx->pc = 0x1BC310u;
    {
        const bool branch_taken_0x1bc310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc310) {
            ctx->pc = 0x1BC2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc2a8;
        }
    }
    ctx->pc = 0x1BC318u;
label_1bc318:
    // 0x1bc318: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
label_1bc31c:
    if (ctx->pc == 0x1BC31Cu) {
        ctx->pc = 0x1BC320u;
        goto label_1bc320;
    }
    ctx->pc = 0x1BC318u;
    {
        const bool branch_taken_0x1bc318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc318) {
            ctx->pc = 0x1BC42Cu;
            goto label_1bc42c;
        }
    }
    ctx->pc = 0x1BC320u;
label_1bc320:
    // 0x1bc320: 0x9262003a  lbu         $v0, 0x3A($s3)
    ctx->pc = 0x1bc320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
label_1bc324:
    // 0x1bc324: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1bc324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc328:
    // 0x1bc328: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bc328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc32c:
    // 0x1bc32c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc330:
    // 0x1bc330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bc334:
    // 0x1bc334: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x1bc334u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_1bc338:
    // 0x1bc338: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bc338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bc33c:
    // 0x1bc33c: 0x92640022  lbu         $a0, 0x22($s3)
    ctx->pc = 0x1bc33cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_1bc340:
    // 0x1bc340: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bc340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bc344:
    // 0x1bc344: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bc344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bc348:
    // 0x1bc348: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x1bc348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bc34c:
    // 0x1bc34c: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x1bc34cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_1bc350:
    // 0x1bc350: 0x122fc2  srl         $a1, $s2, 31
    ctx->pc = 0x1bc350u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1bc354:
    // 0x1bc354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bc354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc358:
    // 0x1bc358: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bc35c:
    // 0x1bc35c: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x1bc35cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bc360:
    // 0x1bc360: 0x2010  mfhi        $a0
    ctx->pc = 0x1bc360u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bc364:
    // 0x1bc364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bc364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bc368:
    // 0x1bc368: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bc368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bc36c:
    // 0x1bc36c: 0x247001a  div         $zero, $s2, $a3
    ctx->pc = 0x1bc36cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bc370:
    // 0x1bc370: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x1bc370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
label_1bc374:
    // 0x1bc374: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bc378:
    // 0x1bc378: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x1bc378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1bc37c:
    // 0x1bc37c: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bc380:
    // 0x1bc380: 0xc0449b8  jal         func_1126E0
label_1bc384:
    if (ctx->pc == 0x1BC384u) {
        ctx->pc = 0x1BC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC380u;
        // 0x1bc384: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC388u;
        goto label_1bc388;
    }
    ctx->pc = 0x1BC380u;
    SET_GPR_U32(ctx, 31, 0x1BC388u);
    ctx->pc = 0x1BC384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC380u;
    // 0x1bc384: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BC380u, 0x1BC388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC388u;
label_1bc388:
    // 0x1bc388: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1bc38c:
    if (ctx->pc == 0x1BC38Cu) {
        ctx->pc = 0x1BC390u;
        goto label_1bc390;
    }
    ctx->pc = 0x1BC388u;
    {
        const bool branch_taken_0x1bc388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc388) {
            ctx->pc = 0x1BC398u;
            goto label_1bc398;
        }
    }
    ctx->pc = 0x1BC390u;
label_1bc390:
    // 0x1bc390: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bc394:
    if (ctx->pc == 0x1BC394u) {
        ctx->pc = 0x1BC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC390u;
        // 0x1bc394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC398u;
        goto label_1bc398;
    }
    ctx->pc = 0x1BC390u;
    {
        const bool branch_taken_0x1bc390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC390u;
        // 0x1bc394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc390) {
            ctx->pc = 0x1BC3A8u;
            goto label_1bc3a8;
        }
    }
    ctx->pc = 0x1BC398u;
label_1bc398:
    // 0x1bc398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bc398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bc39c:
    // 0x1bc39c: 0x2a430019  slti        $v1, $s2, 0x19
    ctx->pc = 0x1bc39cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)25) ? 1 : 0);
label_1bc3a0:
    // 0x1bc3a0: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_1bc3a4:
    if (ctx->pc == 0x1BC3A4u) {
        ctx->pc = 0x1BC3A8u;
        goto label_1bc3a8;
    }
    ctx->pc = 0x1BC3A0u;
    {
        const bool branch_taken_0x1bc3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3a0) {
            ctx->pc = 0x1BC338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc338;
        }
    }
    ctx->pc = 0x1BC3A8u;
label_1bc3a8:
    // 0x1bc3a8: 0x16200020  bnez        $s1, . + 4 + (0x20 << 2)
label_1bc3ac:
    if (ctx->pc == 0x1BC3ACu) {
        ctx->pc = 0x1BC3B0u;
        goto label_1bc3b0;
    }
    ctx->pc = 0x1BC3A8u;
    {
        const bool branch_taken_0x1bc3a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3a8) {
            ctx->pc = 0x1BC42Cu;
            goto label_1bc42c;
        }
    }
    ctx->pc = 0x1BC3B0u;
label_1bc3b0:
    // 0x1bc3b0: 0x9268002b  lbu         $t0, 0x2B($s3)
    ctx->pc = 0x1bc3b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 43)));
label_1bc3b4:
    // 0x1bc3b4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bc3b8:
    // 0x1bc3b8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bc3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bc3bc:
    // 0x1bc3bc: 0x92670022  lbu         $a3, 0x22($s3)
    ctx->pc = 0x1bc3bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_1bc3c0:
    // 0x1bc3c0: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x1bc3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_1bc3c4:
    // 0x1bc3c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bc3c8:
    // 0x1bc3c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bc3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc3cc:
    // 0x1bc3cc: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1bc3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bc3d0:
    // 0x1bc3d0: 0x827c2  srl         $a0, $t0, 31
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1bc3d4:
    // 0x1bc3d4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1bc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1bc3d8:
    // 0x1bc3d8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1bc3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1bc3dc:
    // 0x1bc3dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bc3e0:
    // 0x1bc3e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bc3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bc3e4:
    // 0x1bc3e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc3e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bc3e8:
    // 0x1bc3e8: 0x105001a  div         $zero, $t0, $a1
    ctx->pc = 0x1bc3e8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bc3ec:
    // 0x1bc3ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bc3ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1bc3f0:
    // 0x1bc3f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bc3f4:
    // 0x1bc3f4: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1bc3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1bc3f8:
    // 0x1bc3f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc3f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bc3fc:
    // 0x1bc3fc: 0xc0449b8  jal         func_1126E0
label_1bc400:
    if (ctx->pc == 0x1BC400u) {
        ctx->pc = 0x1BC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3FCu;
        // 0x1bc400: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC404u;
        goto label_1bc404;
    }
    ctx->pc = 0x1BC3FCu;
    SET_GPR_U32(ctx, 31, 0x1BC404u);
    ctx->pc = 0x1BC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3FCu;
    // 0x1bc400: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BC3FCu, 0x1BC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC404u;
label_1bc404:
    // 0x1bc404: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bc408:
    if (ctx->pc == 0x1BC408u) {
        ctx->pc = 0x1BC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC404u;
        // 0x1bc408: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC40Cu;
        goto label_1bc40c;
    }
    ctx->pc = 0x1BC404u;
    {
        const bool branch_taken_0x1bc404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC404u;
        // 0x1bc408: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc404) {
            ctx->pc = 0x1BC418u;
            goto label_1bc418;
        }
    }
    ctx->pc = 0x1BC40Cu;
label_1bc40c:
    // 0x1bc40c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc410:
    // 0x1bc410: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bc414:
    if (ctx->pc == 0x1BC414u) {
        ctx->pc = 0x1BC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC410u;
        // 0x1bc414: 0xa263003a  sb          $v1, 0x3A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC418u;
        goto label_1bc418;
    }
    ctx->pc = 0x1BC410u;
    {
        const bool branch_taken_0x1bc410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC410u;
        // 0x1bc414: 0xa263003a  sb          $v1, 0x3A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc410) {
            ctx->pc = 0x1BC41Cu;
            goto label_1bc41c;
        }
    }
    ctx->pc = 0x1BC418u;
label_1bc418:
    // 0x1bc418: 0xa263003a  sb          $v1, 0x3A($s3)
    ctx->pc = 0x1bc418u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 3));
label_1bc41c:
    // 0x1bc41c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1bc41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc420:
    // 0x1bc420: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1bc420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1bc424:
    // 0x1bc424: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1bc424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc428:
    // 0x1bc428: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1bc428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1bc42c:
    // 0x1bc42c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bc42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc430:
    // 0x1bc430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc434:
    // 0x1bc434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc438:
    // 0x1bc438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc43c:
    // 0x1bc43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
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
    ctx->pc = 0x1bc958u;
    return;
}

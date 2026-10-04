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


void FUN_0017faa0_part649(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bc120u: goto label_2bc120;
        case 0x2bc124u: goto label_2bc124;
        case 0x2bc128u: goto label_2bc128;
        case 0x2bc12cu: goto label_2bc12c;
        case 0x2bc130u: goto label_2bc130;
        case 0x2bc134u: goto label_2bc134;
        case 0x2bc138u: goto label_2bc138;
        case 0x2bc13cu: goto label_2bc13c;
        case 0x2bc140u: goto label_2bc140;
        case 0x2bc144u: goto label_2bc144;
        case 0x2bc148u: goto label_2bc148;
        case 0x2bc14cu: goto label_2bc14c;
        case 0x2bc150u: goto label_2bc150;
        case 0x2bc154u: goto label_2bc154;
        case 0x2bc158u: goto label_2bc158;
        case 0x2bc15cu: goto label_2bc15c;
        case 0x2bc160u: goto label_2bc160;
        case 0x2bc164u: goto label_2bc164;
        case 0x2bc168u: goto label_2bc168;
        case 0x2bc16cu: goto label_2bc16c;
        case 0x2bc170u: goto label_2bc170;
        case 0x2bc174u: goto label_2bc174;
        case 0x2bc178u: goto label_2bc178;
        case 0x2bc17cu: goto label_2bc17c;
        case 0x2bc180u: goto label_2bc180;
        case 0x2bc184u: goto label_2bc184;
        case 0x2bc188u: goto label_2bc188;
        case 0x2bc18cu: goto label_2bc18c;
        case 0x2bc190u: goto label_2bc190;
        case 0x2bc194u: goto label_2bc194;
        case 0x2bc198u: goto label_2bc198;
        case 0x2bc19cu: goto label_2bc19c;
        case 0x2bc1a0u: goto label_2bc1a0;
        case 0x2bc1a4u: goto label_2bc1a4;
        case 0x2bc1a8u: goto label_2bc1a8;
        case 0x2bc1acu: goto label_2bc1ac;
        case 0x2bc1b0u: goto label_2bc1b0;
        case 0x2bc1b4u: goto label_2bc1b4;
        case 0x2bc1b8u: goto label_2bc1b8;
        case 0x2bc1bcu: goto label_2bc1bc;
        case 0x2bc1c0u: goto label_2bc1c0;
        case 0x2bc1c4u: goto label_2bc1c4;
        case 0x2bc1c8u: goto label_2bc1c8;
        case 0x2bc1ccu: goto label_2bc1cc;
        case 0x2bc1d0u: goto label_2bc1d0;
        case 0x2bc1d4u: goto label_2bc1d4;
        case 0x2bc1d8u: goto label_2bc1d8;
        case 0x2bc1dcu: goto label_2bc1dc;
        case 0x2bc1e0u: goto label_2bc1e0;
        case 0x2bc1e4u: goto label_2bc1e4;
        case 0x2bc1e8u: goto label_2bc1e8;
        case 0x2bc1ecu: goto label_2bc1ec;
        case 0x2bc1f0u: goto label_2bc1f0;
        case 0x2bc1f4u: goto label_2bc1f4;
        case 0x2bc1f8u: goto label_2bc1f8;
        case 0x2bc1fcu: goto label_2bc1fc;
        case 0x2bc200u: goto label_2bc200;
        case 0x2bc204u: goto label_2bc204;
        case 0x2bc208u: goto label_2bc208;
        case 0x2bc20cu: goto label_2bc20c;
        case 0x2bc210u: goto label_2bc210;
        case 0x2bc214u: goto label_2bc214;
        case 0x2bc218u: goto label_2bc218;
        case 0x2bc21cu: goto label_2bc21c;
        case 0x2bc220u: goto label_2bc220;
        case 0x2bc224u: goto label_2bc224;
        case 0x2bc228u: goto label_2bc228;
        case 0x2bc22cu: goto label_2bc22c;
        case 0x2bc230u: goto label_2bc230;
        case 0x2bc234u: goto label_2bc234;
        case 0x2bc238u: goto label_2bc238;
        case 0x2bc23cu: goto label_2bc23c;
        case 0x2bc240u: goto label_2bc240;
        case 0x2bc244u: goto label_2bc244;
        case 0x2bc248u: goto label_2bc248;
        case 0x2bc24cu: goto label_2bc24c;
        case 0x2bc250u: goto label_2bc250;
        case 0x2bc254u: goto label_2bc254;
        case 0x2bc258u: goto label_2bc258;
        case 0x2bc25cu: goto label_2bc25c;
        case 0x2bc260u: goto label_2bc260;
        case 0x2bc264u: goto label_2bc264;
        case 0x2bc268u: goto label_2bc268;
        case 0x2bc26cu: goto label_2bc26c;
        case 0x2bc270u: goto label_2bc270;
        case 0x2bc274u: goto label_2bc274;
        case 0x2bc278u: goto label_2bc278;
        case 0x2bc27cu: goto label_2bc27c;
        case 0x2bc280u: goto label_2bc280;
        case 0x2bc284u: goto label_2bc284;
        case 0x2bc288u: goto label_2bc288;
        case 0x2bc28cu: goto label_2bc28c;
        case 0x2bc290u: goto label_2bc290;
        case 0x2bc294u: goto label_2bc294;
        case 0x2bc298u: goto label_2bc298;
        case 0x2bc29cu: goto label_2bc29c;
        case 0x2bc2a0u: goto label_2bc2a0;
        case 0x2bc2a4u: goto label_2bc2a4;
        case 0x2bc2a8u: goto label_2bc2a8;
        case 0x2bc2acu: goto label_2bc2ac;
        case 0x2bc2b0u: goto label_2bc2b0;
        case 0x2bc2b4u: goto label_2bc2b4;
        case 0x2bc2b8u: goto label_2bc2b8;
        case 0x2bc2bcu: goto label_2bc2bc;
        case 0x2bc2c0u: goto label_2bc2c0;
        case 0x2bc2c4u: goto label_2bc2c4;
        case 0x2bc2c8u: goto label_2bc2c8;
        case 0x2bc2ccu: goto label_2bc2cc;
        case 0x2bc2d0u: goto label_2bc2d0;
        case 0x2bc2d4u: goto label_2bc2d4;
        case 0x2bc2d8u: goto label_2bc2d8;
        case 0x2bc2dcu: goto label_2bc2dc;
        case 0x2bc2e0u: goto label_2bc2e0;
        case 0x2bc2e4u: goto label_2bc2e4;
        case 0x2bc2e8u: goto label_2bc2e8;
        case 0x2bc2ecu: goto label_2bc2ec;
        case 0x2bc2f0u: goto label_2bc2f0;
        case 0x2bc2f4u: goto label_2bc2f4;
        case 0x2bc2f8u: goto label_2bc2f8;
        case 0x2bc2fcu: goto label_2bc2fc;
        case 0x2bc300u: goto label_2bc300;
        case 0x2bc304u: goto label_2bc304;
        case 0x2bc308u: goto label_2bc308;
        case 0x2bc30cu: goto label_2bc30c;
        case 0x2bc310u: goto label_2bc310;
        case 0x2bc314u: goto label_2bc314;
        case 0x2bc318u: goto label_2bc318;
        case 0x2bc31cu: goto label_2bc31c;
        case 0x2bc320u: goto label_2bc320;
        case 0x2bc324u: goto label_2bc324;
        case 0x2bc328u: goto label_2bc328;
        case 0x2bc32cu: goto label_2bc32c;
        case 0x2bc330u: goto label_2bc330;
        case 0x2bc334u: goto label_2bc334;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc33cu: goto label_2bc33c;
        case 0x2bc340u: goto label_2bc340;
        case 0x2bc344u: goto label_2bc344;
        case 0x2bc348u: goto label_2bc348;
        case 0x2bc34cu: goto label_2bc34c;
        case 0x2bc350u: goto label_2bc350;
        case 0x2bc354u: goto label_2bc354;
        case 0x2bc358u: goto label_2bc358;
        case 0x2bc35cu: goto label_2bc35c;
        case 0x2bc360u: goto label_2bc360;
        case 0x2bc364u: goto label_2bc364;
        case 0x2bc368u: goto label_2bc368;
        case 0x2bc36cu: goto label_2bc36c;
        case 0x2bc370u: goto label_2bc370;
        case 0x2bc374u: goto label_2bc374;
        case 0x2bc378u: goto label_2bc378;
        case 0x2bc37cu: goto label_2bc37c;
        case 0x2bc380u: goto label_2bc380;
        case 0x2bc384u: goto label_2bc384;
        case 0x2bc388u: goto label_2bc388;
        case 0x2bc38cu: goto label_2bc38c;
        case 0x2bc390u: goto label_2bc390;
        case 0x2bc394u: goto label_2bc394;
        case 0x2bc398u: goto label_2bc398;
        case 0x2bc39cu: goto label_2bc39c;
        case 0x2bc3a0u: goto label_2bc3a0;
        case 0x2bc3a4u: goto label_2bc3a4;
        case 0x2bc3a8u: goto label_2bc3a8;
        case 0x2bc3acu: goto label_2bc3ac;
        case 0x2bc3b0u: goto label_2bc3b0;
        case 0x2bc3b4u: goto label_2bc3b4;
        case 0x2bc3b8u: goto label_2bc3b8;
        case 0x2bc3bcu: goto label_2bc3bc;
        case 0x2bc3c0u: goto label_2bc3c0;
        case 0x2bc3c4u: goto label_2bc3c4;
        case 0x2bc3c8u: goto label_2bc3c8;
        case 0x2bc3ccu: goto label_2bc3cc;
        case 0x2bc3d0u: goto label_2bc3d0;
        case 0x2bc3d4u: goto label_2bc3d4;
        case 0x2bc3d8u: goto label_2bc3d8;
        case 0x2bc3dcu: goto label_2bc3dc;
        case 0x2bc3e0u: goto label_2bc3e0;
        case 0x2bc3e4u: goto label_2bc3e4;
        case 0x2bc3e8u: goto label_2bc3e8;
        case 0x2bc3ecu: goto label_2bc3ec;
        case 0x2bc3f0u: goto label_2bc3f0;
        case 0x2bc3f4u: goto label_2bc3f4;
        case 0x2bc3f8u: goto label_2bc3f8;
        case 0x2bc3fcu: goto label_2bc3fc;
        case 0x2bc400u: goto label_2bc400;
        case 0x2bc404u: goto label_2bc404;
        case 0x2bc408u: goto label_2bc408;
        case 0x2bc40cu: goto label_2bc40c;
        case 0x2bc410u: goto label_2bc410;
        case 0x2bc414u: goto label_2bc414;
        case 0x2bc418u: goto label_2bc418;
        case 0x2bc41cu: goto label_2bc41c;
        case 0x2bc420u: goto label_2bc420;
        case 0x2bc424u: goto label_2bc424;
        case 0x2bc428u: goto label_2bc428;
        case 0x2bc42cu: goto label_2bc42c;
        case 0x2bc430u: goto label_2bc430;
        case 0x2bc434u: goto label_2bc434;
        case 0x2bc438u: goto label_2bc438;
        case 0x2bc43cu: goto label_2bc43c;
        case 0x2bc440u: goto label_2bc440;
        case 0x2bc444u: goto label_2bc444;
        case 0x2bc448u: goto label_2bc448;
        case 0x2bc44cu: goto label_2bc44c;
        case 0x2bc450u: goto label_2bc450;
        case 0x2bc454u: goto label_2bc454;
        case 0x2bc458u: goto label_2bc458;
        case 0x2bc45cu: goto label_2bc45c;
        case 0x2bc460u: goto label_2bc460;
        case 0x2bc464u: goto label_2bc464;
        case 0x2bc468u: goto label_2bc468;
        case 0x2bc46cu: goto label_2bc46c;
        case 0x2bc470u: goto label_2bc470;
        case 0x2bc474u: goto label_2bc474;
        case 0x2bc478u: goto label_2bc478;
        case 0x2bc47cu: goto label_2bc47c;
        case 0x2bc480u: goto label_2bc480;
        case 0x2bc484u: goto label_2bc484;
        case 0x2bc488u: goto label_2bc488;
        case 0x2bc48cu: goto label_2bc48c;
        case 0x2bc490u: goto label_2bc490;
        case 0x2bc494u: goto label_2bc494;
        case 0x2bc498u: goto label_2bc498;
        case 0x2bc49cu: goto label_2bc49c;
        case 0x2bc4a0u: goto label_2bc4a0;
        case 0x2bc4a4u: goto label_2bc4a4;
        case 0x2bc4a8u: goto label_2bc4a8;
        case 0x2bc4acu: goto label_2bc4ac;
        case 0x2bc4b0u: goto label_2bc4b0;
        case 0x2bc4b4u: goto label_2bc4b4;
        case 0x2bc4b8u: goto label_2bc4b8;
        case 0x2bc4bcu: goto label_2bc4bc;
        case 0x2bc4c0u: goto label_2bc4c0;
        case 0x2bc4c4u: goto label_2bc4c4;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4ccu: goto label_2bc4cc;
        case 0x2bc4d0u: goto label_2bc4d0;
        case 0x2bc4d4u: goto label_2bc4d4;
        case 0x2bc4d8u: goto label_2bc4d8;
        case 0x2bc4dcu: goto label_2bc4dc;
        case 0x2bc4e0u: goto label_2bc4e0;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc4e8u: goto label_2bc4e8;
        case 0x2bc4ecu: goto label_2bc4ec;
        case 0x2bc4f0u: goto label_2bc4f0;
        case 0x2bc4f4u: goto label_2bc4f4;
        case 0x2bc4f8u: goto label_2bc4f8;
        case 0x2bc4fcu: goto label_2bc4fc;
        case 0x2bc500u: goto label_2bc500;
        case 0x2bc504u: goto label_2bc504;
        case 0x2bc508u: goto label_2bc508;
        case 0x2bc50cu: goto label_2bc50c;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc514u: goto label_2bc514;
        case 0x2bc518u: goto label_2bc518;
        case 0x2bc51cu: goto label_2bc51c;
        case 0x2bc520u: goto label_2bc520;
        case 0x2bc524u: goto label_2bc524;
        case 0x2bc528u: goto label_2bc528;
        case 0x2bc52cu: goto label_2bc52c;
        case 0x2bc530u: goto label_2bc530;
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc538u: goto label_2bc538;
        case 0x2bc53cu: goto label_2bc53c;
        case 0x2bc540u: goto label_2bc540;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc548u: goto label_2bc548;
        case 0x2bc54cu: goto label_2bc54c;
        case 0x2bc550u: goto label_2bc550;
        case 0x2bc554u: goto label_2bc554;
        case 0x2bc558u: goto label_2bc558;
        case 0x2bc55cu: goto label_2bc55c;
        case 0x2bc560u: goto label_2bc560;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc568u: goto label_2bc568;
        case 0x2bc56cu: goto label_2bc56c;
        case 0x2bc570u: goto label_2bc570;
        case 0x2bc574u: goto label_2bc574;
        case 0x2bc578u: goto label_2bc578;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc584u: goto label_2bc584;
        case 0x2bc588u: goto label_2bc588;
        case 0x2bc58cu: goto label_2bc58c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc594u: goto label_2bc594;
        case 0x2bc598u: goto label_2bc598;
        case 0x2bc59cu: goto label_2bc59c;
        case 0x2bc5a0u: goto label_2bc5a0;
        case 0x2bc5a4u: goto label_2bc5a4;
        case 0x2bc5a8u: goto label_2bc5a8;
        case 0x2bc5acu: goto label_2bc5ac;
        case 0x2bc5b0u: goto label_2bc5b0;
        case 0x2bc5b4u: goto label_2bc5b4;
        case 0x2bc5b8u: goto label_2bc5b8;
        case 0x2bc5bcu: goto label_2bc5bc;
        case 0x2bc5c0u: goto label_2bc5c0;
        case 0x2bc5c4u: goto label_2bc5c4;
        case 0x2bc5c8u: goto label_2bc5c8;
        case 0x2bc5ccu: goto label_2bc5cc;
        case 0x2bc5d0u: goto label_2bc5d0;
        case 0x2bc5d4u: goto label_2bc5d4;
        case 0x2bc5d8u: goto label_2bc5d8;
        case 0x2bc5dcu: goto label_2bc5dc;
        case 0x2bc5e0u: goto label_2bc5e0;
        case 0x2bc5e4u: goto label_2bc5e4;
        case 0x2bc5e8u: goto label_2bc5e8;
        case 0x2bc5ecu: goto label_2bc5ec;
        case 0x2bc5f0u: goto label_2bc5f0;
        case 0x2bc5f4u: goto label_2bc5f4;
        case 0x2bc5f8u: goto label_2bc5f8;
        case 0x2bc5fcu: goto label_2bc5fc;
        case 0x2bc600u: goto label_2bc600;
        case 0x2bc604u: goto label_2bc604;
        case 0x2bc608u: goto label_2bc608;
        case 0x2bc60cu: goto label_2bc60c;
        case 0x2bc610u: goto label_2bc610;
        case 0x2bc614u: goto label_2bc614;
        case 0x2bc618u: goto label_2bc618;
        case 0x2bc61cu: goto label_2bc61c;
        case 0x2bc620u: goto label_2bc620;
        case 0x2bc624u: goto label_2bc624;
        case 0x2bc628u: goto label_2bc628;
        case 0x2bc62cu: goto label_2bc62c;
        case 0x2bc630u: goto label_2bc630;
        case 0x2bc634u: goto label_2bc634;
        case 0x2bc638u: goto label_2bc638;
        case 0x2bc63cu: goto label_2bc63c;
        case 0x2bc640u: goto label_2bc640;
        case 0x2bc644u: goto label_2bc644;
        case 0x2bc648u: goto label_2bc648;
        case 0x2bc64cu: goto label_2bc64c;
        case 0x2bc650u: goto label_2bc650;
        case 0x2bc654u: goto label_2bc654;
        case 0x2bc658u: goto label_2bc658;
        case 0x2bc65cu: goto label_2bc65c;
        case 0x2bc660u: goto label_2bc660;
        case 0x2bc664u: goto label_2bc664;
        case 0x2bc668u: goto label_2bc668;
        case 0x2bc66cu: goto label_2bc66c;
        case 0x2bc670u: goto label_2bc670;
        case 0x2bc674u: goto label_2bc674;
        case 0x2bc678u: goto label_2bc678;
        case 0x2bc67cu: goto label_2bc67c;
        case 0x2bc680u: goto label_2bc680;
        case 0x2bc684u: goto label_2bc684;
        case 0x2bc688u: goto label_2bc688;
        case 0x2bc68cu: goto label_2bc68c;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc694u: goto label_2bc694;
        case 0x2bc698u: goto label_2bc698;
        case 0x2bc69cu: goto label_2bc69c;
        case 0x2bc6a0u: goto label_2bc6a0;
        case 0x2bc6a4u: goto label_2bc6a4;
        case 0x2bc6a8u: goto label_2bc6a8;
        case 0x2bc6acu: goto label_2bc6ac;
        case 0x2bc6b0u: goto label_2bc6b0;
        case 0x2bc6b4u: goto label_2bc6b4;
        case 0x2bc6b8u: goto label_2bc6b8;
        case 0x2bc6bcu: goto label_2bc6bc;
        case 0x2bc6c0u: goto label_2bc6c0;
        case 0x2bc6c4u: goto label_2bc6c4;
        case 0x2bc6c8u: goto label_2bc6c8;
        case 0x2bc6ccu: goto label_2bc6cc;
        case 0x2bc6d0u: goto label_2bc6d0;
        case 0x2bc6d4u: goto label_2bc6d4;
        case 0x2bc6d8u: goto label_2bc6d8;
        case 0x2bc6dcu: goto label_2bc6dc;
        case 0x2bc6e0u: goto label_2bc6e0;
        case 0x2bc6e4u: goto label_2bc6e4;
        case 0x2bc6e8u: goto label_2bc6e8;
        case 0x2bc6ecu: goto label_2bc6ec;
        case 0x2bc6f0u: goto label_2bc6f0;
        case 0x2bc6f4u: goto label_2bc6f4;
        case 0x2bc6f8u: goto label_2bc6f8;
        case 0x2bc6fcu: goto label_2bc6fc;
        case 0x2bc700u: goto label_2bc700;
        case 0x2bc704u: goto label_2bc704;
        case 0x2bc708u: goto label_2bc708;
        case 0x2bc70cu: goto label_2bc70c;
        case 0x2bc710u: goto label_2bc710;
        case 0x2bc714u: goto label_2bc714;
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc71cu: goto label_2bc71c;
        case 0x2bc720u: goto label_2bc720;
        case 0x2bc724u: goto label_2bc724;
        case 0x2bc728u: goto label_2bc728;
        case 0x2bc72cu: goto label_2bc72c;
        case 0x2bc730u: goto label_2bc730;
        case 0x2bc734u: goto label_2bc734;
        case 0x2bc738u: goto label_2bc738;
        case 0x2bc73cu: goto label_2bc73c;
        case 0x2bc740u: goto label_2bc740;
        case 0x2bc744u: goto label_2bc744;
        case 0x2bc748u: goto label_2bc748;
        case 0x2bc74cu: goto label_2bc74c;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc754u: goto label_2bc754;
        case 0x2bc758u: goto label_2bc758;
        case 0x2bc75cu: goto label_2bc75c;
        case 0x2bc760u: goto label_2bc760;
        case 0x2bc764u: goto label_2bc764;
        case 0x2bc768u: goto label_2bc768;
        case 0x2bc76cu: goto label_2bc76c;
        case 0x2bc770u: goto label_2bc770;
        case 0x2bc774u: goto label_2bc774;
        case 0x2bc778u: goto label_2bc778;
        case 0x2bc77cu: goto label_2bc77c;
        case 0x2bc780u: goto label_2bc780;
        case 0x2bc784u: goto label_2bc784;
        case 0x2bc788u: goto label_2bc788;
        case 0x2bc78cu: goto label_2bc78c;
        case 0x2bc790u: goto label_2bc790;
        case 0x2bc794u: goto label_2bc794;
        case 0x2bc798u: goto label_2bc798;
        case 0x2bc79cu: goto label_2bc79c;
        case 0x2bc7a0u: goto label_2bc7a0;
        case 0x2bc7a4u: goto label_2bc7a4;
        case 0x2bc7a8u: goto label_2bc7a8;
        case 0x2bc7acu: goto label_2bc7ac;
        case 0x2bc7b0u: goto label_2bc7b0;
        case 0x2bc7b4u: goto label_2bc7b4;
        case 0x2bc7b8u: goto label_2bc7b8;
        case 0x2bc7bcu: goto label_2bc7bc;
        case 0x2bc7c0u: goto label_2bc7c0;
        case 0x2bc7c4u: goto label_2bc7c4;
        case 0x2bc7c8u: goto label_2bc7c8;
        case 0x2bc7ccu: goto label_2bc7cc;
        case 0x2bc7d0u: goto label_2bc7d0;
        case 0x2bc7d4u: goto label_2bc7d4;
        case 0x2bc7d8u: goto label_2bc7d8;
        case 0x2bc7dcu: goto label_2bc7dc;
        case 0x2bc7e0u: goto label_2bc7e0;
        case 0x2bc7e4u: goto label_2bc7e4;
        case 0x2bc7e8u: goto label_2bc7e8;
        case 0x2bc7ecu: goto label_2bc7ec;
        case 0x2bc7f0u: goto label_2bc7f0;
        case 0x2bc7f4u: goto label_2bc7f4;
        case 0x2bc7f8u: goto label_2bc7f8;
        case 0x2bc7fcu: goto label_2bc7fc;
        case 0x2bc800u: goto label_2bc800;
        case 0x2bc804u: goto label_2bc804;
        case 0x2bc808u: goto label_2bc808;
        case 0x2bc80cu: goto label_2bc80c;
        case 0x2bc810u: goto label_2bc810;
        case 0x2bc814u: goto label_2bc814;
        case 0x2bc818u: goto label_2bc818;
        case 0x2bc81cu: goto label_2bc81c;
        case 0x2bc820u: goto label_2bc820;
        case 0x2bc824u: goto label_2bc824;
        case 0x2bc828u: goto label_2bc828;
        case 0x2bc82cu: goto label_2bc82c;
        case 0x2bc830u: goto label_2bc830;
        case 0x2bc834u: goto label_2bc834;
        case 0x2bc838u: goto label_2bc838;
        case 0x2bc83cu: goto label_2bc83c;
        case 0x2bc840u: goto label_2bc840;
        case 0x2bc844u: goto label_2bc844;
        case 0x2bc848u: goto label_2bc848;
        case 0x2bc84cu: goto label_2bc84c;
        case 0x2bc850u: goto label_2bc850;
        case 0x2bc854u: goto label_2bc854;
        case 0x2bc858u: goto label_2bc858;
        case 0x2bc85cu: goto label_2bc85c;
        case 0x2bc860u: goto label_2bc860;
        case 0x2bc864u: goto label_2bc864;
        case 0x2bc868u: goto label_2bc868;
        case 0x2bc86cu: goto label_2bc86c;
        case 0x2bc870u: goto label_2bc870;
        case 0x2bc874u: goto label_2bc874;
        case 0x2bc878u: goto label_2bc878;
        case 0x2bc87cu: goto label_2bc87c;
        case 0x2bc880u: goto label_2bc880;
        case 0x2bc884u: goto label_2bc884;
        case 0x2bc888u: goto label_2bc888;
        case 0x2bc88cu: goto label_2bc88c;
        case 0x2bc890u: goto label_2bc890;
        case 0x2bc894u: goto label_2bc894;
        case 0x2bc898u: goto label_2bc898;
        case 0x2bc89cu: goto label_2bc89c;
        case 0x2bc8a0u: goto label_2bc8a0;
        case 0x2bc8a4u: goto label_2bc8a4;
        case 0x2bc8a8u: goto label_2bc8a8;
        case 0x2bc8acu: goto label_2bc8ac;
        case 0x2bc8b0u: goto label_2bc8b0;
        case 0x2bc8b4u: goto label_2bc8b4;
        case 0x2bc8b8u: goto label_2bc8b8;
        case 0x2bc8bcu: goto label_2bc8bc;
        case 0x2bc8c0u: goto label_2bc8c0;
        case 0x2bc8c4u: goto label_2bc8c4;
        case 0x2bc8c8u: goto label_2bc8c8;
        case 0x2bc8ccu: goto label_2bc8cc;
        case 0x2bc8d0u: goto label_2bc8d0;
        case 0x2bc8d4u: goto label_2bc8d4;
        case 0x2bc8d8u: goto label_2bc8d8;
        case 0x2bc8dcu: goto label_2bc8dc;
        case 0x2bc8e0u: goto label_2bc8e0;
        case 0x2bc8e4u: goto label_2bc8e4;
        case 0x2bc8e8u: goto label_2bc8e8;
        case 0x2bc8ecu: goto label_2bc8ec;
        default: return;
    }

label_2bc120:
    // 0x2bc120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc124:
    // 0x2bc124: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc124u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bc128:
    // 0x2bc128: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bc128u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bc12c:
    // 0x2bc12c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bc12cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bc130:
    // 0x2bc130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc134:
    // 0x2bc134: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc134u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bc138:
    // 0x2bc138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc13c:
    // 0x2bc13c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc13cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bc140:
    // 0x2bc140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc144:
    // 0x2bc144: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc144u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bc148:
    // 0x2bc148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc14c:
    // 0x2bc14c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc14cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bc150:
    // 0x2bc150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc154:
    // 0x2bc154: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc154u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bc158:
    // 0x2bc158: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc158u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BC158 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc15c:
    // 0x2bc15c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bc160:
    // 0x2bc160: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc160u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bc164:
    // 0x2bc164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc168:
    // 0x2bc168: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2bc168u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bc16c:
    // 0x2bc16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc170:
    // 0x2bc170: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bc174:
    if (ctx->pc == 0x2BC174u) {
        ctx->pc = 0x2BC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC170u;
        // 0x2bc174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC178u;
        goto label_2bc178;
    }
    ctx->pc = 0x2BC170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC170u;
        // 0x2bc174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC178u;
label_2bc178:
    // 0x2bc178: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc178u;
    ctx->pc = 0x2BC17Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2bc17c:
    // 0x2bc17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc180:
    // 0x2bc180: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bc180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bc184:
    // 0x2bc184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc188:
    // 0x2bc188: 0x420f0698  .word       0x420F0698                   # eret # 000F0680 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bc188u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_2bc18c:
    // 0x2bc18c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc18cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc190:
    // 0x2bc190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc194:
    // 0x2bc194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc198:
    // 0x2bc198: 0x500a001f  beql        $zero, $t2, . + 4 + (0x1F << 2)
label_2bc19c:
    if (ctx->pc == 0x2BC19Cu) {
        ctx->pc = 0x2BC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC198u;
        // 0x2bc19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1A0u;
        goto label_2bc1a0;
    }
    ctx->pc = 0x2BC198u;
    {
        const bool branch_taken_0x2bc198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bc198) {
            ctx->pc = 0x2BC19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC198u;
            // 0x2bc19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC218u;
            goto label_2bc218;
        }
    }
    ctx->pc = 0x2BC1A0u;
label_2bc1a0:
    // 0x2bc1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc1a4:
    // 0x2bc1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1a8:
    // 0x2bc1a8: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bc1ac:
    if (ctx->pc == 0x2BC1ACu) {
        ctx->pc = 0x2BC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1A8u;
        // 0x2bc1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1B0u;
        goto label_2bc1b0;
    }
    ctx->pc = 0x2BC1A8u;
    {
        const bool branch_taken_0x2bc1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1A8u;
        // 0x2bc1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1a8) {
            ctx->pc = 0x2D01C8u;
            return;
        }
    }
    ctx->pc = 0x2BC1B0u;
label_2bc1b0:
    // 0x2bc1b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc1b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc1b4:
    // 0x2bc1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1b8:
    // 0x2bc1b8: 0x5a00081f  blezl       $s0, . + 4 + (0x81F << 2)
label_2bc1bc:
    if (ctx->pc == 0x2BC1BCu) {
        ctx->pc = 0x2BC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1B8u;
        // 0x2bc1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1C0u;
        goto label_2bc1c0;
    }
    ctx->pc = 0x2BC1B8u;
    {
        const bool branch_taken_0x2bc1b8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc1b8) {
            ctx->pc = 0x2BC1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC1B8u;
            // 0x2bc1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE238u;
            { ctx->pc = 0x2be238; return; }
        }
    }
    ctx->pc = 0x2BC1C0u;
label_2bc1c0:
    // 0x2bc1c0: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bc1c4:
    if (ctx->pc == 0x2BC1C4u) {
        ctx->pc = 0x2BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C0u;
        // 0x2bc1c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1C8u;
        goto label_2bc1c8;
    }
    ctx->pc = 0x2BC1C0u;
    {
        const bool branch_taken_0x2bc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C0u;
        // 0x2bc1c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1c0) {
            ctx->pc = 0x2C22C4u;
            return;
        }
    }
    ctx->pc = 0x2BC1C8u;
label_2bc1c8:
    // 0x2bc1c8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc1cc:
    // 0x2bc1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1d0:
    // 0x2bc1d0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC1D0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc1d4:
    // 0x2bc1d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1d8:
    // 0x2bc1d8: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2bc1dc:
    if (ctx->pc == 0x2BC1DCu) {
        ctx->pc = 0x2BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1D8u;
        // 0x2bc1dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1E0u;
        goto label_2bc1e0;
    }
    ctx->pc = 0x2BC1D8u;
    {
        const bool branch_taken_0x2bc1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1D8u;
        // 0x2bc1dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1d8) {
            ctx->pc = 0x2C01E0u;
            return;
        }
    }
    ctx->pc = 0x2BC1E0u;
label_2bc1e0:
    // 0x2bc1e0: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2bc1e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2bc1e4:
    // 0x2bc1e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1e8:
    // 0x2bc1e8: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2bc1e8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2bc1ec:
    // 0x2bc1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1f0:
    // 0x2bc1f0: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2bc1f0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2bc1f4:
    // 0x2bc1f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1f8:
    // 0x2bc1f8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bc1fc:
    if (ctx->pc == 0x2BC1FCu) {
        ctx->pc = 0x2BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F8u;
        // 0x2bc1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC200u;
        goto label_2bc200;
    }
    ctx->pc = 0x2BC1F8u;
    {
        const bool branch_taken_0x2bc1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F8u;
        // 0x2bc1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1f8) {
            ctx->pc = 0x2BE200u;
            { ctx->pc = 0x2be200; return; }
        }
    }
    ctx->pc = 0x2BC200u;
label_2bc200:
    // 0x2bc200: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bc204:
    if (ctx->pc == 0x2BC204u) {
        ctx->pc = 0x2BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC200u;
        // 0x2bc204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC208u;
        goto label_2bc208;
    }
    ctx->pc = 0x2BC200u;
    {
        const bool branch_taken_0x2bc200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC200u;
        // 0x2bc204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc200) {
            ctx->pc = 0x2C2284u;
            return;
        }
    }
    ctx->pc = 0x2BC208u;
label_2bc208:
    // 0x2bc208: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bc20c:
    if (ctx->pc == 0x2BC20Cu) {
        ctx->pc = 0x2BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC208u;
        // 0x2bc20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC210u;
        goto label_2bc210;
    }
    ctx->pc = 0x2BC208u;
    {
        const bool branch_taken_0x2bc208 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC208u;
        // 0x2bc20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc208) {
            ctx->pc = 0x2D2208u;
            return;
        }
    }
    ctx->pc = 0x2BC210u;
label_2bc210:
    // 0x2bc210: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bc214:
    if (ctx->pc == 0x2BC214u) {
        ctx->pc = 0x2BC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC210u;
        // 0x2bc214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC218u;
        goto label_2bc218;
    }
    ctx->pc = 0x2BC210u;
    {
        const bool branch_taken_0x2bc210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC210u;
        // 0x2bc214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc210) {
            ctx->pc = 0x2D2218u;
            return;
        }
    }
    ctx->pc = 0x2BC218u;
label_2bc218:
    // 0x2bc218: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc218u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2bc21c:
    // 0x2bc21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc220:
    // 0x2bc220: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc220u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2bc224:
    // 0x2bc224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc228:
    // 0x2bc228: 0xb0b2800  j           func_C2CA000
label_2bc22c:
    if (ctx->pc == 0x2BC22Cu) {
        ctx->pc = 0x2BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC228u;
        // 0x2bc22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC230u;
        goto label_2bc230;
    }
    ctx->pc = 0x2BC228u;
    ctx->pc = 0x2BC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC228u;
    // 0x2bc22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BC228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC230u;
label_2bc230:
    // 0x2bc230: 0xb0b3000  j           func_C2CC000
label_2bc234:
    if (ctx->pc == 0x2BC234u) {
        ctx->pc = 0x2BC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC230u;
        // 0x2bc234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC238u;
        goto label_2bc238;
    }
    ctx->pc = 0x2BC230u;
    ctx->pc = 0x2BC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC230u;
    // 0x2bc234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BC230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC238u;
label_2bc238:
    // 0x2bc238: 0x42010780  .word       0x42010780                   # INVALID     $s0, $at, 0x780 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bc238u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BC238 raw=0x42010780"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc23c:
    // 0x2bc23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc240:
    // 0x2bc240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc244:
    // 0x2bc244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc248:
    // 0x2bc248: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc248u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc24c:
    // 0x2bc24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc250:
    // 0x2bc250: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc254:
    // 0x2bc254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc258:
    // 0x2bc258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc25c:
    // 0x2bc25c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc25cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc260:
    // 0x2bc260: 0xa231000  j           func_88C4000
label_2bc264:
    if (ctx->pc == 0x2BC264u) {
        ctx->pc = 0x2BC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC260u;
        // 0x2bc264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC268u;
        goto label_2bc268;
    }
    ctx->pc = 0x2BC260u;
    ctx->pc = 0x2BC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC260u;
    // 0x2bc264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88C4000u, 0x2BC260u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC268u;
label_2bc268:
    // 0x2bc268: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2bc26c:
    // 0x2bc26c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc26cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc270:
    // 0x2bc270: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2bc274:
    if (ctx->pc == 0x2BC274u) {
        ctx->pc = 0x2BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC270u;
        // 0x2bc274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC278u;
        goto label_2bc278;
    }
    ctx->pc = 0x2BC270u;
    {
        const bool branch_taken_0x2bc270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC270u;
        // 0x2bc274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc270) {
            ctx->pc = 0x2C0288u;
            return;
        }
    }
    ctx->pc = 0x2BC278u;
label_2bc278:
    // 0x2bc278: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc27c:
    // 0x2bc27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc280:
    // 0x2bc280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc284:
    // 0x2bc284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc288:
    // 0x2bc288: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2bc288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2bc28c:
    // 0x2bc28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc290:
    // 0x2bc290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc294:
    // 0x2bc294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc298:
    // 0x2bc298: 0x120e700c  beq         $s0, $t6, . + 4 + (0x700C << 2)
label_2bc29c:
    if (ctx->pc == 0x2BC29Cu) {
        ctx->pc = 0x2BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC298u;
        // 0x2bc29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2A0u;
        goto label_2bc2a0;
    }
    ctx->pc = 0x2BC298u;
    {
        const bool branch_taken_0x2bc298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC298u;
        // 0x2bc29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc298) {
            ctx->pc = 0x2D82CCu;
            return;
        }
    }
    ctx->pc = 0x2BC2A0u;
label_2bc2a0:
    // 0x2bc2a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2a4:
    // 0x2bc2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2a8:
    // 0x2bc2a8: 0x5a0077a7  blezl       $s0, . + 4 + (0x77A7 << 2)
label_2bc2ac:
    if (ctx->pc == 0x2BC2ACu) {
        ctx->pc = 0x2BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2A8u;
        // 0x2bc2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2B0u;
        goto label_2bc2b0;
    }
    ctx->pc = 0x2BC2A8u;
    {
        const bool branch_taken_0x2bc2a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc2a8) {
            ctx->pc = 0x2BC2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC2A8u;
            // 0x2bc2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA148u;
            return;
        }
    }
    ctx->pc = 0x2BC2B0u;
label_2bc2b0:
    // 0x2bc2b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2b4:
    // 0x2bc2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2b8:
    // 0x2bc2b8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc2b8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc2bc:
    // 0x2bc2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2c0:
    // 0x2bc2c0: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2bc2c4:
    if (ctx->pc == 0x2BC2C4u) {
        ctx->pc = 0x2BC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C0u;
        // 0x2bc2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2C8u;
        goto label_2bc2c8;
    }
    ctx->pc = 0x2BC2C0u;
    {
        const bool branch_taken_0x2bc2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C0u;
        // 0x2bc2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2c0) {
            ctx->pc = 0x2BE5ECu;
            { ctx->pc = 0x2be5ec; return; }
        }
    }
    ctx->pc = 0x2BC2C8u;
label_2bc2c8:
    // 0x2bc2c8: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2bc2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2bc2cc:
    // 0x2bc2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2d0:
    // 0x2bc2d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2d4:
    // 0x2bc2d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2d8:
    // 0x2bc2d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2dc:
    // 0x2bc2dc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc2dcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bc2e0:
    // 0x2bc2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2e4:
    // 0x2bc2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2e8:
    // 0x2bc2e8: 0x0  nop
    ctx->pc = 0x2bc2e8u;
    // NOP
label_2bc2ec:
    // 0x2bc2ec: 0x0  nop
    ctx->pc = 0x2bc2ecu;
    // NOP
label_2bc2f0:
    // 0x2bc2f0: 0x0  nop
    ctx->pc = 0x2bc2f0u;
    // NOP
label_2bc2f4:
    // 0x2bc2f4: 0x4af10000  vaddx.yzw   $vf0, $vf0, $vf17x
    ctx->pc = 0x2bc2f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2bc2f8:
    // 0x2bc2f8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc2fc:
    // 0x2bc2fc: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bc2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2bc300:
    // 0x2bc300: 0x848080a  j           func_1202028
label_2bc304:
    if (ctx->pc == 0x2BC304u) {
        ctx->pc = 0x2BC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC300u;
        // 0x2bc304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC308u;
        goto label_2bc308;
    }
    ctx->pc = 0x2BC300u;
    ctx->pc = 0x2BC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC300u;
    // 0x2bc304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2BC300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC308u;
label_2bc308:
    // 0x2bc308: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2bc30c:
    if (ctx->pc == 0x2BC30Cu) {
        ctx->pc = 0x2BC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC308u;
        // 0x2bc30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC310u;
        goto label_2bc310;
    }
    ctx->pc = 0x2BC308u;
    {
        const bool branch_taken_0x2bc308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC308u;
        // 0x2bc30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc308) {
            ctx->pc = 0x2BE634u;
            { ctx->pc = 0x2be634; return; }
        }
    }
    ctx->pc = 0x2BC310u;
label_2bc310:
    // 0x2bc310: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bc310u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc314:
    // 0x2bc314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc318:
    // 0x2bc318: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bc318u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc31c:
    // 0x2bc31c: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc31cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2bc320:
    // 0x2bc320: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bc320u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc324:
    // 0x2bc324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc328:
    // 0x2bc328: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc32c:
    // 0x2bc32c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc32cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc330:
    // 0x2bc330: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bc330u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc334:
    // 0x2bc334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc338:
    // 0x2bc338: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2bc338u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2bc33c:
    // 0x2bc33c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc33cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc340:
    // 0x2bc340: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bc340u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc344:
    // 0x2bc344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc348:
    // 0x2bc348: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2bc348u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bc34c:
    // 0x2bc34c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc350:
    // 0x2bc350: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2bc350u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bc354:
    // 0x2bc354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc358:
    // 0x2bc358: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2bc358u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bc35c:
    // 0x2bc35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc360:
    // 0x2bc360: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2bc360u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bc364:
    // 0x2bc364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc368:
    // 0x2bc368: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bc368u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc36c:
    // 0x2bc36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc370:
    // 0x2bc370: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bc370u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc374:
    // 0x2bc374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc378:
    // 0x2bc378: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bc378u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc37c:
    // 0x2bc37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc380:
    // 0x2bc380: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bc380u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc384:
    // 0x2bc384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc388:
    // 0x2bc388: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bc388u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc38c:
    // 0x2bc38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc390:
    // 0x2bc390: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bc390u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc394:
    // 0x2bc394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc398:
    // 0x2bc398: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2bc398u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bc39c:
    // 0x2bc39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3a0:
    // 0x2bc3a0: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2bc3a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bc3a4:
    // 0x2bc3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3a8:
    // 0x2bc3a8: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2bc3a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bc3ac:
    // 0x2bc3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3b0:
    // 0x2bc3b0: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2bc3b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bc3b4:
    // 0x2bc3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3b8:
    // 0x2bc3b8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bc3bc:
    if (ctx->pc == 0x2BC3BCu) {
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B8u;
        // 0x2bc3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3C0u;
        goto label_2bc3c0;
    }
    ctx->pc = 0x2BC3B8u;
    {
        const bool branch_taken_0x2bc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B8u;
        // 0x2bc3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3b8) {
            ctx->pc = 0x2BE3C0u;
            { ctx->pc = 0x2be3c0; return; }
        }
    }
    ctx->pc = 0x2BC3C0u;
label_2bc3c0:
    // 0x2bc3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc3c4:
    // 0x2bc3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3c8:
    // 0x2bc3c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc3c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc3cc:
    // 0x2bc3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3d0:
    // 0x2bc3d0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc3d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc3d4:
    // 0x2bc3d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3d8:
    // 0x2bc3d8: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2bc3dc:
    if (ctx->pc == 0x2BC3DCu) {
        ctx->pc = 0x2BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3D8u;
        // 0x2bc3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3E0u;
        goto label_2bc3e0;
    }
    ctx->pc = 0x2BC3D8u;
    {
        const bool branch_taken_0x2bc3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3D8u;
        // 0x2bc3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3d8) {
            ctx->pc = 0x2BC3DCu;
            goto label_2bc3dc;
        }
    }
    ctx->pc = 0x2BC3E0u;
label_2bc3e0:
    // 0x2bc3e0: 0xa8e100a  j           func_A384028
label_2bc3e4:
    if (ctx->pc == 0x2BC3E4u) {
        ctx->pc = 0x2BC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E0u;
        // 0x2bc3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3E8u;
        goto label_2bc3e8;
    }
    ctx->pc = 0x2BC3E0u;
    ctx->pc = 0x2BC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3E0u;
    // 0x2bc3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384028u, 0x2BC3E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC3E8u;
label_2bc3e8:
    // 0x2bc3e8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bc3ec:
    if (ctx->pc == 0x2BC3ECu) {
        ctx->pc = 0x2BC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E8u;
        // 0x2bc3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3F0u;
        goto label_2bc3f0;
    }
    ctx->pc = 0x2BC3E8u;
    {
        const bool branch_taken_0x2bc3e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E8u;
        // 0x2bc3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3e8) {
            ctx->pc = 0x2BE3E8u;
            { ctx->pc = 0x2be3e8; return; }
        }
    }
    ctx->pc = 0x2BC3F0u;
label_2bc3f0:
    // 0x2bc3f0: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2bc3f4:
    if (ctx->pc == 0x2BC3F4u) {
        ctx->pc = 0x2BC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F0u;
        // 0x2bc3f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3F8u;
        goto label_2bc3f8;
    }
    ctx->pc = 0x2BC3F0u;
    {
        const bool branch_taken_0x2bc3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F0u;
        // 0x2bc3f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3f0) {
            ctx->pc = 0x2D2408u;
            return;
        }
    }
    ctx->pc = 0x2BC3F8u;
label_2bc3f8:
    // 0x2bc3f8: 0xb0b1000  j           func_C2C4000
label_2bc3fc:
    if (ctx->pc == 0x2BC3FCu) {
        ctx->pc = 0x2BC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F8u;
        // 0x2bc3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC400u;
        goto label_2bc400;
    }
    ctx->pc = 0x2BC3F8u;
    ctx->pc = 0x2BC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3F8u;
    // 0x2bc3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BC3F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC400u;
label_2bc400:
    // 0x2bc400: 0xb0b1005  j           func_C2C4014
label_2bc404:
    if (ctx->pc == 0x2BC404u) {
        ctx->pc = 0x2BC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC400u;
        // 0x2bc404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC408u;
        goto label_2bc408;
    }
    ctx->pc = 0x2BC400u;
    ctx->pc = 0x2BC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC400u;
    // 0x2bc404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4014u, 0x2BC400u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC408u;
label_2bc408:
    // 0x2bc408: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc408u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC408 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc40c:
    // 0x2bc40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc410:
    // 0x2bc410: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2bc414:
    if (ctx->pc == 0x2BC414u) {
        ctx->pc = 0x2BC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC410u;
        // 0x2bc414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC418u;
        goto label_2bc418;
    }
    ctx->pc = 0x2BC410u;
    {
        const bool branch_taken_0x2bc410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC410u;
        // 0x2bc414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc410) {
            ctx->pc = 0x2BC6ACu;
            goto label_2bc6ac;
        }
    }
    ctx->pc = 0x2BC418u;
label_2bc418:
    // 0x2bc418: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bc41c:
    if (ctx->pc == 0x2BC41Cu) {
        ctx->pc = 0x2BC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC418u;
        // 0x2bc41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC420u;
        goto label_2bc420;
    }
    ctx->pc = 0x2BC418u;
    {
        const bool branch_taken_0x2bc418 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC418u;
        // 0x2bc41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc418) {
            ctx->pc = 0x2BE418u;
            { ctx->pc = 0x2be418; return; }
        }
    }
    ctx->pc = 0x2BC420u;
label_2bc420:
    // 0x2bc420: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bc424:
    if (ctx->pc == 0x2BC424u) {
        ctx->pc = 0x2BC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC420u;
        // 0x2bc424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC428u;
        goto label_2bc428;
    }
    ctx->pc = 0x2BC420u;
    {
        const bool branch_taken_0x2bc420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC420u;
        // 0x2bc424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc420) {
            ctx->pc = 0x2D2428u;
            return;
        }
    }
    ctx->pc = 0x2BC428u;
label_2bc428:
    // 0x2bc428: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc428u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bc42c:
    // 0x2bc42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc430:
    // 0x2bc430: 0xb0b1000  j           func_C2C4000
label_2bc434:
    if (ctx->pc == 0x2BC434u) {
        ctx->pc = 0x2BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC430u;
        // 0x2bc434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC438u;
        goto label_2bc438;
    }
    ctx->pc = 0x2BC430u;
    ctx->pc = 0x2BC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC430u;
    // 0x2bc434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BC430u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC438u;
label_2bc438:
    // 0x2bc438: 0x90c3000  j           func_430C000
label_2bc43c:
    if (ctx->pc == 0x2BC43Cu) {
        ctx->pc = 0x2BC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC438u;
        // 0x2bc43c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC440u;
        goto label_2bc440;
    }
    ctx->pc = 0x2BC438u;
    ctx->pc = 0x2BC43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC438u;
    // 0x2bc43c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BC438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC440u;
label_2bc440:
    // 0x2bc440: 0x82e3000  j           func_B8C000
label_2bc444:
    if (ctx->pc == 0x2BC444u) {
        ctx->pc = 0x2BC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC440u;
        // 0x2bc444: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC448u;
        goto label_2bc448;
    }
    ctx->pc = 0x2BC440u;
    ctx->pc = 0x2BC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC440u;
    // 0x2bc444: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BC440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC448u;
label_2bc448:
    // 0x2bc448: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bc44c:
    if (ctx->pc == 0x2BC44Cu) {
        ctx->pc = 0x2BC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC448u;
        // 0x2bc44c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC450u;
        goto label_2bc450;
    }
    ctx->pc = 0x2BC448u;
    {
        const bool branch_taken_0x2bc448 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC448u;
        // 0x2bc44c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc448) {
            ctx->pc = 0x2BE448u;
            { ctx->pc = 0x2be448; return; }
        }
    }
    ctx->pc = 0x2BC450u;
label_2bc450:
    // 0x2bc450: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2bc454:
    if (ctx->pc == 0x2BC454u) {
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC458u;
        goto label_2bc458;
    }
    ctx->pc = 0x2BC450u;
    {
        const bool branch_taken_0x2bc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc450) {
            ctx->pc = 0x2C8458u;
            return;
        }
    }
    ctx->pc = 0x2BC458u;
label_2bc458:
    // 0x2bc458: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2bc45c:
    if (ctx->pc == 0x2BC45Cu) {
        ctx->pc = 0x2BC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC458u;
        // 0x2bc45c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC460u;
        goto label_2bc460;
    }
    ctx->pc = 0x2BC458u;
    {
        const bool branch_taken_0x2bc458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC458u;
        // 0x2bc45c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc458) {
            ctx->pc = 0x2BC464u;
            goto label_2bc464;
        }
    }
    ctx->pc = 0x2BC460u;
label_2bc460:
    // 0x2bc460: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2bc460u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2bc464:
    // 0x2bc464: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bc464u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2bc468:
    // 0x2bc468: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2bc468u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2bc46c:
    // 0x2bc46c: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bc46cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2bc470:
    // 0x2bc470: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2bc474:
    if (ctx->pc == 0x2BC474u) {
        ctx->pc = 0x2BC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC470u;
        // 0x2bc474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC478u;
        goto label_2bc478;
    }
    ctx->pc = 0x2BC470u;
    {
        const bool branch_taken_0x2bc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc470) {
            ctx->pc = 0x2BC474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC470u;
            // 0x2bc474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC47Cu;
            goto label_2bc47c;
        }
    }
    ctx->pc = 0x2BC478u;
label_2bc478:
    // 0x2bc478: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2bc478u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2bc47c:
    // 0x2bc47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc480:
    // 0x2bc480: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2bc484:
    if (ctx->pc == 0x2BC484u) {
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC480u;
        // 0x2bc484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC488u;
        goto label_2bc488;
    }
    ctx->pc = 0x2BC480u;
    {
        const bool branch_taken_0x2bc480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC480u;
        // 0x2bc484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc480) {
            ctx->pc = 0x2BC490u;
            goto label_2bc490;
        }
    }
    ctx->pc = 0x2BC488u;
label_2bc488:
    // 0x2bc488: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2bc488u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2bc48c:
    // 0x2bc48c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc490:
    // 0x2bc490: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2bc490u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2bc494:
    // 0x2bc494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc498:
    // 0x2bc498: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2bc49c:
    // 0x2bc49c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc49cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4a0:
    // 0x2bc4a0: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2bc4a0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2bc4a4:
    // 0x2bc4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4a8:
    // 0x2bc4a8: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2bc4a8u;
    // NOP (addi to $zero)
label_2bc4ac:
    // 0x2bc4ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4b0:
    // 0x2bc4b0: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2bc4b0u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2bc4b4:
    // 0x2bc4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4b8:
    // 0x2bc4b8: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bc4b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc4bc:
    // 0x2bc4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4c0:
    // 0x2bc4c0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc4c0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc4c4:
    // 0x2bc4c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4c8:
    // 0x2bc4c8: 0xa48080a  j           func_9202028
label_2bc4cc:
    if (ctx->pc == 0x2BC4CCu) {
        ctx->pc = 0x2BC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4C8u;
        // 0x2bc4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4D0u;
        goto label_2bc4d0;
    }
    ctx->pc = 0x2BC4C8u;
    ctx->pc = 0x2BC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4C8u;
    // 0x2bc4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2BC4C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC4D0u;
label_2bc4d0:
    // 0x2bc4d0: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bc4d0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc4d4:
    // 0x2bc4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4d8:
    // 0x2bc4d8: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2bc4d8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2bc4dc:
    // 0x2bc4dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4e0:
    // 0x2bc4e0: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2bc4e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2bc4e4:
    // 0x2bc4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4e8:
    // 0x2bc4e8: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2bc4e8u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2bc4ec:
    // 0x2bc4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4f0:
    // 0x2bc4f0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bc4f0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bc4f4:
    // 0x2bc4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4f8:
    // 0x2bc4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc4fc:
    // 0x2bc4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc500:
    // 0x2bc500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc504:
    // 0x2bc504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc508:
    // 0x2bc508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc50c:
    // 0x2bc50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc510:
    // 0x2bc510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc514:
    // 0x2bc514: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bc518:
    // 0x2bc518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc51c:
    // 0x2bc51c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc51cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC51C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc520:
    // 0x2bc520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc524:
    // 0x2bc524: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bc528:
    // 0x2bc528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc52c:
    // 0x2bc52c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc52cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2bc530:
    // 0x2bc530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc534:
    // 0x2bc534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc538:
    // 0x2bc538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc53c:
    // 0x2bc53c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc53cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc540:
    // 0x2bc540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc544:
    // 0x2bc544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc548:
    // 0x2bc548: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2bc548u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bc54c:
    // 0x2bc54c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc54cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc550:
    // 0x2bc550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc554:
    // 0x2bc554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc558:
    // 0x2bc558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc55c:
    // 0x2bc55c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc55cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc560:
    // 0x2bc560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc564:
    // 0x2bc564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc568:
    // 0x2bc568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc56c:
    // 0x2bc56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc570:
    // 0x2bc570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc574:
    // 0x2bc574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc578:
    // 0x2bc578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc57c:
    // 0x2bc57c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc57cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bc580:
    // 0x2bc580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc584:
    // 0x2bc584: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc584u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bc588:
    // 0x2bc588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc58c:
    // 0x2bc58c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc58cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BC58C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc590:
    // 0x2bc590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc594:
    // 0x2bc594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc598:
    // 0x2bc598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc59c:
    // 0x2bc59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5a0:
    // 0x2bc5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5a4:
    // 0x2bc5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5a8:
    // 0x2bc5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5ac:
    // 0x2bc5ac: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc5acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BC5AC raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc5b0:
    // 0x2bc5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5b4:
    // 0x2bc5b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5b8:
    // 0x2bc5b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5bc:
    // 0x2bc5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5c0:
    // 0x2bc5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5c4:
    // 0x2bc5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5c8:
    // 0x2bc5c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5cc:
    // 0x2bc5cc: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc5ccu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2bc5d0:
    // 0x2bc5d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5d4:
    // 0x2bc5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5d8:
    // 0x2bc5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5dc:
    // 0x2bc5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5e0:
    // 0x2bc5e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5e4:
    // 0x2bc5e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5e8:
    // 0x2bc5e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5ec:
    // 0x2bc5ec: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc5ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC5EC raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc5f0:
    // 0x2bc5f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5f4:
    // 0x2bc5f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc5f8:
    // 0x2bc5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc5fc:
    // 0x2bc5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc600:
    // 0x2bc600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc604:
    // 0x2bc604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc608:
    // 0x2bc608: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc608u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2bc60c:
    // 0x2bc60c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc60cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc610:
    // 0x2bc610: 0x3e8d002  .word       0x03E8D002                   # srl         $k0, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc610u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bc614:
    // 0x2bc614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc618:
    // 0x2bc618: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2bc618u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2bc61c:
    // 0x2bc61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc620:
    // 0x2bc620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc624:
    // 0x2bc624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc628:
    // 0x2bc628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc62c:
    // 0x2bc62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc630:
    // 0x2bc630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc634:
    // 0x2bc634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc638:
    // 0x2bc638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc63c:
    // 0x2bc63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc640:
    // 0x2bc640: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc644:
    // 0x2bc644: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc644u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2bc648:
    // 0x2bc648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc64c:
    // 0x2bc64c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc64cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc650:
    // 0x2bc650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc654:
    // 0x2bc654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc658:
    // 0x2bc658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc65c:
    // 0x2bc65c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc65cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc660:
    // 0x2bc660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc664:
    // 0x2bc664: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BC664 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc668:
    // 0x2bc668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc66c:
    // 0x2bc66c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc66cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc670:
    // 0x2bc670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc674:
    // 0x2bc674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc678:
    // 0x2bc678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc67c:
    // 0x2bc67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc680:
    // 0x2bc680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc684:
    // 0x2bc684: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc684u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2bc688:
    // 0x2bc688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc68c:
    // 0x2bc68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc690:
    // 0x2bc690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc694:
    // 0x2bc694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc698:
    // 0x2bc698: 0x2275001  .word       0x02275001                   # INVALID     $s1, $a3, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC698 raw=0x02275001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc69c:
    // 0x2bc69c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc69cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6a0:
    // 0x2bc6a0: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC6A0 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6a4:
    // 0x2bc6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6a8:
    // 0x2bc6a8: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC6A8 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6ac:
    // 0x2bc6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6b0:
    // 0x2bc6b0: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2bc6b0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bc6b4:
    // 0x2bc6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6b8:
    // 0x2bc6b8: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2bc6b8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bc6bc:
    // 0x2bc6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6c0:
    // 0x2bc6c0: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2bc6c0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2bc6c4:
    // 0x2bc6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6c8:
    // 0x2bc6c8: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2bc6c8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2bc6cc:
    // 0x2bc6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6d0:
    // 0x2bc6d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6d4:
    // 0x2bc6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6d8:
    // 0x2bc6d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6dc:
    // 0x2bc6dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6e0:
    // 0x2bc6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6e4:
    // 0x2bc6e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc6e8:
    // 0x2bc6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6ec:
    // 0x2bc6ec: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BC6EC raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6f0:
    // 0x2bc6f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6f4:
    // 0x2bc6f4: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc6f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BC6F4 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc6f8:
    // 0x2bc6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc6fc:
    // 0x2bc6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc700:
    // 0x2bc700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc704:
    // 0x2bc704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc708:
    // 0x2bc708: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc708u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bc70c:
    // 0x2bc70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc710:
    // 0x2bc710: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc710u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bc714:
    // 0x2bc714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc718:
    // 0x2bc718: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2bc718u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2bc71c:
    // 0x2bc71c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc71cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2bc720:
    // 0x2bc720: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2bc720u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2bc724:
    // 0x2bc724: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC724 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc728:
    // 0x2bc728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc72c:
    // 0x2bc72c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc72cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2bc730:
    // 0x2bc730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc734:
    // 0x2bc734: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc734u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2bc738:
    // 0x2bc738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc73c:
    // 0x2bc73c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc73cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc740:
    // 0x2bc740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc744:
    // 0x2bc744: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc744u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2bc748:
    // 0x2bc748: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2bc748u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2bc74c:
    // 0x2bc74c: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc74cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bc750:
    // 0x2bc750: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bc750u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bc754:
    // 0x2bc754: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc754u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2bc758:
    // 0x2bc758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc75c:
    // 0x2bc75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc760:
    // 0x2bc760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc764:
    // 0x2bc764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc768:
    // 0x2bc768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc76c:
    // 0x2bc76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc770:
    // 0x2bc770: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2bc770u;
    // NOP (addiu $zero, ...)
label_2bc774:
    // 0x2bc774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc778:
    // 0x2bc778: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2bc778u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2bc77c:
    // 0x2bc77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc780:
    // 0x2bc780: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2bc784:
    // 0x2bc784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc788:
    // 0x2bc788: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2bc78c:
    if (ctx->pc == 0x2BC78Cu) {
        ctx->pc = 0x2BC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC788u;
        // 0x2bc78c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC790u;
        goto label_2bc790;
    }
    ctx->pc = 0x2BC788u;
    {
        const bool branch_taken_0x2bc788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC788u;
        // 0x2bc78c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc788) {
            ctx->pc = 0x2CC798u;
            return;
        }
    }
    ctx->pc = 0x2BC790u;
label_2bc790:
    // 0x2bc790: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2bc794:
    if (ctx->pc == 0x2BC794u) {
        ctx->pc = 0x2BC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC790u;
        // 0x2bc794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC798u;
        goto label_2bc798;
    }
    ctx->pc = 0x2BC790u;
    {
        const bool branch_taken_0x2bc790 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc790) {
            ctx->pc = 0x2BC794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC790u;
            // 0x2bc794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67ACu;
            return;
        }
    }
    ctx->pc = 0x2BC798u;
label_2bc798:
    // 0x2bc798: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bc79c:
    if (ctx->pc == 0x2BC79Cu) {
        ctx->pc = 0x2BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC798u;
        // 0x2bc79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7A0u;
        goto label_2bc7a0;
    }
    ctx->pc = 0x2BC798u;
    {
        const bool branch_taken_0x2bc798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC798u;
        // 0x2bc79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc798) {
            ctx->pc = 0x2CA7A8u;
            return;
        }
    }
    ctx->pc = 0x2BC7A0u;
label_2bc7a0:
    // 0x2bc7a0: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2bc7a0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2bc7a4:
    // 0x2bc7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7a8:
    // 0x2bc7a8: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2bc7a8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2bc7ac:
    // 0x2bc7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7b0:
    // 0x2bc7b0: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2bc7b0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2bc7b4:
    // 0x2bc7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7b8:
    // 0x2bc7b8: 0x5a00481b  blezl       $s0, . + 4 + (0x481B << 2)
label_2bc7bc:
    if (ctx->pc == 0x2BC7BCu) {
        ctx->pc = 0x2BC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7B8u;
        // 0x2bc7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7C0u;
        goto label_2bc7c0;
    }
    ctx->pc = 0x2BC7B8u;
    {
        const bool branch_taken_0x2bc7b8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc7b8) {
            ctx->pc = 0x2BC7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC7B8u;
            // 0x2bc7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE828u;
            return;
        }
    }
    ctx->pc = 0x2BC7C0u;
label_2bc7c0:
    // 0x2bc7c0: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2bc7c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2bc7c4:
    // 0x2bc7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7c8:
    // 0x2bc7c8: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2bc7c8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2bc7cc:
    // 0x2bc7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7d0:
    // 0x2bc7d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc7d4:
    // 0x2bc7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7d8:
    // 0x2bc7d8: 0x520c07a2  beql        $s0, $t4, . + 4 + (0x7A2 << 2)
label_2bc7dc:
    if (ctx->pc == 0x2BC7DCu) {
        ctx->pc = 0x2BC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7D8u;
        // 0x2bc7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7E0u;
        goto label_2bc7e0;
    }
    ctx->pc = 0x2BC7D8u;
    {
        const bool branch_taken_0x2bc7d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bc7d8) {
            ctx->pc = 0x2BC7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC7D8u;
            // 0x2bc7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE664u;
            { ctx->pc = 0x2be664; return; }
        }
    }
    ctx->pc = 0x2BC7E0u;
label_2bc7e0:
    // 0x2bc7e0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc7e0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc7e4:
    // 0x2bc7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc7e8:
    // 0x2bc7e8: 0x904100a  j           func_4104028
label_2bc7ec:
    if (ctx->pc == 0x2BC7ECu) {
        ctx->pc = 0x2BC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7E8u;
        // 0x2bc7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7F0u;
        goto label_2bc7f0;
    }
    ctx->pc = 0x2BC7E8u;
    ctx->pc = 0x2BC7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7E8u;
    // 0x2bc7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2BC7E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC7F0u;
label_2bc7f0:
    // 0x2bc7f0: 0x841100a  j           func_1044028
label_2bc7f4:
    if (ctx->pc == 0x2BC7F4u) {
        ctx->pc = 0x2BC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7F0u;
        // 0x2bc7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7F8u;
        goto label_2bc7f8;
    }
    ctx->pc = 0x2BC7F0u;
    ctx->pc = 0x2BC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7F0u;
    // 0x2bc7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2BC7F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC7F8u;
label_2bc7f8:
    // 0x2bc7f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc7f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc7fc:
    // 0x2bc7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc800:
    // 0x2bc800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc804:
    // 0x2bc804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc808:
    // 0x2bc808: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bc80c:
    if (ctx->pc == 0x2BC80Cu) {
        ctx->pc = 0x2BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC808u;
        // 0x2bc80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC810u;
        goto label_2bc810;
    }
    ctx->pc = 0x2BC808u;
    {
        const bool branch_taken_0x2bc808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC808u;
        // 0x2bc80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc808) {
            ctx->pc = 0x2C4810u;
            return;
        }
    }
    ctx->pc = 0x2BC810u;
label_2bc810:
    // 0x2bc810: 0xb04100a  j           func_C104028
label_2bc814:
    if (ctx->pc == 0x2BC814u) {
        ctx->pc = 0x2BC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC810u;
        // 0x2bc814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC818u;
        goto label_2bc818;
    }
    ctx->pc = 0x2BC810u;
    ctx->pc = 0x2BC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC810u;
    // 0x2bc814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2BC810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC818u;
label_2bc818:
    // 0x2bc818: 0x5a002783  blezl       $s0, . + 4 + (0x2783 << 2)
label_2bc81c:
    if (ctx->pc == 0x2BC81Cu) {
        ctx->pc = 0x2BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC818u;
        // 0x2bc81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC820u;
        goto label_2bc820;
    }
    ctx->pc = 0x2BC818u;
    {
        const bool branch_taken_0x2bc818 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc818) {
            ctx->pc = 0x2BC81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC818u;
            // 0x2bc81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6628u;
            return;
        }
    }
    ctx->pc = 0x2BC820u;
label_2bc820:
    // 0x2bc820: 0x9030800  j           func_40C2000
label_2bc824:
    if (ctx->pc == 0x2BC824u) {
        ctx->pc = 0x2BC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC820u;
        // 0x2bc824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC828u;
        goto label_2bc828;
    }
    ctx->pc = 0x2BC820u;
    ctx->pc = 0x2BC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC820u;
    // 0x2bc824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2BC820u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC828u;
label_2bc828:
    // 0x2bc828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc82c:
    // 0x2bc82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc830:
    // 0x2bc830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc834:
    // 0x2bc834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc838:
    // 0x2bc838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc83c:
    // 0x2bc83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc840:
    // 0x2bc840: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2bc844:
    if (ctx->pc == 0x2BC844u) {
        ctx->pc = 0x2BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC840u;
        // 0x2bc844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC848u;
        goto label_2bc848;
    }
    ctx->pc = 0x2BC840u;
    {
        const bool branch_taken_0x2bc840 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC840u;
        // 0x2bc844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc840) {
            ctx->pc = 0x2C4840u;
            return;
        }
    }
    ctx->pc = 0x2BC848u;
label_2bc848:
    // 0x2bc848: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2bc848u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2bc84c:
    // 0x2bc84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc850:
    // 0x2bc850: 0xb0b0800  j           func_C2C2000
label_2bc854:
    if (ctx->pc == 0x2BC854u) {
        ctx->pc = 0x2BC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC850u;
        // 0x2bc854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC858u;
        goto label_2bc858;
    }
    ctx->pc = 0x2BC850u;
    ctx->pc = 0x2BC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC850u;
    // 0x2bc854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2000u, 0x2BC850u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC858u;
label_2bc858:
    // 0x2bc858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc85c:
    // 0x2bc85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc860:
    // 0x2bc860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc864:
    // 0x2bc864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc868:
    // 0x2bc868: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2bc86c:
    if (ctx->pc == 0x2BC86Cu) {
        ctx->pc = 0x2BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC868u;
        // 0x2bc86c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC870u;
        goto label_2bc870;
    }
    ctx->pc = 0x2BC868u;
    {
        const bool branch_taken_0x2bc868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC868u;
        // 0x2bc86c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc868) {
            ctx->pc = 0x2C0B94u;
            return;
        }
    }
    ctx->pc = 0x2BC870u;
label_2bc870:
    // 0x2bc870: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc874:
    // 0x2bc874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc878:
    // 0x2bc878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc87c:
    // 0x2bc87c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc87cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bc880:
    // 0x2bc880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc884:
    // 0x2bc884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc888:
    // 0x2bc888: 0x4000074d  .word       0x4000074D                   # mfc0        $zero, Index # 0000074D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc888u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bc88c:
    // 0x2bc88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc890:
    // 0x2bc890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc894:
    // 0x2bc894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc898:
    // 0x2bc898: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc898u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc89c:
    // 0x2bc89c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc89cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8a0:
    // 0x2bc8a0: 0x88e080a  j           func_2382028
label_2bc8a4:
    if (ctx->pc == 0x2BC8A4u) {
        ctx->pc = 0x2BC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8A0u;
        // 0x2bc8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8A8u;
        goto label_2bc8a8;
    }
    ctx->pc = 0x2BC8A0u;
    ctx->pc = 0x2BC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8A0u;
    // 0x2bc8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382028u, 0x2BC8A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC8A8u;
label_2bc8a8:
    // 0x2bc8a8: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2bc8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2bc8ac:
    // 0x2bc8ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8b0:
    // 0x2bc8b0: 0x52010033  beql        $s0, $at, . + 4 + (0x33 << 2)
label_2bc8b4:
    if (ctx->pc == 0x2BC8B4u) {
        ctx->pc = 0x2BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B0u;
        // 0x2bc8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8B8u;
        goto label_2bc8b8;
    }
    ctx->pc = 0x2BC8B0u;
    {
        const bool branch_taken_0x2bc8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8b0) {
            ctx->pc = 0x2BC8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8B0u;
            // 0x2bc8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC980u;
            { ctx->pc = 0x2bc980; return; }
        }
    }
    ctx->pc = 0x2BC8B8u;
label_2bc8b8:
    // 0x2bc8b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc8b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc8bc:
    // 0x2bc8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8c0:
    // 0x2bc8c0: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2bc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2bc8c4:
    // 0x2bc8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8c8:
    // 0x2bc8c8: 0x52010030  beql        $s0, $at, . + 4 + (0x30 << 2)
label_2bc8cc:
    if (ctx->pc == 0x2BC8CCu) {
        ctx->pc = 0x2BC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8C8u;
        // 0x2bc8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8D0u;
        goto label_2bc8d0;
    }
    ctx->pc = 0x2BC8C8u;
    {
        const bool branch_taken_0x2bc8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8c8) {
            ctx->pc = 0x2BC8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8C8u;
            // 0x2bc8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC98Cu;
            { ctx->pc = 0x2bc98c; return; }
        }
    }
    ctx->pc = 0x2BC8D0u;
label_2bc8d0:
    // 0x2bc8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc8d4:
    // 0x2bc8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8d8:
    // 0x2bc8d8: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2bc8dc:
    // 0x2bc8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8e0:
    // 0x2bc8e0: 0x5201002d  beql        $s0, $at, . + 4 + (0x2D << 2)
label_2bc8e4:
    if (ctx->pc == 0x2BC8E4u) {
        ctx->pc = 0x2BC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8E0u;
        // 0x2bc8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8E8u;
        goto label_2bc8e8;
    }
    ctx->pc = 0x2BC8E0u;
    {
        const bool branch_taken_0x2bc8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8e0) {
            ctx->pc = 0x2BC8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8E0u;
            // 0x2bc8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC998u;
            { ctx->pc = 0x2bc998; return; }
        }
    }
    ctx->pc = 0x2BC8E8u;
label_2bc8e8:
    // 0x2bc8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc8ec:
    // 0x2bc8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bc8f0u;
    return;
}

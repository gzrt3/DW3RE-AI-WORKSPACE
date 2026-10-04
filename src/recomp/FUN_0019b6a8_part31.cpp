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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part31(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        case 0x1aa128u: goto label_1aa128;
        case 0x1aa12cu: goto label_1aa12c;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa134u: goto label_1aa134;
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa13cu: goto label_1aa13c;
        case 0x1aa140u: goto label_1aa140;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa148u: goto label_1aa148;
        case 0x1aa14cu: goto label_1aa14c;
        case 0x1aa150u: goto label_1aa150;
        case 0x1aa154u: goto label_1aa154;
        case 0x1aa158u: goto label_1aa158;
        case 0x1aa15cu: goto label_1aa15c;
        case 0x1aa160u: goto label_1aa160;
        case 0x1aa164u: goto label_1aa164;
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa174u: goto label_1aa174;
        case 0x1aa178u: goto label_1aa178;
        case 0x1aa17cu: goto label_1aa17c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa184u: goto label_1aa184;
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa18cu: goto label_1aa18c;
        case 0x1aa190u: goto label_1aa190;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa198u: goto label_1aa198;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1a8u: goto label_1aa1a8;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1b0u: goto label_1aa1b0;
        case 0x1aa1b4u: goto label_1aa1b4;
        case 0x1aa1b8u: goto label_1aa1b8;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1c0u: goto label_1aa1c0;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1c8u: goto label_1aa1c8;
        case 0x1aa1ccu: goto label_1aa1cc;
        case 0x1aa1d0u: goto label_1aa1d0;
        case 0x1aa1d4u: goto label_1aa1d4;
        case 0x1aa1d8u: goto label_1aa1d8;
        case 0x1aa1dcu: goto label_1aa1dc;
        case 0x1aa1e0u: goto label_1aa1e0;
        case 0x1aa1e4u: goto label_1aa1e4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa1f0u: goto label_1aa1f0;
        case 0x1aa1f4u: goto label_1aa1f4;
        case 0x1aa1f8u: goto label_1aa1f8;
        case 0x1aa1fcu: goto label_1aa1fc;
        case 0x1aa200u: goto label_1aa200;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa208u: goto label_1aa208;
        case 0x1aa20cu: goto label_1aa20c;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa214u: goto label_1aa214;
        case 0x1aa218u: goto label_1aa218;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa220u: goto label_1aa220;
        case 0x1aa224u: goto label_1aa224;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa22cu: goto label_1aa22c;
        case 0x1aa230u: goto label_1aa230;
        case 0x1aa234u: goto label_1aa234;
        case 0x1aa238u: goto label_1aa238;
        case 0x1aa23cu: goto label_1aa23c;
        case 0x1aa240u: goto label_1aa240;
        case 0x1aa244u: goto label_1aa244;
        case 0x1aa248u: goto label_1aa248;
        case 0x1aa24cu: goto label_1aa24c;
        case 0x1aa250u: goto label_1aa250;
        case 0x1aa254u: goto label_1aa254;
        case 0x1aa258u: goto label_1aa258;
        case 0x1aa25cu: goto label_1aa25c;
        case 0x1aa260u: goto label_1aa260;
        case 0x1aa264u: goto label_1aa264;
        case 0x1aa268u: goto label_1aa268;
        case 0x1aa26cu: goto label_1aa26c;
        case 0x1aa270u: goto label_1aa270;
        case 0x1aa274u: goto label_1aa274;
        case 0x1aa278u: goto label_1aa278;
        case 0x1aa27cu: goto label_1aa27c;
        case 0x1aa280u: goto label_1aa280;
        case 0x1aa284u: goto label_1aa284;
        case 0x1aa288u: goto label_1aa288;
        case 0x1aa28cu: goto label_1aa28c;
        case 0x1aa290u: goto label_1aa290;
        case 0x1aa294u: goto label_1aa294;
        case 0x1aa298u: goto label_1aa298;
        case 0x1aa29cu: goto label_1aa29c;
        case 0x1aa2a0u: goto label_1aa2a0;
        case 0x1aa2a4u: goto label_1aa2a4;
        case 0x1aa2a8u: goto label_1aa2a8;
        case 0x1aa2acu: goto label_1aa2ac;
        case 0x1aa2b0u: goto label_1aa2b0;
        case 0x1aa2b4u: goto label_1aa2b4;
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2bcu: goto label_1aa2bc;
        case 0x1aa2c0u: goto label_1aa2c0;
        case 0x1aa2c4u: goto label_1aa2c4;
        case 0x1aa2c8u: goto label_1aa2c8;
        case 0x1aa2ccu: goto label_1aa2cc;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2d4u: goto label_1aa2d4;
        case 0x1aa2d8u: goto label_1aa2d8;
        case 0x1aa2dcu: goto label_1aa2dc;
        case 0x1aa2e0u: goto label_1aa2e0;
        case 0x1aa2e4u: goto label_1aa2e4;
        case 0x1aa2e8u: goto label_1aa2e8;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2f0u: goto label_1aa2f0;
        case 0x1aa2f4u: goto label_1aa2f4;
        case 0x1aa2f8u: goto label_1aa2f8;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa300u: goto label_1aa300;
        case 0x1aa304u: goto label_1aa304;
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa30cu: goto label_1aa30c;
        case 0x1aa310u: goto label_1aa310;
        case 0x1aa314u: goto label_1aa314;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa31cu: goto label_1aa31c;
        case 0x1aa320u: goto label_1aa320;
        case 0x1aa324u: goto label_1aa324;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa32cu: goto label_1aa32c;
        case 0x1aa330u: goto label_1aa330;
        case 0x1aa334u: goto label_1aa334;
        case 0x1aa338u: goto label_1aa338;
        case 0x1aa33cu: goto label_1aa33c;
        case 0x1aa340u: goto label_1aa340;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa348u: goto label_1aa348;
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa350u: goto label_1aa350;
        case 0x1aa354u: goto label_1aa354;
        case 0x1aa358u: goto label_1aa358;
        case 0x1aa35cu: goto label_1aa35c;
        case 0x1aa360u: goto label_1aa360;
        case 0x1aa364u: goto label_1aa364;
        case 0x1aa368u: goto label_1aa368;
        case 0x1aa36cu: goto label_1aa36c;
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
        default: return;
    }

label_1aa108:
    if (ctx->pc == 0x1AA108u) {
        ctx->pc = 0x1AA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA104u;
        // 0x1aa108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA10Cu;
        goto label_1aa10c;
    }
    ctx->pc = 0x1AA104u;
    {
        const bool branch_taken_0x1aa104 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA104u;
        // 0x1aa108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa104) {
            ctx->pc = 0x1AA114u;
            goto label_1aa114;
        }
    }
    ctx->pc = 0x1AA10Cu;
label_1aa10c:
    // 0x1aa10c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1aa110:
    if (ctx->pc == 0x1AA110u) {
        ctx->pc = 0x1AA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA10Cu;
        // 0x1aa110: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA114u;
        goto label_1aa114;
    }
    ctx->pc = 0x1AA10Cu;
    {
        const bool branch_taken_0x1aa10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA10Cu;
        // 0x1aa110: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa10c) {
            ctx->pc = 0x1AA168u;
            goto label_1aa168;
        }
    }
    ctx->pc = 0x1AA114u;
label_1aa114:
    // 0x1aa114: 0xc06a65c  jal         func_1A9970
label_1aa118:
    if (ctx->pc == 0x1AA118u) {
        ctx->pc = 0x1AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA114u;
        // 0x1aa118: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA11Cu;
        goto label_1aa11c;
    }
    ctx->pc = 0x1AA114u;
    SET_GPR_U32(ctx, 31, 0x1AA11Cu);
    ctx->pc = 0x1AA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA114u;
    // 0x1aa118: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    { ctx->pc = 0x1a9970; return; }
    ctx->pc = 0x1AA11Cu;
label_1aa11c:
    // 0x1aa11c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa120:
    // 0x1aa120: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
label_1aa124:
    if (ctx->pc == 0x1AA124u) {
        ctx->pc = 0x1AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA120u;
        // 0x1aa124: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA128u;
        goto label_1aa128;
    }
    ctx->pc = 0x1AA120u;
    {
        const bool branch_taken_0x1aa120 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA120u;
        // 0x1aa124: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa120) {
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA128u;
label_1aa128:
    // 0x1aa128: 0xc069218  jal         func_1A4860
label_1aa12c:
    if (ctx->pc == 0x1AA12Cu) {
        ctx->pc = 0x1AA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA128u;
        // 0x1aa12c: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA130u;
        goto label_1aa130;
    }
    ctx->pc = 0x1AA128u;
    SET_GPR_U32(ctx, 31, 0x1AA130u);
    ctx->pc = 0x1AA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA128u;
    // 0x1aa12c: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA130u;
label_1aa130:
    // 0x1aa130: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1aa130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1aa134:
    // 0x1aa134: 0x10000009  b           . + 4 + (0x9 << 2)
label_1aa138:
    if (ctx->pc == 0x1AA138u) {
        ctx->pc = 0x1AA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA134u;
        // 0x1aa138: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA13Cu;
        goto label_1aa13c;
    }
    ctx->pc = 0x1AA134u;
    {
        const bool branch_taken_0x1aa134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA134u;
        // 0x1aa138: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa134) {
            ctx->pc = 0x1AA15Cu;
            goto label_1aa15c;
        }
    }
    ctx->pc = 0x1AA13Cu;
label_1aa13c:
    // 0x1aa13c: 0xc069218  jal         func_1A4860
label_1aa140:
    if (ctx->pc == 0x1AA140u) {
        ctx->pc = 0x1AA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA13Cu;
        // 0x1aa140: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA144u;
        goto label_1aa144;
    }
    ctx->pc = 0x1AA13Cu;
    SET_GPR_U32(ctx, 31, 0x1AA144u);
    ctx->pc = 0x1AA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA13Cu;
    // 0x1aa140: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA144u;
label_1aa144:
    // 0x1aa144: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1aa148:
    // 0x1aa148: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1aa148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1aa14c:
    // 0x1aa14c: 0x24634300  addiu       $v1, $v1, 0x4300
    ctx->pc = 0x1aa14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17152));
label_1aa150:
    // 0x1aa150: 0x8e045c00  lw          $a0, 0x5C00($s0)
    ctx->pc = 0x1aa150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
label_1aa154:
    // 0x1aa154: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1aa154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1aa158:
    // 0x1aa158: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_1aa15c:
    // 0x1aa15c: 0xc069210  jal         func_1A4840
label_1aa160:
    if (ctx->pc == 0x1AA160u) {
        ctx->pc = 0x1AA164u;
        goto label_1aa164;
    }
    ctx->pc = 0x1AA15Cu;
    SET_GPR_U32(ctx, 31, 0x1AA164u);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AA164u;
label_1aa164:
    // 0x1aa164: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aa164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa168:
    // 0x1aa168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aa168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa16c:
    // 0x1aa16c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aa16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa170:
    // 0x1aa170: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aa170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa174:
    // 0x1aa174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa178:
    // 0x1aa178: 0x3e00008  jr          $ra
label_1aa17c:
    if (ctx->pc == 0x1AA17Cu) {
        ctx->pc = 0x1AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA178u;
        // 0x1aa17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA180u;
        goto label_1aa180;
    }
    ctx->pc = 0x1AA178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA178u;
        // 0x1aa17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA180u;
label_1aa180:
    // 0x1aa180: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1aa180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1aa184:
    // 0x1aa184: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aa188:
    // 0x1aa188: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aa18c:
    // 0x1aa18c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa18cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa190:
    // 0x1aa190: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aa194:
    // 0x1aa194: 0x26923240  addiu       $s2, $s4, 0x3240
    ctx->pc = 0x1aa194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
label_1aa198:
    // 0x1aa198: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1aa198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1aa19c:
    // 0x1aa19c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aa1a0:
    // 0x1aa1a0: 0xc06a02c  jal         func_1A80B0
label_1aa1a4:
    if (ctx->pc == 0x1AA1A4u) {
        ctx->pc = 0x1AA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1A0u;
        // 0x1aa1a4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1A8u;
        goto label_1aa1a8;
    }
    ctx->pc = 0x1AA1A0u;
    SET_GPR_U32(ctx, 31, 0x1AA1A8u);
    ctx->pc = 0x1AA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1A0u;
    // 0x1aa1a4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1AA1A8u;
label_1aa1a8:
    // 0x1aa1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1ac:
    // 0x1aa1ac: 0xc06a14c  jal         func_1A8530
label_1aa1b0:
    if (ctx->pc == 0x1AA1B0u) {
        ctx->pc = 0x1AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1ACu;
        // 0x1aa1b0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1B4u;
        goto label_1aa1b4;
    }
    ctx->pc = 0x1AA1ACu;
    SET_GPR_U32(ctx, 31, 0x1AA1B4u);
    ctx->pc = 0x1AA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1ACu;
    // 0x1aa1b0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AA1B4u;
label_1aa1b4:
    // 0x1aa1b4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1aa1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1aa1b8:
    // 0x1aa1b8: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1aa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1aa1bc:
    // 0x1aa1bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1aa1c0:
    if (ctx->pc == 0x1AA1C0u) {
        ctx->pc = 0x1AA1C4u;
        goto label_1aa1c4;
    }
    ctx->pc = 0x1AA1BCu;
    {
        const bool branch_taken_0x1aa1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1bc) {
            ctx->pc = 0x1AA1D4u;
            goto label_1aa1d4;
        }
    }
    ctx->pc = 0x1AA1C4u;
label_1aa1c4:
    // 0x1aa1c4: 0xc06a158  jal         func_1A8560
label_1aa1c8:
    if (ctx->pc == 0x1AA1C8u) {
        ctx->pc = 0x1AA1CCu;
        goto label_1aa1cc;
    }
    ctx->pc = 0x1AA1C4u;
    SET_GPR_U32(ctx, 31, 0x1AA1CCu);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA1CCu;
label_1aa1cc:
    // 0x1aa1cc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1aa1d0:
    if (ctx->pc == 0x1AA1D0u) {
        ctx->pc = 0x1AA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1CCu;
        // 0x1aa1d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1D4u;
        goto label_1aa1d4;
    }
    ctx->pc = 0x1AA1CCu;
    {
        const bool branch_taken_0x1aa1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1CCu;
        // 0x1aa1d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1cc) {
            ctx->pc = 0x1AA2C8u;
            goto label_1aa2c8;
        }
    }
    ctx->pc = 0x1AA1D4u;
label_1aa1d4:
    // 0x1aa1d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1aa1d8:
    if (ctx->pc == 0x1AA1D8u) {
        ctx->pc = 0x1AA1DCu;
        goto label_1aa1dc;
    }
    ctx->pc = 0x1AA1D4u;
    {
        const bool branch_taken_0x1aa1d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1d4) {
            ctx->pc = 0x1AA1E8u;
            goto label_1aa1e8;
        }
    }
    ctx->pc = 0x1AA1DCu;
label_1aa1dc:
    // 0x1aa1dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aa1e0:
    // 0x1aa1e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1aa1e4:
    if (ctx->pc == 0x1AA1E4u) {
        ctx->pc = 0x1AA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1E0u;
        // 0x1aa1e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1E8u;
        goto label_1aa1e8;
    }
    ctx->pc = 0x1AA1E0u;
    {
        const bool branch_taken_0x1aa1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1e0) {
            ctx->pc = 0x1AA1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA1E0u;
            // 0x1aa1e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA1F8u;
            goto label_1aa1f8;
        }
    }
    ctx->pc = 0x1AA1E8u;
label_1aa1e8:
    // 0x1aa1e8: 0xc06a158  jal         func_1A8560
label_1aa1ec:
    if (ctx->pc == 0x1AA1ECu) {
        ctx->pc = 0x1AA1F0u;
        goto label_1aa1f0;
    }
    ctx->pc = 0x1AA1E8u;
    SET_GPR_U32(ctx, 31, 0x1AA1F0u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA1F0u;
label_1aa1f0:
    // 0x1aa1f0: 0x10000035  b           . + 4 + (0x35 << 2)
label_1aa1f4:
    if (ctx->pc == 0x1AA1F4u) {
        ctx->pc = 0x1AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F0u;
        // 0x1aa1f4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1F8u;
        goto label_1aa1f8;
    }
    ctx->pc = 0x1AA1F0u;
    {
        const bool branch_taken_0x1aa1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F0u;
        // 0x1aa1f4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1f0) {
            ctx->pc = 0x1AA2C8u;
            goto label_1aa2c8;
        }
    }
    ctx->pc = 0x1AA1F8u;
label_1aa1f8:
    // 0x1aa1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa1fc:
    // 0x1aa1fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aa1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aa200:
    // 0x1aa200: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa204:
    // 0x1aa204: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1aa204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1aa208:
    // 0x1aa208: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aa208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aa20c:
    // 0x1aa20c: 0xc069208  jal         func_1A4820
label_1aa210:
    if (ctx->pc == 0x1AA210u) {
        ctx->pc = 0x1AA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA20Cu;
        // 0x1aa210: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA214u;
        goto label_1aa214;
    }
    ctx->pc = 0x1AA20Cu;
    SET_GPR_U32(ctx, 31, 0x1AA214u);
    ctx->pc = 0x1AA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA20Cu;
    // 0x1aa210: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AA214u;
label_1aa214:
    // 0x1aa214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa218:
    // 0x1aa218: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1aa218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa21c:
    // 0x1aa21c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa220:
    // 0x1aa220: 0xae913240  sw          $s1, 0x3240($s4)
    ctx->pc = 0x1aa220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12864), GPR_U32(ctx, 17));
label_1aa224:
    // 0x1aa224: 0x24533e80  addiu       $s3, $v0, 0x3E80
    ctx->pc = 0x1aa224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
label_1aa228:
    // 0x1aa228: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aa228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aa22c:
    // 0x1aa22c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa230:
    // 0x1aa230: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1aa230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1aa234:
    // 0x1aa234: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1aa234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1aa238:
    // 0x1aa238: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x1aa238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
label_1aa23c:
    // 0x1aa23c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1aa23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa240:
    // 0x1aa240: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1aa240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1aa244:
    // 0x1aa244: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa248:
    // 0x1aa248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa24c:
    // 0x1aa24c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1aa24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aa250:
    // 0x1aa250: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1aa250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aa254:
    // 0x1aa254: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa258:
    // 0x1aa258: 0xc069e2a  jal         func_1A78A8
label_1aa25c:
    if (ctx->pc == 0x1AA25Cu) {
        ctx->pc = 0x1AA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA258u;
        // 0x1aa25c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA260u;
        goto label_1aa260;
    }
    ctx->pc = 0x1AA258u;
    SET_GPR_U32(ctx, 31, 0x1AA260u);
    ctx->pc = 0x1AA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA258u;
    // 0x1aa25c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA260u;
label_1aa260:
    // 0x1aa260: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_1aa264:
    if (ctx->pc == 0x1AA264u) {
        ctx->pc = 0x1AA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA260u;
        // 0x1aa264: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA268u;
        goto label_1aa268;
    }
    ctx->pc = 0x1AA260u;
    {
        const bool branch_taken_0x1aa260 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aa260) {
            ctx->pc = 0x1AA264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA260u;
            // 0x1aa264: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA280u;
            goto label_1aa280;
        }
    }
    ctx->pc = 0x1AA268u;
label_1aa268:
    // 0x1aa268: 0xc06920c  jal         func_1A4830
label_1aa26c:
    if (ctx->pc == 0x1AA26Cu) {
        ctx->pc = 0x1AA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA268u;
        // 0x1aa26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA270u;
        goto label_1aa270;
    }
    ctx->pc = 0x1AA268u;
    SET_GPR_U32(ctx, 31, 0x1AA270u);
    ctx->pc = 0x1AA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA268u;
    // 0x1aa26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA270u;
label_1aa270:
    // 0x1aa270: 0xc06a158  jal         func_1A8560
label_1aa274:
    if (ctx->pc == 0x1AA274u) {
        ctx->pc = 0x1AA278u;
        goto label_1aa278;
    }
    ctx->pc = 0x1AA270u;
    SET_GPR_U32(ctx, 31, 0x1AA278u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA278u;
label_1aa278:
    // 0x1aa278: 0x10000013  b           . + 4 + (0x13 << 2)
label_1aa27c:
    if (ctx->pc == 0x1AA27Cu) {
        ctx->pc = 0x1AA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA278u;
        // 0x1aa27c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA280u;
        goto label_1aa280;
    }
    ctx->pc = 0x1AA278u;
    {
        const bool branch_taken_0x1aa278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA278u;
        // 0x1aa27c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa278) {
            ctx->pc = 0x1AA2C8u;
            goto label_1aa2c8;
        }
    }
    ctx->pc = 0x1AA280u;
label_1aa280:
    // 0x1aa280: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aa280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1aa284:
    // 0x1aa284: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1aa284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1aa288:
    // 0x1aa288: 0xc06a158  jal         func_1A8560
label_1aa28c:
    if (ctx->pc == 0x1AA28Cu) {
        ctx->pc = 0x1AA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA288u;
        // 0x1aa28c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA290u;
        goto label_1aa290;
    }
    ctx->pc = 0x1AA288u;
    SET_GPR_U32(ctx, 31, 0x1AA290u);
    ctx->pc = 0x1AA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA288u;
    // 0x1aa28c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA290u;
label_1aa290:
    // 0x1aa290: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa294:
    if (ctx->pc == 0x1AA294u) {
        ctx->pc = 0x1AA298u;
        goto label_1aa298;
    }
    ctx->pc = 0x1AA290u;
    {
        const bool branch_taken_0x1aa290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa290) {
            ctx->pc = 0x1AA2A8u;
            goto label_1aa2a8;
        }
    }
    ctx->pc = 0x1AA298u;
label_1aa298:
    // 0x1aa298: 0xc06920c  jal         func_1A4830
label_1aa29c:
    if (ctx->pc == 0x1AA29Cu) {
        ctx->pc = 0x1AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA298u;
        // 0x1aa29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2A0u;
        goto label_1aa2a0;
    }
    ctx->pc = 0x1AA298u;
    SET_GPR_U32(ctx, 31, 0x1AA2A0u);
    ctx->pc = 0x1AA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA298u;
    // 0x1aa29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA2A0u;
label_1aa2a0:
    // 0x1aa2a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1aa2a4:
    if (ctx->pc == 0x1AA2A4u) {
        ctx->pc = 0x1AA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2A0u;
        // 0x1aa2a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2A8u;
        goto label_1aa2a8;
    }
    ctx->pc = 0x1AA2A0u;
    {
        const bool branch_taken_0x1aa2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2A0u;
        // 0x1aa2a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2a0) {
            ctx->pc = 0x1AA2C8u;
            goto label_1aa2c8;
        }
    }
    ctx->pc = 0x1AA2A8u;
label_1aa2a8:
    // 0x1aa2a8: 0xc069218  jal         func_1A4860
label_1aa2ac:
    if (ctx->pc == 0x1AA2ACu) {
        ctx->pc = 0x1AA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2A8u;
        // 0x1aa2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2B0u;
        goto label_1aa2b0;
    }
    ctx->pc = 0x1AA2A8u;
    SET_GPR_U32(ctx, 31, 0x1AA2B0u);
    ctx->pc = 0x1AA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2A8u;
    // 0x1aa2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA2B0u;
label_1aa2b0:
    // 0x1aa2b0: 0xc06920c  jal         func_1A4830
label_1aa2b4:
    if (ctx->pc == 0x1AA2B4u) {
        ctx->pc = 0x1AA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2B0u;
        // 0x1aa2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2B8u;
        goto label_1aa2b8;
    }
    ctx->pc = 0x1AA2B0u;
    SET_GPR_U32(ctx, 31, 0x1AA2B8u);
    ctx->pc = 0x1AA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2B0u;
    // 0x1aa2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA2B8u;
label_1aa2b8:
    // 0x1aa2b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aa2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa2bc:
    // 0x1aa2bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aa2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aa2c0:
    // 0x1aa2c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1aa2c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aa2c4:
    // 0x1aa2c4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1aa2c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1aa2c8:
    // 0x1aa2c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1aa2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa2cc:
    // 0x1aa2cc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aa2ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa2d0:
    // 0x1aa2d0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa2d4:
    // 0x1aa2d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aa2d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa2d8:
    // 0x1aa2d8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aa2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa2dc:
    // 0x1aa2dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aa2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa2e0:
    // 0x1aa2e0: 0x3e00008  jr          $ra
label_1aa2e4:
    if (ctx->pc == 0x1AA2E4u) {
        ctx->pc = 0x1AA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E0u;
        // 0x1aa2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2E8u;
        goto label_1aa2e8;
    }
    ctx->pc = 0x1AA2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2E0u;
        // 0x1aa2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA2E8u;
label_1aa2e8:
    // 0x1aa2e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1aa2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1aa2ec:
    // 0x1aa2ec: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aa2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aa2f0:
    // 0x1aa2f0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aa2f4:
    // 0x1aa2f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aa2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa2f8:
    // 0x1aa2f8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aa2fc:
    // 0x1aa2fc: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1aa300:
    // 0x1aa300: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aa304:
    // 0x1aa304: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1aa304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1aa308:
    // 0x1aa308: 0xc06a02c  jal         func_1A80B0
label_1aa30c:
    if (ctx->pc == 0x1AA30Cu) {
        ctx->pc = 0x1AA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA308u;
        // 0x1aa30c: 0x26723240  addiu       $s2, $s3, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA310u;
        goto label_1aa310;
    }
    ctx->pc = 0x1AA308u;
    SET_GPR_U32(ctx, 31, 0x1AA310u);
    ctx->pc = 0x1AA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA308u;
    // 0x1aa30c: 0x26723240  addiu       $s2, $s3, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1AA310u;
label_1aa310:
    // 0x1aa310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa314:
    // 0x1aa314: 0xc06a14c  jal         func_1A8530
label_1aa318:
    if (ctx->pc == 0x1AA318u) {
        ctx->pc = 0x1AA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA314u;
        // 0x1aa318: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA31Cu;
        goto label_1aa31c;
    }
    ctx->pc = 0x1AA314u;
    SET_GPR_U32(ctx, 31, 0x1AA31Cu);
    ctx->pc = 0x1AA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA314u;
    // 0x1aa318: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AA31Cu;
label_1aa31c:
    // 0x1aa31c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1aa31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1aa320:
    // 0x1aa320: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1aa324:
    // 0x1aa324: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1aa328:
    if (ctx->pc == 0x1AA328u) {
        ctx->pc = 0x1AA32Cu;
        goto label_1aa32c;
    }
    ctx->pc = 0x1AA324u;
    {
        const bool branch_taken_0x1aa324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa324) {
            ctx->pc = 0x1AA33Cu;
            goto label_1aa33c;
        }
    }
    ctx->pc = 0x1AA32Cu;
label_1aa32c:
    // 0x1aa32c: 0xc06a158  jal         func_1A8560
label_1aa330:
    if (ctx->pc == 0x1AA330u) {
        ctx->pc = 0x1AA334u;
        goto label_1aa334;
    }
    ctx->pc = 0x1AA32Cu;
    SET_GPR_U32(ctx, 31, 0x1AA334u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA334u;
label_1aa334:
    // 0x1aa334: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1aa338:
    if (ctx->pc == 0x1AA338u) {
        ctx->pc = 0x1AA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA334u;
        // 0x1aa338: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA33Cu;
        goto label_1aa33c;
    }
    ctx->pc = 0x1AA334u;
    {
        const bool branch_taken_0x1aa334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA334u;
        // 0x1aa338: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa334) {
            ctx->pc = 0x1AA424u;
            goto label_1aa424;
        }
    }
    ctx->pc = 0x1AA33Cu;
label_1aa33c:
    // 0x1aa33c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1aa340:
    if (ctx->pc == 0x1AA340u) {
        ctx->pc = 0x1AA344u;
        goto label_1aa344;
    }
    ctx->pc = 0x1AA33Cu;
    {
        const bool branch_taken_0x1aa33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa33c) {
            ctx->pc = 0x1AA350u;
            goto label_1aa350;
        }
    }
    ctx->pc = 0x1AA344u;
label_1aa344:
    // 0x1aa344: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aa344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aa348:
    // 0x1aa348: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1aa34c:
    if (ctx->pc == 0x1AA34Cu) {
        ctx->pc = 0x1AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA348u;
        // 0x1aa34c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA350u;
        goto label_1aa350;
    }
    ctx->pc = 0x1AA348u;
    {
        const bool branch_taken_0x1aa348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa348) {
            ctx->pc = 0x1AA34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA348u;
            // 0x1aa34c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA350u;
label_1aa350:
    // 0x1aa350: 0xc06a158  jal         func_1A8560
label_1aa354:
    if (ctx->pc == 0x1AA354u) {
        ctx->pc = 0x1AA358u;
        goto label_1aa358;
    }
    ctx->pc = 0x1AA350u;
    SET_GPR_U32(ctx, 31, 0x1AA358u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA358u;
label_1aa358:
    // 0x1aa358: 0x10000032  b           . + 4 + (0x32 << 2)
label_1aa35c:
    if (ctx->pc == 0x1AA35Cu) {
        ctx->pc = 0x1AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA358u;
        // 0x1aa35c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA360u;
        goto label_1aa360;
    }
    ctx->pc = 0x1AA358u;
    {
        const bool branch_taken_0x1aa358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA358u;
        // 0x1aa35c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa358) {
            ctx->pc = 0x1AA424u;
            goto label_1aa424;
        }
    }
    ctx->pc = 0x1AA360u;
label_1aa360:
    // 0x1aa360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa364:
    // 0x1aa364: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1aa364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_1aa368:
    // 0x1aa368: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa36c:
    // 0x1aa36c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1aa36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
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
    ctx->pc = 0x1aa8d8u;
    return;
}

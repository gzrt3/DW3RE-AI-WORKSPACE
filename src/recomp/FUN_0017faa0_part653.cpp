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


void FUN_0017faa0_part653(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2be060u: goto label_2be060;
        case 0x2be064u: goto label_2be064;
        case 0x2be068u: goto label_2be068;
        case 0x2be06cu: goto label_2be06c;
        case 0x2be070u: goto label_2be070;
        case 0x2be074u: goto label_2be074;
        case 0x2be078u: goto label_2be078;
        case 0x2be07cu: goto label_2be07c;
        case 0x2be080u: goto label_2be080;
        case 0x2be084u: goto label_2be084;
        case 0x2be088u: goto label_2be088;
        case 0x2be08cu: goto label_2be08c;
        case 0x2be090u: goto label_2be090;
        case 0x2be094u: goto label_2be094;
        case 0x2be098u: goto label_2be098;
        case 0x2be09cu: goto label_2be09c;
        case 0x2be0a0u: goto label_2be0a0;
        case 0x2be0a4u: goto label_2be0a4;
        case 0x2be0a8u: goto label_2be0a8;
        case 0x2be0acu: goto label_2be0ac;
        case 0x2be0b0u: goto label_2be0b0;
        case 0x2be0b4u: goto label_2be0b4;
        case 0x2be0b8u: goto label_2be0b8;
        case 0x2be0bcu: goto label_2be0bc;
        case 0x2be0c0u: goto label_2be0c0;
        case 0x2be0c4u: goto label_2be0c4;
        case 0x2be0c8u: goto label_2be0c8;
        case 0x2be0ccu: goto label_2be0cc;
        case 0x2be0d0u: goto label_2be0d0;
        case 0x2be0d4u: goto label_2be0d4;
        case 0x2be0d8u: goto label_2be0d8;
        case 0x2be0dcu: goto label_2be0dc;
        case 0x2be0e0u: goto label_2be0e0;
        case 0x2be0e4u: goto label_2be0e4;
        case 0x2be0e8u: goto label_2be0e8;
        case 0x2be0ecu: goto label_2be0ec;
        case 0x2be0f0u: goto label_2be0f0;
        case 0x2be0f4u: goto label_2be0f4;
        case 0x2be0f8u: goto label_2be0f8;
        case 0x2be0fcu: goto label_2be0fc;
        case 0x2be100u: goto label_2be100;
        case 0x2be104u: goto label_2be104;
        case 0x2be108u: goto label_2be108;
        case 0x2be10cu: goto label_2be10c;
        case 0x2be110u: goto label_2be110;
        case 0x2be114u: goto label_2be114;
        case 0x2be118u: goto label_2be118;
        case 0x2be11cu: goto label_2be11c;
        case 0x2be120u: goto label_2be120;
        case 0x2be124u: goto label_2be124;
        case 0x2be128u: goto label_2be128;
        case 0x2be12cu: goto label_2be12c;
        case 0x2be130u: goto label_2be130;
        case 0x2be134u: goto label_2be134;
        case 0x2be138u: goto label_2be138;
        case 0x2be13cu: goto label_2be13c;
        case 0x2be140u: goto label_2be140;
        case 0x2be144u: goto label_2be144;
        case 0x2be148u: goto label_2be148;
        case 0x2be14cu: goto label_2be14c;
        case 0x2be150u: goto label_2be150;
        case 0x2be154u: goto label_2be154;
        case 0x2be158u: goto label_2be158;
        case 0x2be15cu: goto label_2be15c;
        case 0x2be160u: goto label_2be160;
        case 0x2be164u: goto label_2be164;
        case 0x2be168u: goto label_2be168;
        case 0x2be16cu: goto label_2be16c;
        case 0x2be170u: goto label_2be170;
        case 0x2be174u: goto label_2be174;
        case 0x2be178u: goto label_2be178;
        case 0x2be17cu: goto label_2be17c;
        case 0x2be180u: goto label_2be180;
        case 0x2be184u: goto label_2be184;
        case 0x2be188u: goto label_2be188;
        case 0x2be18cu: goto label_2be18c;
        case 0x2be190u: goto label_2be190;
        case 0x2be194u: goto label_2be194;
        case 0x2be198u: goto label_2be198;
        case 0x2be19cu: goto label_2be19c;
        case 0x2be1a0u: goto label_2be1a0;
        case 0x2be1a4u: goto label_2be1a4;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be1acu: goto label_2be1ac;
        case 0x2be1b0u: goto label_2be1b0;
        case 0x2be1b4u: goto label_2be1b4;
        case 0x2be1b8u: goto label_2be1b8;
        case 0x2be1bcu: goto label_2be1bc;
        case 0x2be1c0u: goto label_2be1c0;
        case 0x2be1c4u: goto label_2be1c4;
        case 0x2be1c8u: goto label_2be1c8;
        case 0x2be1ccu: goto label_2be1cc;
        case 0x2be1d0u: goto label_2be1d0;
        case 0x2be1d4u: goto label_2be1d4;
        case 0x2be1d8u: goto label_2be1d8;
        case 0x2be1dcu: goto label_2be1dc;
        case 0x2be1e0u: goto label_2be1e0;
        case 0x2be1e4u: goto label_2be1e4;
        case 0x2be1e8u: goto label_2be1e8;
        case 0x2be1ecu: goto label_2be1ec;
        case 0x2be1f0u: goto label_2be1f0;
        case 0x2be1f4u: goto label_2be1f4;
        case 0x2be1f8u: goto label_2be1f8;
        case 0x2be1fcu: goto label_2be1fc;
        case 0x2be200u: goto label_2be200;
        case 0x2be204u: goto label_2be204;
        case 0x2be208u: goto label_2be208;
        case 0x2be20cu: goto label_2be20c;
        case 0x2be210u: goto label_2be210;
        case 0x2be214u: goto label_2be214;
        case 0x2be218u: goto label_2be218;
        case 0x2be21cu: goto label_2be21c;
        case 0x2be220u: goto label_2be220;
        case 0x2be224u: goto label_2be224;
        case 0x2be228u: goto label_2be228;
        case 0x2be22cu: goto label_2be22c;
        case 0x2be230u: goto label_2be230;
        case 0x2be234u: goto label_2be234;
        case 0x2be238u: goto label_2be238;
        case 0x2be23cu: goto label_2be23c;
        case 0x2be240u: goto label_2be240;
        case 0x2be244u: goto label_2be244;
        case 0x2be248u: goto label_2be248;
        case 0x2be24cu: goto label_2be24c;
        case 0x2be250u: goto label_2be250;
        case 0x2be254u: goto label_2be254;
        case 0x2be258u: goto label_2be258;
        case 0x2be25cu: goto label_2be25c;
        case 0x2be260u: goto label_2be260;
        case 0x2be264u: goto label_2be264;
        case 0x2be268u: goto label_2be268;
        case 0x2be26cu: goto label_2be26c;
        case 0x2be270u: goto label_2be270;
        case 0x2be274u: goto label_2be274;
        case 0x2be278u: goto label_2be278;
        case 0x2be27cu: goto label_2be27c;
        case 0x2be280u: goto label_2be280;
        case 0x2be284u: goto label_2be284;
        case 0x2be288u: goto label_2be288;
        case 0x2be28cu: goto label_2be28c;
        case 0x2be290u: goto label_2be290;
        case 0x2be294u: goto label_2be294;
        case 0x2be298u: goto label_2be298;
        case 0x2be29cu: goto label_2be29c;
        case 0x2be2a0u: goto label_2be2a0;
        case 0x2be2a4u: goto label_2be2a4;
        case 0x2be2a8u: goto label_2be2a8;
        case 0x2be2acu: goto label_2be2ac;
        case 0x2be2b0u: goto label_2be2b0;
        case 0x2be2b4u: goto label_2be2b4;
        case 0x2be2b8u: goto label_2be2b8;
        case 0x2be2bcu: goto label_2be2bc;
        case 0x2be2c0u: goto label_2be2c0;
        case 0x2be2c4u: goto label_2be2c4;
        case 0x2be2c8u: goto label_2be2c8;
        case 0x2be2ccu: goto label_2be2cc;
        case 0x2be2d0u: goto label_2be2d0;
        case 0x2be2d4u: goto label_2be2d4;
        case 0x2be2d8u: goto label_2be2d8;
        case 0x2be2dcu: goto label_2be2dc;
        case 0x2be2e0u: goto label_2be2e0;
        case 0x2be2e4u: goto label_2be2e4;
        case 0x2be2e8u: goto label_2be2e8;
        case 0x2be2ecu: goto label_2be2ec;
        case 0x2be2f0u: goto label_2be2f0;
        case 0x2be2f4u: goto label_2be2f4;
        case 0x2be2f8u: goto label_2be2f8;
        case 0x2be2fcu: goto label_2be2fc;
        case 0x2be300u: goto label_2be300;
        case 0x2be304u: goto label_2be304;
        case 0x2be308u: goto label_2be308;
        case 0x2be30cu: goto label_2be30c;
        case 0x2be310u: goto label_2be310;
        case 0x2be314u: goto label_2be314;
        case 0x2be318u: goto label_2be318;
        case 0x2be31cu: goto label_2be31c;
        case 0x2be320u: goto label_2be320;
        case 0x2be324u: goto label_2be324;
        case 0x2be328u: goto label_2be328;
        case 0x2be32cu: goto label_2be32c;
        case 0x2be330u: goto label_2be330;
        case 0x2be334u: goto label_2be334;
        case 0x2be338u: goto label_2be338;
        case 0x2be33cu: goto label_2be33c;
        case 0x2be340u: goto label_2be340;
        case 0x2be344u: goto label_2be344;
        case 0x2be348u: goto label_2be348;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be350u: goto label_2be350;
        case 0x2be354u: goto label_2be354;
        case 0x2be358u: goto label_2be358;
        case 0x2be35cu: goto label_2be35c;
        case 0x2be360u: goto label_2be360;
        case 0x2be364u: goto label_2be364;
        case 0x2be368u: goto label_2be368;
        case 0x2be36cu: goto label_2be36c;
        case 0x2be370u: goto label_2be370;
        case 0x2be374u: goto label_2be374;
        case 0x2be378u: goto label_2be378;
        case 0x2be37cu: goto label_2be37c;
        case 0x2be380u: goto label_2be380;
        case 0x2be384u: goto label_2be384;
        case 0x2be388u: goto label_2be388;
        case 0x2be38cu: goto label_2be38c;
        case 0x2be390u: goto label_2be390;
        case 0x2be394u: goto label_2be394;
        case 0x2be398u: goto label_2be398;
        case 0x2be39cu: goto label_2be39c;
        case 0x2be3a0u: goto label_2be3a0;
        case 0x2be3a4u: goto label_2be3a4;
        case 0x2be3a8u: goto label_2be3a8;
        case 0x2be3acu: goto label_2be3ac;
        case 0x2be3b0u: goto label_2be3b0;
        case 0x2be3b4u: goto label_2be3b4;
        case 0x2be3b8u: goto label_2be3b8;
        case 0x2be3bcu: goto label_2be3bc;
        case 0x2be3c0u: goto label_2be3c0;
        case 0x2be3c4u: goto label_2be3c4;
        case 0x2be3c8u: goto label_2be3c8;
        case 0x2be3ccu: goto label_2be3cc;
        case 0x2be3d0u: goto label_2be3d0;
        case 0x2be3d4u: goto label_2be3d4;
        case 0x2be3d8u: goto label_2be3d8;
        case 0x2be3dcu: goto label_2be3dc;
        case 0x2be3e0u: goto label_2be3e0;
        case 0x2be3e4u: goto label_2be3e4;
        case 0x2be3e8u: goto label_2be3e8;
        case 0x2be3ecu: goto label_2be3ec;
        case 0x2be3f0u: goto label_2be3f0;
        case 0x2be3f4u: goto label_2be3f4;
        case 0x2be3f8u: goto label_2be3f8;
        case 0x2be3fcu: goto label_2be3fc;
        case 0x2be400u: goto label_2be400;
        case 0x2be404u: goto label_2be404;
        case 0x2be408u: goto label_2be408;
        case 0x2be40cu: goto label_2be40c;
        case 0x2be410u: goto label_2be410;
        case 0x2be414u: goto label_2be414;
        case 0x2be418u: goto label_2be418;
        case 0x2be41cu: goto label_2be41c;
        case 0x2be420u: goto label_2be420;
        case 0x2be424u: goto label_2be424;
        case 0x2be428u: goto label_2be428;
        case 0x2be42cu: goto label_2be42c;
        case 0x2be430u: goto label_2be430;
        case 0x2be434u: goto label_2be434;
        case 0x2be438u: goto label_2be438;
        case 0x2be43cu: goto label_2be43c;
        case 0x2be440u: goto label_2be440;
        case 0x2be444u: goto label_2be444;
        case 0x2be448u: goto label_2be448;
        case 0x2be44cu: goto label_2be44c;
        case 0x2be450u: goto label_2be450;
        case 0x2be454u: goto label_2be454;
        case 0x2be458u: goto label_2be458;
        case 0x2be45cu: goto label_2be45c;
        case 0x2be460u: goto label_2be460;
        case 0x2be464u: goto label_2be464;
        case 0x2be468u: goto label_2be468;
        case 0x2be46cu: goto label_2be46c;
        case 0x2be470u: goto label_2be470;
        case 0x2be474u: goto label_2be474;
        case 0x2be478u: goto label_2be478;
        case 0x2be47cu: goto label_2be47c;
        case 0x2be480u: goto label_2be480;
        case 0x2be484u: goto label_2be484;
        case 0x2be488u: goto label_2be488;
        case 0x2be48cu: goto label_2be48c;
        case 0x2be490u: goto label_2be490;
        case 0x2be494u: goto label_2be494;
        case 0x2be498u: goto label_2be498;
        case 0x2be49cu: goto label_2be49c;
        case 0x2be4a0u: goto label_2be4a0;
        case 0x2be4a4u: goto label_2be4a4;
        case 0x2be4a8u: goto label_2be4a8;
        case 0x2be4acu: goto label_2be4ac;
        case 0x2be4b0u: goto label_2be4b0;
        case 0x2be4b4u: goto label_2be4b4;
        case 0x2be4b8u: goto label_2be4b8;
        case 0x2be4bcu: goto label_2be4bc;
        case 0x2be4c0u: goto label_2be4c0;
        case 0x2be4c4u: goto label_2be4c4;
        case 0x2be4c8u: goto label_2be4c8;
        case 0x2be4ccu: goto label_2be4cc;
        case 0x2be4d0u: goto label_2be4d0;
        case 0x2be4d4u: goto label_2be4d4;
        case 0x2be4d8u: goto label_2be4d8;
        case 0x2be4dcu: goto label_2be4dc;
        case 0x2be4e0u: goto label_2be4e0;
        case 0x2be4e4u: goto label_2be4e4;
        case 0x2be4e8u: goto label_2be4e8;
        case 0x2be4ecu: goto label_2be4ec;
        case 0x2be4f0u: goto label_2be4f0;
        case 0x2be4f4u: goto label_2be4f4;
        case 0x2be4f8u: goto label_2be4f8;
        case 0x2be4fcu: goto label_2be4fc;
        case 0x2be500u: goto label_2be500;
        case 0x2be504u: goto label_2be504;
        case 0x2be508u: goto label_2be508;
        case 0x2be50cu: goto label_2be50c;
        case 0x2be510u: goto label_2be510;
        case 0x2be514u: goto label_2be514;
        case 0x2be518u: goto label_2be518;
        case 0x2be51cu: goto label_2be51c;
        case 0x2be520u: goto label_2be520;
        case 0x2be524u: goto label_2be524;
        case 0x2be528u: goto label_2be528;
        case 0x2be52cu: goto label_2be52c;
        case 0x2be530u: goto label_2be530;
        case 0x2be534u: goto label_2be534;
        case 0x2be538u: goto label_2be538;
        case 0x2be53cu: goto label_2be53c;
        case 0x2be540u: goto label_2be540;
        case 0x2be544u: goto label_2be544;
        case 0x2be548u: goto label_2be548;
        case 0x2be54cu: goto label_2be54c;
        case 0x2be550u: goto label_2be550;
        case 0x2be554u: goto label_2be554;
        case 0x2be558u: goto label_2be558;
        case 0x2be55cu: goto label_2be55c;
        case 0x2be560u: goto label_2be560;
        case 0x2be564u: goto label_2be564;
        case 0x2be568u: goto label_2be568;
        case 0x2be56cu: goto label_2be56c;
        case 0x2be570u: goto label_2be570;
        case 0x2be574u: goto label_2be574;
        case 0x2be578u: goto label_2be578;
        case 0x2be57cu: goto label_2be57c;
        case 0x2be580u: goto label_2be580;
        case 0x2be584u: goto label_2be584;
        case 0x2be588u: goto label_2be588;
        case 0x2be58cu: goto label_2be58c;
        case 0x2be590u: goto label_2be590;
        case 0x2be594u: goto label_2be594;
        case 0x2be598u: goto label_2be598;
        case 0x2be59cu: goto label_2be59c;
        case 0x2be5a0u: goto label_2be5a0;
        case 0x2be5a4u: goto label_2be5a4;
        case 0x2be5a8u: goto label_2be5a8;
        case 0x2be5acu: goto label_2be5ac;
        case 0x2be5b0u: goto label_2be5b0;
        case 0x2be5b4u: goto label_2be5b4;
        case 0x2be5b8u: goto label_2be5b8;
        case 0x2be5bcu: goto label_2be5bc;
        case 0x2be5c0u: goto label_2be5c0;
        case 0x2be5c4u: goto label_2be5c4;
        case 0x2be5c8u: goto label_2be5c8;
        case 0x2be5ccu: goto label_2be5cc;
        case 0x2be5d0u: goto label_2be5d0;
        case 0x2be5d4u: goto label_2be5d4;
        case 0x2be5d8u: goto label_2be5d8;
        case 0x2be5dcu: goto label_2be5dc;
        case 0x2be5e0u: goto label_2be5e0;
        case 0x2be5e4u: goto label_2be5e4;
        case 0x2be5e8u: goto label_2be5e8;
        case 0x2be5ecu: goto label_2be5ec;
        case 0x2be5f0u: goto label_2be5f0;
        case 0x2be5f4u: goto label_2be5f4;
        case 0x2be5f8u: goto label_2be5f8;
        case 0x2be5fcu: goto label_2be5fc;
        case 0x2be600u: goto label_2be600;
        case 0x2be604u: goto label_2be604;
        case 0x2be608u: goto label_2be608;
        case 0x2be60cu: goto label_2be60c;
        case 0x2be610u: goto label_2be610;
        case 0x2be614u: goto label_2be614;
        case 0x2be618u: goto label_2be618;
        case 0x2be61cu: goto label_2be61c;
        case 0x2be620u: goto label_2be620;
        case 0x2be624u: goto label_2be624;
        case 0x2be628u: goto label_2be628;
        case 0x2be62cu: goto label_2be62c;
        case 0x2be630u: goto label_2be630;
        case 0x2be634u: goto label_2be634;
        case 0x2be638u: goto label_2be638;
        case 0x2be63cu: goto label_2be63c;
        case 0x2be640u: goto label_2be640;
        case 0x2be644u: goto label_2be644;
        case 0x2be648u: goto label_2be648;
        case 0x2be64cu: goto label_2be64c;
        case 0x2be650u: goto label_2be650;
        case 0x2be654u: goto label_2be654;
        case 0x2be658u: goto label_2be658;
        case 0x2be65cu: goto label_2be65c;
        case 0x2be660u: goto label_2be660;
        case 0x2be664u: goto label_2be664;
        case 0x2be668u: goto label_2be668;
        case 0x2be66cu: goto label_2be66c;
        case 0x2be670u: goto label_2be670;
        case 0x2be674u: goto label_2be674;
        case 0x2be678u: goto label_2be678;
        case 0x2be67cu: goto label_2be67c;
        case 0x2be680u: goto label_2be680;
        case 0x2be684u: goto label_2be684;
        case 0x2be688u: goto label_2be688;
        case 0x2be68cu: goto label_2be68c;
        case 0x2be690u: goto label_2be690;
        case 0x2be694u: goto label_2be694;
        case 0x2be698u: goto label_2be698;
        case 0x2be69cu: goto label_2be69c;
        case 0x2be6a0u: goto label_2be6a0;
        case 0x2be6a4u: goto label_2be6a4;
        case 0x2be6a8u: goto label_2be6a8;
        case 0x2be6acu: goto label_2be6ac;
        case 0x2be6b0u: goto label_2be6b0;
        case 0x2be6b4u: goto label_2be6b4;
        case 0x2be6b8u: goto label_2be6b8;
        case 0x2be6bcu: goto label_2be6bc;
        case 0x2be6c0u: goto label_2be6c0;
        case 0x2be6c4u: goto label_2be6c4;
        case 0x2be6c8u: goto label_2be6c8;
        case 0x2be6ccu: goto label_2be6cc;
        case 0x2be6d0u: goto label_2be6d0;
        case 0x2be6d4u: goto label_2be6d4;
        case 0x2be6d8u: goto label_2be6d8;
        case 0x2be6dcu: goto label_2be6dc;
        case 0x2be6e0u: goto label_2be6e0;
        case 0x2be6e4u: goto label_2be6e4;
        case 0x2be6e8u: goto label_2be6e8;
        case 0x2be6ecu: goto label_2be6ec;
        case 0x2be6f0u: goto label_2be6f0;
        case 0x2be6f4u: goto label_2be6f4;
        case 0x2be6f8u: goto label_2be6f8;
        case 0x2be6fcu: goto label_2be6fc;
        case 0x2be700u: goto label_2be700;
        case 0x2be704u: goto label_2be704;
        case 0x2be708u: goto label_2be708;
        case 0x2be70cu: goto label_2be70c;
        case 0x2be710u: goto label_2be710;
        case 0x2be714u: goto label_2be714;
        case 0x2be718u: goto label_2be718;
        case 0x2be71cu: goto label_2be71c;
        case 0x2be720u: goto label_2be720;
        case 0x2be724u: goto label_2be724;
        case 0x2be728u: goto label_2be728;
        case 0x2be72cu: goto label_2be72c;
        case 0x2be730u: goto label_2be730;
        case 0x2be734u: goto label_2be734;
        case 0x2be738u: goto label_2be738;
        case 0x2be73cu: goto label_2be73c;
        case 0x2be740u: goto label_2be740;
        case 0x2be744u: goto label_2be744;
        case 0x2be748u: goto label_2be748;
        case 0x2be74cu: goto label_2be74c;
        case 0x2be750u: goto label_2be750;
        case 0x2be754u: goto label_2be754;
        case 0x2be758u: goto label_2be758;
        case 0x2be75cu: goto label_2be75c;
        case 0x2be760u: goto label_2be760;
        case 0x2be764u: goto label_2be764;
        case 0x2be768u: goto label_2be768;
        case 0x2be76cu: goto label_2be76c;
        case 0x2be770u: goto label_2be770;
        case 0x2be774u: goto label_2be774;
        case 0x2be778u: goto label_2be778;
        case 0x2be77cu: goto label_2be77c;
        case 0x2be780u: goto label_2be780;
        case 0x2be784u: goto label_2be784;
        case 0x2be788u: goto label_2be788;
        case 0x2be78cu: goto label_2be78c;
        case 0x2be790u: goto label_2be790;
        case 0x2be794u: goto label_2be794;
        case 0x2be798u: goto label_2be798;
        case 0x2be79cu: goto label_2be79c;
        case 0x2be7a0u: goto label_2be7a0;
        case 0x2be7a4u: goto label_2be7a4;
        case 0x2be7a8u: goto label_2be7a8;
        case 0x2be7acu: goto label_2be7ac;
        case 0x2be7b0u: goto label_2be7b0;
        case 0x2be7b4u: goto label_2be7b4;
        case 0x2be7b8u: goto label_2be7b8;
        case 0x2be7bcu: goto label_2be7bc;
        case 0x2be7c0u: goto label_2be7c0;
        case 0x2be7c4u: goto label_2be7c4;
        case 0x2be7c8u: goto label_2be7c8;
        case 0x2be7ccu: goto label_2be7cc;
        case 0x2be7d0u: goto label_2be7d0;
        case 0x2be7d4u: goto label_2be7d4;
        case 0x2be7d8u: goto label_2be7d8;
        case 0x2be7dcu: goto label_2be7dc;
        case 0x2be7e0u: goto label_2be7e0;
        case 0x2be7e4u: goto label_2be7e4;
        case 0x2be7e8u: goto label_2be7e8;
        case 0x2be7ecu: goto label_2be7ec;
        case 0x2be7f0u: goto label_2be7f0;
        case 0x2be7f4u: goto label_2be7f4;
        case 0x2be7f8u: goto label_2be7f8;
        case 0x2be7fcu: goto label_2be7fc;
        case 0x2be800u: goto label_2be800;
        case 0x2be804u: goto label_2be804;
        case 0x2be808u: goto label_2be808;
        case 0x2be80cu: goto label_2be80c;
        case 0x2be810u: goto label_2be810;
        case 0x2be814u: goto label_2be814;
        case 0x2be818u: goto label_2be818;
        case 0x2be81cu: goto label_2be81c;
        case 0x2be820u: goto label_2be820;
        case 0x2be824u: goto label_2be824;
        case 0x2be828u: goto label_2be828;
        case 0x2be82cu: goto label_2be82c;
        default: return;
    }

label_2be060:
    // 0x2be060: 0x3e89805  .word       0x03E89805                   # INVALID     $ra, $t0, -0x67FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BE060 raw=0x03E89805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be064:
    // 0x2be064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be068:
    // 0x2be068: 0x3e8a009  .word       0x03E8A009                   # jalr        $s4, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2be06c:
    if (ctx->pc == 0x2BE06Cu) {
        ctx->pc = 0x2BE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE068u;
        // 0x2be06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE070u;
        goto label_2be070;
    }
    ctx->pc = 0x2BE068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 20, 0x2BE070u);
        ctx->pc = 0x2BE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE068u;
        // 0x2be06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE068u, 0x2BE070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE070u;
label_2be070:
    // 0x2be070: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2be070u;
    runtime->handleBreak(rdram, ctx);
label_2be074:
    // 0x2be074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be078:
    // 0x2be078: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be078u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2be07c:
    // 0x2be07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be080:
    // 0x2be080: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2be080u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2be084:
    // 0x2be084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be088:
    // 0x2be088: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2be088u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2be08c:
    // 0x2be08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be090:
    // 0x2be090: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BE090 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be094:
    // 0x2be094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be098:
    // 0x2be098: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be098u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2be09c:
    // 0x2be09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0a0:
    // 0x2be0a0: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2be0a0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2be0a4:
    // 0x2be0a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0a8:
    // 0x2be0a8: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2be0a8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2be0ac:
    // 0x2be0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0b0:
    // 0x2be0b0: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be0b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2be0b4:
    // 0x2be0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0b8:
    // 0x2be0b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2be0b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2be0bc:
    // 0x2be0bc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2be0bcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2be0c0:
    // 0x2be0c0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2be0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2be0c4:
    // 0x2be0c4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2be0c4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2be0c8:
    // 0x2be0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0cc:
    // 0x2be0cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0d0:
    // 0x2be0d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0d4:
    // 0x2be0d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0d8:
    // 0x2be0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0dc:
    // 0x2be0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0e0:
    // 0x2be0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0e4:
    // 0x2be0e4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be0e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BE0E4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be0e8:
    // 0x2be0e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0ec:
    // 0x2be0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0f0:
    // 0x2be0f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0f4:
    // 0x2be0f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0f8:
    // 0x2be0f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0fc:
    // 0x2be0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be100:
    // 0x2be100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be104:
    // 0x2be104: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be104u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2be108:
    // 0x2be108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be10c:
    // 0x2be10c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be10cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2be110:
    // 0x2be110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be114:
    // 0x2be114: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be114u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2be118:
    // 0x2be118: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2be118u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2be11c:
    // 0x2be11c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2be11cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2be120:
    // 0x2be120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be124:
    // 0x2be124: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be124u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2be128:
    // 0x2be128: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be128u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be12c:
    // 0x2be12c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be12cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2be130:
    // 0x2be130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be134:
    // 0x2be134: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be134u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2be138:
    // 0x2be138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be13c:
    // 0x2be13c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be13cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2be140:
    // 0x2be140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be144:
    // 0x2be144: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be144u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2be148:
    // 0x2be148: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be148u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BE148 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be14c:
    // 0x2be14c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2be14cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2be150:
    // 0x2be150: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be150u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2be154:
    // 0x2be154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be158:
    // 0x2be158: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2be158u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2be15c:
    // 0x2be15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be160:
    // 0x2be160: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2be164:
    if (ctx->pc == 0x2BE164u) {
        ctx->pc = 0x2BE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE160u;
        // 0x2be164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE168u;
        goto label_2be168;
    }
    ctx->pc = 0x2BE160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE160u;
        // 0x2be164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE168u;
label_2be168:
    // 0x2be168: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be168u;
    ctx->pc = 0x2BE16Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2be16c:
    // 0x2be16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be170:
    // 0x2be170: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2be170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2be174:
    // 0x2be174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be178:
    // 0x2be178: 0x420f0678  .word       0x420F0678                   # ei # 000F0640 <InstrIdType: R5900_COP0_TLB>
    ctx->pc = 0x2be178u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2be17c:
    // 0x2be17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be180:
    // 0x2be180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be184:
    // 0x2be184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be188:
    // 0x2be188: 0x500a0020  beql        $zero, $t2, . + 4 + (0x20 << 2)
label_2be18c:
    if (ctx->pc == 0x2BE18Cu) {
        ctx->pc = 0x2BE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE188u;
        // 0x2be18c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE190u;
        goto label_2be190;
    }
    ctx->pc = 0x2BE188u;
    {
        const bool branch_taken_0x2be188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2be188) {
            ctx->pc = 0x2BE18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE188u;
            // 0x2be18c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE20Cu;
            goto label_2be20c;
        }
    }
    ctx->pc = 0x2BE190u;
label_2be190:
    // 0x2be190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be194:
    // 0x2be194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be198:
    // 0x2be198: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2be19c:
    if (ctx->pc == 0x2BE19Cu) {
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE198u;
        // 0x2be19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1A0u;
        goto label_2be1a0;
    }
    ctx->pc = 0x2BE198u;
    {
        const bool branch_taken_0x2be198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE198u;
        // 0x2be19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be198) {
            ctx->pc = 0x2D21B8u;
            return;
        }
    }
    ctx->pc = 0x2BE1A0u;
label_2be1a0:
    // 0x2be1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be1a4:
    // 0x2be1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1a8:
    // 0x2be1a8: 0x5a000820  blezl       $s0, . + 4 + (0x820 << 2)
label_2be1ac:
    if (ctx->pc == 0x2BE1ACu) {
        ctx->pc = 0x2BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1A8u;
        // 0x2be1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1B0u;
        goto label_2be1b0;
    }
    ctx->pc = 0x2BE1A8u;
    {
        const bool branch_taken_0x2be1a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be1a8) {
            ctx->pc = 0x2BE1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE1A8u;
            // 0x2be1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C022Cu;
            return;
        }
    }
    ctx->pc = 0x2BE1B0u;
label_2be1b0:
    // 0x2be1b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be1b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be1b4:
    // 0x2be1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1b8:
    // 0x2be1b8: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2be1bc:
    if (ctx->pc == 0x2BE1BCu) {
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B8u;
        // 0x2be1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1C0u;
        goto label_2be1c0;
    }
    ctx->pc = 0x2BE1B8u;
    {
        const bool branch_taken_0x2be1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B8u;
        // 0x2be1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1b8) {
            ctx->pc = 0x2C42BCu;
            return;
        }
    }
    ctx->pc = 0x2BE1C0u;
label_2be1c0:
    // 0x2be1c0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be1c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be1c4:
    // 0x2be1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1c8:
    // 0x2be1c8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be1c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BE1C8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be1cc:
    // 0x2be1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1d0:
    // 0x2be1d0: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2be1d4:
    if (ctx->pc == 0x2BE1D4u) {
        ctx->pc = 0x2BE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1D0u;
        // 0x2be1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1D8u;
        goto label_2be1d8;
    }
    ctx->pc = 0x2BE1D0u;
    {
        const bool branch_taken_0x2be1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1D0u;
        // 0x2be1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1d0) {
            ctx->pc = 0x2C21D8u;
            return;
        }
    }
    ctx->pc = 0x2BE1D8u;
label_2be1d8:
    // 0x2be1d8: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2be1d8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2be1dc:
    // 0x2be1dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1e0:
    // 0x2be1e0: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2be1e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2be1e4:
    // 0x2be1e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1e8:
    // 0x2be1e8: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2be1e8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2be1ec:
    // 0x2be1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1f0:
    // 0x2be1f0: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2be1f4:
    if (ctx->pc == 0x2BE1F4u) {
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1F8u;
        goto label_2be1f8;
    }
    ctx->pc = 0x2BE1F0u;
    {
        const bool branch_taken_0x2be1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f0) {
            ctx->pc = 0x2C01F8u;
            return;
        }
    }
    ctx->pc = 0x2BE1F8u;
label_2be1f8:
    // 0x2be1f8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2be1fc:
    if (ctx->pc == 0x2BE1FCu) {
        ctx->pc = 0x2BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F8u;
        // 0x2be1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE200u;
        goto label_2be200;
    }
    ctx->pc = 0x2BE1F8u;
    {
        const bool branch_taken_0x2be1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F8u;
        // 0x2be1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f8) {
            ctx->pc = 0x2C427Cu;
            return;
        }
    }
    ctx->pc = 0x2BE200u;
label_2be200:
    // 0x2be200: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2be204:
    if (ctx->pc == 0x2BE204u) {
        ctx->pc = 0x2BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE200u;
        // 0x2be204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE208u;
        goto label_2be208;
    }
    ctx->pc = 0x2BE200u;
    {
        const bool branch_taken_0x2be200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE200u;
        // 0x2be204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be200) {
            ctx->pc = 0x2D4200u;
            return;
        }
    }
    ctx->pc = 0x2BE208u;
label_2be208:
    // 0x2be208: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2be20c:
    if (ctx->pc == 0x2BE20Cu) {
        ctx->pc = 0x2BE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE208u;
        // 0x2be20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE210u;
        goto label_2be210;
    }
    ctx->pc = 0x2BE208u;
    {
        const bool branch_taken_0x2be208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE208u;
        // 0x2be20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be208) {
            ctx->pc = 0x2D4210u;
            return;
        }
    }
    ctx->pc = 0x2BE210u;
label_2be210:
    // 0x2be210: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be210u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2be214:
    // 0x2be214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be218:
    // 0x2be218: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be218u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2be21c:
    // 0x2be21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be220:
    // 0x2be220: 0xb0b2800  j           func_C2CA000
label_2be224:
    if (ctx->pc == 0x2BE224u) {
        ctx->pc = 0x2BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE220u;
        // 0x2be224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE228u;
        goto label_2be228;
    }
    ctx->pc = 0x2BE220u;
    ctx->pc = 0x2BE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE220u;
    // 0x2be224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BE220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE228u;
label_2be228:
    // 0x2be228: 0xb0b3000  j           func_C2CC000
label_2be22c:
    if (ctx->pc == 0x2BE22Cu) {
        ctx->pc = 0x2BE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE228u;
        // 0x2be22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE230u;
        goto label_2be230;
    }
    ctx->pc = 0x2BE228u;
    ctx->pc = 0x2BE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE228u;
    // 0x2be22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BE228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE230u;
label_2be230:
    // 0x2be230: 0x4201075f  .word       0x4201075F                   # INVALID     $s0, $at, 0x75F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2be230u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1F at 0x2BE230 raw=0x4201075F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be234:
    // 0x2be234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be238:
    // 0x2be238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be23c:
    // 0x2be23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be240:
    // 0x2be240: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2be240u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2be244:
    // 0x2be244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be248:
    // 0x2be248: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be24c:
    // 0x2be24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be250:
    // 0x2be250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be254:
    // 0x2be254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be258:
    // 0x2be258: 0xa231000  j           func_88C4000
label_2be25c:
    if (ctx->pc == 0x2BE25Cu) {
        ctx->pc = 0x2BE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE258u;
        // 0x2be25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE260u;
        goto label_2be260;
    }
    ctx->pc = 0x2BE258u;
    ctx->pc = 0x2BE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE258u;
    // 0x2be25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88C4000u, 0x2BE258u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE260u;
label_2be260:
    // 0x2be260: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2be260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2be264:
    // 0x2be264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be268:
    // 0x2be268: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2be26c:
    if (ctx->pc == 0x2BE26Cu) {
        ctx->pc = 0x2BE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE268u;
        // 0x2be26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE270u;
        goto label_2be270;
    }
    ctx->pc = 0x2BE268u;
    {
        const bool branch_taken_0x2be268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE268u;
        // 0x2be26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be268) {
            ctx->pc = 0x2C2280u;
            return;
        }
    }
    ctx->pc = 0x2BE270u;
label_2be270:
    // 0x2be270: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be274:
    // 0x2be274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be278:
    // 0x2be278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be27c:
    // 0x2be27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be280:
    // 0x2be280: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2be280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2be284:
    // 0x2be284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be288:
    // 0x2be288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be28c:
    // 0x2be28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be290:
    // 0x2be290: 0x120e700c  beq         $s0, $t6, . + 4 + (0x700C << 2)
label_2be294:
    if (ctx->pc == 0x2BE294u) {
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE298u;
        goto label_2be298;
    }
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2DA2C4u;
            return;
        }
    }
    ctx->pc = 0x2BE298u;
label_2be298:
    // 0x2be298: 0x0  nop
    ctx->pc = 0x2be298u;
    // NOP
label_2be29c:
    // 0x2be29c: 0x4a090300  vaddx       $vf12, $vf0, $vf9x
    ctx->pc = 0x2be29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2be2a0:
    // 0x2be2a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2a4:
    // 0x2be2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2a8:
    // 0x2be2a8: 0x5a0077a6  blezl       $s0, . + 4 + (0x77A6 << 2)
label_2be2ac:
    if (ctx->pc == 0x2BE2ACu) {
        ctx->pc = 0x2BE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2A8u;
        // 0x2be2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2B0u;
        goto label_2be2b0;
    }
    ctx->pc = 0x2BE2A8u;
    {
        const bool branch_taken_0x2be2a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be2a8) {
            ctx->pc = 0x2BE2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE2A8u;
            // 0x2be2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC144u;
            return;
        }
    }
    ctx->pc = 0x2BE2B0u;
label_2be2b0:
    // 0x2be2b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2b4:
    // 0x2be2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2b8:
    // 0x2be2b8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2be2b8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2be2bc:
    // 0x2be2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2c0:
    // 0x2be2c0: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2be2c4:
    if (ctx->pc == 0x2BE2C4u) {
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2C8u;
        goto label_2be2c8;
    }
    ctx->pc = 0x2BE2C0u;
    {
        const bool branch_taken_0x2be2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2c0) {
            ctx->pc = 0x2C05ECu;
            return;
        }
    }
    ctx->pc = 0x2BE2C8u;
label_2be2c8:
    // 0x2be2c8: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2be2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2be2cc:
    // 0x2be2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2d0:
    // 0x2be2d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2d4:
    // 0x2be2d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2d8:
    // 0x2be2d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2dc:
    // 0x2be2dc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be2dcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2be2e0:
    // 0x2be2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2e4:
    // 0x2be2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2e8:
    // 0x2be2e8: 0x0  nop
    ctx->pc = 0x2be2e8u;
    // NOP
label_2be2ec:
    // 0x2be2ec: 0x0  nop
    ctx->pc = 0x2be2ecu;
    // NOP
label_2be2f0:
    // 0x2be2f0: 0x0  nop
    ctx->pc = 0x2be2f0u;
    // NOP
label_2be2f4:
    // 0x2be2f4: 0x4a8a0450  vmaxx.y     $vf17, $vf0, $vf10x
    ctx->pc = 0x2be2f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2be2f8:
    // 0x2be2f8: 0x800806bc  lb          $t0, 0x6BC($zero)
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x6BCu));
label_2be2fc:
    // 0x2be2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be300:
    // 0x2be300: 0x810443fe  lb          $a0, 0x43FE($t0)
    ctx->pc = 0x2be300u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 17406)));
label_2be304:
    // 0x2be304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be308:
    // 0x2be308: 0x100740d4  beq         $zero, $a3, . + 4 + (0x40D4 << 2)
label_2be30c:
    if (ctx->pc == 0x2BE30Cu) {
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE308u;
        // 0x2be30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE310u;
        goto label_2be310;
    }
    ctx->pc = 0x2BE308u;
    {
        const bool branch_taken_0x2be308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE308u;
        // 0x2be30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be308) {
            ctx->pc = 0x2CE65Cu;
            return;
        }
    }
    ctx->pc = 0x2BE310u;
label_2be310:
    // 0x2be310: 0x10054001  beq         $zero, $a1, . + 4 + (0x4001 << 2)
label_2be314:
    if (ctx->pc == 0x2BE314u) {
        ctx->pc = 0x2BE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE310u;
        // 0x2be314: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE318u;
        goto label_2be318;
    }
    ctx->pc = 0x2BE310u;
    {
        const bool branch_taken_0x2be310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE310u;
        // 0x2be314: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be310) {
            ctx->pc = 0x2CE318u;
            return;
        }
    }
    ctx->pc = 0x2BE318u;
label_2be318:
    // 0x2be318: 0x90c2800  j           func_430A000
label_2be31c:
    if (ctx->pc == 0x2BE31Cu) {
        ctx->pc = 0x2BE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE318u;
        // 0x2be31c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE320u;
        goto label_2be320;
    }
    ctx->pc = 0x2BE318u;
    ctx->pc = 0x2BE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE318u;
    // 0x2be31c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430A000u, 0x2BE318u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE320u;
label_2be320:
    // 0x2be320: 0x82e2800  j           func_B8A000
label_2be324:
    if (ctx->pc == 0x2BE324u) {
        ctx->pc = 0x2BE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE320u;
        // 0x2be324: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE328u;
        goto label_2be328;
    }
    ctx->pc = 0x2BE320u;
    ctx->pc = 0x2BE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE320u;
    // 0x2be324: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8A000u, 0x2BE320u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE328u;
label_2be328:
    // 0x2be328: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2be32c:
    if (ctx->pc == 0x2BE32Cu) {
        ctx->pc = 0x2BE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE328u;
        // 0x2be32c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE330u;
        goto label_2be330;
    }
    ctx->pc = 0x2BE328u;
    {
        const bool branch_taken_0x2be328 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE328u;
        // 0x2be32c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be328) {
            ctx->pc = 0x2C0328u;
            return;
        }
    }
    ctx->pc = 0x2BE330u;
label_2be330:
    // 0x2be330: 0x10032801  beq         $zero, $v1, . + 4 + (0x2801 << 2)
label_2be334:
    if (ctx->pc == 0x2BE334u) {
        ctx->pc = 0x2BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE330u;
        // 0x2be334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE338u;
        goto label_2be338;
    }
    ctx->pc = 0x2BE330u;
    {
        const bool branch_taken_0x2be330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE330u;
        // 0x2be334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be330) {
            ctx->pc = 0x2C8338u;
            return;
        }
    }
    ctx->pc = 0x2BE338u;
label_2be338:
    // 0x2be338: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2be33c:
    if (ctx->pc == 0x2BE33Cu) {
        ctx->pc = 0x2BE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE338u;
        // 0x2be33c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE340u;
        goto label_2be340;
    }
    ctx->pc = 0x2BE338u;
    {
        const bool branch_taken_0x2be338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE338u;
        // 0x2be33c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be338) {
            ctx->pc = 0x2BE344u;
            goto label_2be344;
        }
    }
    ctx->pc = 0x2BE340u;
label_2be340:
    // 0x2be340: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2be340u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2be344:
    // 0x2be344: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2be344u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2be348:
    // 0x2be348: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2be348u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2be34c:
    // 0x2be34c: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2be34cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2be350:
    // 0x2be350: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2be354:
    if (ctx->pc == 0x2BE354u) {
        ctx->pc = 0x2BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE350u;
        // 0x2be354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE358u;
        goto label_2be358;
    }
    ctx->pc = 0x2BE350u;
    {
        const bool branch_taken_0x2be350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be350) {
            ctx->pc = 0x2BE354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE350u;
            // 0x2be354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE35Cu;
            goto label_2be35c;
        }
    }
    ctx->pc = 0x2BE358u;
label_2be358:
    // 0x2be358: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2be358u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2be35c:
    // 0x2be35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be360:
    // 0x2be360: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2be364:
    if (ctx->pc == 0x2BE364u) {
        ctx->pc = 0x2BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE360u;
        // 0x2be364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE368u;
        goto label_2be368;
    }
    ctx->pc = 0x2BE360u;
    {
        const bool branch_taken_0x2be360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE360u;
        // 0x2be364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be360) {
            ctx->pc = 0x2BE370u;
            goto label_2be370;
        }
    }
    ctx->pc = 0x2BE368u;
label_2be368:
    // 0x2be368: 0x1f42800  .word       0x01F42800                   # sll         $a1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2be36c:
    // 0x2be36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be370:
    // 0x2be370: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2be374:
    // 0x2be374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be378:
    // 0x2be378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be37c:
    // 0x2be37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be380:
    // 0x2be380: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2be380u;
    // NOP (addi to $zero)
label_2be384:
    // 0x2be384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be388:
    // 0x2be388: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2be388u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2be38c:
    // 0x2be38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be390:
    // 0x2be390: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2be390u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2be394:
    // 0x2be394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be398:
    // 0x2be398: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2be398u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2be39c:
    // 0x2be39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3a0:
    // 0x2be3a0: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2be3a4:
    // 0x2be3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3a8:
    // 0x2be3a8: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2be3a8u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2be3ac:
    // 0x2be3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3b0:
    // 0x2be3b0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2be3b0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2be3b4:
    // 0x2be3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3b8:
    // 0x2be3b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3bc:
    // 0x2be3bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3c0:
    // 0x2be3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3c4:
    // 0x2be3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3c8:
    // 0x2be3c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3cc:
    // 0x2be3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3d0:
    // 0x2be3d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3d4:
    // 0x2be3d4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2be3d8:
    // 0x2be3d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3dc:
    // 0x2be3dc: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE3DC raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be3e0:
    // 0x2be3e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3e4:
    // 0x2be3e4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2be3e8:
    // 0x2be3e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3ec:
    // 0x2be3ec: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3ecu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2be3f0:
    // 0x2be3f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3f4:
    // 0x2be3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3f8:
    // 0x2be3f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3fc:
    // 0x2be3fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be400:
    // 0x2be400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be404:
    // 0x2be404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be408:
    // 0x2be408: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2be408u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2be40c:
    // 0x2be40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be410:
    // 0x2be410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be414:
    // 0x2be414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be418:
    // 0x2be418: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be418u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be41c:
    // 0x2be41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be420:
    // 0x2be420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be424:
    // 0x2be424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be428:
    // 0x2be428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be42c:
    // 0x2be42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be430:
    // 0x2be430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be434:
    // 0x2be434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be438:
    // 0x2be438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be43c:
    // 0x2be43c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be43cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2be440:
    // 0x2be440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be444:
    // 0x2be444: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be444u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2be448:
    // 0x2be448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be44c:
    // 0x2be44c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be44cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BE44C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be450:
    // 0x2be450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be454:
    // 0x2be454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be458:
    // 0x2be458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be45c:
    // 0x2be45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be460:
    // 0x2be460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be464:
    // 0x2be464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be468:
    // 0x2be468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be46c:
    // 0x2be46c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be46cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BE46C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be470:
    // 0x2be470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be474:
    // 0x2be474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be478:
    // 0x2be478: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be478u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be47c:
    // 0x2be47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be480:
    // 0x2be480: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be480u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be484:
    // 0x2be484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be488:
    // 0x2be488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be48c:
    // 0x2be48c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be48cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2be490:
    // 0x2be490: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be490u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be494:
    // 0x2be494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be498:
    // 0x2be498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be49c:
    // 0x2be49c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be49cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4a0:
    // 0x2be4a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4a4:
    // 0x2be4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4a8:
    // 0x2be4a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4ac:
    // 0x2be4ac: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be4acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE4AC raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be4b0:
    // 0x2be4b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4b4:
    // 0x2be4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4b8:
    // 0x2be4b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4bc:
    // 0x2be4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4c0:
    // 0x2be4c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4c4:
    // 0x2be4c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4c8:
    // 0x2be4c8: 0x3e7d001  .word       0x03E7D001                   # INVALID     $ra, $a3, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be4c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BE4C8 raw=0x03E7D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be4cc:
    // 0x2be4cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4d0:
    // 0x2be4d0: 0x8035f33d  lb          $s5, -0xCC3($at)
    ctx->pc = 0x2be4d0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964029)));
label_2be4d4:
    // 0x2be4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4d8:
    // 0x2be4d8: 0x81d52b7c  lb          $s5, 0x2B7C($t6)
    ctx->pc = 0x2be4d8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2be4dc:
    // 0x2be4dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4e0:
    // 0x2be4e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4e4:
    // 0x2be4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4e8:
    // 0x2be4e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4ec:
    // 0x2be4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4f0:
    // 0x2be4f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4f4:
    // 0x2be4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be4f8:
    // 0x2be4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be4fc:
    // 0x2be4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be500:
    // 0x2be500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be504:
    // 0x2be504: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be504u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2be508:
    // 0x2be508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be50c:
    // 0x2be50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be510:
    // 0x2be510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be514:
    // 0x2be514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be518:
    // 0x2be518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be51c:
    // 0x2be51c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be51cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be520:
    // 0x2be520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be524:
    // 0x2be524: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BE524 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be528:
    // 0x2be528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be52c:
    // 0x2be52c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be52cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be530:
    // 0x2be530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be534:
    // 0x2be534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be538:
    // 0x2be538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be53c:
    // 0x2be53c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be53cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be540:
    // 0x2be540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be544:
    // 0x2be544: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be544u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2be548:
    // 0x2be548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be54c:
    // 0x2be54c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be54cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be550:
    // 0x2be550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be554:
    // 0x2be554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be558:
    // 0x2be558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be55c:
    // 0x2be55c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be55cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be560:
    // 0x2be560: 0x3e7a800  .word       0x03E7A800                   # sll         $s5, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be560u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2be564:
    // 0x2be564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be568:
    // 0x2be568: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2be568u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2be56c:
    // 0x2be56c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be56cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2be570:
    // 0x2be570: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2be570u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2be574:
    // 0x2be574: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE574 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be578:
    // 0x2be578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be57c:
    // 0x2be57c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be57cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2be580:
    // 0x2be580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be584:
    // 0x2be584: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be584u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2be588:
    // 0x2be588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be58c:
    // 0x2be58c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be58cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be590:
    // 0x2be590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be594:
    // 0x2be594: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be594u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2be598:
    // 0x2be598: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2be598u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2be59c:
    // 0x2be59c: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be59cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2be5a0:
    // 0x2be5a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2be5a4:
    // 0x2be5a4: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be5a4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2be5a8:
    // 0x2be5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be5ac:
    // 0x2be5ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5b0:
    // 0x2be5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be5b4:
    // 0x2be5b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5b8:
    // 0x2be5b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be5b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be5bc:
    // 0x2be5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5c0:
    // 0x2be5c0: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2be5c0u;
    // NOP (addiu $zero, ...)
label_2be5c4:
    // 0x2be5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5c8:
    // 0x2be5c8: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2be5c8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2be5cc:
    // 0x2be5cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5d0:
    // 0x2be5d0: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2be5d0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2be5d4:
    // 0x2be5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5d8:
    // 0x2be5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be5dc:
    // 0x2be5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5e0:
    // 0x2be5e0: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2be5e4:
    if (ctx->pc == 0x2BE5E4u) {
        ctx->pc = 0x2BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E0u;
        // 0x2be5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE5E8u;
        goto label_2be5e8;
    }
    ctx->pc = 0x2BE5E0u;
    {
        const bool branch_taken_0x2be5e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be5e0) {
            ctx->pc = 0x2BE5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE5E0u;
            // 0x2be5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D85FCu;
            return;
        }
    }
    ctx->pc = 0x2BE5E8u;
label_2be5e8:
    // 0x2be5e8: 0x10073802  beq         $zero, $a3, . + 4 + (0x3802 << 2)
label_2be5ec:
    if (ctx->pc == 0x2BE5ECu) {
        ctx->pc = 0x2BE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E8u;
        // 0x2be5ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE5F0u;
        goto label_2be5f0;
    }
    ctx->pc = 0x2BE5E8u;
    {
        const bool branch_taken_0x2be5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E8u;
        // 0x2be5ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5e8) {
            ctx->pc = 0x2CC5F4u;
            return;
        }
    }
    ctx->pc = 0x2BE5F0u;
label_2be5f0:
    // 0x2be5f0: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2be5f0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2be5f4:
    // 0x2be5f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be5f8:
    // 0x2be5f8: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2be5f8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2be5fc:
    // 0x2be5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be600:
    // 0x2be600: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2be600u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2be604:
    // 0x2be604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be608:
    // 0x2be608: 0x5a00480f  blezl       $s0, . + 4 + (0x480F << 2)
label_2be60c:
    if (ctx->pc == 0x2BE60Cu) {
        ctx->pc = 0x2BE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE608u;
        // 0x2be60c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE610u;
        goto label_2be610;
    }
    ctx->pc = 0x2BE608u;
    {
        const bool branch_taken_0x2be608 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be608) {
            ctx->pc = 0x2BE60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE608u;
            // 0x2be60c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0648u;
            return;
        }
    }
    ctx->pc = 0x2BE610u;
label_2be610:
    // 0x2be610: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2be610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2be614:
    // 0x2be614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be618:
    // 0x2be618: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2be618u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2be61c:
    // 0x2be61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be620:
    // 0x2be620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be624:
    // 0x2be624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be628:
    // 0x2be628: 0x520c07b0  beql        $s0, $t4, . + 4 + (0x7B0 << 2)
label_2be62c:
    if (ctx->pc == 0x2BE62Cu) {
        ctx->pc = 0x2BE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE628u;
        // 0x2be62c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE630u;
        goto label_2be630;
    }
    ctx->pc = 0x2BE628u;
    {
        const bool branch_taken_0x2be628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2be628) {
            ctx->pc = 0x2BE62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE628u;
            // 0x2be62c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C04ECu;
            return;
        }
    }
    ctx->pc = 0x2BE630u;
label_2be630:
    // 0x2be630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be634:
    // 0x2be634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be638:
    // 0x2be638: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2be63c:
    if (ctx->pc == 0x2BE63Cu) {
        ctx->pc = 0x2BE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE638u;
        // 0x2be63c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE640u;
        goto label_2be640;
    }
    ctx->pc = 0x2BE638u;
    {
        const bool branch_taken_0x2be638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE638u;
        // 0x2be63c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be638) {
            ctx->pc = 0x2C6640u;
            return;
        }
    }
    ctx->pc = 0x2BE640u;
label_2be640:
    // 0x2be640: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be644:
    // 0x2be644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be648:
    // 0x2be648: 0x5a002799  blezl       $s0, . + 4 + (0x2799 << 2)
label_2be64c:
    if (ctx->pc == 0x2BE64Cu) {
        ctx->pc = 0x2BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE648u;
        // 0x2be64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE650u;
        goto label_2be650;
    }
    ctx->pc = 0x2BE648u;
    {
        const bool branch_taken_0x2be648 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be648) {
            ctx->pc = 0x2BE64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE648u;
            // 0x2be64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C84B0u;
            return;
        }
    }
    ctx->pc = 0x2BE650u;
label_2be650:
    // 0x2be650: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2be650u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2be654:
    // 0x2be654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be658:
    // 0x2be658: 0x100210d4  beq         $zero, $v0, . + 4 + (0x10D4 << 2)
label_2be65c:
    if (ctx->pc == 0x2BE65Cu) {
        ctx->pc = 0x2BE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE658u;
        // 0x2be65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE660u;
        goto label_2be660;
    }
    ctx->pc = 0x2BE658u;
    {
        const bool branch_taken_0x2be658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE658u;
        // 0x2be65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be658) {
            ctx->pc = 0x2C29ACu;
            return;
        }
    }
    ctx->pc = 0x2BE660u;
label_2be660:
    // 0x2be660: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be664:
    // 0x2be664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be668:
    // 0x2be668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be66c:
    // 0x2be66c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be66cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2be670:
    // 0x2be670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be674:
    // 0x2be674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be678:
    // 0x2be678: 0x4000078f  .word       0x4000078F                   # mfc0        $zero, Index # 0000078F <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be678u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2be67c:
    // 0x2be67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be680:
    // 0x2be680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be684:
    // 0x2be684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be688:
    // 0x2be688: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2be688u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2be68c:
    // 0x2be68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be690:
    // 0x2be690: 0x52010011  beql        $s0, $at, . + 4 + (0x11 << 2)
label_2be694:
    if (ctx->pc == 0x2BE694u) {
        ctx->pc = 0x2BE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE690u;
        // 0x2be694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE698u;
        goto label_2be698;
    }
    ctx->pc = 0x2BE690u;
    {
        const bool branch_taken_0x2be690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2be690) {
            ctx->pc = 0x2BE694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE690u;
            // 0x2be694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6D8u;
            goto label_2be6d8;
        }
    }
    ctx->pc = 0x2BE698u;
label_2be698:
    // 0x2be698: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be698u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be69c:
    // 0x2be69c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be69cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6a0:
    // 0x2be6a0: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2be6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2be6a4:
    // 0x2be6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6a8:
    // 0x2be6a8: 0x5201000e  beql        $s0, $at, . + 4 + (0xE << 2)
label_2be6ac:
    if (ctx->pc == 0x2BE6ACu) {
        ctx->pc = 0x2BE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6A8u;
        // 0x2be6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6B0u;
        goto label_2be6b0;
    }
    ctx->pc = 0x2BE6A8u;
    {
        const bool branch_taken_0x2be6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2be6a8) {
            ctx->pc = 0x2BE6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6A8u;
            // 0x2be6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6E4u;
            goto label_2be6e4;
        }
    }
    ctx->pc = 0x2BE6B0u;
label_2be6b0:
    // 0x2be6b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be6b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be6b4:
    // 0x2be6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6b8:
    // 0x2be6b8: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2be6b8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2be6bc:
    // 0x2be6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6c0:
    // 0x2be6c0: 0x5201000b  beql        $s0, $at, . + 4 + (0xB << 2)
label_2be6c4:
    if (ctx->pc == 0x2BE6C4u) {
        ctx->pc = 0x2BE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6C0u;
        // 0x2be6c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6C8u;
        goto label_2be6c8;
    }
    ctx->pc = 0x2BE6C0u;
    {
        const bool branch_taken_0x2be6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2be6c0) {
            ctx->pc = 0x2BE6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6C0u;
            // 0x2be6c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6F0u;
            goto label_2be6f0;
        }
    }
    ctx->pc = 0x2BE6C8u;
label_2be6c8:
    // 0x2be6c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be6c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be6cc:
    // 0x2be6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6d0:
    // 0x2be6d0: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2be6d0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2be6d4:
    // 0x2be6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6d8:
    // 0x2be6d8: 0x52010008  beql        $s0, $at, . + 4 + (0x8 << 2)
label_2be6dc:
    if (ctx->pc == 0x2BE6DCu) {
        ctx->pc = 0x2BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6D8u;
        // 0x2be6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6E0u;
        goto label_2be6e0;
    }
    ctx->pc = 0x2BE6D8u;
    {
        const bool branch_taken_0x2be6d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2be6d8) {
            ctx->pc = 0x2BE6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6D8u;
            // 0x2be6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE6FCu;
            goto label_2be6fc;
        }
    }
    ctx->pc = 0x2BE6E0u;
label_2be6e0:
    // 0x2be6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be6e4:
    // 0x2be6e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6e8:
    // 0x2be6e8: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2be6e8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2be6ec:
    // 0x2be6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be6f0:
    // 0x2be6f0: 0x52010005  beql        $s0, $at, . + 4 + (0x5 << 2)
label_2be6f4:
    if (ctx->pc == 0x2BE6F4u) {
        ctx->pc = 0x2BE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6F0u;
        // 0x2be6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6F8u;
        goto label_2be6f8;
    }
    ctx->pc = 0x2BE6F0u;
    {
        const bool branch_taken_0x2be6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2be6f0) {
            ctx->pc = 0x2BE6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6F0u;
            // 0x2be6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE708u;
            goto label_2be708;
        }
    }
    ctx->pc = 0x2BE6F8u;
label_2be6f8:
    // 0x2be6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be6fc:
    // 0x2be6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be700:
    // 0x2be700: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2be704:
    // 0x2be704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be708:
    // 0x2be708: 0x52010002  beql        $s0, $at, . + 4 + (0x2 << 2)
label_2be70c:
    if (ctx->pc == 0x2BE70Cu) {
        ctx->pc = 0x2BE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE708u;
        // 0x2be70c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE710u;
        goto label_2be710;
    }
    ctx->pc = 0x2BE708u;
    {
        const bool branch_taken_0x2be708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2be708) {
            ctx->pc = 0x2BE70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE708u;
            // 0x2be70c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE714u;
            goto label_2be714;
        }
    }
    ctx->pc = 0x2BE710u;
label_2be710:
    // 0x2be710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be714:
    // 0x2be714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be718:
    // 0x2be718: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be718u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be71c:
    // 0x2be71c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be71cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be720:
    // 0x2be720: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2be724:
    if (ctx->pc == 0x2BE724u) {
        ctx->pc = 0x2BE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE720u;
        // 0x2be724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE728u;
        goto label_2be728;
    }
    ctx->pc = 0x2BE720u;
    {
        const bool branch_taken_0x2be720 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE720u;
        // 0x2be724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be720) {
            ctx->pc = 0x2C4720u;
            return;
        }
    }
    ctx->pc = 0x2BE728u;
label_2be728:
    // 0x2be728: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2be728u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2be72c:
    // 0x2be72c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be72cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be730:
    // 0x2be730: 0xa213fff  j           func_884FFFC
label_2be734:
    if (ctx->pc == 0x2BE734u) {
        ctx->pc = 0x2BE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE730u;
        // 0x2be734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE738u;
        goto label_2be738;
    }
    ctx->pc = 0x2BE730u;
    ctx->pc = 0x2BE734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE730u;
    // 0x2be734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BE730u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE738u;
label_2be738:
    // 0x2be738: 0x400007db  .word       0x400007DB                   # mfc0        $zero, Index # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be738u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2be73c:
    // 0x2be73c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be73cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be740:
    // 0x2be740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be744:
    // 0x2be744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be748:
    // 0x2be748: 0x0  nop
    ctx->pc = 0x2be748u;
    // NOP
label_2be74c:
    // 0x2be74c: 0x0  nop
    ctx->pc = 0x2be74cu;
    // NOP
label_2be750:
    // 0x2be750: 0x0  nop
    ctx->pc = 0x2be750u;
    // NOP
label_2be754:
    // 0x2be754: 0x4a940450  vmaxx.y     $vf17, $vf0, $vf20x
    ctx->pc = 0x2be754u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2be758:
    // 0x2be758: 0x800806bc  lb          $t0, 0x6BC($zero)
    ctx->pc = 0x2be758u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x6BCu));
label_2be75c:
    // 0x2be75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be760:
    // 0x2be760: 0x810443fe  lb          $a0, 0x43FE($t0)
    ctx->pc = 0x2be760u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 17406)));
label_2be764:
    // 0x2be764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be768:
    // 0x2be768: 0x100740d4  beq         $zero, $a3, . + 4 + (0x40D4 << 2)
label_2be76c:
    if (ctx->pc == 0x2BE76Cu) {
        ctx->pc = 0x2BE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE768u;
        // 0x2be76c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE770u;
        goto label_2be770;
    }
    ctx->pc = 0x2BE768u;
    {
        const bool branch_taken_0x2be768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE768u;
        // 0x2be76c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be768) {
            ctx->pc = 0x2CEABCu;
            return;
        }
    }
    ctx->pc = 0x2BE770u;
label_2be770:
    // 0x2be770: 0x10064001  beq         $zero, $a2, . + 4 + (0x4001 << 2)
label_2be774:
    if (ctx->pc == 0x2BE774u) {
        ctx->pc = 0x2BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE770u;
        // 0x2be774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE778u;
        goto label_2be778;
    }
    ctx->pc = 0x2BE770u;
    {
        const bool branch_taken_0x2be770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE770u;
        // 0x2be774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be770) {
            ctx->pc = 0x2CE778u;
            return;
        }
    }
    ctx->pc = 0x2BE778u;
label_2be778:
    // 0x2be778: 0x90c3000  j           func_430C000
label_2be77c:
    if (ctx->pc == 0x2BE77Cu) {
        ctx->pc = 0x2BE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE778u;
        // 0x2be77c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE780u;
        goto label_2be780;
    }
    ctx->pc = 0x2BE778u;
    ctx->pc = 0x2BE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE778u;
    // 0x2be77c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BE778u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE780u;
label_2be780:
    // 0x2be780: 0x82e3000  j           func_B8C000
label_2be784:
    if (ctx->pc == 0x2BE784u) {
        ctx->pc = 0x2BE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE780u;
        // 0x2be784: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE788u;
        goto label_2be788;
    }
    ctx->pc = 0x2BE780u;
    ctx->pc = 0x2BE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE780u;
    // 0x2be784: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BE780u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE788u;
label_2be788:
    // 0x2be788: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2be78c:
    if (ctx->pc == 0x2BE78Cu) {
        ctx->pc = 0x2BE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE788u;
        // 0x2be78c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE790u;
        goto label_2be790;
    }
    ctx->pc = 0x2BE788u;
    {
        const bool branch_taken_0x2be788 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE788u;
        // 0x2be78c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be788) {
            ctx->pc = 0x2C0788u;
            return;
        }
    }
    ctx->pc = 0x2BE790u;
label_2be790:
    // 0x2be790: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2be794:
    if (ctx->pc == 0x2BE794u) {
        ctx->pc = 0x2BE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE790u;
        // 0x2be794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE798u;
        goto label_2be798;
    }
    ctx->pc = 0x2BE790u;
    {
        const bool branch_taken_0x2be790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE790u;
        // 0x2be794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be790) {
            ctx->pc = 0x2CA798u;
            return;
        }
    }
    ctx->pc = 0x2BE798u;
label_2be798:
    // 0x2be798: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2be79c:
    if (ctx->pc == 0x2BE79Cu) {
        ctx->pc = 0x2BE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE798u;
        // 0x2be79c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE7A0u;
        goto label_2be7a0;
    }
    ctx->pc = 0x2BE798u;
    {
        const bool branch_taken_0x2be798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE798u;
        // 0x2be79c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be798) {
            ctx->pc = 0x2BE7A4u;
            goto label_2be7a4;
        }
    }
    ctx->pc = 0x2BE7A0u;
label_2be7a0:
    // 0x2be7a0: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2be7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2be7a4:
    // 0x2be7a4: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2be7a4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2be7a8:
    // 0x2be7a8: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2be7a8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2be7ac:
    // 0x2be7ac: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2be7acu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2be7b0:
    // 0x2be7b0: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2be7b4:
    if (ctx->pc == 0x2BE7B4u) {
        ctx->pc = 0x2BE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7B0u;
        // 0x2be7b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE7B8u;
        goto label_2be7b8;
    }
    ctx->pc = 0x2BE7B0u;
    {
        const bool branch_taken_0x2be7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be7b0) {
            ctx->pc = 0x2BE7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE7B0u;
            // 0x2be7b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE7BCu;
            goto label_2be7bc;
        }
    }
    ctx->pc = 0x2BE7B8u;
label_2be7b8:
    // 0x2be7b8: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2be7b8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2be7bc:
    // 0x2be7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7c0:
    // 0x2be7c0: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2be7c4:
    if (ctx->pc == 0x2BE7C4u) {
        ctx->pc = 0x2BE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7C0u;
        // 0x2be7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE7C8u;
        goto label_2be7c8;
    }
    ctx->pc = 0x2BE7C0u;
    {
        const bool branch_taken_0x2be7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7C0u;
        // 0x2be7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7c0) {
            ctx->pc = 0x2BE7D0u;
            goto label_2be7d0;
        }
    }
    ctx->pc = 0x2BE7C8u;
label_2be7c8:
    // 0x2be7c8: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2be7c8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2be7cc:
    // 0x2be7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7d0:
    // 0x2be7d0: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2be7d4:
    // 0x2be7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7d8:
    // 0x2be7d8: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2be7d8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2be7dc:
    // 0x2be7dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7e0:
    // 0x2be7e0: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2be7e0u;
    // NOP (addi to $zero)
label_2be7e4:
    // 0x2be7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7e8:
    // 0x2be7e8: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2be7e8u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2be7ec:
    // 0x2be7ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7f0:
    // 0x2be7f0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2be7f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2be7f4:
    // 0x2be7f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be7f8:
    // 0x2be7f8: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2be7f8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2be7fc:
    // 0x2be7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be800:
    // 0x2be800: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2be800u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2be804:
    // 0x2be804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be808:
    // 0x2be808: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2be808u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2be80c:
    // 0x2be80c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be80cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be810:
    // 0x2be810: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2be810u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2be814:
    // 0x2be814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be818:
    // 0x2be818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be81c:
    // 0x2be81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be820:
    // 0x2be820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be824:
    // 0x2be824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be828:
    // 0x2be828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be82c:
    // 0x2be82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2be830u;
    return;
}

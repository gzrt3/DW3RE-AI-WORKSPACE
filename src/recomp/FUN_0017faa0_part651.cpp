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


void FUN_0017faa0_part651(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bd0c0u: goto label_2bd0c0;
        case 0x2bd0c4u: goto label_2bd0c4;
        case 0x2bd0c8u: goto label_2bd0c8;
        case 0x2bd0ccu: goto label_2bd0cc;
        case 0x2bd0d0u: goto label_2bd0d0;
        case 0x2bd0d4u: goto label_2bd0d4;
        case 0x2bd0d8u: goto label_2bd0d8;
        case 0x2bd0dcu: goto label_2bd0dc;
        case 0x2bd0e0u: goto label_2bd0e0;
        case 0x2bd0e4u: goto label_2bd0e4;
        case 0x2bd0e8u: goto label_2bd0e8;
        case 0x2bd0ecu: goto label_2bd0ec;
        case 0x2bd0f0u: goto label_2bd0f0;
        case 0x2bd0f4u: goto label_2bd0f4;
        case 0x2bd0f8u: goto label_2bd0f8;
        case 0x2bd0fcu: goto label_2bd0fc;
        case 0x2bd100u: goto label_2bd100;
        case 0x2bd104u: goto label_2bd104;
        case 0x2bd108u: goto label_2bd108;
        case 0x2bd10cu: goto label_2bd10c;
        case 0x2bd110u: goto label_2bd110;
        case 0x2bd114u: goto label_2bd114;
        case 0x2bd118u: goto label_2bd118;
        case 0x2bd11cu: goto label_2bd11c;
        case 0x2bd120u: goto label_2bd120;
        case 0x2bd124u: goto label_2bd124;
        case 0x2bd128u: goto label_2bd128;
        case 0x2bd12cu: goto label_2bd12c;
        case 0x2bd130u: goto label_2bd130;
        case 0x2bd134u: goto label_2bd134;
        case 0x2bd138u: goto label_2bd138;
        case 0x2bd13cu: goto label_2bd13c;
        case 0x2bd140u: goto label_2bd140;
        case 0x2bd144u: goto label_2bd144;
        case 0x2bd148u: goto label_2bd148;
        case 0x2bd14cu: goto label_2bd14c;
        case 0x2bd150u: goto label_2bd150;
        case 0x2bd154u: goto label_2bd154;
        case 0x2bd158u: goto label_2bd158;
        case 0x2bd15cu: goto label_2bd15c;
        case 0x2bd160u: goto label_2bd160;
        case 0x2bd164u: goto label_2bd164;
        case 0x2bd168u: goto label_2bd168;
        case 0x2bd16cu: goto label_2bd16c;
        case 0x2bd170u: goto label_2bd170;
        case 0x2bd174u: goto label_2bd174;
        case 0x2bd178u: goto label_2bd178;
        case 0x2bd17cu: goto label_2bd17c;
        case 0x2bd180u: goto label_2bd180;
        case 0x2bd184u: goto label_2bd184;
        case 0x2bd188u: goto label_2bd188;
        case 0x2bd18cu: goto label_2bd18c;
        case 0x2bd190u: goto label_2bd190;
        case 0x2bd194u: goto label_2bd194;
        case 0x2bd198u: goto label_2bd198;
        case 0x2bd19cu: goto label_2bd19c;
        case 0x2bd1a0u: goto label_2bd1a0;
        case 0x2bd1a4u: goto label_2bd1a4;
        case 0x2bd1a8u: goto label_2bd1a8;
        case 0x2bd1acu: goto label_2bd1ac;
        case 0x2bd1b0u: goto label_2bd1b0;
        case 0x2bd1b4u: goto label_2bd1b4;
        case 0x2bd1b8u: goto label_2bd1b8;
        case 0x2bd1bcu: goto label_2bd1bc;
        case 0x2bd1c0u: goto label_2bd1c0;
        case 0x2bd1c4u: goto label_2bd1c4;
        case 0x2bd1c8u: goto label_2bd1c8;
        case 0x2bd1ccu: goto label_2bd1cc;
        case 0x2bd1d0u: goto label_2bd1d0;
        case 0x2bd1d4u: goto label_2bd1d4;
        case 0x2bd1d8u: goto label_2bd1d8;
        case 0x2bd1dcu: goto label_2bd1dc;
        case 0x2bd1e0u: goto label_2bd1e0;
        case 0x2bd1e4u: goto label_2bd1e4;
        case 0x2bd1e8u: goto label_2bd1e8;
        case 0x2bd1ecu: goto label_2bd1ec;
        case 0x2bd1f0u: goto label_2bd1f0;
        case 0x2bd1f4u: goto label_2bd1f4;
        case 0x2bd1f8u: goto label_2bd1f8;
        case 0x2bd1fcu: goto label_2bd1fc;
        case 0x2bd200u: goto label_2bd200;
        case 0x2bd204u: goto label_2bd204;
        case 0x2bd208u: goto label_2bd208;
        case 0x2bd20cu: goto label_2bd20c;
        case 0x2bd210u: goto label_2bd210;
        case 0x2bd214u: goto label_2bd214;
        case 0x2bd218u: goto label_2bd218;
        case 0x2bd21cu: goto label_2bd21c;
        case 0x2bd220u: goto label_2bd220;
        case 0x2bd224u: goto label_2bd224;
        case 0x2bd228u: goto label_2bd228;
        case 0x2bd22cu: goto label_2bd22c;
        case 0x2bd230u: goto label_2bd230;
        case 0x2bd234u: goto label_2bd234;
        case 0x2bd238u: goto label_2bd238;
        case 0x2bd23cu: goto label_2bd23c;
        case 0x2bd240u: goto label_2bd240;
        case 0x2bd244u: goto label_2bd244;
        case 0x2bd248u: goto label_2bd248;
        case 0x2bd24cu: goto label_2bd24c;
        case 0x2bd250u: goto label_2bd250;
        case 0x2bd254u: goto label_2bd254;
        case 0x2bd258u: goto label_2bd258;
        case 0x2bd25cu: goto label_2bd25c;
        case 0x2bd260u: goto label_2bd260;
        case 0x2bd264u: goto label_2bd264;
        case 0x2bd268u: goto label_2bd268;
        case 0x2bd26cu: goto label_2bd26c;
        case 0x2bd270u: goto label_2bd270;
        case 0x2bd274u: goto label_2bd274;
        case 0x2bd278u: goto label_2bd278;
        case 0x2bd27cu: goto label_2bd27c;
        case 0x2bd280u: goto label_2bd280;
        case 0x2bd284u: goto label_2bd284;
        case 0x2bd288u: goto label_2bd288;
        case 0x2bd28cu: goto label_2bd28c;
        case 0x2bd290u: goto label_2bd290;
        case 0x2bd294u: goto label_2bd294;
        case 0x2bd298u: goto label_2bd298;
        case 0x2bd29cu: goto label_2bd29c;
        case 0x2bd2a0u: goto label_2bd2a0;
        case 0x2bd2a4u: goto label_2bd2a4;
        case 0x2bd2a8u: goto label_2bd2a8;
        case 0x2bd2acu: goto label_2bd2ac;
        case 0x2bd2b0u: goto label_2bd2b0;
        case 0x2bd2b4u: goto label_2bd2b4;
        case 0x2bd2b8u: goto label_2bd2b8;
        case 0x2bd2bcu: goto label_2bd2bc;
        case 0x2bd2c0u: goto label_2bd2c0;
        case 0x2bd2c4u: goto label_2bd2c4;
        case 0x2bd2c8u: goto label_2bd2c8;
        case 0x2bd2ccu: goto label_2bd2cc;
        case 0x2bd2d0u: goto label_2bd2d0;
        case 0x2bd2d4u: goto label_2bd2d4;
        case 0x2bd2d8u: goto label_2bd2d8;
        case 0x2bd2dcu: goto label_2bd2dc;
        case 0x2bd2e0u: goto label_2bd2e0;
        case 0x2bd2e4u: goto label_2bd2e4;
        case 0x2bd2e8u: goto label_2bd2e8;
        case 0x2bd2ecu: goto label_2bd2ec;
        case 0x2bd2f0u: goto label_2bd2f0;
        case 0x2bd2f4u: goto label_2bd2f4;
        case 0x2bd2f8u: goto label_2bd2f8;
        case 0x2bd2fcu: goto label_2bd2fc;
        case 0x2bd300u: goto label_2bd300;
        case 0x2bd304u: goto label_2bd304;
        case 0x2bd308u: goto label_2bd308;
        case 0x2bd30cu: goto label_2bd30c;
        case 0x2bd310u: goto label_2bd310;
        case 0x2bd314u: goto label_2bd314;
        case 0x2bd318u: goto label_2bd318;
        case 0x2bd31cu: goto label_2bd31c;
        case 0x2bd320u: goto label_2bd320;
        case 0x2bd324u: goto label_2bd324;
        case 0x2bd328u: goto label_2bd328;
        case 0x2bd32cu: goto label_2bd32c;
        case 0x2bd330u: goto label_2bd330;
        case 0x2bd334u: goto label_2bd334;
        case 0x2bd338u: goto label_2bd338;
        case 0x2bd33cu: goto label_2bd33c;
        case 0x2bd340u: goto label_2bd340;
        case 0x2bd344u: goto label_2bd344;
        case 0x2bd348u: goto label_2bd348;
        case 0x2bd34cu: goto label_2bd34c;
        case 0x2bd350u: goto label_2bd350;
        case 0x2bd354u: goto label_2bd354;
        case 0x2bd358u: goto label_2bd358;
        case 0x2bd35cu: goto label_2bd35c;
        case 0x2bd360u: goto label_2bd360;
        case 0x2bd364u: goto label_2bd364;
        case 0x2bd368u: goto label_2bd368;
        case 0x2bd36cu: goto label_2bd36c;
        case 0x2bd370u: goto label_2bd370;
        case 0x2bd374u: goto label_2bd374;
        case 0x2bd378u: goto label_2bd378;
        case 0x2bd37cu: goto label_2bd37c;
        case 0x2bd380u: goto label_2bd380;
        case 0x2bd384u: goto label_2bd384;
        case 0x2bd388u: goto label_2bd388;
        case 0x2bd38cu: goto label_2bd38c;
        case 0x2bd390u: goto label_2bd390;
        case 0x2bd394u: goto label_2bd394;
        case 0x2bd398u: goto label_2bd398;
        case 0x2bd39cu: goto label_2bd39c;
        case 0x2bd3a0u: goto label_2bd3a0;
        case 0x2bd3a4u: goto label_2bd3a4;
        case 0x2bd3a8u: goto label_2bd3a8;
        case 0x2bd3acu: goto label_2bd3ac;
        case 0x2bd3b0u: goto label_2bd3b0;
        case 0x2bd3b4u: goto label_2bd3b4;
        case 0x2bd3b8u: goto label_2bd3b8;
        case 0x2bd3bcu: goto label_2bd3bc;
        case 0x2bd3c0u: goto label_2bd3c0;
        case 0x2bd3c4u: goto label_2bd3c4;
        case 0x2bd3c8u: goto label_2bd3c8;
        case 0x2bd3ccu: goto label_2bd3cc;
        case 0x2bd3d0u: goto label_2bd3d0;
        case 0x2bd3d4u: goto label_2bd3d4;
        case 0x2bd3d8u: goto label_2bd3d8;
        case 0x2bd3dcu: goto label_2bd3dc;
        case 0x2bd3e0u: goto label_2bd3e0;
        case 0x2bd3e4u: goto label_2bd3e4;
        case 0x2bd3e8u: goto label_2bd3e8;
        case 0x2bd3ecu: goto label_2bd3ec;
        case 0x2bd3f0u: goto label_2bd3f0;
        case 0x2bd3f4u: goto label_2bd3f4;
        case 0x2bd3f8u: goto label_2bd3f8;
        case 0x2bd3fcu: goto label_2bd3fc;
        case 0x2bd400u: goto label_2bd400;
        case 0x2bd404u: goto label_2bd404;
        case 0x2bd408u: goto label_2bd408;
        case 0x2bd40cu: goto label_2bd40c;
        case 0x2bd410u: goto label_2bd410;
        case 0x2bd414u: goto label_2bd414;
        case 0x2bd418u: goto label_2bd418;
        case 0x2bd41cu: goto label_2bd41c;
        case 0x2bd420u: goto label_2bd420;
        case 0x2bd424u: goto label_2bd424;
        case 0x2bd428u: goto label_2bd428;
        case 0x2bd42cu: goto label_2bd42c;
        case 0x2bd430u: goto label_2bd430;
        case 0x2bd434u: goto label_2bd434;
        case 0x2bd438u: goto label_2bd438;
        case 0x2bd43cu: goto label_2bd43c;
        case 0x2bd440u: goto label_2bd440;
        case 0x2bd444u: goto label_2bd444;
        case 0x2bd448u: goto label_2bd448;
        case 0x2bd44cu: goto label_2bd44c;
        case 0x2bd450u: goto label_2bd450;
        case 0x2bd454u: goto label_2bd454;
        case 0x2bd458u: goto label_2bd458;
        case 0x2bd45cu: goto label_2bd45c;
        case 0x2bd460u: goto label_2bd460;
        case 0x2bd464u: goto label_2bd464;
        case 0x2bd468u: goto label_2bd468;
        case 0x2bd46cu: goto label_2bd46c;
        case 0x2bd470u: goto label_2bd470;
        case 0x2bd474u: goto label_2bd474;
        case 0x2bd478u: goto label_2bd478;
        case 0x2bd47cu: goto label_2bd47c;
        case 0x2bd480u: goto label_2bd480;
        case 0x2bd484u: goto label_2bd484;
        case 0x2bd488u: goto label_2bd488;
        case 0x2bd48cu: goto label_2bd48c;
        case 0x2bd490u: goto label_2bd490;
        case 0x2bd494u: goto label_2bd494;
        case 0x2bd498u: goto label_2bd498;
        case 0x2bd49cu: goto label_2bd49c;
        case 0x2bd4a0u: goto label_2bd4a0;
        case 0x2bd4a4u: goto label_2bd4a4;
        case 0x2bd4a8u: goto label_2bd4a8;
        case 0x2bd4acu: goto label_2bd4ac;
        case 0x2bd4b0u: goto label_2bd4b0;
        case 0x2bd4b4u: goto label_2bd4b4;
        case 0x2bd4b8u: goto label_2bd4b8;
        case 0x2bd4bcu: goto label_2bd4bc;
        case 0x2bd4c0u: goto label_2bd4c0;
        case 0x2bd4c4u: goto label_2bd4c4;
        case 0x2bd4c8u: goto label_2bd4c8;
        case 0x2bd4ccu: goto label_2bd4cc;
        case 0x2bd4d0u: goto label_2bd4d0;
        case 0x2bd4d4u: goto label_2bd4d4;
        case 0x2bd4d8u: goto label_2bd4d8;
        case 0x2bd4dcu: goto label_2bd4dc;
        case 0x2bd4e0u: goto label_2bd4e0;
        case 0x2bd4e4u: goto label_2bd4e4;
        case 0x2bd4e8u: goto label_2bd4e8;
        case 0x2bd4ecu: goto label_2bd4ec;
        case 0x2bd4f0u: goto label_2bd4f0;
        case 0x2bd4f4u: goto label_2bd4f4;
        case 0x2bd4f8u: goto label_2bd4f8;
        case 0x2bd4fcu: goto label_2bd4fc;
        case 0x2bd500u: goto label_2bd500;
        case 0x2bd504u: goto label_2bd504;
        case 0x2bd508u: goto label_2bd508;
        case 0x2bd50cu: goto label_2bd50c;
        case 0x2bd510u: goto label_2bd510;
        case 0x2bd514u: goto label_2bd514;
        case 0x2bd518u: goto label_2bd518;
        case 0x2bd51cu: goto label_2bd51c;
        case 0x2bd520u: goto label_2bd520;
        case 0x2bd524u: goto label_2bd524;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd52cu: goto label_2bd52c;
        case 0x2bd530u: goto label_2bd530;
        case 0x2bd534u: goto label_2bd534;
        case 0x2bd538u: goto label_2bd538;
        case 0x2bd53cu: goto label_2bd53c;
        case 0x2bd540u: goto label_2bd540;
        case 0x2bd544u: goto label_2bd544;
        case 0x2bd548u: goto label_2bd548;
        case 0x2bd54cu: goto label_2bd54c;
        case 0x2bd550u: goto label_2bd550;
        case 0x2bd554u: goto label_2bd554;
        case 0x2bd558u: goto label_2bd558;
        case 0x2bd55cu: goto label_2bd55c;
        case 0x2bd560u: goto label_2bd560;
        case 0x2bd564u: goto label_2bd564;
        case 0x2bd568u: goto label_2bd568;
        case 0x2bd56cu: goto label_2bd56c;
        case 0x2bd570u: goto label_2bd570;
        case 0x2bd574u: goto label_2bd574;
        case 0x2bd578u: goto label_2bd578;
        case 0x2bd57cu: goto label_2bd57c;
        case 0x2bd580u: goto label_2bd580;
        case 0x2bd584u: goto label_2bd584;
        case 0x2bd588u: goto label_2bd588;
        case 0x2bd58cu: goto label_2bd58c;
        case 0x2bd590u: goto label_2bd590;
        case 0x2bd594u: goto label_2bd594;
        case 0x2bd598u: goto label_2bd598;
        case 0x2bd59cu: goto label_2bd59c;
        case 0x2bd5a0u: goto label_2bd5a0;
        case 0x2bd5a4u: goto label_2bd5a4;
        case 0x2bd5a8u: goto label_2bd5a8;
        case 0x2bd5acu: goto label_2bd5ac;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5b4u: goto label_2bd5b4;
        case 0x2bd5b8u: goto label_2bd5b8;
        case 0x2bd5bcu: goto label_2bd5bc;
        case 0x2bd5c0u: goto label_2bd5c0;
        case 0x2bd5c4u: goto label_2bd5c4;
        case 0x2bd5c8u: goto label_2bd5c8;
        case 0x2bd5ccu: goto label_2bd5cc;
        case 0x2bd5d0u: goto label_2bd5d0;
        case 0x2bd5d4u: goto label_2bd5d4;
        case 0x2bd5d8u: goto label_2bd5d8;
        case 0x2bd5dcu: goto label_2bd5dc;
        case 0x2bd5e0u: goto label_2bd5e0;
        case 0x2bd5e4u: goto label_2bd5e4;
        case 0x2bd5e8u: goto label_2bd5e8;
        case 0x2bd5ecu: goto label_2bd5ec;
        case 0x2bd5f0u: goto label_2bd5f0;
        case 0x2bd5f4u: goto label_2bd5f4;
        case 0x2bd5f8u: goto label_2bd5f8;
        case 0x2bd5fcu: goto label_2bd5fc;
        case 0x2bd600u: goto label_2bd600;
        case 0x2bd604u: goto label_2bd604;
        case 0x2bd608u: goto label_2bd608;
        case 0x2bd60cu: goto label_2bd60c;
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd614u: goto label_2bd614;
        case 0x2bd618u: goto label_2bd618;
        case 0x2bd61cu: goto label_2bd61c;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd624u: goto label_2bd624;
        case 0x2bd628u: goto label_2bd628;
        case 0x2bd62cu: goto label_2bd62c;
        case 0x2bd630u: goto label_2bd630;
        case 0x2bd634u: goto label_2bd634;
        case 0x2bd638u: goto label_2bd638;
        case 0x2bd63cu: goto label_2bd63c;
        case 0x2bd640u: goto label_2bd640;
        case 0x2bd644u: goto label_2bd644;
        case 0x2bd648u: goto label_2bd648;
        case 0x2bd64cu: goto label_2bd64c;
        case 0x2bd650u: goto label_2bd650;
        case 0x2bd654u: goto label_2bd654;
        case 0x2bd658u: goto label_2bd658;
        case 0x2bd65cu: goto label_2bd65c;
        case 0x2bd660u: goto label_2bd660;
        case 0x2bd664u: goto label_2bd664;
        case 0x2bd668u: goto label_2bd668;
        case 0x2bd66cu: goto label_2bd66c;
        case 0x2bd670u: goto label_2bd670;
        case 0x2bd674u: goto label_2bd674;
        case 0x2bd678u: goto label_2bd678;
        case 0x2bd67cu: goto label_2bd67c;
        case 0x2bd680u: goto label_2bd680;
        case 0x2bd684u: goto label_2bd684;
        case 0x2bd688u: goto label_2bd688;
        case 0x2bd68cu: goto label_2bd68c;
        case 0x2bd690u: goto label_2bd690;
        case 0x2bd694u: goto label_2bd694;
        case 0x2bd698u: goto label_2bd698;
        case 0x2bd69cu: goto label_2bd69c;
        case 0x2bd6a0u: goto label_2bd6a0;
        case 0x2bd6a4u: goto label_2bd6a4;
        case 0x2bd6a8u: goto label_2bd6a8;
        case 0x2bd6acu: goto label_2bd6ac;
        case 0x2bd6b0u: goto label_2bd6b0;
        case 0x2bd6b4u: goto label_2bd6b4;
        case 0x2bd6b8u: goto label_2bd6b8;
        case 0x2bd6bcu: goto label_2bd6bc;
        case 0x2bd6c0u: goto label_2bd6c0;
        case 0x2bd6c4u: goto label_2bd6c4;
        case 0x2bd6c8u: goto label_2bd6c8;
        case 0x2bd6ccu: goto label_2bd6cc;
        case 0x2bd6d0u: goto label_2bd6d0;
        case 0x2bd6d4u: goto label_2bd6d4;
        case 0x2bd6d8u: goto label_2bd6d8;
        case 0x2bd6dcu: goto label_2bd6dc;
        case 0x2bd6e0u: goto label_2bd6e0;
        case 0x2bd6e4u: goto label_2bd6e4;
        case 0x2bd6e8u: goto label_2bd6e8;
        case 0x2bd6ecu: goto label_2bd6ec;
        case 0x2bd6f0u: goto label_2bd6f0;
        case 0x2bd6f4u: goto label_2bd6f4;
        case 0x2bd6f8u: goto label_2bd6f8;
        case 0x2bd6fcu: goto label_2bd6fc;
        case 0x2bd700u: goto label_2bd700;
        case 0x2bd704u: goto label_2bd704;
        case 0x2bd708u: goto label_2bd708;
        case 0x2bd70cu: goto label_2bd70c;
        case 0x2bd710u: goto label_2bd710;
        case 0x2bd714u: goto label_2bd714;
        case 0x2bd718u: goto label_2bd718;
        case 0x2bd71cu: goto label_2bd71c;
        case 0x2bd720u: goto label_2bd720;
        case 0x2bd724u: goto label_2bd724;
        case 0x2bd728u: goto label_2bd728;
        case 0x2bd72cu: goto label_2bd72c;
        case 0x2bd730u: goto label_2bd730;
        case 0x2bd734u: goto label_2bd734;
        case 0x2bd738u: goto label_2bd738;
        case 0x2bd73cu: goto label_2bd73c;
        case 0x2bd740u: goto label_2bd740;
        case 0x2bd744u: goto label_2bd744;
        case 0x2bd748u: goto label_2bd748;
        case 0x2bd74cu: goto label_2bd74c;
        case 0x2bd750u: goto label_2bd750;
        case 0x2bd754u: goto label_2bd754;
        case 0x2bd758u: goto label_2bd758;
        case 0x2bd75cu: goto label_2bd75c;
        case 0x2bd760u: goto label_2bd760;
        case 0x2bd764u: goto label_2bd764;
        case 0x2bd768u: goto label_2bd768;
        case 0x2bd76cu: goto label_2bd76c;
        case 0x2bd770u: goto label_2bd770;
        case 0x2bd774u: goto label_2bd774;
        case 0x2bd778u: goto label_2bd778;
        case 0x2bd77cu: goto label_2bd77c;
        case 0x2bd780u: goto label_2bd780;
        case 0x2bd784u: goto label_2bd784;
        case 0x2bd788u: goto label_2bd788;
        case 0x2bd78cu: goto label_2bd78c;
        case 0x2bd790u: goto label_2bd790;
        case 0x2bd794u: goto label_2bd794;
        case 0x2bd798u: goto label_2bd798;
        case 0x2bd79cu: goto label_2bd79c;
        case 0x2bd7a0u: goto label_2bd7a0;
        case 0x2bd7a4u: goto label_2bd7a4;
        case 0x2bd7a8u: goto label_2bd7a8;
        case 0x2bd7acu: goto label_2bd7ac;
        case 0x2bd7b0u: goto label_2bd7b0;
        case 0x2bd7b4u: goto label_2bd7b4;
        case 0x2bd7b8u: goto label_2bd7b8;
        case 0x2bd7bcu: goto label_2bd7bc;
        case 0x2bd7c0u: goto label_2bd7c0;
        case 0x2bd7c4u: goto label_2bd7c4;
        case 0x2bd7c8u: goto label_2bd7c8;
        case 0x2bd7ccu: goto label_2bd7cc;
        case 0x2bd7d0u: goto label_2bd7d0;
        case 0x2bd7d4u: goto label_2bd7d4;
        case 0x2bd7d8u: goto label_2bd7d8;
        case 0x2bd7dcu: goto label_2bd7dc;
        case 0x2bd7e0u: goto label_2bd7e0;
        case 0x2bd7e4u: goto label_2bd7e4;
        case 0x2bd7e8u: goto label_2bd7e8;
        case 0x2bd7ecu: goto label_2bd7ec;
        case 0x2bd7f0u: goto label_2bd7f0;
        case 0x2bd7f4u: goto label_2bd7f4;
        case 0x2bd7f8u: goto label_2bd7f8;
        case 0x2bd7fcu: goto label_2bd7fc;
        case 0x2bd800u: goto label_2bd800;
        case 0x2bd804u: goto label_2bd804;
        case 0x2bd808u: goto label_2bd808;
        case 0x2bd80cu: goto label_2bd80c;
        case 0x2bd810u: goto label_2bd810;
        case 0x2bd814u: goto label_2bd814;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd81cu: goto label_2bd81c;
        case 0x2bd820u: goto label_2bd820;
        case 0x2bd824u: goto label_2bd824;
        case 0x2bd828u: goto label_2bd828;
        case 0x2bd82cu: goto label_2bd82c;
        case 0x2bd830u: goto label_2bd830;
        case 0x2bd834u: goto label_2bd834;
        case 0x2bd838u: goto label_2bd838;
        case 0x2bd83cu: goto label_2bd83c;
        case 0x2bd840u: goto label_2bd840;
        case 0x2bd844u: goto label_2bd844;
        case 0x2bd848u: goto label_2bd848;
        case 0x2bd84cu: goto label_2bd84c;
        case 0x2bd850u: goto label_2bd850;
        case 0x2bd854u: goto label_2bd854;
        case 0x2bd858u: goto label_2bd858;
        case 0x2bd85cu: goto label_2bd85c;
        case 0x2bd860u: goto label_2bd860;
        case 0x2bd864u: goto label_2bd864;
        case 0x2bd868u: goto label_2bd868;
        case 0x2bd86cu: goto label_2bd86c;
        case 0x2bd870u: goto label_2bd870;
        case 0x2bd874u: goto label_2bd874;
        case 0x2bd878u: goto label_2bd878;
        case 0x2bd87cu: goto label_2bd87c;
        case 0x2bd880u: goto label_2bd880;
        case 0x2bd884u: goto label_2bd884;
        case 0x2bd888u: goto label_2bd888;
        case 0x2bd88cu: goto label_2bd88c;
        default: return;
    }

label_2bd0c0:
    // 0x2bd0c0: 0x120f7048  beq         $s0, $t7, . + 4 + (0x7048 << 2)
label_2bd0c4:
    if (ctx->pc == 0x2BD0C4u) {
        ctx->pc = 0x2BD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C0u;
        // 0x2bd0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0C8u;
        goto label_2bd0c8;
    }
    ctx->pc = 0x2BD0C0u;
    {
        const bool branch_taken_0x2bd0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C0u;
        // 0x2bd0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0c0) {
            ctx->pc = 0x2D91E4u;
            return;
        }
    }
    ctx->pc = 0x2BD0C8u;
label_2bd0c8:
    // 0x2bd0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd0cc:
    // 0x2bd0cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd0d0:
    // 0x2bd0d0: 0x5a00781f  blezl       $s0, . + 4 + (0x781F << 2)
label_2bd0d4:
    if (ctx->pc == 0x2BD0D4u) {
        ctx->pc = 0x2BD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0D0u;
        // 0x2bd0d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0D8u;
        goto label_2bd0d8;
    }
    ctx->pc = 0x2BD0D0u;
    {
        const bool branch_taken_0x2bd0d0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bd0d0) {
            ctx->pc = 0x2BD0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD0D0u;
            // 0x2bd0d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB150u;
            return;
        }
    }
    ctx->pc = 0x2BD0D8u;
label_2bd0d8:
    // 0x2bd0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd0dc:
    // 0x2bd0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd0e0:
    // 0x2bd0e0: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bd0e4:
    if (ctx->pc == 0x2BD0E4u) {
        ctx->pc = 0x2BD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0E0u;
        // 0x2bd0e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0E8u;
        goto label_2bd0e8;
    }
    ctx->pc = 0x2BD0E0u;
    {
        const bool branch_taken_0x2bd0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0E0u;
        // 0x2bd0e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0e0) {
            ctx->pc = 0x2D912Cu;
            return;
        }
    }
    ctx->pc = 0x2BD0E8u;
label_2bd0e8:
    // 0x2bd0e8: 0x1f947f8  .word       0x01F947F8                   # dsll        $t0, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd0e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << 31);
label_2bd0ec:
    // 0x2bd0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd0f0:
    // 0x2bd0f0: 0x1fb47fb  .word       0x01FB47FB                   # dsra        $t0, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd0f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 27) >> 31);
label_2bd0f4:
    // 0x2bd0f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd0f8:
    // 0x2bd0f8: 0x1fc47fe  .word       0x01FC47FE                   # dsrl32      $t0, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd0f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 28) >> (32 + 31));
label_2bd0fc:
    // 0x2bd0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd100:
    // 0x2bd100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd104:
    // 0x2bd104: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd104u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2bd108:
    // 0x2bd108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd10c:
    // 0x2bd10c: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd10cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2bd110:
    // 0x2bd110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd114:
    // 0x2bd114: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd114u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2bd118:
    // 0x2bd118: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd118u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BD118 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd11c:
    // 0x2bd11c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd11cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd120:
    // 0x2bd120: 0x3efd805  .word       0x03EFD805                   # INVALID     $ra, $t7, -0x27FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BD120 raw=0x03EFD805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd124:
    // 0x2bd124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd128:
    // 0x2bd128: 0x3efe009  .word       0x03EFE009                   # jalr        $gp, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_2bd12c:
    if (ctx->pc == 0x2BD12Cu) {
        ctx->pc = 0x2BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD128u;
        // 0x2bd12c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD130u;
        goto label_2bd130;
    }
    ctx->pc = 0x2BD128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 28, 0x2BD130u);
        ctx->pc = 0x2BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD128u;
        // 0x2bd12c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD128u, 0x2BD130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BD130u;
label_2bd130:
    // 0x2bd130: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BD130 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd134:
    // 0x2bd134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd138:
    // 0x2bd138: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bd13c:
    // 0x2bd13c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd13cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd140:
    // 0x2bd140: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd140u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bd144:
    // 0x2bd144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd148:
    // 0x2bd148: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd148u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BD148 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd14c:
    // 0x2bd14c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd150:
    // 0x2bd150: 0x19b37fe  .word       0x019B37FE                   # dsrl32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 27) >> (32 + 31));
label_2bd154:
    // 0x2bd154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd158:
    // 0x2bd158: 0x19c37ff  .word       0x019C37FF                   # dsra32      $a2, $gp, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd158u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 28) >> (32 + 31));
label_2bd15c:
    // 0x2bd15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd160:
    // 0x2bd160: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2bd164:
    // 0x2bd164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd168:
    // 0x2bd168: 0x3efb806  srlv        $s7, $t7, $ra
    ctx->pc = 0x2bd168u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bd16c:
    // 0x2bd16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd170:
    // 0x2bd170: 0x3efc00a  movz        $t8, $ra, $t7
    ctx->pc = 0x2bd170u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bd174:
    // 0x2bd174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd178:
    // 0x2bd178: 0x3efc803  .word       0x03EFC803                   # sra         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd178u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 15), 0));
label_2bd17c:
    // 0x2bd17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd180:
    // 0x2bd180: 0x3efd807  srav        $k1, $t7, $ra
    ctx->pc = 0x2bd180u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bd184:
    // 0x2bd184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd188:
    // 0x2bd188: 0x3efe00b  movn        $gp, $ra, $t7
    ctx->pc = 0x2bd188u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 31));
label_2bd18c:
    // 0x2bd18c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd18cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd190:
    // 0x2bd190: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd190u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2bd194:
    // 0x2bd194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd198:
    // 0x2bd198: 0x3ef8804  sllv        $s1, $t7, $ra
    ctx->pc = 0x2bd198u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bd19c:
    // 0x2bd19c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd19cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1a0:
    // 0x2bd1a0: 0x3ef9008  .word       0x03EF9008                   # jr          $ra # 000F9000 <InstrIdType: CPU_SPECIAL>
label_2bd1a4:
    if (ctx->pc == 0x2BD1A4u) {
        ctx->pc = 0x2BD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1A0u;
        // 0x2bd1a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD1A8u;
        goto label_2bd1a8;
    }
    ctx->pc = 0x2BD1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1A0u;
        // 0x2bd1a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD1A8u;
label_2bd1a8:
    // 0x2bd1a8: 0x100e700c  beq         $zero, $t6, . + 4 + (0x700C << 2)
label_2bd1ac:
    if (ctx->pc == 0x2BD1ACu) {
        ctx->pc = 0x2BD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1A8u;
        // 0x2bd1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD1B0u;
        goto label_2bd1b0;
    }
    ctx->pc = 0x2BD1A8u;
    {
        const bool branch_taken_0x2bd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1A8u;
        // 0x2bd1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1a8) {
            ctx->pc = 0x2D91DCu;
            return;
        }
    }
    ctx->pc = 0x2BD1B0u;
label_2bd1b0:
    // 0x2bd1b0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bd1b0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bd1b4:
    // 0x2bd1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1b8:
    // 0x2bd1b8: 0xa8e080a  j           func_A382028
label_2bd1bc:
    if (ctx->pc == 0x2BD1BCu) {
        ctx->pc = 0x2BD1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1B8u;
        // 0x2bd1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD1C0u;
        goto label_2bd1c0;
    }
    ctx->pc = 0x2BD1B8u;
    ctx->pc = 0x2BD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1B8u;
    // 0x2bd1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382028u, 0x2BD1B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD1C0u;
label_2bd1c0:
    // 0x2bd1c0: 0x40000007  .word       0x40000007                   # mfc0        $zero, Index # 00000007 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bd1c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bd1c4:
    // 0x2bd1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1c8:
    // 0x2bd1c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd1c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd1cc:
    // 0x2bd1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1d0:
    // 0x2bd1d0: 0x420f000b  .word       0x420F000B                   # INVALID     $s0, $t7, 0xB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd1d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xB at 0x2BD1D0 raw=0x420F000B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd1d4:
    // 0x2bd1d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1d8:
    // 0x2bd1d8: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2bd1dc:
    if (ctx->pc == 0x2BD1DCu) {
        ctx->pc = 0x2BD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1D8u;
        // 0x2bd1dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD1E0u;
        goto label_2bd1e0;
    }
    ctx->pc = 0x2BD1D8u;
    {
        const bool branch_taken_0x2bd1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1D8u;
        // 0x2bd1dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1d8) {
            ctx->pc = 0x2BD548u;
            goto label_2bd548;
        }
    }
    ctx->pc = 0x2BD1E0u;
label_2bd1e0:
    // 0x2bd1e0: 0x420f0036  .word       0x420F0036                   # INVALID     $s0, $t7, 0x36 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd1e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x36 at 0x2BD1E0 raw=0x420F0036"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd1e4:
    // 0x2bd1e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1e8:
    // 0x2bd1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd1ec:
    // 0x2bd1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1f0:
    // 0x2bd1f0: 0x420f001d  .word       0x420F001D                   # INVALID     $s0, $t7, 0x1D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd1f0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2BD1F0 raw=0x420F001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd1f4:
    // 0x2bd1f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd1f8:
    // 0x2bd1f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd1f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd1fc:
    // 0x2bd1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd200:
    // 0x2bd200: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bd204:
    if (ctx->pc == 0x2BD204u) {
        ctx->pc = 0x2BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD200u;
        // 0x2bd204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD208u;
        goto label_2bd208;
    }
    ctx->pc = 0x2BD200u;
    {
        const bool branch_taken_0x2bd200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD200u;
        // 0x2bd204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd200) {
            ctx->pc = 0x2C3200u;
            return;
        }
    }
    ctx->pc = 0x2BD208u;
label_2bd208:
    // 0x2bd208: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bd208u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bd20c:
    // 0x2bd20c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd20cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd210:
    // 0x2bd210: 0xa213fff  j           func_884FFFC
label_2bd214:
    if (ctx->pc == 0x2BD214u) {
        ctx->pc = 0x2BD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD210u;
        // 0x2bd214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD218u;
        goto label_2bd218;
    }
    ctx->pc = 0x2BD210u;
    ctx->pc = 0x2BD214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD210u;
    // 0x2bd214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BD210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD218u;
label_2bd218:
    // 0x2bd218: 0xa2147ff  j           func_8851FFC
label_2bd21c:
    if (ctx->pc == 0x2BD21Cu) {
        ctx->pc = 0x2BD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD218u;
        // 0x2bd21c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD220u;
        goto label_2bd220;
    }
    ctx->pc = 0x2BD218u;
    ctx->pc = 0x2BD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD218u;
    // 0x2bd21c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2BD218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD220u;
label_2bd220:
    // 0x2bd220: 0x400007a4  .word       0x400007A4                   # mfc0        $zero, Index # 000007A4 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bd220u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bd224:
    // 0x2bd224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd228:
    // 0x2bd228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd22c:
    // 0x2bd22c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd22cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd230:
    // 0x2bd230: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2bd230u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2bd234:
    // 0x2bd234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd238:
    // 0x2bd238: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2bd238u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2bd23c:
    // 0x2bd23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd240:
    // 0x2bd240: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2bd240u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2bd244:
    // 0x2bd244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd248:
    // 0x2bd248: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2bd248u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2bd24c:
    // 0x2bd24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd250:
    // 0x2bd250: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2bd250u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2bd254:
    // 0x2bd254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd258:
    // 0x2bd258: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bd25c:
    if (ctx->pc == 0x2BD25Cu) {
        ctx->pc = 0x2BD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD258u;
        // 0x2bd25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD260u;
        goto label_2bd260;
    }
    ctx->pc = 0x2BD258u;
    {
        const bool branch_taken_0x2bd258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD258u;
        // 0x2bd25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd258) {
            ctx->pc = 0x2D9260u;
            return;
        }
    }
    ctx->pc = 0x2BD260u;
label_2bd260:
    // 0x2bd260: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2bd260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bd264:
    // 0x2bd264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd268:
    // 0x2bd268: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2bd268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bd26c:
    // 0x2bd26c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd26cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd270:
    // 0x2bd270: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2bd270u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bd274:
    // 0x2bd274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd278:
    // 0x2bd278: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2bd278u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bd27c:
    // 0x2bd27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd280:
    // 0x2bd280: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bd284:
    if (ctx->pc == 0x2BD284u) {
        ctx->pc = 0x2BD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD280u;
        // 0x2bd284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD288u;
        goto label_2bd288;
    }
    ctx->pc = 0x2BD280u;
    {
        const bool branch_taken_0x2bd280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD280u;
        // 0x2bd284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd280) {
            ctx->pc = 0x2D9288u;
            return;
        }
    }
    ctx->pc = 0x2BD288u;
label_2bd288:
    // 0x2bd288: 0x0  nop
    ctx->pc = 0x2bd288u;
    // NOP
label_2bd28c:
    // 0x2bd28c: 0x4a000100  vaddx       $vf4, $vf0, $vf0x
    ctx->pc = 0x2bd28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2bd290:
    // 0x2bd290: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2bd290u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bd294:
    // 0x2bd294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd298:
    // 0x2bd298: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2bd298u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bd29c:
    // 0x2bd29c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd29cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2a0:
    // 0x2bd2a0: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2bd2a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bd2a4:
    // 0x2bd2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2a8:
    // 0x2bd2a8: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2bd2a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bd2ac:
    // 0x2bd2ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2b0:
    // 0x2bd2b0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bd2b4:
    if (ctx->pc == 0x2BD2B4u) {
        ctx->pc = 0x2BD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2B0u;
        // 0x2bd2b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD2B8u;
        goto label_2bd2b8;
    }
    ctx->pc = 0x2BD2B0u;
    {
        const bool branch_taken_0x2bd2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2B0u;
        // 0x2bd2b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2b0) {
            ctx->pc = 0x2D92B8u;
            return;
        }
    }
    ctx->pc = 0x2BD2B8u;
label_2bd2b8:
    // 0x2bd2b8: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2bd2b8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bd2bc:
    // 0x2bd2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2c0:
    // 0x2bd2c0: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2bd2c0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bd2c4:
    // 0x2bd2c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2c8:
    // 0x2bd2c8: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2bd2c8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bd2cc:
    // 0x2bd2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2d0:
    // 0x2bd2d0: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2bd2d0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bd2d4:
    // 0x2bd2d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2d8:
    // 0x2bd2d8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bd2d8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BD2D8 raw=0x48007800");
 /* MITIGATED */
label_2bd2dc:
    // 0x2bd2dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2e0:
    // 0x2bd2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd2e4:
    // 0x2bd2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2e8:
    // 0x2bd2e8: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2bd2e8u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2bd2ec:
    // 0x2bd2ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2f0:
    // 0x2bd2f0: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2bd2f0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bd2f4:
    // 0x2bd2f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd2f8:
    // 0x2bd2f8: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2bd2f8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bd2fc:
    // 0x2bd2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd300:
    // 0x2bd300: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2bd300u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bd304:
    // 0x2bd304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd308:
    // 0x2bd308: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2bd308u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bd30c:
    // 0x2bd30c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd30cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd310:
    // 0x2bd310: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bd314:
    if (ctx->pc == 0x2BD314u) {
        ctx->pc = 0x2BD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD310u;
        // 0x2bd314: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD318u;
        goto label_2bd318;
    }
    ctx->pc = 0x2BD310u;
    {
        const bool branch_taken_0x2bd310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD310u;
        // 0x2bd314: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd310) {
            ctx->pc = 0x2D9318u;
            return;
        }
    }
    ctx->pc = 0x2BD318u;
label_2bd318:
    // 0x2bd318: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2bd318u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bd31c:
    // 0x2bd31c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd31cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd320:
    // 0x2bd320: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2bd320u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bd324:
    // 0x2bd324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd328:
    // 0x2bd328: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2bd328u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bd32c:
    // 0x2bd32c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd32cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd330:
    // 0x2bd330: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2bd330u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bd334:
    // 0x2bd334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd338:
    // 0x2bd338: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bd33c:
    if (ctx->pc == 0x2BD33Cu) {
        ctx->pc = 0x2BD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD338u;
        // 0x2bd33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD340u;
        goto label_2bd340;
    }
    ctx->pc = 0x2BD338u;
    {
        const bool branch_taken_0x2bd338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD338u;
        // 0x2bd33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd338) {
            ctx->pc = 0x2D9340u;
            return;
        }
    }
    ctx->pc = 0x2BD340u;
label_2bd340:
    // 0x2bd340: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2bd340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bd344:
    // 0x2bd344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd348:
    // 0x2bd348: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2bd348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bd34c:
    // 0x2bd34c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd350:
    // 0x2bd350: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2bd350u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bd354:
    // 0x2bd354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd358:
    // 0x2bd358: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2bd358u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bd35c:
    // 0x2bd35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd360:
    // 0x2bd360: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bd364:
    if (ctx->pc == 0x2BD364u) {
        ctx->pc = 0x2BD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD360u;
        // 0x2bd364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD368u;
        goto label_2bd368;
    }
    ctx->pc = 0x2BD360u;
    {
        const bool branch_taken_0x2bd360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD360u;
        // 0x2bd364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd360) {
            ctx->pc = 0x2D9368u;
            return;
        }
    }
    ctx->pc = 0x2BD368u;
label_2bd368:
    // 0x2bd368: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2bd368u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bd36c:
    // 0x2bd36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd370:
    // 0x2bd370: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2bd370u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bd374:
    // 0x2bd374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd378:
    // 0x2bd378: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2bd378u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bd37c:
    // 0x2bd37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd380:
    // 0x2bd380: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2bd380u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bd384:
    // 0x2bd384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd388:
    // 0x2bd388: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2bd388u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bd38c:
    // 0x2bd38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd390:
    // 0x2bd390: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bd390u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BD390 raw=0x48000800");
 /* MITIGATED */
label_2bd394:
    // 0x2bd394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd398:
    // 0x2bd398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd39c:
    // 0x2bd39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3a0:
    // 0x2bd3a0: 0x1f347f8  .word       0x01F347F8                   # dsll        $t0, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << 31);
label_2bd3a4:
    // 0x2bd3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3a8:
    // 0x2bd3a8: 0x1f447fb  .word       0x01F447FB                   # dsra        $t0, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3a8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 20) >> 31);
label_2bd3ac:
    // 0x2bd3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3b0:
    // 0x2bd3b0: 0x1f547fe  .word       0x01F547FE                   # dsrl32      $t0, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) >> (32 + 31));
label_2bd3b4:
    // 0x2bd3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3b8:
    // 0x2bd3b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd3b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd3bc:
    // 0x2bd3bc: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
label_2bd3c0:
    // 0x2bd3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd3c4:
    // 0x2bd3c4: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
label_2bd3c8:
    // 0x2bd3c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd3c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd3cc:
    // 0x2bd3cc: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2bd3d0:
    // 0x2bd3d0: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BD3D0 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd3d4:
    // 0x2bd3d4: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bd3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bd3d8:
    // 0x2bd3d8: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bd3dc:
    // 0x2bd3dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3e0:
    // 0x2bd3e0: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bd3e4:
    // 0x2bd3e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3e8:
    // 0x2bd3e8: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BD3E8 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd3ec:
    // 0x2bd3ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3f0:
    // 0x2bd3f0: 0x19a37fe  .word       0x019A37FE                   # dsrl32      $a2, $k0, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 26) >> (32 + 31));
label_2bd3f4:
    // 0x2bd3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd3f8:
    // 0x2bd3f8: 0x19b37ff  .word       0x019B37FF                   # dsra32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd3f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 27) >> (32 + 31));
label_2bd3fc:
    // 0x2bd3fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd3fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd400:
    // 0x2bd400: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bd404:
    // 0x2bd404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd408:
    // 0x2bd408: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2bd40c:
    if (ctx->pc == 0x2BD40Cu) {
        ctx->pc = 0x2BD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD408u;
        // 0x2bd40c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD410u;
        goto label_2bd410;
    }
    ctx->pc = 0x2BD408u;
    {
        const bool branch_taken_0x2bd408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD408u;
        // 0x2bd40c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd408) {
            ctx->pc = 0x2BD5A4u;
            goto label_2bd5a4;
        }
    }
    ctx->pc = 0x2BD410u;
label_2bd410:
    // 0x2bd410: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2bd414:
    if (ctx->pc == 0x2BD414u) {
        ctx->pc = 0x2BD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD410u;
        // 0x2bd414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD418u;
        goto label_2bd418;
    }
    ctx->pc = 0x2BD410u;
    {
        const bool branch_taken_0x2bd410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD410u;
        // 0x2bd414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd410) {
            ctx->pc = 0x2BD62Cu;
            goto label_2bd62c;
        }
    }
    ctx->pc = 0x2BD418u;
label_2bd418:
    // 0x2bd418: 0x3e89801  .word       0x03E89801                   # INVALID     $ra, $t0, -0x67FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd418u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BD418 raw=0x03E89801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd41c:
    // 0x2bd41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd420:
    // 0x2bd420: 0x3e8a005  .word       0x03E8A005                   # INVALID     $ra, $t0, -0x5FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BD420 raw=0x03E8A005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd424:
    // 0x2bd424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd428:
    // 0x2bd428: 0x3e8a809  .word       0x03E8A809                   # jalr        $s5, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bd42c:
    if (ctx->pc == 0x2BD42Cu) {
        ctx->pc = 0x2BD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD428u;
        // 0x2bd42c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD430u;
        goto label_2bd430;
    }
    ctx->pc = 0x2BD428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 21, 0x2BD430u);
        ctx->pc = 0x2BD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD428u;
        // 0x2bd42c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD428u, 0x2BD430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BD430u;
label_2bd430:
    // 0x2bd430: 0x3e8980d  break       1000, 608
    ctx->pc = 0x2bd430u;
    runtime->handleBreak(rdram, ctx);
label_2bd434:
    // 0x2bd434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd438:
    // 0x2bd438: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd438u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bd43c:
    // 0x2bd43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd440:
    // 0x2bd440: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2bd440u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bd444:
    // 0x2bd444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd448:
    // 0x2bd448: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2bd448u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bd44c:
    // 0x2bd44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd450:
    // 0x2bd450: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BD450 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd454:
    // 0x2bd454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd458:
    // 0x2bd458: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd458u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2bd45c:
    // 0x2bd45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd460:
    // 0x2bd460: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2bd460u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bd464:
    // 0x2bd464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd468:
    // 0x2bd468: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2bd468u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2bd46c:
    // 0x2bd46c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd46cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd470:
    // 0x2bd470: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd470u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2bd474:
    // 0x2bd474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd478:
    // 0x2bd478: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bd478u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bd47c:
    // 0x2bd47c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bd47cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bd480:
    // 0x2bd480: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bd480u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bd484:
    // 0x2bd484: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bd484u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bd488:
    // 0x2bd488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd48c:
    // 0x2bd48c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd490:
    // 0x2bd490: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd490u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd494:
    // 0x2bd494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd498:
    // 0x2bd498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd49c:
    // 0x2bd49c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd49cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd4a0:
    // 0x2bd4a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4a4:
    // 0x2bd4a4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BD4A4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd4a8:
    // 0x2bd4a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4ac:
    // 0x2bd4ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd4acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd4b0:
    // 0x2bd4b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4b4:
    // 0x2bd4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd4b8:
    // 0x2bd4b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4bc:
    // 0x2bd4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd4c0:
    // 0x2bd4c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4c4:
    // 0x2bd4c4: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bd4c8:
    // 0x2bd4c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4cc:
    // 0x2bd4cc: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bd4d0:
    // 0x2bd4d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4d4:
    // 0x2bd4d4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bd4d8:
    // 0x2bd4d8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bd4d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bd4dc:
    // 0x2bd4dc: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bd4dcu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bd4e0:
    // 0x2bd4e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4e4:
    // 0x2bd4e4: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bd4e8:
    // 0x2bd4e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4ec:
    // 0x2bd4ec: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4ecu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bd4f0:
    // 0x2bd4f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4f4:
    // 0x2bd4f4: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4f4u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bd4f8:
    // 0x2bd4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4fc:
    // 0x2bd4fc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4fcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bd500:
    // 0x2bd500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd504:
    // 0x2bd504: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bd508:
    // 0x2bd508: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bd508u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BD508 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd50c:
    // 0x2bd50c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bd50cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bd510:
    // 0x2bd510: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd510u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bd514:
    // 0x2bd514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd518:
    // 0x2bd518: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2bd518u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bd51c:
    // 0x2bd51c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd51cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd520:
    // 0x2bd520: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bd524:
    if (ctx->pc == 0x2BD524u) {
        ctx->pc = 0x2BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD520u;
        // 0x2bd524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD528u;
        goto label_2bd528;
    }
    ctx->pc = 0x2BD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD520u;
        // 0x2bd524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD528u;
label_2bd528:
    // 0x2bd528: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd528u;
    ctx->pc = 0x2BD52Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2bd52c:
    // 0x2bd52c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd52cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd530:
    // 0x2bd530: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bd530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bd534:
    // 0x2bd534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd538:
    // 0x2bd538: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2bd53c:
    if (ctx->pc == 0x2BD53Cu) {
        ctx->pc = 0x2BD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD538u;
        // 0x2bd53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD540u;
        goto label_2bd540;
    }
    ctx->pc = 0x2BD538u;
    {
        const bool branch_taken_0x2bd538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD538u;
        // 0x2bd53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd538) {
            ctx->pc = 0x2BD53Cu;
            goto label_2bd53c;
        }
    }
    ctx->pc = 0x2BD540u;
label_2bd540:
    // 0x2bd540: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2bd544:
    if (ctx->pc == 0x2BD544u) {
        ctx->pc = 0x2BD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD540u;
        // 0x2bd544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD548u;
        goto label_2bd548;
    }
    ctx->pc = 0x2BD540u;
    {
        const bool branch_taken_0x2bd540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD540u;
        // 0x2bd544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd540) {
            ctx->pc = 0x2BD5C4u;
            goto label_2bd5c4;
        }
    }
    ctx->pc = 0x2BD548u;
label_2bd548:
    // 0x2bd548: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2bd54c:
    if (ctx->pc == 0x2BD54Cu) {
        ctx->pc = 0x2BD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD548u;
        // 0x2bd54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD550u;
        goto label_2bd550;
    }
    ctx->pc = 0x2BD548u;
    {
        const bool branch_taken_0x2bd548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD548u;
        // 0x2bd54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd548) {
            ctx->pc = 0x2BD554u;
            goto label_2bd554;
        }
    }
    ctx->pc = 0x2BD550u;
label_2bd550:
    // 0x2bd550: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd554:
    if (ctx->pc == 0x2BD554u) {
        ctx->pc = 0x2BD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD550u;
        // 0x2bd554: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD558u;
        goto label_2bd558;
    }
    ctx->pc = 0x2BD550u;
    {
        const bool branch_taken_0x2bd550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD550u;
        // 0x2bd554: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd550) {
            ctx->pc = 0x2C3554u;
            return;
        }
    }
    ctx->pc = 0x2BD558u;
label_2bd558:
    // 0x2bd558: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bd55c:
    if (ctx->pc == 0x2BD55Cu) {
        ctx->pc = 0x2BD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD558u;
        // 0x2bd55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD560u;
        goto label_2bd560;
    }
    ctx->pc = 0x2BD558u;
    {
        const bool branch_taken_0x2bd558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD558u;
        // 0x2bd55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd558) {
            ctx->pc = 0x2C35DCu;
            return;
        }
    }
    ctx->pc = 0x2BD560u;
label_2bd560:
    // 0x2bd560: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2bd564:
    if (ctx->pc == 0x2BD564u) {
        ctx->pc = 0x2BD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD560u;
        // 0x2bd564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD568u;
        goto label_2bd568;
    }
    ctx->pc = 0x2BD560u;
    {
        const bool branch_taken_0x2bd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD560u;
        // 0x2bd564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd560) {
            ctx->pc = 0x2BD570u;
            goto label_2bd570;
        }
    }
    ctx->pc = 0x2BD568u;
label_2bd568:
    // 0x2bd568: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd56c:
    if (ctx->pc == 0x2BD56Cu) {
        ctx->pc = 0x2BD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD568u;
        // 0x2bd56c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD570u;
        goto label_2bd570;
    }
    ctx->pc = 0x2BD568u;
    {
        const bool branch_taken_0x2bd568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD568u;
        // 0x2bd56c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd568) {
            ctx->pc = 0x2BD56Cu;
            goto label_2bd56c;
        }
    }
    ctx->pc = 0x2BD570u;
label_2bd570:
    // 0x2bd570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd574:
    // 0x2bd574: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bd578:
    // 0x2bd578: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd57c:
    // 0x2bd57c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd57cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd580:
    // 0x2bd580: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd580u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd584:
    // 0x2bd584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd588:
    // 0x2bd588: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd588u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd58c:
    // 0x2bd58c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd58cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd590:
    // 0x2bd590: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd590u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd594:
    // 0x2bd594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd598:
    // 0x2bd598: 0x42020097  .word       0x42020097                   # INVALID     $s0, $v0, 0x97 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd598u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BD598 raw=0x42020097"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd59c:
    // 0x2bd59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5a0:
    // 0x2bd5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5a4:
    // 0x2bd5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5a8:
    // 0x2bd5a8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd5ac:
    if (ctx->pc == 0x2BD5ACu) {
        ctx->pc = 0x2BD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5A8u;
        // 0x2bd5ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5B0u;
        goto label_2bd5b0;
    }
    ctx->pc = 0x2BD5A8u;
    {
        const bool branch_taken_0x2bd5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5A8u;
        // 0x2bd5ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5a8) {
            ctx->pc = 0x2D15B0u;
            return;
        }
    }
    ctx->pc = 0x2BD5B0u;
label_2bd5b0:
    // 0x2bd5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5b4:
    // 0x2bd5b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5b8:
    // 0x2bd5b8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd5bc:
    if (ctx->pc == 0x2BD5BCu) {
        ctx->pc = 0x2BD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5B8u;
        // 0x2bd5bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5C0u;
        goto label_2bd5c0;
    }
    ctx->pc = 0x2BD5B8u;
    {
        const bool branch_taken_0x2bd5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd5b8) {
            ctx->pc = 0x2BD5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5B8u;
            // 0x2bd5bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF5A8u;
            { ctx->pc = 0x2bf5a8; return; }
        }
    }
    ctx->pc = 0x2BD5C0u;
label_2bd5c0:
    // 0x2bd5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5c4:
    // 0x2bd5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5c8:
    // 0x2bd5c8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd5cc:
    if (ctx->pc == 0x2BD5CCu) {
        ctx->pc = 0x2BD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C8u;
        // 0x2bd5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5D0u;
        goto label_2bd5d0;
    }
    ctx->pc = 0x2BD5C8u;
    {
        const bool branch_taken_0x2bd5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C8u;
        // 0x2bd5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5c8) {
            ctx->pc = 0x2C364Cu;
            return;
        }
    }
    ctx->pc = 0x2BD5D0u;
label_2bd5d0:
    // 0x2bd5d0: 0x42020085  .word       0x42020085                   # INVALID     $s0, $v0, 0x85 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd5d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2BD5D0 raw=0x42020085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd5d4:
    // 0x2bd5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5d8:
    // 0x2bd5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5dc:
    // 0x2bd5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5e0:
    // 0x2bd5e0: 0x500b0081  beql        $zero, $t3, . + 4 + (0x81 << 2)
label_2bd5e4:
    if (ctx->pc == 0x2BD5E4u) {
        ctx->pc = 0x2BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5E0u;
        // 0x2bd5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5E8u;
        goto label_2bd5e8;
    }
    ctx->pc = 0x2BD5E0u;
    {
        const bool branch_taken_0x2bd5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd5e0) {
            ctx->pc = 0x2BD5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5E0u;
            // 0x2bd5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7E8u;
            goto label_2bd7e8;
        }
    }
    ctx->pc = 0x2BD5E8u;
label_2bd5e8:
    // 0x2bd5e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5ec:
    // 0x2bd5ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5f0:
    // 0x2bd5f0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2bd5f4:
    if (ctx->pc == 0x2BD5F4u) {
        ctx->pc = 0x2BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F0u;
        // 0x2bd5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5F8u;
        goto label_2bd5f8;
    }
    ctx->pc = 0x2BD5F0u;
    {
        const bool branch_taken_0x2bd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F0u;
        // 0x2bd5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f0) {
            ctx->pc = 0x2BD7F4u;
            goto label_2bd7f4;
        }
    }
    ctx->pc = 0x2BD5F8u;
label_2bd5f8:
    // 0x2bd5f8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2bd5fc:
    if (ctx->pc == 0x2BD5FCu) {
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F8u;
        // 0x2bd5fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD600u;
        goto label_2bd600;
    }
    ctx->pc = 0x2BD5F8u;
    {
        const bool branch_taken_0x2bd5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F8u;
        // 0x2bd5fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f8) {
            ctx->pc = 0x2BD604u;
            goto label_2bd604;
        }
    }
    ctx->pc = 0x2BD600u;
label_2bd600:
    // 0x2bd600: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bd604:
    if (ctx->pc == 0x2BD604u) {
        ctx->pc = 0x2BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD600u;
        // 0x2bd604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD608u;
        goto label_2bd608;
    }
    ctx->pc = 0x2BD600u;
    {
        const bool branch_taken_0x2bd600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD600u;
        // 0x2bd604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd600) {
            ctx->pc = 0x2BD604u;
            goto label_2bd604;
        }
    }
    ctx->pc = 0x2BD608u;
label_2bd608:
    // 0x2bd608: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd60c:
    if (ctx->pc == 0x2BD60Cu) {
        ctx->pc = 0x2BD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD608u;
        // 0x2bd60c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD610u;
        goto label_2bd610;
    }
    ctx->pc = 0x2BD608u;
    {
        const bool branch_taken_0x2bd608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD608u;
        // 0x2bd60c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd608) {
            ctx->pc = 0x2C368Cu;
            return;
        }
    }
    ctx->pc = 0x2BD610u;
label_2bd610:
    // 0x2bd610: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bd614:
    if (ctx->pc == 0x2BD614u) {
        ctx->pc = 0x2BD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD610u;
        // 0x2bd614: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD618u;
        goto label_2bd618;
    }
    ctx->pc = 0x2BD610u;
    {
        const bool branch_taken_0x2bd610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD610u;
        // 0x2bd614: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd610) {
            ctx->pc = 0x2C3614u;
            return;
        }
    }
    ctx->pc = 0x2BD618u;
label_2bd618:
    // 0x2bd618: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd618u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd61c:
    // 0x2bd61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd620:
    // 0x2bd620: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd624:
    if (ctx->pc == 0x2BD624u) {
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD628u;
        goto label_2bd628;
    }
    ctx->pc = 0x2BD620u;
    {
        const bool branch_taken_0x2bd620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd620) {
            ctx->pc = 0x2BD624u;
            goto label_2bd624;
        }
    }
    ctx->pc = 0x2BD628u;
label_2bd628:
    // 0x2bd628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd62c:
    // 0x2bd62c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd62cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bd630:
    // 0x2bd630: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd630u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd634:
    // 0x2bd634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd638:
    // 0x2bd638: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd638u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd63c:
    // 0x2bd63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd640:
    // 0x2bd640: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd640u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd644:
    // 0x2bd644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd648:
    // 0x2bd648: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd648u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd64c:
    // 0x2bd64c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd64cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd650:
    // 0x2bd650: 0x42020080  .word       0x42020080                   # INVALID     $s0, $v0, 0x80 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd650u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BD650 raw=0x42020080"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd654:
    // 0x2bd654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd658:
    // 0x2bd658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd65c:
    // 0x2bd65c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd65cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd660:
    // 0x2bd660: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd664:
    if (ctx->pc == 0x2BD664u) {
        ctx->pc = 0x2BD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD660u;
        // 0x2bd664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD668u;
        goto label_2bd668;
    }
    ctx->pc = 0x2BD660u;
    {
        const bool branch_taken_0x2bd660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD660u;
        // 0x2bd664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd660) {
            ctx->pc = 0x2D1668u;
            return;
        }
    }
    ctx->pc = 0x2BD668u;
label_2bd668:
    // 0x2bd668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd66c:
    // 0x2bd66c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd66cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd670:
    // 0x2bd670: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd674:
    if (ctx->pc == 0x2BD674u) {
        ctx->pc = 0x2BD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD670u;
        // 0x2bd674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD678u;
        goto label_2bd678;
    }
    ctx->pc = 0x2BD670u;
    {
        const bool branch_taken_0x2bd670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd670) {
            ctx->pc = 0x2BD674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD670u;
            // 0x2bd674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF660u;
            { ctx->pc = 0x2bf660; return; }
        }
    }
    ctx->pc = 0x2BD678u;
label_2bd678:
    // 0x2bd678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd67c:
    // 0x2bd67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd680:
    // 0x2bd680: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd684:
    if (ctx->pc == 0x2BD684u) {
        ctx->pc = 0x2BD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD680u;
        // 0x2bd684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD688u;
        goto label_2bd688;
    }
    ctx->pc = 0x2BD680u;
    {
        const bool branch_taken_0x2bd680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD680u;
        // 0x2bd684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd680) {
            ctx->pc = 0x2C3684u;
            return;
        }
    }
    ctx->pc = 0x2BD688u;
label_2bd688:
    // 0x2bd688: 0x4202006e  .word       0x4202006E                   # INVALID     $s0, $v0, 0x6E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd688u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2E at 0x2BD688 raw=0x4202006E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd68c:
    // 0x2bd68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd690:
    // 0x2bd690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd694:
    // 0x2bd694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd698:
    // 0x2bd698: 0x500b006a  beql        $zero, $t3, . + 4 + (0x6A << 2)
label_2bd69c:
    if (ctx->pc == 0x2BD69Cu) {
        ctx->pc = 0x2BD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD698u;
        // 0x2bd69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6A0u;
        goto label_2bd6a0;
    }
    ctx->pc = 0x2BD698u;
    {
        const bool branch_taken_0x2bd698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd698) {
            ctx->pc = 0x2BD69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD698u;
            // 0x2bd69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD844u;
            goto label_2bd844;
        }
    }
    ctx->pc = 0x2BD6A0u;
label_2bd6a0:
    // 0x2bd6a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd6a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd6a4:
    // 0x2bd6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6a8:
    // 0x2bd6a8: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2bd6ac:
    if (ctx->pc == 0x2BD6ACu) {
        ctx->pc = 0x2BD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6A8u;
        // 0x2bd6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6B0u;
        goto label_2bd6b0;
    }
    ctx->pc = 0x2BD6A8u;
    {
        const bool branch_taken_0x2bd6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6A8u;
        // 0x2bd6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6a8) {
            ctx->pc = 0x2BD7ACu;
            goto label_2bd7ac;
        }
    }
    ctx->pc = 0x2BD6B0u;
label_2bd6b0:
    // 0x2bd6b0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2bd6b4:
    if (ctx->pc == 0x2BD6B4u) {
        ctx->pc = 0x2BD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B0u;
        // 0x2bd6b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6B8u;
        goto label_2bd6b8;
    }
    ctx->pc = 0x2BD6B0u;
    {
        const bool branch_taken_0x2bd6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B0u;
        // 0x2bd6b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6b0) {
            ctx->pc = 0x2BD6B8u;
            goto label_2bd6b8;
        }
    }
    ctx->pc = 0x2BD6B8u;
label_2bd6b8:
    // 0x2bd6b8: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bd6bc:
    if (ctx->pc == 0x2BD6BCu) {
        ctx->pc = 0x2BD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B8u;
        // 0x2bd6bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6C0u;
        goto label_2bd6c0;
    }
    ctx->pc = 0x2BD6B8u;
    {
        const bool branch_taken_0x2bd6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B8u;
        // 0x2bd6bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6b8) {
            ctx->pc = 0x2BD6BCu;
            goto label_2bd6bc;
        }
    }
    ctx->pc = 0x2BD6C0u;
label_2bd6c0:
    // 0x2bd6c0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd6c4:
    if (ctx->pc == 0x2BD6C4u) {
        ctx->pc = 0x2BD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C0u;
        // 0x2bd6c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6C8u;
        goto label_2bd6c8;
    }
    ctx->pc = 0x2BD6C0u;
    {
        const bool branch_taken_0x2bd6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C0u;
        // 0x2bd6c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6c0) {
            ctx->pc = 0x2C36C4u;
            return;
        }
    }
    ctx->pc = 0x2BD6C8u;
label_2bd6c8:
    // 0x2bd6c8: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bd6cc:
    if (ctx->pc == 0x2BD6CCu) {
        ctx->pc = 0x2BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C8u;
        // 0x2bd6cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6D0u;
        goto label_2bd6d0;
    }
    ctx->pc = 0x2BD6C8u;
    {
        const bool branch_taken_0x2bd6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C8u;
        // 0x2bd6cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6c8) {
            ctx->pc = 0x2C374Cu;
            return;
        }
    }
    ctx->pc = 0x2BD6D0u;
label_2bd6d0:
    // 0x2bd6d0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd6d4:
    // 0x2bd6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6d8:
    // 0x2bd6d8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd6dc:
    if (ctx->pc == 0x2BD6DCu) {
        ctx->pc = 0x2BD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6D8u;
        // 0x2bd6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6E0u;
        goto label_2bd6e0;
    }
    ctx->pc = 0x2BD6D8u;
    {
        const bool branch_taken_0x2bd6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6D8u;
        // 0x2bd6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6d8) {
            ctx->pc = 0x2BD6DCu;
            goto label_2bd6dc;
        }
    }
    ctx->pc = 0x2BD6E0u;
label_2bd6e0:
    // 0x2bd6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd6e4:
    // 0x2bd6e4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd6e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bd6e8:
    // 0x2bd6e8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd6e8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd6ec:
    // 0x2bd6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6f0:
    // 0x2bd6f0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd6f0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd6f4:
    // 0x2bd6f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6f8:
    // 0x2bd6f8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd6f8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd6fc:
    // 0x2bd6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd700:
    // 0x2bd700: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd704:
    // 0x2bd704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd708:
    // 0x2bd708: 0x42020069  .word       0x42020069                   # INVALID     $s0, $v0, 0x69 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd708u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BD708 raw=0x42020069"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd70c:
    // 0x2bd70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd710:
    // 0x2bd710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd714:
    // 0x2bd714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd718:
    // 0x2bd718: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd71c:
    if (ctx->pc == 0x2BD71Cu) {
        ctx->pc = 0x2BD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD718u;
        // 0x2bd71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD720u;
        goto label_2bd720;
    }
    ctx->pc = 0x2BD718u;
    {
        const bool branch_taken_0x2bd718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD718u;
        // 0x2bd71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd718) {
            ctx->pc = 0x2D1720u;
            return;
        }
    }
    ctx->pc = 0x2BD720u;
label_2bd720:
    // 0x2bd720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd724:
    // 0x2bd724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd728:
    // 0x2bd728: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd72c:
    if (ctx->pc == 0x2BD72Cu) {
        ctx->pc = 0x2BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD728u;
        // 0x2bd72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD730u;
        goto label_2bd730;
    }
    ctx->pc = 0x2BD728u;
    {
        const bool branch_taken_0x2bd728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd728) {
            ctx->pc = 0x2BD72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD728u;
            // 0x2bd72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF718u;
            { ctx->pc = 0x2bf718; return; }
        }
    }
    ctx->pc = 0x2BD730u;
label_2bd730:
    // 0x2bd730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd734:
    // 0x2bd734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd738:
    // 0x2bd738: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd73c:
    if (ctx->pc == 0x2BD73Cu) {
        ctx->pc = 0x2BD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD738u;
        // 0x2bd73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD740u;
        goto label_2bd740;
    }
    ctx->pc = 0x2BD738u;
    {
        const bool branch_taken_0x2bd738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD738u;
        // 0x2bd73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd738) {
            ctx->pc = 0x2C37BCu;
            return;
        }
    }
    ctx->pc = 0x2BD740u;
label_2bd740:
    // 0x2bd740: 0x42020057  .word       0x42020057                   # INVALID     $s0, $v0, 0x57 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd740u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BD740 raw=0x42020057"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd744:
    // 0x2bd744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd748:
    // 0x2bd748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd74c:
    // 0x2bd74c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd74cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd750:
    // 0x2bd750: 0x500b0053  beql        $zero, $t3, . + 4 + (0x53 << 2)
label_2bd754:
    if (ctx->pc == 0x2BD754u) {
        ctx->pc = 0x2BD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD750u;
        // 0x2bd754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD758u;
        goto label_2bd758;
    }
    ctx->pc = 0x2BD750u;
    {
        const bool branch_taken_0x2bd750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd750) {
            ctx->pc = 0x2BD754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD750u;
            // 0x2bd754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8A0u;
            { ctx->pc = 0x2bd8a0; return; }
        }
    }
    ctx->pc = 0x2BD758u;
label_2bd758:
    // 0x2bd758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd75c:
    // 0x2bd75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd760:
    // 0x2bd760: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2bd764:
    if (ctx->pc == 0x2BD764u) {
        ctx->pc = 0x2BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD760u;
        // 0x2bd764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD768u;
        goto label_2bd768;
    }
    ctx->pc = 0x2BD760u;
    {
        const bool branch_taken_0x2bd760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD760u;
        // 0x2bd764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd760) {
            ctx->pc = 0x2BDF64u;
            { ctx->pc = 0x2bdf64; return; }
        }
    }
    ctx->pc = 0x2BD768u;
label_2bd768:
    // 0x2bd768: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2bd76c:
    if (ctx->pc == 0x2BD76Cu) {
        ctx->pc = 0x2BD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD768u;
        // 0x2bd76c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD770u;
        goto label_2bd770;
    }
    ctx->pc = 0x2BD768u;
    {
        const bool branch_taken_0x2bd768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD768u;
        // 0x2bd76c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd768) {
            ctx->pc = 0x2BD78Cu;
            goto label_2bd78c;
        }
    }
    ctx->pc = 0x2BD770u;
label_2bd770:
    // 0x2bd770: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bd774:
    if (ctx->pc == 0x2BD774u) {
        ctx->pc = 0x2BD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD770u;
        // 0x2bd774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD778u;
        goto label_2bd778;
    }
    ctx->pc = 0x2BD770u;
    {
        const bool branch_taken_0x2bd770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD770u;
        // 0x2bd774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd770) {
            ctx->pc = 0x2BD778u;
            goto label_2bd778;
        }
    }
    ctx->pc = 0x2BD778u;
label_2bd778:
    // 0x2bd778: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd77c:
    if (ctx->pc == 0x2BD77Cu) {
        ctx->pc = 0x2BD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD778u;
        // 0x2bd77c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD780u;
        goto label_2bd780;
    }
    ctx->pc = 0x2BD778u;
    {
        const bool branch_taken_0x2bd778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD778u;
        // 0x2bd77c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd778) {
            ctx->pc = 0x2C37FCu;
            return;
        }
    }
    ctx->pc = 0x2BD780u;
label_2bd780:
    // 0x2bd780: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bd784:
    if (ctx->pc == 0x2BD784u) {
        ctx->pc = 0x2BD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD780u;
        // 0x2bd784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD788u;
        goto label_2bd788;
    }
    ctx->pc = 0x2BD780u;
    {
        const bool branch_taken_0x2bd780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD780u;
        // 0x2bd784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd780) {
            ctx->pc = 0x2C3784u;
            return;
        }
    }
    ctx->pc = 0x2BD788u;
label_2bd788:
    // 0x2bd788: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd788u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd78c:
    // 0x2bd78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd790:
    // 0x2bd790: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd794:
    if (ctx->pc == 0x2BD794u) {
        ctx->pc = 0x2BD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD790u;
        // 0x2bd794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD798u;
        goto label_2bd798;
    }
    ctx->pc = 0x2BD790u;
    {
        const bool branch_taken_0x2bd790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD790u;
        // 0x2bd794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd790) {
            ctx->pc = 0x2BD794u;
            goto label_2bd794;
        }
    }
    ctx->pc = 0x2BD798u;
label_2bd798:
    // 0x2bd798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd79c:
    // 0x2bd79c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd79cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bd7a0:
    // 0x2bd7a0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd7a0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7a4:
    // 0x2bd7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7a8:
    // 0x2bd7a8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd7a8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7ac:
    // 0x2bd7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7b0:
    // 0x2bd7b0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd7b0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7b4:
    // 0x2bd7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7b8:
    // 0x2bd7b8: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd7b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7bc:
    // 0x2bd7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7c0:
    // 0x2bd7c0: 0x42020052  .word       0x42020052                   # INVALID     $s0, $v0, 0x52 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd7c0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x12 at 0x2BD7C0 raw=0x42020052"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd7c4:
    // 0x2bd7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7c8:
    // 0x2bd7c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd7c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd7cc:
    // 0x2bd7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7d0:
    // 0x2bd7d0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd7d4:
    if (ctx->pc == 0x2BD7D4u) {
        ctx->pc = 0x2BD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D0u;
        // 0x2bd7d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD7D8u;
        goto label_2bd7d8;
    }
    ctx->pc = 0x2BD7D0u;
    {
        const bool branch_taken_0x2bd7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D0u;
        // 0x2bd7d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7d0) {
            ctx->pc = 0x2D17D8u;
            return;
        }
    }
    ctx->pc = 0x2BD7D8u;
label_2bd7d8:
    // 0x2bd7d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd7d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd7dc:
    // 0x2bd7dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7e0:
    // 0x2bd7e0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd7e4:
    if (ctx->pc == 0x2BD7E4u) {
        ctx->pc = 0x2BD7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7E0u;
        // 0x2bd7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD7E8u;
        goto label_2bd7e8;
    }
    ctx->pc = 0x2BD7E0u;
    {
        const bool branch_taken_0x2bd7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd7e0) {
            ctx->pc = 0x2BD7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7E0u;
            // 0x2bd7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7D0u;
            { ctx->pc = 0x2bf7d0; return; }
        }
    }
    ctx->pc = 0x2BD7E8u;
label_2bd7e8:
    // 0x2bd7e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd7e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd7ec:
    // 0x2bd7ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7f0:
    // 0x2bd7f0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd7f4:
    if (ctx->pc == 0x2BD7F4u) {
        ctx->pc = 0x2BD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7F0u;
        // 0x2bd7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD7F8u;
        goto label_2bd7f8;
    }
    ctx->pc = 0x2BD7F0u;
    {
        const bool branch_taken_0x2bd7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7F0u;
        // 0x2bd7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7f0) {
            ctx->pc = 0x2C37F4u;
            return;
        }
    }
    ctx->pc = 0x2BD7F8u;
label_2bd7f8:
    // 0x2bd7f8: 0x42020040  .word       0x42020040                   # INVALID     $s0, $v0, 0x40 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd7f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BD7F8 raw=0x42020040"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd7fc:
    // 0x2bd7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd800:
    // 0x2bd800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd804:
    // 0x2bd804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd808:
    // 0x2bd808: 0x500b003c  beql        $zero, $t3, . + 4 + (0x3C << 2)
label_2bd80c:
    if (ctx->pc == 0x2BD80Cu) {
        ctx->pc = 0x2BD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD808u;
        // 0x2bd80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD810u;
        goto label_2bd810;
    }
    ctx->pc = 0x2BD808u;
    {
        const bool branch_taken_0x2bd808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd808) {
            ctx->pc = 0x2BD80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD808u;
            // 0x2bd80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8FCu;
            { ctx->pc = 0x2bd8fc; return; }
        }
    }
    ctx->pc = 0x2BD810u;
label_2bd810:
    // 0x2bd810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd814:
    // 0x2bd814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd818:
    // 0x2bd818: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2bd81c:
    if (ctx->pc == 0x2BD81Cu) {
        ctx->pc = 0x2BD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD818u;
        // 0x2bd81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD820u;
        goto label_2bd820;
    }
    ctx->pc = 0x2BD818u;
    {
        const bool branch_taken_0x2bd818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD818u;
        // 0x2bd81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd818) {
            ctx->pc = 0x2BDC1Cu;
            { ctx->pc = 0x2bdc1c; return; }
        }
    }
    ctx->pc = 0x2BD820u;
label_2bd820:
    // 0x2bd820: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2bd824:
    if (ctx->pc == 0x2BD824u) {
        ctx->pc = 0x2BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD820u;
        // 0x2bd824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD828u;
        goto label_2bd828;
    }
    ctx->pc = 0x2BD820u;
    {
        const bool branch_taken_0x2bd820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD820u;
        // 0x2bd824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd820) {
            ctx->pc = 0x2BD834u;
            goto label_2bd834;
        }
    }
    ctx->pc = 0x2BD828u;
label_2bd828:
    // 0x2bd828: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bd82c:
    if (ctx->pc == 0x2BD82Cu) {
        ctx->pc = 0x2BD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD828u;
        // 0x2bd82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD830u;
        goto label_2bd830;
    }
    ctx->pc = 0x2BD828u;
    {
        const bool branch_taken_0x2bd828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD828u;
        // 0x2bd82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd828) {
            ctx->pc = 0x2BD830u;
            goto label_2bd830;
        }
    }
    ctx->pc = 0x2BD830u;
label_2bd830:
    // 0x2bd830: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd834:
    if (ctx->pc == 0x2BD834u) {
        ctx->pc = 0x2BD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD830u;
        // 0x2bd834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD838u;
        goto label_2bd838;
    }
    ctx->pc = 0x2BD830u;
    {
        const bool branch_taken_0x2bd830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD830u;
        // 0x2bd834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd830) {
            ctx->pc = 0x2C3834u;
            return;
        }
    }
    ctx->pc = 0x2BD838u;
label_2bd838:
    // 0x2bd838: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bd83c:
    if (ctx->pc == 0x2BD83Cu) {
        ctx->pc = 0x2BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD838u;
        // 0x2bd83c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD840u;
        goto label_2bd840;
    }
    ctx->pc = 0x2BD838u;
    {
        const bool branch_taken_0x2bd838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD838u;
        // 0x2bd83c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd838) {
            ctx->pc = 0x2C38BCu;
            return;
        }
    }
    ctx->pc = 0x2BD840u;
label_2bd840:
    // 0x2bd840: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd840u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd844:
    // 0x2bd844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd848:
    // 0x2bd848: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd84c:
    if (ctx->pc == 0x2BD84Cu) {
        ctx->pc = 0x2BD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD848u;
        // 0x2bd84c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD850u;
        goto label_2bd850;
    }
    ctx->pc = 0x2BD848u;
    {
        const bool branch_taken_0x2bd848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD848u;
        // 0x2bd84c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd848) {
            ctx->pc = 0x2BD84Cu;
            goto label_2bd84c;
        }
    }
    ctx->pc = 0x2BD850u;
label_2bd850:
    // 0x2bd850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd854:
    // 0x2bd854: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd854u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bd858:
    // 0x2bd858: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd858u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd85c:
    // 0x2bd85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd860:
    // 0x2bd860: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd860u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd864:
    // 0x2bd864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd868:
    // 0x2bd868: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd868u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd86c:
    // 0x2bd86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd870:
    // 0x2bd870: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd870u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd874:
    // 0x2bd874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd878:
    // 0x2bd878: 0x4202003b  .word       0x4202003B                   # INVALID     $s0, $v0, 0x3B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd878u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3B at 0x2BD878 raw=0x4202003B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd87c:
    // 0x2bd87c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd87cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd880:
    // 0x2bd880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd884:
    // 0x2bd884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd888:
    // 0x2bd888: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd88c:
    if (ctx->pc == 0x2BD88Cu) {
        ctx->pc = 0x2BD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD888u;
        // 0x2bd88c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD890u;
        { ctx->pc = 0x2bd890; return; }
    }
    ctx->pc = 0x2BD888u;
    {
        const bool branch_taken_0x2bd888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD888u;
        // 0x2bd88c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd888) {
            ctx->pc = 0x2D1890u;
            return;
        }
    }
    ctx->pc = 0x2BD890u;
    ctx->pc = 0x2bd890u;
    return;
}

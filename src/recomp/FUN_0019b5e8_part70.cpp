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


void FUN_0019b5e8_part70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bd0f8u: goto label_1bd0f8;
        case 0x1bd0fcu: goto label_1bd0fc;
        case 0x1bd100u: goto label_1bd100;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd10cu: goto label_1bd10c;
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd114u: goto label_1bd114;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd11cu: goto label_1bd11c;
        case 0x1bd120u: goto label_1bd120;
        case 0x1bd124u: goto label_1bd124;
        case 0x1bd128u: goto label_1bd128;
        case 0x1bd12cu: goto label_1bd12c;
        case 0x1bd130u: goto label_1bd130;
        case 0x1bd134u: goto label_1bd134;
        case 0x1bd138u: goto label_1bd138;
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd140u: goto label_1bd140;
        case 0x1bd144u: goto label_1bd144;
        case 0x1bd148u: goto label_1bd148;
        case 0x1bd14cu: goto label_1bd14c;
        case 0x1bd150u: goto label_1bd150;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd158u: goto label_1bd158;
        case 0x1bd15cu: goto label_1bd15c;
        case 0x1bd160u: goto label_1bd160;
        case 0x1bd164u: goto label_1bd164;
        case 0x1bd168u: goto label_1bd168;
        case 0x1bd16cu: goto label_1bd16c;
        case 0x1bd170u: goto label_1bd170;
        case 0x1bd174u: goto label_1bd174;
        case 0x1bd178u: goto label_1bd178;
        case 0x1bd17cu: goto label_1bd17c;
        case 0x1bd180u: goto label_1bd180;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd188u: goto label_1bd188;
        case 0x1bd18cu: goto label_1bd18c;
        case 0x1bd190u: goto label_1bd190;
        case 0x1bd194u: goto label_1bd194;
        case 0x1bd198u: goto label_1bd198;
        case 0x1bd19cu: goto label_1bd19c;
        case 0x1bd1a0u: goto label_1bd1a0;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1a8u: goto label_1bd1a8;
        case 0x1bd1acu: goto label_1bd1ac;
        case 0x1bd1b0u: goto label_1bd1b0;
        case 0x1bd1b4u: goto label_1bd1b4;
        case 0x1bd1b8u: goto label_1bd1b8;
        case 0x1bd1bcu: goto label_1bd1bc;
        case 0x1bd1c0u: goto label_1bd1c0;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1c8u: goto label_1bd1c8;
        case 0x1bd1ccu: goto label_1bd1cc;
        case 0x1bd1d0u: goto label_1bd1d0;
        case 0x1bd1d4u: goto label_1bd1d4;
        case 0x1bd1d8u: goto label_1bd1d8;
        case 0x1bd1dcu: goto label_1bd1dc;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1e4u: goto label_1bd1e4;
        case 0x1bd1e8u: goto label_1bd1e8;
        case 0x1bd1ecu: goto label_1bd1ec;
        case 0x1bd1f0u: goto label_1bd1f0;
        case 0x1bd1f4u: goto label_1bd1f4;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd1fcu: goto label_1bd1fc;
        case 0x1bd200u: goto label_1bd200;
        case 0x1bd204u: goto label_1bd204;
        case 0x1bd208u: goto label_1bd208;
        case 0x1bd20cu: goto label_1bd20c;
        case 0x1bd210u: goto label_1bd210;
        case 0x1bd214u: goto label_1bd214;
        case 0x1bd218u: goto label_1bd218;
        case 0x1bd21cu: goto label_1bd21c;
        case 0x1bd220u: goto label_1bd220;
        case 0x1bd224u: goto label_1bd224;
        case 0x1bd228u: goto label_1bd228;
        case 0x1bd22cu: goto label_1bd22c;
        case 0x1bd230u: goto label_1bd230;
        case 0x1bd234u: goto label_1bd234;
        case 0x1bd238u: goto label_1bd238;
        case 0x1bd23cu: goto label_1bd23c;
        case 0x1bd240u: goto label_1bd240;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd248u: goto label_1bd248;
        case 0x1bd24cu: goto label_1bd24c;
        case 0x1bd250u: goto label_1bd250;
        case 0x1bd254u: goto label_1bd254;
        case 0x1bd258u: goto label_1bd258;
        case 0x1bd25cu: goto label_1bd25c;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd264u: goto label_1bd264;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd26cu: goto label_1bd26c;
        case 0x1bd270u: goto label_1bd270;
        case 0x1bd274u: goto label_1bd274;
        case 0x1bd278u: goto label_1bd278;
        case 0x1bd27cu: goto label_1bd27c;
        case 0x1bd280u: goto label_1bd280;
        case 0x1bd284u: goto label_1bd284;
        case 0x1bd288u: goto label_1bd288;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd290u: goto label_1bd290;
        case 0x1bd294u: goto label_1bd294;
        case 0x1bd298u: goto label_1bd298;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2a0u: goto label_1bd2a0;
        case 0x1bd2a4u: goto label_1bd2a4;
        case 0x1bd2a8u: goto label_1bd2a8;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2b0u: goto label_1bd2b0;
        case 0x1bd2b4u: goto label_1bd2b4;
        case 0x1bd2b8u: goto label_1bd2b8;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2c0u: goto label_1bd2c0;
        case 0x1bd2c4u: goto label_1bd2c4;
        case 0x1bd2c8u: goto label_1bd2c8;
        case 0x1bd2ccu: goto label_1bd2cc;
        case 0x1bd2d0u: goto label_1bd2d0;
        case 0x1bd2d4u: goto label_1bd2d4;
        case 0x1bd2d8u: goto label_1bd2d8;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2e0u: goto label_1bd2e0;
        case 0x1bd2e4u: goto label_1bd2e4;
        case 0x1bd2e8u: goto label_1bd2e8;
        case 0x1bd2ecu: goto label_1bd2ec;
        case 0x1bd2f0u: goto label_1bd2f0;
        case 0x1bd2f4u: goto label_1bd2f4;
        case 0x1bd2f8u: goto label_1bd2f8;
        case 0x1bd2fcu: goto label_1bd2fc;
        case 0x1bd300u: goto label_1bd300;
        case 0x1bd304u: goto label_1bd304;
        case 0x1bd308u: goto label_1bd308;
        case 0x1bd30cu: goto label_1bd30c;
        case 0x1bd310u: goto label_1bd310;
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd318u: goto label_1bd318;
        case 0x1bd31cu: goto label_1bd31c;
        case 0x1bd320u: goto label_1bd320;
        case 0x1bd324u: goto label_1bd324;
        case 0x1bd328u: goto label_1bd328;
        case 0x1bd32cu: goto label_1bd32c;
        case 0x1bd330u: goto label_1bd330;
        case 0x1bd334u: goto label_1bd334;
        case 0x1bd338u: goto label_1bd338;
        case 0x1bd33cu: goto label_1bd33c;
        case 0x1bd340u: goto label_1bd340;
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd348u: goto label_1bd348;
        case 0x1bd34cu: goto label_1bd34c;
        case 0x1bd350u: goto label_1bd350;
        case 0x1bd354u: goto label_1bd354;
        case 0x1bd358u: goto label_1bd358;
        case 0x1bd35cu: goto label_1bd35c;
        case 0x1bd360u: goto label_1bd360;
        case 0x1bd364u: goto label_1bd364;
        case 0x1bd368u: goto label_1bd368;
        case 0x1bd36cu: goto label_1bd36c;
        case 0x1bd370u: goto label_1bd370;
        case 0x1bd374u: goto label_1bd374;
        case 0x1bd378u: goto label_1bd378;
        case 0x1bd37cu: goto label_1bd37c;
        case 0x1bd380u: goto label_1bd380;
        case 0x1bd384u: goto label_1bd384;
        case 0x1bd388u: goto label_1bd388;
        case 0x1bd38cu: goto label_1bd38c;
        case 0x1bd390u: goto label_1bd390;
        case 0x1bd394u: goto label_1bd394;
        case 0x1bd398u: goto label_1bd398;
        case 0x1bd39cu: goto label_1bd39c;
        case 0x1bd3a0u: goto label_1bd3a0;
        case 0x1bd3a4u: goto label_1bd3a4;
        case 0x1bd3a8u: goto label_1bd3a8;
        case 0x1bd3acu: goto label_1bd3ac;
        case 0x1bd3b0u: goto label_1bd3b0;
        case 0x1bd3b4u: goto label_1bd3b4;
        case 0x1bd3b8u: goto label_1bd3b8;
        case 0x1bd3bcu: goto label_1bd3bc;
        case 0x1bd3c0u: goto label_1bd3c0;
        case 0x1bd3c4u: goto label_1bd3c4;
        case 0x1bd3c8u: goto label_1bd3c8;
        case 0x1bd3ccu: goto label_1bd3cc;
        case 0x1bd3d0u: goto label_1bd3d0;
        case 0x1bd3d4u: goto label_1bd3d4;
        case 0x1bd3d8u: goto label_1bd3d8;
        case 0x1bd3dcu: goto label_1bd3dc;
        case 0x1bd3e0u: goto label_1bd3e0;
        case 0x1bd3e4u: goto label_1bd3e4;
        case 0x1bd3e8u: goto label_1bd3e8;
        case 0x1bd3ecu: goto label_1bd3ec;
        case 0x1bd3f0u: goto label_1bd3f0;
        case 0x1bd3f4u: goto label_1bd3f4;
        case 0x1bd3f8u: goto label_1bd3f8;
        case 0x1bd3fcu: goto label_1bd3fc;
        case 0x1bd400u: goto label_1bd400;
        case 0x1bd404u: goto label_1bd404;
        case 0x1bd408u: goto label_1bd408;
        case 0x1bd40cu: goto label_1bd40c;
        case 0x1bd410u: goto label_1bd410;
        case 0x1bd414u: goto label_1bd414;
        case 0x1bd418u: goto label_1bd418;
        case 0x1bd41cu: goto label_1bd41c;
        case 0x1bd420u: goto label_1bd420;
        case 0x1bd424u: goto label_1bd424;
        case 0x1bd428u: goto label_1bd428;
        case 0x1bd42cu: goto label_1bd42c;
        case 0x1bd430u: goto label_1bd430;
        case 0x1bd434u: goto label_1bd434;
        case 0x1bd438u: goto label_1bd438;
        case 0x1bd43cu: goto label_1bd43c;
        case 0x1bd440u: goto label_1bd440;
        case 0x1bd444u: goto label_1bd444;
        case 0x1bd448u: goto label_1bd448;
        case 0x1bd44cu: goto label_1bd44c;
        case 0x1bd450u: goto label_1bd450;
        case 0x1bd454u: goto label_1bd454;
        case 0x1bd458u: goto label_1bd458;
        case 0x1bd45cu: goto label_1bd45c;
        case 0x1bd460u: goto label_1bd460;
        case 0x1bd464u: goto label_1bd464;
        case 0x1bd468u: goto label_1bd468;
        case 0x1bd46cu: goto label_1bd46c;
        case 0x1bd470u: goto label_1bd470;
        case 0x1bd474u: goto label_1bd474;
        case 0x1bd478u: goto label_1bd478;
        case 0x1bd47cu: goto label_1bd47c;
        case 0x1bd480u: goto label_1bd480;
        case 0x1bd484u: goto label_1bd484;
        case 0x1bd488u: goto label_1bd488;
        case 0x1bd48cu: goto label_1bd48c;
        case 0x1bd490u: goto label_1bd490;
        case 0x1bd494u: goto label_1bd494;
        case 0x1bd498u: goto label_1bd498;
        case 0x1bd49cu: goto label_1bd49c;
        case 0x1bd4a0u: goto label_1bd4a0;
        case 0x1bd4a4u: goto label_1bd4a4;
        case 0x1bd4a8u: goto label_1bd4a8;
        case 0x1bd4acu: goto label_1bd4ac;
        case 0x1bd4b0u: goto label_1bd4b0;
        case 0x1bd4b4u: goto label_1bd4b4;
        case 0x1bd4b8u: goto label_1bd4b8;
        case 0x1bd4bcu: goto label_1bd4bc;
        case 0x1bd4c0u: goto label_1bd4c0;
        case 0x1bd4c4u: goto label_1bd4c4;
        case 0x1bd4c8u: goto label_1bd4c8;
        case 0x1bd4ccu: goto label_1bd4cc;
        case 0x1bd4d0u: goto label_1bd4d0;
        case 0x1bd4d4u: goto label_1bd4d4;
        case 0x1bd4d8u: goto label_1bd4d8;
        case 0x1bd4dcu: goto label_1bd4dc;
        case 0x1bd4e0u: goto label_1bd4e0;
        case 0x1bd4e4u: goto label_1bd4e4;
        case 0x1bd4e8u: goto label_1bd4e8;
        case 0x1bd4ecu: goto label_1bd4ec;
        case 0x1bd4f0u: goto label_1bd4f0;
        case 0x1bd4f4u: goto label_1bd4f4;
        case 0x1bd4f8u: goto label_1bd4f8;
        case 0x1bd4fcu: goto label_1bd4fc;
        case 0x1bd500u: goto label_1bd500;
        case 0x1bd504u: goto label_1bd504;
        case 0x1bd508u: goto label_1bd508;
        case 0x1bd50cu: goto label_1bd50c;
        case 0x1bd510u: goto label_1bd510;
        case 0x1bd514u: goto label_1bd514;
        case 0x1bd518u: goto label_1bd518;
        case 0x1bd51cu: goto label_1bd51c;
        case 0x1bd520u: goto label_1bd520;
        case 0x1bd524u: goto label_1bd524;
        case 0x1bd528u: goto label_1bd528;
        case 0x1bd52cu: goto label_1bd52c;
        case 0x1bd530u: goto label_1bd530;
        case 0x1bd534u: goto label_1bd534;
        case 0x1bd538u: goto label_1bd538;
        case 0x1bd53cu: goto label_1bd53c;
        case 0x1bd540u: goto label_1bd540;
        case 0x1bd544u: goto label_1bd544;
        case 0x1bd548u: goto label_1bd548;
        case 0x1bd54cu: goto label_1bd54c;
        case 0x1bd550u: goto label_1bd550;
        case 0x1bd554u: goto label_1bd554;
        case 0x1bd558u: goto label_1bd558;
        case 0x1bd55cu: goto label_1bd55c;
        case 0x1bd560u: goto label_1bd560;
        case 0x1bd564u: goto label_1bd564;
        case 0x1bd568u: goto label_1bd568;
        case 0x1bd56cu: goto label_1bd56c;
        case 0x1bd570u: goto label_1bd570;
        case 0x1bd574u: goto label_1bd574;
        case 0x1bd578u: goto label_1bd578;
        case 0x1bd57cu: goto label_1bd57c;
        case 0x1bd580u: goto label_1bd580;
        case 0x1bd584u: goto label_1bd584;
        case 0x1bd588u: goto label_1bd588;
        case 0x1bd58cu: goto label_1bd58c;
        case 0x1bd590u: goto label_1bd590;
        case 0x1bd594u: goto label_1bd594;
        case 0x1bd598u: goto label_1bd598;
        case 0x1bd59cu: goto label_1bd59c;
        case 0x1bd5a0u: goto label_1bd5a0;
        case 0x1bd5a4u: goto label_1bd5a4;
        case 0x1bd5a8u: goto label_1bd5a8;
        case 0x1bd5acu: goto label_1bd5ac;
        case 0x1bd5b0u: goto label_1bd5b0;
        case 0x1bd5b4u: goto label_1bd5b4;
        case 0x1bd5b8u: goto label_1bd5b8;
        case 0x1bd5bcu: goto label_1bd5bc;
        case 0x1bd5c0u: goto label_1bd5c0;
        case 0x1bd5c4u: goto label_1bd5c4;
        case 0x1bd5c8u: goto label_1bd5c8;
        case 0x1bd5ccu: goto label_1bd5cc;
        case 0x1bd5d0u: goto label_1bd5d0;
        case 0x1bd5d4u: goto label_1bd5d4;
        case 0x1bd5d8u: goto label_1bd5d8;
        case 0x1bd5dcu: goto label_1bd5dc;
        case 0x1bd5e0u: goto label_1bd5e0;
        case 0x1bd5e4u: goto label_1bd5e4;
        case 0x1bd5e8u: goto label_1bd5e8;
        case 0x1bd5ecu: goto label_1bd5ec;
        case 0x1bd5f0u: goto label_1bd5f0;
        case 0x1bd5f4u: goto label_1bd5f4;
        case 0x1bd5f8u: goto label_1bd5f8;
        case 0x1bd5fcu: goto label_1bd5fc;
        case 0x1bd600u: goto label_1bd600;
        case 0x1bd604u: goto label_1bd604;
        case 0x1bd608u: goto label_1bd608;
        case 0x1bd60cu: goto label_1bd60c;
        case 0x1bd610u: goto label_1bd610;
        case 0x1bd614u: goto label_1bd614;
        case 0x1bd618u: goto label_1bd618;
        case 0x1bd61cu: goto label_1bd61c;
        case 0x1bd620u: goto label_1bd620;
        case 0x1bd624u: goto label_1bd624;
        case 0x1bd628u: goto label_1bd628;
        case 0x1bd62cu: goto label_1bd62c;
        case 0x1bd630u: goto label_1bd630;
        case 0x1bd634u: goto label_1bd634;
        case 0x1bd638u: goto label_1bd638;
        case 0x1bd63cu: goto label_1bd63c;
        case 0x1bd640u: goto label_1bd640;
        case 0x1bd644u: goto label_1bd644;
        case 0x1bd648u: goto label_1bd648;
        case 0x1bd64cu: goto label_1bd64c;
        case 0x1bd650u: goto label_1bd650;
        case 0x1bd654u: goto label_1bd654;
        case 0x1bd658u: goto label_1bd658;
        case 0x1bd65cu: goto label_1bd65c;
        case 0x1bd660u: goto label_1bd660;
        case 0x1bd664u: goto label_1bd664;
        case 0x1bd668u: goto label_1bd668;
        case 0x1bd66cu: goto label_1bd66c;
        case 0x1bd670u: goto label_1bd670;
        case 0x1bd674u: goto label_1bd674;
        case 0x1bd678u: goto label_1bd678;
        case 0x1bd67cu: goto label_1bd67c;
        case 0x1bd680u: goto label_1bd680;
        case 0x1bd684u: goto label_1bd684;
        case 0x1bd688u: goto label_1bd688;
        case 0x1bd68cu: goto label_1bd68c;
        case 0x1bd690u: goto label_1bd690;
        case 0x1bd694u: goto label_1bd694;
        case 0x1bd698u: goto label_1bd698;
        case 0x1bd69cu: goto label_1bd69c;
        case 0x1bd6a0u: goto label_1bd6a0;
        case 0x1bd6a4u: goto label_1bd6a4;
        case 0x1bd6a8u: goto label_1bd6a8;
        case 0x1bd6acu: goto label_1bd6ac;
        case 0x1bd6b0u: goto label_1bd6b0;
        case 0x1bd6b4u: goto label_1bd6b4;
        case 0x1bd6b8u: goto label_1bd6b8;
        case 0x1bd6bcu: goto label_1bd6bc;
        case 0x1bd6c0u: goto label_1bd6c0;
        case 0x1bd6c4u: goto label_1bd6c4;
        case 0x1bd6c8u: goto label_1bd6c8;
        case 0x1bd6ccu: goto label_1bd6cc;
        case 0x1bd6d0u: goto label_1bd6d0;
        case 0x1bd6d4u: goto label_1bd6d4;
        case 0x1bd6d8u: goto label_1bd6d8;
        case 0x1bd6dcu: goto label_1bd6dc;
        case 0x1bd6e0u: goto label_1bd6e0;
        case 0x1bd6e4u: goto label_1bd6e4;
        case 0x1bd6e8u: goto label_1bd6e8;
        case 0x1bd6ecu: goto label_1bd6ec;
        case 0x1bd6f0u: goto label_1bd6f0;
        case 0x1bd6f4u: goto label_1bd6f4;
        case 0x1bd6f8u: goto label_1bd6f8;
        case 0x1bd6fcu: goto label_1bd6fc;
        case 0x1bd700u: goto label_1bd700;
        case 0x1bd704u: goto label_1bd704;
        case 0x1bd708u: goto label_1bd708;
        case 0x1bd70cu: goto label_1bd70c;
        case 0x1bd710u: goto label_1bd710;
        case 0x1bd714u: goto label_1bd714;
        case 0x1bd718u: goto label_1bd718;
        case 0x1bd71cu: goto label_1bd71c;
        case 0x1bd720u: goto label_1bd720;
        case 0x1bd724u: goto label_1bd724;
        case 0x1bd728u: goto label_1bd728;
        case 0x1bd72cu: goto label_1bd72c;
        case 0x1bd730u: goto label_1bd730;
        case 0x1bd734u: goto label_1bd734;
        case 0x1bd738u: goto label_1bd738;
        case 0x1bd73cu: goto label_1bd73c;
        case 0x1bd740u: goto label_1bd740;
        case 0x1bd744u: goto label_1bd744;
        case 0x1bd748u: goto label_1bd748;
        case 0x1bd74cu: goto label_1bd74c;
        case 0x1bd750u: goto label_1bd750;
        case 0x1bd754u: goto label_1bd754;
        case 0x1bd758u: goto label_1bd758;
        case 0x1bd75cu: goto label_1bd75c;
        case 0x1bd760u: goto label_1bd760;
        case 0x1bd764u: goto label_1bd764;
        case 0x1bd768u: goto label_1bd768;
        case 0x1bd76cu: goto label_1bd76c;
        case 0x1bd770u: goto label_1bd770;
        case 0x1bd774u: goto label_1bd774;
        case 0x1bd778u: goto label_1bd778;
        case 0x1bd77cu: goto label_1bd77c;
        case 0x1bd780u: goto label_1bd780;
        case 0x1bd784u: goto label_1bd784;
        case 0x1bd788u: goto label_1bd788;
        case 0x1bd78cu: goto label_1bd78c;
        case 0x1bd790u: goto label_1bd790;
        case 0x1bd794u: goto label_1bd794;
        case 0x1bd798u: goto label_1bd798;
        case 0x1bd79cu: goto label_1bd79c;
        case 0x1bd7a0u: goto label_1bd7a0;
        case 0x1bd7a4u: goto label_1bd7a4;
        case 0x1bd7a8u: goto label_1bd7a8;
        case 0x1bd7acu: goto label_1bd7ac;
        case 0x1bd7b0u: goto label_1bd7b0;
        case 0x1bd7b4u: goto label_1bd7b4;
        case 0x1bd7b8u: goto label_1bd7b8;
        case 0x1bd7bcu: goto label_1bd7bc;
        case 0x1bd7c0u: goto label_1bd7c0;
        case 0x1bd7c4u: goto label_1bd7c4;
        case 0x1bd7c8u: goto label_1bd7c8;
        case 0x1bd7ccu: goto label_1bd7cc;
        case 0x1bd7d0u: goto label_1bd7d0;
        case 0x1bd7d4u: goto label_1bd7d4;
        case 0x1bd7d8u: goto label_1bd7d8;
        case 0x1bd7dcu: goto label_1bd7dc;
        case 0x1bd7e0u: goto label_1bd7e0;
        case 0x1bd7e4u: goto label_1bd7e4;
        case 0x1bd7e8u: goto label_1bd7e8;
        case 0x1bd7ecu: goto label_1bd7ec;
        case 0x1bd7f0u: goto label_1bd7f0;
        case 0x1bd7f4u: goto label_1bd7f4;
        case 0x1bd7f8u: goto label_1bd7f8;
        case 0x1bd7fcu: goto label_1bd7fc;
        case 0x1bd800u: goto label_1bd800;
        case 0x1bd804u: goto label_1bd804;
        case 0x1bd808u: goto label_1bd808;
        case 0x1bd80cu: goto label_1bd80c;
        case 0x1bd810u: goto label_1bd810;
        case 0x1bd814u: goto label_1bd814;
        case 0x1bd818u: goto label_1bd818;
        case 0x1bd81cu: goto label_1bd81c;
        case 0x1bd820u: goto label_1bd820;
        case 0x1bd824u: goto label_1bd824;
        case 0x1bd828u: goto label_1bd828;
        case 0x1bd82cu: goto label_1bd82c;
        case 0x1bd830u: goto label_1bd830;
        case 0x1bd834u: goto label_1bd834;
        case 0x1bd838u: goto label_1bd838;
        case 0x1bd83cu: goto label_1bd83c;
        case 0x1bd840u: goto label_1bd840;
        case 0x1bd844u: goto label_1bd844;
        case 0x1bd848u: goto label_1bd848;
        case 0x1bd84cu: goto label_1bd84c;
        case 0x1bd850u: goto label_1bd850;
        case 0x1bd854u: goto label_1bd854;
        case 0x1bd858u: goto label_1bd858;
        case 0x1bd85cu: goto label_1bd85c;
        case 0x1bd860u: goto label_1bd860;
        case 0x1bd864u: goto label_1bd864;
        case 0x1bd868u: goto label_1bd868;
        case 0x1bd86cu: goto label_1bd86c;
        case 0x1bd870u: goto label_1bd870;
        case 0x1bd874u: goto label_1bd874;
        case 0x1bd878u: goto label_1bd878;
        case 0x1bd87cu: goto label_1bd87c;
        case 0x1bd880u: goto label_1bd880;
        case 0x1bd884u: goto label_1bd884;
        case 0x1bd888u: goto label_1bd888;
        case 0x1bd88cu: goto label_1bd88c;
        case 0x1bd890u: goto label_1bd890;
        case 0x1bd894u: goto label_1bd894;
        case 0x1bd898u: goto label_1bd898;
        case 0x1bd89cu: goto label_1bd89c;
        case 0x1bd8a0u: goto label_1bd8a0;
        case 0x1bd8a4u: goto label_1bd8a4;
        case 0x1bd8a8u: goto label_1bd8a8;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8b0u: goto label_1bd8b0;
        case 0x1bd8b4u: goto label_1bd8b4;
        case 0x1bd8b8u: goto label_1bd8b8;
        case 0x1bd8bcu: goto label_1bd8bc;
        case 0x1bd8c0u: goto label_1bd8c0;
        case 0x1bd8c4u: goto label_1bd8c4;
        default: return;
    }

label_1bd0f8:
    // 0x1bd0f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bd0fc:
    // 0x1bd0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd100:
    // 0x1bd100: 0x10000001  b           . + 4 + (0x1 << 2)
label_1bd104:
    if (ctx->pc == 0x1BD104u) {
        ctx->pc = 0x1BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD100u;
        // 0x1bd104: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD108u;
        goto label_1bd108;
    }
    ctx->pc = 0x1BD100u;
    {
        const bool branch_taken_0x1bd100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD100u;
        // 0x1bd104: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd100) {
            ctx->pc = 0x1BD108u;
            goto label_1bd108;
        }
    }
    ctx->pc = 0x1BD108u;
label_1bd108:
    // 0x1bd108: 0xe6610044  swc1        $f1, 0x44($s3)
    ctx->pc = 0x1bd108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1bd10c:
    // 0x1bd10c: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x1bd10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1bd110:
    // 0x1bd110: 0xc6600210  lwc1        $f0, 0x210($s3)
    ctx->pc = 0x1bd110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd114:
    // 0x1bd114: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1bd114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_1bd118:
    // 0x1bd118: 0xc6600214  lwc1        $f0, 0x214($s3)
    ctx->pc = 0x1bd118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd11c:
    // 0x1bd11c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bd120:
    if (ctx->pc == 0x1BD120u) {
        ctx->pc = 0x1BD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD11Cu;
        // 0x1bd120: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD124u;
        goto label_1bd124;
    }
    ctx->pc = 0x1BD11Cu;
    {
        const bool branch_taken_0x1bd11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD11Cu;
        // 0x1bd120: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd11c) {
            ctx->pc = 0x1BD150u;
            goto label_1bd150;
        }
    }
    ctx->pc = 0x1BD124u;
label_1bd124:
    // 0x1bd124: 0x9286003a  lbu         $a2, 0x3A($s4)
    ctx->pc = 0x1bd124u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 58)));
label_1bd128:
    // 0x1bd128: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bd128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bd12c:
    // 0x1bd12c: 0xc06fcec  jal         func_1BF3B0
label_1bd130:
    if (ctx->pc == 0x1BD130u) {
        ctx->pc = 0x1BD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD12Cu;
        // 0x1bd130: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD134u;
        goto label_1bd134;
    }
    ctx->pc = 0x1BD12Cu;
    SET_GPR_U32(ctx, 31, 0x1BD134u);
    ctx->pc = 0x1BD130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD12Cu;
    // 0x1bd130: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF3B0u;
    { ctx->pc = 0x1bf3b0; return; }
    ctx->pc = 0x1BD134u;
label_1bd134:
    // 0x1bd134: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x1bd134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd138:
    // 0x1bd138: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1bd138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1bd13c:
    // 0x1bd13c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1bd13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1bd140:
    // 0x1bd140: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1bd140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd144:
    // 0x1bd144: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1bd144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_1bd148:
    // 0x1bd148: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1bd148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd14c:
    // 0x1bd14c: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x1bd14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_1bd150:
    // 0x1bd150: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x1bd150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd154:
    // 0x1bd154: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x1bd154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_1bd158:
    // 0x1bd158: 0x34464dd3  ori         $a2, $v0, 0x4DD3
    ctx->pc = 0x1bd158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_1bd15c:
    // 0x1bd15c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1bd160:
    // 0x1bd160: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bd164:
    // 0x1bd164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bd164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bd168:
    // 0x1bd168: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bd168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bd16c:
    // 0x1bd16c: 0x0  nop
    ctx->pc = 0x1bd16cu;
    // NOP
label_1bd170:
    // 0x1bd170: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x1bd170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd174:
    // 0x1bd174: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1bd174u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd178:
    // 0x1bd178: 0x0  nop
    ctx->pc = 0x1bd178u;
    // NOP
label_1bd17c:
    // 0x1bd17c: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd17cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bd180:
    // 0x1bd180: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1bd180u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_1bd184:
    // 0x1bd184: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd188:
    // 0x1bd188: 0xa264021a  sb          $a0, 0x21A($s3)
    ctx->pc = 0x1bd188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 538), (uint8_t)GPR_U32(ctx, 4));
label_1bd18c:
    // 0x1bd18c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x1bd18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd190:
    // 0x1bd190: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bd190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bd194:
    // 0x1bd194: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bd194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bd198:
    // 0x1bd198: 0x0  nop
    ctx->pc = 0x1bd198u;
    // NOP
label_1bd19c:
    // 0x1bd19c: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x1bd19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd1a0:
    // 0x1bd1a0: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1bd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd1a4:
    // 0x1bd1a4: 0x0  nop
    ctx->pc = 0x1bd1a4u;
    // NOP
label_1bd1a8:
    // 0x1bd1a8: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd1a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bd1ac:
    // 0x1bd1ac: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_1bd1b0:
    // 0x1bd1b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd1b4:
    // 0x1bd1b4: 0xa264021b  sb          $a0, 0x21B($s3)
    ctx->pc = 0x1bd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 539), (uint8_t)GPR_U32(ctx, 4));
label_1bd1b8:
    // 0x1bd1b8: 0xae630284  sw          $v1, 0x284($s3)
    ctx->pc = 0x1bd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 3));
label_1bd1bc:
    // 0x1bd1bc: 0xfe600270  sd          $zero, 0x270($s3)
    ctx->pc = 0x1bd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 624), GPR_U64(ctx, 0));
label_1bd1c0:
    // 0x1bd1c0: 0xa6600288  sh          $zero, 0x288($s3)
    ctx->pc = 0x1bd1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 648), (uint16_t)GPR_U32(ctx, 0));
label_1bd1c4:
    // 0x1bd1c4: 0xa662028a  sh          $v0, 0x28A($s3)
    ctx->pc = 0x1bd1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 650), (uint16_t)GPR_U32(ctx, 2));
label_1bd1c8:
    // 0x1bd1c8: 0xa660028c  sh          $zero, 0x28C($s3)
    ctx->pc = 0x1bd1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 652), (uint16_t)GPR_U32(ctx, 0));
label_1bd1cc:
    // 0x1bd1cc: 0xa660028e  sh          $zero, 0x28E($s3)
    ctx->pc = 0x1bd1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 654), (uint16_t)GPR_U32(ctx, 0));
label_1bd1d0:
    // 0x1bd1d0: 0xae60020c  sw          $zero, 0x20C($s3)
    ctx->pc = 0x1bd1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 0));
label_1bd1d4:
    // 0x1bd1d4: 0xa2600282  sb          $zero, 0x282($s3)
    ctx->pc = 0x1bd1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 642), (uint8_t)GPR_U32(ctx, 0));
label_1bd1d8:
    // 0x1bd1d8: 0xae630278  sw          $v1, 0x278($s3)
    ctx->pc = 0x1bd1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 3));
label_1bd1dc:
    // 0x1bd1dc: 0xa6600280  sh          $zero, 0x280($s3)
    ctx->pc = 0x1bd1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 0));
label_1bd1e0:
    // 0x1bd1e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd1e4:
    // 0x1bd1e4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bd1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bd1e8:
    // 0x1bd1e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1bd1ec:
    if (ctx->pc == 0x1BD1ECu) {
        ctx->pc = 0x1BD1F0u;
        goto label_1bd1f0;
    }
    ctx->pc = 0x1BD1E8u;
    {
        const bool branch_taken_0x1bd1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd1e8) {
            ctx->pc = 0x1BD208u;
            goto label_1bd208;
        }
    }
    ctx->pc = 0x1BD1F0u;
label_1bd1f0:
    // 0x1bd1f0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1bd1f4:
    if (ctx->pc == 0x1BD1F4u) {
        ctx->pc = 0x1BD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F0u;
        // 0x1bd1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD1F8u;
        goto label_1bd1f8;
    }
    ctx->pc = 0x1BD1F0u;
    {
        const bool branch_taken_0x1bd1f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F0u;
        // 0x1bd1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1f0) {
            ctx->pc = 0x1BD200u;
            goto label_1bd200;
        }
    }
    ctx->pc = 0x1BD1F8u;
label_1bd1f8:
    // 0x1bd1f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bd1fc:
    if (ctx->pc == 0x1BD1FCu) {
        ctx->pc = 0x1BD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F8u;
        // 0x1bd1fc: 0xa2600232  sb          $zero, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD200u;
        goto label_1bd200;
    }
    ctx->pc = 0x1BD1F8u;
    {
        const bool branch_taken_0x1bd1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F8u;
        // 0x1bd1fc: 0xa2600232  sb          $zero, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1f8) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD200u;
label_1bd200:
    // 0x1bd200: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd204:
    if (ctx->pc == 0x1BD204u) {
        ctx->pc = 0x1BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD200u;
        // 0x1bd204: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD208u;
        goto label_1bd208;
    }
    ctx->pc = 0x1BD200u;
    {
        const bool branch_taken_0x1bd200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD200u;
        // 0x1bd204: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd200) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD208u;
label_1bd208:
    // 0x1bd208: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1bd20c:
    if (ctx->pc == 0x1BD20Cu) {
        ctx->pc = 0x1BD210u;
        goto label_1bd210;
    }
    ctx->pc = 0x1BD208u;
    {
        const bool branch_taken_0x1bd208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd208) {
            ctx->pc = 0x1BD218u;
            goto label_1bd218;
        }
    }
    ctx->pc = 0x1BD210u;
label_1bd210:
    // 0x1bd210: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bd214:
    if (ctx->pc == 0x1BD214u) {
        ctx->pc = 0x1BD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD210u;
        // 0x1bd214: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD218u;
        goto label_1bd218;
    }
    ctx->pc = 0x1BD210u;
    {
        const bool branch_taken_0x1bd210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD210u;
        // 0x1bd214: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd210) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD218u;
label_1bd218:
    // 0x1bd218: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bd21c:
    // 0x1bd21c: 0xa2620232  sb          $v0, 0x232($s3)
    ctx->pc = 0x1bd21cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
label_1bd220:
    // 0x1bd220: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd224:
    // 0x1bd224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bd228:
    // 0x1bd228: 0x90450018  lbu         $a1, 0x18($v0)
    ctx->pc = 0x1bd228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_1bd22c:
    // 0x1bd22c: 0xc06fe14  jal         func_1BF850
label_1bd230:
    if (ctx->pc == 0x1BD230u) {
        ctx->pc = 0x1BD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD22Cu;
        // 0x1bd230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD234u;
        goto label_1bd234;
    }
    ctx->pc = 0x1BD22Cu;
    SET_GPR_U32(ctx, 31, 0x1BD234u);
    ctx->pc = 0x1BD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD22Cu;
    // 0x1bd230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF850u;
    { ctx->pc = 0x1bf850; return; }
    ctx->pc = 0x1BD234u;
label_1bd234:
    // 0x1bd234: 0x16200101  bnez        $s1, . + 4 + (0x101 << 2)
label_1bd238:
    if (ctx->pc == 0x1BD238u) {
        ctx->pc = 0x1BD23Cu;
        goto label_1bd23c;
    }
    ctx->pc = 0x1BD234u;
    {
        const bool branch_taken_0x1bd234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd234) {
            ctx->pc = 0x1BD63Cu;
            goto label_1bd63c;
        }
    }
    ctx->pc = 0x1BD23Cu;
label_1bd23c:
    // 0x1bd23c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd240:
    // 0x1bd240: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1bd240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1bd244:
    // 0x1bd244: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bd248:
    // 0x1bd248: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1bd24c:
    // 0x1bd24c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd250:
    // 0x1bd250: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1bd254:
    // 0x1bd254: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1bd254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1bd258:
    // 0x1bd258: 0x24a53b82  addiu       $a1, $a1, 0x3B82
    ctx->pc = 0x1bd258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15234));
label_1bd25c:
    // 0x1bd25c: 0x24843b83  addiu       $a0, $a0, 0x3B83
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15235));
label_1bd260:
    // 0x1bd260: 0x24633b84  addiu       $v1, $v1, 0x3B84
    ctx->pc = 0x1bd260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15236));
label_1bd264:
    // 0x1bd264: 0x24423b85  addiu       $v0, $v0, 0x3B85
    ctx->pc = 0x1bd264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15237));
label_1bd268:
    // 0x1bd268: 0x84e70008  lh          $a3, 0x8($a3)
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1bd26c:
    // 0x1bd26c: 0xa6670220  sh          $a3, 0x220($s3)
    ctx->pc = 0x1bd26cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 7));
label_1bd270:
    // 0x1bd270: 0xa6670252  sh          $a3, 0x252($s3)
    ctx->pc = 0x1bd270u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 7));
label_1bd274:
    // 0x1bd274: 0xa6670222  sh          $a3, 0x222($s3)
    ctx->pc = 0x1bd274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 7));
label_1bd278:
    // 0x1bd278: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd27c:
    // 0x1bd27c: 0x90e70012  lbu         $a3, 0x12($a3)
    ctx->pc = 0x1bd27cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_1bd280:
    // 0x1bd280: 0xa2670232  sb          $a3, 0x232($s3)
    ctx->pc = 0x1bd280u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 7));
label_1bd284:
    // 0x1bd284: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd288:
    // 0x1bd288: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1bd288u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1bd28c:
    // 0x1bd28c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1bd28cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1bd290:
    // 0x1bd290: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bd294:
    // 0x1bd294: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bd298:
    // 0x1bd298: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bd298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1bd29c:
    // 0x1bd29c: 0xa2660241  sb          $a2, 0x241($s3)
    ctx->pc = 0x1bd29cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 6));
label_1bd2a0:
    // 0x1bd2a0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2a4:
    // 0x1bd2a4: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1bd2a4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1bd2a8:
    // 0x1bd2a8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1bd2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1bd2ac:
    // 0x1bd2ac: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1bd2acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bd2b0:
    // 0x1bd2b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bd2b4:
    // 0x1bd2b4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd2b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd2b8:
    // 0x1bd2b8: 0xa2650242  sb          $a1, 0x242($s3)
    ctx->pc = 0x1bd2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 5));
label_1bd2bc:
    // 0x1bd2bc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1bd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2c0:
    // 0x1bd2c0: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x1bd2c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1bd2c4:
    // 0x1bd2c4: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1bd2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bd2c8:
    // 0x1bd2c8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1bd2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bd2cc:
    // 0x1bd2cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd2d0:
    // 0x1bd2d0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bd2d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd2d4:
    // 0x1bd2d4: 0xa2640243  sb          $a0, 0x243($s3)
    ctx->pc = 0x1bd2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 4));
label_1bd2d8:
    // 0x1bd2d8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2dc:
    // 0x1bd2dc: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x1bd2dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1bd2e0:
    // 0x1bd2e0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1bd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bd2e4:
    // 0x1bd2e4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1bd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd2e8:
    // 0x1bd2e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd2ec:
    // 0x1bd2ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd2f0:
    // 0x1bd2f0: 0xa2630244  sb          $v1, 0x244($s3)
    ctx->pc = 0x1bd2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 3));
label_1bd2f4:
    // 0x1bd2f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2f8:
    // 0x1bd2f8: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x1bd2f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bd2fc:
    // 0x1bd2fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bd300:
    // 0x1bd300: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd304:
    // 0x1bd304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd308:
    // 0x1bd308: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bd308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd30c:
    // 0x1bd30c: 0xa2620246  sb          $v0, 0x246($s3)
    ctx->pc = 0x1bd30cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 2));
label_1bd310:
    // 0x1bd310: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1bd314:
    // 0x1bd314: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1bd318:
    if (ctx->pc == 0x1BD318u) {
        ctx->pc = 0x1BD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD314u;
        // 0x1bd318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD31Cu;
        goto label_1bd31c;
    }
    ctx->pc = 0x1BD314u;
    {
        const bool branch_taken_0x1bd314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD314u;
        // 0x1bd318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd314) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD31Cu;
label_1bd31c:
    // 0x1bd31c: 0xc056a38  jal         func_15A8E0
label_1bd320:
    if (ctx->pc == 0x1BD320u) {
        ctx->pc = 0x1BD324u;
        goto label_1bd324;
    }
    ctx->pc = 0x1BD31Cu;
    SET_GPR_U32(ctx, 31, 0x1BD324u);
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x1BD31Cu, 0x1BD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD324u;
label_1bd324:
    // 0x1bd324: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1bd328:
    // 0x1bd328: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1bd32c:
    if (ctx->pc == 0x1BD32Cu) {
        ctx->pc = 0x1BD330u;
        goto label_1bd330;
    }
    ctx->pc = 0x1BD328u;
    {
        const bool branch_taken_0x1bd328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd328) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD330u;
label_1bd330:
    // 0x1bd330: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd334:
    // 0x1bd334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd338:
    // 0x1bd338: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x1bd338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bd33c:
    // 0x1bd33c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1bd340:
    if (ctx->pc == 0x1BD340u) {
        ctx->pc = 0x1BD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD33Cu;
        // 0x1bd340: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD344u;
        goto label_1bd344;
    }
    ctx->pc = 0x1BD33Cu;
    {
        const bool branch_taken_0x1bd33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD33Cu;
        // 0x1bd340: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd33c) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD344u;
label_1bd344:
    // 0x1bd344: 0xa2620246  sb          $v0, 0x246($s3)
    ctx->pc = 0x1bd344u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 2));
label_1bd348:
    // 0x1bd348: 0x92840047  lbu         $a0, 0x47($s4)
    ctx->pc = 0x1bd348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
label_1bd34c:
    // 0x1bd34c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1bd350:
    // 0x1bd350: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bd354:
    // 0x1bd354: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1bd354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1bd358:
    // 0x1bd358: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
label_1bd35c:
    // 0x1bd35c: 0xa2640240  sb          $a0, 0x240($s3)
    ctx->pc = 0x1bd35cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 4));
label_1bd360:
    // 0x1bd360: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd364:
    // 0x1bd364: 0x90420017  lbu         $v0, 0x17($v0)
    ctx->pc = 0x1bd364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_1bd368:
    // 0x1bd368: 0xa2620248  sb          $v0, 0x248($s3)
    ctx->pc = 0x1bd368u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 584), (uint8_t)GPR_U32(ctx, 2));
label_1bd36c:
    // 0x1bd36c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd370:
    // 0x1bd370: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x1bd370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_1bd374:
    // 0x1bd374: 0xa262024a  sb          $v0, 0x24A($s3)
    ctx->pc = 0x1bd374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 2));
label_1bd378:
    // 0x1bd378: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd37c:
    // 0x1bd37c: 0x9042000f  lbu         $v0, 0xF($v0)
    ctx->pc = 0x1bd37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_1bd380:
    // 0x1bd380: 0xa262024b  sb          $v0, 0x24B($s3)
    ctx->pc = 0x1bd380u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 2));
label_1bd384:
    // 0x1bd384: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd388:
    // 0x1bd388: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1bd388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1bd38c:
    // 0x1bd38c: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1bd38cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1bd390:
    // 0x1bd390: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1bd390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bd394:
    // 0x1bd394: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bd398:
    // 0x1bd398: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bd39c:
    // 0x1bd39c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd39cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd3a0:
    // 0x1bd3a0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1bd3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd3a4:
    // 0x1bd3a4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd3a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd3a8:
    // 0x1bd3a8: 0x0  nop
    ctx->pc = 0x1bd3a8u;
    // NOP
label_1bd3ac:
    // 0x1bd3ac: 0x0  nop
    ctx->pc = 0x1bd3acu;
    // NOP
label_1bd3b0:
    // 0x1bd3b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd3b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd3b4:
    // 0x1bd3b4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd3b8:
    // 0x1bd3b8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd3bc:
    // 0x1bd3bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd3c0:
    // 0x1bd3c0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd3c4:
    // 0x1bd3c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd3c8:
    if (ctx->pc == 0x1BD3C8u) {
        ctx->pc = 0x1BD3CCu;
        goto label_1bd3cc;
    }
    ctx->pc = 0x1BD3C4u;
    {
        const bool branch_taken_0x1bd3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3c4) {
            ctx->pc = 0x1BD3D0u;
            goto label_1bd3d0;
        }
    }
    ctx->pc = 0x1BD3CCu;
label_1bd3cc:
    // 0x1bd3cc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd3d0:
    // 0x1bd3d0: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1bd3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
label_1bd3d4:
    // 0x1bd3d4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd3d8:
    // 0x1bd3d8: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1bd3dc:
    // 0x1bd3dc: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1bd3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
label_1bd3e0:
    // 0x1bd3e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd3e4:
    // 0x1bd3e4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd3e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd3e8:
    // 0x1bd3e8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd3ec:
    // 0x1bd3ec: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bd3f0:
    // 0x1bd3f0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bd3f4:
    // 0x1bd3f4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd3f8:
    // 0x1bd3f8: 0x0  nop
    ctx->pc = 0x1bd3f8u;
    // NOP
label_1bd3fc:
    // 0x1bd3fc: 0x0  nop
    ctx->pc = 0x1bd3fcu;
    // NOP
label_1bd400:
    // 0x1bd400: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd404:
    // 0x1bd404: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd408:
    // 0x1bd408: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd408u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd40c:
    // 0x1bd40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd410:
    // 0x1bd410: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd414:
    // 0x1bd414: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd418:
    if (ctx->pc == 0x1BD418u) {
        ctx->pc = 0x1BD41Cu;
        goto label_1bd41c;
    }
    ctx->pc = 0x1BD414u;
    {
        const bool branch_taken_0x1bd414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd414) {
            ctx->pc = 0x1BD420u;
            goto label_1bd420;
        }
    }
    ctx->pc = 0x1BD41Cu;
label_1bd41c:
    // 0x1bd41c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd420:
    // 0x1bd420: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1bd420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
label_1bd424:
    // 0x1bd424: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd428:
    // 0x1bd428: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bd428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1bd42c:
    // 0x1bd42c: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1bd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
label_1bd430:
    // 0x1bd430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd434:
    // 0x1bd434: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd438:
    // 0x1bd438: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd43c:
    // 0x1bd43c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bd440:
    // 0x1bd440: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bd444:
    // 0x1bd444: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd448:
    // 0x1bd448: 0x0  nop
    ctx->pc = 0x1bd448u;
    // NOP
label_1bd44c:
    // 0x1bd44c: 0x0  nop
    ctx->pc = 0x1bd44cu;
    // NOP
label_1bd450:
    // 0x1bd450: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd450u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd454:
    // 0x1bd454: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd458:
    // 0x1bd458: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd45c:
    // 0x1bd45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd460:
    // 0x1bd460: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd464:
    // 0x1bd464: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd468:
    if (ctx->pc == 0x1BD468u) {
        ctx->pc = 0x1BD46Cu;
        goto label_1bd46c;
    }
    ctx->pc = 0x1BD464u;
    {
        const bool branch_taken_0x1bd464 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd464) {
            ctx->pc = 0x1BD470u;
            goto label_1bd470;
        }
    }
    ctx->pc = 0x1BD46Cu;
label_1bd46c:
    // 0x1bd46c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd470:
    // 0x1bd470: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1bd470u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
label_1bd474:
    // 0x1bd474: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd478:
    // 0x1bd478: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1bd47c:
    // 0x1bd47c: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1bd47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
label_1bd480:
    // 0x1bd480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd484:
    // 0x1bd484: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd488:
    // 0x1bd488: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd48c:
    // 0x1bd48c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bd490:
    // 0x1bd490: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bd494:
    // 0x1bd494: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd498:
    // 0x1bd498: 0x0  nop
    ctx->pc = 0x1bd498u;
    // NOP
label_1bd49c:
    // 0x1bd49c: 0x0  nop
    ctx->pc = 0x1bd49cu;
    // NOP
label_1bd4a0:
    // 0x1bd4a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd4a4:
    // 0x1bd4a4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd4a8:
    // 0x1bd4a8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd4ac:
    // 0x1bd4ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd4b0:
    // 0x1bd4b0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd4b4:
    // 0x1bd4b4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd4b8:
    if (ctx->pc == 0x1BD4B8u) {
        ctx->pc = 0x1BD4BCu;
        goto label_1bd4bc;
    }
    ctx->pc = 0x1BD4B4u;
    {
        const bool branch_taken_0x1bd4b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4b4) {
            ctx->pc = 0x1BD4C0u;
            goto label_1bd4c0;
        }
    }
    ctx->pc = 0x1BD4BCu;
label_1bd4bc:
    // 0x1bd4bc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd4c0:
    // 0x1bd4c0: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1bd4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
label_1bd4c4:
    // 0x1bd4c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd4c8:
    // 0x1bd4c8: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1bd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
label_1bd4cc:
    // 0x1bd4cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd4d0:
    // 0x1bd4d0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd4d4:
    // 0x1bd4d4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1bd4d8:
    if (ctx->pc == 0x1BD4D8u) {
        ctx->pc = 0x1BD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D4u;
        // 0x1bd4d8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4DCu;
        goto label_1bd4dc;
    }
    ctx->pc = 0x1BD4D4u;
    {
        const bool branch_taken_0x1bd4d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D4u;
        // 0x1bd4d8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4d4) {
            ctx->pc = 0x1BD4E8u;
            goto label_1bd4e8;
        }
    }
    ctx->pc = 0x1BD4DCu;
label_1bd4dc:
    // 0x1bd4dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd4e0:
    // 0x1bd4e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd4e4:
    if (ctx->pc == 0x1BD4E4u) {
        ctx->pc = 0x1BD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E0u;
        // 0x1bd4e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4E8u;
        goto label_1bd4e8;
    }
    ctx->pc = 0x1BD4E0u;
    {
        const bool branch_taken_0x1bd4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E0u;
        // 0x1bd4e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4e0) {
            ctx->pc = 0x1BD500u;
            goto label_1bd500;
        }
    }
    ctx->pc = 0x1BD4E8u;
label_1bd4e8:
    // 0x1bd4e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bd4ec:
    // 0x1bd4ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bd4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bd4f0:
    // 0x1bd4f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd4f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd4f4:
    // 0x1bd4f4: 0x0  nop
    ctx->pc = 0x1bd4f4u;
    // NOP
label_1bd4f8:
    // 0x1bd4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bd4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bd4fc:
    // 0x1bd4fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bd4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bd500:
    // 0x1bd500: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1bd504:
    // 0x1bd504: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd508:
    // 0x1bd508: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bd508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bd50c:
    // 0x1bd50c: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
label_1bd510:
    // 0x1bd510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd514:
    // 0x1bd514: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bd514u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1bd518:
    // 0x1bd518: 0x0  nop
    ctx->pc = 0x1bd518u;
    // NOP
label_1bd51c:
    // 0x1bd51c: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1bd51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
label_1bd520:
    // 0x1bd520: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd524:
    // 0x1bd524: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1bd528:
    if (ctx->pc == 0x1BD528u) {
        ctx->pc = 0x1BD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD524u;
        // 0x1bd528: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD52Cu;
        goto label_1bd52c;
    }
    ctx->pc = 0x1BD524u;
    {
        const bool branch_taken_0x1bd524 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD524u;
        // 0x1bd528: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd524) {
            ctx->pc = 0x1BD538u;
            goto label_1bd538;
        }
    }
    ctx->pc = 0x1BD52Cu;
label_1bd52c:
    // 0x1bd52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd530:
    // 0x1bd530: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd534:
    if (ctx->pc == 0x1BD534u) {
        ctx->pc = 0x1BD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD530u;
        // 0x1bd534: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD538u;
        goto label_1bd538;
    }
    ctx->pc = 0x1BD530u;
    {
        const bool branch_taken_0x1bd530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD530u;
        // 0x1bd534: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd530) {
            ctx->pc = 0x1BD550u;
            goto label_1bd550;
        }
    }
    ctx->pc = 0x1BD538u;
label_1bd538:
    // 0x1bd538: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bd53c:
    // 0x1bd53c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bd53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bd540:
    // 0x1bd540: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd544:
    // 0x1bd544: 0x0  nop
    ctx->pc = 0x1bd544u;
    // NOP
label_1bd548:
    // 0x1bd548: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bd548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bd54c:
    // 0x1bd54c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bd54cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bd550:
    // 0x1bd550: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1bd554:
    // 0x1bd554: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd558:
    // 0x1bd558: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd55c:
    // 0x1bd55c: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1bd55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
label_1bd560:
    // 0x1bd560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd564:
    // 0x1bd564: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bd564u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bd568:
    // 0x1bd568: 0x0  nop
    ctx->pc = 0x1bd568u;
    // NOP
label_1bd56c:
    // 0x1bd56c: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1bd56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_1bd570:
    // 0x1bd570: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bd570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd574:
    // 0x1bd574: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1bd578:
    if (ctx->pc == 0x1BD578u) {
        ctx->pc = 0x1BD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD574u;
        // 0x1bd578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD57Cu;
        goto label_1bd57c;
    }
    ctx->pc = 0x1BD574u;
    {
        const bool branch_taken_0x1bd574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD574u;
        // 0x1bd578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd574) {
            ctx->pc = 0x1BD588u;
            goto label_1bd588;
        }
    }
    ctx->pc = 0x1BD57Cu;
label_1bd57c:
    // 0x1bd57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd580:
    // 0x1bd580: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd584:
    if (ctx->pc == 0x1BD584u) {
        ctx->pc = 0x1BD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD580u;
        // 0x1bd584: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD588u;
        goto label_1bd588;
    }
    ctx->pc = 0x1BD580u;
    {
        const bool branch_taken_0x1bd580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD580u;
        // 0x1bd584: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd580) {
            ctx->pc = 0x1BD5A0u;
            goto label_1bd5a0;
        }
    }
    ctx->pc = 0x1BD588u;
label_1bd588:
    // 0x1bd588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bd58c:
    // 0x1bd58c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1bd590:
    // 0x1bd590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd594:
    // 0x1bd594: 0x0  nop
    ctx->pc = 0x1bd594u;
    // NOP
label_1bd598:
    // 0x1bd598: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bd598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bd59c:
    // 0x1bd59c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bd59cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bd5a0:
    // 0x1bd5a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1bd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1bd5a4:
    // 0x1bd5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd5a8:
    // 0x1bd5a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd5ac:
    // 0x1bd5ac: 0x0  nop
    ctx->pc = 0x1bd5acu;
    // NOP
label_1bd5b0:
    // 0x1bd5b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bd5b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bd5b4:
    // 0x1bd5b4: 0x0  nop
    ctx->pc = 0x1bd5b4u;
    // NOP
label_1bd5b8:
    // 0x1bd5b8: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1bd5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
label_1bd5bc:
    // 0x1bd5bc: 0x92630234  lbu         $v1, 0x234($s3)
    ctx->pc = 0x1bd5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
label_1bd5c0:
    // 0x1bd5c0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1bd5c4:
    if (ctx->pc == 0x1BD5C4u) {
        ctx->pc = 0x1BD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5C0u;
        // 0x1bd5c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5C8u;
        goto label_1bd5c8;
    }
    ctx->pc = 0x1BD5C0u;
    {
        const bool branch_taken_0x1bd5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5C0u;
        // 0x1bd5c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5c0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5C8u;
label_1bd5c8:
    // 0x1bd5c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd5cc:
    // 0x1bd5cc: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x1bd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1bd5d0:
    // 0x1bd5d0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1bd5d4:
    if (ctx->pc == 0x1BD5D4u) {
        ctx->pc = 0x1BD5D8u;
        goto label_1bd5d8;
    }
    ctx->pc = 0x1BD5D0u;
    {
        const bool branch_taken_0x1bd5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd5d0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5D8u;
label_1bd5d8:
    // 0x1bd5d8: 0x92640241  lbu         $a0, 0x241($s3)
    ctx->pc = 0x1bd5d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 577)));
label_1bd5dc:
    // 0x1bd5dc: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x1bd5dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
label_1bd5e0:
    // 0x1bd5e0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1bd5e4:
    if (ctx->pc == 0x1BD5E4u) {
        ctx->pc = 0x1BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5E0u;
        // 0x1bd5e4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5E8u;
        goto label_1bd5e8;
    }
    ctx->pc = 0x1BD5E0u;
    {
        const bool branch_taken_0x1bd5e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5E0u;
        // 0x1bd5e4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5e0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5E8u;
label_1bd5e8:
    // 0x1bd5e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bd5ec:
    // 0x1bd5ec: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1bd5f0:
    // 0x1bd5f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1bd5f4:
    if (ctx->pc == 0x1BD5F4u) {
        ctx->pc = 0x1BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5F0u;
        // 0x1bd5f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5F8u;
        goto label_1bd5f8;
    }
    ctx->pc = 0x1BD5F0u;
    {
        const bool branch_taken_0x1bd5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5F0u;
        // 0x1bd5f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5f0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5F8u;
label_1bd5f8:
    // 0x1bd5f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1bd5fc:
    if (ctx->pc == 0x1BD5FCu) {
        ctx->pc = 0x1BD600u;
        goto label_1bd600;
    }
    ctx->pc = 0x1BD5F8u;
    {
        const bool branch_taken_0x1bd5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd5f8) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD600u;
label_1bd600:
    // 0x1bd600: 0x24820059  addiu       $v0, $a0, 0x59
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 89));
label_1bd604:
    // 0x1bd604: 0x10000113  b           . + 4 + (0x113 << 2)
label_1bd608:
    if (ctx->pc == 0x1BD608u) {
        ctx->pc = 0x1BD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD604u;
        // 0x1bd608: 0xa2620247  sb          $v0, 0x247($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD60Cu;
        goto label_1bd60c;
    }
    ctx->pc = 0x1BD604u;
    {
        const bool branch_taken_0x1bd604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD604u;
        // 0x1bd608: 0xa2620247  sb          $v0, 0x247($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd604) {
            ctx->pc = 0x1BDA54u;
            { ctx->pc = 0x1bda54; return; }
        }
    }
    ctx->pc = 0x1BD60Cu;
label_1bd60c:
    // 0x1bd60c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd610:
    // 0x1bd610: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1bd614:
    // 0x1bd614: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x1bd614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
label_1bd618:
    // 0x1bd618: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x1bd618u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bd61c:
    // 0x1bd61c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bd620:
    // 0x1bd620: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bd624:
    // 0x1bd624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd628:
    // 0x1bd628: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bd628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd62c:
    // 0x1bd62c: 0xc06fb54  jal         func_1BED50
label_1bd630:
    if (ctx->pc == 0x1BD630u) {
        ctx->pc = 0x1BD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD62Cu;
        // 0x1bd630: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD634u;
        goto label_1bd634;
    }
    ctx->pc = 0x1BD62Cu;
    SET_GPR_U32(ctx, 31, 0x1BD634u);
    ctx->pc = 0x1BD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD62Cu;
    // 0x1bd630: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    { ctx->pc = 0x1bed50; return; }
    ctx->pc = 0x1BD634u;
label_1bd634:
    // 0x1bd634: 0x10000108  b           . + 4 + (0x108 << 2)
label_1bd638:
    if (ctx->pc == 0x1BD638u) {
        ctx->pc = 0x1BD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD634u;
        // 0x1bd638: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD63Cu;
        goto label_1bd63c;
    }
    ctx->pc = 0x1BD634u;
    {
        const bool branch_taken_0x1bd634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD634u;
        // 0x1bd638: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd634) {
            ctx->pc = 0x1BDA58u;
            { ctx->pc = 0x1bda58; return; }
        }
    }
    ctx->pc = 0x1BD63Cu;
label_1bd63c:
    // 0x1bd63c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd640:
    // 0x1bd640: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1bd644:
    // 0x1bd644: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bd644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bd648:
    // 0x1bd648: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd64c:
    // 0x1bd64c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1bd650:
    if (ctx->pc == 0x1BD650u) {
        ctx->pc = 0x1BD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD64Cu;
        // 0x1bd650: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD654u;
        goto label_1bd654;
    }
    ctx->pc = 0x1BD64Cu;
    {
        const bool branch_taken_0x1bd64c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD64Cu;
        // 0x1bd650: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd64c) {
            ctx->pc = 0x1BD65Cu;
            goto label_1bd65c;
        }
    }
    ctx->pc = 0x1BD654u;
label_1bd654:
    // 0x1bd654: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1bd658:
    // 0x1bd658: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1bd65c:
    // 0x1bd65c: 0xa6620220  sh          $v0, 0x220($s3)
    ctx->pc = 0x1bd65cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 2));
label_1bd660:
    // 0x1bd660: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1bd664:
    // 0x1bd664: 0xa6620252  sh          $v0, 0x252($s3)
    ctx->pc = 0x1bd664u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 2));
label_1bd668:
    // 0x1bd668: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1bd66c:
    // 0x1bd66c: 0xa6620222  sh          $v0, 0x222($s3)
    ctx->pc = 0x1bd66cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 2));
label_1bd670:
    // 0x1bd670: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1bd674:
    // 0x1bd674: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd678:
    // 0x1bd678: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1bd678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1bd67c:
    // 0x1bd67c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bd680:
    // 0x1bd680: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bd680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1bd684:
    // 0x1bd684: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bd684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bd688:
    // 0x1bd688: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1bd68c:
    // 0x1bd68c: 0x25083b82  addiu       $t0, $t0, 0x3B82
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15234));
label_1bd690:
    // 0x1bd690: 0x24e73b84  addiu       $a3, $a3, 0x3B84
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15236));
label_1bd694:
    // 0x1bd694: 0x24c63b83  addiu       $a2, $a2, 0x3B83
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15235));
label_1bd698:
    // 0x1bd698: 0x24a53b85  addiu       $a1, $a1, 0x3B85
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15237));
label_1bd69c:
    // 0x1bd69c: 0x24843b8e  addiu       $a0, $a0, 0x3B8E
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15246));
label_1bd6a0:
    // 0x1bd6a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bd6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bd6a4:
    // 0x1bd6a4: 0x954b000c  lhu         $t3, 0xC($t2)
    ctx->pc = 0x1bd6a4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
label_1bd6a8:
    // 0x1bd6a8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bd6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bd6ac:
    // 0x1bd6ac: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_1bd6b0:
    // 0x1bd6b0: 0x14b5023  subu        $t2, $t2, $t3
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1bd6b4:
    // 0x1bd6b4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1bd6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1bd6b8:
    // 0x1bd6b8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1bd6bc:
    // 0x1bd6bc: 0xa2690241  sb          $t1, 0x241($s3)
    ctx->pc = 0x1bd6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 9));
label_1bd6c0:
    // 0x1bd6c0: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd6c4:
    // 0x1bd6c4: 0x952a000c  lhu         $t2, 0xC($t1)
    ctx->pc = 0x1bd6c4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
label_1bd6c8:
    // 0x1bd6c8: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1bd6cc:
    // 0x1bd6cc: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1bd6d0:
    // 0x1bd6d0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1bd6d4:
    // 0x1bd6d4: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1bd6d8:
    // 0x1bd6d8: 0xa2680242  sb          $t0, 0x242($s3)
    ctx->pc = 0x1bd6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 8));
label_1bd6dc:
    // 0x1bd6dc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x1bd6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd6e0:
    // 0x1bd6e0: 0x9509000c  lhu         $t1, 0xC($t0)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_1bd6e4:
    // 0x1bd6e4: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x1bd6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1bd6e8:
    // 0x1bd6e8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1bd6ec:
    // 0x1bd6ec: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bd6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bd6f0:
    // 0x1bd6f0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1bd6f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1bd6f4:
    // 0x1bd6f4: 0xa2670244  sb          $a3, 0x244($s3)
    ctx->pc = 0x1bd6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 7));
label_1bd6f8:
    // 0x1bd6f8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd6fc:
    // 0x1bd6fc: 0x94e8000c  lhu         $t0, 0xC($a3)
    ctx->pc = 0x1bd6fcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_1bd700:
    // 0x1bd700: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1bd704:
    // 0x1bd704: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1bd704u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bd708:
    // 0x1bd708: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bd70c:
    // 0x1bd70c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bd70cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1bd710:
    // 0x1bd710: 0xa2660243  sb          $a2, 0x243($s3)
    ctx->pc = 0x1bd710u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 6));
label_1bd714:
    // 0x1bd714: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd718:
    // 0x1bd718: 0x94c7000c  lhu         $a3, 0xC($a2)
    ctx->pc = 0x1bd718u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_1bd71c:
    // 0x1bd71c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1bd720:
    // 0x1bd720: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bd724:
    // 0x1bd724: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bd728:
    // 0x1bd728: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd72c:
    // 0x1bd72c: 0xa2650246  sb          $a1, 0x246($s3)
    ctx->pc = 0x1bd72cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 5));
label_1bd730:
    // 0x1bd730: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1bd730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd734:
    // 0x1bd734: 0x94a6000c  lhu         $a2, 0xC($a1)
    ctx->pc = 0x1bd734u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1bd738:
    // 0x1bd738: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bd73c:
    // 0x1bd73c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bd740:
    // 0x1bd740: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd744:
    // 0x1bd744: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bd744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd748:
    // 0x1bd748: 0xa2640240  sb          $a0, 0x240($s3)
    ctx->pc = 0x1bd748u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 4));
label_1bd74c:
    // 0x1bd74c: 0xa2630248  sb          $v1, 0x248($s3)
    ctx->pc = 0x1bd74cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 584), (uint8_t)GPR_U32(ctx, 3));
label_1bd750:
    // 0x1bd750: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd754:
    // 0x1bd754: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x1bd754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_1bd758:
    // 0x1bd758: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bd75c:
    // 0x1bd75c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1bd75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd760:
    // 0x1bd760: 0x0  nop
    ctx->pc = 0x1bd760u;
    // NOP
label_1bd764:
    // 0x1bd764: 0x0  nop
    ctx->pc = 0x1bd764u;
    // NOP
label_1bd768:
    // 0x1bd768: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd768u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bd76c:
    // 0x1bd76c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bd770:
    // 0x1bd770: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1bd774:
    // 0x1bd774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd778:
    // 0x1bd778: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1bd778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_1bd77c:
    // 0x1bd77c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bd780:
    if (ctx->pc == 0x1BD780u) {
        ctx->pc = 0x1BD784u;
        goto label_1bd784;
    }
    ctx->pc = 0x1BD77Cu;
    {
        const bool branch_taken_0x1bd77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd77c) {
            ctx->pc = 0x1BD78Cu;
            goto label_1bd78c;
        }
    }
    ctx->pc = 0x1BD784u;
label_1bd784:
    // 0x1bd784: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bd788:
    if (ctx->pc == 0x1BD788u) {
        ctx->pc = 0x1BD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD784u;
        // 0x1bd788: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD78Cu;
        goto label_1bd78c;
    }
    ctx->pc = 0x1BD784u;
    {
        const bool branch_taken_0x1bd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD784u;
        // 0x1bd788: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd784) {
            ctx->pc = 0x1BD794u;
            goto label_1bd794;
        }
    }
    ctx->pc = 0x1BD78Cu;
label_1bd78c:
    // 0x1bd78c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1bd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1bd790:
    // 0x1bd790: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1bd790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bd794:
    // 0x1bd794: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1bd798:
    // 0x1bd798: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bd798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1bd79c:
    // 0x1bd79c: 0xa263024a  sb          $v1, 0x24A($s3)
    ctx->pc = 0x1bd79cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 3));
label_1bd7a0:
    // 0x1bd7a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bd7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1bd7a4:
    // 0x1bd7a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd7a8:
    // 0x1bd7a8: 0x9064000f  lbu         $a0, 0xF($v1)
    ctx->pc = 0x1bd7a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_1bd7ac:
    // 0x1bd7ac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bd7b0:
    // 0x1bd7b0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1bd7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd7b4:
    // 0x1bd7b4: 0x0  nop
    ctx->pc = 0x1bd7b4u;
    // NOP
label_1bd7b8:
    // 0x1bd7b8: 0x0  nop
    ctx->pc = 0x1bd7b8u;
    // NOP
label_1bd7bc:
    // 0x1bd7bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd7bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bd7c0:
    // 0x1bd7c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bd7c4:
    // 0x1bd7c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bd7c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1bd7c8:
    // 0x1bd7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd7cc:
    // 0x1bd7cc: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1bd7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_1bd7d0:
    // 0x1bd7d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bd7d4:
    if (ctx->pc == 0x1BD7D4u) {
        ctx->pc = 0x1BD7D8u;
        goto label_1bd7d8;
    }
    ctx->pc = 0x1BD7D0u;
    {
        const bool branch_taken_0x1bd7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7d0) {
            ctx->pc = 0x1BD7E0u;
            goto label_1bd7e0;
        }
    }
    ctx->pc = 0x1BD7D8u;
label_1bd7d8:
    // 0x1bd7d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bd7dc:
    if (ctx->pc == 0x1BD7DCu) {
        ctx->pc = 0x1BD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7D8u;
        // 0x1bd7dc: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD7E0u;
        goto label_1bd7e0;
    }
    ctx->pc = 0x1BD7D8u;
    {
        const bool branch_taken_0x1bd7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7D8u;
        // 0x1bd7dc: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7d8) {
            ctx->pc = 0x1BD7E8u;
            goto label_1bd7e8;
        }
    }
    ctx->pc = 0x1BD7E0u;
label_1bd7e0:
    // 0x1bd7e0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1bd7e4:
    // 0x1bd7e4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bd7e8:
    // 0x1bd7e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bd7ec:
    // 0x1bd7ec: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1bd7f0:
    // 0x1bd7f0: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
label_1bd7f4:
    // 0x1bd7f4: 0xa263024b  sb          $v1, 0x24B($s3)
    ctx->pc = 0x1bd7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 3));
label_1bd7f8:
    // 0x1bd7f8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1bd7fc:
    // 0x1bd7fc: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1bd7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1bd800:
    // 0x1bd800: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1bd800u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1bd804:
    // 0x1bd804: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd808:
    // 0x1bd808: 0x9446000c  lhu         $a2, 0xC($v0)
    ctx->pc = 0x1bd808u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1bd80c:
    // 0x1bd80c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bd810:
    // 0x1bd810: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bd814:
    // 0x1bd814: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bd814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bd818:
    // 0x1bd818: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd81c:
    // 0x1bd81c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1bd81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd820:
    // 0x1bd820: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd824:
    // 0x1bd824: 0x0  nop
    ctx->pc = 0x1bd824u;
    // NOP
label_1bd828:
    // 0x1bd828: 0x0  nop
    ctx->pc = 0x1bd828u;
    // NOP
label_1bd82c:
    // 0x1bd82c: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd82cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd830:
    // 0x1bd830: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd834:
    // 0x1bd834: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd838:
    // 0x1bd838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd83c:
    // 0x1bd83c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd83cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd840:
    // 0x1bd840: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd844:
    if (ctx->pc == 0x1BD844u) {
        ctx->pc = 0x1BD848u;
        goto label_1bd848;
    }
    ctx->pc = 0x1BD840u;
    {
        const bool branch_taken_0x1bd840 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd840) {
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD848u;
label_1bd848:
    // 0x1bd848: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd84c:
    // 0x1bd84c: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1bd84cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
label_1bd850:
    // 0x1bd850: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd854:
    // 0x1bd854: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1bd858:
    // 0x1bd858: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
label_1bd85c:
    // 0x1bd85c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd860:
    // 0x1bd860: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd860u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd864:
    // 0x1bd864: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd868:
    // 0x1bd868: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bd86c:
    // 0x1bd86c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bd870:
    // 0x1bd870: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd874:
    // 0x1bd874: 0x0  nop
    ctx->pc = 0x1bd874u;
    // NOP
label_1bd878:
    // 0x1bd878: 0x0  nop
    ctx->pc = 0x1bd878u;
    // NOP
label_1bd87c:
    // 0x1bd87c: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd87cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd880:
    // 0x1bd880: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd880u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd884:
    // 0x1bd884: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd888:
    // 0x1bd888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd88c:
    // 0x1bd88c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd890:
    // 0x1bd890: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd894:
    if (ctx->pc == 0x1BD894u) {
        ctx->pc = 0x1BD898u;
        goto label_1bd898;
    }
    ctx->pc = 0x1BD890u;
    {
        const bool branch_taken_0x1bd890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd890) {
            ctx->pc = 0x1BD89Cu;
            goto label_1bd89c;
        }
    }
    ctx->pc = 0x1BD898u;
label_1bd898:
    // 0x1bd898: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd89c:
    // 0x1bd89c: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1bd89cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
label_1bd8a0:
    // 0x1bd8a0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd8a4:
    // 0x1bd8a4: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bd8a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1bd8a8:
    // 0x1bd8a8: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1bd8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
label_1bd8ac:
    // 0x1bd8ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd8b0:
    // 0x1bd8b0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd8b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd8b4:
    // 0x1bd8b4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd8b8:
    // 0x1bd8b8: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bd8bc:
    // 0x1bd8bc: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bd8c0:
    // 0x1bd8c0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd8c4:
    // 0x1bd8c4: 0x0  nop
    ctx->pc = 0x1bd8c4u;
    // NOP
    ctx->pc = 0x1bd8c8u;
    return;
}

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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part49(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ec0b0u: goto label_1ec0b0;
        case 0x1ec0b4u: goto label_1ec0b4;
        case 0x1ec0b8u: goto label_1ec0b8;
        case 0x1ec0bcu: goto label_1ec0bc;
        case 0x1ec0c0u: goto label_1ec0c0;
        case 0x1ec0c4u: goto label_1ec0c4;
        case 0x1ec0c8u: goto label_1ec0c8;
        case 0x1ec0ccu: goto label_1ec0cc;
        case 0x1ec0d0u: goto label_1ec0d0;
        case 0x1ec0d4u: goto label_1ec0d4;
        case 0x1ec0d8u: goto label_1ec0d8;
        case 0x1ec0dcu: goto label_1ec0dc;
        case 0x1ec0e0u: goto label_1ec0e0;
        case 0x1ec0e4u: goto label_1ec0e4;
        case 0x1ec0e8u: goto label_1ec0e8;
        case 0x1ec0ecu: goto label_1ec0ec;
        case 0x1ec0f0u: goto label_1ec0f0;
        case 0x1ec0f4u: goto label_1ec0f4;
        case 0x1ec0f8u: goto label_1ec0f8;
        case 0x1ec0fcu: goto label_1ec0fc;
        case 0x1ec100u: goto label_1ec100;
        case 0x1ec104u: goto label_1ec104;
        case 0x1ec108u: goto label_1ec108;
        case 0x1ec10cu: goto label_1ec10c;
        case 0x1ec110u: goto label_1ec110;
        case 0x1ec114u: goto label_1ec114;
        case 0x1ec118u: goto label_1ec118;
        case 0x1ec11cu: goto label_1ec11c;
        case 0x1ec120u: goto label_1ec120;
        case 0x1ec124u: goto label_1ec124;
        case 0x1ec128u: goto label_1ec128;
        case 0x1ec12cu: goto label_1ec12c;
        case 0x1ec130u: goto label_1ec130;
        case 0x1ec134u: goto label_1ec134;
        case 0x1ec138u: goto label_1ec138;
        case 0x1ec13cu: goto label_1ec13c;
        case 0x1ec140u: goto label_1ec140;
        case 0x1ec144u: goto label_1ec144;
        case 0x1ec148u: goto label_1ec148;
        case 0x1ec14cu: goto label_1ec14c;
        case 0x1ec150u: goto label_1ec150;
        case 0x1ec154u: goto label_1ec154;
        case 0x1ec158u: goto label_1ec158;
        case 0x1ec15cu: goto label_1ec15c;
        case 0x1ec160u: goto label_1ec160;
        case 0x1ec164u: goto label_1ec164;
        case 0x1ec168u: goto label_1ec168;
        case 0x1ec16cu: goto label_1ec16c;
        case 0x1ec170u: goto label_1ec170;
        case 0x1ec174u: goto label_1ec174;
        case 0x1ec178u: goto label_1ec178;
        case 0x1ec17cu: goto label_1ec17c;
        case 0x1ec180u: goto label_1ec180;
        case 0x1ec184u: goto label_1ec184;
        case 0x1ec188u: goto label_1ec188;
        case 0x1ec18cu: goto label_1ec18c;
        case 0x1ec190u: goto label_1ec190;
        case 0x1ec194u: goto label_1ec194;
        case 0x1ec198u: goto label_1ec198;
        case 0x1ec19cu: goto label_1ec19c;
        case 0x1ec1a0u: goto label_1ec1a0;
        case 0x1ec1a4u: goto label_1ec1a4;
        case 0x1ec1a8u: goto label_1ec1a8;
        case 0x1ec1acu: goto label_1ec1ac;
        case 0x1ec1b0u: goto label_1ec1b0;
        case 0x1ec1b4u: goto label_1ec1b4;
        case 0x1ec1b8u: goto label_1ec1b8;
        case 0x1ec1bcu: goto label_1ec1bc;
        case 0x1ec1c0u: goto label_1ec1c0;
        case 0x1ec1c4u: goto label_1ec1c4;
        case 0x1ec1c8u: goto label_1ec1c8;
        case 0x1ec1ccu: goto label_1ec1cc;
        case 0x1ec1d0u: goto label_1ec1d0;
        case 0x1ec1d4u: goto label_1ec1d4;
        case 0x1ec1d8u: goto label_1ec1d8;
        case 0x1ec1dcu: goto label_1ec1dc;
        case 0x1ec1e0u: goto label_1ec1e0;
        case 0x1ec1e4u: goto label_1ec1e4;
        case 0x1ec1e8u: goto label_1ec1e8;
        case 0x1ec1ecu: goto label_1ec1ec;
        case 0x1ec1f0u: goto label_1ec1f0;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec1f8u: goto label_1ec1f8;
        case 0x1ec1fcu: goto label_1ec1fc;
        case 0x1ec200u: goto label_1ec200;
        case 0x1ec204u: goto label_1ec204;
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec20cu: goto label_1ec20c;
        case 0x1ec210u: goto label_1ec210;
        case 0x1ec214u: goto label_1ec214;
        case 0x1ec218u: goto label_1ec218;
        case 0x1ec21cu: goto label_1ec21c;
        case 0x1ec220u: goto label_1ec220;
        case 0x1ec224u: goto label_1ec224;
        case 0x1ec228u: goto label_1ec228;
        case 0x1ec22cu: goto label_1ec22c;
        case 0x1ec230u: goto label_1ec230;
        case 0x1ec234u: goto label_1ec234;
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec23cu: goto label_1ec23c;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec244u: goto label_1ec244;
        case 0x1ec248u: goto label_1ec248;
        case 0x1ec24cu: goto label_1ec24c;
        case 0x1ec250u: goto label_1ec250;
        case 0x1ec254u: goto label_1ec254;
        case 0x1ec258u: goto label_1ec258;
        case 0x1ec25cu: goto label_1ec25c;
        case 0x1ec260u: goto label_1ec260;
        case 0x1ec264u: goto label_1ec264;
        case 0x1ec268u: goto label_1ec268;
        case 0x1ec26cu: goto label_1ec26c;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec274u: goto label_1ec274;
        case 0x1ec278u: goto label_1ec278;
        case 0x1ec27cu: goto label_1ec27c;
        case 0x1ec280u: goto label_1ec280;
        case 0x1ec284u: goto label_1ec284;
        case 0x1ec288u: goto label_1ec288;
        case 0x1ec28cu: goto label_1ec28c;
        case 0x1ec290u: goto label_1ec290;
        case 0x1ec294u: goto label_1ec294;
        case 0x1ec298u: goto label_1ec298;
        case 0x1ec29cu: goto label_1ec29c;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2a4u: goto label_1ec2a4;
        case 0x1ec2a8u: goto label_1ec2a8;
        case 0x1ec2acu: goto label_1ec2ac;
        case 0x1ec2b0u: goto label_1ec2b0;
        case 0x1ec2b4u: goto label_1ec2b4;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec2bcu: goto label_1ec2bc;
        case 0x1ec2c0u: goto label_1ec2c0;
        case 0x1ec2c4u: goto label_1ec2c4;
        case 0x1ec2c8u: goto label_1ec2c8;
        case 0x1ec2ccu: goto label_1ec2cc;
        case 0x1ec2d0u: goto label_1ec2d0;
        case 0x1ec2d4u: goto label_1ec2d4;
        case 0x1ec2d8u: goto label_1ec2d8;
        case 0x1ec2dcu: goto label_1ec2dc;
        case 0x1ec2e0u: goto label_1ec2e0;
        case 0x1ec2e4u: goto label_1ec2e4;
        case 0x1ec2e8u: goto label_1ec2e8;
        case 0x1ec2ecu: goto label_1ec2ec;
        case 0x1ec2f0u: goto label_1ec2f0;
        case 0x1ec2f4u: goto label_1ec2f4;
        case 0x1ec2f8u: goto label_1ec2f8;
        case 0x1ec2fcu: goto label_1ec2fc;
        case 0x1ec300u: goto label_1ec300;
        case 0x1ec304u: goto label_1ec304;
        case 0x1ec308u: goto label_1ec308;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec310u: goto label_1ec310;
        case 0x1ec314u: goto label_1ec314;
        case 0x1ec318u: goto label_1ec318;
        case 0x1ec31cu: goto label_1ec31c;
        case 0x1ec320u: goto label_1ec320;
        case 0x1ec324u: goto label_1ec324;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec32cu: goto label_1ec32c;
        case 0x1ec330u: goto label_1ec330;
        case 0x1ec334u: goto label_1ec334;
        case 0x1ec338u: goto label_1ec338;
        case 0x1ec33cu: goto label_1ec33c;
        case 0x1ec340u: goto label_1ec340;
        case 0x1ec344u: goto label_1ec344;
        case 0x1ec348u: goto label_1ec348;
        case 0x1ec34cu: goto label_1ec34c;
        case 0x1ec350u: goto label_1ec350;
        case 0x1ec354u: goto label_1ec354;
        case 0x1ec358u: goto label_1ec358;
        case 0x1ec35cu: goto label_1ec35c;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec364u: goto label_1ec364;
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec370u: goto label_1ec370;
        case 0x1ec374u: goto label_1ec374;
        case 0x1ec378u: goto label_1ec378;
        case 0x1ec37cu: goto label_1ec37c;
        case 0x1ec380u: goto label_1ec380;
        case 0x1ec384u: goto label_1ec384;
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec38cu: goto label_1ec38c;
        case 0x1ec390u: goto label_1ec390;
        case 0x1ec394u: goto label_1ec394;
        case 0x1ec398u: goto label_1ec398;
        case 0x1ec39cu: goto label_1ec39c;
        case 0x1ec3a0u: goto label_1ec3a0;
        case 0x1ec3a4u: goto label_1ec3a4;
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3acu: goto label_1ec3ac;
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3b4u: goto label_1ec3b4;
        case 0x1ec3b8u: goto label_1ec3b8;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3c4u: goto label_1ec3c4;
        case 0x1ec3c8u: goto label_1ec3c8;
        case 0x1ec3ccu: goto label_1ec3cc;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3d4u: goto label_1ec3d4;
        case 0x1ec3d8u: goto label_1ec3d8;
        case 0x1ec3dcu: goto label_1ec3dc;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3e4u: goto label_1ec3e4;
        case 0x1ec3e8u: goto label_1ec3e8;
        case 0x1ec3ecu: goto label_1ec3ec;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec3f4u: goto label_1ec3f4;
        case 0x1ec3f8u: goto label_1ec3f8;
        case 0x1ec3fcu: goto label_1ec3fc;
        case 0x1ec400u: goto label_1ec400;
        case 0x1ec404u: goto label_1ec404;
        case 0x1ec408u: goto label_1ec408;
        case 0x1ec40cu: goto label_1ec40c;
        case 0x1ec410u: goto label_1ec410;
        case 0x1ec414u: goto label_1ec414;
        case 0x1ec418u: goto label_1ec418;
        case 0x1ec41cu: goto label_1ec41c;
        case 0x1ec420u: goto label_1ec420;
        case 0x1ec424u: goto label_1ec424;
        case 0x1ec428u: goto label_1ec428;
        case 0x1ec42cu: goto label_1ec42c;
        case 0x1ec430u: goto label_1ec430;
        case 0x1ec434u: goto label_1ec434;
        case 0x1ec438u: goto label_1ec438;
        case 0x1ec43cu: goto label_1ec43c;
        case 0x1ec440u: goto label_1ec440;
        case 0x1ec444u: goto label_1ec444;
        case 0x1ec448u: goto label_1ec448;
        case 0x1ec44cu: goto label_1ec44c;
        case 0x1ec450u: goto label_1ec450;
        case 0x1ec454u: goto label_1ec454;
        case 0x1ec458u: goto label_1ec458;
        case 0x1ec45cu: goto label_1ec45c;
        case 0x1ec460u: goto label_1ec460;
        case 0x1ec464u: goto label_1ec464;
        case 0x1ec468u: goto label_1ec468;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec470u: goto label_1ec470;
        case 0x1ec474u: goto label_1ec474;
        case 0x1ec478u: goto label_1ec478;
        case 0x1ec47cu: goto label_1ec47c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec484u: goto label_1ec484;
        case 0x1ec488u: goto label_1ec488;
        case 0x1ec48cu: goto label_1ec48c;
        case 0x1ec490u: goto label_1ec490;
        case 0x1ec494u: goto label_1ec494;
        case 0x1ec498u: goto label_1ec498;
        case 0x1ec49cu: goto label_1ec49c;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a4u: goto label_1ec4a4;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4acu: goto label_1ec4ac;
        case 0x1ec4b0u: goto label_1ec4b0;
        case 0x1ec4b4u: goto label_1ec4b4;
        case 0x1ec4b8u: goto label_1ec4b8;
        case 0x1ec4bcu: goto label_1ec4bc;
        case 0x1ec4c0u: goto label_1ec4c0;
        case 0x1ec4c4u: goto label_1ec4c4;
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4ccu: goto label_1ec4cc;
        case 0x1ec4d0u: goto label_1ec4d0;
        case 0x1ec4d4u: goto label_1ec4d4;
        case 0x1ec4d8u: goto label_1ec4d8;
        case 0x1ec4dcu: goto label_1ec4dc;
        case 0x1ec4e0u: goto label_1ec4e0;
        case 0x1ec4e4u: goto label_1ec4e4;
        case 0x1ec4e8u: goto label_1ec4e8;
        case 0x1ec4ecu: goto label_1ec4ec;
        case 0x1ec4f0u: goto label_1ec4f0;
        case 0x1ec4f4u: goto label_1ec4f4;
        case 0x1ec4f8u: goto label_1ec4f8;
        case 0x1ec4fcu: goto label_1ec4fc;
        case 0x1ec500u: goto label_1ec500;
        case 0x1ec504u: goto label_1ec504;
        case 0x1ec508u: goto label_1ec508;
        case 0x1ec50cu: goto label_1ec50c;
        case 0x1ec510u: goto label_1ec510;
        case 0x1ec514u: goto label_1ec514;
        case 0x1ec518u: goto label_1ec518;
        case 0x1ec51cu: goto label_1ec51c;
        case 0x1ec520u: goto label_1ec520;
        case 0x1ec524u: goto label_1ec524;
        case 0x1ec528u: goto label_1ec528;
        case 0x1ec52cu: goto label_1ec52c;
        case 0x1ec530u: goto label_1ec530;
        case 0x1ec534u: goto label_1ec534;
        case 0x1ec538u: goto label_1ec538;
        case 0x1ec53cu: goto label_1ec53c;
        case 0x1ec540u: goto label_1ec540;
        case 0x1ec544u: goto label_1ec544;
        case 0x1ec548u: goto label_1ec548;
        case 0x1ec54cu: goto label_1ec54c;
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec554u: goto label_1ec554;
        case 0x1ec558u: goto label_1ec558;
        case 0x1ec55cu: goto label_1ec55c;
        case 0x1ec560u: goto label_1ec560;
        case 0x1ec564u: goto label_1ec564;
        case 0x1ec568u: goto label_1ec568;
        case 0x1ec56cu: goto label_1ec56c;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec574u: goto label_1ec574;
        case 0x1ec578u: goto label_1ec578;
        case 0x1ec57cu: goto label_1ec57c;
        case 0x1ec580u: goto label_1ec580;
        case 0x1ec584u: goto label_1ec584;
        case 0x1ec588u: goto label_1ec588;
        case 0x1ec58cu: goto label_1ec58c;
        case 0x1ec590u: goto label_1ec590;
        case 0x1ec594u: goto label_1ec594;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec59cu: goto label_1ec59c;
        case 0x1ec5a0u: goto label_1ec5a0;
        case 0x1ec5a4u: goto label_1ec5a4;
        case 0x1ec5a8u: goto label_1ec5a8;
        case 0x1ec5acu: goto label_1ec5ac;
        case 0x1ec5b0u: goto label_1ec5b0;
        case 0x1ec5b4u: goto label_1ec5b4;
        case 0x1ec5b8u: goto label_1ec5b8;
        case 0x1ec5bcu: goto label_1ec5bc;
        case 0x1ec5c0u: goto label_1ec5c0;
        case 0x1ec5c4u: goto label_1ec5c4;
        case 0x1ec5c8u: goto label_1ec5c8;
        case 0x1ec5ccu: goto label_1ec5cc;
        case 0x1ec5d0u: goto label_1ec5d0;
        case 0x1ec5d4u: goto label_1ec5d4;
        case 0x1ec5d8u: goto label_1ec5d8;
        case 0x1ec5dcu: goto label_1ec5dc;
        case 0x1ec5e0u: goto label_1ec5e0;
        case 0x1ec5e4u: goto label_1ec5e4;
        case 0x1ec5e8u: goto label_1ec5e8;
        case 0x1ec5ecu: goto label_1ec5ec;
        case 0x1ec5f0u: goto label_1ec5f0;
        case 0x1ec5f4u: goto label_1ec5f4;
        case 0x1ec5f8u: goto label_1ec5f8;
        case 0x1ec5fcu: goto label_1ec5fc;
        case 0x1ec600u: goto label_1ec600;
        case 0x1ec604u: goto label_1ec604;
        case 0x1ec608u: goto label_1ec608;
        case 0x1ec60cu: goto label_1ec60c;
        case 0x1ec610u: goto label_1ec610;
        case 0x1ec614u: goto label_1ec614;
        case 0x1ec618u: goto label_1ec618;
        case 0x1ec61cu: goto label_1ec61c;
        case 0x1ec620u: goto label_1ec620;
        case 0x1ec624u: goto label_1ec624;
        case 0x1ec628u: goto label_1ec628;
        case 0x1ec62cu: goto label_1ec62c;
        case 0x1ec630u: goto label_1ec630;
        case 0x1ec634u: goto label_1ec634;
        case 0x1ec638u: goto label_1ec638;
        case 0x1ec63cu: goto label_1ec63c;
        case 0x1ec640u: goto label_1ec640;
        case 0x1ec644u: goto label_1ec644;
        case 0x1ec648u: goto label_1ec648;
        case 0x1ec64cu: goto label_1ec64c;
        case 0x1ec650u: goto label_1ec650;
        case 0x1ec654u: goto label_1ec654;
        case 0x1ec658u: goto label_1ec658;
        case 0x1ec65cu: goto label_1ec65c;
        case 0x1ec660u: goto label_1ec660;
        case 0x1ec664u: goto label_1ec664;
        case 0x1ec668u: goto label_1ec668;
        case 0x1ec66cu: goto label_1ec66c;
        case 0x1ec670u: goto label_1ec670;
        case 0x1ec674u: goto label_1ec674;
        case 0x1ec678u: goto label_1ec678;
        case 0x1ec67cu: goto label_1ec67c;
        case 0x1ec680u: goto label_1ec680;
        case 0x1ec684u: goto label_1ec684;
        case 0x1ec688u: goto label_1ec688;
        case 0x1ec68cu: goto label_1ec68c;
        case 0x1ec690u: goto label_1ec690;
        case 0x1ec694u: goto label_1ec694;
        case 0x1ec698u: goto label_1ec698;
        case 0x1ec69cu: goto label_1ec69c;
        case 0x1ec6a0u: goto label_1ec6a0;
        case 0x1ec6a4u: goto label_1ec6a4;
        case 0x1ec6a8u: goto label_1ec6a8;
        case 0x1ec6acu: goto label_1ec6ac;
        case 0x1ec6b0u: goto label_1ec6b0;
        case 0x1ec6b4u: goto label_1ec6b4;
        case 0x1ec6b8u: goto label_1ec6b8;
        case 0x1ec6bcu: goto label_1ec6bc;
        case 0x1ec6c0u: goto label_1ec6c0;
        case 0x1ec6c4u: goto label_1ec6c4;
        case 0x1ec6c8u: goto label_1ec6c8;
        case 0x1ec6ccu: goto label_1ec6cc;
        case 0x1ec6d0u: goto label_1ec6d0;
        case 0x1ec6d4u: goto label_1ec6d4;
        case 0x1ec6d8u: goto label_1ec6d8;
        case 0x1ec6dcu: goto label_1ec6dc;
        case 0x1ec6e0u: goto label_1ec6e0;
        case 0x1ec6e4u: goto label_1ec6e4;
        case 0x1ec6e8u: goto label_1ec6e8;
        case 0x1ec6ecu: goto label_1ec6ec;
        case 0x1ec6f0u: goto label_1ec6f0;
        case 0x1ec6f4u: goto label_1ec6f4;
        case 0x1ec6f8u: goto label_1ec6f8;
        case 0x1ec6fcu: goto label_1ec6fc;
        case 0x1ec700u: goto label_1ec700;
        case 0x1ec704u: goto label_1ec704;
        case 0x1ec708u: goto label_1ec708;
        case 0x1ec70cu: goto label_1ec70c;
        case 0x1ec710u: goto label_1ec710;
        case 0x1ec714u: goto label_1ec714;
        case 0x1ec718u: goto label_1ec718;
        case 0x1ec71cu: goto label_1ec71c;
        case 0x1ec720u: goto label_1ec720;
        case 0x1ec724u: goto label_1ec724;
        case 0x1ec728u: goto label_1ec728;
        case 0x1ec72cu: goto label_1ec72c;
        case 0x1ec730u: goto label_1ec730;
        case 0x1ec734u: goto label_1ec734;
        case 0x1ec738u: goto label_1ec738;
        case 0x1ec73cu: goto label_1ec73c;
        case 0x1ec740u: goto label_1ec740;
        case 0x1ec744u: goto label_1ec744;
        case 0x1ec748u: goto label_1ec748;
        case 0x1ec74cu: goto label_1ec74c;
        case 0x1ec750u: goto label_1ec750;
        case 0x1ec754u: goto label_1ec754;
        case 0x1ec758u: goto label_1ec758;
        case 0x1ec75cu: goto label_1ec75c;
        case 0x1ec760u: goto label_1ec760;
        case 0x1ec764u: goto label_1ec764;
        case 0x1ec768u: goto label_1ec768;
        case 0x1ec76cu: goto label_1ec76c;
        case 0x1ec770u: goto label_1ec770;
        case 0x1ec774u: goto label_1ec774;
        case 0x1ec778u: goto label_1ec778;
        case 0x1ec77cu: goto label_1ec77c;
        case 0x1ec780u: goto label_1ec780;
        case 0x1ec784u: goto label_1ec784;
        case 0x1ec788u: goto label_1ec788;
        case 0x1ec78cu: goto label_1ec78c;
        case 0x1ec790u: goto label_1ec790;
        case 0x1ec794u: goto label_1ec794;
        case 0x1ec798u: goto label_1ec798;
        case 0x1ec79cu: goto label_1ec79c;
        case 0x1ec7a0u: goto label_1ec7a0;
        case 0x1ec7a4u: goto label_1ec7a4;
        case 0x1ec7a8u: goto label_1ec7a8;
        case 0x1ec7acu: goto label_1ec7ac;
        case 0x1ec7b0u: goto label_1ec7b0;
        case 0x1ec7b4u: goto label_1ec7b4;
        case 0x1ec7b8u: goto label_1ec7b8;
        case 0x1ec7bcu: goto label_1ec7bc;
        case 0x1ec7c0u: goto label_1ec7c0;
        case 0x1ec7c4u: goto label_1ec7c4;
        case 0x1ec7c8u: goto label_1ec7c8;
        case 0x1ec7ccu: goto label_1ec7cc;
        case 0x1ec7d0u: goto label_1ec7d0;
        case 0x1ec7d4u: goto label_1ec7d4;
        case 0x1ec7d8u: goto label_1ec7d8;
        case 0x1ec7dcu: goto label_1ec7dc;
        case 0x1ec7e0u: goto label_1ec7e0;
        case 0x1ec7e4u: goto label_1ec7e4;
        case 0x1ec7e8u: goto label_1ec7e8;
        case 0x1ec7ecu: goto label_1ec7ec;
        case 0x1ec7f0u: goto label_1ec7f0;
        case 0x1ec7f4u: goto label_1ec7f4;
        case 0x1ec7f8u: goto label_1ec7f8;
        case 0x1ec7fcu: goto label_1ec7fc;
        case 0x1ec800u: goto label_1ec800;
        case 0x1ec804u: goto label_1ec804;
        case 0x1ec808u: goto label_1ec808;
        case 0x1ec80cu: goto label_1ec80c;
        case 0x1ec810u: goto label_1ec810;
        case 0x1ec814u: goto label_1ec814;
        case 0x1ec818u: goto label_1ec818;
        case 0x1ec81cu: goto label_1ec81c;
        case 0x1ec820u: goto label_1ec820;
        case 0x1ec824u: goto label_1ec824;
        case 0x1ec828u: goto label_1ec828;
        case 0x1ec82cu: goto label_1ec82c;
        case 0x1ec830u: goto label_1ec830;
        case 0x1ec834u: goto label_1ec834;
        case 0x1ec838u: goto label_1ec838;
        case 0x1ec83cu: goto label_1ec83c;
        case 0x1ec840u: goto label_1ec840;
        case 0x1ec844u: goto label_1ec844;
        case 0x1ec848u: goto label_1ec848;
        case 0x1ec84cu: goto label_1ec84c;
        case 0x1ec850u: goto label_1ec850;
        case 0x1ec854u: goto label_1ec854;
        case 0x1ec858u: goto label_1ec858;
        case 0x1ec85cu: goto label_1ec85c;
        case 0x1ec860u: goto label_1ec860;
        case 0x1ec864u: goto label_1ec864;
        case 0x1ec868u: goto label_1ec868;
        case 0x1ec86cu: goto label_1ec86c;
        case 0x1ec870u: goto label_1ec870;
        case 0x1ec874u: goto label_1ec874;
        case 0x1ec878u: goto label_1ec878;
        case 0x1ec87cu: goto label_1ec87c;
        default: return;
    }

label_1ec0b0:
    // 0x1ec0b0: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x1ec0b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
label_1ec0b4:
    // 0x1ec0b4: 0xa64e0078  sh          $t6, 0x78($s2)
    ctx->pc = 0x1ec0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 120), (uint16_t)GPR_U32(ctx, 14));
label_1ec0b8:
    // 0x1ec0b8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_1ec0bc:
    // 0x1ec0bc: 0x107100  sll         $t6, $s0, 4
    ctx->pc = 0x1ec0bcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1ec0c0:
    // 0x1ec0c0: 0xb5938  dsll        $t3, $t3, 4
    ctx->pc = 0x1ec0c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 4);
label_1ec0c4:
    // 0x1ec0c4: 0xa64c007a  sh          $t4, 0x7A($s2)
    ctx->pc = 0x1ec0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 12));
label_1ec0c8:
    // 0x1ec0c8: 0x356c000a  ori         $t4, $t3, 0xA
    ctx->pc = 0x1ec0c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
label_1ec0cc:
    // 0x1ec0cc: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x1ec0ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_1ec0d0:
    // 0x1ec0d0: 0x260bffff  addiu       $t3, $s0, -0x1
    ctx->pc = 0x1ec0d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ec0d4:
    // 0x1ec0d4: 0xa64e0088  sh          $t6, 0x88($s2)
    ctx->pc = 0x1ec0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 14));
label_1ec0d8:
    // 0x1ec0d8: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x1ec0d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_1ec0dc:
    // 0x1ec0dc: 0xa64d008a  sh          $t5, 0x8A($s2)
    ctx->pc = 0x1ec0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 13));
label_1ec0e0:
    // 0x1ec0e0: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1ec0e0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_1ec0e4:
    // 0x1ec0e4: 0xb5bb8  dsll        $t3, $t3, 14
    ctx->pc = 0x1ec0e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 14);
label_1ec0e8:
    // 0x1ec0e8: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x1ec0e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_1ec0ec:
    // 0x1ec0ec: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x1ec0ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_1ec0f0:
    // 0x1ec0f0: 0xfe4a0040  sd          $t2, 0x40($s2)
    ctx->pc = 0x1ec0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 10));
label_1ec0f4:
    // 0x1ec0f4: 0xa2440070  sb          $a0, 0x70($s2)
    ctx->pc = 0x1ec0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 4));
label_1ec0f8:
    // 0x1ec0f8: 0xa2440071  sb          $a0, 0x71($s2)
    ctx->pc = 0x1ec0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 4));
label_1ec0fc:
    // 0x1ec0fc: 0xa2440072  sb          $a0, 0x72($s2)
    ctx->pc = 0x1ec0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 4));
label_1ec100:
    // 0x1ec100: 0xa2510073  sb          $s1, 0x73($s2)
    ctx->pc = 0x1ec100u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 17));
label_1ec104:
    // 0x1ec104: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x1ec104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
label_1ec108:
    // 0x1ec108: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1ec108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ec10c:
    // 0x1ec10c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ec10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1ec110:
    // 0x1ec110: 0xc066c72  jal         func_19B1C8
label_1ec114:
    if (ctx->pc == 0x1EC114u) {
        ctx->pc = 0x1EC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC110u;
        // 0x1ec114: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC118u;
        goto label_1ec118;
    }
    ctx->pc = 0x1EC110u;
    SET_GPR_U32(ctx, 31, 0x1EC118u);
    ctx->pc = 0x1EC114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC110u;
    // 0x1ec114: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EC110u, 0x1EC118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC118u;
label_1ec118:
    // 0x1ec118: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ec118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ec11c:
    // 0x1ec11c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ec120:
    // 0x1ec120: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ec120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec124:
    // 0x1ec124: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ec128:
    // 0x1ec128: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ec128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec12c:
    // 0x1ec12c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ec12cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec130:
    // 0x1ec130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec134:
    // 0x1ec134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec138:
    // 0x1ec138: 0x3e00008  jr          $ra
label_1ec13c:
    if (ctx->pc == 0x1EC13Cu) {
        ctx->pc = 0x1EC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC138u;
        // 0x1ec13c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC140u;
        goto label_1ec140;
    }
    ctx->pc = 0x1EC138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC138u;
        // 0x1ec13c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC140u;
label_1ec140:
    // 0x1ec140: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1ec144:
    // 0x1ec144: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1ec144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1ec148:
    // 0x1ec148: 0x2463fc40  addiu       $v1, $v1, -0x3C0
    ctx->pc = 0x1ec148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966336));
label_1ec14c:
    // 0x1ec14c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ec14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ec150:
    // 0x1ec150: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ec150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec154:
    // 0x1ec154: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ec158:
    if (ctx->pc == 0x1EC158u) {
        ctx->pc = 0x1EC15Cu;
        goto label_1ec15c;
    }
    ctx->pc = 0x1EC154u;
    {
        const bool branch_taken_0x1ec154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec154) {
            ctx->pc = 0x1EC184u;
            goto label_1ec184;
        }
    }
    ctx->pc = 0x1EC15Cu;
label_1ec15c:
    // 0x1ec15c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ec15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ec160:
    // 0x1ec160: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ec164:
    // 0x1ec164: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ec164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1ec168:
    // 0x1ec168: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ec16c:
    // 0x1ec16c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ec170:
    // 0x1ec170: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1ec170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1ec174:
    // 0x1ec174: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ec174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ec178:
    // 0x1ec178: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1ec17c:
    if (ctx->pc == 0x1EC17Cu) {
        ctx->pc = 0x1EC180u;
        goto label_1ec180;
    }
    ctx->pc = 0x1EC178u;
    {
        const bool branch_taken_0x1ec178 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ec178) {
            ctx->pc = 0x1EC184u;
            goto label_1ec184;
        }
    }
    ctx->pc = 0x1EC180u;
label_1ec180:
    // 0x1ec180: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ec180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1ec184:
    // 0x1ec184: 0x3e00008  jr          $ra
label_1ec188:
    if (ctx->pc == 0x1EC188u) {
        ctx->pc = 0x1EC18Cu;
        goto label_1ec18c;
    }
    ctx->pc = 0x1EC184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC18Cu;
label_1ec18c:
    // 0x1ec18c: 0x0  nop
    ctx->pc = 0x1ec18cu;
    // NOP
label_1ec190:
    // 0x1ec190: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1ec194:
    // 0x1ec194: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1ec198:
    // 0x1ec198: 0x2463fc40  addiu       $v1, $v1, -0x3C0
    ctx->pc = 0x1ec198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966336));
label_1ec19c:
    // 0x1ec19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec1a0:
    // 0x1ec1a0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1ec1a4:
    // 0x1ec1a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1ec1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ec1a8:
    // 0x1ec1a8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1ec1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_1ec1ac:
    // 0x1ec1ac: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ec1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1ec1b0:
    // 0x1ec1b0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x1ec1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
label_1ec1b4:
    // 0x1ec1b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1ec1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1b8:
    // 0x1ec1b8: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1ec1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_1ec1bc:
    // 0x1ec1bc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1ec1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1c0:
    // 0x1ec1c0: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1ec1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1ec1c4:
    // 0x1ec1c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1ec1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1c8:
    // 0x1ec1c8: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x1ec1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_1ec1cc:
    // 0x1ec1cc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ec1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1d0:
    // 0x1ec1d0: 0x3e00008  jr          $ra
label_1ec1d4:
    if (ctx->pc == 0x1EC1D4u) {
        ctx->pc = 0x1EC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1D0u;
        // 0x1ec1d4: 0xe4e0001c  swc1        $f0, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC1D8u;
        goto label_1ec1d8;
    }
    ctx->pc = 0x1EC1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1D0u;
        // 0x1ec1d4: 0xe4e0001c  swc1        $f0, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC1D8u;
label_1ec1d8:
    // 0x1ec1d8: 0x0  nop
    ctx->pc = 0x1ec1d8u;
    // NOP
label_1ec1dc:
    // 0x1ec1dc: 0x0  nop
    ctx->pc = 0x1ec1dcu;
    // NOP
label_1ec1e0:
    // 0x1ec1e0: 0x3e00008  jr          $ra
label_1ec1e4:
    if (ctx->pc == 0x1EC1E4u) {
        ctx->pc = 0x1EC1E8u;
        goto label_1ec1e8;
    }
    ctx->pc = 0x1EC1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC1E8u;
label_1ec1e8:
    // 0x1ec1e8: 0x0  nop
    ctx->pc = 0x1ec1e8u;
    // NOP
label_1ec1ec:
    // 0x1ec1ec: 0x0  nop
    ctx->pc = 0x1ec1ecu;
    // NOP
label_1ec1f0:
    // 0x1ec1f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ec1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ec1f4:
    // 0x1ec1f4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ec1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ec1f8:
    // 0x1ec1f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ec1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ec1fc:
    // 0x1ec1fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ec1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ec200:
    // 0x1ec200: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ec200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ec204:
    // 0x1ec204: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ec204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ec208:
    // 0x1ec208: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ec208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec20c:
    // 0x1ec20c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ec20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ec210:
    // 0x1ec210: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ec210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ec214:
    // 0x1ec214: 0xac20fc40  sw          $zero, -0x3C0($at)
    ctx->pc = 0x1ec214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966336), GPR_U32(ctx, 0));
label_1ec218:
    // 0x1ec218: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ec218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec21c:
    // 0x1ec21c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ec21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ec220:
    // 0x1ec220: 0xac20fc4c  sw          $zero, -0x3B4($at)
    ctx->pc = 0x1ec220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966348), GPR_U32(ctx, 0));
label_1ec224:
    // 0x1ec224: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ec224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ec228:
    // 0x1ec228: 0xac20fc60  sw          $zero, -0x3A0($at)
    ctx->pc = 0x1ec228u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966368), GPR_U32(ctx, 0));
label_1ec22c:
    // 0x1ec22c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ec22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ec230:
    // 0x1ec230: 0xac20fc6c  sw          $zero, -0x394($at)
    ctx->pc = 0x1ec230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966380), GPR_U32(ctx, 0));
label_1ec234:
    // 0x1ec234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ec234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec238:
    // 0x1ec238: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ec238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec23c:
    // 0x1ec23c: 0x0  nop
    ctx->pc = 0x1ec23cu;
    // NOP
label_1ec240:
    // 0x1ec240: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ec240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ec244:
    // 0x1ec244: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
label_1ec248:
    // 0x1ec248: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ec248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ec24c:
    // 0x1ec24c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1ec250:
    // 0x1ec250: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ec254:
    // 0x1ec254: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1ec254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ec258:
    // 0x1ec258: 0xc05e234  jal         func_1788D0
label_1ec25c:
    if (ctx->pc == 0x1EC25Cu) {
        ctx->pc = 0x1EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC258u;
        // 0x1ec25c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC260u;
        goto label_1ec260;
    }
    ctx->pc = 0x1EC258u;
    SET_GPR_U32(ctx, 31, 0x1EC260u);
    ctx->pc = 0x1EC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC258u;
    // 0x1ec25c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EC258u, 0x1EC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC260u;
label_1ec260:
    // 0x1ec260: 0xc070834  jal         func_1C20D0
label_1ec264:
    if (ctx->pc == 0x1EC264u) {
        ctx->pc = 0x1EC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC260u;
        // 0x1ec264: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC268u;
        goto label_1ec268;
    }
    ctx->pc = 0x1EC260u;
    SET_GPR_U32(ctx, 31, 0x1EC268u);
    ctx->pc = 0x1EC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC260u;
    // 0x1ec264: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1EC260u, 0x1EC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC268u;
label_1ec268:
    // 0x1ec268: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x1ec268u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ec26c:
    // 0x1ec26c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ec26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ec270:
    // 0x1ec270: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1ec270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1ec274:
    // 0x1ec274: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1ec274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1ec278:
    // 0x1ec278: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1ec278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1ec27c:
    // 0x1ec27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec280:
    // 0x1ec280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec284:
    // 0x1ec284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec288:
    // 0x1ec288: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1ec288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1ec28c:
    // 0x1ec28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec290:
    // 0x1ec290: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1ec290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1ec294:
    // 0x1ec294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec298:
    // 0x1ec298: 0x24090320  addiu       $t1, $zero, 0x320
    ctx->pc = 0x1ec298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_1ec29c:
    // 0x1ec29c: 0xc05de30  jal         func_1778C0
label_1ec2a0:
    if (ctx->pc == 0x1EC2A0u) {
        ctx->pc = 0x1EC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC29Cu;
        // 0x1ec2a0: 0x240a00d0  addiu       $t2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2A4u;
        goto label_1ec2a4;
    }
    ctx->pc = 0x1EC29Cu;
    SET_GPR_U32(ctx, 31, 0x1EC2A4u);
    ctx->pc = 0x1EC2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC29Cu;
    // 0x1ec2a0: 0x240a00d0  addiu       $t2, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EC29Cu, 0x1EC2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2A4u;
label_1ec2a4:
    // 0x1ec2a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ec2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ec2a8:
    // 0x1ec2a8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1ec2a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ec2ac:
    // 0x1ec2ac: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_1ec2b0:
    if (ctx->pc == 0x1EC2B0u) {
        ctx->pc = 0x1EC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2ACu;
        // 0x1ec2b0: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2B4u;
        goto label_1ec2b4;
    }
    ctx->pc = 0x1EC2ACu;
    {
        const bool branch_taken_0x1ec2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2ACu;
        // 0x1ec2b0: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2ac) {
            ctx->pc = 0x1EC23Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec23c;
        }
    }
    ctx->pc = 0x1EC2B4u;
label_1ec2b4:
    // 0x1ec2b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ec2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ec2b8:
    // 0x1ec2b8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1ec2b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ec2bc:
    // 0x1ec2bc: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_1ec2c0:
    if (ctx->pc == 0x1EC2C0u) {
        ctx->pc = 0x1EC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2BCu;
        // 0x1ec2c0: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2C4u;
        goto label_1ec2c4;
    }
    ctx->pc = 0x1EC2BCu;
    {
        const bool branch_taken_0x1ec2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2BCu;
        // 0x1ec2c0: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2bc) {
            ctx->pc = 0x1EC234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec234;
        }
    }
    ctx->pc = 0x1EC2C4u;
label_1ec2c4:
    // 0x1ec2c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ec2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ec2c8:
    // 0x1ec2c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ec2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ec2cc:
    // 0x1ec2cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ec2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec2d0:
    // 0x1ec2d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ec2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec2d4:
    // 0x1ec2d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ec2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec2d8:
    // 0x1ec2d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ec2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec2dc:
    // 0x1ec2dc: 0x3e00008  jr          $ra
label_1ec2e0:
    if (ctx->pc == 0x1EC2E0u) {
        ctx->pc = 0x1EC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2DCu;
        // 0x1ec2e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2E4u;
        goto label_1ec2e4;
    }
    ctx->pc = 0x1EC2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2DCu;
        // 0x1ec2e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC2E4u;
label_1ec2e4:
    // 0x1ec2e4: 0x0  nop
    ctx->pc = 0x1ec2e4u;
    // NOP
label_1ec2e8:
    // 0x1ec2e8: 0x0  nop
    ctx->pc = 0x1ec2e8u;
    // NOP
label_1ec2ec:
    // 0x1ec2ec: 0x0  nop
    ctx->pc = 0x1ec2ecu;
    // NOP
label_1ec2f0:
    // 0x1ec2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ec2f4:
    // 0x1ec2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec2f8:
    // 0x1ec2f8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1ec2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1ec2fc:
    // 0x1ec2fc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ec2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1ec300:
    // 0x1ec300: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_1ec304:
    if (ctx->pc == 0x1EC304u) {
        ctx->pc = 0x1EC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC300u;
        // 0x1ec304: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC308u;
        goto label_1ec308;
    }
    ctx->pc = 0x1EC300u;
    {
        const bool branch_taken_0x1ec300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC300u;
        // 0x1ec304: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec300) {
            ctx->pc = 0x1EC424u;
            goto label_1ec424;
        }
    }
    ctx->pc = 0x1EC308u;
label_1ec308:
    // 0x1ec308: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ec308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1ec30c:
    // 0x1ec30c: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1ec30cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ec310:
    // 0x1ec310: 0x24030650  addiu       $v1, $zero, 0x650
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1616));
label_1ec314:
    // 0x1ec314: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1ec314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_1ec318:
    // 0x1ec318: 0x8f828f1c  lw          $v0, -0x70E4($gp)
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938396)));
label_1ec31c:
    // 0x1ec31c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1ec31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1ec320:
    // 0x1ec320: 0x24a5fc80  addiu       $a1, $a1, -0x380
    ctx->pc = 0x1ec320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966400));
label_1ec324:
    // 0x1ec324: 0xe33018  mult        $a2, $a3, $v1
    ctx->pc = 0x1ec324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1ec328:
    // 0x1ec328: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x1ec328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1ec32c:
    // 0x1ec32c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec330:
    // 0x1ec330: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ec330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ec334:
    // 0x1ec334: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ec334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ec338:
    // 0x1ec338: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1ec33c:
    if (ctx->pc == 0x1EC33Cu) {
        ctx->pc = 0x1EC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC338u;
        // 0x1ec33c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC340u;
        goto label_1ec340;
    }
    ctx->pc = 0x1EC338u;
    {
        const bool branch_taken_0x1ec338 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC338u;
        // 0x1ec33c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec338) {
            ctx->pc = 0x1EC34Cu;
            goto label_1ec34c;
        }
    }
    ctx->pc = 0x1EC340u;
label_1ec340:
    // 0x1ec340: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ec344:
    if (ctx->pc == 0x1EC344u) {
        ctx->pc = 0x1EC348u;
        goto label_1ec348;
    }
    ctx->pc = 0x1EC340u;
    {
        const bool branch_taken_0x1ec340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec340) {
            ctx->pc = 0x1EC34Cu;
            goto label_1ec34c;
        }
    }
    ctx->pc = 0x1EC348u;
label_1ec348:
    // 0x1ec348: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x1ec348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_1ec34c:
    // 0x1ec34c: 0xaf828f1c  sw          $v0, -0x70E4($gp)
    ctx->pc = 0x1ec34cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938396), GPR_U32(ctx, 2));
label_1ec350:
    // 0x1ec350: 0x8f838f1c  lw          $v1, -0x70E4($gp)
    ctx->pc = 0x1ec350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938396)));
label_1ec354:
    // 0x1ec354: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1ec354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_1ec358:
    // 0x1ec358: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1ec35c:
    if (ctx->pc == 0x1EC35Cu) {
        ctx->pc = 0x1EC360u;
        goto label_1ec360;
    }
    ctx->pc = 0x1EC358u;
    {
        const bool branch_taken_0x1ec358 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec358) {
            ctx->pc = 0x1EC384u;
            goto label_1ec384;
        }
    }
    ctx->pc = 0x1EC360u;
label_1ec360:
    // 0x1ec360: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ec360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec364:
    // 0x1ec364: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ec364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec368:
    // 0x1ec368: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ec36c:
    // 0x1ec36c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec370:
    if (ctx->pc == 0x1EC370u) {
        ctx->pc = 0x1EC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC36Cu;
        // 0x1ec370: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC374u;
        goto label_1ec374;
    }
    ctx->pc = 0x1EC36Cu;
    {
        const bool branch_taken_0x1ec36c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC36Cu;
        // 0x1ec370: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec36c) {
            ctx->pc = 0x1EC37Cu;
            goto label_1ec37c;
        }
    }
    ctx->pc = 0x1EC374u;
label_1ec374:
    // 0x1ec374: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1ec378:
    // 0x1ec378: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ec378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1ec37c:
    // 0x1ec37c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ec380:
    if (ctx->pc == 0x1EC380u) {
        ctx->pc = 0x1EC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC37Cu;
        // 0x1ec380: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC384u;
        goto label_1ec384;
    }
    ctx->pc = 0x1EC37Cu;
    {
        const bool branch_taken_0x1ec37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC37Cu;
        // 0x1ec380: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec37c) {
            ctx->pc = 0x1EC39Cu;
            goto label_1ec39c;
        }
    }
    ctx->pc = 0x1EC384u;
label_1ec384:
    // 0x1ec384: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1ec384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1ec388:
    // 0x1ec388: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec38c:
    if (ctx->pc == 0x1EC38Cu) {
        ctx->pc = 0x1EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC388u;
        // 0x1ec38c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC390u;
        goto label_1ec390;
    }
    ctx->pc = 0x1EC388u;
    {
        const bool branch_taken_0x1ec388 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC388u;
        // 0x1ec38c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec388) {
            ctx->pc = 0x1EC398u;
            goto label_1ec398;
        }
    }
    ctx->pc = 0x1EC390u;
label_1ec390:
    // 0x1ec390: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ec390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1ec394:
    // 0x1ec394: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1ec398:
    // 0x1ec398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec39c:
    // 0x1ec39c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1ec39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec3a0:
    // 0x1ec3a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ec3a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3a4:
    // 0x1ec3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3a8:
    // 0x1ec3a8: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1ec3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1ec3ac:
    // 0x1ec3ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ec3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1ec3b0:
    // 0x1ec3b0: 0xa1060083  sb          $a2, 0x83($t0)
    ctx->pc = 0x1ec3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 131), (uint8_t)GPR_U32(ctx, 6));
label_1ec3b4:
    // 0x1ec3b4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1ec3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ec3b8:
    // 0x1ec3b8: 0xa1060123  sb          $a2, 0x123($t0)
    ctx->pc = 0x1ec3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 291), (uint8_t)GPR_U32(ctx, 6));
label_1ec3bc:
    // 0x1ec3bc: 0x24e70500  addiu       $a3, $a3, 0x500
    ctx->pc = 0x1ec3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
label_1ec3c0:
    // 0x1ec3c0: 0xa10601c3  sb          $a2, 0x1C3($t0)
    ctx->pc = 0x1ec3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 451), (uint8_t)GPR_U32(ctx, 6));
label_1ec3c4:
    // 0x1ec3c4: 0xa1060263  sb          $a2, 0x263($t0)
    ctx->pc = 0x1ec3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 611), (uint8_t)GPR_U32(ctx, 6));
label_1ec3c8:
    // 0x1ec3c8: 0xa1060303  sb          $a2, 0x303($t0)
    ctx->pc = 0x1ec3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 771), (uint8_t)GPR_U32(ctx, 6));
label_1ec3cc:
    // 0x1ec3cc: 0xa10603a3  sb          $a2, 0x3A3($t0)
    ctx->pc = 0x1ec3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 931), (uint8_t)GPR_U32(ctx, 6));
label_1ec3d0:
    // 0x1ec3d0: 0xa1060443  sb          $a2, 0x443($t0)
    ctx->pc = 0x1ec3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1091), (uint8_t)GPR_U32(ctx, 6));
label_1ec3d4:
    // 0x1ec3d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1ec3d8:
    if (ctx->pc == 0x1EC3D8u) {
        ctx->pc = 0x1EC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3D4u;
        // 0x1ec3d8: 0xa10604e3  sb          $a2, 0x4E3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 1251), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3DCu;
        goto label_1ec3dc;
    }
    ctx->pc = 0x1EC3D4u;
    {
        const bool branch_taken_0x1ec3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3D4u;
        // 0x1ec3d8: 0xa10604e3  sb          $a2, 0x4E3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 1251), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3d4) {
            ctx->pc = 0x1EC3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3a8;
        }
    }
    ctx->pc = 0x1EC3DCu;
label_1ec3dc:
    // 0x1ec3dc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1ec3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ec3e0:
    // 0x1ec3e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1ec3e4:
    if (ctx->pc == 0x1EC3E4u) {
        ctx->pc = 0x1EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E0u;
        // 0x1ec3e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3E8u;
        goto label_1ec3e8;
    }
    ctx->pc = 0x1EC3E0u;
    {
        const bool branch_taken_0x1ec3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E0u;
        // 0x1ec3e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3e0) {
            ctx->pc = 0x1EC410u;
            goto label_1ec410;
        }
    }
    ctx->pc = 0x1EC3E8u;
label_1ec3e8:
    // 0x1ec3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec3ec:
    // 0x1ec3ec: 0x23940  sll         $a3, $v0, 5
    ctx->pc = 0x1ec3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ec3f0:
    // 0x1ec3f0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1ec3f4:
    // 0x1ec3f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ec3f8:
    // 0x1ec3f8: 0xa0460083  sb          $a2, 0x83($v0)
    ctx->pc = 0x1ec3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 6));
label_1ec3fc:
    // 0x1ec3fc: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
label_1ec400:
    // 0x1ec400: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1ec400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ec404:
    // 0x1ec404: 0x0  nop
    ctx->pc = 0x1ec404u;
    // NOP
label_1ec408:
    // 0x1ec408: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ec40c:
    if (ctx->pc == 0x1EC40Cu) {
        ctx->pc = 0x1EC410u;
        goto label_1ec410;
    }
    ctx->pc = 0x1EC408u;
    {
        const bool branch_taken_0x1ec408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec408) {
            ctx->pc = 0x1EC3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC410u;
label_1ec410:
    // 0x1ec410: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_1ec414:
    // 0x1ec414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec418:
    // 0x1ec418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec41c:
    // 0x1ec41c: 0xc066c72  jal         func_19B1C8
label_1ec420:
    if (ctx->pc == 0x1EC420u) {
        ctx->pc = 0x1EC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC41Cu;
        // 0x1ec420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC424u;
        goto label_1ec424;
    }
    ctx->pc = 0x1EC41Cu;
    SET_GPR_U32(ctx, 31, 0x1EC424u);
    ctx->pc = 0x1EC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC41Cu;
    // 0x1ec420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EC41Cu, 0x1EC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC424u;
label_1ec424:
    // 0x1ec424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec428:
    // 0x1ec428: 0x3e00008  jr          $ra
label_1ec42c:
    if (ctx->pc == 0x1EC42Cu) {
        ctx->pc = 0x1EC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC428u;
        // 0x1ec42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC430u;
        goto label_1ec430;
    }
    ctx->pc = 0x1EC428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC428u;
        // 0x1ec42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC430u;
label_1ec430:
    // 0x1ec430: 0x3e00008  jr          $ra
label_1ec434:
    if (ctx->pc == 0x1EC434u) {
        ctx->pc = 0x1EC438u;
        goto label_1ec438;
    }
    ctx->pc = 0x1EC430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC438u;
label_1ec438:
    // 0x1ec438: 0x0  nop
    ctx->pc = 0x1ec438u;
    // NOP
label_1ec43c:
    // 0x1ec43c: 0x0  nop
    ctx->pc = 0x1ec43cu;
    // NOP
label_1ec440:
    // 0x1ec440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ec444:
    // 0x1ec444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ec448:
    // 0x1ec448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ec44c:
    // 0x1ec44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ec450:
    // 0x1ec450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ec450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec454:
    // 0x1ec454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec458:
    // 0x1ec458: 0xaf808f1c  sw          $zero, -0x70E4($gp)
    ctx->pc = 0x1ec458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938396), GPR_U32(ctx, 0));
label_1ec45c:
    // 0x1ec45c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ec45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec460:
    // 0x1ec460: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ec460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ec464:
    // 0x1ec464: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1ec464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ec468:
    // 0x1ec468: 0x2442fc80  addiu       $v0, $v0, -0x380
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
label_1ec46c:
    // 0x1ec46c: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1ec46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ec470:
    // 0x1ec470: 0xc05e234  jal         func_1788D0
label_1ec474:
    if (ctx->pc == 0x1EC474u) {
        ctx->pc = 0x1EC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC470u;
        // 0x1ec474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC478u;
        goto label_1ec478;
    }
    ctx->pc = 0x1EC470u;
    SET_GPR_U32(ctx, 31, 0x1EC478u);
    ctx->pc = 0x1EC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC470u;
    // 0x1ec474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EC470u, 0x1EC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC478u;
label_1ec478:
    // 0x1ec478: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1ec478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ec47c:
    // 0x1ec47c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ec47cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1ec480:
    // 0x1ec480: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ec484:
    // 0x1ec484: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ec484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ec488:
    // 0x1ec488: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1ec488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1ec48c:
    // 0x1ec48c: 0x240700f4  addiu       $a3, $zero, 0xF4
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_1ec490:
    // 0x1ec490: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1ec490u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1ec494:
    // 0x1ec494: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1ec494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ec498:
    // 0x1ec498: 0xc0708ac  jal         func_1C22B0
label_1ec49c:
    if (ctx->pc == 0x1EC49Cu) {
        ctx->pc = 0x1EC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC498u;
        // 0x1ec49c: 0x256bd098  addiu       $t3, $t3, -0x2F68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4A0u;
        goto label_1ec4a0;
    }
    ctx->pc = 0x1EC498u;
    SET_GPR_U32(ctx, 31, 0x1EC4A0u);
    ctx->pc = 0x1EC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC498u;
    // 0x1ec49c: 0x256bd098  addiu       $t3, $t3, -0x2F68 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1EC498u, 0x1EC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A0u;
label_1ec4a0:
    // 0x1ec4a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ec4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ec4a4:
    // 0x1ec4a4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1ec4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ec4a8:
    // 0x1ec4a8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1ec4ac:
    if (ctx->pc == 0x1EC4ACu) {
        ctx->pc = 0x1EC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4A8u;
        // 0x1ec4ac: 0x26520650  addiu       $s2, $s2, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4B0u;
        goto label_1ec4b0;
    }
    ctx->pc = 0x1EC4A8u;
    {
        const bool branch_taken_0x1ec4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4A8u;
        // 0x1ec4ac: 0x26520650  addiu       $s2, $s2, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4a8) {
            ctx->pc = 0x1EC460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec460;
        }
    }
    ctx->pc = 0x1EC4B0u;
label_1ec4b0:
    // 0x1ec4b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ec4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec4b4:
    // 0x1ec4b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec4b8:
    // 0x1ec4b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec4bc:
    // 0x1ec4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec4c0:
    // 0x1ec4c0: 0x3e00008  jr          $ra
label_1ec4c4:
    if (ctx->pc == 0x1EC4C4u) {
        ctx->pc = 0x1EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C0u;
        // 0x1ec4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4C8u;
        goto label_1ec4c8;
    }
    ctx->pc = 0x1EC4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C0u;
        // 0x1ec4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC4C8u;
label_1ec4c8:
    // 0x1ec4c8: 0x0  nop
    ctx->pc = 0x1ec4c8u;
    // NOP
label_1ec4cc:
    // 0x1ec4cc: 0x0  nop
    ctx->pc = 0x1ec4ccu;
    // NOP
label_1ec4d0:
    // 0x1ec4d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ec4d4:
    // 0x1ec4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec4d8:
    // 0x1ec4d8: 0x0  nop
    ctx->pc = 0x1ec4d8u;
    // NOP
label_1ec4dc:
    // 0x1ec4dc: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x1ec4dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec4e0:
    // 0x1ec4e0: 0x0  nop
    ctx->pc = 0x1ec4e0u;
    // NOP
label_1ec4e4:
    // 0x1ec4e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1ec4e8:
    if (ctx->pc == 0x1EC4E8u) {
        ctx->pc = 0x1EC4ECu;
        goto label_1ec4ec;
    }
    ctx->pc = 0x1EC4E4u;
    {
        const bool branch_taken_0x1ec4e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec4e4) {
            ctx->pc = 0x1EC4F0u;
            goto label_1ec4f0;
        }
    }
    ctx->pc = 0x1EC4ECu;
label_1ec4ec:
    // 0x1ec4ec: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1ec4ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1ec4f0:
    // 0x1ec4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec4f4:
    // 0x1ec4f4: 0x0  nop
    ctx->pc = 0x1ec4f4u;
    // NOP
label_1ec4f8:
    // 0x1ec4f8: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x1ec4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec4fc:
    // 0x1ec4fc: 0x0  nop
    ctx->pc = 0x1ec4fcu;
    // NOP
label_1ec500:
    // 0x1ec500: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ec504:
    if (ctx->pc == 0x1EC504u) {
        ctx->pc = 0x1EC508u;
        goto label_1ec508;
    }
    ctx->pc = 0x1EC500u;
    {
        const bool branch_taken_0x1ec500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec500) {
            ctx->pc = 0x1EC50Cu;
            goto label_1ec50c;
        }
    }
    ctx->pc = 0x1EC508u;
label_1ec508:
    // 0x1ec508: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1ec508u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1ec50c:
    // 0x1ec50c: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x1ec50cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
label_1ec510:
    // 0x1ec510: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1ec510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1ec514:
    // 0x1ec514: 0x3e00008  jr          $ra
label_1ec518:
    if (ctx->pc == 0x1EC518u) {
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC514u;
        // 0x1ec518: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC51Cu;
        goto label_1ec51c;
    }
    ctx->pc = 0x1EC514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC514u;
        // 0x1ec518: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC51Cu;
label_1ec51c:
    // 0x1ec51c: 0x0  nop
    ctx->pc = 0x1ec51cu;
    // NOP
label_1ec520:
    // 0x1ec520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ec524:
    // 0x1ec524: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec528:
    // 0x1ec528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec52c:
    // 0x1ec52c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec530:
    // 0x1ec530: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec530u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ec534:
    // 0x1ec534: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x1ec534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec538:
    // 0x1ec538: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ec53c:
    // 0x1ec53c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1ec53cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1ec540:
    // 0x1ec540: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1ec544:
    if (ctx->pc == 0x1EC544u) {
        ctx->pc = 0x1EC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC540u;
        // 0x1ec544: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC548u;
        goto label_1ec548;
    }
    ctx->pc = 0x1EC540u;
    {
        const bool branch_taken_0x1ec540 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC540u;
        // 0x1ec544: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec540) {
            ctx->pc = 0x1EC54Cu;
            goto label_1ec54c;
        }
    }
    ctx->pc = 0x1EC548u;
label_1ec548:
    // 0x1ec548: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1ec548u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1ec54c:
    // 0x1ec54c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec550:
    // 0x1ec550: 0x0  nop
    ctx->pc = 0x1ec550u;
    // NOP
label_1ec554:
    // 0x1ec554: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x1ec554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec558:
    // 0x1ec558: 0x0  nop
    ctx->pc = 0x1ec558u;
    // NOP
label_1ec55c:
    // 0x1ec55c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ec560:
    if (ctx->pc == 0x1EC560u) {
        ctx->pc = 0x1EC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC55Cu;
        // 0x1ec560: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC564u;
        goto label_1ec564;
    }
    ctx->pc = 0x1EC55Cu;
    {
        const bool branch_taken_0x1ec55c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC55Cu;
        // 0x1ec560: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec55c) {
            ctx->pc = 0x1EC568u;
            goto label_1ec568;
        }
    }
    ctx->pc = 0x1EC564u;
label_1ec564:
    // 0x1ec564: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1ec564u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1ec568:
    // 0x1ec568: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ec568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1ec56c:
    // 0x1ec56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec570:
    // 0x1ec570: 0xc06d412  jal         func_1B5048
label_1ec574:
    if (ctx->pc == 0x1EC574u) {
        ctx->pc = 0x1EC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC570u;
        // 0x1ec574: 0x460e0302  mul.s       $f12, $f0, $f14 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC578u;
        goto label_1ec578;
    }
    ctx->pc = 0x1EC570u;
    SET_GPR_U32(ctx, 31, 0x1EC578u);
    ctx->pc = 0x1EC574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC570u;
    // 0x1ec574: 0x460e0302  mul.s       $f12, $f0, $f14 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1EC570u, 0x1EC578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC578u;
label_1ec578:
    // 0x1ec578: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ec578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ec57c:
    // 0x1ec57c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ec57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ec580:
    // 0x1ec580: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1ec580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ec584:
    // 0x1ec584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec588:
    // 0x1ec588: 0x4615a081  sub.s       $f2, $f20, $f21
    ctx->pc = 0x1ec588u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1ec58c:
    // 0x1ec58c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1ec58cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1ec590:
    // 0x1ec590: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ec590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ec594:
    // 0x1ec594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ec598:
    // 0x1ec598: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ec59c:
    // 0x1ec59c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ec59cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1ec5a0:
    // 0x1ec5a0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1ec5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1ec5a4:
    // 0x1ec5a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ec5a8:
    // 0x1ec5a8: 0x3e00008  jr          $ra
label_1ec5ac:
    if (ctx->pc == 0x1EC5ACu) {
        ctx->pc = 0x1EC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5A8u;
        // 0x1ec5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5B0u;
        goto label_1ec5b0;
    }
    ctx->pc = 0x1EC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5A8u;
        // 0x1ec5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC5B0u;
label_1ec5b0:
    // 0x1ec5b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ec5b4:
    // 0x1ec5b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec5b8:
    // 0x1ec5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec5bc:
    // 0x1ec5bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec5c0:
    // 0x1ec5c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec5c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ec5c4:
    // 0x1ec5c4: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x1ec5c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec5c8:
    // 0x1ec5c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ec5cc:
    // 0x1ec5cc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1ec5ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1ec5d0:
    // 0x1ec5d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1ec5d4:
    if (ctx->pc == 0x1EC5D4u) {
        ctx->pc = 0x1EC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5D0u;
        // 0x1ec5d4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5D8u;
        goto label_1ec5d8;
    }
    ctx->pc = 0x1EC5D0u;
    {
        const bool branch_taken_0x1ec5d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5D0u;
        // 0x1ec5d4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5d0) {
            ctx->pc = 0x1EC5DCu;
            goto label_1ec5dc;
        }
    }
    ctx->pc = 0x1EC5D8u;
label_1ec5d8:
    // 0x1ec5d8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1ec5d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1ec5dc:
    // 0x1ec5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec5e0:
    // 0x1ec5e0: 0x0  nop
    ctx->pc = 0x1ec5e0u;
    // NOP
label_1ec5e4:
    // 0x1ec5e4: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x1ec5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec5e8:
    // 0x1ec5e8: 0x0  nop
    ctx->pc = 0x1ec5e8u;
    // NOP
label_1ec5ec:
    // 0x1ec5ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ec5f0:
    if (ctx->pc == 0x1EC5F0u) {
        ctx->pc = 0x1EC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ECu;
        // 0x1ec5f0: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5F4u;
        goto label_1ec5f4;
    }
    ctx->pc = 0x1EC5ECu;
    {
        const bool branch_taken_0x1ec5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ECu;
        // 0x1ec5f0: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5ec) {
            ctx->pc = 0x1EC5F8u;
            goto label_1ec5f8;
        }
    }
    ctx->pc = 0x1EC5F4u;
label_1ec5f4:
    // 0x1ec5f4: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1ec5f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_1ec5f8:
    // 0x1ec5f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ec5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1ec5fc:
    // 0x1ec5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec600:
    // 0x1ec600: 0xc06d4c0  jal         func_1B5300
label_1ec604:
    if (ctx->pc == 0x1EC604u) {
        ctx->pc = 0x1EC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC600u;
        // 0x1ec604: 0x460e0302  mul.s       $f12, $f0, $f14 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC608u;
        goto label_1ec608;
    }
    ctx->pc = 0x1EC600u;
    SET_GPR_U32(ctx, 31, 0x1EC608u);
    ctx->pc = 0x1EC604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC600u;
    // 0x1ec604: 0x460e0302  mul.s       $f12, $f0, $f14 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x1EC600u, 0x1EC608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC608u;
label_1ec608:
    // 0x1ec608: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x1ec608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1ec60c:
    // 0x1ec60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec610:
    // 0x1ec610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ec610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ec614:
    // 0x1ec614: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1ec614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1ec618:
    // 0x1ec618: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ec61c:
    // 0x1ec61c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ec620:
    // 0x1ec620: 0x3e00008  jr          $ra
label_1ec624:
    if (ctx->pc == 0x1EC624u) {
        ctx->pc = 0x1EC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC620u;
        // 0x1ec624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC628u;
        goto label_1ec628;
    }
    ctx->pc = 0x1EC620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC620u;
        // 0x1ec624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC628u;
label_1ec628:
    // 0x1ec628: 0x0  nop
    ctx->pc = 0x1ec628u;
    // NOP
label_1ec62c:
    // 0x1ec62c: 0x0  nop
    ctx->pc = 0x1ec62cu;
    // NOP
label_1ec630:
    // 0x1ec630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ec634:
    // 0x1ec634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec638:
    // 0x1ec638: 0x8f828f20  lw          $v0, -0x70E0($gp)
    ctx->pc = 0x1ec638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
label_1ec63c:
    // 0x1ec63c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ec640:
    if (ctx->pc == 0x1EC640u) {
        ctx->pc = 0x1EC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC63Cu;
        // 0x1ec640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC644u;
        goto label_1ec644;
    }
    ctx->pc = 0x1EC63Cu;
    {
        const bool branch_taken_0x1ec63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC63Cu;
        // 0x1ec640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec63c) {
            ctx->pc = 0x1EC67Cu;
            goto label_1ec67c;
        }
    }
    ctx->pc = 0x1EC644u;
label_1ec644:
    // 0x1ec644: 0x8f828f24  lw          $v0, -0x70DC($gp)
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
label_1ec648:
    // 0x1ec648: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ec64c:
    if (ctx->pc == 0x1EC64Cu) {
        ctx->pc = 0x1EC650u;
        goto label_1ec650;
    }
    ctx->pc = 0x1EC648u;
    {
        const bool branch_taken_0x1ec648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec648) {
            ctx->pc = 0x1EC678u;
            goto label_1ec678;
        }
    }
    ctx->pc = 0x1EC650u;
label_1ec650:
    // 0x1ec650: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1ec650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ec654:
    // 0x1ec654: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1ec658:
    // 0x1ec658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ec658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ec65c:
    // 0x1ec65c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ec660:
    if (ctx->pc == 0x1EC660u) {
        ctx->pc = 0x1EC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC65Cu;
        // 0x1ec660: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC664u;
        goto label_1ec664;
    }
    ctx->pc = 0x1EC65Cu;
    {
        const bool branch_taken_0x1ec65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC65Cu;
        // 0x1ec660: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec65c) {
            ctx->pc = 0x1EC678u;
            goto label_1ec678;
        }
    }
    ctx->pc = 0x1EC664u;
label_1ec664:
    // 0x1ec664: 0xc05b420  jal         func_16D080
label_1ec668:
    if (ctx->pc == 0x1EC668u) {
        ctx->pc = 0x1EC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC664u;
        // 0x1ec668: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC66Cu;
        goto label_1ec66c;
    }
    ctx->pc = 0x1EC664u;
    SET_GPR_U32(ctx, 31, 0x1EC66Cu);
    ctx->pc = 0x1EC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC664u;
    // 0x1ec668: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EC664u, 0x1EC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC66Cu;
label_1ec66c:
    // 0x1ec66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec670:
    // 0x1ec670: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ec674:
    if (ctx->pc == 0x1EC674u) {
        ctx->pc = 0x1EC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC670u;
        // 0x1ec674: 0xaf828f24  sw          $v0, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC678u;
        goto label_1ec678;
    }
    ctx->pc = 0x1EC670u;
    {
        const bool branch_taken_0x1ec670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC670u;
        // 0x1ec674: 0xaf828f24  sw          $v0, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec670) {
            ctx->pc = 0x1EC67Cu;
            goto label_1ec67c;
        }
    }
    ctx->pc = 0x1EC678u;
label_1ec678:
    // 0x1ec678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec67c:
    // 0x1ec67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec680:
    // 0x1ec680: 0x3e00008  jr          $ra
label_1ec684:
    if (ctx->pc == 0x1EC684u) {
        ctx->pc = 0x1EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC680u;
        // 0x1ec684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC688u;
        goto label_1ec688;
    }
    ctx->pc = 0x1EC680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC680u;
        // 0x1ec684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC688u;
label_1ec688:
    // 0x1ec688: 0x0  nop
    ctx->pc = 0x1ec688u;
    // NOP
label_1ec68c:
    // 0x1ec68c: 0x0  nop
    ctx->pc = 0x1ec68cu;
    // NOP
label_1ec690:
    // 0x1ec690: 0x3e00008  jr          $ra
label_1ec694:
    if (ctx->pc == 0x1EC694u) {
        ctx->pc = 0x1EC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC690u;
        // 0x1ec694: 0x8f828f24  lw          $v0, -0x70DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC698u;
        goto label_1ec698;
    }
    ctx->pc = 0x1EC690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC690u;
        // 0x1ec694: 0x8f828f24  lw          $v0, -0x70DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC698u;
label_1ec698:
    // 0x1ec698: 0x0  nop
    ctx->pc = 0x1ec698u;
    // NOP
label_1ec69c:
    // 0x1ec69c: 0x0  nop
    ctx->pc = 0x1ec69cu;
    // NOP
label_1ec6a0:
    // 0x1ec6a0: 0x3e00008  jr          $ra
label_1ec6a4:
    if (ctx->pc == 0x1EC6A4u) {
        ctx->pc = 0x1EC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6A0u;
        // 0x1ec6a4: 0x8f828f20  lw          $v0, -0x70E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6A8u;
        goto label_1ec6a8;
    }
    ctx->pc = 0x1EC6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6A0u;
        // 0x1ec6a4: 0x8f828f20  lw          $v0, -0x70E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC6A8u;
label_1ec6a8:
    // 0x1ec6a8: 0x0  nop
    ctx->pc = 0x1ec6a8u;
    // NOP
label_1ec6ac:
    // 0x1ec6ac: 0x0  nop
    ctx->pc = 0x1ec6acu;
    // NOP
label_1ec6b0:
    // 0x1ec6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ec6b4:
    // 0x1ec6b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ec6b8:
    if (ctx->pc == 0x1EC6B8u) {
        ctx->pc = 0x1EC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6B4u;
        // 0x1ec6b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6BCu;
        goto label_1ec6bc;
    }
    ctx->pc = 0x1EC6B4u;
    {
        const bool branch_taken_0x1ec6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6B4u;
        // 0x1ec6b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6b4) {
            ctx->pc = 0x1EC6C8u;
            goto label_1ec6c8;
        }
    }
    ctx->pc = 0x1EC6BCu;
label_1ec6bc:
    // 0x1ec6bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec6c0:
    // 0x1ec6c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ec6c4:
    if (ctx->pc == 0x1EC6C4u) {
        ctx->pc = 0x1EC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6C0u;
        // 0x1ec6c4: 0xaf838f20  sw          $v1, -0x70E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6C8u;
        goto label_1ec6c8;
    }
    ctx->pc = 0x1EC6C0u;
    {
        const bool branch_taken_0x1ec6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6C0u;
        // 0x1ec6c4: 0xaf838f20  sw          $v1, -0x70E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6c0) {
            ctx->pc = 0x1EC6CCu;
            goto label_1ec6cc;
        }
    }
    ctx->pc = 0x1EC6C8u;
label_1ec6c8:
    // 0x1ec6c8: 0xaf808f20  sw          $zero, -0x70E0($gp)
    ctx->pc = 0x1ec6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938400), GPR_U32(ctx, 0));
label_1ec6cc:
    // 0x1ec6cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1ec6d0:
    if (ctx->pc == 0x1EC6D0u) {
        ctx->pc = 0x1EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6CCu;
        // 0x1ec6d0: 0xaf808f24  sw          $zero, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6D4u;
        goto label_1ec6d4;
    }
    ctx->pc = 0x1EC6CCu;
    {
        const bool branch_taken_0x1ec6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6CCu;
        // 0x1ec6d0: 0xaf808f24  sw          $zero, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6cc) {
            ctx->pc = 0x1EC6DCu;
            goto label_1ec6dc;
        }
    }
    ctx->pc = 0x1EC6D4u;
label_1ec6d4:
    // 0x1ec6d4: 0xc07b238  jal         func_1EC8E0
label_1ec6d8:
    if (ctx->pc == 0x1EC6D8u) {
        ctx->pc = 0x1EC6DCu;
        goto label_1ec6dc;
    }
    ctx->pc = 0x1EC6D4u;
    SET_GPR_U32(ctx, 31, 0x1EC6DCu);
    ctx->pc = 0x1EC8E0u;
    { ctx->pc = 0x1ec8e0; return; }
    ctx->pc = 0x1EC6DCu;
label_1ec6dc:
    // 0x1ec6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec6e0:
    // 0x1ec6e0: 0x3e00008  jr          $ra
label_1ec6e4:
    if (ctx->pc == 0x1EC6E4u) {
        ctx->pc = 0x1EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E0u;
        // 0x1ec6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6E8u;
        goto label_1ec6e8;
    }
    ctx->pc = 0x1EC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E0u;
        // 0x1ec6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC6E8u;
label_1ec6e8:
    // 0x1ec6e8: 0x0  nop
    ctx->pc = 0x1ec6e8u;
    // NOP
label_1ec6ec:
    // 0x1ec6ec: 0x0  nop
    ctx->pc = 0x1ec6ecu;
    // NOP
label_1ec6f0:
    // 0x1ec6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ec6f4:
    // 0x1ec6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec6f8:
    // 0x1ec6f8: 0x8f838f20  lw          $v1, -0x70E0($gp)
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
label_1ec6fc:
    // 0x1ec6fc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_1ec700:
    if (ctx->pc == 0x1EC700u) {
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6FCu;
        // 0x1ec700: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC704u;
        goto label_1ec704;
    }
    ctx->pc = 0x1EC6FCu;
    {
        const bool branch_taken_0x1ec6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6FCu;
        // 0x1ec700: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6fc) {
            ctx->pc = 0x1EC8B4u;
            { ctx->pc = 0x1ec8b4; return; }
        }
    }
    ctx->pc = 0x1EC704u;
label_1ec704:
    // 0x1ec704: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1ec708:
    // 0x1ec708: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1ec708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ec70c:
    // 0x1ec70c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1ec70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1ec710:
    // 0x1ec710: 0x8f828f24  lw          $v0, -0x70DC($gp)
    ctx->pc = 0x1ec710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
label_1ec714:
    // 0x1ec714: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1ec718:
    // 0x1ec718: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1ec71c:
    if (ctx->pc == 0x1EC71Cu) {
        ctx->pc = 0x1EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC718u;
        // 0x1ec71c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC720u;
        goto label_1ec720;
    }
    ctx->pc = 0x1EC718u;
    {
        const bool branch_taken_0x1ec718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC718u;
        // 0x1ec71c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec718) {
            ctx->pc = 0x1EC7B0u;
            goto label_1ec7b0;
        }
    }
    ctx->pc = 0x1EC720u;
label_1ec720:
    // 0x1ec720: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1ec720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1ec724:
    // 0x1ec724: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ec728:
    // 0x1ec728: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ec72c:
    // 0x1ec72c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x1ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
label_1ec730:
    // 0x1ec730: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1ec734:
    // 0x1ec734: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1ec738:
    // 0x1ec738: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec73c:
    // 0x1ec73c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ec740:
    // 0x1ec740: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ec744:
    // 0x1ec744: 0x24451060  addiu       $a1, $v0, 0x1060
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
label_1ec748:
    // 0x1ec748: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec74c:
    if (ctx->pc == 0x1EC74Cu) {
        ctx->pc = 0x1EC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC748u;
        // 0x1ec74c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC750u;
        goto label_1ec750;
    }
    ctx->pc = 0x1EC748u;
    {
        const bool branch_taken_0x1ec748 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC748u;
        // 0x1ec74c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec748) {
            ctx->pc = 0x1EC758u;
            goto label_1ec758;
        }
    }
    ctx->pc = 0x1EC750u;
label_1ec750:
    // 0x1ec750: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ec750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ec754:
    // 0x1ec754: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ec754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ec758:
    // 0x1ec758: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ec75c:
    if (ctx->pc == 0x1EC75Cu) {
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0x30470003  andi        $a3, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC760u;
        goto label_1ec760;
    }
    ctx->pc = 0x1EC758u;
    {
        const bool branch_taken_0x1ec758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0x30470003  andi        $a3, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec758) {
            ctx->pc = 0x1EC76Cu;
            goto label_1ec76c;
        }
    }
    ctx->pc = 0x1EC760u;
label_1ec760:
    // 0x1ec760: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1ec764:
    if (ctx->pc == 0x1EC764u) {
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC760u;
        // 0x1ec764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC768u;
        goto label_1ec768;
    }
    ctx->pc = 0x1EC760u;
    {
        const bool branch_taken_0x1ec760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC760u;
        // 0x1ec764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec760) {
            ctx->pc = 0x1EC770u;
            goto label_1ec770;
        }
    }
    ctx->pc = 0x1EC768u;
label_1ec768:
    // 0x1ec768: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_1ec76c:
    // 0x1ec76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec770:
    // 0x1ec770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec774:
    // 0x1ec774: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec778:
    // 0x1ec778: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1ec778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1ec77c:
    // 0x1ec77c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1ec780:
    if (ctx->pc == 0x1EC780u) {
        ctx->pc = 0x1EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC77Cu;
        // 0x1ec780: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC784u;
        goto label_1ec784;
    }
    ctx->pc = 0x1EC77Cu;
    {
        const bool branch_taken_0x1ec77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC77Cu;
        // 0x1ec780: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec77c) {
            ctx->pc = 0x1EC78Cu;
            goto label_1ec78c;
        }
    }
    ctx->pc = 0x1EC784u;
label_1ec784:
    // 0x1ec784: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ec788:
    if (ctx->pc == 0x1EC788u) {
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC784u;
        // 0x1ec788: 0xa04306c3  sb          $v1, 0x6C3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC78Cu;
        goto label_1ec78c;
    }
    ctx->pc = 0x1EC784u;
    {
        const bool branch_taken_0x1ec784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC784u;
        // 0x1ec788: 0xa04306c3  sb          $v1, 0x6C3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec784) {
            ctx->pc = 0x1EC798u;
            goto label_1ec798;
        }
    }
    ctx->pc = 0x1EC78Cu;
label_1ec78c:
    // 0x1ec78c: 0x0  nop
    ctx->pc = 0x1ec78cu;
    // NOP
label_1ec790:
    // 0x1ec790: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1ec794:
    // 0x1ec794: 0xa04006c3  sb          $zero, 0x6C3($v0)
    ctx->pc = 0x1ec794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 0));
label_1ec798:
    // 0x1ec798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ec79c:
    // 0x1ec79c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1ec79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ec7a0:
    // 0x1ec7a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1ec7a4:
    if (ctx->pc == 0x1EC7A4u) {
        ctx->pc = 0x1EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A0u;
        // 0x1ec7a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7A8u;
        goto label_1ec7a8;
    }
    ctx->pc = 0x1EC7A0u;
    {
        const bool branch_taken_0x1ec7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A0u;
        // 0x1ec7a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7a0) {
            ctx->pc = 0x1EC778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec778;
        }
    }
    ctx->pc = 0x1EC7A8u;
label_1ec7a8:
    // 0x1ec7a8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1ec7ac:
    if (ctx->pc == 0x1EC7ACu) {
        ctx->pc = 0x1EC7B0u;
        goto label_1ec7b0;
    }
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC8A0u;
            { ctx->pc = 0x1ec8a0; return; }
        }
    }
    ctx->pc = 0x1EC7B0u;
label_1ec7b0:
    // 0x1ec7b0: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1ec7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1ec7b4:
    // 0x1ec7b4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1ec7b8:
    // 0x1ec7b8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1ec7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ec7bc:
    // 0x1ec7bc: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x1ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
label_1ec7c0:
    // 0x1ec7c0: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1ec7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1ec7c4:
    // 0x1ec7c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1ec7c8:
    // 0x1ec7c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec7cc:
    // 0x1ec7cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ec7d0:
    // 0x1ec7d0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1ec7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ec7d4:
    // 0x1ec7d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ec7d8:
    if (ctx->pc == 0x1EC7D8u) {
        ctx->pc = 0x1EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D4u;
        // 0x1ec7d8: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7DCu;
        goto label_1ec7dc;
    }
    ctx->pc = 0x1EC7D4u;
    {
        const bool branch_taken_0x1ec7d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D4u;
        // 0x1ec7d8: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7d4) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC7DCu;
label_1ec7dc:
    // 0x1ec7dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ec7e0:
    if (ctx->pc == 0x1EC7E0u) {
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7E4u;
        goto label_1ec7e4;
    }
    ctx->pc = 0x1EC7DCu;
    {
        const bool branch_taken_0x1ec7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7dc) {
            ctx->pc = 0x1EC7ECu;
            goto label_1ec7ec;
        }
    }
    ctx->pc = 0x1EC7E4u;
label_1ec7e4:
    // 0x1ec7e4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1ec7e8:
    // 0x1ec7e8: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
label_1ec7ec:
    // 0x1ec7ec: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1ec7f0:
    if (ctx->pc == 0x1EC7F0u) {
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ECu;
        // 0x1ec7f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7F4u;
        goto label_1ec7f4;
    }
    ctx->pc = 0x1EC7ECu;
    {
        const bool branch_taken_0x1ec7ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ECu;
        // 0x1ec7f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ec) {
            ctx->pc = 0x1EC814u;
            goto label_1ec814;
        }
    }
    ctx->pc = 0x1EC7F4u;
label_1ec7f4:
    // 0x1ec7f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec7f8:
    // 0x1ec7f8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ec7fc:
    // 0x1ec7fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec800:
    if (ctx->pc == 0x1EC800u) {
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC804u;
        goto label_1ec804;
    }
    ctx->pc = 0x1EC7FCu;
    {
        const bool branch_taken_0x1ec7fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7fc) {
            ctx->pc = 0x1EC80Cu;
            goto label_1ec80c;
        }
    }
    ctx->pc = 0x1EC804u;
label_1ec804:
    // 0x1ec804: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ec808:
    // 0x1ec808: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ec80c:
    // 0x1ec80c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ec810:
    if (ctx->pc == 0x1EC810u) {
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC814u;
        goto label_1ec814;
    }
    ctx->pc = 0x1EC80Cu;
    {
        const bool branch_taken_0x1ec80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec80c) {
            ctx->pc = 0x1EC82Cu;
            goto label_1ec82c;
        }
    }
    ctx->pc = 0x1EC814u;
label_1ec814:
    // 0x1ec814: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1ec818:
    // 0x1ec818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec81c:
    if (ctx->pc == 0x1EC81Cu) {
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC820u;
        goto label_1ec820;
    }
    ctx->pc = 0x1EC818u;
    {
        const bool branch_taken_0x1ec818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec818) {
            ctx->pc = 0x1EC828u;
            goto label_1ec828;
        }
    }
    ctx->pc = 0x1EC820u;
label_1ec820:
    // 0x1ec820: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ec824:
    // 0x1ec824: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ec828:
    // 0x1ec828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec82c:
    // 0x1ec82c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec830:
    // 0x1ec830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec834:
    // 0x1ec834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec838:
    // 0x1ec838: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1ec838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec83c:
    // 0x1ec83c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1ec83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1ec840:
    // 0x1ec840: 0xa0e30083  sb          $v1, 0x83($a3)
    ctx->pc = 0x1ec840u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 3));
label_1ec844:
    // 0x1ec844: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1ec844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ec848:
    // 0x1ec848: 0xa0e30123  sb          $v1, 0x123($a3)
    ctx->pc = 0x1ec848u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 291), (uint8_t)GPR_U32(ctx, 3));
label_1ec84c:
    // 0x1ec84c: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x1ec84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
label_1ec850:
    // 0x1ec850: 0xa0e301c3  sb          $v1, 0x1C3($a3)
    ctx->pc = 0x1ec850u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 451), (uint8_t)GPR_U32(ctx, 3));
label_1ec854:
    // 0x1ec854: 0xa0e30263  sb          $v1, 0x263($a3)
    ctx->pc = 0x1ec854u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 611), (uint8_t)GPR_U32(ctx, 3));
label_1ec858:
    // 0x1ec858: 0xa0e30303  sb          $v1, 0x303($a3)
    ctx->pc = 0x1ec858u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 771), (uint8_t)GPR_U32(ctx, 3));
label_1ec85c:
    // 0x1ec85c: 0xa0e303a3  sb          $v1, 0x3A3($a3)
    ctx->pc = 0x1ec85cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 931), (uint8_t)GPR_U32(ctx, 3));
label_1ec860:
    // 0x1ec860: 0xa0e30443  sb          $v1, 0x443($a3)
    ctx->pc = 0x1ec860u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1ec864:
    // 0x1ec864: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1ec868:
    if (ctx->pc == 0x1EC868u) {
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0xa0e304e3  sb          $v1, 0x4E3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1251), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC86Cu;
        goto label_1ec86c;
    }
    ctx->pc = 0x1EC864u;
    {
        const bool branch_taken_0x1ec864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0xa0e304e3  sb          $v1, 0x4E3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1251), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec864) {
            ctx->pc = 0x1EC838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec838;
        }
    }
    ctx->pc = 0x1EC86Cu;
label_1ec86c:
    // 0x1ec86c: 0x2901000d  slti        $at, $t0, 0xD
    ctx->pc = 0x1ec86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
label_1ec870:
    // 0x1ec870: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1ec874:
    if (ctx->pc == 0x1EC874u) {
        ctx->pc = 0x1EC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC870u;
        // 0x1ec874: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC878u;
        goto label_1ec878;
    }
    ctx->pc = 0x1EC870u;
    {
        const bool branch_taken_0x1ec870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC870u;
        // 0x1ec874: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec870) {
            ctx->pc = 0x1EC8A0u;
            { ctx->pc = 0x1ec8a0; return; }
        }
    }
    ctx->pc = 0x1EC878u;
label_1ec878:
    // 0x1ec878: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ec87c:
    // 0x1ec87c: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->pc = 0x1ec880u;
    return;
}

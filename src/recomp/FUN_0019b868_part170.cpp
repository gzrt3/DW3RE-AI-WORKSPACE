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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ee0b8u: goto label_1ee0b8;
        case 0x1ee0bcu: goto label_1ee0bc;
        case 0x1ee0c0u: goto label_1ee0c0;
        case 0x1ee0c4u: goto label_1ee0c4;
        case 0x1ee0c8u: goto label_1ee0c8;
        case 0x1ee0ccu: goto label_1ee0cc;
        case 0x1ee0d0u: goto label_1ee0d0;
        case 0x1ee0d4u: goto label_1ee0d4;
        case 0x1ee0d8u: goto label_1ee0d8;
        case 0x1ee0dcu: goto label_1ee0dc;
        case 0x1ee0e0u: goto label_1ee0e0;
        case 0x1ee0e4u: goto label_1ee0e4;
        case 0x1ee0e8u: goto label_1ee0e8;
        case 0x1ee0ecu: goto label_1ee0ec;
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee0f4u: goto label_1ee0f4;
        case 0x1ee0f8u: goto label_1ee0f8;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee100u: goto label_1ee100;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee110u: goto label_1ee110;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee11cu: goto label_1ee11c;
        case 0x1ee120u: goto label_1ee120;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee128u: goto label_1ee128;
        case 0x1ee12cu: goto label_1ee12c;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee134u: goto label_1ee134;
        case 0x1ee138u: goto label_1ee138;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee140u: goto label_1ee140;
        case 0x1ee144u: goto label_1ee144;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee14cu: goto label_1ee14c;
        case 0x1ee150u: goto label_1ee150;
        case 0x1ee154u: goto label_1ee154;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee15cu: goto label_1ee15c;
        case 0x1ee160u: goto label_1ee160;
        case 0x1ee164u: goto label_1ee164;
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        case 0x1ee21cu: goto label_1ee21c;
        case 0x1ee220u: goto label_1ee220;
        case 0x1ee224u: goto label_1ee224;
        case 0x1ee228u: goto label_1ee228;
        case 0x1ee22cu: goto label_1ee22c;
        case 0x1ee230u: goto label_1ee230;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee238u: goto label_1ee238;
        case 0x1ee23cu: goto label_1ee23c;
        case 0x1ee240u: goto label_1ee240;
        case 0x1ee244u: goto label_1ee244;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee24cu: goto label_1ee24c;
        case 0x1ee250u: goto label_1ee250;
        case 0x1ee254u: goto label_1ee254;
        case 0x1ee258u: goto label_1ee258;
        case 0x1ee25cu: goto label_1ee25c;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee264u: goto label_1ee264;
        case 0x1ee268u: goto label_1ee268;
        case 0x1ee26cu: goto label_1ee26c;
        case 0x1ee270u: goto label_1ee270;
        case 0x1ee274u: goto label_1ee274;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee27cu: goto label_1ee27c;
        case 0x1ee280u: goto label_1ee280;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee288u: goto label_1ee288;
        case 0x1ee28cu: goto label_1ee28c;
        case 0x1ee290u: goto label_1ee290;
        case 0x1ee294u: goto label_1ee294;
        case 0x1ee298u: goto label_1ee298;
        case 0x1ee29cu: goto label_1ee29c;
        case 0x1ee2a0u: goto label_1ee2a0;
        case 0x1ee2a4u: goto label_1ee2a4;
        case 0x1ee2a8u: goto label_1ee2a8;
        case 0x1ee2acu: goto label_1ee2ac;
        case 0x1ee2b0u: goto label_1ee2b0;
        case 0x1ee2b4u: goto label_1ee2b4;
        case 0x1ee2b8u: goto label_1ee2b8;
        case 0x1ee2bcu: goto label_1ee2bc;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee2c4u: goto label_1ee2c4;
        case 0x1ee2c8u: goto label_1ee2c8;
        case 0x1ee2ccu: goto label_1ee2cc;
        case 0x1ee2d0u: goto label_1ee2d0;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2d8u: goto label_1ee2d8;
        case 0x1ee2dcu: goto label_1ee2dc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2e8u: goto label_1ee2e8;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee2f8u: goto label_1ee2f8;
        case 0x1ee2fcu: goto label_1ee2fc;
        case 0x1ee300u: goto label_1ee300;
        case 0x1ee304u: goto label_1ee304;
        case 0x1ee308u: goto label_1ee308;
        case 0x1ee30cu: goto label_1ee30c;
        case 0x1ee310u: goto label_1ee310;
        case 0x1ee314u: goto label_1ee314;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee320u: goto label_1ee320;
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee328u: goto label_1ee328;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee338u: goto label_1ee338;
        case 0x1ee33cu: goto label_1ee33c;
        case 0x1ee340u: goto label_1ee340;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee348u: goto label_1ee348;
        case 0x1ee34cu: goto label_1ee34c;
        case 0x1ee350u: goto label_1ee350;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee358u: goto label_1ee358;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee360u: goto label_1ee360;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee368u: goto label_1ee368;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee370u: goto label_1ee370;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee37cu: goto label_1ee37c;
        case 0x1ee380u: goto label_1ee380;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee388u: goto label_1ee388;
        case 0x1ee38cu: goto label_1ee38c;
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee39cu: goto label_1ee39c;
        case 0x1ee3a0u: goto label_1ee3a0;
        case 0x1ee3a4u: goto label_1ee3a4;
        case 0x1ee3a8u: goto label_1ee3a8;
        case 0x1ee3acu: goto label_1ee3ac;
        case 0x1ee3b0u: goto label_1ee3b0;
        case 0x1ee3b4u: goto label_1ee3b4;
        case 0x1ee3b8u: goto label_1ee3b8;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c0u: goto label_1ee3c0;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3c8u: goto label_1ee3c8;
        case 0x1ee3ccu: goto label_1ee3cc;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3dcu: goto label_1ee3dc;
        case 0x1ee3e0u: goto label_1ee3e0;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee3ecu: goto label_1ee3ec;
        case 0x1ee3f0u: goto label_1ee3f0;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee3f8u: goto label_1ee3f8;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee400u: goto label_1ee400;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee40cu: goto label_1ee40c;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee418u: goto label_1ee418;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee450u: goto label_1ee450;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee458u: goto label_1ee458;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee468u: goto label_1ee468;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee478u: goto label_1ee478;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee480u: goto label_1ee480;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee488u: goto label_1ee488;
        case 0x1ee48cu: goto label_1ee48c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee498u: goto label_1ee498;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4a0u: goto label_1ee4a0;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4a8u: goto label_1ee4a8;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b0u: goto label_1ee4b0;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4c0u: goto label_1ee4c0;
        case 0x1ee4c4u: goto label_1ee4c4;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4ccu: goto label_1ee4cc;
        case 0x1ee4d0u: goto label_1ee4d0;
        case 0x1ee4d4u: goto label_1ee4d4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4e0u: goto label_1ee4e0;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4e8u: goto label_1ee4e8;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee4f4u: goto label_1ee4f4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee4fcu: goto label_1ee4fc;
        case 0x1ee500u: goto label_1ee500;
        case 0x1ee504u: goto label_1ee504;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee510u: goto label_1ee510;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee518u: goto label_1ee518;
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee524u: goto label_1ee524;
        case 0x1ee528u: goto label_1ee528;
        case 0x1ee52cu: goto label_1ee52c;
        case 0x1ee530u: goto label_1ee530;
        case 0x1ee534u: goto label_1ee534;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee540u: goto label_1ee540;
        case 0x1ee544u: goto label_1ee544;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee550u: goto label_1ee550;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee55cu: goto label_1ee55c;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee568u: goto label_1ee568;
        case 0x1ee56cu: goto label_1ee56c;
        case 0x1ee570u: goto label_1ee570;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee578u: goto label_1ee578;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee580u: goto label_1ee580;
        case 0x1ee584u: goto label_1ee584;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee58cu: goto label_1ee58c;
        case 0x1ee590u: goto label_1ee590;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee59cu: goto label_1ee59c;
        case 0x1ee5a0u: goto label_1ee5a0;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5acu: goto label_1ee5ac;
        case 0x1ee5b0u: goto label_1ee5b0;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5b8u: goto label_1ee5b8;
        case 0x1ee5bcu: goto label_1ee5bc;
        case 0x1ee5c0u: goto label_1ee5c0;
        case 0x1ee5c4u: goto label_1ee5c4;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5ccu: goto label_1ee5cc;
        case 0x1ee5d0u: goto label_1ee5d0;
        case 0x1ee5d4u: goto label_1ee5d4;
        case 0x1ee5d8u: goto label_1ee5d8;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee5e4u: goto label_1ee5e4;
        case 0x1ee5e8u: goto label_1ee5e8;
        case 0x1ee5ecu: goto label_1ee5ec;
        case 0x1ee5f0u: goto label_1ee5f0;
        case 0x1ee5f4u: goto label_1ee5f4;
        case 0x1ee5f8u: goto label_1ee5f8;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee600u: goto label_1ee600;
        case 0x1ee604u: goto label_1ee604;
        case 0x1ee608u: goto label_1ee608;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee610u: goto label_1ee610;
        case 0x1ee614u: goto label_1ee614;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee61cu: goto label_1ee61c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee624u: goto label_1ee624;
        case 0x1ee628u: goto label_1ee628;
        case 0x1ee62cu: goto label_1ee62c;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        case 0x1ee650u: goto label_1ee650;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee65cu: goto label_1ee65c;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee664u: goto label_1ee664;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee66cu: goto label_1ee66c;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee674u: goto label_1ee674;
        case 0x1ee678u: goto label_1ee678;
        case 0x1ee67cu: goto label_1ee67c;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee684u: goto label_1ee684;
        case 0x1ee688u: goto label_1ee688;
        case 0x1ee68cu: goto label_1ee68c;
        case 0x1ee690u: goto label_1ee690;
        case 0x1ee694u: goto label_1ee694;
        case 0x1ee698u: goto label_1ee698;
        case 0x1ee69cu: goto label_1ee69c;
        case 0x1ee6a0u: goto label_1ee6a0;
        case 0x1ee6a4u: goto label_1ee6a4;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6acu: goto label_1ee6ac;
        case 0x1ee6b0u: goto label_1ee6b0;
        case 0x1ee6b4u: goto label_1ee6b4;
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6bcu: goto label_1ee6bc;
        case 0x1ee6c0u: goto label_1ee6c0;
        case 0x1ee6c4u: goto label_1ee6c4;
        case 0x1ee6c8u: goto label_1ee6c8;
        case 0x1ee6ccu: goto label_1ee6cc;
        case 0x1ee6d0u: goto label_1ee6d0;
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6d8u: goto label_1ee6d8;
        case 0x1ee6dcu: goto label_1ee6dc;
        case 0x1ee6e0u: goto label_1ee6e0;
        case 0x1ee6e4u: goto label_1ee6e4;
        case 0x1ee6e8u: goto label_1ee6e8;
        case 0x1ee6ecu: goto label_1ee6ec;
        case 0x1ee6f0u: goto label_1ee6f0;
        case 0x1ee6f4u: goto label_1ee6f4;
        case 0x1ee6f8u: goto label_1ee6f8;
        case 0x1ee6fcu: goto label_1ee6fc;
        case 0x1ee700u: goto label_1ee700;
        case 0x1ee704u: goto label_1ee704;
        case 0x1ee708u: goto label_1ee708;
        case 0x1ee70cu: goto label_1ee70c;
        case 0x1ee710u: goto label_1ee710;
        case 0x1ee714u: goto label_1ee714;
        case 0x1ee718u: goto label_1ee718;
        case 0x1ee71cu: goto label_1ee71c;
        case 0x1ee720u: goto label_1ee720;
        case 0x1ee724u: goto label_1ee724;
        case 0x1ee728u: goto label_1ee728;
        case 0x1ee72cu: goto label_1ee72c;
        case 0x1ee730u: goto label_1ee730;
        case 0x1ee734u: goto label_1ee734;
        case 0x1ee738u: goto label_1ee738;
        case 0x1ee73cu: goto label_1ee73c;
        case 0x1ee740u: goto label_1ee740;
        case 0x1ee744u: goto label_1ee744;
        case 0x1ee748u: goto label_1ee748;
        case 0x1ee74cu: goto label_1ee74c;
        case 0x1ee750u: goto label_1ee750;
        case 0x1ee754u: goto label_1ee754;
        case 0x1ee758u: goto label_1ee758;
        case 0x1ee75cu: goto label_1ee75c;
        case 0x1ee760u: goto label_1ee760;
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee768u: goto label_1ee768;
        case 0x1ee76cu: goto label_1ee76c;
        case 0x1ee770u: goto label_1ee770;
        case 0x1ee774u: goto label_1ee774;
        case 0x1ee778u: goto label_1ee778;
        case 0x1ee77cu: goto label_1ee77c;
        case 0x1ee780u: goto label_1ee780;
        case 0x1ee784u: goto label_1ee784;
        case 0x1ee788u: goto label_1ee788;
        case 0x1ee78cu: goto label_1ee78c;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee794u: goto label_1ee794;
        case 0x1ee798u: goto label_1ee798;
        case 0x1ee79cu: goto label_1ee79c;
        case 0x1ee7a0u: goto label_1ee7a0;
        case 0x1ee7a4u: goto label_1ee7a4;
        case 0x1ee7a8u: goto label_1ee7a8;
        case 0x1ee7acu: goto label_1ee7ac;
        case 0x1ee7b0u: goto label_1ee7b0;
        case 0x1ee7b4u: goto label_1ee7b4;
        case 0x1ee7b8u: goto label_1ee7b8;
        case 0x1ee7bcu: goto label_1ee7bc;
        case 0x1ee7c0u: goto label_1ee7c0;
        case 0x1ee7c4u: goto label_1ee7c4;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7ccu: goto label_1ee7cc;
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee7d4u: goto label_1ee7d4;
        case 0x1ee7d8u: goto label_1ee7d8;
        case 0x1ee7dcu: goto label_1ee7dc;
        case 0x1ee7e0u: goto label_1ee7e0;
        case 0x1ee7e4u: goto label_1ee7e4;
        case 0x1ee7e8u: goto label_1ee7e8;
        case 0x1ee7ecu: goto label_1ee7ec;
        case 0x1ee7f0u: goto label_1ee7f0;
        case 0x1ee7f4u: goto label_1ee7f4;
        case 0x1ee7f8u: goto label_1ee7f8;
        case 0x1ee7fcu: goto label_1ee7fc;
        case 0x1ee800u: goto label_1ee800;
        case 0x1ee804u: goto label_1ee804;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee80cu: goto label_1ee80c;
        case 0x1ee810u: goto label_1ee810;
        case 0x1ee814u: goto label_1ee814;
        case 0x1ee818u: goto label_1ee818;
        case 0x1ee81cu: goto label_1ee81c;
        case 0x1ee820u: goto label_1ee820;
        case 0x1ee824u: goto label_1ee824;
        case 0x1ee828u: goto label_1ee828;
        case 0x1ee82cu: goto label_1ee82c;
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee838u: goto label_1ee838;
        case 0x1ee83cu: goto label_1ee83c;
        case 0x1ee840u: goto label_1ee840;
        case 0x1ee844u: goto label_1ee844;
        case 0x1ee848u: goto label_1ee848;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        default: return;
    }

label_1ee0b8:
    // 0x1ee0b8: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1ee0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1ee0bc:
    // 0x1ee0bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1ee0c0:
    if (ctx->pc == 0x1EE0C0u) {
        ctx->pc = 0x1EE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0BCu;
        // 0x1ee0c0: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0C4u;
        goto label_1ee0c4;
    }
    ctx->pc = 0x1EE0BCu;
    {
        const bool branch_taken_0x1ee0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0BCu;
        // 0x1ee0c0: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0bc) {
            ctx->pc = 0x1EE10Cu;
            goto label_1ee10c;
        }
    }
    ctx->pc = 0x1EE0C4u;
label_1ee0c4:
    // 0x1ee0c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ee0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ee0c8:
    // 0x1ee0c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee0cc:
    // 0x1ee0cc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_1ee0d0:
    if (ctx->pc == 0x1EE0D0u) {
        ctx->pc = 0x1EE0D4u;
        goto label_1ee0d4;
    }
    ctx->pc = 0x1EE0CCu;
    {
        const bool branch_taken_0x1ee0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee0cc) {
            ctx->pc = 0x1EE0E0u;
            goto label_1ee0e0;
        }
    }
    ctx->pc = 0x1EE0D4u;
label_1ee0d4:
    // 0x1ee0d4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1ee0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1ee0d8:
    // 0x1ee0d8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_1ee0dc:
    if (ctx->pc == 0x1EE0DCu) {
        ctx->pc = 0x1EE0E0u;
        goto label_1ee0e0;
    }
    ctx->pc = 0x1EE0D8u;
    {
        const bool branch_taken_0x1ee0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee0d8) {
            ctx->pc = 0x1EE108u;
            goto label_1ee108;
        }
    }
    ctx->pc = 0x1EE0E0u;
label_1ee0e0:
    // 0x1ee0e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ee0e4:
    // 0x1ee0e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee0e8:
    // 0x1ee0e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ee0ec:
    if (ctx->pc == 0x1EE0ECu) {
        ctx->pc = 0x1EE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0E8u;
        // 0x1ee0ec: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0F0u;
        goto label_1ee0f0;
    }
    ctx->pc = 0x1EE0E8u;
    {
        const bool branch_taken_0x1ee0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0E8u;
        // 0x1ee0ec: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0e8) {
            ctx->pc = 0x1EE100u;
            goto label_1ee100;
        }
    }
    ctx->pc = 0x1EE0F0u;
label_1ee0f0:
    // 0x1ee0f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee0f4:
    // 0x1ee0f4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ee0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1ee0f8:
    // 0x1ee0f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ee0fc:
    if (ctx->pc == 0x1EE0FCu) {
        ctx->pc = 0x1EE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F8u;
        // 0x1ee0fc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE100u;
        goto label_1ee100;
    }
    ctx->pc = 0x1EE0F8u;
    {
        const bool branch_taken_0x1ee0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F8u;
        // 0x1ee0fc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0f8) {
            ctx->pc = 0x1EE108u;
            goto label_1ee108;
        }
    }
    ctx->pc = 0x1EE100u;
label_1ee100:
    // 0x1ee100: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ee100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1ee104:
    // 0x1ee104: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1ee104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_1ee108:
    // 0x1ee108: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1ee108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ee10c:
    // 0x1ee10c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1ee110:
    if (ctx->pc == 0x1EE110u) {
        ctx->pc = 0x1EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE10Cu;
        // 0x1ee110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE114u;
        goto label_1ee114;
    }
    ctx->pc = 0x1EE10Cu;
    {
        const bool branch_taken_0x1ee10c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE10Cu;
        // 0x1ee110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee10c) {
            ctx->pc = 0x1EE158u;
            goto label_1ee158;
        }
    }
    ctx->pc = 0x1EE114u;
label_1ee114:
    // 0x1ee114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee118:
    // 0x1ee118: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ee118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ee11c:
    // 0x1ee11c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ee11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee120:
    // 0x1ee120: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ee124:
    // 0x1ee124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee128:
    // 0x1ee128: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1ee12c:
    if (ctx->pc == 0x1EE12Cu) {
        ctx->pc = 0x1EE130u;
        goto label_1ee130;
    }
    ctx->pc = 0x1EE128u;
    {
        const bool branch_taken_0x1ee128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee128) {
            ctx->pc = 0x1EE148u;
            goto label_1ee148;
        }
    }
    ctx->pc = 0x1EE130u;
label_1ee130:
    // 0x1ee130: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1ee134:
    // 0x1ee134: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1ee134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1ee138:
    // 0x1ee138: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ee138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ee13c:
    // 0x1ee13c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ee140:
    // 0x1ee140: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee144:
    if (ctx->pc == 0x1EE144u) {
        ctx->pc = 0x1EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE140u;
        // 0x1ee144: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE148u;
        goto label_1ee148;
    }
    ctx->pc = 0x1EE140u;
    {
        const bool branch_taken_0x1ee140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE140u;
        // 0x1ee144: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee140) {
            ctx->pc = 0x1EE158u;
            goto label_1ee158;
        }
    }
    ctx->pc = 0x1EE148u;
label_1ee148:
    // 0x1ee148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ee14c:
    // 0x1ee14c: 0xd6102a  slt         $v0, $a2, $s6
    ctx->pc = 0x1ee14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ee150:
    // 0x1ee150: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1ee154:
    if (ctx->pc == 0x1EE154u) {
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE158u;
        goto label_1ee158;
    }
    ctx->pc = 0x1EE150u;
    {
        const bool branch_taken_0x1ee150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee150) {
            ctx->pc = 0x1EE120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee120;
        }
    }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1ee158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee15c:
    // 0x1ee15c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ee15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ee160:
    // 0x1ee160: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ee160u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ee164:
    // 0x1ee164: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ee164u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ee168:
    // 0x1ee168: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ee168u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ee16c:
    // 0x1ee16c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ee16cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee170:
    // 0x1ee170: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee174:
    // 0x1ee174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee178:
    // 0x1ee178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee17c:
    // 0x1ee17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee180:
    // 0x1ee180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee184:
    // 0x1ee184: 0x3e00008  jr          $ra
label_1ee188:
    if (ctx->pc == 0x1EE188u) {
        ctx->pc = 0x1EE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE184u;
        // 0x1ee188: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE18Cu;
        goto label_1ee18c;
    }
    ctx->pc = 0x1EE184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE184u;
        // 0x1ee188: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE18Cu;
label_1ee18c:
    // 0x1ee18c: 0x0  nop
    ctx->pc = 0x1ee18cu;
    // NOP
label_1ee190:
    // 0x1ee190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee194:
    // 0x1ee194: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee198:
    // 0x1ee198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee19c:
    // 0x1ee19c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ee1a0:
    // 0x1ee1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee1a4:
    // 0x1ee1a4: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1ee1a8:
    // 0x1ee1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee1ac:
    // 0x1ee1ac: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee1acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1ee1b0:
    // 0x1ee1b0: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1ee1b4:
    // 0x1ee1b4: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1ee1b8:
    // 0x1ee1b8: 0xc07aa5c  jal         func_1EA970
label_1ee1bc:
    if (ctx->pc == 0x1EE1BCu) {
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C0u;
        goto label_1ee1c0;
    }
    ctx->pc = 0x1EE1B8u;
    SET_GPR_U32(ctx, 31, 0x1EE1C0u);
    ctx->pc = 0x1EE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1B8u;
    // 0x1ee1bc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1EE1C0u;
label_1ee1c0:
    // 0x1ee1c0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee1c4:
    // 0x1ee1c4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ee1c8:
    // 0x1ee1c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1cc:
    // 0x1ee1cc: 0xc07aa7c  jal         func_1EA9F0
label_1ee1d0:
    if (ctx->pc == 0x1EE1D0u) {
        ctx->pc = 0x1EE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1CCu;
        // 0x1ee1d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1D4u;
        goto label_1ee1d4;
    }
    ctx->pc = 0x1EE1CCu;
    SET_GPR_U32(ctx, 31, 0x1EE1D4u);
    ctx->pc = 0x1EE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1CCu;
    // 0x1ee1d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1EE1D4u;
label_1ee1d4:
    // 0x1ee1d4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ee1d8:
    // 0x1ee1d8: 0xc07aaa8  jal         func_1EAAA0
label_1ee1dc:
    if (ctx->pc == 0x1EE1DCu) {
        ctx->pc = 0x1EE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1D8u;
        // 0x1ee1dc: 0x2484d0d0  addiu       $a0, $a0, -0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1E0u;
        goto label_1ee1e0;
    }
    ctx->pc = 0x1EE1D8u;
    SET_GPR_U32(ctx, 31, 0x1EE1E0u);
    ctx->pc = 0x1EE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1D8u;
    // 0x1ee1dc: 0x2484d0d0  addiu       $a0, $a0, -0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1EE1E0u;
label_1ee1e0:
    // 0x1ee1e0: 0xc07ab08  jal         func_1EAC20
label_1ee1e4:
    if (ctx->pc == 0x1EE1E4u) {
        ctx->pc = 0x1EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1E0u;
        // 0x1ee1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1E8u;
        goto label_1ee1e8;
    }
    ctx->pc = 0x1EE1E0u;
    SET_GPR_U32(ctx, 31, 0x1EE1E8u);
    ctx->pc = 0x1EE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1E0u;
    // 0x1ee1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1EE1E8u;
label_1ee1e8:
    // 0x1ee1e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1ec:
    // 0x1ee1ec: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee1f0:
    // 0x1ee1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee1f4:
    if (ctx->pc == 0x1EE1F4u) {
        ctx->pc = 0x1EE1F8u;
        goto label_1ee1f8;
    }
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1F8u;
label_1ee1f8:
    // 0x1ee1f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ee1fc:
    if (ctx->pc == 0x1EE1FCu) {
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F8u;
        // 0x1ee1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE200u;
        goto label_1ee200;
    }
    ctx->pc = 0x1EE1F8u;
    {
        const bool branch_taken_0x1ee1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F8u;
        // 0x1ee1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f8) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE200u;
label_1ee200:
    // 0x1ee200: 0xc07ab38  jal         func_1EACE0
label_1ee204:
    if (ctx->pc == 0x1EE204u) {
        ctx->pc = 0x1EE208u;
        goto label_1ee208;
    }
    ctx->pc = 0x1EE200u;
    SET_GPR_U32(ctx, 31, 0x1EE208u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE208u;
label_1ee208:
    // 0x1ee208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee20c:
    // 0x1ee20c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1ee210:
    if (ctx->pc == 0x1EE210u) {
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2a21003d  slti        $at, $s1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE214u;
        goto label_1ee214;
    }
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2a21003d  slti        $at, $s1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE240u;
            goto label_1ee240;
        }
    }
    ctx->pc = 0x1EE214u;
label_1ee214:
    // 0x1ee214: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ee218:
    if (ctx->pc == 0x1EE218u) {
        ctx->pc = 0x1EE21Cu;
        goto label_1ee21c;
    }
    ctx->pc = 0x1EE214u;
    {
        const bool branch_taken_0x1ee214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee214) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE21Cu;
label_1ee21c:
    // 0x1ee21c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ee220:
    // 0x1ee220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ee224:
    if (ctx->pc == 0x1EE224u) {
        ctx->pc = 0x1EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE220u;
        // 0x1ee224: 0x2a210079  slti        $at, $s1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE228u;
        goto label_1ee228;
    }
    ctx->pc = 0x1EE220u;
    {
        const bool branch_taken_0x1ee220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE220u;
        // 0x1ee224: 0x2a210079  slti        $at, $s1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee220) {
            ctx->pc = 0x1EE230u;
            goto label_1ee230;
        }
    }
    ctx->pc = 0x1EE228u;
label_1ee228:
    // 0x1ee228: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1ee22c:
    if (ctx->pc == 0x1EE22Cu) {
        ctx->pc = 0x1EE230u;
        goto label_1ee230;
    }
    ctx->pc = 0x1EE228u;
    {
        const bool branch_taken_0x1ee228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee228) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE230u;
label_1ee230:
    // 0x1ee230: 0xc07ab18  jal         func_1EAC60
label_1ee234:
    if (ctx->pc == 0x1EE234u) {
        ctx->pc = 0x1EE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE230u;
        // 0x1ee234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE238u;
        goto label_1ee238;
    }
    ctx->pc = 0x1EE230u;
    SET_GPR_U32(ctx, 31, 0x1EE238u);
    ctx->pc = 0x1EE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE230u;
    // 0x1ee234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE238u;
label_1ee238:
    // 0x1ee238: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee23c:
    if (ctx->pc == 0x1EE23Cu) {
        ctx->pc = 0x1EE240u;
        goto label_1ee240;
    }
    ctx->pc = 0x1EE238u;
    {
        const bool branch_taken_0x1ee238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee238) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE240u;
label_1ee240:
    // 0x1ee240: 0xc07ab38  jal         func_1EACE0
label_1ee244:
    if (ctx->pc == 0x1EE244u) {
        ctx->pc = 0x1EE248u;
        goto label_1ee248;
    }
    ctx->pc = 0x1EE240u;
    SET_GPR_U32(ctx, 31, 0x1EE248u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ee24c:
    if (ctx->pc == 0x1EE24Cu) {
        ctx->pc = 0x1EE250u;
        goto label_1ee250;
    }
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE250u;
label_1ee250:
    // 0x1ee250: 0xc07b48c  jal         func_1ED230
label_1ee254:
    if (ctx->pc == 0x1EE254u) {
        ctx->pc = 0x1EE258u;
        goto label_1ee258;
    }
    ctx->pc = 0x1EE250u;
    SET_GPR_U32(ctx, 31, 0x1EE258u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EE258u;
label_1ee258:
    // 0x1ee258: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_1ee25c:
    if (ctx->pc == 0x1EE25Cu) {
        ctx->pc = 0x1EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE258u;
        // 0x1ee25c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE260u;
        goto label_1ee260;
    }
    ctx->pc = 0x1EE258u;
    {
        const bool branch_taken_0x1ee258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE258u;
        // 0x1ee25c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee258) {
            ctx->pc = 0x1EE1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee1ec;
        }
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee264:
    // 0x1ee264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee268:
    // 0x1ee268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee26c:
    // 0x1ee26c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee270:
    // 0x1ee270: 0x3e00008  jr          $ra
label_1ee274:
    if (ctx->pc == 0x1EE274u) {
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE270u;
        // 0x1ee274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE278u;
        goto label_1ee278;
    }
    ctx->pc = 0x1EE270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE270u;
        // 0x1ee274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE278u;
label_1ee278:
    // 0x1ee278: 0x0  nop
    ctx->pc = 0x1ee278u;
    // NOP
label_1ee27c:
    // 0x1ee27c: 0x0  nop
    ctx->pc = 0x1ee27cu;
    // NOP
label_1ee280:
    // 0x1ee280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee284:
    // 0x1ee284: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ee288:
    // 0x1ee288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee28c:
    // 0x1ee28c: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1ee28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1ee290:
    // 0x1ee290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee294:
    // 0x1ee294: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1ee298:
    // 0x1ee298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee29c:
    // 0x1ee29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee2a0:
    // 0x1ee2a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee2a4:
    // 0x1ee2a4: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1ee2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1ee2a8:
    // 0x1ee2a8: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1ee2ac:
    // 0x1ee2ac: 0xc07aa5c  jal         func_1EA970
label_1ee2b0:
    if (ctx->pc == 0x1EE2B0u) {
        ctx->pc = 0x1EE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2ACu;
        // 0x1ee2b0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2B4u;
        goto label_1ee2b4;
    }
    ctx->pc = 0x1EE2ACu;
    SET_GPR_U32(ctx, 31, 0x1EE2B4u);
    ctx->pc = 0x1EE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2ACu;
    // 0x1ee2b0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1EE2B4u;
label_1ee2b4:
    // 0x1ee2b4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee2b8:
    // 0x1ee2b8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ee2bc:
    // 0x1ee2bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2c0:
    // 0x1ee2c0: 0xc07aa7c  jal         func_1EA9F0
label_1ee2c4:
    if (ctx->pc == 0x1EE2C4u) {
        ctx->pc = 0x1EE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2C0u;
        // 0x1ee2c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2C8u;
        goto label_1ee2c8;
    }
    ctx->pc = 0x1EE2C0u;
    SET_GPR_U32(ctx, 31, 0x1EE2C8u);
    ctx->pc = 0x1EE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2C0u;
    // 0x1ee2c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1EE2C8u;
label_1ee2c8:
    // 0x1ee2c8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ee2cc:
    // 0x1ee2cc: 0xc07aaa8  jal         func_1EAAA0
label_1ee2d0:
    if (ctx->pc == 0x1EE2D0u) {
        ctx->pc = 0x1EE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2CCu;
        // 0x1ee2d0: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2D4u;
        goto label_1ee2d4;
    }
    ctx->pc = 0x1EE2CCu;
    SET_GPR_U32(ctx, 31, 0x1EE2D4u);
    ctx->pc = 0x1EE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2CCu;
    // 0x1ee2d0: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1EE2D4u;
label_1ee2d4:
    // 0x1ee2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2d8:
    // 0x1ee2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2dc:
    // 0x1ee2dc: 0xc07aa94  jal         func_1EAA50
label_1ee2e0:
    if (ctx->pc == 0x1EE2E0u) {
        ctx->pc = 0x1EE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2DCu;
        // 0x1ee2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2E4u;
        goto label_1ee2e4;
    }
    ctx->pc = 0x1EE2DCu;
    SET_GPR_U32(ctx, 31, 0x1EE2E4u);
    ctx->pc = 0x1EE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2DCu;
    // 0x1ee2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1EE2E4u;
label_1ee2e4:
    // 0x1ee2e4: 0xc07ab08  jal         func_1EAC20
label_1ee2e8:
    if (ctx->pc == 0x1EE2E8u) {
        ctx->pc = 0x1EE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2E4u;
        // 0x1ee2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2ECu;
        goto label_1ee2ec;
    }
    ctx->pc = 0x1EE2E4u;
    SET_GPR_U32(ctx, 31, 0x1EE2ECu);
    ctx->pc = 0x1EE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2E4u;
    // 0x1ee2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1EE2ECu;
label_1ee2ec:
    // 0x1ee2ec: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee2f0:
    // 0x1ee2f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee2f4:
    if (ctx->pc == 0x1EE2F4u) {
        ctx->pc = 0x1EE2F8u;
        goto label_1ee2f8;
    }
    ctx->pc = 0x1EE2F0u;
    {
        const bool branch_taken_0x1ee2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2f0) {
            ctx->pc = 0x1EE300u;
            goto label_1ee300;
        }
    }
    ctx->pc = 0x1EE2F8u;
label_1ee2f8:
    // 0x1ee2f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ee2fc:
    if (ctx->pc == 0x1EE2FCu) {
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F8u;
        // 0x1ee2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE300u;
        goto label_1ee300;
    }
    ctx->pc = 0x1EE2F8u;
    {
        const bool branch_taken_0x1ee2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F8u;
        // 0x1ee2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2f8) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE300u;
label_1ee300:
    // 0x1ee300: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1ee304:
    // 0x1ee304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee308:
    if (ctx->pc == 0x1EE308u) {
        ctx->pc = 0x1EE30Cu;
        goto label_1ee30c;
    }
    ctx->pc = 0x1EE304u;
    {
        const bool branch_taken_0x1ee304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee304) {
            ctx->pc = 0x1EE314u;
            goto label_1ee314;
        }
    }
    ctx->pc = 0x1EE30Cu;
label_1ee30c:
    // 0x1ee30c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1ee310:
    if (ctx->pc == 0x1EE310u) {
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE314u;
        goto label_1ee314;
    }
    ctx->pc = 0x1EE30Cu;
    {
        const bool branch_taken_0x1ee30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee30c) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE314u;
label_1ee314:
    // 0x1ee314: 0xc07ab38  jal         func_1EACE0
label_1ee318:
    if (ctx->pc == 0x1EE318u) {
        ctx->pc = 0x1EE31Cu;
        goto label_1ee31c;
    }
    ctx->pc = 0x1EE314u;
    SET_GPR_U32(ctx, 31, 0x1EE31Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE31Cu;
label_1ee31c:
    // 0x1ee31c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee320:
    // 0x1ee320: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1ee324:
    if (ctx->pc == 0x1EE324u) {
        ctx->pc = 0x1EE328u;
        goto label_1ee328;
    }
    ctx->pc = 0x1EE320u;
    {
        const bool branch_taken_0x1ee320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee320) {
            ctx->pc = 0x1EE36Cu;
            goto label_1ee36c;
        }
    }
    ctx->pc = 0x1EE328u;
label_1ee328:
    // 0x1ee328: 0xc07aaa4  jal         func_1EAA90
label_1ee32c:
    if (ctx->pc == 0x1EE32Cu) {
        ctx->pc = 0x1EE330u;
        goto label_1ee330;
    }
    ctx->pc = 0x1EE328u;
    SET_GPR_U32(ctx, 31, 0x1EE330u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x1EE330u;
label_1ee330:
    // 0x1ee330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee334:
    // 0x1ee334: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1ee338:
    if (ctx->pc == 0x1EE338u) {
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE334u;
        // 0x1ee338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE33Cu;
        goto label_1ee33c;
    }
    ctx->pc = 0x1EE334u;
    {
        const bool branch_taken_0x1ee334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE334u;
        // 0x1ee338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee334) {
            ctx->pc = 0x1EE34Cu;
            goto label_1ee34c;
        }
    }
    ctx->pc = 0x1EE33Cu;
label_1ee33c:
    // 0x1ee33c: 0xc07ab18  jal         func_1EAC60
label_1ee340:
    if (ctx->pc == 0x1EE340u) {
        ctx->pc = 0x1EE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE33Cu;
        // 0x1ee340: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE344u;
        goto label_1ee344;
    }
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE33Cu;
    // 0x1ee340: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ee348:
    if (ctx->pc == 0x1EE348u) {
        ctx->pc = 0x1EE34Cu;
        goto label_1ee34c;
    }
    ctx->pc = 0x1EE344u;
    {
        const bool branch_taken_0x1ee344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee344) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE34Cu;
label_1ee34c:
    // 0x1ee34c: 0x0  nop
    ctx->pc = 0x1ee34cu;
    // NOP
label_1ee350:
    // 0x1ee350: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee354:
    // 0x1ee354: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1ee358:
    if (ctx->pc == 0x1EE358u) {
        ctx->pc = 0x1EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE354u;
        // 0x1ee358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE35Cu;
        goto label_1ee35c;
    }
    ctx->pc = 0x1EE354u;
    {
        const bool branch_taken_0x1ee354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE354u;
        // 0x1ee358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee354) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE35Cu;
label_1ee35c:
    // 0x1ee35c: 0xc07ab18  jal         func_1EAC60
label_1ee360:
    if (ctx->pc == 0x1EE360u) {
        ctx->pc = 0x1EE364u;
        goto label_1ee364;
    }
    ctx->pc = 0x1EE35Cu;
    SET_GPR_U32(ctx, 31, 0x1EE364u);
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ee368:
    if (ctx->pc == 0x1EE368u) {
        ctx->pc = 0x1EE36Cu;
        goto label_1ee36c;
    }
    ctx->pc = 0x1EE364u;
    {
        const bool branch_taken_0x1ee364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee364) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE36Cu;
label_1ee36c:
    // 0x1ee36c: 0x0  nop
    ctx->pc = 0x1ee36cu;
    // NOP
label_1ee370:
    // 0x1ee370: 0xc07ab38  jal         func_1EACE0
label_1ee374:
    if (ctx->pc == 0x1EE374u) {
        ctx->pc = 0x1EE378u;
        goto label_1ee378;
    }
    ctx->pc = 0x1EE370u;
    SET_GPR_U32(ctx, 31, 0x1EE378u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE378u;
label_1ee378:
    // 0x1ee378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ee37c:
    if (ctx->pc == 0x1EE37Cu) {
        ctx->pc = 0x1EE380u;
        goto label_1ee380;
    }
    ctx->pc = 0x1EE378u;
    {
        const bool branch_taken_0x1ee378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee378) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE380u;
label_1ee380:
    // 0x1ee380: 0xc07b48c  jal         func_1ED230
label_1ee384:
    if (ctx->pc == 0x1EE384u) {
        ctx->pc = 0x1EE388u;
        goto label_1ee388;
    }
    ctx->pc = 0x1EE380u;
    SET_GPR_U32(ctx, 31, 0x1EE388u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EE388u;
label_1ee388:
    // 0x1ee388: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_1ee38c:
    if (ctx->pc == 0x1EE38Cu) {
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE388u;
        // 0x1ee38c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE390u;
        goto label_1ee390;
    }
    ctx->pc = 0x1EE388u;
    {
        const bool branch_taken_0x1ee388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE388u;
        // 0x1ee38c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee388) {
            ctx->pc = 0x1EE2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee2f0;
        }
    }
    ctx->pc = 0x1EE390u;
label_1ee390:
    // 0x1ee390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee394:
    // 0x1ee394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee398:
    // 0x1ee398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee39c:
    // 0x1ee39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee3a0:
    // 0x1ee3a0: 0x3e00008  jr          $ra
label_1ee3a4:
    if (ctx->pc == 0x1EE3A4u) {
        ctx->pc = 0x1EE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3A0u;
        // 0x1ee3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE3A8u;
        goto label_1ee3a8;
    }
    ctx->pc = 0x1EE3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3A0u;
        // 0x1ee3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE3A8u;
label_1ee3a8:
    // 0x1ee3a8: 0x0  nop
    ctx->pc = 0x1ee3a8u;
    // NOP
label_1ee3ac:
    // 0x1ee3ac: 0x0  nop
    ctx->pc = 0x1ee3acu;
    // NOP
label_1ee3b0:
    // 0x1ee3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ee3b4:
    // 0x1ee3b4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ee3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ee3b8:
    // 0x1ee3b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ee3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ee3bc:
    // 0x1ee3bc: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ee3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1ee3c0:
    // 0x1ee3c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ee3c4:
    // 0x1ee3c4: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1ee3c8:
    // 0x1ee3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ee3cc:
    // 0x1ee3cc: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1ee3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1ee3d0:
    // 0x1ee3d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ee3d4:
    // 0x1ee3d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ee3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3d8:
    // 0x1ee3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee3dc:
    // 0x1ee3dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee3e0:
    // 0x1ee3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee3e4:
    // 0x1ee3e4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1ee3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ee3e8:
    // 0x1ee3e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3ec:
    // 0x1ee3ec: 0xc07aa5c  jal         func_1EA970
label_1ee3f0:
    if (ctx->pc == 0x1EE3F0u) {
        ctx->pc = 0x1EE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3ECu;
        // 0x1ee3f0: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE3F4u;
        goto label_1ee3f4;
    }
    ctx->pc = 0x1EE3ECu;
    SET_GPR_U32(ctx, 31, 0x1EE3F4u);
    ctx->pc = 0x1EE3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3ECu;
    // 0x1ee3f0: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1EE3F4u;
label_1ee3f4:
    // 0x1ee3f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee3f8:
    // 0x1ee3f8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ee3fc:
    // 0x1ee3fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee400:
    // 0x1ee400: 0xc07aa7c  jal         func_1EA9F0
label_1ee404:
    if (ctx->pc == 0x1EE404u) {
        ctx->pc = 0x1EE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE400u;
        // 0x1ee404: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE408u;
        goto label_1ee408;
    }
    ctx->pc = 0x1EE400u;
    SET_GPR_U32(ctx, 31, 0x1EE408u);
    ctx->pc = 0x1EE404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE400u;
    // 0x1ee404: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1EE408u;
label_1ee408:
    // 0x1ee408: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ee40c:
    // 0x1ee40c: 0xc07aaa8  jal         func_1EAAA0
label_1ee410:
    if (ctx->pc == 0x1EE410u) {
        ctx->pc = 0x1EE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE40Cu;
        // 0x1ee410: 0x2484d140  addiu       $a0, $a0, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE414u;
        goto label_1ee414;
    }
    ctx->pc = 0x1EE40Cu;
    SET_GPR_U32(ctx, 31, 0x1EE414u);
    ctx->pc = 0x1EE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE40Cu;
    // 0x1ee410: 0x2484d140  addiu       $a0, $a0, -0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1EE414u;
label_1ee414:
    // 0x1ee414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee418:
    // 0x1ee418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee41c:
    // 0x1ee41c: 0xc07aa94  jal         func_1EAA50
label_1ee420:
    if (ctx->pc == 0x1EE420u) {
        ctx->pc = 0x1EE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE41Cu;
        // 0x1ee420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE424u;
        goto label_1ee424;
    }
    ctx->pc = 0x1EE41Cu;
    SET_GPR_U32(ctx, 31, 0x1EE424u);
    ctx->pc = 0x1EE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE41Cu;
    // 0x1ee420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1EE424u;
label_1ee424:
    // 0x1ee424: 0xc07ab08  jal         func_1EAC20
label_1ee428:
    if (ctx->pc == 0x1EE428u) {
        ctx->pc = 0x1EE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE424u;
        // 0x1ee428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE42Cu;
        goto label_1ee42c;
    }
    ctx->pc = 0x1EE424u;
    SET_GPR_U32(ctx, 31, 0x1EE42Cu);
    ctx->pc = 0x1EE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE424u;
    // 0x1ee428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1EE42Cu;
label_1ee42c:
    // 0x1ee42c: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee430:
    // 0x1ee430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee434:
    if (ctx->pc == 0x1EE434u) {
        ctx->pc = 0x1EE438u;
        goto label_1ee438;
    }
    ctx->pc = 0x1EE430u;
    {
        const bool branch_taken_0x1ee430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee430) {
            ctx->pc = 0x1EE440u;
            goto label_1ee440;
        }
    }
    ctx->pc = 0x1EE438u;
label_1ee438:
    // 0x1ee438: 0x10000040  b           . + 4 + (0x40 << 2)
label_1ee43c:
    if (ctx->pc == 0x1EE43Cu) {
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE440u;
        goto label_1ee440;
    }
    ctx->pc = 0x1EE438u;
    {
        const bool branch_taken_0x1ee438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee438) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1ee444:
    // 0x1ee444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee448:
    if (ctx->pc == 0x1EE448u) {
        ctx->pc = 0x1EE44Cu;
        goto label_1ee44c;
    }
    ctx->pc = 0x1EE444u;
    {
        const bool branch_taken_0x1ee444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee444) {
            ctx->pc = 0x1EE454u;
            goto label_1ee454;
        }
    }
    ctx->pc = 0x1EE44Cu;
label_1ee44c:
    // 0x1ee44c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ee450:
    if (ctx->pc == 0x1EE450u) {
        ctx->pc = 0x1EE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE44Cu;
        // 0x1ee450: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE454u;
        goto label_1ee454;
    }
    ctx->pc = 0x1EE44Cu;
    {
        const bool branch_taken_0x1ee44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE44Cu;
        // 0x1ee450: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee44c) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE454u;
label_1ee454:
    // 0x1ee454: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
label_1ee458:
    if (ctx->pc == 0x1EE458u) {
        ctx->pc = 0x1EE45Cu;
        goto label_1ee45c;
    }
    ctx->pc = 0x1EE454u;
    {
        const bool branch_taken_0x1ee454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee454) {
            ctx->pc = 0x1EE4CCu;
            goto label_1ee4cc;
        }
    }
    ctx->pc = 0x1EE45Cu;
label_1ee45c:
    // 0x1ee45c: 0xc07ab38  jal         func_1EACE0
label_1ee460:
    if (ctx->pc == 0x1EE460u) {
        ctx->pc = 0x1EE464u;
        goto label_1ee464;
    }
    ctx->pc = 0x1EE45Cu;
    SET_GPR_U32(ctx, 31, 0x1EE464u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE464u;
label_1ee464:
    // 0x1ee464: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee468:
    // 0x1ee468: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_1ee46c:
    if (ctx->pc == 0x1EE46Cu) {
        ctx->pc = 0x1EE470u;
        goto label_1ee470;
    }
    ctx->pc = 0x1EE468u;
    {
        const bool branch_taken_0x1ee468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee468) {
            ctx->pc = 0x1EE4A8u;
            goto label_1ee4a8;
        }
    }
    ctx->pc = 0x1EE470u;
label_1ee470:
    // 0x1ee470: 0xc07aaa4  jal         func_1EAA90
label_1ee474:
    if (ctx->pc == 0x1EE474u) {
        ctx->pc = 0x1EE478u;
        goto label_1ee478;
    }
    ctx->pc = 0x1EE470u;
    SET_GPR_U32(ctx, 31, 0x1EE478u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x1EE478u;
label_1ee478:
    // 0x1ee478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee47c:
    // 0x1ee47c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee480:
    // 0x1ee480: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1ee484:
    if (ctx->pc == 0x1EE484u) {
        ctx->pc = 0x1EE488u;
        goto label_1ee488;
    }
    ctx->pc = 0x1EE480u;
    {
        const bool branch_taken_0x1ee480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ee480) {
            ctx->pc = 0x1EE494u;
            goto label_1ee494;
        }
    }
    ctx->pc = 0x1EE488u;
label_1ee488:
    // 0x1ee488: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee48c:
    // 0x1ee48c: 0x16220027  bne         $s1, $v0, . + 4 + (0x27 << 2)
label_1ee490:
    if (ctx->pc == 0x1EE490u) {
        ctx->pc = 0x1EE494u;
        goto label_1ee494;
    }
    ctx->pc = 0x1EE48Cu;
    {
        const bool branch_taken_0x1ee48c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee48c) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE494u;
label_1ee494:
    // 0x1ee494: 0x0  nop
    ctx->pc = 0x1ee494u;
    // NOP
label_1ee498:
    // 0x1ee498: 0xc07ab18  jal         func_1EAC60
label_1ee49c:
    if (ctx->pc == 0x1EE49Cu) {
        ctx->pc = 0x1EE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE498u;
        // 0x1ee49c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4A0u;
        goto label_1ee4a0;
    }
    ctx->pc = 0x1EE498u;
    SET_GPR_U32(ctx, 31, 0x1EE4A0u);
    ctx->pc = 0x1EE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE498u;
    // 0x1ee49c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE4A0u;
label_1ee4a0:
    // 0x1ee4a0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1ee4a4:
    if (ctx->pc == 0x1EE4A4u) {
        ctx->pc = 0x1EE4A8u;
        goto label_1ee4a8;
    }
    ctx->pc = 0x1EE4A0u;
    {
        const bool branch_taken_0x1ee4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4a0) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4A8u;
label_1ee4a8:
    // 0x1ee4a8: 0xc07ab38  jal         func_1EACE0
label_1ee4ac:
    if (ctx->pc == 0x1EE4ACu) {
        ctx->pc = 0x1EE4B0u;
        goto label_1ee4b0;
    }
    ctx->pc = 0x1EE4A8u;
    SET_GPR_U32(ctx, 31, 0x1EE4B0u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE4B0u;
label_1ee4b0:
    // 0x1ee4b0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ee4b4:
    if (ctx->pc == 0x1EE4B4u) {
        ctx->pc = 0x1EE4B8u;
        goto label_1ee4b8;
    }
    ctx->pc = 0x1EE4B0u;
    {
        const bool branch_taken_0x1ee4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4b0) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4B8u;
label_1ee4b8:
    // 0x1ee4b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee4bc:
    // 0x1ee4bc: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
label_1ee4c0:
    if (ctx->pc == 0x1EE4C0u) {
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4C4u;
        goto label_1ee4c4;
    }
    ctx->pc = 0x1EE4BCu;
    {
        const bool branch_taken_0x1ee4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4bc) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE4C4u;
label_1ee4c4:
    // 0x1ee4c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ee4c8:
    if (ctx->pc == 0x1EE4C8u) {
        ctx->pc = 0x1EE4CCu;
        goto label_1ee4cc;
    }
    ctx->pc = 0x1EE4C4u;
    {
        const bool branch_taken_0x1ee4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4c4) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4CCu;
label_1ee4cc:
    // 0x1ee4cc: 0x0  nop
    ctx->pc = 0x1ee4ccu;
    // NOP
label_1ee4d0:
    // 0x1ee4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee4d4:
    // 0x1ee4d4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1ee4d8:
    if (ctx->pc == 0x1EE4D8u) {
        ctx->pc = 0x1EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4D4u;
        // 0x1ee4d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4DCu;
        goto label_1ee4dc;
    }
    ctx->pc = 0x1EE4D4u;
    {
        const bool branch_taken_0x1ee4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4D4u;
        // 0x1ee4d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4d4) {
            ctx->pc = 0x1EE4ECu;
            goto label_1ee4ec;
        }
    }
    ctx->pc = 0x1EE4DCu;
label_1ee4dc:
    // 0x1ee4dc: 0xc080f84  jal         func_203E10
label_1ee4e0:
    if (ctx->pc == 0x1EE4E0u) {
        ctx->pc = 0x1EE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4DCu;
        // 0x1ee4e0: 0xaf808f38  sw          $zero, -0x70C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4E4u;
        goto label_1ee4e4;
    }
    ctx->pc = 0x1EE4DCu;
    SET_GPR_U32(ctx, 31, 0x1EE4E4u);
    ctx->pc = 0x1EE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4DCu;
    // 0x1ee4e0: 0xaf808f38  sw          $zero, -0x70C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x1EE4E4u;
label_1ee4e4:
    // 0x1ee4e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ee4e8:
    if (ctx->pc == 0x1EE4E8u) {
        ctx->pc = 0x1EE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4E4u;
        // 0x1ee4e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4ECu;
        goto label_1ee4ec;
    }
    ctx->pc = 0x1EE4E4u;
    {
        const bool branch_taken_0x1ee4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4E4u;
        // 0x1ee4e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4e4) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4ECu;
label_1ee4ec:
    // 0x1ee4ec: 0x0  nop
    ctx->pc = 0x1ee4ecu;
    // NOP
label_1ee4f0:
    // 0x1ee4f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee4f4:
    // 0x1ee4f4: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1ee4f8:
    if (ctx->pc == 0x1EE4F8u) {
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4FCu;
        goto label_1ee4fc;
    }
    ctx->pc = 0x1EE4F4u;
    {
        const bool branch_taken_0x1ee4f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4f4) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4FCu;
label_1ee4fc:
    // 0x1ee4fc: 0xc080a24  jal         func_202890
label_1ee500:
    if (ctx->pc == 0x1EE500u) {
        ctx->pc = 0x1EE504u;
        goto label_1ee504;
    }
    ctx->pc = 0x1EE4FCu;
    SET_GPR_U32(ctx, 31, 0x1EE504u);
    ctx->pc = 0x202890u;
    { ctx->pc = 0x202890; return; }
    ctx->pc = 0x1EE504u;
label_1ee504:
    // 0x1ee504: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ee504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee508:
    // 0x1ee508: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1ee50c:
    if (ctx->pc == 0x1EE50Cu) {
        ctx->pc = 0x1EE510u;
        goto label_1ee510;
    }
    ctx->pc = 0x1EE508u;
    {
        const bool branch_taken_0x1ee508 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee508) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE510u;
label_1ee510:
    // 0x1ee510: 0xc080f70  jal         func_203DC0
label_1ee514:
    if (ctx->pc == 0x1EE514u) {
        ctx->pc = 0x1EE518u;
        goto label_1ee518;
    }
    ctx->pc = 0x1EE510u;
    SET_GPR_U32(ctx, 31, 0x1EE518u);
    ctx->pc = 0x203DC0u;
    { ctx->pc = 0x203dc0; return; }
    ctx->pc = 0x1EE518u;
label_1ee518:
    // 0x1ee518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee51c:
    // 0x1ee51c: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_1ee520:
    if (ctx->pc == 0x1EE520u) {
        ctx->pc = 0x1EE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE51Cu;
        // 0x1ee520: 0xaf828f38  sw          $v0, -0x70C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE524u;
        goto label_1ee524;
    }
    ctx->pc = 0x1EE51Cu;
    {
        const bool branch_taken_0x1ee51c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1EE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE51Cu;
        // 0x1ee520: 0xaf828f38  sw          $v0, -0x70C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee51c) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE524u;
label_1ee524:
    // 0x1ee524: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee528:
    if (ctx->pc == 0x1EE528u) {
        ctx->pc = 0x1EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE524u;
        // 0x1ee528: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE52Cu;
        goto label_1ee52c;
    }
    ctx->pc = 0x1EE524u;
    {
        const bool branch_taken_0x1ee524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE524u;
        // 0x1ee528: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee524) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE52Cu;
label_1ee52c:
    // 0x1ee52c: 0xc07b48c  jal         func_1ED230
label_1ee530:
    if (ctx->pc == 0x1EE530u) {
        ctx->pc = 0x1EE534u;
        goto label_1ee534;
    }
    ctx->pc = 0x1EE52Cu;
    SET_GPR_U32(ctx, 31, 0x1EE534u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EE534u;
label_1ee534:
    // 0x1ee534: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
label_1ee538:
    if (ctx->pc == 0x1EE538u) {
        ctx->pc = 0x1EE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE534u;
        // 0x1ee538: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE53Cu;
        goto label_1ee53c;
    }
    ctx->pc = 0x1EE534u;
    {
        const bool branch_taken_0x1ee534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE534u;
        // 0x1ee538: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee534) {
            ctx->pc = 0x1EE430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee430;
        }
    }
    ctx->pc = 0x1EE53Cu;
label_1ee53c:
    // 0x1ee53c: 0x0  nop
    ctx->pc = 0x1ee53cu;
    // NOP
label_1ee540:
    // 0x1ee540: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ee540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee544:
    // 0x1ee544: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ee544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee548:
    // 0x1ee548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee54c:
    // 0x1ee54c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee54cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee550:
    // 0x1ee550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee554:
    // 0x1ee554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee558:
    // 0x1ee558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee55c:
    // 0x1ee55c: 0x3e00008  jr          $ra
label_1ee560:
    if (ctx->pc == 0x1EE560u) {
        ctx->pc = 0x1EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE55Cu;
        // 0x1ee560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE564u;
        goto label_1ee564;
    }
    ctx->pc = 0x1EE55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE55Cu;
        // 0x1ee560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE564u;
label_1ee564:
    // 0x1ee564: 0x0  nop
    ctx->pc = 0x1ee564u;
    // NOP
label_1ee568:
    // 0x1ee568: 0x0  nop
    ctx->pc = 0x1ee568u;
    // NOP
label_1ee56c:
    // 0x1ee56c: 0x0  nop
    ctx->pc = 0x1ee56cu;
    // NOP
label_1ee570:
    // 0x1ee570: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ee570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ee574:
    // 0x1ee574: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1ee574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1ee578:
    // 0x1ee578: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1ee578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ee57c:
    // 0x1ee57c: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1ee580:
    // 0x1ee580: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1ee580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ee584:
    // 0x1ee584: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1ee588:
    // 0x1ee588: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ee58c:
    // 0x1ee58c: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x1ee58cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1ee590:
    // 0x1ee590: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ee590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ee594:
    // 0x1ee594: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1ee594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ee598:
    // 0x1ee598: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ee598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1ee59c:
    // 0x1ee59c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1ee59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1ee5a0:
    // 0x1ee5a0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ee5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ee5a4:
    // 0x1ee5a4: 0x90a40220  lbu         $a0, 0x220($a1)
    ctx->pc = 0x1ee5a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_1ee5a8:
    // 0x1ee5a8: 0x90a30221  lbu         $v1, 0x221($a1)
    ctx->pc = 0x1ee5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 545)));
label_1ee5ac:
    // 0x1ee5ac: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_1ee5b0:
    if (ctx->pc == 0x1EE5B0u) {
        ctx->pc = 0x1EE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5ACu;
        // 0x1ee5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5B4u;
        goto label_1ee5b4;
    }
    ctx->pc = 0x1EE5ACu;
    {
        const bool branch_taken_0x1ee5ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5ACu;
        // 0x1ee5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5ac) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5B4u;
label_1ee5b4:
    // 0x1ee5b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ee5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee5b8:
    // 0x1ee5b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1ee5bc:
    if (ctx->pc == 0x1EE5BCu) {
        ctx->pc = 0x1EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5B8u;
        // 0x1ee5bc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5C0u;
        goto label_1ee5c0;
    }
    ctx->pc = 0x1EE5B8u;
    {
        const bool branch_taken_0x1ee5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5B8u;
        // 0x1ee5bc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5b8) {
            ctx->pc = 0x1EE5C8u;
            goto label_1ee5c8;
        }
    }
    ctx->pc = 0x1EE5C0u;
label_1ee5c0:
    // 0x1ee5c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ee5c4:
    if (ctx->pc == 0x1EE5C4u) {
        ctx->pc = 0x1EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5C0u;
        // 0x1ee5c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5C8u;
        goto label_1ee5c8;
    }
    ctx->pc = 0x1EE5C0u;
    {
        const bool branch_taken_0x1ee5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5C0u;
        // 0x1ee5c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5c0) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5C8u;
label_1ee5c8:
    // 0x1ee5c8: 0x8ca3022c  lw          $v1, 0x22C($a1)
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 556)));
label_1ee5cc:
    // 0x1ee5cc: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1ee5d0:
    // 0x1ee5d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ee5d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee5d4:
    // 0x1ee5d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ee5d8:
    if (ctx->pc == 0x1EE5D8u) {
        ctx->pc = 0x1EE5DCu;
        goto label_1ee5dc;
    }
    ctx->pc = 0x1EE5D4u;
    {
        const bool branch_taken_0x1ee5d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5d4) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE5DCu;
label_1ee5dc:
    // 0x1ee5dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ee5e0:
    if (ctx->pc == 0x1EE5E0u) {
        ctx->pc = 0x1EE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5DCu;
        // 0x1ee5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5E4u;
        goto label_1ee5e4;
    }
    ctx->pc = 0x1EE5DCu;
    {
        const bool branch_taken_0x1ee5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5DCu;
        // 0x1ee5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5dc) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5E4u;
label_1ee5e4:
    // 0x1ee5e4: 0x8ca30228  lw          $v1, 0x228($a1)
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 552)));
label_1ee5e8:
    // 0x1ee5e8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ee5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee5ec:
    // 0x1ee5ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1ee5f0:
    if (ctx->pc == 0x1EE5F0u) {
        ctx->pc = 0x1EE5F4u;
        goto label_1ee5f4;
    }
    ctx->pc = 0x1EE5ECu;
    {
        const bool branch_taken_0x1ee5ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5ec) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5F4u;
label_1ee5f4:
    // 0x1ee5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee5f8:
    // 0x1ee5f8: 0x3e00008  jr          $ra
label_1ee5fc:
    if (ctx->pc == 0x1EE5FCu) {
        ctx->pc = 0x1EE600u;
        goto label_1ee600;
    }
    ctx->pc = 0x1EE5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE600u;
label_1ee600:
    // 0x1ee600: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ee604:
    // 0x1ee604: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee608:
    // 0x1ee608: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ee608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1ee60c:
    // 0x1ee60c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ee60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1ee610:
    // 0x1ee610: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1ee610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1ee614:
    // 0x1ee614: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ee614u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee618:
    // 0x1ee618: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ee618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1ee61c:
    // 0x1ee61c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ee61cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee620:
    // 0x1ee620: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ee620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1ee624:
    // 0x1ee624: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ee624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ee628:
    // 0x1ee628: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ee628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ee62c:
    // 0x1ee62c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ee62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ee630:
    // 0x1ee630: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ee630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ee634:
    // 0x1ee634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ee634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ee638:
    // 0x1ee638: 0xac202a00  sw          $zero, 0x2A00($at)
    ctx->pc = 0x1ee638u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10752), GPR_U32(ctx, 0));
label_1ee63c:
    // 0x1ee63c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee640:
    // 0x1ee640: 0xaf808f50  sw          $zero, -0x70B0($gp)
    ctx->pc = 0x1ee640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938448), GPR_U32(ctx, 0));
label_1ee644:
    // 0x1ee644: 0xac202a04  sw          $zero, 0x2A04($at)
    ctx->pc = 0x1ee644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10756), GPR_U32(ctx, 0));
label_1ee648:
    // 0x1ee648: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee64c:
    // 0x1ee64c: 0xac202a08  sw          $zero, 0x2A08($at)
    ctx->pc = 0x1ee64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10760), GPR_U32(ctx, 0));
label_1ee650:
    // 0x1ee650: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee654:
    // 0x1ee654: 0xa4202a0c  sh          $zero, 0x2A0C($at)
    ctx->pc = 0x1ee654u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10764), (uint16_t)GPR_U32(ctx, 0));
label_1ee658:
    // 0x1ee658: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee65c:
    // 0x1ee65c: 0xa4202a0e  sh          $zero, 0x2A0E($at)
    ctx->pc = 0x1ee65cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10766), (uint16_t)GPR_U32(ctx, 0));
label_1ee660:
    // 0x1ee660: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee664:
    // 0x1ee664: 0xac202a10  sw          $zero, 0x2A10($at)
    ctx->pc = 0x1ee664u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10768), GPR_U32(ctx, 0));
label_1ee668:
    // 0x1ee668: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee66c:
    // 0x1ee66c: 0xac202a14  sw          $zero, 0x2A14($at)
    ctx->pc = 0x1ee66cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10772), GPR_U32(ctx, 0));
label_1ee670:
    // 0x1ee670: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee674:
    // 0x1ee674: 0xac202a18  sw          $zero, 0x2A18($at)
    ctx->pc = 0x1ee674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10776), GPR_U32(ctx, 0));
label_1ee678:
    // 0x1ee678: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee67c:
    // 0x1ee67c: 0xa4202a1c  sh          $zero, 0x2A1C($at)
    ctx->pc = 0x1ee67cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10780), (uint16_t)GPR_U32(ctx, 0));
label_1ee680:
    // 0x1ee680: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee684:
    // 0x1ee684: 0xa4202a1e  sh          $zero, 0x2A1E($at)
    ctx->pc = 0x1ee684u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10782), (uint16_t)GPR_U32(ctx, 0));
label_1ee688:
    // 0x1ee688: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee68c:
    // 0x1ee68c: 0xac202a20  sw          $zero, 0x2A20($at)
    ctx->pc = 0x1ee68cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10784), GPR_U32(ctx, 0));
label_1ee690:
    // 0x1ee690: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee694:
    // 0x1ee694: 0xac202a24  sw          $zero, 0x2A24($at)
    ctx->pc = 0x1ee694u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10788), GPR_U32(ctx, 0));
label_1ee698:
    // 0x1ee698: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee69c:
    // 0x1ee69c: 0xac202a28  sw          $zero, 0x2A28($at)
    ctx->pc = 0x1ee69cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10792), GPR_U32(ctx, 0));
label_1ee6a0:
    // 0x1ee6a0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6a4:
    // 0x1ee6a4: 0xa4202a2c  sh          $zero, 0x2A2C($at)
    ctx->pc = 0x1ee6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10796), (uint16_t)GPR_U32(ctx, 0));
label_1ee6a8:
    // 0x1ee6a8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6ac:
    // 0x1ee6ac: 0xa4202a2e  sh          $zero, 0x2A2E($at)
    ctx->pc = 0x1ee6acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10798), (uint16_t)GPR_U32(ctx, 0));
label_1ee6b0:
    // 0x1ee6b0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6b4:
    // 0x1ee6b4: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x1ee6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
label_1ee6b8:
    // 0x1ee6b8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6bc:
    // 0x1ee6bc: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x1ee6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
label_1ee6c0:
    // 0x1ee6c0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6c4:
    // 0x1ee6c4: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x1ee6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
label_1ee6c8:
    // 0x1ee6c8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6cc:
    // 0x1ee6cc: 0xa4202a3c  sh          $zero, 0x2A3C($at)
    ctx->pc = 0x1ee6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10812), (uint16_t)GPR_U32(ctx, 0));
label_1ee6d0:
    // 0x1ee6d0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6d4:
    // 0x1ee6d4: 0xa4202a3e  sh          $zero, 0x2A3E($at)
    ctx->pc = 0x1ee6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10814), (uint16_t)GPR_U32(ctx, 0));
label_1ee6d8:
    // 0x1ee6d8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6dc:
    // 0x1ee6dc: 0xac202a40  sw          $zero, 0x2A40($at)
    ctx->pc = 0x1ee6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10816), GPR_U32(ctx, 0));
label_1ee6e0:
    // 0x1ee6e0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6e4:
    // 0x1ee6e4: 0xac202a44  sw          $zero, 0x2A44($at)
    ctx->pc = 0x1ee6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10820), GPR_U32(ctx, 0));
label_1ee6e8:
    // 0x1ee6e8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6ec:
    // 0x1ee6ec: 0xac202a48  sw          $zero, 0x2A48($at)
    ctx->pc = 0x1ee6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10824), GPR_U32(ctx, 0));
label_1ee6f0:
    // 0x1ee6f0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6f4:
    // 0x1ee6f4: 0xa4202a4c  sh          $zero, 0x2A4C($at)
    ctx->pc = 0x1ee6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10828), (uint16_t)GPR_U32(ctx, 0));
label_1ee6f8:
    // 0x1ee6f8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee6fc:
    // 0x1ee6fc: 0xa4202a4e  sh          $zero, 0x2A4E($at)
    ctx->pc = 0x1ee6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10830), (uint16_t)GPR_U32(ctx, 0));
label_1ee700:
    // 0x1ee700: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee704:
    // 0x1ee704: 0xac202a50  sw          $zero, 0x2A50($at)
    ctx->pc = 0x1ee704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10832), GPR_U32(ctx, 0));
label_1ee708:
    // 0x1ee708: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee70c:
    // 0x1ee70c: 0xac202a54  sw          $zero, 0x2A54($at)
    ctx->pc = 0x1ee70cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10836), GPR_U32(ctx, 0));
label_1ee710:
    // 0x1ee710: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee714:
    // 0x1ee714: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x1ee714u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10840), GPR_U32(ctx, 0));
label_1ee718:
    // 0x1ee718: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee71c:
    // 0x1ee71c: 0xa4202a5c  sh          $zero, 0x2A5C($at)
    ctx->pc = 0x1ee71cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10844), (uint16_t)GPR_U32(ctx, 0));
label_1ee720:
    // 0x1ee720: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee724:
    // 0x1ee724: 0xa4202a5e  sh          $zero, 0x2A5E($at)
    ctx->pc = 0x1ee724u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10846), (uint16_t)GPR_U32(ctx, 0));
label_1ee728:
    // 0x1ee728: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee72c:
    // 0x1ee72c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ee72cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee730:
    // 0x1ee730: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ee730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee734:
    // 0x1ee734: 0x0  nop
    ctx->pc = 0x1ee734u;
    // NOP
label_1ee738:
    // 0x1ee738: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ee73c:
    // 0x1ee73c: 0x24422a60  addiu       $v0, $v0, 0x2A60
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10848));
label_1ee740:
    // 0x1ee740: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1ee744:
    // 0x1ee744: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1ee748:
    // 0x1ee748: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ee748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ee74c:
    // 0x1ee74c: 0x578821  addu        $s1, $v0, $s7
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1ee750:
    // 0x1ee750: 0xc05e234  jal         func_1788D0
label_1ee754:
    if (ctx->pc == 0x1EE754u) {
        ctx->pc = 0x1EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE750u;
        // 0x1ee754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE758u;
        goto label_1ee758;
    }
    ctx->pc = 0x1EE750u;
    SET_GPR_U32(ctx, 31, 0x1EE758u);
    ctx->pc = 0x1EE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE750u;
    // 0x1ee754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EE750u, 0x1EE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE758u;
label_1ee758:
    // 0x1ee758: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee75c:
    // 0x1ee75c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1ee760:
    if (ctx->pc == 0x1EE760u) {
        ctx->pc = 0x1EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE75Cu;
        // 0x1ee760: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE764u;
        goto label_1ee764;
    }
    ctx->pc = 0x1EE75Cu;
    {
        const bool branch_taken_0x1ee75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE75Cu;
        // 0x1ee760: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee75c) {
            ctx->pc = 0x1EE76Cu;
            goto label_1ee76c;
        }
    }
    ctx->pc = 0x1EE764u;
label_1ee764:
    // 0x1ee764: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ee768:
    if (ctx->pc == 0x1EE768u) {
        ctx->pc = 0x1EE76Cu;
        goto label_1ee76c;
    }
    ctx->pc = 0x1EE764u;
    {
        const bool branch_taken_0x1ee764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee764) {
            ctx->pc = 0x1EE778u;
            goto label_1ee778;
        }
    }
    ctx->pc = 0x1EE76Cu;
label_1ee76c:
    // 0x1ee76c: 0x0  nop
    ctx->pc = 0x1ee76cu;
    // NOP
label_1ee770:
    // 0x1ee770: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ee774:
    if (ctx->pc == 0x1EE774u) {
        ctx->pc = 0x1EE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE770u;
        // 0x1ee774: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE778u;
        goto label_1ee778;
    }
    ctx->pc = 0x1EE770u;
    {
        const bool branch_taken_0x1ee770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE770u;
        // 0x1ee774: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee770) {
            ctx->pc = 0x1EE77Cu;
            goto label_1ee77c;
        }
    }
    ctx->pc = 0x1EE778u;
label_1ee778:
    // 0x1ee778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee77c:
    // 0x1ee77c: 0x0  nop
    ctx->pc = 0x1ee77cu;
    // NOP
label_1ee780:
    // 0x1ee780: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ee780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee784:
    // 0x1ee784: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ee784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ee788:
    // 0x1ee788: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee78c:
    // 0x1ee78c: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ee78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee790:
    // 0x1ee790: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1ee790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ee794:
    // 0x1ee794: 0xc07c1f4  jal         func_1F07D0
label_1ee798:
    if (ctx->pc == 0x1EE798u) {
        ctx->pc = 0x1EE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE794u;
        // 0x1ee798: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE79Cu;
        goto label_1ee79c;
    }
    ctx->pc = 0x1EE794u;
    SET_GPR_U32(ctx, 31, 0x1EE79Cu);
    ctx->pc = 0x1EE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE794u;
    // 0x1ee798: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x1EE79Cu;
label_1ee79c:
    // 0x1ee79c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee79cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7a0:
    // 0x1ee7a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7a4:
    // 0x1ee7a4: 0x0  nop
    ctx->pc = 0x1ee7a4u;
    // NOP
label_1ee7a8:
    // 0x1ee7a8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1ee7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ee7ac:
    // 0x1ee7ac: 0x244405b0  addiu       $a0, $v0, 0x5B0
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_1ee7b0:
    // 0x1ee7b0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ee7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ee7b4:
    // 0x1ee7b4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ee7b8:
    // 0x1ee7b8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ee7b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ee7bc:
    // 0x1ee7bc: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1ee7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ee7c0:
    // 0x1ee7c0: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee7c4:
    // 0x1ee7c4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee7c8:
    // 0x1ee7c8: 0xc05e060  jal         func_178180
label_1ee7cc:
    if (ctx->pc == 0x1EE7CCu) {
        ctx->pc = 0x1EE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7C8u;
        // 0x1ee7cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7D0u;
        goto label_1ee7d0;
    }
    ctx->pc = 0x1EE7C8u;
    SET_GPR_U32(ctx, 31, 0x1EE7D0u);
    ctx->pc = 0x1EE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7C8u;
    // 0x1ee7cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1EE7C8u, 0x1EE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE7D0u;
label_1ee7d0:
    // 0x1ee7d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ee7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ee7d4:
    // 0x1ee7d4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ee7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ee7d8:
    // 0x1ee7d8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1ee7dc:
    if (ctx->pc == 0x1EE7DCu) {
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D8u;
        // 0x1ee7dc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7E0u;
        goto label_1ee7e0;
    }
    ctx->pc = 0x1EE7D8u;
    {
        const bool branch_taken_0x1ee7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D8u;
        // 0x1ee7dc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d8) {
            ctx->pc = 0x1EE7A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee7a4;
        }
    }
    ctx->pc = 0x1EE7E0u;
label_1ee7e0:
    // 0x1ee7e0: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1ee7e4:
    // 0x1ee7e4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ee7e8:
    // 0x1ee7e8: 0xa2240618  sb          $a0, 0x618($s1)
    ctx->pc = 0x1ee7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1560), (uint8_t)GPR_U32(ctx, 4));
label_1ee7ec:
    // 0x1ee7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ee7f0:
    // 0x1ee7f0: 0xa2200619  sb          $zero, 0x619($s1)
    ctx->pc = 0x1ee7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1561), (uint8_t)GPR_U32(ctx, 0));
label_1ee7f4:
    // 0x1ee7f4: 0x26320710  addiu       $s2, $s1, 0x710
    ctx->pc = 0x1ee7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ee7f8:
    // 0x1ee7f8: 0xa220061a  sb          $zero, 0x61A($s1)
    ctx->pc = 0x1ee7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1562), (uint8_t)GPR_U32(ctx, 0));
label_1ee7fc:
    // 0x1ee7fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee800:
    // 0x1ee800: 0xa223061b  sb          $v1, 0x61B($s1)
    ctx->pc = 0x1ee800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1563), (uint8_t)GPR_U32(ctx, 3));
label_1ee804:
    // 0x1ee804: 0xae22061c  sw          $v0, 0x61C($s1)
    ctx->pc = 0x1ee804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 2));
label_1ee808:
    // 0x1ee808: 0xa2240628  sb          $a0, 0x628($s1)
    ctx->pc = 0x1ee808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1576), (uint8_t)GPR_U32(ctx, 4));
label_1ee80c:
    // 0x1ee80c: 0xa2200629  sb          $zero, 0x629($s1)
    ctx->pc = 0x1ee80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1577), (uint8_t)GPR_U32(ctx, 0));
label_1ee810:
    // 0x1ee810: 0xa220062a  sb          $zero, 0x62A($s1)
    ctx->pc = 0x1ee810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1578), (uint8_t)GPR_U32(ctx, 0));
label_1ee814:
    // 0x1ee814: 0xa223062b  sb          $v1, 0x62B($s1)
    ctx->pc = 0x1ee814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1579), (uint8_t)GPR_U32(ctx, 3));
label_1ee818:
    // 0x1ee818: 0xae22062c  sw          $v0, 0x62C($s1)
    ctx->pc = 0x1ee818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1580), GPR_U32(ctx, 2));
label_1ee81c:
    // 0x1ee81c: 0xa2240638  sb          $a0, 0x638($s1)
    ctx->pc = 0x1ee81cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1592), (uint8_t)GPR_U32(ctx, 4));
label_1ee820:
    // 0x1ee820: 0xa2200639  sb          $zero, 0x639($s1)
    ctx->pc = 0x1ee820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1593), (uint8_t)GPR_U32(ctx, 0));
label_1ee824:
    // 0x1ee824: 0xa220063a  sb          $zero, 0x63A($s1)
    ctx->pc = 0x1ee824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1594), (uint8_t)GPR_U32(ctx, 0));
label_1ee828:
    // 0x1ee828: 0xa223063b  sb          $v1, 0x63B($s1)
    ctx->pc = 0x1ee828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1595), (uint8_t)GPR_U32(ctx, 3));
label_1ee82c:
    // 0x1ee82c: 0xae22063c  sw          $v0, 0x63C($s1)
    ctx->pc = 0x1ee82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1596), GPR_U32(ctx, 2));
label_1ee830:
    // 0x1ee830: 0xa2240648  sb          $a0, 0x648($s1)
    ctx->pc = 0x1ee830u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 4));
label_1ee834:
    // 0x1ee834: 0xa2200649  sb          $zero, 0x649($s1)
    ctx->pc = 0x1ee834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 0));
label_1ee838:
    // 0x1ee838: 0xa220064a  sb          $zero, 0x64A($s1)
    ctx->pc = 0x1ee838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1610), (uint8_t)GPR_U32(ctx, 0));
label_1ee83c:
    // 0x1ee83c: 0xa223064b  sb          $v1, 0x64B($s1)
    ctx->pc = 0x1ee83cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 3));
label_1ee840:
    // 0x1ee840: 0xae22064c  sw          $v0, 0x64C($s1)
    ctx->pc = 0x1ee840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 2));
label_1ee844:
    // 0x1ee844: 0xa22006c8  sb          $zero, 0x6C8($s1)
    ctx->pc = 0x1ee844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1736), (uint8_t)GPR_U32(ctx, 0));
label_1ee848:
    // 0x1ee848: 0xa22406c9  sb          $a0, 0x6C9($s1)
    ctx->pc = 0x1ee848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1737), (uint8_t)GPR_U32(ctx, 4));
label_1ee84c:
    // 0x1ee84c: 0xa22006ca  sb          $zero, 0x6CA($s1)
    ctx->pc = 0x1ee84cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1738), (uint8_t)GPR_U32(ctx, 0));
label_1ee850:
    // 0x1ee850: 0xa22306cb  sb          $v1, 0x6CB($s1)
    ctx->pc = 0x1ee850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1739), (uint8_t)GPR_U32(ctx, 3));
label_1ee854:
    // 0x1ee854: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x1ee854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_1ee858:
    // 0x1ee858: 0xa22006d8  sb          $zero, 0x6D8($s1)
    ctx->pc = 0x1ee858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
label_1ee85c:
    // 0x1ee85c: 0xa22406d9  sb          $a0, 0x6D9($s1)
    ctx->pc = 0x1ee85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 4));
label_1ee860:
    // 0x1ee860: 0xa22006da  sb          $zero, 0x6DA($s1)
    ctx->pc = 0x1ee860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 0));
label_1ee864:
    // 0x1ee864: 0xa22306db  sb          $v1, 0x6DB($s1)
    ctx->pc = 0x1ee864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1755), (uint8_t)GPR_U32(ctx, 3));
label_1ee868:
    // 0x1ee868: 0xae2206dc  sw          $v0, 0x6DC($s1)
    ctx->pc = 0x1ee868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 2));
label_1ee86c:
    // 0x1ee86c: 0xa22006e8  sb          $zero, 0x6E8($s1)
    ctx->pc = 0x1ee86cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1ee870:
    // 0x1ee870: 0xa22406e9  sb          $a0, 0x6E9($s1)
    ctx->pc = 0x1ee870u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1769), (uint8_t)GPR_U32(ctx, 4));
label_1ee874:
    // 0x1ee874: 0xa22006ea  sb          $zero, 0x6EA($s1)
    ctx->pc = 0x1ee874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1770), (uint8_t)GPR_U32(ctx, 0));
label_1ee878:
    // 0x1ee878: 0xa22306eb  sb          $v1, 0x6EB($s1)
    ctx->pc = 0x1ee878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1771), (uint8_t)GPR_U32(ctx, 3));
label_1ee87c:
    // 0x1ee87c: 0xae2206ec  sw          $v0, 0x6EC($s1)
    ctx->pc = 0x1ee87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 2));
label_1ee880:
    // 0x1ee880: 0xa22006f8  sb          $zero, 0x6F8($s1)
    ctx->pc = 0x1ee880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1784), (uint8_t)GPR_U32(ctx, 0));
label_1ee884:
    // 0x1ee884: 0xa22406f9  sb          $a0, 0x6F9($s1)
    ctx->pc = 0x1ee884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1785), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1ee888u;
    return;
}

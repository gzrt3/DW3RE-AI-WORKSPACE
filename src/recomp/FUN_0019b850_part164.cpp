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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1eb1c0u: goto label_1eb1c0;
        case 0x1eb1c4u: goto label_1eb1c4;
        case 0x1eb1c8u: goto label_1eb1c8;
        case 0x1eb1ccu: goto label_1eb1cc;
        case 0x1eb1d0u: goto label_1eb1d0;
        case 0x1eb1d4u: goto label_1eb1d4;
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb1dcu: goto label_1eb1dc;
        case 0x1eb1e0u: goto label_1eb1e0;
        case 0x1eb1e4u: goto label_1eb1e4;
        case 0x1eb1e8u: goto label_1eb1e8;
        case 0x1eb1ecu: goto label_1eb1ec;
        case 0x1eb1f0u: goto label_1eb1f0;
        case 0x1eb1f4u: goto label_1eb1f4;
        case 0x1eb1f8u: goto label_1eb1f8;
        case 0x1eb1fcu: goto label_1eb1fc;
        case 0x1eb200u: goto label_1eb200;
        case 0x1eb204u: goto label_1eb204;
        case 0x1eb208u: goto label_1eb208;
        case 0x1eb20cu: goto label_1eb20c;
        case 0x1eb210u: goto label_1eb210;
        case 0x1eb214u: goto label_1eb214;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb21cu: goto label_1eb21c;
        case 0x1eb220u: goto label_1eb220;
        case 0x1eb224u: goto label_1eb224;
        case 0x1eb228u: goto label_1eb228;
        case 0x1eb22cu: goto label_1eb22c;
        case 0x1eb230u: goto label_1eb230;
        case 0x1eb234u: goto label_1eb234;
        case 0x1eb238u: goto label_1eb238;
        case 0x1eb23cu: goto label_1eb23c;
        case 0x1eb240u: goto label_1eb240;
        case 0x1eb244u: goto label_1eb244;
        case 0x1eb248u: goto label_1eb248;
        case 0x1eb24cu: goto label_1eb24c;
        case 0x1eb250u: goto label_1eb250;
        case 0x1eb254u: goto label_1eb254;
        case 0x1eb258u: goto label_1eb258;
        case 0x1eb25cu: goto label_1eb25c;
        case 0x1eb260u: goto label_1eb260;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb268u: goto label_1eb268;
        case 0x1eb26cu: goto label_1eb26c;
        case 0x1eb270u: goto label_1eb270;
        case 0x1eb274u: goto label_1eb274;
        case 0x1eb278u: goto label_1eb278;
        case 0x1eb27cu: goto label_1eb27c;
        case 0x1eb280u: goto label_1eb280;
        case 0x1eb284u: goto label_1eb284;
        case 0x1eb288u: goto label_1eb288;
        case 0x1eb28cu: goto label_1eb28c;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb294u: goto label_1eb294;
        case 0x1eb298u: goto label_1eb298;
        case 0x1eb29cu: goto label_1eb29c;
        case 0x1eb2a0u: goto label_1eb2a0;
        case 0x1eb2a4u: goto label_1eb2a4;
        case 0x1eb2a8u: goto label_1eb2a8;
        case 0x1eb2acu: goto label_1eb2ac;
        case 0x1eb2b0u: goto label_1eb2b0;
        case 0x1eb2b4u: goto label_1eb2b4;
        case 0x1eb2b8u: goto label_1eb2b8;
        case 0x1eb2bcu: goto label_1eb2bc;
        case 0x1eb2c0u: goto label_1eb2c0;
        case 0x1eb2c4u: goto label_1eb2c4;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2d0u: goto label_1eb2d0;
        case 0x1eb2d4u: goto label_1eb2d4;
        case 0x1eb2d8u: goto label_1eb2d8;
        case 0x1eb2dcu: goto label_1eb2dc;
        case 0x1eb2e0u: goto label_1eb2e0;
        case 0x1eb2e4u: goto label_1eb2e4;
        case 0x1eb2e8u: goto label_1eb2e8;
        case 0x1eb2ecu: goto label_1eb2ec;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb2f4u: goto label_1eb2f4;
        case 0x1eb2f8u: goto label_1eb2f8;
        case 0x1eb2fcu: goto label_1eb2fc;
        case 0x1eb300u: goto label_1eb300;
        case 0x1eb304u: goto label_1eb304;
        case 0x1eb308u: goto label_1eb308;
        case 0x1eb30cu: goto label_1eb30c;
        case 0x1eb310u: goto label_1eb310;
        case 0x1eb314u: goto label_1eb314;
        case 0x1eb318u: goto label_1eb318;
        case 0x1eb31cu: goto label_1eb31c;
        case 0x1eb320u: goto label_1eb320;
        case 0x1eb324u: goto label_1eb324;
        case 0x1eb328u: goto label_1eb328;
        case 0x1eb32cu: goto label_1eb32c;
        case 0x1eb330u: goto label_1eb330;
        case 0x1eb334u: goto label_1eb334;
        case 0x1eb338u: goto label_1eb338;
        case 0x1eb33cu: goto label_1eb33c;
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb344u: goto label_1eb344;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb34cu: goto label_1eb34c;
        case 0x1eb350u: goto label_1eb350;
        case 0x1eb354u: goto label_1eb354;
        case 0x1eb358u: goto label_1eb358;
        case 0x1eb35cu: goto label_1eb35c;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb364u: goto label_1eb364;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb36cu: goto label_1eb36c;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb378u: goto label_1eb378;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb380u: goto label_1eb380;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb38cu: goto label_1eb38c;
        case 0x1eb390u: goto label_1eb390;
        case 0x1eb394u: goto label_1eb394;
        case 0x1eb398u: goto label_1eb398;
        case 0x1eb39cu: goto label_1eb39c;
        case 0x1eb3a0u: goto label_1eb3a0;
        case 0x1eb3a4u: goto label_1eb3a4;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3acu: goto label_1eb3ac;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb3b4u: goto label_1eb3b4;
        case 0x1eb3b8u: goto label_1eb3b8;
        case 0x1eb3bcu: goto label_1eb3bc;
        case 0x1eb3c0u: goto label_1eb3c0;
        case 0x1eb3c4u: goto label_1eb3c4;
        case 0x1eb3c8u: goto label_1eb3c8;
        case 0x1eb3ccu: goto label_1eb3cc;
        case 0x1eb3d0u: goto label_1eb3d0;
        case 0x1eb3d4u: goto label_1eb3d4;
        case 0x1eb3d8u: goto label_1eb3d8;
        case 0x1eb3dcu: goto label_1eb3dc;
        case 0x1eb3e0u: goto label_1eb3e0;
        case 0x1eb3e4u: goto label_1eb3e4;
        case 0x1eb3e8u: goto label_1eb3e8;
        case 0x1eb3ecu: goto label_1eb3ec;
        case 0x1eb3f0u: goto label_1eb3f0;
        case 0x1eb3f4u: goto label_1eb3f4;
        case 0x1eb3f8u: goto label_1eb3f8;
        case 0x1eb3fcu: goto label_1eb3fc;
        case 0x1eb400u: goto label_1eb400;
        case 0x1eb404u: goto label_1eb404;
        case 0x1eb408u: goto label_1eb408;
        case 0x1eb40cu: goto label_1eb40c;
        case 0x1eb410u: goto label_1eb410;
        case 0x1eb414u: goto label_1eb414;
        case 0x1eb418u: goto label_1eb418;
        case 0x1eb41cu: goto label_1eb41c;
        case 0x1eb420u: goto label_1eb420;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb428u: goto label_1eb428;
        case 0x1eb42cu: goto label_1eb42c;
        case 0x1eb430u: goto label_1eb430;
        case 0x1eb434u: goto label_1eb434;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb43cu: goto label_1eb43c;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb444u: goto label_1eb444;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb44cu: goto label_1eb44c;
        case 0x1eb450u: goto label_1eb450;
        case 0x1eb454u: goto label_1eb454;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb45cu: goto label_1eb45c;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb464u: goto label_1eb464;
        case 0x1eb468u: goto label_1eb468;
        case 0x1eb46cu: goto label_1eb46c;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb474u: goto label_1eb474;
        case 0x1eb478u: goto label_1eb478;
        case 0x1eb47cu: goto label_1eb47c;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb484u: goto label_1eb484;
        case 0x1eb488u: goto label_1eb488;
        case 0x1eb48cu: goto label_1eb48c;
        case 0x1eb490u: goto label_1eb490;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb49cu: goto label_1eb49c;
        case 0x1eb4a0u: goto label_1eb4a0;
        case 0x1eb4a4u: goto label_1eb4a4;
        case 0x1eb4a8u: goto label_1eb4a8;
        case 0x1eb4acu: goto label_1eb4ac;
        case 0x1eb4b0u: goto label_1eb4b0;
        case 0x1eb4b4u: goto label_1eb4b4;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb4bcu: goto label_1eb4bc;
        case 0x1eb4c0u: goto label_1eb4c0;
        case 0x1eb4c4u: goto label_1eb4c4;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb4ccu: goto label_1eb4cc;
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb4d4u: goto label_1eb4d4;
        case 0x1eb4d8u: goto label_1eb4d8;
        case 0x1eb4dcu: goto label_1eb4dc;
        case 0x1eb4e0u: goto label_1eb4e0;
        case 0x1eb4e4u: goto label_1eb4e4;
        case 0x1eb4e8u: goto label_1eb4e8;
        case 0x1eb4ecu: goto label_1eb4ec;
        case 0x1eb4f0u: goto label_1eb4f0;
        case 0x1eb4f4u: goto label_1eb4f4;
        case 0x1eb4f8u: goto label_1eb4f8;
        case 0x1eb4fcu: goto label_1eb4fc;
        case 0x1eb500u: goto label_1eb500;
        case 0x1eb504u: goto label_1eb504;
        case 0x1eb508u: goto label_1eb508;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb510u: goto label_1eb510;
        case 0x1eb514u: goto label_1eb514;
        case 0x1eb518u: goto label_1eb518;
        case 0x1eb51cu: goto label_1eb51c;
        case 0x1eb520u: goto label_1eb520;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb534u: goto label_1eb534;
        case 0x1eb538u: goto label_1eb538;
        case 0x1eb53cu: goto label_1eb53c;
        case 0x1eb540u: goto label_1eb540;
        case 0x1eb544u: goto label_1eb544;
        case 0x1eb548u: goto label_1eb548;
        case 0x1eb54cu: goto label_1eb54c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb55cu: goto label_1eb55c;
        case 0x1eb560u: goto label_1eb560;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb56cu: goto label_1eb56c;
        case 0x1eb570u: goto label_1eb570;
        case 0x1eb574u: goto label_1eb574;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb580u: goto label_1eb580;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb58cu: goto label_1eb58c;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb594u: goto label_1eb594;
        case 0x1eb598u: goto label_1eb598;
        case 0x1eb59cu: goto label_1eb59c;
        case 0x1eb5a0u: goto label_1eb5a0;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5a8u: goto label_1eb5a8;
        case 0x1eb5acu: goto label_1eb5ac;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb5b8u: goto label_1eb5b8;
        case 0x1eb5bcu: goto label_1eb5bc;
        case 0x1eb5c0u: goto label_1eb5c0;
        case 0x1eb5c4u: goto label_1eb5c4;
        case 0x1eb5c8u: goto label_1eb5c8;
        case 0x1eb5ccu: goto label_1eb5cc;
        case 0x1eb5d0u: goto label_1eb5d0;
        case 0x1eb5d4u: goto label_1eb5d4;
        case 0x1eb5d8u: goto label_1eb5d8;
        case 0x1eb5dcu: goto label_1eb5dc;
        case 0x1eb5e0u: goto label_1eb5e0;
        case 0x1eb5e4u: goto label_1eb5e4;
        case 0x1eb5e8u: goto label_1eb5e8;
        case 0x1eb5ecu: goto label_1eb5ec;
        case 0x1eb5f0u: goto label_1eb5f0;
        case 0x1eb5f4u: goto label_1eb5f4;
        case 0x1eb5f8u: goto label_1eb5f8;
        case 0x1eb5fcu: goto label_1eb5fc;
        case 0x1eb600u: goto label_1eb600;
        case 0x1eb604u: goto label_1eb604;
        case 0x1eb608u: goto label_1eb608;
        case 0x1eb60cu: goto label_1eb60c;
        case 0x1eb610u: goto label_1eb610;
        case 0x1eb614u: goto label_1eb614;
        case 0x1eb618u: goto label_1eb618;
        case 0x1eb61cu: goto label_1eb61c;
        case 0x1eb620u: goto label_1eb620;
        case 0x1eb624u: goto label_1eb624;
        case 0x1eb628u: goto label_1eb628;
        case 0x1eb62cu: goto label_1eb62c;
        case 0x1eb630u: goto label_1eb630;
        case 0x1eb634u: goto label_1eb634;
        case 0x1eb638u: goto label_1eb638;
        case 0x1eb63cu: goto label_1eb63c;
        case 0x1eb640u: goto label_1eb640;
        case 0x1eb644u: goto label_1eb644;
        case 0x1eb648u: goto label_1eb648;
        case 0x1eb64cu: goto label_1eb64c;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb654u: goto label_1eb654;
        case 0x1eb658u: goto label_1eb658;
        case 0x1eb65cu: goto label_1eb65c;
        case 0x1eb660u: goto label_1eb660;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb668u: goto label_1eb668;
        case 0x1eb66cu: goto label_1eb66c;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb674u: goto label_1eb674;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb680u: goto label_1eb680;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb688u: goto label_1eb688;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb690u: goto label_1eb690;
        case 0x1eb694u: goto label_1eb694;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb69cu: goto label_1eb69c;
        case 0x1eb6a0u: goto label_1eb6a0;
        case 0x1eb6a4u: goto label_1eb6a4;
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6acu: goto label_1eb6ac;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6b8u: goto label_1eb6b8;
        case 0x1eb6bcu: goto label_1eb6bc;
        case 0x1eb6c0u: goto label_1eb6c0;
        case 0x1eb6c4u: goto label_1eb6c4;
        case 0x1eb6c8u: goto label_1eb6c8;
        case 0x1eb6ccu: goto label_1eb6cc;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6d4u: goto label_1eb6d4;
        case 0x1eb6d8u: goto label_1eb6d8;
        case 0x1eb6dcu: goto label_1eb6dc;
        case 0x1eb6e0u: goto label_1eb6e0;
        case 0x1eb6e4u: goto label_1eb6e4;
        case 0x1eb6e8u: goto label_1eb6e8;
        case 0x1eb6ecu: goto label_1eb6ec;
        case 0x1eb6f0u: goto label_1eb6f0;
        case 0x1eb6f4u: goto label_1eb6f4;
        case 0x1eb6f8u: goto label_1eb6f8;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb700u: goto label_1eb700;
        case 0x1eb704u: goto label_1eb704;
        case 0x1eb708u: goto label_1eb708;
        case 0x1eb70cu: goto label_1eb70c;
        case 0x1eb710u: goto label_1eb710;
        case 0x1eb714u: goto label_1eb714;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb71cu: goto label_1eb71c;
        case 0x1eb720u: goto label_1eb720;
        case 0x1eb724u: goto label_1eb724;
        case 0x1eb728u: goto label_1eb728;
        case 0x1eb72cu: goto label_1eb72c;
        case 0x1eb730u: goto label_1eb730;
        case 0x1eb734u: goto label_1eb734;
        case 0x1eb738u: goto label_1eb738;
        case 0x1eb73cu: goto label_1eb73c;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb744u: goto label_1eb744;
        case 0x1eb748u: goto label_1eb748;
        case 0x1eb74cu: goto label_1eb74c;
        case 0x1eb750u: goto label_1eb750;
        case 0x1eb754u: goto label_1eb754;
        case 0x1eb758u: goto label_1eb758;
        case 0x1eb75cu: goto label_1eb75c;
        case 0x1eb760u: goto label_1eb760;
        case 0x1eb764u: goto label_1eb764;
        case 0x1eb768u: goto label_1eb768;
        case 0x1eb76cu: goto label_1eb76c;
        case 0x1eb770u: goto label_1eb770;
        case 0x1eb774u: goto label_1eb774;
        case 0x1eb778u: goto label_1eb778;
        case 0x1eb77cu: goto label_1eb77c;
        case 0x1eb780u: goto label_1eb780;
        case 0x1eb784u: goto label_1eb784;
        case 0x1eb788u: goto label_1eb788;
        case 0x1eb78cu: goto label_1eb78c;
        case 0x1eb790u: goto label_1eb790;
        case 0x1eb794u: goto label_1eb794;
        case 0x1eb798u: goto label_1eb798;
        case 0x1eb79cu: goto label_1eb79c;
        case 0x1eb7a0u: goto label_1eb7a0;
        case 0x1eb7a4u: goto label_1eb7a4;
        case 0x1eb7a8u: goto label_1eb7a8;
        case 0x1eb7acu: goto label_1eb7ac;
        case 0x1eb7b0u: goto label_1eb7b0;
        case 0x1eb7b4u: goto label_1eb7b4;
        case 0x1eb7b8u: goto label_1eb7b8;
        case 0x1eb7bcu: goto label_1eb7bc;
        case 0x1eb7c0u: goto label_1eb7c0;
        case 0x1eb7c4u: goto label_1eb7c4;
        case 0x1eb7c8u: goto label_1eb7c8;
        case 0x1eb7ccu: goto label_1eb7cc;
        case 0x1eb7d0u: goto label_1eb7d0;
        case 0x1eb7d4u: goto label_1eb7d4;
        case 0x1eb7d8u: goto label_1eb7d8;
        case 0x1eb7dcu: goto label_1eb7dc;
        case 0x1eb7e0u: goto label_1eb7e0;
        case 0x1eb7e4u: goto label_1eb7e4;
        case 0x1eb7e8u: goto label_1eb7e8;
        case 0x1eb7ecu: goto label_1eb7ec;
        case 0x1eb7f0u: goto label_1eb7f0;
        case 0x1eb7f4u: goto label_1eb7f4;
        case 0x1eb7f8u: goto label_1eb7f8;
        case 0x1eb7fcu: goto label_1eb7fc;
        case 0x1eb800u: goto label_1eb800;
        case 0x1eb804u: goto label_1eb804;
        case 0x1eb808u: goto label_1eb808;
        case 0x1eb80cu: goto label_1eb80c;
        case 0x1eb810u: goto label_1eb810;
        case 0x1eb814u: goto label_1eb814;
        case 0x1eb818u: goto label_1eb818;
        case 0x1eb81cu: goto label_1eb81c;
        case 0x1eb820u: goto label_1eb820;
        case 0x1eb824u: goto label_1eb824;
        case 0x1eb828u: goto label_1eb828;
        case 0x1eb82cu: goto label_1eb82c;
        case 0x1eb830u: goto label_1eb830;
        case 0x1eb834u: goto label_1eb834;
        case 0x1eb838u: goto label_1eb838;
        case 0x1eb83cu: goto label_1eb83c;
        case 0x1eb840u: goto label_1eb840;
        case 0x1eb844u: goto label_1eb844;
        case 0x1eb848u: goto label_1eb848;
        case 0x1eb84cu: goto label_1eb84c;
        case 0x1eb850u: goto label_1eb850;
        case 0x1eb854u: goto label_1eb854;
        case 0x1eb858u: goto label_1eb858;
        case 0x1eb85cu: goto label_1eb85c;
        case 0x1eb860u: goto label_1eb860;
        case 0x1eb864u: goto label_1eb864;
        case 0x1eb868u: goto label_1eb868;
        case 0x1eb86cu: goto label_1eb86c;
        case 0x1eb870u: goto label_1eb870;
        case 0x1eb874u: goto label_1eb874;
        case 0x1eb878u: goto label_1eb878;
        case 0x1eb87cu: goto label_1eb87c;
        case 0x1eb880u: goto label_1eb880;
        case 0x1eb884u: goto label_1eb884;
        case 0x1eb888u: goto label_1eb888;
        case 0x1eb88cu: goto label_1eb88c;
        case 0x1eb890u: goto label_1eb890;
        case 0x1eb894u: goto label_1eb894;
        case 0x1eb898u: goto label_1eb898;
        case 0x1eb89cu: goto label_1eb89c;
        case 0x1eb8a0u: goto label_1eb8a0;
        case 0x1eb8a4u: goto label_1eb8a4;
        case 0x1eb8a8u: goto label_1eb8a8;
        case 0x1eb8acu: goto label_1eb8ac;
        case 0x1eb8b0u: goto label_1eb8b0;
        case 0x1eb8b4u: goto label_1eb8b4;
        case 0x1eb8b8u: goto label_1eb8b8;
        case 0x1eb8bcu: goto label_1eb8bc;
        case 0x1eb8c0u: goto label_1eb8c0;
        case 0x1eb8c4u: goto label_1eb8c4;
        case 0x1eb8c8u: goto label_1eb8c8;
        case 0x1eb8ccu: goto label_1eb8cc;
        case 0x1eb8d0u: goto label_1eb8d0;
        case 0x1eb8d4u: goto label_1eb8d4;
        case 0x1eb8d8u: goto label_1eb8d8;
        case 0x1eb8dcu: goto label_1eb8dc;
        case 0x1eb8e0u: goto label_1eb8e0;
        case 0x1eb8e4u: goto label_1eb8e4;
        case 0x1eb8e8u: goto label_1eb8e8;
        case 0x1eb8ecu: goto label_1eb8ec;
        case 0x1eb8f0u: goto label_1eb8f0;
        case 0x1eb8f4u: goto label_1eb8f4;
        case 0x1eb8f8u: goto label_1eb8f8;
        case 0x1eb8fcu: goto label_1eb8fc;
        case 0x1eb900u: goto label_1eb900;
        case 0x1eb904u: goto label_1eb904;
        case 0x1eb908u: goto label_1eb908;
        case 0x1eb90cu: goto label_1eb90c;
        case 0x1eb910u: goto label_1eb910;
        case 0x1eb914u: goto label_1eb914;
        case 0x1eb918u: goto label_1eb918;
        case 0x1eb91cu: goto label_1eb91c;
        case 0x1eb920u: goto label_1eb920;
        case 0x1eb924u: goto label_1eb924;
        case 0x1eb928u: goto label_1eb928;
        case 0x1eb92cu: goto label_1eb92c;
        case 0x1eb930u: goto label_1eb930;
        case 0x1eb934u: goto label_1eb934;
        case 0x1eb938u: goto label_1eb938;
        case 0x1eb93cu: goto label_1eb93c;
        case 0x1eb940u: goto label_1eb940;
        case 0x1eb944u: goto label_1eb944;
        case 0x1eb948u: goto label_1eb948;
        case 0x1eb94cu: goto label_1eb94c;
        case 0x1eb950u: goto label_1eb950;
        case 0x1eb954u: goto label_1eb954;
        case 0x1eb958u: goto label_1eb958;
        case 0x1eb95cu: goto label_1eb95c;
        case 0x1eb960u: goto label_1eb960;
        case 0x1eb964u: goto label_1eb964;
        case 0x1eb968u: goto label_1eb968;
        case 0x1eb96cu: goto label_1eb96c;
        case 0x1eb970u: goto label_1eb970;
        case 0x1eb974u: goto label_1eb974;
        case 0x1eb978u: goto label_1eb978;
        case 0x1eb97cu: goto label_1eb97c;
        case 0x1eb980u: goto label_1eb980;
        case 0x1eb984u: goto label_1eb984;
        case 0x1eb988u: goto label_1eb988;
        case 0x1eb98cu: goto label_1eb98c;
        default: return;
    }

label_1eb1c0:
    // 0x1eb1c0: 0xae4201c4  sw          $v0, 0x1C4($s2)
    ctx->pc = 0x1eb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
label_1eb1c4:
    // 0x1eb1c4: 0xa2430260  sb          $v1, 0x260($s2)
    ctx->pc = 0x1eb1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 608), (uint8_t)GPR_U32(ctx, 3));
label_1eb1c8:
    // 0x1eb1c8: 0xa2430261  sb          $v1, 0x261($s2)
    ctx->pc = 0x1eb1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 609), (uint8_t)GPR_U32(ctx, 3));
label_1eb1cc:
    // 0x1eb1cc: 0xa2430262  sb          $v1, 0x262($s2)
    ctx->pc = 0x1eb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 610), (uint8_t)GPR_U32(ctx, 3));
label_1eb1d0:
    // 0x1eb1d0: 0xa2430263  sb          $v1, 0x263($s2)
    ctx->pc = 0x1eb1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 611), (uint8_t)GPR_U32(ctx, 3));
label_1eb1d4:
    // 0x1eb1d4: 0xae420264  sw          $v0, 0x264($s2)
    ctx->pc = 0x1eb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 2));
label_1eb1d8:
    // 0x1eb1d8: 0xa2430300  sb          $v1, 0x300($s2)
    ctx->pc = 0x1eb1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 3));
label_1eb1dc:
    // 0x1eb1dc: 0xa2430301  sb          $v1, 0x301($s2)
    ctx->pc = 0x1eb1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 769), (uint8_t)GPR_U32(ctx, 3));
label_1eb1e0:
    // 0x1eb1e0: 0xa2430302  sb          $v1, 0x302($s2)
    ctx->pc = 0x1eb1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 770), (uint8_t)GPR_U32(ctx, 3));
label_1eb1e4:
    // 0x1eb1e4: 0xa2430303  sb          $v1, 0x303($s2)
    ctx->pc = 0x1eb1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 771), (uint8_t)GPR_U32(ctx, 3));
label_1eb1e8:
    // 0x1eb1e8: 0xae420304  sw          $v0, 0x304($s2)
    ctx->pc = 0x1eb1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 2));
label_1eb1ec:
    // 0x1eb1ec: 0xa24303a0  sb          $v1, 0x3A0($s2)
    ctx->pc = 0x1eb1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 928), (uint8_t)GPR_U32(ctx, 3));
label_1eb1f0:
    // 0x1eb1f0: 0xa24303a1  sb          $v1, 0x3A1($s2)
    ctx->pc = 0x1eb1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 929), (uint8_t)GPR_U32(ctx, 3));
label_1eb1f4:
    // 0x1eb1f4: 0xa24303a2  sb          $v1, 0x3A2($s2)
    ctx->pc = 0x1eb1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 930), (uint8_t)GPR_U32(ctx, 3));
label_1eb1f8:
    // 0x1eb1f8: 0xa24303a3  sb          $v1, 0x3A3($s2)
    ctx->pc = 0x1eb1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 931), (uint8_t)GPR_U32(ctx, 3));
label_1eb1fc:
    // 0x1eb1fc: 0xae4203a4  sw          $v0, 0x3A4($s2)
    ctx->pc = 0x1eb1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 2));
label_1eb200:
    // 0x1eb200: 0xa2430440  sb          $v1, 0x440($s2)
    ctx->pc = 0x1eb200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1088), (uint8_t)GPR_U32(ctx, 3));
label_1eb204:
    // 0x1eb204: 0xa2430441  sb          $v1, 0x441($s2)
    ctx->pc = 0x1eb204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1089), (uint8_t)GPR_U32(ctx, 3));
label_1eb208:
    // 0x1eb208: 0xa2430442  sb          $v1, 0x442($s2)
    ctx->pc = 0x1eb208u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1090), (uint8_t)GPR_U32(ctx, 3));
label_1eb20c:
    // 0x1eb20c: 0xa2430443  sb          $v1, 0x443($s2)
    ctx->pc = 0x1eb20cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1eb210:
    // 0x1eb210: 0xae420444  sw          $v0, 0x444($s2)
    ctx->pc = 0x1eb210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1092), GPR_U32(ctx, 2));
label_1eb214:
    // 0x1eb214: 0xa24304e0  sb          $v1, 0x4E0($s2)
    ctx->pc = 0x1eb214u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1248), (uint8_t)GPR_U32(ctx, 3));
label_1eb218:
    // 0x1eb218: 0xa24304e1  sb          $v1, 0x4E1($s2)
    ctx->pc = 0x1eb218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1249), (uint8_t)GPR_U32(ctx, 3));
label_1eb21c:
    // 0x1eb21c: 0xa24304e2  sb          $v1, 0x4E2($s2)
    ctx->pc = 0x1eb21cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1250), (uint8_t)GPR_U32(ctx, 3));
label_1eb220:
    // 0x1eb220: 0xa24304e3  sb          $v1, 0x4E3($s2)
    ctx->pc = 0x1eb220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1251), (uint8_t)GPR_U32(ctx, 3));
label_1eb224:
    // 0x1eb224: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1eb228:
    if (ctx->pc == 0x1EB228u) {
        ctx->pc = 0x1EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB224u;
        // 0x1eb228: 0xae4204e4  sw          $v0, 0x4E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB22Cu;
        goto label_1eb22c;
    }
    ctx->pc = 0x1EB224u;
    {
        const bool branch_taken_0x1eb224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB224u;
        // 0x1eb228: 0xae4204e4  sw          $v0, 0x4E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb224) {
            ctx->pc = 0x1EB2DCu;
            goto label_1eb2dc;
        }
    }
    ctx->pc = 0x1EB22Cu;
label_1eb22c:
    // 0x1eb22c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1eb230:
    // 0x1eb230: 0xa2460080  sb          $a2, 0x80($s2)
    ctx->pc = 0x1eb230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 6));
label_1eb234:
    // 0x1eb234: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1eb234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1eb238:
    // 0x1eb238: 0xa2450081  sb          $a1, 0x81($s2)
    ctx->pc = 0x1eb238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 5));
label_1eb23c:
    // 0x1eb23c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eb240:
    // 0x1eb240: 0xa2440082  sb          $a0, 0x82($s2)
    ctx->pc = 0x1eb240u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 4));
label_1eb244:
    // 0x1eb244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1eb248:
    // 0x1eb248: 0xa2430083  sb          $v1, 0x83($s2)
    ctx->pc = 0x1eb248u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 3));
label_1eb24c:
    // 0x1eb24c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x1eb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_1eb250:
    // 0x1eb250: 0xa2460120  sb          $a2, 0x120($s2)
    ctx->pc = 0x1eb250u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 288), (uint8_t)GPR_U32(ctx, 6));
label_1eb254:
    // 0x1eb254: 0xa2450121  sb          $a1, 0x121($s2)
    ctx->pc = 0x1eb254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 289), (uint8_t)GPR_U32(ctx, 5));
label_1eb258:
    // 0x1eb258: 0xa2440122  sb          $a0, 0x122($s2)
    ctx->pc = 0x1eb258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 290), (uint8_t)GPR_U32(ctx, 4));
label_1eb25c:
    // 0x1eb25c: 0xa2430123  sb          $v1, 0x123($s2)
    ctx->pc = 0x1eb25cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 291), (uint8_t)GPR_U32(ctx, 3));
label_1eb260:
    // 0x1eb260: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x1eb260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
label_1eb264:
    // 0x1eb264: 0xa24601c0  sb          $a2, 0x1C0($s2)
    ctx->pc = 0x1eb264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 448), (uint8_t)GPR_U32(ctx, 6));
label_1eb268:
    // 0x1eb268: 0xa24501c1  sb          $a1, 0x1C1($s2)
    ctx->pc = 0x1eb268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 449), (uint8_t)GPR_U32(ctx, 5));
label_1eb26c:
    // 0x1eb26c: 0xa24401c2  sb          $a0, 0x1C2($s2)
    ctx->pc = 0x1eb26cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 450), (uint8_t)GPR_U32(ctx, 4));
label_1eb270:
    // 0x1eb270: 0xa24301c3  sb          $v1, 0x1C3($s2)
    ctx->pc = 0x1eb270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 451), (uint8_t)GPR_U32(ctx, 3));
label_1eb274:
    // 0x1eb274: 0xae4201c4  sw          $v0, 0x1C4($s2)
    ctx->pc = 0x1eb274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
label_1eb278:
    // 0x1eb278: 0xa2460260  sb          $a2, 0x260($s2)
    ctx->pc = 0x1eb278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 608), (uint8_t)GPR_U32(ctx, 6));
label_1eb27c:
    // 0x1eb27c: 0xa2450261  sb          $a1, 0x261($s2)
    ctx->pc = 0x1eb27cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 609), (uint8_t)GPR_U32(ctx, 5));
label_1eb280:
    // 0x1eb280: 0xa2440262  sb          $a0, 0x262($s2)
    ctx->pc = 0x1eb280u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 610), (uint8_t)GPR_U32(ctx, 4));
label_1eb284:
    // 0x1eb284: 0xa2430263  sb          $v1, 0x263($s2)
    ctx->pc = 0x1eb284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 611), (uint8_t)GPR_U32(ctx, 3));
label_1eb288:
    // 0x1eb288: 0xae420264  sw          $v0, 0x264($s2)
    ctx->pc = 0x1eb288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 2));
label_1eb28c:
    // 0x1eb28c: 0xa2460300  sb          $a2, 0x300($s2)
    ctx->pc = 0x1eb28cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 6));
label_1eb290:
    // 0x1eb290: 0xa2450301  sb          $a1, 0x301($s2)
    ctx->pc = 0x1eb290u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 769), (uint8_t)GPR_U32(ctx, 5));
label_1eb294:
    // 0x1eb294: 0xa2440302  sb          $a0, 0x302($s2)
    ctx->pc = 0x1eb294u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 770), (uint8_t)GPR_U32(ctx, 4));
label_1eb298:
    // 0x1eb298: 0xa2430303  sb          $v1, 0x303($s2)
    ctx->pc = 0x1eb298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 771), (uint8_t)GPR_U32(ctx, 3));
label_1eb29c:
    // 0x1eb29c: 0xae420304  sw          $v0, 0x304($s2)
    ctx->pc = 0x1eb29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 2));
label_1eb2a0:
    // 0x1eb2a0: 0xa24603a0  sb          $a2, 0x3A0($s2)
    ctx->pc = 0x1eb2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 928), (uint8_t)GPR_U32(ctx, 6));
label_1eb2a4:
    // 0x1eb2a4: 0xa24503a1  sb          $a1, 0x3A1($s2)
    ctx->pc = 0x1eb2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 929), (uint8_t)GPR_U32(ctx, 5));
label_1eb2a8:
    // 0x1eb2a8: 0xa24403a2  sb          $a0, 0x3A2($s2)
    ctx->pc = 0x1eb2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 930), (uint8_t)GPR_U32(ctx, 4));
label_1eb2ac:
    // 0x1eb2ac: 0xa24303a3  sb          $v1, 0x3A3($s2)
    ctx->pc = 0x1eb2acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 931), (uint8_t)GPR_U32(ctx, 3));
label_1eb2b0:
    // 0x1eb2b0: 0xae4203a4  sw          $v0, 0x3A4($s2)
    ctx->pc = 0x1eb2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 2));
label_1eb2b4:
    // 0x1eb2b4: 0xa2460440  sb          $a2, 0x440($s2)
    ctx->pc = 0x1eb2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1088), (uint8_t)GPR_U32(ctx, 6));
label_1eb2b8:
    // 0x1eb2b8: 0xa2450441  sb          $a1, 0x441($s2)
    ctx->pc = 0x1eb2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1089), (uint8_t)GPR_U32(ctx, 5));
label_1eb2bc:
    // 0x1eb2bc: 0xa2440442  sb          $a0, 0x442($s2)
    ctx->pc = 0x1eb2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1090), (uint8_t)GPR_U32(ctx, 4));
label_1eb2c0:
    // 0x1eb2c0: 0xa2430443  sb          $v1, 0x443($s2)
    ctx->pc = 0x1eb2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1eb2c4:
    // 0x1eb2c4: 0xae420444  sw          $v0, 0x444($s2)
    ctx->pc = 0x1eb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1092), GPR_U32(ctx, 2));
label_1eb2c8:
    // 0x1eb2c8: 0xa24604e0  sb          $a2, 0x4E0($s2)
    ctx->pc = 0x1eb2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1248), (uint8_t)GPR_U32(ctx, 6));
label_1eb2cc:
    // 0x1eb2cc: 0xa24504e1  sb          $a1, 0x4E1($s2)
    ctx->pc = 0x1eb2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1249), (uint8_t)GPR_U32(ctx, 5));
label_1eb2d0:
    // 0x1eb2d0: 0xa24404e2  sb          $a0, 0x4E2($s2)
    ctx->pc = 0x1eb2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1250), (uint8_t)GPR_U32(ctx, 4));
label_1eb2d4:
    // 0x1eb2d4: 0xa24304e3  sb          $v1, 0x4E3($s2)
    ctx->pc = 0x1eb2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1251), (uint8_t)GPR_U32(ctx, 3));
label_1eb2d8:
    // 0x1eb2d8: 0xae4204e4  sw          $v0, 0x4E4($s2)
    ctx->pc = 0x1eb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 2));
label_1eb2dc:
    // 0x1eb2dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eb2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2e0:
    // 0x1eb2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2e4:
    // 0x1eb2e4: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1eb2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1eb2e8:
    // 0x1eb2e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2ec:
    // 0x1eb2ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb2ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2f0:
    // 0x1eb2f0: 0xc066c72  jal         func_19B1C8
label_1eb2f4:
    if (ctx->pc == 0x1EB2F4u) {
        ctx->pc = 0x1EB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2F0u;
        // 0x1eb2f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2F8u;
        goto label_1eb2f8;
    }
    ctx->pc = 0x1EB2F0u;
    SET_GPR_U32(ctx, 31, 0x1EB2F8u);
    ctx->pc = 0x1EB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2F0u;
    // 0x1eb2f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EB2F0u, 0x1EB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2F8u;
label_1eb2f8:
    // 0x1eb2f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb2fc:
    // 0x1eb2fc: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1eb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1eb300:
    // 0x1eb300: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1eb300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1eb304:
    // 0x1eb304: 0x14830123  bne         $a0, $v1, . + 4 + (0x123 << 2)
label_1eb308:
    if (ctx->pc == 0x1EB308u) {
        ctx->pc = 0x1EB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB304u;
        // 0x1eb308: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB30Cu;
        goto label_1eb30c;
    }
    ctx->pc = 0x1EB304u;
    {
        const bool branch_taken_0x1eb304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB304u;
        // 0x1eb308: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb304) {
            ctx->pc = 0x1EB794u;
            goto label_1eb794;
        }
    }
    ctx->pc = 0x1EB30Cu;
label_1eb30c:
    // 0x1eb30c: 0x64130080  daddiu      $s3, $zero, 0x80
    ctx->pc = 0x1eb30cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_1eb310:
    // 0x1eb310: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1eb310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1eb314:
    // 0x1eb314: 0x240305b0  addiu       $v1, $zero, 0x5B0
    ctx->pc = 0x1eb314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
label_1eb318:
    // 0x1eb318: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eb318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eb31c:
    // 0x1eb31c: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1eb31cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb320:
    // 0x1eb320: 0x2442d720  addiu       $v0, $v0, -0x28E0
    ctx->pc = 0x1eb320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956832));
label_1eb324:
    // 0x1eb324: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1eb324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb328:
    // 0x1eb328: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb32c:
    // 0x1eb32c: 0x8c25d71c  lw          $a1, -0x28E4($at)
    ctx->pc = 0x1eb32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956828)));
label_1eb330:
    // 0x1eb330: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1eb330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eb334:
    // 0x1eb334: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_1eb338:
    if (ctx->pc == 0x1EB338u) {
        ctx->pc = 0x1EB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB334u;
        // 0x1eb338: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB33Cu;
        goto label_1eb33c;
    }
    ctx->pc = 0x1EB334u;
    {
        const bool branch_taken_0x1eb334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB334u;
        // 0x1eb338: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb334) {
            ctx->pc = 0x1EB3E8u;
            goto label_1eb3e8;
        }
    }
    ctx->pc = 0x1EB33Cu;
label_1eb33c:
    // 0x1eb33c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1eb340:
    // 0x1eb340: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb344:
    // 0x1eb344: 0x8c28ccd4  lw          $t0, -0x332C($at)
    ctx->pc = 0x1eb344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954196)));
label_1eb348:
    // 0x1eb348: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb34c:
    // 0x1eb34c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb350:
    // 0x1eb350: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb354:
    // 0x1eb354: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb358:
    // 0x1eb358: 0x24a5d058  addiu       $a1, $a1, -0x2FA8
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955096));
label_1eb35c:
    // 0x1eb35c: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb360:
    // 0x1eb360: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb360u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb364:
    // 0x1eb364: 0x0  nop
    ctx->pc = 0x1eb364u;
    // NOP
label_1eb368:
    // 0x1eb368: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb368u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb36c:
    // 0x1eb36c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb370:
    // 0x1eb370: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb374:
    // 0x1eb374: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb378:
    // 0x1eb378: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb37c:
    // 0x1eb37c: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb37cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb380:
    // 0x1eb380: 0x0  nop
    ctx->pc = 0x1eb380u;
    // NOP
label_1eb384:
    // 0x1eb384: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb384u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb388:
    // 0x1eb388: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb388u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb38c:
    // 0x1eb38c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb390:
    // 0x1eb390: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb394:
    // 0x1eb394: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb398:
    // 0x1eb398: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb398u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb39c:
    // 0x1eb39c: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb39cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb3a0:
    // 0x1eb3a0: 0x0  nop
    ctx->pc = 0x1eb3a0u;
    // NOP
label_1eb3a4:
    // 0x1eb3a4: 0x0  nop
    ctx->pc = 0x1eb3a4u;
    // NOP
label_1eb3a8:
    // 0x1eb3a8: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb3a8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb3ac:
    // 0x1eb3ac: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb3b0:
    // 0x1eb3b0: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb3b4:
    // 0x1eb3b4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb3b8:
    // 0x1eb3b8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb3bc:
    // 0x1eb3bc: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb3c0:
    // 0x1eb3c0: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb3c4:
    // 0x1eb3c4: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb3c8:
    // 0x1eb3c8: 0x0  nop
    ctx->pc = 0x1eb3c8u;
    // NOP
label_1eb3cc:
    // 0x1eb3cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb3ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb3d0:
    // 0x1eb3d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb3d4:
    // 0x1eb3d4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb3d8:
    // 0x1eb3d8: 0xc08f20e  jal         func_23C838
label_1eb3dc:
    if (ctx->pc == 0x1EB3DCu) {
        ctx->pc = 0x1EB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3D8u;
        // 0x1eb3dc: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3E0u;
        goto label_1eb3e0;
    }
    ctx->pc = 0x1EB3D8u;
    SET_GPR_U32(ctx, 31, 0x1EB3E0u);
    ctx->pc = 0x1EB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3D8u;
    // 0x1eb3dc: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB3E0u;
label_1eb3e0:
    // 0x1eb3e0: 0x10000099  b           . + 4 + (0x99 << 2)
label_1eb3e4:
    if (ctx->pc == 0x1EB3E4u) {
        ctx->pc = 0x1EB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E0u;
        // 0x1eb3e4: 0x26e6ffe8  addiu       $a2, $s7, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3E8u;
        goto label_1eb3e8;
    }
    ctx->pc = 0x1EB3E0u;
    {
        const bool branch_taken_0x1eb3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E0u;
        // 0x1eb3e4: 0x26e6ffe8  addiu       $a2, $s7, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3e0) {
            ctx->pc = 0x1EB648u;
            goto label_1eb648;
        }
    }
    ctx->pc = 0x1EB3E8u;
label_1eb3e8:
    // 0x1eb3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb3ec:
    // 0x1eb3ec: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
label_1eb3f0:
    if (ctx->pc == 0x1EB3F0u) {
        ctx->pc = 0x1EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ECu;
        // 0x1eb3f0: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3F4u;
        goto label_1eb3f4;
    }
    ctx->pc = 0x1EB3ECu;
    {
        const bool branch_taken_0x1eb3ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ECu;
        // 0x1eb3f0: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3ec) {
            ctx->pc = 0x1EB4A0u;
            goto label_1eb4a0;
        }
    }
    ctx->pc = 0x1EB3F4u;
label_1eb3f4:
    // 0x1eb3f4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1eb3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1eb3f8:
    // 0x1eb3f8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb3fc:
    // 0x1eb3fc: 0x8c28cb98  lw          $t0, -0x3468($at)
    ctx->pc = 0x1eb3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953880)));
label_1eb400:
    // 0x1eb400: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb404:
    // 0x1eb404: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb408:
    // 0x1eb408: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb40c:
    // 0x1eb40c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb410:
    // 0x1eb410: 0x24a5d058  addiu       $a1, $a1, -0x2FA8
    ctx->pc = 0x1eb410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955096));
label_1eb414:
    // 0x1eb414: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb418:
    // 0x1eb418: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb41c:
    // 0x1eb41c: 0x0  nop
    ctx->pc = 0x1eb41cu;
    // NOP
label_1eb420:
    // 0x1eb420: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb420u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb424:
    // 0x1eb424: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb428:
    // 0x1eb428: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb42c:
    // 0x1eb42c: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb42cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb430:
    // 0x1eb430: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb434:
    // 0x1eb434: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb438:
    // 0x1eb438: 0x0  nop
    ctx->pc = 0x1eb438u;
    // NOP
label_1eb43c:
    // 0x1eb43c: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb43cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb440:
    // 0x1eb440: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb440u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb444:
    // 0x1eb444: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb448:
    // 0x1eb448: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb448u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb44c:
    // 0x1eb44c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb450:
    // 0x1eb450: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb450u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb454:
    // 0x1eb454: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb454u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb458:
    // 0x1eb458: 0x0  nop
    ctx->pc = 0x1eb458u;
    // NOP
label_1eb45c:
    // 0x1eb45c: 0x0  nop
    ctx->pc = 0x1eb45cu;
    // NOP
label_1eb460:
    // 0x1eb460: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb460u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb464:
    // 0x1eb464: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb468:
    // 0x1eb468: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb46c:
    // 0x1eb46c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb470:
    // 0x1eb470: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb474:
    // 0x1eb474: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb478:
    // 0x1eb478: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb47c:
    // 0x1eb47c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb480:
    // 0x1eb480: 0x0  nop
    ctx->pc = 0x1eb480u;
    // NOP
label_1eb484:
    // 0x1eb484: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb488:
    // 0x1eb488: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb48c:
    // 0x1eb48c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb48cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb490:
    // 0x1eb490: 0xc08f20e  jal         func_23C838
label_1eb494:
    if (ctx->pc == 0x1EB494u) {
        ctx->pc = 0x1EB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB490u;
        // 0x1eb494: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB498u;
        goto label_1eb498;
    }
    ctx->pc = 0x1EB490u;
    SET_GPR_U32(ctx, 31, 0x1EB498u);
    ctx->pc = 0x1EB494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB490u;
    // 0x1eb494: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB498u;
label_1eb498:
    // 0x1eb498: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1eb49c:
    if (ctx->pc == 0x1EB49Cu) {
        ctx->pc = 0x1EB4A0u;
        goto label_1eb4a0;
    }
    ctx->pc = 0x1EB498u;
    {
        const bool branch_taken_0x1eb498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb498) {
            ctx->pc = 0x1EB644u;
            goto label_1eb644;
        }
    }
    ctx->pc = 0x1EB4A0u;
label_1eb4a0:
    // 0x1eb4a0: 0x8c23d714  lw          $v1, -0x28EC($at)
    ctx->pc = 0x1eb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956820)));
label_1eb4a4:
    // 0x1eb4a4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1eb4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1eb4a8:
    // 0x1eb4a8: 0x8c22ccd4  lw          $v0, -0x332C($at)
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954196)));
label_1eb4ac:
    // 0x1eb4ac: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eb4b0:
    // 0x1eb4b0: 0x100082a  slt         $at, $t0, $zero
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1eb4b4:
    // 0x1eb4b4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_1eb4b8:
    if (ctx->pc == 0x1EB4B8u) {
        ctx->pc = 0x1EB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B4u;
        // 0x1eb4b8: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4BCu;
        goto label_1eb4bc;
    }
    ctx->pc = 0x1EB4B4u;
    {
        const bool branch_taken_0x1eb4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B4u;
        // 0x1eb4b8: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4b4) {
            ctx->pc = 0x1EB568u;
            goto label_1eb568;
        }
    }
    ctx->pc = 0x1EB4BCu;
label_1eb4bc:
    // 0x1eb4bc: 0x84023  negu        $t0, $t0
    ctx->pc = 0x1eb4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_1eb4c0:
    // 0x1eb4c0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb4c4:
    // 0x1eb4c4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb4c8:
    // 0x1eb4c8: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb4cc:
    // 0x1eb4cc: 0x64130060  daddiu      $s3, $zero, 0x60
    ctx->pc = 0x1eb4ccu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_1eb4d0:
    // 0x1eb4d0: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb4d4:
    // 0x1eb4d4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb4d8:
    // 0x1eb4d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb4dc:
    // 0x1eb4dc: 0x24a5d070  addiu       $a1, $a1, -0x2F90
    ctx->pc = 0x1eb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955120));
label_1eb4e0:
    // 0x1eb4e0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1eb4e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4e4:
    // 0x1eb4e4: 0x641500a0  daddiu      $s5, $zero, 0xA0
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1eb4e8:
    // 0x1eb4e8: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb4e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb4ec:
    // 0x1eb4ec: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb4f0:
    // 0x1eb4f0: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb4f4:
    // 0x1eb4f4: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb4f8:
    // 0x1eb4f8: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb4fc:
    // 0x1eb4fc: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb500:
    // 0x1eb500: 0x0  nop
    ctx->pc = 0x1eb500u;
    // NOP
label_1eb504:
    // 0x1eb504: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb504u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb508:
    // 0x1eb508: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb508u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb50c:
    // 0x1eb50c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb510:
    // 0x1eb510: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb510u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb514:
    // 0x1eb514: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb518:
    // 0x1eb518: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb518u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb51c:
    // 0x1eb51c: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb51cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb520:
    // 0x1eb520: 0x0  nop
    ctx->pc = 0x1eb520u;
    // NOP
label_1eb524:
    // 0x1eb524: 0x0  nop
    ctx->pc = 0x1eb524u;
    // NOP
label_1eb528:
    // 0x1eb528: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb528u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb52c:
    // 0x1eb52c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb530:
    // 0x1eb530: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb534:
    // 0x1eb534: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb538:
    // 0x1eb538: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb53c:
    // 0x1eb53c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb53cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb540:
    // 0x1eb540: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb544:
    // 0x1eb544: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb548:
    // 0x1eb548: 0x0  nop
    ctx->pc = 0x1eb548u;
    // NOP
label_1eb54c:
    // 0x1eb54c: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb550:
    // 0x1eb550: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb554:
    // 0x1eb554: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb558:
    // 0x1eb558: 0xc08f20e  jal         func_23C838
label_1eb55c:
    if (ctx->pc == 0x1EB55Cu) {
        ctx->pc = 0x1EB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB558u;
        // 0x1eb55c: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB560u;
        goto label_1eb560;
    }
    ctx->pc = 0x1EB558u;
    SET_GPR_U32(ctx, 31, 0x1EB560u);
    ctx->pc = 0x1EB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB558u;
    // 0x1eb55c: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB560u;
label_1eb560:
    // 0x1eb560: 0x10000038  b           . + 4 + (0x38 << 2)
label_1eb564:
    if (ctx->pc == 0x1EB564u) {
        ctx->pc = 0x1EB568u;
        goto label_1eb568;
    }
    ctx->pc = 0x1EB560u;
    {
        const bool branch_taken_0x1eb560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb560) {
            ctx->pc = 0x1EB644u;
            goto label_1eb644;
        }
    }
    ctx->pc = 0x1EB568u;
label_1eb568:
    // 0x1eb568: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x1eb568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1eb56c:
    // 0x1eb56c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_1eb570:
    if (ctx->pc == 0x1EB570u) {
        ctx->pc = 0x1EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB56Cu;
        // 0x1eb570: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB574u;
        goto label_1eb574;
    }
    ctx->pc = 0x1EB56Cu;
    {
        const bool branch_taken_0x1eb56c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB56Cu;
        // 0x1eb570: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb56c) {
            ctx->pc = 0x1EB620u;
            goto label_1eb620;
        }
    }
    ctx->pc = 0x1EB574u;
label_1eb574:
    // 0x1eb574: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb578:
    // 0x1eb578: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb57c:
    // 0x1eb57c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb580:
    // 0x1eb580: 0x64140060  daddiu      $s4, $zero, 0x60
    ctx->pc = 0x1eb580u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_1eb584:
    // 0x1eb584: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb588:
    // 0x1eb588: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb58c:
    // 0x1eb58c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb590:
    // 0x1eb590: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb594:
    // 0x1eb594: 0x24a5d080  addiu       $a1, $a1, -0x2F80
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955136));
label_1eb598:
    // 0x1eb598: 0x641300a0  daddiu      $s3, $zero, 0xA0
    ctx->pc = 0x1eb598u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1eb59c:
    // 0x1eb59c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1eb59cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5a0:
    // 0x1eb5a0: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb5a0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb5a4:
    // 0x1eb5a4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb5a8:
    // 0x1eb5a8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb5ac:
    // 0x1eb5ac: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb5b0:
    // 0x1eb5b0: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb5b4:
    // 0x1eb5b4: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb5b8:
    // 0x1eb5b8: 0x0  nop
    ctx->pc = 0x1eb5b8u;
    // NOP
label_1eb5bc:
    // 0x1eb5bc: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb5c0:
    // 0x1eb5c0: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb5c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb5c4:
    // 0x1eb5c4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb5c8:
    // 0x1eb5c8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb5c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb5cc:
    // 0x1eb5cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb5d0:
    // 0x1eb5d0: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb5d0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb5d4:
    // 0x1eb5d4: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb5d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb5d8:
    // 0x1eb5d8: 0x0  nop
    ctx->pc = 0x1eb5d8u;
    // NOP
label_1eb5dc:
    // 0x1eb5dc: 0x0  nop
    ctx->pc = 0x1eb5dcu;
    // NOP
label_1eb5e0:
    // 0x1eb5e0: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb5e0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb5e4:
    // 0x1eb5e4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb5e8:
    // 0x1eb5e8: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb5ec:
    // 0x1eb5ec: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb5f0:
    // 0x1eb5f0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb5f4:
    // 0x1eb5f4: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb5f8:
    // 0x1eb5f8: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb5fc:
    // 0x1eb5fc: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb600:
    // 0x1eb600: 0x0  nop
    ctx->pc = 0x1eb600u;
    // NOP
label_1eb604:
    // 0x1eb604: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb604u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb608:
    // 0x1eb608: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb60c:
    // 0x1eb60c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb60cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb610:
    // 0x1eb610: 0xc08f20e  jal         func_23C838
label_1eb614:
    if (ctx->pc == 0x1EB614u) {
        ctx->pc = 0x1EB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB610u;
        // 0x1eb614: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB618u;
        goto label_1eb618;
    }
    ctx->pc = 0x1EB610u;
    SET_GPR_U32(ctx, 31, 0x1EB618u);
    ctx->pc = 0x1EB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB610u;
    // 0x1eb614: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB618u;
label_1eb618:
    // 0x1eb618: 0x1000000a  b           . + 4 + (0xA << 2)
label_1eb61c:
    if (ctx->pc == 0x1EB61Cu) {
        ctx->pc = 0x1EB620u;
        goto label_1eb620;
    }
    ctx->pc = 0x1EB618u;
    {
        const bool branch_taken_0x1eb618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb618) {
            ctx->pc = 0x1EB644u;
            goto label_1eb644;
        }
    }
    ctx->pc = 0x1EB620u;
label_1eb620:
    // 0x1eb620: 0x641300a0  daddiu      $s3, $zero, 0xA0
    ctx->pc = 0x1eb620u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1eb624:
    // 0x1eb624: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb628:
    // 0x1eb628: 0x24a5d058  addiu       $a1, $a1, -0x2FA8
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955096));
label_1eb62c:
    // 0x1eb62c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb630:
    // 0x1eb630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb634:
    // 0x1eb634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb638:
    // 0x1eb638: 0x64150060  daddiu      $s5, $zero, 0x60
    ctx->pc = 0x1eb638u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_1eb63c:
    // 0x1eb63c: 0xc08f20e  jal         func_23C838
label_1eb640:
    if (ctx->pc == 0x1EB640u) {
        ctx->pc = 0x1EB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB63Cu;
        // 0x1eb640: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB644u;
        goto label_1eb644;
    }
    ctx->pc = 0x1EB63Cu;
    SET_GPR_U32(ctx, 31, 0x1EB644u);
    ctx->pc = 0x1EB640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB63Cu;
    // 0x1eb640: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB644u;
label_1eb644:
    // 0x1eb644: 0x26e6ffe8  addiu       $a2, $s7, -0x18
    ctx->pc = 0x1eb644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
label_1eb648:
    // 0x1eb648: 0x26c7001c  addiu       $a3, $s6, 0x1C
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
label_1eb64c:
    // 0x1eb64c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1eb64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1eb650:
    // 0x1eb650: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1eb650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1eb654:
    // 0x1eb654: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eb654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eb658:
    // 0x1eb658: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1eb658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb65c:
    // 0x1eb65c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1eb65cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb660:
    // 0x1eb660: 0xc0708ac  jal         func_1C22B0
label_1eb664:
    if (ctx->pc == 0x1EB664u) {
        ctx->pc = 0x1EB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB660u;
        // 0x1eb664: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB668u;
        goto label_1eb668;
    }
    ctx->pc = 0x1EB660u;
    SET_GPR_U32(ctx, 31, 0x1EB668u);
    ctx->pc = 0x1EB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB660u;
    // 0x1eb664: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1EB668u;
label_1eb668:
    // 0x1eb668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb66c:
    // 0x1eb66c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eb66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb670:
    // 0x1eb670: 0x326800ff  andi        $t0, $s3, 0xFF
    ctx->pc = 0x1eb670u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1eb674:
    // 0x1eb674: 0x328900ff  andi        $t1, $s4, 0xFF
    ctx->pc = 0x1eb674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1eb678:
    // 0x1eb678: 0x32aa00ff  andi        $t2, $s5, 0xFF
    ctx->pc = 0x1eb678u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1eb67c:
    // 0x1eb67c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eb680:
    // 0x1eb680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1eb684:
    // 0x1eb684: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1eb684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1eb688:
    // 0x1eb688: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1eb68c:
    // 0x1eb68c: 0xa0d30080  sb          $s3, 0x80($a2)
    ctx->pc = 0x1eb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 19));
label_1eb690:
    // 0x1eb690: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x1eb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
label_1eb694:
    // 0x1eb694: 0xa0d40081  sb          $s4, 0x81($a2)
    ctx->pc = 0x1eb694u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 129), (uint8_t)GPR_U32(ctx, 20));
label_1eb698:
    // 0x1eb698: 0xa0d50082  sb          $s5, 0x82($a2)
    ctx->pc = 0x1eb698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 130), (uint8_t)GPR_U32(ctx, 21));
label_1eb69c:
    // 0x1eb69c: 0xa0c30083  sb          $v1, 0x83($a2)
    ctx->pc = 0x1eb69cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 3));
label_1eb6a0:
    // 0x1eb6a0: 0xacc20084  sw          $v0, 0x84($a2)
    ctx->pc = 0x1eb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 2));
label_1eb6a4:
    // 0x1eb6a4: 0xa0d30120  sb          $s3, 0x120($a2)
    ctx->pc = 0x1eb6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 288), (uint8_t)GPR_U32(ctx, 19));
label_1eb6a8:
    // 0x1eb6a8: 0xa0d40121  sb          $s4, 0x121($a2)
    ctx->pc = 0x1eb6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 289), (uint8_t)GPR_U32(ctx, 20));
label_1eb6ac:
    // 0x1eb6ac: 0xa0d50122  sb          $s5, 0x122($a2)
    ctx->pc = 0x1eb6acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 290), (uint8_t)GPR_U32(ctx, 21));
label_1eb6b0:
    // 0x1eb6b0: 0xa0c30123  sb          $v1, 0x123($a2)
    ctx->pc = 0x1eb6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 291), (uint8_t)GPR_U32(ctx, 3));
label_1eb6b4:
    // 0x1eb6b4: 0xacc20124  sw          $v0, 0x124($a2)
    ctx->pc = 0x1eb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 2));
label_1eb6b8:
    // 0x1eb6b8: 0xa0d301c0  sb          $s3, 0x1C0($a2)
    ctx->pc = 0x1eb6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 448), (uint8_t)GPR_U32(ctx, 19));
label_1eb6bc:
    // 0x1eb6bc: 0xa0d401c1  sb          $s4, 0x1C1($a2)
    ctx->pc = 0x1eb6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 449), (uint8_t)GPR_U32(ctx, 20));
label_1eb6c0:
    // 0x1eb6c0: 0xa0d501c2  sb          $s5, 0x1C2($a2)
    ctx->pc = 0x1eb6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 450), (uint8_t)GPR_U32(ctx, 21));
label_1eb6c4:
    // 0x1eb6c4: 0xa0c301c3  sb          $v1, 0x1C3($a2)
    ctx->pc = 0x1eb6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 451), (uint8_t)GPR_U32(ctx, 3));
label_1eb6c8:
    // 0x1eb6c8: 0xacc201c4  sw          $v0, 0x1C4($a2)
    ctx->pc = 0x1eb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 2));
label_1eb6cc:
    // 0x1eb6cc: 0xa0d30260  sb          $s3, 0x260($a2)
    ctx->pc = 0x1eb6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 608), (uint8_t)GPR_U32(ctx, 19));
label_1eb6d0:
    // 0x1eb6d0: 0xa0d40261  sb          $s4, 0x261($a2)
    ctx->pc = 0x1eb6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 609), (uint8_t)GPR_U32(ctx, 20));
label_1eb6d4:
    // 0x1eb6d4: 0xa0d50262  sb          $s5, 0x262($a2)
    ctx->pc = 0x1eb6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 610), (uint8_t)GPR_U32(ctx, 21));
label_1eb6d8:
    // 0x1eb6d8: 0xa0c30263  sb          $v1, 0x263($a2)
    ctx->pc = 0x1eb6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 611), (uint8_t)GPR_U32(ctx, 3));
label_1eb6dc:
    // 0x1eb6dc: 0xacc20264  sw          $v0, 0x264($a2)
    ctx->pc = 0x1eb6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 612), GPR_U32(ctx, 2));
label_1eb6e0:
    // 0x1eb6e0: 0xa0d30300  sb          $s3, 0x300($a2)
    ctx->pc = 0x1eb6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 768), (uint8_t)GPR_U32(ctx, 19));
label_1eb6e4:
    // 0x1eb6e4: 0xa0d40301  sb          $s4, 0x301($a2)
    ctx->pc = 0x1eb6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 769), (uint8_t)GPR_U32(ctx, 20));
label_1eb6e8:
    // 0x1eb6e8: 0xa0d50302  sb          $s5, 0x302($a2)
    ctx->pc = 0x1eb6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 770), (uint8_t)GPR_U32(ctx, 21));
label_1eb6ec:
    // 0x1eb6ec: 0xa0c30303  sb          $v1, 0x303($a2)
    ctx->pc = 0x1eb6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 771), (uint8_t)GPR_U32(ctx, 3));
label_1eb6f0:
    // 0x1eb6f0: 0xacc20304  sw          $v0, 0x304($a2)
    ctx->pc = 0x1eb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 772), GPR_U32(ctx, 2));
label_1eb6f4:
    // 0x1eb6f4: 0xa0d303a0  sb          $s3, 0x3A0($a2)
    ctx->pc = 0x1eb6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 928), (uint8_t)GPR_U32(ctx, 19));
label_1eb6f8:
    // 0x1eb6f8: 0xa0d403a1  sb          $s4, 0x3A1($a2)
    ctx->pc = 0x1eb6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 929), (uint8_t)GPR_U32(ctx, 20));
label_1eb6fc:
    // 0x1eb6fc: 0xa0d503a2  sb          $s5, 0x3A2($a2)
    ctx->pc = 0x1eb6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 930), (uint8_t)GPR_U32(ctx, 21));
label_1eb700:
    // 0x1eb700: 0xa0c303a3  sb          $v1, 0x3A3($a2)
    ctx->pc = 0x1eb700u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 931), (uint8_t)GPR_U32(ctx, 3));
label_1eb704:
    // 0x1eb704: 0xacc203a4  sw          $v0, 0x3A4($a2)
    ctx->pc = 0x1eb704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 932), GPR_U32(ctx, 2));
label_1eb708:
    // 0x1eb708: 0xa0d30440  sb          $s3, 0x440($a2)
    ctx->pc = 0x1eb708u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1088), (uint8_t)GPR_U32(ctx, 19));
label_1eb70c:
    // 0x1eb70c: 0xa0d40441  sb          $s4, 0x441($a2)
    ctx->pc = 0x1eb70cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1089), (uint8_t)GPR_U32(ctx, 20));
label_1eb710:
    // 0x1eb710: 0xa0d50442  sb          $s5, 0x442($a2)
    ctx->pc = 0x1eb710u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1090), (uint8_t)GPR_U32(ctx, 21));
label_1eb714:
    // 0x1eb714: 0xa0c30443  sb          $v1, 0x443($a2)
    ctx->pc = 0x1eb714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1eb718:
    // 0x1eb718: 0xacc20444  sw          $v0, 0x444($a2)
    ctx->pc = 0x1eb718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1092), GPR_U32(ctx, 2));
label_1eb71c:
    // 0x1eb71c: 0xa0d304e0  sb          $s3, 0x4E0($a2)
    ctx->pc = 0x1eb71cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1248), (uint8_t)GPR_U32(ctx, 19));
label_1eb720:
    // 0x1eb720: 0xa0d404e1  sb          $s4, 0x4E1($a2)
    ctx->pc = 0x1eb720u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1249), (uint8_t)GPR_U32(ctx, 20));
label_1eb724:
    // 0x1eb724: 0xa0d504e2  sb          $s5, 0x4E2($a2)
    ctx->pc = 0x1eb724u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1250), (uint8_t)GPR_U32(ctx, 21));
label_1eb728:
    // 0x1eb728: 0xa0c304e3  sb          $v1, 0x4E3($a2)
    ctx->pc = 0x1eb728u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1251), (uint8_t)GPR_U32(ctx, 3));
label_1eb72c:
    // 0x1eb72c: 0x18a0ffd5  blez        $a1, . + 4 + (-0x2B << 2)
label_1eb730:
    if (ctx->pc == 0x1EB730u) {
        ctx->pc = 0x1EB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB72Cu;
        // 0x1eb730: 0xacc204e4  sw          $v0, 0x4E4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB734u;
        goto label_1eb734;
    }
    ctx->pc = 0x1EB72Cu;
    {
        const bool branch_taken_0x1eb72c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB72Cu;
        // 0x1eb730: 0xacc204e4  sw          $v0, 0x4E4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb72c) {
            ctx->pc = 0x1EB684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb684;
        }
    }
    ctx->pc = 0x1EB734u;
label_1eb734:
    // 0x1eb734: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1eb734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_1eb738:
    // 0x1eb738: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1eb73c:
    if (ctx->pc == 0x1EB73Cu) {
        ctx->pc = 0x1EB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB738u;
        // 0x1eb73c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB740u;
        goto label_1eb740;
    }
    ctx->pc = 0x1EB738u;
    {
        const bool branch_taken_0x1eb738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB738u;
        // 0x1eb73c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb738) {
            ctx->pc = 0x1EB778u;
            goto label_1eb778;
        }
    }
    ctx->pc = 0x1EB740u;
label_1eb740:
    // 0x1eb740: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eb744:
    // 0x1eb744: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x1eb744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1eb748:
    // 0x1eb748: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1eb748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eb74c:
    // 0x1eb74c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1eb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1eb750:
    // 0x1eb750: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_1eb754:
    // 0x1eb754: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1eb758:
    // 0x1eb758: 0xa0e80080  sb          $t0, 0x80($a3)
    ctx->pc = 0x1eb758u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 128), (uint8_t)GPR_U32(ctx, 8));
label_1eb75c:
    // 0x1eb75c: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x1eb75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_1eb760:
    // 0x1eb760: 0xa0e90081  sb          $t1, 0x81($a3)
    ctx->pc = 0x1eb760u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 129), (uint8_t)GPR_U32(ctx, 9));
label_1eb764:
    // 0x1eb764: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1eb764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_1eb768:
    // 0x1eb768: 0xa0ea0082  sb          $t2, 0x82($a3)
    ctx->pc = 0x1eb768u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 130), (uint8_t)GPR_U32(ctx, 10));
label_1eb76c:
    // 0x1eb76c: 0xa0e40083  sb          $a0, 0x83($a3)
    ctx->pc = 0x1eb76cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 4));
label_1eb770:
    // 0x1eb770: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1eb774:
    if (ctx->pc == 0x1EB774u) {
        ctx->pc = 0x1EB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB770u;
        // 0x1eb774: 0xace30084  sw          $v1, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB778u;
        goto label_1eb778;
    }
    ctx->pc = 0x1EB770u;
    {
        const bool branch_taken_0x1eb770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB770u;
        // 0x1eb774: 0xace30084  sw          $v1, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb770) {
            ctx->pc = 0x1EB750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb750;
        }
    }
    ctx->pc = 0x1EB778u;
label_1eb778:
    // 0x1eb778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb77c:
    // 0x1eb77c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eb77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb780:
    // 0x1eb780: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1eb784:
    // 0x1eb784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb788:
    // 0x1eb788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb78c:
    // 0x1eb78c: 0xc066c72  jal         func_19B1C8
label_1eb790:
    if (ctx->pc == 0x1EB790u) {
        ctx->pc = 0x1EB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB78Cu;
        // 0x1eb790: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB794u;
        goto label_1eb794;
    }
    ctx->pc = 0x1EB78Cu;
    SET_GPR_U32(ctx, 31, 0x1EB794u);
    ctx->pc = 0x1EB790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB78Cu;
    // 0x1eb790: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EB78Cu, 0x1EB794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB794u;
label_1eb794:
    // 0x1eb794: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1eb794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1eb798:
    // 0x1eb798: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eb798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1eb79c:
    // 0x1eb79c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eb79cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1eb7a0:
    // 0x1eb7a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eb7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eb7a4:
    // 0x1eb7a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eb7a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eb7a8:
    // 0x1eb7a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eb7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb7ac:
    // 0x1eb7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eb7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb7b0:
    // 0x1eb7b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb7b4:
    // 0x1eb7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb7b8:
    // 0x1eb7b8: 0x3e00008  jr          $ra
label_1eb7bc:
    if (ctx->pc == 0x1EB7BCu) {
        ctx->pc = 0x1EB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7B8u;
        // 0x1eb7bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB7C0u;
        goto label_1eb7c0;
    }
    ctx->pc = 0x1EB7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7B8u;
        // 0x1eb7bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB7C0u;
label_1eb7c0:
    // 0x1eb7c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb7c4:
    // 0x1eb7c4: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1eb7c8:
    // 0x1eb7c8: 0x9025490c  lbu         $a1, 0x490C($at)
    ctx->pc = 0x1eb7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1eb7cc:
    // 0x1eb7cc: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_1eb7d0:
    if (ctx->pc == 0x1EB7D0u) {
        ctx->pc = 0x1EB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7CCu;
        // 0x1eb7d0: 0x24084650  addiu       $t0, $zero, 0x4650 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB7D4u;
        goto label_1eb7d4;
    }
    ctx->pc = 0x1EB7CCu;
    {
        const bool branch_taken_0x1eb7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7CCu;
        // 0x1eb7d0: 0x24084650  addiu       $t0, $zero, 0x4650 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7cc) {
            ctx->pc = 0x1EB7ECu;
            goto label_1eb7ec;
        }
    }
    ctx->pc = 0x1EB7D4u;
label_1eb7d4:
    // 0x1eb7d4: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1eb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1eb7d8:
    // 0x1eb7d8: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_1eb7dc:
    if (ctx->pc == 0x1EB7DCu) {
        ctx->pc = 0x1EB7E0u;
        goto label_1eb7e0;
    }
    ctx->pc = 0x1EB7D8u;
    {
        const bool branch_taken_0x1eb7d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eb7d8) {
            ctx->pc = 0x1EB7ECu;
            goto label_1eb7ec;
        }
    }
    ctx->pc = 0x1EB7E0u;
label_1eb7e0:
    // 0x1eb7e0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1eb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1eb7e4:
    // 0x1eb7e4: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
label_1eb7e8:
    if (ctx->pc == 0x1EB7E8u) {
        ctx->pc = 0x1EB7ECu;
        goto label_1eb7ec;
    }
    ctx->pc = 0x1EB7E4u;
    {
        const bool branch_taken_0x1eb7e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eb7e4) {
            ctx->pc = 0x1EB7F0u;
            goto label_1eb7f0;
        }
    }
    ctx->pc = 0x1EB7ECu;
label_1eb7ec:
    // 0x1eb7ec: 0x24080e10  addiu       $t0, $zero, 0xE10
    ctx->pc = 0x1eb7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_1eb7f0:
    // 0x1eb7f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb7f4:
    // 0x1eb7f4: 0x8f848f0c  lw          $a0, -0x70F4($gp)
    ctx->pc = 0x1eb7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938380)));
label_1eb7f8:
    // 0x1eb7f8: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x1eb7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1eb7fc:
    // 0x1eb7fc: 0xc4382a  slt         $a3, $a2, $a0
    ctx->pc = 0x1eb7fcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1eb800:
    // 0x1eb800: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1eb804:
    if (ctx->pc == 0x1EB804u) {
        ctx->pc = 0x1EB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB800u;
        // 0x1eb804: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB808u;
        goto label_1eb808;
    }
    ctx->pc = 0x1EB800u;
    {
        const bool branch_taken_0x1eb800 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB800u;
        // 0x1eb804: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb800) {
            ctx->pc = 0x1EB810u;
            goto label_1eb810;
        }
    }
    ctx->pc = 0x1EB808u;
label_1eb808:
    // 0x1eb808: 0x10000018  b           . + 4 + (0x18 << 2)
label_1eb80c:
    if (ctx->pc == 0x1EB80Cu) {
        ctx->pc = 0x1EB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB808u;
        // 0x1eb80c: 0xaf808f10  sw          $zero, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB810u;
        goto label_1eb810;
    }
    ctx->pc = 0x1EB808u;
    {
        const bool branch_taken_0x1eb808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB808u;
        // 0x1eb80c: 0xaf808f10  sw          $zero, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb808) {
            ctx->pc = 0x1EB86Cu;
            goto label_1eb86c;
        }
    }
    ctx->pc = 0x1EB810u;
label_1eb810:
    // 0x1eb810: 0x883823  subu        $a3, $a0, $t0
    ctx->pc = 0x1eb810u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1eb814:
    // 0x1eb814: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x1eb814u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1eb818:
    // 0x1eb818: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1eb81c:
    if (ctx->pc == 0x1EB81Cu) {
        ctx->pc = 0x1EB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB818u;
        // 0x1eb81c: 0x24878000  addiu       $a3, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB820u;
        goto label_1eb820;
    }
    ctx->pc = 0x1EB818u;
    {
        const bool branch_taken_0x1eb818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB818u;
        // 0x1eb81c: 0x24878000  addiu       $a3, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb818) {
            ctx->pc = 0x1EB830u;
            goto label_1eb830;
        }
    }
    ctx->pc = 0x1EB820u;
label_1eb820:
    // 0x1eb820: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb824:
    // 0x1eb824: 0x10000011  b           . + 4 + (0x11 << 2)
label_1eb828:
    if (ctx->pc == 0x1EB828u) {
        ctx->pc = 0x1EB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB824u;
        // 0x1eb828: 0xaf878f10  sw          $a3, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB82Cu;
        goto label_1eb82c;
    }
    ctx->pc = 0x1EB824u;
    {
        const bool branch_taken_0x1eb824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB824u;
        // 0x1eb828: 0xaf878f10  sw          $a3, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb824) {
            ctx->pc = 0x1EB86Cu;
            goto label_1eb86c;
        }
    }
    ctx->pc = 0x1EB82Cu;
label_1eb82c:
    // 0x1eb82c: 0x24878000  addiu       $a3, $a0, -0x8000
    ctx->pc = 0x1eb82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
label_1eb830:
    // 0x1eb830: 0x24e7f360  addiu       $a3, $a3, -0xCA0
    ctx->pc = 0x1eb830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964064));
label_1eb834:
    // 0x1eb834: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x1eb834u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1eb838:
    // 0x1eb838: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_1eb83c:
    if (ctx->pc == 0x1EB83Cu) {
        ctx->pc = 0x1EB840u;
        goto label_1eb840;
    }
    ctx->pc = 0x1EB838u;
    {
        const bool branch_taken_0x1eb838 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb838) {
            ctx->pc = 0x1EB84Cu;
            goto label_1eb84c;
        }
    }
    ctx->pc = 0x1EB840u;
label_1eb840:
    // 0x1eb840: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1eb840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb844:
    // 0x1eb844: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eb848:
    if (ctx->pc == 0x1EB848u) {
        ctx->pc = 0x1EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB844u;
        // 0x1eb848: 0xaf878f10  sw          $a3, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB84Cu;
        goto label_1eb84c;
    }
    ctx->pc = 0x1EB844u;
    {
        const bool branch_taken_0x1eb844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB844u;
        // 0x1eb848: 0xaf878f10  sw          $a3, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb844) {
            ctx->pc = 0x1EB86Cu;
            goto label_1eb86c;
        }
    }
    ctx->pc = 0x1EB84Cu;
label_1eb84c:
    // 0x1eb84c: 0x8f878f18  lw          $a3, -0x70E8($gp)
    ctx->pc = 0x1eb84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938392)));
label_1eb850:
    // 0x1eb850: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_1eb854:
    if (ctx->pc == 0x1EB854u) {
        ctx->pc = 0x1EB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB850u;
        // 0x1eb854: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB858u;
        goto label_1eb858;
    }
    ctx->pc = 0x1EB850u;
    {
        const bool branch_taken_0x1eb850 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB850u;
        // 0x1eb854: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb850) {
            ctx->pc = 0x1EB868u;
            goto label_1eb868;
        }
    }
    ctx->pc = 0x1EB858u;
label_1eb858:
    // 0x1eb858: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1eb858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb85c:
    // 0x1eb85c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eb860:
    if (ctx->pc == 0x1EB860u) {
        ctx->pc = 0x1EB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB85Cu;
        // 0x1eb860: 0xaf878f10  sw          $a3, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB864u;
        goto label_1eb864;
    }
    ctx->pc = 0x1EB85Cu;
    {
        const bool branch_taken_0x1eb85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB85Cu;
        // 0x1eb860: 0xaf878f10  sw          $a3, -0x70F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb85c) {
            ctx->pc = 0x1EB86Cu;
            goto label_1eb86c;
        }
    }
    ctx->pc = 0x1EB864u;
label_1eb864:
    // 0x1eb864: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eb868:
    // 0x1eb868: 0xaf878f10  sw          $a3, -0x70F0($gp)
    ctx->pc = 0x1eb868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 7));
label_1eb86c:
    // 0x1eb86c: 0x8f878f18  lw          $a3, -0x70E8($gp)
    ctx->pc = 0x1eb86cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938392)));
label_1eb870:
    // 0x1eb870: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
label_1eb874:
    if (ctx->pc == 0x1EB874u) {
        ctx->pc = 0x1EB878u;
        goto label_1eb878;
    }
    ctx->pc = 0x1EB870u;
    {
        const bool branch_taken_0x1eb870 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb870) {
            ctx->pc = 0x1EB8CCu;
            goto label_1eb8cc;
        }
    }
    ctx->pc = 0x1EB878u;
label_1eb878:
    // 0x1eb878: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1eb878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1eb87c:
    // 0x1eb87c: 0x10a70005  beq         $a1, $a3, . + 4 + (0x5 << 2)
label_1eb880:
    if (ctx->pc == 0x1EB880u) {
        ctx->pc = 0x1EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB87Cu;
        // 0x1eb880: 0x30a800ff  andi        $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB884u;
        goto label_1eb884;
    }
    ctx->pc = 0x1EB87Cu;
    {
        const bool branch_taken_0x1eb87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB87Cu;
        // 0x1eb880: 0x30a800ff  andi        $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb87c) {
            ctx->pc = 0x1EB894u;
            goto label_1eb894;
        }
    }
    ctx->pc = 0x1EB884u;
label_1eb884:
    // 0x1eb884: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x1eb884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1eb888:
    // 0x1eb888: 0x14a7000d  bne         $a1, $a3, . + 4 + (0xD << 2)
label_1eb88c:
    if (ctx->pc == 0x1EB88Cu) {
        ctx->pc = 0x1EB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB888u;
        // 0x1eb88c: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB890u;
        goto label_1eb890;
    }
    ctx->pc = 0x1EB888u;
    {
        const bool branch_taken_0x1eb888 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1EB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB888u;
        // 0x1eb88c: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb888) {
            ctx->pc = 0x1EB8C0u;
            goto label_1eb8c0;
        }
    }
    ctx->pc = 0x1EB890u;
label_1eb890:
    // 0x1eb890: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x1eb890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1eb894:
    // 0x1eb894: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1eb894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1eb898:
    // 0x1eb898: 0x24e739b0  addiu       $a3, $a3, 0x39B0
    ctx->pc = 0x1eb898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14768));
label_1eb89c:
    // 0x1eb89c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb8a0:
    // 0x1eb8a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1eb8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1eb8a4:
    // 0x1eb8a4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1eb8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1eb8a8:
    // 0x1eb8a8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1eb8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1eb8ac:
    // 0x1eb8ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1eb8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb8b0:
    // 0x1eb8b0: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1eb8b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1eb8b4:
    // 0x1eb8b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eb8b8:
    if (ctx->pc == 0x1EB8B8u) {
        ctx->pc = 0x1EB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8B4u;
        // 0x1eb8b8: 0xaf838f08  sw          $v1, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8BCu;
        goto label_1eb8bc;
    }
    ctx->pc = 0x1EB8B4u;
    {
        const bool branch_taken_0x1eb8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8B4u;
        // 0x1eb8b8: 0xaf838f08  sw          $v1, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8b4) {
            ctx->pc = 0x1EB8DCu;
            goto label_1eb8dc;
        }
    }
    ctx->pc = 0x1EB8BCu;
label_1eb8bc:
    // 0x1eb8bc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1eb8bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb8c0:
    // 0x1eb8c0: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1eb8c0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1eb8c4:
    // 0x1eb8c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eb8c8:
    if (ctx->pc == 0x1EB8C8u) {
        ctx->pc = 0x1EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8C4u;
        // 0x1eb8c8: 0xaf838f08  sw          $v1, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8CCu;
        goto label_1eb8cc;
    }
    ctx->pc = 0x1EB8C4u;
    {
        const bool branch_taken_0x1eb8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8C4u;
        // 0x1eb8c8: 0xaf838f08  sw          $v1, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8c4) {
            ctx->pc = 0x1EB8DCu;
            goto label_1eb8dc;
        }
    }
    ctx->pc = 0x1EB8CCu;
label_1eb8cc:
    // 0x1eb8cc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1eb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1eb8d0:
    // 0x1eb8d0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1eb8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb8d4:
    // 0x1eb8d4: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1eb8d4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1eb8d8:
    // 0x1eb8d8: 0xaf838f08  sw          $v1, -0x70F8($gp)
    ctx->pc = 0x1eb8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 3));
label_1eb8dc:
    // 0x1eb8dc: 0x8f838f08  lw          $v1, -0x70F8($gp)
    ctx->pc = 0x1eb8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938376)));
label_1eb8e0:
    // 0x1eb8e0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1eb8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb8e4:
    // 0x1eb8e4: 0x61200a  movz        $a0, $v1, $at
    ctx->pc = 0x1eb8e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1eb8e8:
    // 0x1eb8e8: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1eb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1eb8ec:
    // 0x1eb8ec: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1eb8f0:
    if (ctx->pc == 0x1EB8F0u) {
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8ECu;
        // 0x1eb8f0: 0xaf848f08  sw          $a0, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8F4u;
        goto label_1eb8f4;
    }
    ctx->pc = 0x1EB8ECu;
    {
        const bool branch_taken_0x1eb8ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8ECu;
        // 0x1eb8f0: 0xaf848f08  sw          $a0, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8ec) {
            ctx->pc = 0x1EB93Cu;
            goto label_1eb93c;
        }
    }
    ctx->pc = 0x1EB8F4u;
label_1eb8f4:
    // 0x1eb8f4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb8f8:
    // 0x1eb8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb8fc:
    // 0x1eb8fc: 0x8c24d71c  lw          $a0, -0x28E4($at)
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956828)));
label_1eb900:
    // 0x1eb900: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_1eb904:
    if (ctx->pc == 0x1EB904u) {
        ctx->pc = 0x1EB908u;
        goto label_1eb908;
    }
    ctx->pc = 0x1EB900u;
    {
        const bool branch_taken_0x1eb900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eb900) {
            ctx->pc = 0x1EB93Cu;
            goto label_1eb93c;
        }
    }
    ctx->pc = 0x1EB908u;
label_1eb908:
    // 0x1eb908: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb90c:
    // 0x1eb90c: 0x8c23d714  lw          $v1, -0x28EC($at)
    ctx->pc = 0x1eb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956820)));
label_1eb910:
    // 0x1eb910: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1eb910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1eb914:
    // 0x1eb914: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb918:
    // 0x1eb918: 0xac23d718  sw          $v1, -0x28E8($at)
    ctx->pc = 0x1eb918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956824), GPR_U32(ctx, 3));
label_1eb91c:
    // 0x1eb91c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb920:
    // 0x1eb920: 0x8c23d718  lw          $v1, -0x28E8($at)
    ctx->pc = 0x1eb920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956824)));
label_1eb924:
    // 0x1eb924: 0x2863012c  slti        $v1, $v1, 0x12C
    ctx->pc = 0x1eb924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_1eb928:
    // 0x1eb928: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1eb92c:
    if (ctx->pc == 0x1EB92Cu) {
        ctx->pc = 0x1EB930u;
        goto label_1eb930;
    }
    ctx->pc = 0x1EB928u;
    {
        const bool branch_taken_0x1eb928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb928) {
            ctx->pc = 0x1EB93Cu;
            goto label_1eb93c;
        }
    }
    ctx->pc = 0x1EB930u;
label_1eb930:
    // 0x1eb930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eb930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb934:
    // 0x1eb934: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb938:
    // 0x1eb938: 0xac23d71c  sw          $v1, -0x28E4($at)
    ctx->pc = 0x1eb938u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956828), GPR_U32(ctx, 3));
label_1eb93c:
    // 0x1eb93c: 0x3e00008  jr          $ra
label_1eb940:
    if (ctx->pc == 0x1EB940u) {
        ctx->pc = 0x1EB944u;
        goto label_1eb944;
    }
    ctx->pc = 0x1EB93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB944u;
label_1eb944:
    // 0x1eb944: 0x0  nop
    ctx->pc = 0x1eb944u;
    // NOP
label_1eb948:
    // 0x1eb948: 0x0  nop
    ctx->pc = 0x1eb948u;
    // NOP
label_1eb94c:
    // 0x1eb94c: 0x0  nop
    ctx->pc = 0x1eb94cu;
    // NOP
label_1eb950:
    // 0x1eb950: 0x3e00008  jr          $ra
label_1eb954:
    if (ctx->pc == 0x1EB954u) {
        ctx->pc = 0x1EB958u;
        goto label_1eb958;
    }
    ctx->pc = 0x1EB950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB958u;
label_1eb958:
    // 0x1eb958: 0x0  nop
    ctx->pc = 0x1eb958u;
    // NOP
label_1eb95c:
    // 0x1eb95c: 0x0  nop
    ctx->pc = 0x1eb95cu;
    // NOP
label_1eb960:
    // 0x1eb960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eb960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1eb964:
    // 0x1eb964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb968:
    // 0x1eb968: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eb968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1eb96c:
    // 0x1eb96c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1eb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1eb970:
    // 0x1eb970: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eb970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eb974:
    // 0x1eb974: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eb974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eb978:
    // 0x1eb978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eb978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eb97c:
    // 0x1eb97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb980:
    // 0x1eb980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb984:
    // 0x1eb984: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1eb988:
    // 0x1eb988: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1eb98c:
    if (ctx->pc == 0x1EB98Cu) {
        ctx->pc = 0x1EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB988u;
        // 0x1eb98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB990u;
        { ctx->pc = 0x1eb990; return; }
    }
    ctx->pc = 0x1EB988u;
    {
        const bool branch_taken_0x1eb988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB988u;
        // 0x1eb98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb988) {
            ctx->pc = 0x1EB994u;
            { ctx->pc = 0x1eb994; return; }
        }
    }
    ctx->pc = 0x1EB990u;
    ctx->pc = 0x1eb990u;
    return;
}

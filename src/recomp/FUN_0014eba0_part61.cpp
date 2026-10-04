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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part61(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16c060u: goto label_16c060;
        case 0x16c064u: goto label_16c064;
        case 0x16c068u: goto label_16c068;
        case 0x16c06cu: goto label_16c06c;
        case 0x16c070u: goto label_16c070;
        case 0x16c074u: goto label_16c074;
        case 0x16c078u: goto label_16c078;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c080u: goto label_16c080;
        case 0x16c084u: goto label_16c084;
        case 0x16c088u: goto label_16c088;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c090u: goto label_16c090;
        case 0x16c094u: goto label_16c094;
        case 0x16c098u: goto label_16c098;
        case 0x16c09cu: goto label_16c09c;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0a4u: goto label_16c0a4;
        case 0x16c0a8u: goto label_16c0a8;
        case 0x16c0acu: goto label_16c0ac;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b4u: goto label_16c0b4;
        case 0x16c0b8u: goto label_16c0b8;
        case 0x16c0bcu: goto label_16c0bc;
        case 0x16c0c0u: goto label_16c0c0;
        case 0x16c0c4u: goto label_16c0c4;
        case 0x16c0c8u: goto label_16c0c8;
        case 0x16c0ccu: goto label_16c0cc;
        case 0x16c0d0u: goto label_16c0d0;
        case 0x16c0d4u: goto label_16c0d4;
        case 0x16c0d8u: goto label_16c0d8;
        case 0x16c0dcu: goto label_16c0dc;
        case 0x16c0e0u: goto label_16c0e0;
        case 0x16c0e4u: goto label_16c0e4;
        case 0x16c0e8u: goto label_16c0e8;
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f0u: goto label_16c0f0;
        case 0x16c0f4u: goto label_16c0f4;
        case 0x16c0f8u: goto label_16c0f8;
        case 0x16c0fcu: goto label_16c0fc;
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        case 0x16c108u: goto label_16c108;
        case 0x16c10cu: goto label_16c10c;
        case 0x16c110u: goto label_16c110;
        case 0x16c114u: goto label_16c114;
        case 0x16c118u: goto label_16c118;
        case 0x16c11cu: goto label_16c11c;
        case 0x16c120u: goto label_16c120;
        case 0x16c124u: goto label_16c124;
        case 0x16c128u: goto label_16c128;
        case 0x16c12cu: goto label_16c12c;
        case 0x16c130u: goto label_16c130;
        case 0x16c134u: goto label_16c134;
        case 0x16c138u: goto label_16c138;
        case 0x16c13cu: goto label_16c13c;
        case 0x16c140u: goto label_16c140;
        case 0x16c144u: goto label_16c144;
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        case 0x16c168u: goto label_16c168;
        case 0x16c16cu: goto label_16c16c;
        case 0x16c170u: goto label_16c170;
        case 0x16c174u: goto label_16c174;
        case 0x16c178u: goto label_16c178;
        case 0x16c17cu: goto label_16c17c;
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        case 0x16c27cu: goto label_16c27c;
        case 0x16c280u: goto label_16c280;
        case 0x16c284u: goto label_16c284;
        case 0x16c288u: goto label_16c288;
        case 0x16c28cu: goto label_16c28c;
        case 0x16c290u: goto label_16c290;
        case 0x16c294u: goto label_16c294;
        case 0x16c298u: goto label_16c298;
        case 0x16c29cu: goto label_16c29c;
        case 0x16c2a0u: goto label_16c2a0;
        case 0x16c2a4u: goto label_16c2a4;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2acu: goto label_16c2ac;
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2b4u: goto label_16c2b4;
        case 0x16c2b8u: goto label_16c2b8;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c0u: goto label_16c2c0;
        case 0x16c2c4u: goto label_16c2c4;
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2d0u: goto label_16c2d0;
        case 0x16c2d4u: goto label_16c2d4;
        case 0x16c2d8u: goto label_16c2d8;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e0u: goto label_16c2e0;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2e8u: goto label_16c2e8;
        case 0x16c2ecu: goto label_16c2ec;
        case 0x16c2f0u: goto label_16c2f0;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2f8u: goto label_16c2f8;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c300u: goto label_16c300;
        case 0x16c304u: goto label_16c304;
        case 0x16c308u: goto label_16c308;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c310u: goto label_16c310;
        case 0x16c314u: goto label_16c314;
        case 0x16c318u: goto label_16c318;
        case 0x16c31cu: goto label_16c31c;
        case 0x16c320u: goto label_16c320;
        case 0x16c324u: goto label_16c324;
        case 0x16c328u: goto label_16c328;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c330u: goto label_16c330;
        case 0x16c334u: goto label_16c334;
        case 0x16c338u: goto label_16c338;
        case 0x16c33cu: goto label_16c33c;
        case 0x16c340u: goto label_16c340;
        case 0x16c344u: goto label_16c344;
        case 0x16c348u: goto label_16c348;
        case 0x16c34cu: goto label_16c34c;
        case 0x16c350u: goto label_16c350;
        case 0x16c354u: goto label_16c354;
        case 0x16c358u: goto label_16c358;
        case 0x16c35cu: goto label_16c35c;
        case 0x16c360u: goto label_16c360;
        case 0x16c364u: goto label_16c364;
        case 0x16c368u: goto label_16c368;
        case 0x16c36cu: goto label_16c36c;
        case 0x16c370u: goto label_16c370;
        case 0x16c374u: goto label_16c374;
        case 0x16c378u: goto label_16c378;
        case 0x16c37cu: goto label_16c37c;
        case 0x16c380u: goto label_16c380;
        case 0x16c384u: goto label_16c384;
        case 0x16c388u: goto label_16c388;
        case 0x16c38cu: goto label_16c38c;
        case 0x16c390u: goto label_16c390;
        case 0x16c394u: goto label_16c394;
        case 0x16c398u: goto label_16c398;
        case 0x16c39cu: goto label_16c39c;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3a4u: goto label_16c3a4;
        case 0x16c3a8u: goto label_16c3a8;
        case 0x16c3acu: goto label_16c3ac;
        case 0x16c3b0u: goto label_16c3b0;
        case 0x16c3b4u: goto label_16c3b4;
        case 0x16c3b8u: goto label_16c3b8;
        case 0x16c3bcu: goto label_16c3bc;
        case 0x16c3c0u: goto label_16c3c0;
        case 0x16c3c4u: goto label_16c3c4;
        case 0x16c3c8u: goto label_16c3c8;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d0u: goto label_16c3d0;
        case 0x16c3d4u: goto label_16c3d4;
        case 0x16c3d8u: goto label_16c3d8;
        case 0x16c3dcu: goto label_16c3dc;
        case 0x16c3e0u: goto label_16c3e0;
        case 0x16c3e4u: goto label_16c3e4;
        case 0x16c3e8u: goto label_16c3e8;
        case 0x16c3ecu: goto label_16c3ec;
        case 0x16c3f0u: goto label_16c3f0;
        case 0x16c3f4u: goto label_16c3f4;
        case 0x16c3f8u: goto label_16c3f8;
        case 0x16c3fcu: goto label_16c3fc;
        case 0x16c400u: goto label_16c400;
        case 0x16c404u: goto label_16c404;
        case 0x16c408u: goto label_16c408;
        case 0x16c40cu: goto label_16c40c;
        case 0x16c410u: goto label_16c410;
        case 0x16c414u: goto label_16c414;
        case 0x16c418u: goto label_16c418;
        case 0x16c41cu: goto label_16c41c;
        case 0x16c420u: goto label_16c420;
        case 0x16c424u: goto label_16c424;
        case 0x16c428u: goto label_16c428;
        case 0x16c42cu: goto label_16c42c;
        case 0x16c430u: goto label_16c430;
        case 0x16c434u: goto label_16c434;
        case 0x16c438u: goto label_16c438;
        case 0x16c43cu: goto label_16c43c;
        case 0x16c440u: goto label_16c440;
        case 0x16c444u: goto label_16c444;
        case 0x16c448u: goto label_16c448;
        case 0x16c44cu: goto label_16c44c;
        case 0x16c450u: goto label_16c450;
        case 0x16c454u: goto label_16c454;
        case 0x16c458u: goto label_16c458;
        case 0x16c45cu: goto label_16c45c;
        case 0x16c460u: goto label_16c460;
        case 0x16c464u: goto label_16c464;
        case 0x16c468u: goto label_16c468;
        case 0x16c46cu: goto label_16c46c;
        case 0x16c470u: goto label_16c470;
        case 0x16c474u: goto label_16c474;
        case 0x16c478u: goto label_16c478;
        case 0x16c47cu: goto label_16c47c;
        case 0x16c480u: goto label_16c480;
        case 0x16c484u: goto label_16c484;
        case 0x16c488u: goto label_16c488;
        case 0x16c48cu: goto label_16c48c;
        case 0x16c490u: goto label_16c490;
        case 0x16c494u: goto label_16c494;
        case 0x16c498u: goto label_16c498;
        case 0x16c49cu: goto label_16c49c;
        case 0x16c4a0u: goto label_16c4a0;
        case 0x16c4a4u: goto label_16c4a4;
        case 0x16c4a8u: goto label_16c4a8;
        case 0x16c4acu: goto label_16c4ac;
        case 0x16c4b0u: goto label_16c4b0;
        case 0x16c4b4u: goto label_16c4b4;
        case 0x16c4b8u: goto label_16c4b8;
        case 0x16c4bcu: goto label_16c4bc;
        case 0x16c4c0u: goto label_16c4c0;
        case 0x16c4c4u: goto label_16c4c4;
        case 0x16c4c8u: goto label_16c4c8;
        case 0x16c4ccu: goto label_16c4cc;
        case 0x16c4d0u: goto label_16c4d0;
        case 0x16c4d4u: goto label_16c4d4;
        case 0x16c4d8u: goto label_16c4d8;
        case 0x16c4dcu: goto label_16c4dc;
        case 0x16c4e0u: goto label_16c4e0;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c4e8u: goto label_16c4e8;
        case 0x16c4ecu: goto label_16c4ec;
        case 0x16c4f0u: goto label_16c4f0;
        case 0x16c4f4u: goto label_16c4f4;
        case 0x16c4f8u: goto label_16c4f8;
        case 0x16c4fcu: goto label_16c4fc;
        case 0x16c500u: goto label_16c500;
        case 0x16c504u: goto label_16c504;
        case 0x16c508u: goto label_16c508;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c510u: goto label_16c510;
        case 0x16c514u: goto label_16c514;
        case 0x16c518u: goto label_16c518;
        case 0x16c51cu: goto label_16c51c;
        case 0x16c520u: goto label_16c520;
        case 0x16c524u: goto label_16c524;
        case 0x16c528u: goto label_16c528;
        case 0x16c52cu: goto label_16c52c;
        case 0x16c530u: goto label_16c530;
        case 0x16c534u: goto label_16c534;
        case 0x16c538u: goto label_16c538;
        case 0x16c53cu: goto label_16c53c;
        case 0x16c540u: goto label_16c540;
        case 0x16c544u: goto label_16c544;
        case 0x16c548u: goto label_16c548;
        case 0x16c54cu: goto label_16c54c;
        case 0x16c550u: goto label_16c550;
        case 0x16c554u: goto label_16c554;
        case 0x16c558u: goto label_16c558;
        case 0x16c55cu: goto label_16c55c;
        case 0x16c560u: goto label_16c560;
        case 0x16c564u: goto label_16c564;
        case 0x16c568u: goto label_16c568;
        case 0x16c56cu: goto label_16c56c;
        case 0x16c570u: goto label_16c570;
        case 0x16c574u: goto label_16c574;
        case 0x16c578u: goto label_16c578;
        case 0x16c57cu: goto label_16c57c;
        case 0x16c580u: goto label_16c580;
        case 0x16c584u: goto label_16c584;
        case 0x16c588u: goto label_16c588;
        case 0x16c58cu: goto label_16c58c;
        case 0x16c590u: goto label_16c590;
        case 0x16c594u: goto label_16c594;
        case 0x16c598u: goto label_16c598;
        case 0x16c59cu: goto label_16c59c;
        case 0x16c5a0u: goto label_16c5a0;
        case 0x16c5a4u: goto label_16c5a4;
        case 0x16c5a8u: goto label_16c5a8;
        case 0x16c5acu: goto label_16c5ac;
        case 0x16c5b0u: goto label_16c5b0;
        case 0x16c5b4u: goto label_16c5b4;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5bcu: goto label_16c5bc;
        case 0x16c5c0u: goto label_16c5c0;
        case 0x16c5c4u: goto label_16c5c4;
        case 0x16c5c8u: goto label_16c5c8;
        case 0x16c5ccu: goto label_16c5cc;
        case 0x16c5d0u: goto label_16c5d0;
        case 0x16c5d4u: goto label_16c5d4;
        case 0x16c5d8u: goto label_16c5d8;
        case 0x16c5dcu: goto label_16c5dc;
        case 0x16c5e0u: goto label_16c5e0;
        case 0x16c5e4u: goto label_16c5e4;
        case 0x16c5e8u: goto label_16c5e8;
        case 0x16c5ecu: goto label_16c5ec;
        case 0x16c5f0u: goto label_16c5f0;
        case 0x16c5f4u: goto label_16c5f4;
        case 0x16c5f8u: goto label_16c5f8;
        case 0x16c5fcu: goto label_16c5fc;
        case 0x16c600u: goto label_16c600;
        case 0x16c604u: goto label_16c604;
        case 0x16c608u: goto label_16c608;
        case 0x16c60cu: goto label_16c60c;
        case 0x16c610u: goto label_16c610;
        case 0x16c614u: goto label_16c614;
        case 0x16c618u: goto label_16c618;
        case 0x16c61cu: goto label_16c61c;
        case 0x16c620u: goto label_16c620;
        case 0x16c624u: goto label_16c624;
        case 0x16c628u: goto label_16c628;
        case 0x16c62cu: goto label_16c62c;
        case 0x16c630u: goto label_16c630;
        case 0x16c634u: goto label_16c634;
        case 0x16c638u: goto label_16c638;
        case 0x16c63cu: goto label_16c63c;
        case 0x16c640u: goto label_16c640;
        case 0x16c644u: goto label_16c644;
        case 0x16c648u: goto label_16c648;
        case 0x16c64cu: goto label_16c64c;
        case 0x16c650u: goto label_16c650;
        case 0x16c654u: goto label_16c654;
        case 0x16c658u: goto label_16c658;
        case 0x16c65cu: goto label_16c65c;
        case 0x16c660u: goto label_16c660;
        case 0x16c664u: goto label_16c664;
        case 0x16c668u: goto label_16c668;
        case 0x16c66cu: goto label_16c66c;
        case 0x16c670u: goto label_16c670;
        case 0x16c674u: goto label_16c674;
        case 0x16c678u: goto label_16c678;
        case 0x16c67cu: goto label_16c67c;
        case 0x16c680u: goto label_16c680;
        case 0x16c684u: goto label_16c684;
        case 0x16c688u: goto label_16c688;
        case 0x16c68cu: goto label_16c68c;
        case 0x16c690u: goto label_16c690;
        case 0x16c694u: goto label_16c694;
        case 0x16c698u: goto label_16c698;
        case 0x16c69cu: goto label_16c69c;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6a4u: goto label_16c6a4;
        case 0x16c6a8u: goto label_16c6a8;
        case 0x16c6acu: goto label_16c6ac;
        case 0x16c6b0u: goto label_16c6b0;
        case 0x16c6b4u: goto label_16c6b4;
        case 0x16c6b8u: goto label_16c6b8;
        case 0x16c6bcu: goto label_16c6bc;
        case 0x16c6c0u: goto label_16c6c0;
        case 0x16c6c4u: goto label_16c6c4;
        case 0x16c6c8u: goto label_16c6c8;
        case 0x16c6ccu: goto label_16c6cc;
        case 0x16c6d0u: goto label_16c6d0;
        case 0x16c6d4u: goto label_16c6d4;
        case 0x16c6d8u: goto label_16c6d8;
        case 0x16c6dcu: goto label_16c6dc;
        case 0x16c6e0u: goto label_16c6e0;
        case 0x16c6e4u: goto label_16c6e4;
        case 0x16c6e8u: goto label_16c6e8;
        case 0x16c6ecu: goto label_16c6ec;
        case 0x16c6f0u: goto label_16c6f0;
        case 0x16c6f4u: goto label_16c6f4;
        case 0x16c6f8u: goto label_16c6f8;
        case 0x16c6fcu: goto label_16c6fc;
        case 0x16c700u: goto label_16c700;
        case 0x16c704u: goto label_16c704;
        case 0x16c708u: goto label_16c708;
        case 0x16c70cu: goto label_16c70c;
        case 0x16c710u: goto label_16c710;
        case 0x16c714u: goto label_16c714;
        case 0x16c718u: goto label_16c718;
        case 0x16c71cu: goto label_16c71c;
        case 0x16c720u: goto label_16c720;
        case 0x16c724u: goto label_16c724;
        case 0x16c728u: goto label_16c728;
        case 0x16c72cu: goto label_16c72c;
        case 0x16c730u: goto label_16c730;
        case 0x16c734u: goto label_16c734;
        case 0x16c738u: goto label_16c738;
        case 0x16c73cu: goto label_16c73c;
        case 0x16c740u: goto label_16c740;
        case 0x16c744u: goto label_16c744;
        case 0x16c748u: goto label_16c748;
        case 0x16c74cu: goto label_16c74c;
        case 0x16c750u: goto label_16c750;
        case 0x16c754u: goto label_16c754;
        case 0x16c758u: goto label_16c758;
        case 0x16c75cu: goto label_16c75c;
        case 0x16c760u: goto label_16c760;
        case 0x16c764u: goto label_16c764;
        case 0x16c768u: goto label_16c768;
        case 0x16c76cu: goto label_16c76c;
        case 0x16c770u: goto label_16c770;
        case 0x16c774u: goto label_16c774;
        case 0x16c778u: goto label_16c778;
        case 0x16c77cu: goto label_16c77c;
        case 0x16c780u: goto label_16c780;
        case 0x16c784u: goto label_16c784;
        case 0x16c788u: goto label_16c788;
        case 0x16c78cu: goto label_16c78c;
        case 0x16c790u: goto label_16c790;
        case 0x16c794u: goto label_16c794;
        case 0x16c798u: goto label_16c798;
        case 0x16c79cu: goto label_16c79c;
        case 0x16c7a0u: goto label_16c7a0;
        case 0x16c7a4u: goto label_16c7a4;
        case 0x16c7a8u: goto label_16c7a8;
        case 0x16c7acu: goto label_16c7ac;
        case 0x16c7b0u: goto label_16c7b0;
        case 0x16c7b4u: goto label_16c7b4;
        case 0x16c7b8u: goto label_16c7b8;
        case 0x16c7bcu: goto label_16c7bc;
        case 0x16c7c0u: goto label_16c7c0;
        case 0x16c7c4u: goto label_16c7c4;
        case 0x16c7c8u: goto label_16c7c8;
        case 0x16c7ccu: goto label_16c7cc;
        case 0x16c7d0u: goto label_16c7d0;
        case 0x16c7d4u: goto label_16c7d4;
        case 0x16c7d8u: goto label_16c7d8;
        case 0x16c7dcu: goto label_16c7dc;
        case 0x16c7e0u: goto label_16c7e0;
        case 0x16c7e4u: goto label_16c7e4;
        case 0x16c7e8u: goto label_16c7e8;
        case 0x16c7ecu: goto label_16c7ec;
        case 0x16c7f0u: goto label_16c7f0;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c7f8u: goto label_16c7f8;
        case 0x16c7fcu: goto label_16c7fc;
        case 0x16c800u: goto label_16c800;
        case 0x16c804u: goto label_16c804;
        case 0x16c808u: goto label_16c808;
        case 0x16c80cu: goto label_16c80c;
        case 0x16c810u: goto label_16c810;
        case 0x16c814u: goto label_16c814;
        case 0x16c818u: goto label_16c818;
        case 0x16c81cu: goto label_16c81c;
        case 0x16c820u: goto label_16c820;
        case 0x16c824u: goto label_16c824;
        case 0x16c828u: goto label_16c828;
        case 0x16c82cu: goto label_16c82c;
        default: return;
    }

label_16c060:
    // 0x16c060: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c064:
    // 0x16c064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c068:
    // 0x16c068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c06c:
    // 0x16c06c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c070:
    // 0x16c070: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c074:
    // 0x16c074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c078:
    // 0x16c078: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c07c:
    // 0x16c07c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c080:
    // 0x16c080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c084:
    // 0x16c084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c088:
    // 0x16c088: 0x3e00008  jr          $ra
label_16c08c:
    if (ctx->pc == 0x16C08Cu) {
        ctx->pc = 0x16C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C088u;
        // 0x16c08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C090u;
        goto label_16c090;
    }
    ctx->pc = 0x16C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C088u;
        // 0x16c08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C090u;
label_16c090:
    // 0x16c090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16c094:
    // 0x16c094: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x16c094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_16c098:
    // 0x16c098: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16c09c:
    // 0x16c09c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_16c0a0:
    // 0x16c0a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16c0a4:
    // 0x16c0a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16c0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16c0a8:
    // 0x16c0a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16c0a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c0ac:
    // 0x16c0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16c0b0:
    // 0x16c0b0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x16c0b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16c0b4:
    // 0x16c0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c0b8:
    // 0x16c0b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16c0b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c0bc:
    // 0x16c0bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c0c0:
    // 0x16c0c0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x16c0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c4:
    // 0x16c0c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c0c8:
    // 0x16c0c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16c0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c0cc:
    // 0x16c0cc: 0x10200079  beqz        $at, . + 4 + (0x79 << 2)
label_16c0d0:
    if (ctx->pc == 0x16C0D0u) {
        ctx->pc = 0x16C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0CCu;
        // 0x16c0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0D4u;
        goto label_16c0d4;
    }
    ctx->pc = 0x16C0CCu;
    {
        const bool branch_taken_0x16c0cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0CCu;
        // 0x16c0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c0cc) {
            ctx->pc = 0x16C2B4u;
            goto label_16c2b4;
        }
    }
    ctx->pc = 0x16C0D4u;
label_16c0d4:
    // 0x16c0d4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c0d8:
    // 0x16c0d8: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
label_16c0dc:
    if (ctx->pc == 0x16C0DCu) {
        ctx->pc = 0x16C0E0u;
        goto label_16c0e0;
    }
    ctx->pc = 0x16C0D8u;
    {
        const bool branch_taken_0x16c0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c0d8) {
            ctx->pc = 0x16C2B4u;
            goto label_16c2b4;
        }
    }
    ctx->pc = 0x16C0E0u;
label_16c0e0:
    // 0x16c0e0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c0e4:
    // 0x16c0e4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c0e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c0e8:
    // 0x16c0e8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16c0ec:
    if (ctx->pc == 0x16C0ECu) {
        ctx->pc = 0x16C0F0u;
        goto label_16c0f0;
    }
    ctx->pc = 0x16C0E8u;
    {
        const bool branch_taken_0x16c0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c0e8) {
            ctx->pc = 0x16C114u;
            goto label_16c114;
        }
    }
    ctx->pc = 0x16C0F0u;
label_16c0f0:
    // 0x16c0f0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c0f4:
    // 0x16c0f4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c0f8:
    // 0x16c0f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c0fc:
    // 0x16c0fc: 0xc08d61c  jal         func_235870
label_16c100:
    if (ctx->pc == 0x16C100u) {
        ctx->pc = 0x16C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0FCu;
        // 0x16c100: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C104u;
        goto label_16c104;
    }
    ctx->pc = 0x16C0FCu;
    SET_GPR_U32(ctx, 31, 0x16C104u);
    ctx->pc = 0x16C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0FCu;
    // 0x16c100: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C104u;
label_16c104:
    // 0x16c104: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c108:
    // 0x16c108: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c10c:
    if (ctx->pc == 0x16C10Cu) {
        ctx->pc = 0x16C110u;
        goto label_16c110;
    }
    ctx->pc = 0x16C108u;
    {
        const bool branch_taken_0x16c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c108) {
            ctx->pc = 0x16C0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c0f0;
        }
    }
    ctx->pc = 0x16C110u;
label_16c110:
    // 0x16c110: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c114:
    // 0x16c114: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x16c114u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16c118:
    // 0x16c118: 0x152b80  sll         $a1, $s5, 14
    ctx->pc = 0x16c118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 14));
label_16c11c:
    // 0x16c11c: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x16c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_16c120:
    // 0x16c120: 0x1121c0  sll         $a0, $s1, 7
    ctx->pc = 0x16c120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16c124:
    // 0x16c124: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c128:
    // 0x16c128: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x16c128u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_16c12c:
    // 0x16c12c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16c12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16c130:
    // 0x16c130: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x16c130u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
label_16c134:
    // 0x16c134: 0x2642825  or          $a1, $s3, $a0
    ctx->pc = 0x16c134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
label_16c138:
    // 0x16c138: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16c138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16c13c:
    // 0x16c13c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c140:
    // 0x16c140: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x16c140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16c144:
    // 0x16c144: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16c144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16c148:
    // 0x16c148: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c14c:
    // 0x16c14c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c150:
    // 0x16c150: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c154:
    // 0x16c154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c158:
    // 0x16c158: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c15c:
    // 0x16c15c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c160:
    // 0x16c160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c164:
    // 0x16c164: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c168:
    // 0x16c168: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c16c:
    // 0x16c16c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c16cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c170:
    // 0x16c170: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c174:
    if (ctx->pc == 0x16C174u) {
        ctx->pc = 0x16C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C170u;
        // 0x16c174: 0x328400ff  andi        $a0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C178u;
        goto label_16c178;
    }
    ctx->pc = 0x16C170u;
    {
        const bool branch_taken_0x16c170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C170u;
        // 0x16c174: 0x328400ff  andi        $a0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c170) {
            ctx->pc = 0x16C1A0u;
            goto label_16c1a0;
        }
    }
    ctx->pc = 0x16C178u;
label_16c178:
    // 0x16c178: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c17c:
    // 0x16c17c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c180:
    // 0x16c180: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c184:
    // 0x16c184: 0xc08d61c  jal         func_235870
label_16c188:
    if (ctx->pc == 0x16C188u) {
        ctx->pc = 0x16C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C184u;
        // 0x16c188: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C18Cu;
        goto label_16c18c;
    }
    ctx->pc = 0x16C184u;
    SET_GPR_U32(ctx, 31, 0x16C18Cu);
    ctx->pc = 0x16C188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C184u;
    // 0x16c188: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C18Cu;
label_16c18c:
    // 0x16c18c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c190:
    // 0x16c190: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c194:
    if (ctx->pc == 0x16C194u) {
        ctx->pc = 0x16C198u;
        goto label_16c198;
    }
    ctx->pc = 0x16C190u;
    {
        const bool branch_taken_0x16c190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c190) {
            ctx->pc = 0x16C178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c178;
        }
    }
    ctx->pc = 0x16C198u;
label_16c198:
    // 0x16c198: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c19c:
    // 0x16c19c: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x16c19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_16c1a0:
    // 0x16c1a0: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x16c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_16c1a4:
    // 0x16c1a4: 0x42b80  sll         $a1, $a0, 14
    ctx->pc = 0x16c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16c1a8:
    // 0x16c1a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16c1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c1ac:
    // 0x16c1ac: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x16c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16c1b0:
    // 0x16c1b0: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x16c1b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16c1b4:
    // 0x16c1b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16c1b8:
    // 0x16c1b8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c1bc:
    // 0x16c1bc: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x16c1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16c1c0:
    // 0x16c1c0: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x16c1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_16c1c4:
    // 0x16c1c4: 0x712825  or          $a1, $v1, $s1
    ctx->pc = 0x16c1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_16c1c8:
    // 0x16c1c8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c1cc:
    // 0x16c1cc: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c1d0:
    // 0x16c1d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c1d4:
    // 0x16c1d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c1d8:
    // 0x16c1d8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c1dc:
    // 0x16c1dc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c1e0:
    // 0x16c1e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c1e4:
    // 0x16c1e4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c1e8:
    // 0x16c1e8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c1ec:
    // 0x16c1ec: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c1ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c1f0:
    // 0x16c1f0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c1f4:
    if (ctx->pc == 0x16C1F4u) {
        ctx->pc = 0x16C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1F0u;
        // 0x16c1f4: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1F8u;
        goto label_16c1f8;
    }
    ctx->pc = 0x16C1F0u;
    {
        const bool branch_taken_0x16c1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1F0u;
        // 0x16c1f4: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1f0) {
            ctx->pc = 0x16C220u;
            goto label_16c220;
        }
    }
    ctx->pc = 0x16C1F8u;
label_16c1f8:
    // 0x16c1f8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c1fc:
    // 0x16c1fc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c200:
    // 0x16c200: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c204:
    // 0x16c204: 0xc08d61c  jal         func_235870
label_16c208:
    if (ctx->pc == 0x16C208u) {
        ctx->pc = 0x16C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C204u;
        // 0x16c208: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C20Cu;
        goto label_16c20c;
    }
    ctx->pc = 0x16C204u;
    SET_GPR_U32(ctx, 31, 0x16C20Cu);
    ctx->pc = 0x16C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C204u;
    // 0x16c208: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C20Cu;
label_16c20c:
    // 0x16c20c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c210:
    // 0x16c210: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c214:
    if (ctx->pc == 0x16C214u) {
        ctx->pc = 0x16C218u;
        goto label_16c218;
    }
    ctx->pc = 0x16C210u;
    {
        const bool branch_taken_0x16c210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c210) {
            ctx->pc = 0x16C1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c1f8;
        }
    }
    ctx->pc = 0x16C218u;
label_16c218:
    // 0x16c218: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c21c:
    // 0x16c21c: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x16c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_16c220:
    // 0x16c220: 0x2721825  or          $v1, $s3, $s2
    ctx->pc = 0x16c220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_16c224:
    // 0x16c224: 0x2042825  or          $a1, $s0, $a0
    ctx->pc = 0x16c224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_16c228:
    // 0x16c228: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c22c:
    // 0x16c22c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c230:
    // 0x16c230: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c234:
    // 0x16c234: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c238:
    // 0x16c238: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c23c:
    // 0x16c23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c240:
    // 0x16c240: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c244:
    // 0x16c244: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c248:
    // 0x16c248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c24c:
    // 0x16c24c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c250:
    // 0x16c250: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c254:
    // 0x16c254: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c258:
    // 0x16c258: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16c25c:
    if (ctx->pc == 0x16C25Cu) {
        ctx->pc = 0x16C260u;
        goto label_16c260;
    }
    ctx->pc = 0x16C258u;
    {
        const bool branch_taken_0x16c258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c258) {
            ctx->pc = 0x16C284u;
            goto label_16c284;
        }
    }
    ctx->pc = 0x16C260u;
label_16c260:
    // 0x16c260: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c264:
    // 0x16c264: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c268:
    // 0x16c268: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c26c:
    // 0x16c26c: 0xc08d61c  jal         func_235870
label_16c270:
    if (ctx->pc == 0x16C270u) {
        ctx->pc = 0x16C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C26Cu;
        // 0x16c270: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C274u;
        goto label_16c274;
    }
    ctx->pc = 0x16C26Cu;
    SET_GPR_U32(ctx, 31, 0x16C274u);
    ctx->pc = 0x16C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C26Cu;
    // 0x16c270: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C274u;
label_16c274:
    // 0x16c274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c278:
    // 0x16c278: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c27c:
    if (ctx->pc == 0x16C27Cu) {
        ctx->pc = 0x16C280u;
        goto label_16c280;
    }
    ctx->pc = 0x16C278u;
    {
        const bool branch_taken_0x16c278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c278) {
            ctx->pc = 0x16C260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c260;
        }
    }
    ctx->pc = 0x16C280u;
label_16c280:
    // 0x16c280: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c284:
    // 0x16c284: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c288:
    // 0x16c288: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x16c288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_16c28c:
    // 0x16c28c: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16c28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16c290:
    // 0x16c290: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c294:
    // 0x16c294: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x16c294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
label_16c298:
    // 0x16c298: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c29c:
    // 0x16c29c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c2a0:
    // 0x16c2a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c2a4:
    // 0x16c2a4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c2a8:
    // 0x16c2a8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c2ac:
    // 0x16c2ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c2b0:
    // 0x16c2b0: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c2b4:
    // 0x16c2b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16c2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16c2b8:
    // 0x16c2b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16c2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16c2bc:
    // 0x16c2bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16c2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16c2c0:
    // 0x16c2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c2c4:
    // 0x16c2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c2c8:
    // 0x16c2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c2cc:
    // 0x16c2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c2d0:
    // 0x16c2d0: 0x3e00008  jr          $ra
label_16c2d4:
    if (ctx->pc == 0x16C2D4u) {
        ctx->pc = 0x16C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2D0u;
        // 0x16c2d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2D8u;
        goto label_16c2d8;
    }
    ctx->pc = 0x16C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2D0u;
        // 0x16c2d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C2D8u;
label_16c2d8:
    // 0x16c2d8: 0x0  nop
    ctx->pc = 0x16c2d8u;
    // NOP
label_16c2dc:
    // 0x16c2dc: 0x0  nop
    ctx->pc = 0x16c2dcu;
    // NOP
label_16c2e0:
    // 0x16c2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16c2e4:
    // 0x16c2e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16c2e8:
    // 0x16c2e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c2ec:
    // 0x16c2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c2f0:
    // 0x16c2f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c2f4:
    // 0x16c2f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16c2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c2f8:
    // 0x16c2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c2fc:
    // 0x16c2fc: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x16c2fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_16c300:
    // 0x16c300: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x16c300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_16c304:
    // 0x16c304: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_16c308:
    if (ctx->pc == 0x16C308u) {
        ctx->pc = 0x16C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C304u;
        // 0x16c308: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C30Cu;
        goto label_16c30c;
    }
    ctx->pc = 0x16C304u;
    {
        const bool branch_taken_0x16c304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C304u;
        // 0x16c308: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c304) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C30Cu;
label_16c30c:
    // 0x16c30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c310:
    // 0x16c310: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16c310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c314:
    // 0x16c314: 0xc33004  sllv        $a2, $v1, $a2
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_16c318:
    // 0x16c318: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16c318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16c31c:
    // 0x16c31c: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x16c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
label_16c320:
    // 0x16c320: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16c324:
    // 0x16c324: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16c328:
    // 0x16c328: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x16c328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_16c32c:
    // 0x16c32c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_16c330:
    if (ctx->pc == 0x16C330u) {
        ctx->pc = 0x16C334u;
        goto label_16c334;
    }
    ctx->pc = 0x16C32Cu;
    {
        const bool branch_taken_0x16c32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c32c) {
            ctx->pc = 0x16C33Cu;
            goto label_16c33c;
        }
    }
    ctx->pc = 0x16C334u;
label_16c334:
    // 0x16c334: 0x10000040  b           . + 4 + (0x40 << 2)
label_16c338:
    if (ctx->pc == 0x16C338u) {
        ctx->pc = 0x16C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C334u;
        // 0x16c338: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C33Cu;
        goto label_16c33c;
    }
    ctx->pc = 0x16C334u;
    {
        const bool branch_taken_0x16c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C334u;
        // 0x16c338: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c334) {
            ctx->pc = 0x16C438u;
            goto label_16c438;
        }
    }
    ctx->pc = 0x16C33Cu;
label_16c33c:
    // 0x16c33c: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c340:
    // 0x16c340: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x16c340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_16c344:
    // 0x16c344: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16c344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16c348:
    // 0x16c348: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_16c34c:
    // 0x16c34c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_16c350:
    if (ctx->pc == 0x16C350u) {
        ctx->pc = 0x16C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C34Cu;
        // 0x16c350: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C354u;
        goto label_16c354;
    }
    ctx->pc = 0x16C34Cu;
    {
        const bool branch_taken_0x16c34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C34Cu;
        // 0x16c350: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c34c) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C354u;
label_16c354:
    // 0x16c354: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c358:
    // 0x16c358: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c35c:
    // 0x16c35c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c360:
    if (ctx->pc == 0x16C360u) {
        ctx->pc = 0x16C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C35Cu;
        // 0x16c360: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C364u;
        goto label_16c364;
    }
    ctx->pc = 0x16C35Cu;
    {
        const bool branch_taken_0x16c35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C35Cu;
        // 0x16c360: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c35c) {
            ctx->pc = 0x16C38Cu;
            goto label_16c38c;
        }
    }
    ctx->pc = 0x16C364u;
label_16c364:
    // 0x16c364: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c368:
    // 0x16c368: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c36c:
    // 0x16c36c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c370:
    // 0x16c370: 0xc08d61c  jal         func_235870
label_16c374:
    if (ctx->pc == 0x16C374u) {
        ctx->pc = 0x16C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C370u;
        // 0x16c374: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C378u;
        goto label_16c378;
    }
    ctx->pc = 0x16C370u;
    SET_GPR_U32(ctx, 31, 0x16C378u);
    ctx->pc = 0x16C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C370u;
    // 0x16c374: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C378u;
label_16c378:
    // 0x16c378: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c37c:
    // 0x16c37c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c380:
    if (ctx->pc == 0x16C380u) {
        ctx->pc = 0x16C384u;
        goto label_16c384;
    }
    ctx->pc = 0x16C37Cu;
    {
        const bool branch_taken_0x16c37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c37c) {
            ctx->pc = 0x16C364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c364;
        }
    }
    ctx->pc = 0x16C384u;
label_16c384:
    // 0x16c384: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c388:
    // 0x16c388: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16c388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16c38c:
    // 0x16c38c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x16c38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16c390:
    // 0x16c390: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x16c390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16c394:
    // 0x16c394: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16c394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_16c398:
    // 0x16c398: 0xa38025  or          $s0, $a1, $v1
    ctx->pc = 0x16c398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c39c:
    // 0x16c39c: 0x902825  or          $a1, $a0, $s0
    ctx->pc = 0x16c39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_16c3a0:
    // 0x16c3a0: 0x3c035600  lui         $v1, 0x5600
    ctx->pc = 0x16c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22016 << 16));
label_16c3a4:
    // 0x16c3a4: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c3a8:
    // 0x16c3a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c3ac:
    // 0x16c3ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c3b0:
    // 0x16c3b0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c3b4:
    // 0x16c3b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c3b8:
    // 0x16c3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c3bc:
    // 0x16c3bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c3c0:
    // 0x16c3c0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c3c4:
    // 0x16c3c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c3c8:
    // 0x16c3c8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c3cc:
    // 0x16c3cc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c3d0:
    // 0x16c3d0: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c3d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c3d4:
    // 0x16c3d4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c3d8:
    if (ctx->pc == 0x16C3D8u) {
        ctx->pc = 0x16C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3D4u;
        // 0x16c3d8: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3DCu;
        goto label_16c3dc;
    }
    ctx->pc = 0x16C3D4u;
    {
        const bool branch_taken_0x16c3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3D4u;
        // 0x16c3d8: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3d4) {
            ctx->pc = 0x16C404u;
            goto label_16c404;
        }
    }
    ctx->pc = 0x16C3DCu;
label_16c3dc:
    // 0x16c3dc: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c3e0:
    // 0x16c3e0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c3e4:
    // 0x16c3e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c3e8:
    // 0x16c3e8: 0xc08d61c  jal         func_235870
label_16c3ec:
    if (ctx->pc == 0x16C3ECu) {
        ctx->pc = 0x16C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3E8u;
        // 0x16c3ec: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3F0u;
        goto label_16c3f0;
    }
    ctx->pc = 0x16C3E8u;
    SET_GPR_U32(ctx, 31, 0x16C3F0u);
    ctx->pc = 0x16C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3E8u;
    // 0x16c3ec: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C3F0u;
label_16c3f0:
    // 0x16c3f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c3f4:
    // 0x16c3f4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c3f8:
    if (ctx->pc == 0x16C3F8u) {
        ctx->pc = 0x16C3FCu;
        goto label_16c3fc;
    }
    ctx->pc = 0x16C3F4u;
    {
        const bool branch_taken_0x16c3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c3f4) {
            ctx->pc = 0x16C3DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c3dc;
        }
    }
    ctx->pc = 0x16C3FCu;
label_16c3fc:
    // 0x16c3fc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c400:
    // 0x16c400: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16c400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16c404:
    // 0x16c404: 0x3c036600  lui         $v1, 0x6600
    ctx->pc = 0x16c404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26112 << 16));
label_16c408:
    // 0x16c408: 0x902825  or          $a1, $a0, $s0
    ctx->pc = 0x16c408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_16c40c:
    // 0x16c40c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c410:
    // 0x16c410: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c414:
    // 0x16c414: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c418:
    // 0x16c418: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c41c:
    // 0x16c41c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c420:
    // 0x16c420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c424:
    // 0x16c424: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c428:
    // 0x16c428: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c42c:
    // 0x16c42c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c430:
    // 0x16c430: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c434:
    // 0x16c434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c438:
    // 0x16c438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c43c:
    // 0x16c43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c440:
    // 0x16c440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c444:
    // 0x16c444: 0x3e00008  jr          $ra
label_16c448:
    if (ctx->pc == 0x16C448u) {
        ctx->pc = 0x16C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C444u;
        // 0x16c448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C44Cu;
        goto label_16c44c;
    }
    ctx->pc = 0x16C444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C444u;
        // 0x16c448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C44Cu;
label_16c44c:
    // 0x16c44c: 0x0  nop
    ctx->pc = 0x16c44cu;
    // NOP
label_16c450:
    // 0x16c450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c454:
    // 0x16c454: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x16c454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_16c458:
    // 0x16c458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c45c:
    // 0x16c45c: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x16c45cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_16c460:
    // 0x16c460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c464:
    // 0x16c464: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
label_16c468:
    if (ctx->pc == 0x16C468u) {
        ctx->pc = 0x16C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C464u;
        // 0x16c468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C46Cu;
        goto label_16c46c;
    }
    ctx->pc = 0x16C464u;
    {
        const bool branch_taken_0x16c464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C464u;
        // 0x16c468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c464) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C46Cu;
label_16c46c:
    // 0x16c46c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c470:
    // 0x16c470: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c474:
    // 0x16c474: 0xc33004  sllv        $a2, $v1, $a2
    ctx->pc = 0x16c474u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_16c478:
    // 0x16c478: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16c47c:
    // 0x16c47c: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
label_16c480:
    // 0x16c480: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16c484:
    // 0x16c484: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x16c484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16c488:
    // 0x16c488: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x16c488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_16c48c:
    // 0x16c48c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_16c490:
    if (ctx->pc == 0x16C490u) {
        ctx->pc = 0x16C494u;
        goto label_16c494;
    }
    ctx->pc = 0x16C48Cu;
    {
        const bool branch_taken_0x16c48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c48c) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C494u;
label_16c494:
    // 0x16c494: 0xc01827  not         $v1, $a2
    ctx->pc = 0x16c494u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_16c498:
    // 0x16c498: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16c498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_16c49c:
    // 0x16c49c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16c4a0:
    // 0x16c4a0: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c4a4:
    // 0x16c4a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x16c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_16c4a8:
    // 0x16c4a8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16c4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16c4ac:
    // 0x16c4ac: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x16c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_16c4b0:
    // 0x16c4b0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_16c4b4:
    if (ctx->pc == 0x16C4B4u) {
        ctx->pc = 0x16C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4B0u;
        // 0x16c4b4: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4B8u;
        goto label_16c4b8;
    }
    ctx->pc = 0x16C4B0u;
    {
        const bool branch_taken_0x16c4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4B0u;
        // 0x16c4b4: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4b0) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C4B8u;
label_16c4b8:
    // 0x16c4b8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c4bc:
    // 0x16c4bc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c4bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c4c0:
    // 0x16c4c0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c4c4:
    if (ctx->pc == 0x16C4C4u) {
        ctx->pc = 0x16C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4C0u;
        // 0x16c4c4: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4C8u;
        goto label_16c4c8;
    }
    ctx->pc = 0x16C4C0u;
    {
        const bool branch_taken_0x16c4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4C0u;
        // 0x16c4c4: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4c0) {
            ctx->pc = 0x16C4F0u;
            goto label_16c4f0;
        }
    }
    ctx->pc = 0x16C4C8u;
label_16c4c8:
    // 0x16c4c8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c4cc:
    // 0x16c4cc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c4d0:
    // 0x16c4d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c4d4:
    // 0x16c4d4: 0xc08d61c  jal         func_235870
label_16c4d8:
    if (ctx->pc == 0x16C4D8u) {
        ctx->pc = 0x16C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4D4u;
        // 0x16c4d8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4DCu;
        goto label_16c4dc;
    }
    ctx->pc = 0x16C4D4u;
    SET_GPR_U32(ctx, 31, 0x16C4DCu);
    ctx->pc = 0x16C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4D4u;
    // 0x16c4d8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C4DCu;
label_16c4dc:
    // 0x16c4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c4e0:
    // 0x16c4e0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c4e4:
    if (ctx->pc == 0x16C4E4u) {
        ctx->pc = 0x16C4E8u;
        goto label_16c4e8;
    }
    ctx->pc = 0x16C4E0u;
    {
        const bool branch_taken_0x16c4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c4e0) {
            ctx->pc = 0x16C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c4c8;
        }
    }
    ctx->pc = 0x16C4E8u;
label_16c4e8:
    // 0x16c4e8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c4ec:
    // 0x16c4ec: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16c4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16c4f0:
    // 0x16c4f0: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
label_16c4f4:
    // 0x16c4f4: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_16c4f8:
    // 0x16c4f8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c4fc:
    // 0x16c4fc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c500:
    // 0x16c500: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c504:
    // 0x16c504: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c508:
    // 0x16c508: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c50c:
    // 0x16c50c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c510:
    // 0x16c510: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c514:
    // 0x16c514: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c518:
    // 0x16c518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c51c:
    // 0x16c51c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c520:
    // 0x16c520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c524:
    // 0x16c524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c528:
    // 0x16c528: 0x3e00008  jr          $ra
label_16c52c:
    if (ctx->pc == 0x16C52Cu) {
        ctx->pc = 0x16C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C528u;
        // 0x16c52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C530u;
        goto label_16c530;
    }
    ctx->pc = 0x16C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C528u;
        // 0x16c52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C530u;
label_16c530:
    // 0x16c530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16c534:
    // 0x16c534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16c538:
    // 0x16c538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16c53c:
    // 0x16c53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c540:
    // 0x16c540: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16c540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c544:
    // 0x16c544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c548:
    // 0x16c548: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16c548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c54c:
    // 0x16c54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c550:
    // 0x16c550: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x16c550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c554:
    // 0x16c554: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x16c554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_16c558:
    // 0x16c558: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x16c558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_16c55c:
    // 0x16c55c: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
label_16c560:
    if (ctx->pc == 0x16C560u) {
        ctx->pc = 0x16C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C55Cu;
        // 0x16c560: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C564u;
        goto label_16c564;
    }
    ctx->pc = 0x16C55Cu;
    {
        const bool branch_taken_0x16c55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C55Cu;
        // 0x16c560: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c55c) {
            ctx->pc = 0x16C764u;
            goto label_16c764;
        }
    }
    ctx->pc = 0x16C564u;
label_16c564:
    // 0x16c564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c568:
    // 0x16c568: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16c568u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c56c:
    // 0x16c56c: 0xc33004  sllv        $a2, $v1, $a2
    ctx->pc = 0x16c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_16c570:
    // 0x16c570: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16c570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16c574:
    // 0x16c574: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x16c574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
label_16c578:
    // 0x16c578: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x16c578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16c57c:
    // 0x16c57c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x16c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16c580:
    // 0x16c580: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x16c580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_16c584:
    // 0x16c584: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
label_16c588:
    if (ctx->pc == 0x16C588u) {
        ctx->pc = 0x16C58Cu;
        goto label_16c58c;
    }
    ctx->pc = 0x16C584u;
    {
        const bool branch_taken_0x16c584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c584) {
            ctx->pc = 0x16C764u;
            goto label_16c764;
        }
    }
    ctx->pc = 0x16C58Cu;
label_16c58c:
    // 0x16c58c: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x16c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_16c590:
    // 0x16c590: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16c590u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16c594:
    // 0x16c594: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c598:
    // 0x16c598: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_16c59c:
    // 0x16c59c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16c59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16c5a0:
    // 0x16c5a0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_16c5a4:
    // 0x16c5a4: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
label_16c5a8:
    if (ctx->pc == 0x16C5A8u) {
        ctx->pc = 0x16C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5A4u;
        // 0x16c5a8: 0x309100ff  andi        $s1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5ACu;
        goto label_16c5ac;
    }
    ctx->pc = 0x16C5A4u;
    {
        const bool branch_taken_0x16c5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5A4u;
        // 0x16c5a8: 0x309100ff  andi        $s1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5a4) {
            ctx->pc = 0x16C764u;
            goto label_16c764;
        }
    }
    ctx->pc = 0x16C5ACu;
label_16c5ac:
    // 0x16c5ac: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c5b0:
    // 0x16c5b0: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c5b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c5b4:
    // 0x16c5b4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c5b8:
    if (ctx->pc == 0x16C5B8u) {
        ctx->pc = 0x16C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5B4u;
        // 0x16c5b8: 0x132380  sll         $a0, $s3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5BCu;
        goto label_16c5bc;
    }
    ctx->pc = 0x16C5B4u;
    {
        const bool branch_taken_0x16c5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5B4u;
        // 0x16c5b8: 0x132380  sll         $a0, $s3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5b4) {
            ctx->pc = 0x16C5E4u;
            goto label_16c5e4;
        }
    }
    ctx->pc = 0x16C5BCu;
label_16c5bc:
    // 0x16c5bc: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c5c0:
    // 0x16c5c0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c5c4:
    // 0x16c5c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c5c8:
    // 0x16c5c8: 0xc08d61c  jal         func_235870
label_16c5cc:
    if (ctx->pc == 0x16C5CCu) {
        ctx->pc = 0x16C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5C8u;
        // 0x16c5cc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5D0u;
        goto label_16c5d0;
    }
    ctx->pc = 0x16C5C8u;
    SET_GPR_U32(ctx, 31, 0x16C5D0u);
    ctx->pc = 0x16C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5C8u;
    // 0x16c5cc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C5D0u;
label_16c5d0:
    // 0x16c5d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c5d4:
    // 0x16c5d4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c5d8:
    if (ctx->pc == 0x16C5D8u) {
        ctx->pc = 0x16C5DCu;
        goto label_16c5dc;
    }
    ctx->pc = 0x16C5D4u;
    {
        const bool branch_taken_0x16c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c5d4) {
            ctx->pc = 0x16C5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c5bc;
        }
    }
    ctx->pc = 0x16C5DCu;
label_16c5dc:
    // 0x16c5dc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c5e0:
    // 0x16c5e0: 0x132380  sll         $a0, $s3, 14
    ctx->pc = 0x16c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
label_16c5e4:
    // 0x16c5e4: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_16c5e8:
    // 0x16c5e8: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16c5e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16c5ec:
    // 0x16c5ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16c5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16c5f0:
    // 0x16c5f0: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x16c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16c5f4:
    // 0x16c5f4: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x16c5f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16c5f8:
    // 0x16c5f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16c5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16c5fc:
    // 0x16c5fc: 0x2442825  or          $a1, $s2, $a0
    ctx->pc = 0x16c5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
label_16c600:
    // 0x16c600: 0x3c038600  lui         $v1, 0x8600
    ctx->pc = 0x16c600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34304 << 16));
label_16c604:
    // 0x16c604: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c608:
    // 0x16c608: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16c608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16c60c:
    // 0x16c60c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c610:
    // 0x16c610: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c614:
    // 0x16c614: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c618:
    // 0x16c618: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c61c:
    // 0x16c61c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c620:
    // 0x16c620: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c624:
    // 0x16c624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c628:
    // 0x16c628: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c62c:
    // 0x16c62c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c630:
    // 0x16c630: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c634:
    // 0x16c634: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c638:
    if (ctx->pc == 0x16C638u) {
        ctx->pc = 0x16C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C634u;
        // 0x16c638: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C63Cu;
        goto label_16c63c;
    }
    ctx->pc = 0x16C634u;
    {
        const bool branch_taken_0x16c634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C634u;
        // 0x16c638: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c634) {
            ctx->pc = 0x16C664u;
            goto label_16c664;
        }
    }
    ctx->pc = 0x16C63Cu;
label_16c63c:
    // 0x16c63c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c640:
    // 0x16c640: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c644:
    // 0x16c644: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c648:
    // 0x16c648: 0xc08d61c  jal         func_235870
label_16c64c:
    if (ctx->pc == 0x16C64Cu) {
        ctx->pc = 0x16C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C648u;
        // 0x16c64c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C650u;
        goto label_16c650;
    }
    ctx->pc = 0x16C648u;
    SET_GPR_U32(ctx, 31, 0x16C650u);
    ctx->pc = 0x16C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C648u;
    // 0x16c64c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C650u;
label_16c650:
    // 0x16c650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c654:
    // 0x16c654: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c658:
    if (ctx->pc == 0x16C658u) {
        ctx->pc = 0x16C65Cu;
        goto label_16c65c;
    }
    ctx->pc = 0x16C654u;
    {
        const bool branch_taken_0x16c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c654) {
            ctx->pc = 0x16C63Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c63c;
        }
    }
    ctx->pc = 0x16C65Cu;
label_16c65c:
    // 0x16c65c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c660:
    // 0x16c660: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16c660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16c664:
    // 0x16c664: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_16c668:
    // 0x16c668: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x16c668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_16c66c:
    // 0x16c66c: 0x3c054600  lui         $a1, 0x4600
    ctx->pc = 0x16c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17920 << 16));
label_16c670:
    // 0x16c670: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x16c670u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16c674:
    // 0x16c674: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c678:
    // 0x16c678: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c67c:
    // 0x16c67c: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x16c67cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_16c680:
    // 0x16c680: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c684:
    // 0x16c684: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x16c684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_16c688:
    // 0x16c688: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c68c:
    // 0x16c68c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c690:
    // 0x16c690: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c694:
    // 0x16c694: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c698:
    // 0x16c698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c69c:
    // 0x16c69c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c6a0:
    // 0x16c6a0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c6a4:
    // 0x16c6a4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c6a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c6a8:
    // 0x16c6a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c6ac:
    if (ctx->pc == 0x16C6ACu) {
        ctx->pc = 0x16C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6A8u;
        // 0x16c6ac: 0x2512025  or          $a0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C6B0u;
        goto label_16c6b0;
    }
    ctx->pc = 0x16C6A8u;
    {
        const bool branch_taken_0x16c6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6A8u;
        // 0x16c6ac: 0x2512025  or          $a0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6a8) {
            ctx->pc = 0x16C6D8u;
            goto label_16c6d8;
        }
    }
    ctx->pc = 0x16C6B0u;
label_16c6b0:
    // 0x16c6b0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c6b4:
    // 0x16c6b4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c6b8:
    // 0x16c6b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c6bc:
    // 0x16c6bc: 0xc08d61c  jal         func_235870
label_16c6c0:
    if (ctx->pc == 0x16C6C0u) {
        ctx->pc = 0x16C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6BCu;
        // 0x16c6c0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C6C4u;
        goto label_16c6c4;
    }
    ctx->pc = 0x16C6BCu;
    SET_GPR_U32(ctx, 31, 0x16C6C4u);
    ctx->pc = 0x16C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6BCu;
    // 0x16c6c0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C6C4u;
label_16c6c4:
    // 0x16c6c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c6c8:
    // 0x16c6c8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c6cc:
    if (ctx->pc == 0x16C6CCu) {
        ctx->pc = 0x16C6D0u;
        goto label_16c6d0;
    }
    ctx->pc = 0x16C6C8u;
    {
        const bool branch_taken_0x16c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c6c8) {
            ctx->pc = 0x16C6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c6b0;
        }
    }
    ctx->pc = 0x16C6D0u;
label_16c6d0:
    // 0x16c6d0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c6d4:
    // 0x16c6d4: 0x2512025  or          $a0, $s2, $s1
    ctx->pc = 0x16c6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
label_16c6d8:
    // 0x16c6d8: 0x3c036600  lui         $v1, 0x6600
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26112 << 16));
label_16c6dc:
    // 0x16c6dc: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16c6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16c6e0:
    // 0x16c6e0: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c6e4:
    // 0x16c6e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c6e8:
    // 0x16c6e8: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c6ec:
    // 0x16c6ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c6f0:
    // 0x16c6f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c6f4:
    // 0x16c6f4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c6f8:
    // 0x16c6f8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c6fc:
    // 0x16c6fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c700:
    // 0x16c700: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c704:
    // 0x16c704: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c708:
    // 0x16c708: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c70c:
    // 0x16c70c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16c710:
    if (ctx->pc == 0x16C710u) {
        ctx->pc = 0x16C714u;
        goto label_16c714;
    }
    ctx->pc = 0x16C70Cu;
    {
        const bool branch_taken_0x16c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c70c) {
            ctx->pc = 0x16C738u;
            goto label_16c738;
        }
    }
    ctx->pc = 0x16C714u;
label_16c714:
    // 0x16c714: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c718:
    // 0x16c718: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c71c:
    // 0x16c71c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c720:
    // 0x16c720: 0xc08d61c  jal         func_235870
label_16c724:
    if (ctx->pc == 0x16C724u) {
        ctx->pc = 0x16C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C720u;
        // 0x16c724: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C728u;
        goto label_16c728;
    }
    ctx->pc = 0x16C720u;
    SET_GPR_U32(ctx, 31, 0x16C728u);
    ctx->pc = 0x16C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C720u;
    // 0x16c724: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C728u;
label_16c728:
    // 0x16c728: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c72c:
    // 0x16c72c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c730:
    if (ctx->pc == 0x16C730u) {
        ctx->pc = 0x16C734u;
        goto label_16c734;
    }
    ctx->pc = 0x16C72Cu;
    {
        const bool branch_taken_0x16c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c72c) {
            ctx->pc = 0x16C714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c714;
        }
    }
    ctx->pc = 0x16C734u;
label_16c734:
    // 0x16c734: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c738:
    // 0x16c738: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c73c:
    // 0x16c73c: 0x3c035600  lui         $v1, 0x5600
    ctx->pc = 0x16c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22016 << 16));
label_16c740:
    // 0x16c740: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16c740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16c744:
    // 0x16c744: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16c748:
    // 0x16c748: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16c74c:
    // 0x16c74c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c750:
    // 0x16c750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c754:
    // 0x16c754: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16c758:
    // 0x16c758: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c75c:
    // 0x16c75c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c760:
    // 0x16c760: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c764:
    // 0x16c764: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16c764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16c768:
    // 0x16c768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c76c:
    // 0x16c76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c770:
    // 0x16c770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c774:
    // 0x16c774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c778:
    // 0x16c778: 0x3e00008  jr          $ra
label_16c77c:
    if (ctx->pc == 0x16C77Cu) {
        ctx->pc = 0x16C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C778u;
        // 0x16c77c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C780u;
        goto label_16c780;
    }
    ctx->pc = 0x16C778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C778u;
        // 0x16c77c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C780u;
label_16c780:
    // 0x16c780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c784:
    // 0x16c784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16c788:
    // 0x16c788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c78c:
    // 0x16c78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c790:
    // 0x16c790: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c794:
    // 0x16c794: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_16c798:
    if (ctx->pc == 0x16C798u) {
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C79Cu;
        goto label_16c79c;
    }
    ctx->pc = 0x16C794u;
    {
        const bool branch_taken_0x16c794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c794) {
            ctx->pc = 0x16C838u;
            { ctx->pc = 0x16c838; return; }
        }
    }
    ctx->pc = 0x16C79Cu;
label_16c79c:
    // 0x16c79c: 0xc08d30c  jal         func_234C30
label_16c7a0:
    if (ctx->pc == 0x16C7A0u) {
        ctx->pc = 0x16C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C79Cu;
        // 0x16c7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7A4u;
        goto label_16c7a4;
    }
    ctx->pc = 0x16C79Cu;
    SET_GPR_U32(ctx, 31, 0x16C7A4u);
    ctx->pc = 0x16C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C79Cu;
    // 0x16c7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234C30u;
    { ctx->pc = 0x234c30; return; }
    ctx->pc = 0x16C7A4u;
label_16c7a4:
    // 0x16c7a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c7a8:
    // 0x16c7a8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_16c7ac:
    if (ctx->pc == 0x16C7ACu) {
        ctx->pc = 0x16C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7A8u;
        // 0x16c7ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7B0u;
        goto label_16c7b0;
    }
    ctx->pc = 0x16C7A8u;
    {
        const bool branch_taken_0x16c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7A8u;
        // 0x16c7ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7a8) {
            ctx->pc = 0x16C824u;
            goto label_16c824;
        }
    }
    ctx->pc = 0x16C7B0u;
label_16c7b0:
    // 0x16c7b0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c7b4:
    // 0x16c7b4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c7b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c7b8:
    // 0x16c7b8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16c7bc:
    if (ctx->pc == 0x16C7BCu) {
        ctx->pc = 0x16C7C0u;
        goto label_16c7c0;
    }
    ctx->pc = 0x16C7B8u;
    {
        const bool branch_taken_0x16c7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c7b8) {
            ctx->pc = 0x16C7E4u;
            goto label_16c7e4;
        }
    }
    ctx->pc = 0x16C7C0u;
label_16c7c0:
    // 0x16c7c0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c7c4:
    // 0x16c7c4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c7c8:
    // 0x16c7c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c7cc:
    // 0x16c7cc: 0xc08d61c  jal         func_235870
label_16c7d0:
    if (ctx->pc == 0x16C7D0u) {
        ctx->pc = 0x16C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7CCu;
        // 0x16c7d0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7D4u;
        goto label_16c7d4;
    }
    ctx->pc = 0x16C7CCu;
    SET_GPR_U32(ctx, 31, 0x16C7D4u);
    ctx->pc = 0x16C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7CCu;
    // 0x16c7d0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C7D4u;
label_16c7d4:
    // 0x16c7d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c7d8:
    // 0x16c7d8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c7dc:
    if (ctx->pc == 0x16C7DCu) {
        ctx->pc = 0x16C7E0u;
        goto label_16c7e0;
    }
    ctx->pc = 0x16C7D8u;
    {
        const bool branch_taken_0x16c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c7d8) {
            ctx->pc = 0x16C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c7c0;
        }
    }
    ctx->pc = 0x16C7E0u;
label_16c7e0:
    // 0x16c7e0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c7e4:
    // 0x16c7e4: 0x0  nop
    ctx->pc = 0x16c7e4u;
    // NOP
label_16c7e8:
    // 0x16c7e8: 0x3c032002  lui         $v1, 0x2002
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8194 << 16));
label_16c7ec:
    // 0x16c7ec: 0x2233025  or          $a2, $s1, $v1
    ctx->pc = 0x16c7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16c7f0:
    // 0x16c7f0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c7f4:
    // 0x16c7f4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x16c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_16c7f8:
    // 0x16c7f8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x16c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_16c7fc:
    // 0x16c7fc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_16c800:
    // 0x16c800: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x16c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
label_16c804:
    // 0x16c804: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16c808:
    // 0x16c808: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16c808u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c80c:
    // 0x16c80c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16c810:
    // 0x16c810: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16c814:
    // 0x16c814: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x16c814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_16c818:
    // 0x16c818: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c81c:
    // 0x16c81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c820:
    // 0x16c820: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c824:
    // 0x16c824: 0x0  nop
    ctx->pc = 0x16c824u;
    // NOP
label_16c828:
    // 0x16c828: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16c82c:
    // 0x16c82c: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x16c82cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    ctx->pc = 0x16c830u;
    return;
}

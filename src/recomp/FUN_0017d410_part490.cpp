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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26c060u: goto label_26c060;
        case 0x26c064u: goto label_26c064;
        case 0x26c068u: goto label_26c068;
        case 0x26c06cu: goto label_26c06c;
        case 0x26c070u: goto label_26c070;
        case 0x26c074u: goto label_26c074;
        case 0x26c078u: goto label_26c078;
        case 0x26c07cu: goto label_26c07c;
        case 0x26c080u: goto label_26c080;
        case 0x26c084u: goto label_26c084;
        case 0x26c088u: goto label_26c088;
        case 0x26c08cu: goto label_26c08c;
        case 0x26c090u: goto label_26c090;
        case 0x26c094u: goto label_26c094;
        case 0x26c098u: goto label_26c098;
        case 0x26c09cu: goto label_26c09c;
        case 0x26c0a0u: goto label_26c0a0;
        case 0x26c0a4u: goto label_26c0a4;
        case 0x26c0a8u: goto label_26c0a8;
        case 0x26c0acu: goto label_26c0ac;
        case 0x26c0b0u: goto label_26c0b0;
        case 0x26c0b4u: goto label_26c0b4;
        case 0x26c0b8u: goto label_26c0b8;
        case 0x26c0bcu: goto label_26c0bc;
        case 0x26c0c0u: goto label_26c0c0;
        case 0x26c0c4u: goto label_26c0c4;
        case 0x26c0c8u: goto label_26c0c8;
        case 0x26c0ccu: goto label_26c0cc;
        case 0x26c0d0u: goto label_26c0d0;
        case 0x26c0d4u: goto label_26c0d4;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c0dcu: goto label_26c0dc;
        case 0x26c0e0u: goto label_26c0e0;
        case 0x26c0e4u: goto label_26c0e4;
        case 0x26c0e8u: goto label_26c0e8;
        case 0x26c0ecu: goto label_26c0ec;
        case 0x26c0f0u: goto label_26c0f0;
        case 0x26c0f4u: goto label_26c0f4;
        case 0x26c0f8u: goto label_26c0f8;
        case 0x26c0fcu: goto label_26c0fc;
        case 0x26c100u: goto label_26c100;
        case 0x26c104u: goto label_26c104;
        case 0x26c108u: goto label_26c108;
        case 0x26c10cu: goto label_26c10c;
        case 0x26c110u: goto label_26c110;
        case 0x26c114u: goto label_26c114;
        case 0x26c118u: goto label_26c118;
        case 0x26c11cu: goto label_26c11c;
        case 0x26c120u: goto label_26c120;
        case 0x26c124u: goto label_26c124;
        case 0x26c128u: goto label_26c128;
        case 0x26c12cu: goto label_26c12c;
        case 0x26c130u: goto label_26c130;
        case 0x26c134u: goto label_26c134;
        case 0x26c138u: goto label_26c138;
        case 0x26c13cu: goto label_26c13c;
        case 0x26c140u: goto label_26c140;
        case 0x26c144u: goto label_26c144;
        case 0x26c148u: goto label_26c148;
        case 0x26c14cu: goto label_26c14c;
        case 0x26c150u: goto label_26c150;
        case 0x26c154u: goto label_26c154;
        case 0x26c158u: goto label_26c158;
        case 0x26c15cu: goto label_26c15c;
        case 0x26c160u: goto label_26c160;
        case 0x26c164u: goto label_26c164;
        case 0x26c168u: goto label_26c168;
        case 0x26c16cu: goto label_26c16c;
        case 0x26c170u: goto label_26c170;
        case 0x26c174u: goto label_26c174;
        case 0x26c178u: goto label_26c178;
        case 0x26c17cu: goto label_26c17c;
        case 0x26c180u: goto label_26c180;
        case 0x26c184u: goto label_26c184;
        case 0x26c188u: goto label_26c188;
        case 0x26c18cu: goto label_26c18c;
        case 0x26c190u: goto label_26c190;
        case 0x26c194u: goto label_26c194;
        case 0x26c198u: goto label_26c198;
        case 0x26c19cu: goto label_26c19c;
        case 0x26c1a0u: goto label_26c1a0;
        case 0x26c1a4u: goto label_26c1a4;
        case 0x26c1a8u: goto label_26c1a8;
        case 0x26c1acu: goto label_26c1ac;
        case 0x26c1b0u: goto label_26c1b0;
        case 0x26c1b4u: goto label_26c1b4;
        case 0x26c1b8u: goto label_26c1b8;
        case 0x26c1bcu: goto label_26c1bc;
        case 0x26c1c0u: goto label_26c1c0;
        case 0x26c1c4u: goto label_26c1c4;
        case 0x26c1c8u: goto label_26c1c8;
        case 0x26c1ccu: goto label_26c1cc;
        case 0x26c1d0u: goto label_26c1d0;
        case 0x26c1d4u: goto label_26c1d4;
        case 0x26c1d8u: goto label_26c1d8;
        case 0x26c1dcu: goto label_26c1dc;
        case 0x26c1e0u: goto label_26c1e0;
        case 0x26c1e4u: goto label_26c1e4;
        case 0x26c1e8u: goto label_26c1e8;
        case 0x26c1ecu: goto label_26c1ec;
        case 0x26c1f0u: goto label_26c1f0;
        case 0x26c1f4u: goto label_26c1f4;
        case 0x26c1f8u: goto label_26c1f8;
        case 0x26c1fcu: goto label_26c1fc;
        case 0x26c200u: goto label_26c200;
        case 0x26c204u: goto label_26c204;
        case 0x26c208u: goto label_26c208;
        case 0x26c20cu: goto label_26c20c;
        case 0x26c210u: goto label_26c210;
        case 0x26c214u: goto label_26c214;
        case 0x26c218u: goto label_26c218;
        case 0x26c21cu: goto label_26c21c;
        case 0x26c220u: goto label_26c220;
        case 0x26c224u: goto label_26c224;
        case 0x26c228u: goto label_26c228;
        case 0x26c22cu: goto label_26c22c;
        case 0x26c230u: goto label_26c230;
        case 0x26c234u: goto label_26c234;
        case 0x26c238u: goto label_26c238;
        case 0x26c23cu: goto label_26c23c;
        case 0x26c240u: goto label_26c240;
        case 0x26c244u: goto label_26c244;
        case 0x26c248u: goto label_26c248;
        case 0x26c24cu: goto label_26c24c;
        case 0x26c250u: goto label_26c250;
        case 0x26c254u: goto label_26c254;
        case 0x26c258u: goto label_26c258;
        case 0x26c25cu: goto label_26c25c;
        case 0x26c260u: goto label_26c260;
        case 0x26c264u: goto label_26c264;
        case 0x26c268u: goto label_26c268;
        case 0x26c26cu: goto label_26c26c;
        case 0x26c270u: goto label_26c270;
        case 0x26c274u: goto label_26c274;
        case 0x26c278u: goto label_26c278;
        case 0x26c27cu: goto label_26c27c;
        case 0x26c280u: goto label_26c280;
        case 0x26c284u: goto label_26c284;
        case 0x26c288u: goto label_26c288;
        case 0x26c28cu: goto label_26c28c;
        case 0x26c290u: goto label_26c290;
        case 0x26c294u: goto label_26c294;
        case 0x26c298u: goto label_26c298;
        case 0x26c29cu: goto label_26c29c;
        case 0x26c2a0u: goto label_26c2a0;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2a8u: goto label_26c2a8;
        case 0x26c2acu: goto label_26c2ac;
        case 0x26c2b0u: goto label_26c2b0;
        case 0x26c2b4u: goto label_26c2b4;
        case 0x26c2b8u: goto label_26c2b8;
        case 0x26c2bcu: goto label_26c2bc;
        case 0x26c2c0u: goto label_26c2c0;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c2c8u: goto label_26c2c8;
        case 0x26c2ccu: goto label_26c2cc;
        case 0x26c2d0u: goto label_26c2d0;
        case 0x26c2d4u: goto label_26c2d4;
        case 0x26c2d8u: goto label_26c2d8;
        case 0x26c2dcu: goto label_26c2dc;
        case 0x26c2e0u: goto label_26c2e0;
        case 0x26c2e4u: goto label_26c2e4;
        case 0x26c2e8u: goto label_26c2e8;
        case 0x26c2ecu: goto label_26c2ec;
        case 0x26c2f0u: goto label_26c2f0;
        case 0x26c2f4u: goto label_26c2f4;
        case 0x26c2f8u: goto label_26c2f8;
        case 0x26c2fcu: goto label_26c2fc;
        case 0x26c300u: goto label_26c300;
        case 0x26c304u: goto label_26c304;
        case 0x26c308u: goto label_26c308;
        case 0x26c30cu: goto label_26c30c;
        case 0x26c310u: goto label_26c310;
        case 0x26c314u: goto label_26c314;
        case 0x26c318u: goto label_26c318;
        case 0x26c31cu: goto label_26c31c;
        case 0x26c320u: goto label_26c320;
        case 0x26c324u: goto label_26c324;
        case 0x26c328u: goto label_26c328;
        case 0x26c32cu: goto label_26c32c;
        case 0x26c330u: goto label_26c330;
        case 0x26c334u: goto label_26c334;
        case 0x26c338u: goto label_26c338;
        case 0x26c33cu: goto label_26c33c;
        case 0x26c340u: goto label_26c340;
        case 0x26c344u: goto label_26c344;
        case 0x26c348u: goto label_26c348;
        case 0x26c34cu: goto label_26c34c;
        case 0x26c350u: goto label_26c350;
        case 0x26c354u: goto label_26c354;
        case 0x26c358u: goto label_26c358;
        case 0x26c35cu: goto label_26c35c;
        case 0x26c360u: goto label_26c360;
        case 0x26c364u: goto label_26c364;
        case 0x26c368u: goto label_26c368;
        case 0x26c36cu: goto label_26c36c;
        case 0x26c370u: goto label_26c370;
        case 0x26c374u: goto label_26c374;
        case 0x26c378u: goto label_26c378;
        case 0x26c37cu: goto label_26c37c;
        case 0x26c380u: goto label_26c380;
        case 0x26c384u: goto label_26c384;
        case 0x26c388u: goto label_26c388;
        case 0x26c38cu: goto label_26c38c;
        case 0x26c390u: goto label_26c390;
        case 0x26c394u: goto label_26c394;
        case 0x26c398u: goto label_26c398;
        case 0x26c39cu: goto label_26c39c;
        case 0x26c3a0u: goto label_26c3a0;
        case 0x26c3a4u: goto label_26c3a4;
        case 0x26c3a8u: goto label_26c3a8;
        case 0x26c3acu: goto label_26c3ac;
        case 0x26c3b0u: goto label_26c3b0;
        case 0x26c3b4u: goto label_26c3b4;
        case 0x26c3b8u: goto label_26c3b8;
        case 0x26c3bcu: goto label_26c3bc;
        case 0x26c3c0u: goto label_26c3c0;
        case 0x26c3c4u: goto label_26c3c4;
        case 0x26c3c8u: goto label_26c3c8;
        case 0x26c3ccu: goto label_26c3cc;
        case 0x26c3d0u: goto label_26c3d0;
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c3dcu: goto label_26c3dc;
        case 0x26c3e0u: goto label_26c3e0;
        case 0x26c3e4u: goto label_26c3e4;
        case 0x26c3e8u: goto label_26c3e8;
        case 0x26c3ecu: goto label_26c3ec;
        case 0x26c3f0u: goto label_26c3f0;
        case 0x26c3f4u: goto label_26c3f4;
        case 0x26c3f8u: goto label_26c3f8;
        case 0x26c3fcu: goto label_26c3fc;
        case 0x26c400u: goto label_26c400;
        case 0x26c404u: goto label_26c404;
        case 0x26c408u: goto label_26c408;
        case 0x26c40cu: goto label_26c40c;
        case 0x26c410u: goto label_26c410;
        case 0x26c414u: goto label_26c414;
        case 0x26c418u: goto label_26c418;
        case 0x26c41cu: goto label_26c41c;
        case 0x26c420u: goto label_26c420;
        case 0x26c424u: goto label_26c424;
        case 0x26c428u: goto label_26c428;
        case 0x26c42cu: goto label_26c42c;
        case 0x26c430u: goto label_26c430;
        case 0x26c434u: goto label_26c434;
        case 0x26c438u: goto label_26c438;
        case 0x26c43cu: goto label_26c43c;
        case 0x26c440u: goto label_26c440;
        case 0x26c444u: goto label_26c444;
        case 0x26c448u: goto label_26c448;
        case 0x26c44cu: goto label_26c44c;
        case 0x26c450u: goto label_26c450;
        case 0x26c454u: goto label_26c454;
        case 0x26c458u: goto label_26c458;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c460u: goto label_26c460;
        case 0x26c464u: goto label_26c464;
        case 0x26c468u: goto label_26c468;
        case 0x26c46cu: goto label_26c46c;
        case 0x26c470u: goto label_26c470;
        case 0x26c474u: goto label_26c474;
        case 0x26c478u: goto label_26c478;
        case 0x26c47cu: goto label_26c47c;
        case 0x26c480u: goto label_26c480;
        case 0x26c484u: goto label_26c484;
        case 0x26c488u: goto label_26c488;
        case 0x26c48cu: goto label_26c48c;
        case 0x26c490u: goto label_26c490;
        case 0x26c494u: goto label_26c494;
        case 0x26c498u: goto label_26c498;
        case 0x26c49cu: goto label_26c49c;
        case 0x26c4a0u: goto label_26c4a0;
        case 0x26c4a4u: goto label_26c4a4;
        case 0x26c4a8u: goto label_26c4a8;
        case 0x26c4acu: goto label_26c4ac;
        case 0x26c4b0u: goto label_26c4b0;
        case 0x26c4b4u: goto label_26c4b4;
        case 0x26c4b8u: goto label_26c4b8;
        case 0x26c4bcu: goto label_26c4bc;
        case 0x26c4c0u: goto label_26c4c0;
        case 0x26c4c4u: goto label_26c4c4;
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4ccu: goto label_26c4cc;
        case 0x26c4d0u: goto label_26c4d0;
        case 0x26c4d4u: goto label_26c4d4;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4dcu: goto label_26c4dc;
        case 0x26c4e0u: goto label_26c4e0;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4e8u: goto label_26c4e8;
        case 0x26c4ecu: goto label_26c4ec;
        case 0x26c4f0u: goto label_26c4f0;
        case 0x26c4f4u: goto label_26c4f4;
        case 0x26c4f8u: goto label_26c4f8;
        case 0x26c4fcu: goto label_26c4fc;
        case 0x26c500u: goto label_26c500;
        case 0x26c504u: goto label_26c504;
        case 0x26c508u: goto label_26c508;
        case 0x26c50cu: goto label_26c50c;
        case 0x26c510u: goto label_26c510;
        case 0x26c514u: goto label_26c514;
        case 0x26c518u: goto label_26c518;
        case 0x26c51cu: goto label_26c51c;
        case 0x26c520u: goto label_26c520;
        case 0x26c524u: goto label_26c524;
        case 0x26c528u: goto label_26c528;
        case 0x26c52cu: goto label_26c52c;
        case 0x26c530u: goto label_26c530;
        case 0x26c534u: goto label_26c534;
        case 0x26c538u: goto label_26c538;
        case 0x26c53cu: goto label_26c53c;
        case 0x26c540u: goto label_26c540;
        case 0x26c544u: goto label_26c544;
        case 0x26c548u: goto label_26c548;
        case 0x26c54cu: goto label_26c54c;
        case 0x26c550u: goto label_26c550;
        case 0x26c554u: goto label_26c554;
        case 0x26c558u: goto label_26c558;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c560u: goto label_26c560;
        case 0x26c564u: goto label_26c564;
        case 0x26c568u: goto label_26c568;
        case 0x26c56cu: goto label_26c56c;
        case 0x26c570u: goto label_26c570;
        case 0x26c574u: goto label_26c574;
        case 0x26c578u: goto label_26c578;
        case 0x26c57cu: goto label_26c57c;
        case 0x26c580u: goto label_26c580;
        case 0x26c584u: goto label_26c584;
        case 0x26c588u: goto label_26c588;
        case 0x26c58cu: goto label_26c58c;
        case 0x26c590u: goto label_26c590;
        case 0x26c594u: goto label_26c594;
        case 0x26c598u: goto label_26c598;
        case 0x26c59cu: goto label_26c59c;
        case 0x26c5a0u: goto label_26c5a0;
        case 0x26c5a4u: goto label_26c5a4;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        case 0x26c620u: goto label_26c620;
        case 0x26c624u: goto label_26c624;
        case 0x26c628u: goto label_26c628;
        case 0x26c62cu: goto label_26c62c;
        case 0x26c630u: goto label_26c630;
        case 0x26c634u: goto label_26c634;
        case 0x26c638u: goto label_26c638;
        case 0x26c63cu: goto label_26c63c;
        case 0x26c640u: goto label_26c640;
        case 0x26c644u: goto label_26c644;
        case 0x26c648u: goto label_26c648;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c650u: goto label_26c650;
        case 0x26c654u: goto label_26c654;
        case 0x26c658u: goto label_26c658;
        case 0x26c65cu: goto label_26c65c;
        case 0x26c660u: goto label_26c660;
        case 0x26c664u: goto label_26c664;
        case 0x26c668u: goto label_26c668;
        case 0x26c66cu: goto label_26c66c;
        case 0x26c670u: goto label_26c670;
        case 0x26c674u: goto label_26c674;
        case 0x26c678u: goto label_26c678;
        case 0x26c67cu: goto label_26c67c;
        case 0x26c680u: goto label_26c680;
        case 0x26c684u: goto label_26c684;
        case 0x26c688u: goto label_26c688;
        case 0x26c68cu: goto label_26c68c;
        case 0x26c690u: goto label_26c690;
        case 0x26c694u: goto label_26c694;
        case 0x26c698u: goto label_26c698;
        case 0x26c69cu: goto label_26c69c;
        case 0x26c6a0u: goto label_26c6a0;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6acu: goto label_26c6ac;
        case 0x26c6b0u: goto label_26c6b0;
        case 0x26c6b4u: goto label_26c6b4;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6c0u: goto label_26c6c0;
        case 0x26c6c4u: goto label_26c6c4;
        case 0x26c6c8u: goto label_26c6c8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6d8u: goto label_26c6d8;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6e4u: goto label_26c6e4;
        case 0x26c6e8u: goto label_26c6e8;
        case 0x26c6ecu: goto label_26c6ec;
        case 0x26c6f0u: goto label_26c6f0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c6fcu: goto label_26c6fc;
        case 0x26c700u: goto label_26c700;
        case 0x26c704u: goto label_26c704;
        case 0x26c708u: goto label_26c708;
        case 0x26c70cu: goto label_26c70c;
        case 0x26c710u: goto label_26c710;
        case 0x26c714u: goto label_26c714;
        case 0x26c718u: goto label_26c718;
        case 0x26c71cu: goto label_26c71c;
        case 0x26c720u: goto label_26c720;
        case 0x26c724u: goto label_26c724;
        case 0x26c728u: goto label_26c728;
        case 0x26c72cu: goto label_26c72c;
        case 0x26c730u: goto label_26c730;
        case 0x26c734u: goto label_26c734;
        case 0x26c738u: goto label_26c738;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c740u: goto label_26c740;
        case 0x26c744u: goto label_26c744;
        case 0x26c748u: goto label_26c748;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c750u: goto label_26c750;
        case 0x26c754u: goto label_26c754;
        case 0x26c758u: goto label_26c758;
        case 0x26c75cu: goto label_26c75c;
        case 0x26c760u: goto label_26c760;
        case 0x26c764u: goto label_26c764;
        case 0x26c768u: goto label_26c768;
        case 0x26c76cu: goto label_26c76c;
        case 0x26c770u: goto label_26c770;
        case 0x26c774u: goto label_26c774;
        case 0x26c778u: goto label_26c778;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c780u: goto label_26c780;
        case 0x26c784u: goto label_26c784;
        case 0x26c788u: goto label_26c788;
        case 0x26c78cu: goto label_26c78c;
        case 0x26c790u: goto label_26c790;
        case 0x26c794u: goto label_26c794;
        case 0x26c798u: goto label_26c798;
        case 0x26c79cu: goto label_26c79c;
        case 0x26c7a0u: goto label_26c7a0;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c7b4u: goto label_26c7b4;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7bcu: goto label_26c7bc;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7c4u: goto label_26c7c4;
        case 0x26c7c8u: goto label_26c7c8;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7dcu: goto label_26c7dc;
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c7e4u: goto label_26c7e4;
        case 0x26c7e8u: goto label_26c7e8;
        case 0x26c7ecu: goto label_26c7ec;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c7f4u: goto label_26c7f4;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c7fcu: goto label_26c7fc;
        case 0x26c800u: goto label_26c800;
        case 0x26c804u: goto label_26c804;
        case 0x26c808u: goto label_26c808;
        case 0x26c80cu: goto label_26c80c;
        case 0x26c810u: goto label_26c810;
        case 0x26c814u: goto label_26c814;
        case 0x26c818u: goto label_26c818;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c820u: goto label_26c820;
        case 0x26c824u: goto label_26c824;
        case 0x26c828u: goto label_26c828;
        case 0x26c82cu: goto label_26c82c;
        default: return;
    }

label_26c060:
    // 0x26c060: 0x1f31  tgeu        $zero, $zero, 124
    ctx->pc = 0x26c060u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c064:
    // 0x26c064: 0xac80  sll         $s5, $zero, 18
    ctx->pc = 0x26c064u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26c068:
    // 0x26c068: 0x0  nop
    ctx->pc = 0x26c068u;
    // NOP
label_26c06c:
    // 0x26c06c: 0x0  nop
    ctx->pc = 0x26c06cu;
    // NOP
label_26c070:
    // 0x26c070: 0x1f47  .word       0x00001F47                   # srav        $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26c074:
    // 0x26c074: 0x7f80  sll         $t7, $zero, 30
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26c078:
    // 0x26c078: 0x0  nop
    ctx->pc = 0x26c078u;
    // NOP
label_26c07c:
    // 0x26c07c: 0x0  nop
    ctx->pc = 0x26c07cu;
    // NOP
label_26c080:
    // 0x26c080: 0x1f57  .word       0x00001F57                   # dsrav       $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c080u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c084:
    // 0x26c084: 0x8b90  .word       0x00008B90                   # mfhi        $s1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c084u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26c088:
    // 0x26c088: 0x0  nop
    ctx->pc = 0x26c088u;
    // NOP
label_26c08c:
    // 0x26c08c: 0x0  nop
    ctx->pc = 0x26c08cu;
    // NOP
label_26c090:
    // 0x26c090: 0x1f69  .word       0x00001F69                   # mtsa        $zero # 00001F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c090u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26c094:
    // 0x26c094: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x26c094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c098:
    // 0x26c098: 0x0  nop
    ctx->pc = 0x26c098u;
    // NOP
label_26c09c:
    // 0x26c09c: 0x0  nop
    ctx->pc = 0x26c09cu;
    // NOP
label_26c0a0:
    // 0x26c0a0: 0x1f7f  dsra32      $v1, $zero, 29
    ctx->pc = 0x26c0a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> (32 + 29));
label_26c0a4:
    // 0x26c0a4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c0a8:
    // 0x26c0a8: 0x0  nop
    ctx->pc = 0x26c0a8u;
    // NOP
label_26c0ac:
    // 0x26c0ac: 0x0  nop
    ctx->pc = 0x26c0acu;
    // NOP
label_26c0b0:
    // 0x26c0b0: 0x1f94  .word       0x00001F94                   # dsllv       $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26c0b4:
    // 0x26c0b4: 0x91d0  .word       0x000091D0                   # mfhi        $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c0b8:
    // 0x26c0b8: 0x0  nop
    ctx->pc = 0x26c0b8u;
    // NOP
label_26c0bc:
    // 0x26c0bc: 0x0  nop
    ctx->pc = 0x26c0bcu;
    // NOP
label_26c0c0:
    // 0x26c0c0: 0x1fa7  .word       0x00001FA7                   # not         $v1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26c0c4:
    // 0x26c0c4: 0x9920  .word       0x00009920                   # add         $s3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26c0c8:
    // 0x26c0c8: 0x0  nop
    ctx->pc = 0x26c0c8u;
    // NOP
label_26c0cc:
    // 0x26c0cc: 0x0  nop
    ctx->pc = 0x26c0ccu;
    // NOP
label_26c0d0:
    // 0x26c0d0: 0x1fbb  dsra        $v1, $zero, 30
    ctx->pc = 0x26c0d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 0) >> 30);
label_26c0d4:
    // 0x26c0d4: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x26c0d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c0d8:
    // 0x26c0d8: 0x0  nop
    ctx->pc = 0x26c0d8u;
    // NOP
label_26c0dc:
    // 0x26c0dc: 0x0  nop
    ctx->pc = 0x26c0dcu;
    // NOP
label_26c0e0:
    // 0x26c0e0: 0x1fce  .word       0x00001FCE                   # INVALID     $zero, $zero, 0x1FCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26C0E0 raw=0x00001FCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c0e4:
    // 0x26c0e4: 0xf290  .word       0x0000F290                   # mfhi        $fp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0e4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_26c0e8:
    // 0x26c0e8: 0x0  nop
    ctx->pc = 0x26c0e8u;
    // NOP
label_26c0ec:
    // 0x26c0ec: 0x0  nop
    ctx->pc = 0x26c0ecu;
    // NOP
label_26c0f0:
    // 0x26c0f0: 0x1fed  .word       0x00001FED                   # daddu       $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c0f4:
    // 0x26c0f4: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x26c0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26c0f8:
    // 0x26c0f8: 0x0  nop
    ctx->pc = 0x26c0f8u;
    // NOP
label_26c0fc:
    // 0x26c0fc: 0x0  nop
    ctx->pc = 0x26c0fcu;
    // NOP
label_26c100:
    // 0x26c100: 0x2001  .word       0x00002001                   # INVALID     $zero, $zero, 0x2001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26C100 raw=0x00002001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c104:
    // 0x26c104: 0x9390  .word       0x00009390                   # mfhi        $s2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c104u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c108:
    // 0x26c108: 0x0  nop
    ctx->pc = 0x26c108u;
    // NOP
label_26c10c:
    // 0x26c10c: 0x0  nop
    ctx->pc = 0x26c10cu;
    // NOP
label_26c110:
    // 0x26c110: 0x2014  dsllv       $a0, $zero, $zero
    ctx->pc = 0x26c110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26c114:
    // 0x26c114: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x26c114u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26c118:
    // 0x26c118: 0x0  nop
    ctx->pc = 0x26c118u;
    // NOP
label_26c11c:
    // 0x26c11c: 0x0  nop
    ctx->pc = 0x26c11cu;
    // NOP
label_26c120:
    // 0x26c120: 0x2028  mfsa        $a0
    ctx->pc = 0x26c120u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_26c124:
    // 0x26c124: 0xadb0  tge         $zero, $zero, 694
    ctx->pc = 0x26c124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c128:
    // 0x26c128: 0x0  nop
    ctx->pc = 0x26c128u;
    // NOP
label_26c12c:
    // 0x26c12c: 0x0  nop
    ctx->pc = 0x26c12cu;
    // NOP
label_26c130:
    // 0x26c130: 0x203e  dsrl32      $a0, $zero, 0
    ctx->pc = 0x26c130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (32 + 0));
label_26c134:
    // 0x26c134: 0xd700  sll         $k0, $zero, 28
    ctx->pc = 0x26c134u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26c138:
    // 0x26c138: 0x0  nop
    ctx->pc = 0x26c138u;
    // NOP
label_26c13c:
    // 0x26c13c: 0x0  nop
    ctx->pc = 0x26c13cu;
    // NOP
label_26c140:
    // 0x26c140: 0x2059  .word       0x00002059                   # multu       $zero, $zero # 00002040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c140u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_26c144:
    // 0x26c144: 0xc950  .word       0x0000C950                   # mfhi        $t9 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c144u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_26c148:
    // 0x26c148: 0x0  nop
    ctx->pc = 0x26c148u;
    // NOP
label_26c14c:
    // 0x26c14c: 0x0  nop
    ctx->pc = 0x26c14cu;
    // NOP
label_26c150:
    // 0x26c150: 0x2073  tltu        $zero, $zero, 129
    ctx->pc = 0x26c150u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c154:
    // 0x26c154: 0xa020  add         $s4, $zero, $zero
    ctx->pc = 0x26c154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c158:
    // 0x26c158: 0x0  nop
    ctx->pc = 0x26c158u;
    // NOP
label_26c15c:
    // 0x26c15c: 0x0  nop
    ctx->pc = 0x26c15cu;
    // NOP
label_26c160:
    // 0x26c160: 0x2088  .word       0x00002088                   # jr          $zero # 00002080 <InstrIdType: CPU_SPECIAL>
label_26c164:
    if (ctx->pc == 0x26C164u) {
        ctx->pc = 0x26C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C160u;
        // 0x26c164: 0x9820  add         $s3, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C168u;
        goto label_26c168;
    }
    ctx->pc = 0x26C160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C160u;
        // 0x26c164: 0x9820  add         $s3, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C168u;
label_26c168:
    // 0x26c168: 0x0  nop
    ctx->pc = 0x26c168u;
    // NOP
label_26c16c:
    // 0x26c16c: 0x0  nop
    ctx->pc = 0x26c16cu;
    // NOP
label_26c170:
    // 0x26c170: 0x209c  .word       0x0000209C                   # dmult       $zero, $zero # 00002080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26C170 raw=0x0000209C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c174:
    // 0x26c174: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c174u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26c178:
    // 0x26c178: 0x0  nop
    ctx->pc = 0x26c178u;
    // NOP
label_26c17c:
    // 0x26c17c: 0x0  nop
    ctx->pc = 0x26c17cu;
    // NOP
label_26c180:
    // 0x26c180: 0x20b3  tltu        $zero, $zero, 130
    ctx->pc = 0x26c180u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c184:
    // 0x26c184: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c184u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c188:
    // 0x26c188: 0x0  nop
    ctx->pc = 0x26c188u;
    // NOP
label_26c18c:
    // 0x26c18c: 0x0  nop
    ctx->pc = 0x26c18cu;
    // NOP
label_26c190:
    // 0x26c190: 0x20c6  .word       0x000020C6                   # srlv        $a0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c190u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26c194:
    // 0x26c194: 0xa200  sll         $s4, $zero, 8
    ctx->pc = 0x26c194u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26c198:
    // 0x26c198: 0x0  nop
    ctx->pc = 0x26c198u;
    // NOP
label_26c19c:
    // 0x26c19c: 0x0  nop
    ctx->pc = 0x26c19cu;
    // NOP
label_26c1a0:
    // 0x26c1a0: 0x20db  .word       0x000020DB                   # divu        $a0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c1a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26c1a4:
    // 0x26c1a4: 0xb3f0  tge         $zero, $zero, 719
    ctx->pc = 0x26c1a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c1a8:
    // 0x26c1a8: 0x0  nop
    ctx->pc = 0x26c1a8u;
    // NOP
label_26c1ac:
    // 0x26c1ac: 0x0  nop
    ctx->pc = 0x26c1acu;
    // NOP
label_26c1b0:
    // 0x26c1b0: 0x20f2  tlt         $zero, $zero, 131
    ctx->pc = 0x26c1b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c1b4:
    // 0x26c1b4: 0xae80  sll         $s5, $zero, 26
    ctx->pc = 0x26c1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26c1b8:
    // 0x26c1b8: 0x0  nop
    ctx->pc = 0x26c1b8u;
    // NOP
label_26c1bc:
    // 0x26c1bc: 0x0  nop
    ctx->pc = 0x26c1bcu;
    // NOP
label_26c1c0:
    // 0x26c1c0: 0x2108  .word       0x00002108                   # jr          $zero # 00002100 <InstrIdType: CPU_SPECIAL>
label_26c1c4:
    if (ctx->pc == 0x26C1C4u) {
        ctx->pc = 0x26C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1C0u;
        // 0x26c1c4: 0xa270  tge         $zero, $zero, 649 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1C8u;
        goto label_26c1c8;
    }
    ctx->pc = 0x26C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1C0u;
        // 0x26c1c4: 0xa270  tge         $zero, $zero, 649 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C1C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C1C8u;
label_26c1c8:
    // 0x26c1c8: 0x0  nop
    ctx->pc = 0x26c1c8u;
    // NOP
label_26c1cc:
    // 0x26c1cc: 0x0  nop
    ctx->pc = 0x26c1ccu;
    // NOP
label_26c1d0:
    // 0x26c1d0: 0x211d  .word       0x0000211D                   # dmultu      $zero, $zero # 00002100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26C1D0 raw=0x0000211D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c1d4:
    // 0x26c1d4: 0xfaa0  .word       0x0000FAA0                   # add         $ra, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c1d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26c1d8:
    // 0x26c1d8: 0x0  nop
    ctx->pc = 0x26c1d8u;
    // NOP
label_26c1dc:
    // 0x26c1dc: 0x0  nop
    ctx->pc = 0x26c1dcu;
    // NOP
label_26c1e0:
    // 0x26c1e0: 0x213d  .word       0x0000213D                   # INVALID     $zero, $zero, 0x213D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26C1E0 raw=0x0000213D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c1e4:
    // 0x26c1e4: 0x9450  .word       0x00009450                   # mfhi        $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c1e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c1e8:
    // 0x26c1e8: 0x0  nop
    ctx->pc = 0x26c1e8u;
    // NOP
label_26c1ec:
    // 0x26c1ec: 0x0  nop
    ctx->pc = 0x26c1ecu;
    // NOP
label_26c1f0:
    // 0x26c1f0: 0x2150  .word       0x00002150                   # mfhi        $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c1f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26c1f4:
    // 0x26c1f4: 0xa430  tge         $zero, $zero, 656
    ctx->pc = 0x26c1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c1f8:
    // 0x26c1f8: 0x0  nop
    ctx->pc = 0x26c1f8u;
    // NOP
label_26c1fc:
    // 0x26c1fc: 0x0  nop
    ctx->pc = 0x26c1fcu;
    // NOP
label_26c200:
    // 0x26c200: 0x2165  .word       0x00002165                   # move        $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26c204:
    // 0x26c204: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x26c204u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26c208:
    // 0x26c208: 0x0  nop
    ctx->pc = 0x26c208u;
    // NOP
label_26c20c:
    // 0x26c20c: 0x0  nop
    ctx->pc = 0x26c20cu;
    // NOP
label_26c210:
    // 0x26c210: 0x2177  .word       0x00002177                   # INVALID     $zero, $zero, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26C210 raw=0x00002177"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c214:
    // 0x26c214: 0xadc0  sll         $s5, $zero, 23
    ctx->pc = 0x26c214u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26c218:
    // 0x26c218: 0x0  nop
    ctx->pc = 0x26c218u;
    // NOP
label_26c21c:
    // 0x26c21c: 0x0  nop
    ctx->pc = 0x26c21cu;
    // NOP
label_26c220:
    // 0x26c220: 0x218d  break       0, 134
    ctx->pc = 0x26c220u;
    runtime->handleBreak(rdram, ctx);
label_26c224:
    // 0x26c224: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x26c224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c228:
    // 0x26c228: 0x0  nop
    ctx->pc = 0x26c228u;
    // NOP
label_26c22c:
    // 0x26c22c: 0x0  nop
    ctx->pc = 0x26c22cu;
    // NOP
label_26c230:
    // 0x26c230: 0x21a3  .word       0x000021A3                   # negu        $a0, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c230u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c234:
    // 0x26c234: 0xb9a0  .word       0x0000B9A0                   # add         $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26c238:
    // 0x26c238: 0x0  nop
    ctx->pc = 0x26c238u;
    // NOP
label_26c23c:
    // 0x26c23c: 0x0  nop
    ctx->pc = 0x26c23cu;
    // NOP
label_26c240:
    // 0x26c240: 0x21bb  dsra        $a0, $zero, 6
    ctx->pc = 0x26c240u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 6);
label_26c244:
    // 0x26c244: 0x12b30  tge         $zero, $at, 172
    ctx->pc = 0x26c244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26c248:
    // 0x26c248: 0x0  nop
    ctx->pc = 0x26c248u;
    // NOP
label_26c24c:
    // 0x26c24c: 0x0  nop
    ctx->pc = 0x26c24cu;
    // NOP
label_26c250:
    // 0x26c250: 0x21e1  .word       0x000021E1                   # addu        $a0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c254:
    // 0x26c254: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c258:
    // 0x26c258: 0x0  nop
    ctx->pc = 0x26c258u;
    // NOP
label_26c25c:
    // 0x26c25c: 0x0  nop
    ctx->pc = 0x26c25cu;
    // NOP
label_26c260:
    // 0x26c260: 0x21f7  .word       0x000021F7                   # INVALID     $zero, $zero, 0x21F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26C260 raw=0x000021F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c264:
    // 0x26c264: 0x9670  tge         $zero, $zero, 601
    ctx->pc = 0x26c264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c268:
    // 0x26c268: 0x0  nop
    ctx->pc = 0x26c268u;
    // NOP
label_26c26c:
    // 0x26c26c: 0x0  nop
    ctx->pc = 0x26c26cu;
    // NOP
label_26c270:
    // 0x26c270: 0x220a  .word       0x0000220A                   # movz        $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c270u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_26c274:
    // 0x26c274: 0x7830  tge         $zero, $zero, 480
    ctx->pc = 0x26c274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c278:
    // 0x26c278: 0x0  nop
    ctx->pc = 0x26c278u;
    // NOP
label_26c27c:
    // 0x26c27c: 0x0  nop
    ctx->pc = 0x26c27cu;
    // NOP
label_26c280:
    // 0x26c280: 0x221a  .word       0x0000221A                   # div         $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c280u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26c284:
    // 0x26c284: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c284u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26c288:
    // 0x26c288: 0x0  nop
    ctx->pc = 0x26c288u;
    // NOP
label_26c28c:
    // 0x26c28c: 0x0  nop
    ctx->pc = 0x26c28cu;
    // NOP
label_26c290:
    // 0x26c290: 0x2232  tlt         $zero, $zero, 136
    ctx->pc = 0x26c290u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c294:
    // 0x26c294: 0xaca0  .word       0x0000ACA0                   # add         $s5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c298:
    // 0x26c298: 0x0  nop
    ctx->pc = 0x26c298u;
    // NOP
label_26c29c:
    // 0x26c29c: 0x0  nop
    ctx->pc = 0x26c29cu;
    // NOP
label_26c2a0:
    // 0x26c2a0: 0x2248  .word       0x00002248                   # jr          $zero # 00002240 <InstrIdType: CPU_SPECIAL>
label_26c2a4:
    if (ctx->pc == 0x26C2A4u) {
        ctx->pc = 0x26C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2A0u;
        // 0x26c2a4: 0x8440  sll         $s0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2A8u;
        goto label_26c2a8;
    }
    ctx->pc = 0x26C2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2A0u;
        // 0x26c2a4: 0x8440  sll         $s0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C2A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C2A8u;
label_26c2a8:
    // 0x26c2a8: 0x0  nop
    ctx->pc = 0x26c2a8u;
    // NOP
label_26c2ac:
    // 0x26c2ac: 0x0  nop
    ctx->pc = 0x26c2acu;
    // NOP
label_26c2b0:
    // 0x26c2b0: 0x2259  .word       0x00002259                   # multu       $zero, $zero # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_26c2b4:
    // 0x26c2b4: 0xff10  .word       0x0000FF10                   # mfhi        $ra # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2b4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_26c2b8:
    // 0x26c2b8: 0x0  nop
    ctx->pc = 0x26c2b8u;
    // NOP
label_26c2bc:
    // 0x26c2bc: 0x0  nop
    ctx->pc = 0x26c2bcu;
    // NOP
label_26c2c0:
    // 0x26c2c0: 0x2279  .word       0x00002279                   # INVALID     $zero, $zero, 0x2279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26C2C0 raw=0x00002279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c2c4:
    // 0x26c2c4: 0xa9e0  .word       0x0000A9E0                   # add         $s5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c2c8:
    // 0x26c2c8: 0x0  nop
    ctx->pc = 0x26c2c8u;
    // NOP
label_26c2cc:
    // 0x26c2cc: 0x0  nop
    ctx->pc = 0x26c2ccu;
    // NOP
label_26c2d0:
    // 0x26c2d0: 0x228f  .word       0x0000228F                   # sync # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26c2d4:
    // 0x26c2d4: 0x9fb0  tge         $zero, $zero, 638
    ctx->pc = 0x26c2d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c2d8:
    // 0x26c2d8: 0x0  nop
    ctx->pc = 0x26c2d8u;
    // NOP
label_26c2dc:
    // 0x26c2dc: 0x0  nop
    ctx->pc = 0x26c2dcu;
    // NOP
label_26c2e0:
    // 0x26c2e0: 0x22a3  .word       0x000022A3                   # negu        $a0, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c2e4:
    // 0x26c2e4: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26c2e8:
    // 0x26c2e8: 0x0  nop
    ctx->pc = 0x26c2e8u;
    // NOP
label_26c2ec:
    // 0x26c2ec: 0x0  nop
    ctx->pc = 0x26c2ecu;
    // NOP
label_26c2f0:
    // 0x26c2f0: 0x22b3  tltu        $zero, $zero, 138
    ctx->pc = 0x26c2f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c2f4:
    // 0x26c2f4: 0xe0c0  sll         $gp, $zero, 3
    ctx->pc = 0x26c2f4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26c2f8:
    // 0x26c2f8: 0x0  nop
    ctx->pc = 0x26c2f8u;
    // NOP
label_26c2fc:
    // 0x26c2fc: 0x0  nop
    ctx->pc = 0x26c2fcu;
    // NOP
label_26c300:
    // 0x26c300: 0x22d0  .word       0x000022D0                   # mfhi        $a0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c300u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26c304:
    // 0x26c304: 0xa410  .word       0x0000A410                   # mfhi        $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c304u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26c308:
    // 0x26c308: 0x0  nop
    ctx->pc = 0x26c308u;
    // NOP
label_26c30c:
    // 0x26c30c: 0x0  nop
    ctx->pc = 0x26c30cu;
    // NOP
label_26c310:
    // 0x26c310: 0x22e5  .word       0x000022E5                   # move        $a0, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26c314:
    // 0x26c314: 0xa080  sll         $s4, $zero, 2
    ctx->pc = 0x26c314u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26c318:
    // 0x26c318: 0x0  nop
    ctx->pc = 0x26c318u;
    // NOP
label_26c31c:
    // 0x26c31c: 0x0  nop
    ctx->pc = 0x26c31cu;
    // NOP
label_26c320:
    // 0x26c320: 0x22fa  dsrl        $a0, $zero, 11
    ctx->pc = 0x26c320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> 11);
label_26c324:
    // 0x26c324: 0xe670  tge         $zero, $zero, 921
    ctx->pc = 0x26c324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c328:
    // 0x26c328: 0x0  nop
    ctx->pc = 0x26c328u;
    // NOP
label_26c32c:
    // 0x26c32c: 0x0  nop
    ctx->pc = 0x26c32cu;
    // NOP
label_26c330:
    // 0x26c330: 0x2317  .word       0x00002317                   # dsrav       $a0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c330u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c334:
    // 0x26c334: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x26c334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c338:
    // 0x26c338: 0x0  nop
    ctx->pc = 0x26c338u;
    // NOP
label_26c33c:
    // 0x26c33c: 0x0  nop
    ctx->pc = 0x26c33cu;
    // NOP
label_26c340:
    // 0x26c340: 0x2333  tltu        $zero, $zero, 140
    ctx->pc = 0x26c340u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c344:
    // 0x26c344: 0xb600  sll         $s6, $zero, 24
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26c348:
    // 0x26c348: 0x0  nop
    ctx->pc = 0x26c348u;
    // NOP
label_26c34c:
    // 0x26c34c: 0x0  nop
    ctx->pc = 0x26c34cu;
    // NOP
label_26c350:
    // 0x26c350: 0x234a  .word       0x0000234A                   # movz        $a0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c350u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_26c354:
    // 0x26c354: 0xba20  .word       0x0000BA20                   # add         $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26c358:
    // 0x26c358: 0x0  nop
    ctx->pc = 0x26c358u;
    // NOP
label_26c35c:
    // 0x26c35c: 0x0  nop
    ctx->pc = 0x26c35cu;
    // NOP
label_26c360:
    // 0x26c360: 0x2362  .word       0x00002362                   # neg         $a0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c360u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_26c364:
    // 0x26c364: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x26c364u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26c368:
    // 0x26c368: 0x0  nop
    ctx->pc = 0x26c368u;
    // NOP
label_26c36c:
    // 0x26c36c: 0x0  nop
    ctx->pc = 0x26c36cu;
    // NOP
label_26c370:
    // 0x26c370: 0x237b  dsra        $a0, $zero, 13
    ctx->pc = 0x26c370u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 13);
label_26c374:
    // 0x26c374: 0x10ff0  tge         $zero, $at, 63
    ctx->pc = 0x26c374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26c378:
    // 0x26c378: 0x0  nop
    ctx->pc = 0x26c378u;
    // NOP
label_26c37c:
    // 0x26c37c: 0x0  nop
    ctx->pc = 0x26c37cu;
    // NOP
label_26c380:
    // 0x26c380: 0x239d  .word       0x0000239D                   # dmultu      $zero, $zero # 00002380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26C380 raw=0x0000239D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c384:
    // 0x26c384: 0xd3a0  .word       0x0000D3A0                   # add         $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26c388:
    // 0x26c388: 0x0  nop
    ctx->pc = 0x26c388u;
    // NOP
label_26c38c:
    // 0x26c38c: 0x0  nop
    ctx->pc = 0x26c38cu;
    // NOP
label_26c390:
    // 0x26c390: 0x23b8  dsll        $a0, $zero, 14
    ctx->pc = 0x26c390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << 14);
label_26c394:
    // 0x26c394: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x26c394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c398:
    // 0x26c398: 0x0  nop
    ctx->pc = 0x26c398u;
    // NOP
label_26c39c:
    // 0x26c39c: 0x0  nop
    ctx->pc = 0x26c39cu;
    // NOP
label_26c3a0:
    // 0x26c3a0: 0x23cf  .word       0x000023CF                   # sync # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26c3a4:
    // 0x26c3a4: 0xd650  .word       0x0000D650                   # mfhi        $k0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3a4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_26c3a8:
    // 0x26c3a8: 0x0  nop
    ctx->pc = 0x26c3a8u;
    // NOP
label_26c3ac:
    // 0x26c3ac: 0x0  nop
    ctx->pc = 0x26c3acu;
    // NOP
label_26c3b0:
    // 0x26c3b0: 0x23ea  .word       0x000023EA                   # slt         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26c3b4:
    // 0x26c3b4: 0xd960  .word       0x0000D960                   # add         $k1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_26c3b8:
    // 0x26c3b8: 0x0  nop
    ctx->pc = 0x26c3b8u;
    // NOP
label_26c3bc:
    // 0x26c3bc: 0x0  nop
    ctx->pc = 0x26c3bcu;
    // NOP
label_26c3c0:
    // 0x26c3c0: 0x2406  .word       0x00002406                   # srlv        $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26c3c4:
    // 0x26c3c4: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26c3c8:
    // 0x26c3c8: 0x0  nop
    ctx->pc = 0x26c3c8u;
    // NOP
label_26c3cc:
    // 0x26c3cc: 0x0  nop
    ctx->pc = 0x26c3ccu;
    // NOP
label_26c3d0:
    // 0x26c3d0: 0x2423  .word       0x00002423                   # negu        $a0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c3d4:
    // 0x26c3d4: 0xef00  sll         $sp, $zero, 28
    ctx->pc = 0x26c3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26c3d8:
    // 0x26c3d8: 0x0  nop
    ctx->pc = 0x26c3d8u;
    // NOP
label_26c3dc:
    // 0x26c3dc: 0x0  nop
    ctx->pc = 0x26c3dcu;
    // NOP
label_26c3e0:
    // 0x26c3e0: 0x2441  .word       0x00002441                   # INVALID     $zero, $zero, 0x2441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26C3E0 raw=0x00002441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c3e4:
    // 0x26c3e4: 0x4900  sll         $t1, $zero, 4
    ctx->pc = 0x26c3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26c3e8:
    // 0x26c3e8: 0x0  nop
    ctx->pc = 0x26c3e8u;
    // NOP
label_26c3ec:
    // 0x26c3ec: 0x0  nop
    ctx->pc = 0x26c3ecu;
    // NOP
label_26c3f0:
    // 0x26c3f0: 0x244b  .word       0x0000244B                   # movn        $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_26c3f4:
    // 0x26c3f4: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c3f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c3f8:
    // 0x26c3f8: 0x0  nop
    ctx->pc = 0x26c3f8u;
    // NOP
label_26c3fc:
    // 0x26c3fc: 0x0  nop
    ctx->pc = 0x26c3fcu;
    // NOP
label_26c400:
    // 0x26c400: 0x2461  .word       0x00002461                   # addu        $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c404:
    // 0x26c404: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c404u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26c408:
    // 0x26c408: 0x0  nop
    ctx->pc = 0x26c408u;
    // NOP
label_26c40c:
    // 0x26c40c: 0x0  nop
    ctx->pc = 0x26c40cu;
    // NOP
label_26c410:
    // 0x26c410: 0x2476  tne         $zero, $zero, 145
    ctx->pc = 0x26c410u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c414:
    // 0x26c414: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26c414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26c418:
    // 0x26c418: 0x0  nop
    ctx->pc = 0x26c418u;
    // NOP
label_26c41c:
    // 0x26c41c: 0x0  nop
    ctx->pc = 0x26c41cu;
    // NOP
label_26c420:
    // 0x26c420: 0x2487  .word       0x00002487                   # srav        $a0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c420u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26c424:
    // 0x26c424: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x26c424u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26c428:
    // 0x26c428: 0x0  nop
    ctx->pc = 0x26c428u;
    // NOP
label_26c42c:
    // 0x26c42c: 0x0  nop
    ctx->pc = 0x26c42cu;
    // NOP
label_26c430:
    // 0x26c430: 0x24a0  .word       0x000024A0                   # add         $a0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c430u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26c434:
    // 0x26c434: 0xecd0  .word       0x0000ECD0                   # mfhi        $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c434u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_26c438:
    // 0x26c438: 0x0  nop
    ctx->pc = 0x26c438u;
    // NOP
label_26c43c:
    // 0x26c43c: 0x0  nop
    ctx->pc = 0x26c43cu;
    // NOP
label_26c440:
    // 0x26c440: 0x24be  dsrl32      $a0, $zero, 18
    ctx->pc = 0x26c440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (32 + 18));
label_26c444:
    // 0x26c444: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c444u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_26c448:
    // 0x26c448: 0x0  nop
    ctx->pc = 0x26c448u;
    // NOP
label_26c44c:
    // 0x26c44c: 0x0  nop
    ctx->pc = 0x26c44cu;
    // NOP
label_26c450:
    // 0x26c450: 0x24d8  .word       0x000024D8                   # mult        $a0, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_26c454:
    // 0x26c454: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x26c454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c458:
    // 0x26c458: 0x0  nop
    ctx->pc = 0x26c458u;
    // NOP
label_26c45c:
    // 0x26c45c: 0x0  nop
    ctx->pc = 0x26c45cu;
    // NOP
label_26c460:
    // 0x26c460: 0x24ef  .word       0x000024EF                   # dsubu       $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26c464:
    // 0x26c464: 0x137f0  tge         $zero, $at, 223
    ctx->pc = 0x26c464u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26c468:
    // 0x26c468: 0x0  nop
    ctx->pc = 0x26c468u;
    // NOP
label_26c46c:
    // 0x26c46c: 0x0  nop
    ctx->pc = 0x26c46cu;
    // NOP
label_26c470:
    // 0x26c470: 0x2516  .word       0x00002516                   # dsrlv       $a0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c474:
    // 0x26c474: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c474u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26c478:
    // 0x26c478: 0x0  nop
    ctx->pc = 0x26c478u;
    // NOP
label_26c47c:
    // 0x26c47c: 0x0  nop
    ctx->pc = 0x26c47cu;
    // NOP
label_26c480:
    // 0x26c480: 0x2533  tltu        $zero, $zero, 148
    ctx->pc = 0x26c480u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c484:
    // 0x26c484: 0xd330  tge         $zero, $zero, 844
    ctx->pc = 0x26c484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c488:
    // 0x26c488: 0x0  nop
    ctx->pc = 0x26c488u;
    // NOP
label_26c48c:
    // 0x26c48c: 0x0  nop
    ctx->pc = 0x26c48cu;
    // NOP
label_26c490:
    // 0x26c490: 0x254e  .word       0x0000254E                   # INVALID     $zero, $zero, 0x254E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26C490 raw=0x0000254E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c494:
    // 0x26c494: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c494u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c498:
    // 0x26c498: 0x0  nop
    ctx->pc = 0x26c498u;
    // NOP
label_26c49c:
    // 0x26c49c: 0x0  nop
    ctx->pc = 0x26c49cu;
    // NOP
label_26c4a0:
    // 0x26c4a0: 0x2561  .word       0x00002561                   # addu        $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c4a4:
    // 0x26c4a4: 0x10800  sll         $at, $at, 0
    ctx->pc = 0x26c4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_26c4a8:
    // 0x26c4a8: 0x0  nop
    ctx->pc = 0x26c4a8u;
    // NOP
label_26c4ac:
    // 0x26c4ac: 0x0  nop
    ctx->pc = 0x26c4acu;
    // NOP
label_26c4b0:
    // 0x26c4b0: 0x2582  srl         $a0, $zero, 22
    ctx->pc = 0x26c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_26c4b4:
    // 0x26c4b4: 0x9c50  .word       0x00009C50                   # mfhi        $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26c4b8:
    // 0x26c4b8: 0x0  nop
    ctx->pc = 0x26c4b8u;
    // NOP
label_26c4bc:
    // 0x26c4bc: 0x0  nop
    ctx->pc = 0x26c4bcu;
    // NOP
label_26c4c0:
    // 0x26c4c0: 0x2596  .word       0x00002596                   # dsrlv       $a0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c4c4:
    // 0x26c4c4: 0xfaa0  .word       0x0000FAA0                   # add         $ra, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26c4c8:
    // 0x26c4c8: 0x0  nop
    ctx->pc = 0x26c4c8u;
    // NOP
label_26c4cc:
    // 0x26c4cc: 0x0  nop
    ctx->pc = 0x26c4ccu;
    // NOP
label_26c4d0:
    // 0x26c4d0: 0x25b6  tne         $zero, $zero, 150
    ctx->pc = 0x26c4d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c4d4:
    // 0x26c4d4: 0x151f0  tge         $zero, $at, 327
    ctx->pc = 0x26c4d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26c4d8:
    // 0x26c4d8: 0x0  nop
    ctx->pc = 0x26c4d8u;
    // NOP
label_26c4dc:
    // 0x26c4dc: 0x0  nop
    ctx->pc = 0x26c4dcu;
    // NOP
label_26c4e0:
    // 0x26c4e0: 0x25e1  .word       0x000025E1                   # addu        $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c4e4:
    // 0x26c4e4: 0xde90  .word       0x0000DE90                   # mfhi        $k1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_26c4e8:
    // 0x26c4e8: 0x0  nop
    ctx->pc = 0x26c4e8u;
    // NOP
label_26c4ec:
    // 0x26c4ec: 0x0  nop
    ctx->pc = 0x26c4ecu;
    // NOP
label_26c4f0:
    // 0x26c4f0: 0x25fd  .word       0x000025FD                   # INVALID     $zero, $zero, 0x25FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26C4F0 raw=0x000025FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c4f4:
    // 0x26c4f4: 0xc950  .word       0x0000C950                   # mfhi        $t9 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c4f4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_26c4f8:
    // 0x26c4f8: 0x0  nop
    ctx->pc = 0x26c4f8u;
    // NOP
label_26c4fc:
    // 0x26c4fc: 0x0  nop
    ctx->pc = 0x26c4fcu;
    // NOP
label_26c500:
    // 0x26c500: 0x2617  .word       0x00002617                   # dsrav       $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c500u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c504:
    // 0x26c504: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c504u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26c508:
    // 0x26c508: 0x0  nop
    ctx->pc = 0x26c508u;
    // NOP
label_26c50c:
    // 0x26c50c: 0x0  nop
    ctx->pc = 0x26c50cu;
    // NOP
label_26c510:
    // 0x26c510: 0x262e  .word       0x0000262E                   # dsub        $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c510u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_26c514:
    // 0x26c514: 0xdac0  sll         $k1, $zero, 11
    ctx->pc = 0x26c514u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26c518:
    // 0x26c518: 0x0  nop
    ctx->pc = 0x26c518u;
    // NOP
label_26c51c:
    // 0x26c51c: 0x0  nop
    ctx->pc = 0x26c51cu;
    // NOP
label_26c520:
    // 0x26c520: 0x264a  .word       0x0000264A                   # movz        $a0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c520u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_26c524:
    // 0x26c524: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26c524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26c528:
    // 0x26c528: 0x0  nop
    ctx->pc = 0x26c528u;
    // NOP
label_26c52c:
    // 0x26c52c: 0x0  nop
    ctx->pc = 0x26c52cu;
    // NOP
label_26c530:
    // 0x26c530: 0x265b  .word       0x0000265B                   # divu        $a0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c530u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26c534:
    // 0x26c534: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x26c534u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26c538:
    // 0x26c538: 0x0  nop
    ctx->pc = 0x26c538u;
    // NOP
label_26c53c:
    // 0x26c53c: 0x0  nop
    ctx->pc = 0x26c53cu;
    // NOP
label_26c540:
    // 0x26c540: 0x2667  .word       0x00002667                   # not         $a0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c540u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26c544:
    // 0x26c544: 0x10f00  sll         $at, $at, 28
    ctx->pc = 0x26c544u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_26c548:
    // 0x26c548: 0x0  nop
    ctx->pc = 0x26c548u;
    // NOP
label_26c54c:
    // 0x26c54c: 0x0  nop
    ctx->pc = 0x26c54cu;
    // NOP
label_26c550:
    // 0x26c550: 0x2689  .word       0x00002689                   # jalr        $a0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
label_26c554:
    if (ctx->pc == 0x26C554u) {
        ctx->pc = 0x26C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C550u;
        // 0x26c554: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C558u;
        goto label_26c558;
    }
    ctx->pc = 0x26C550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x26C558u);
        ctx->pc = 0x26C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C550u;
        // 0x26c554: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C550u, 0x26C558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C558u;
label_26c558:
    // 0x26c558: 0x0  nop
    ctx->pc = 0x26c558u;
    // NOP
label_26c55c:
    // 0x26c55c: 0x0  nop
    ctx->pc = 0x26c55cu;
    // NOP
label_26c560:
    // 0x26c560: 0x26a0  .word       0x000026A0                   # add         $a0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c560u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26c564:
    // 0x26c564: 0x9d50  .word       0x00009D50                   # mfhi        $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c564u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26c568:
    // 0x26c568: 0x0  nop
    ctx->pc = 0x26c568u;
    // NOP
label_26c56c:
    // 0x26c56c: 0x0  nop
    ctx->pc = 0x26c56cu;
    // NOP
label_26c570:
    // 0x26c570: 0x26b4  teq         $zero, $zero, 154
    ctx->pc = 0x26c570u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c574:
    // 0x26c574: 0xa500  sll         $s4, $zero, 20
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26c578:
    // 0x26c578: 0x0  nop
    ctx->pc = 0x26c578u;
    // NOP
label_26c57c:
    // 0x26c57c: 0x0  nop
    ctx->pc = 0x26c57cu;
    // NOP
label_26c580:
    // 0x26c580: 0x26c9  .word       0x000026C9                   # jalr        $a0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_26c584:
    if (ctx->pc == 0x26C584u) {
        ctx->pc = 0x26C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C580u;
        // 0x26c584: 0xcc70  tge         $zero, $zero, 817 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C588u;
        goto label_26c588;
    }
    ctx->pc = 0x26C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x26C588u);
        ctx->pc = 0x26C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C580u;
        // 0x26c584: 0xcc70  tge         $zero, $zero, 817 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C580u, 0x26C588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C588u;
label_26c588:
    // 0x26c588: 0x0  nop
    ctx->pc = 0x26c588u;
    // NOP
label_26c58c:
    // 0x26c58c: 0x0  nop
    ctx->pc = 0x26c58cu;
    // NOP
label_26c590:
    // 0x26c590: 0x26e3  .word       0x000026E3                   # negu        $a0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26c594:
    // 0x26c594: 0xce80  sll         $t9, $zero, 26
    ctx->pc = 0x26c594u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26c598:
    // 0x26c598: 0x0  nop
    ctx->pc = 0x26c598u;
    // NOP
label_26c59c:
    // 0x26c59c: 0x0  nop
    ctx->pc = 0x26c59cu;
    // NOP
label_26c5a0:
    // 0x26c5a0: 0x26fd  .word       0x000026FD                   # INVALID     $zero, $zero, 0x26FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26C5A0 raw=0x000026FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c5a4:
    // 0x26c5a4: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x26c5a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c5a8:
    // 0x26c5a8: 0x0  nop
    ctx->pc = 0x26c5a8u;
    // NOP
label_26c5ac:
    // 0x26c5ac: 0x0  nop
    ctx->pc = 0x26c5acu;
    // NOP
label_26c5b0:
    // 0x26c5b0: 0x2717  .word       0x00002717                   # dsrav       $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c5b4:
    // 0x26c5b4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5b4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26c5b8:
    // 0x26c5b8: 0x0  nop
    ctx->pc = 0x26c5b8u;
    // NOP
label_26c5bc:
    // 0x26c5bc: 0x0  nop
    ctx->pc = 0x26c5bcu;
    // NOP
label_26c5c0:
    // 0x26c5c0: 0x2729  .word       0x00002729                   # mtsa        $zero # 00002700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c5c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26c5c4:
    // 0x26c5c4: 0x8d60  .word       0x00008D60                   # add         $s1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26c5c8:
    // 0x26c5c8: 0x0  nop
    ctx->pc = 0x26c5c8u;
    // NOP
label_26c5cc:
    // 0x26c5cc: 0x0  nop
    ctx->pc = 0x26c5ccu;
    // NOP
label_26c5d0:
    // 0x26c5d0: 0x273b  dsra        $a0, $zero, 28
    ctx->pc = 0x26c5d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 28);
label_26c5d4:
    // 0x26c5d4: 0x8b70  tge         $zero, $zero, 557
    ctx->pc = 0x26c5d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c5d8:
    // 0x26c5d8: 0x0  nop
    ctx->pc = 0x26c5d8u;
    // NOP
label_26c5dc:
    // 0x26c5dc: 0x0  nop
    ctx->pc = 0x26c5dcu;
    // NOP
label_26c5e0:
    // 0x26c5e0: 0x274d  break       0, 157
    ctx->pc = 0x26c5e0u;
    runtime->handleBreak(rdram, ctx);
label_26c5e4:
    // 0x26c5e4: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x26c5e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c5e8:
    // 0x26c5e8: 0x0  nop
    ctx->pc = 0x26c5e8u;
    // NOP
label_26c5ec:
    // 0x26c5ec: 0x0  nop
    ctx->pc = 0x26c5ecu;
    // NOP
label_26c5f0:
    // 0x26c5f0: 0x275c  .word       0x0000275C                   # dmult       $zero, $zero # 00002740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26C5F0 raw=0x0000275C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c5f4:
    // 0x26c5f4: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5f4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c5f8:
    // 0x26c5f8: 0x0  nop
    ctx->pc = 0x26c5f8u;
    // NOP
label_26c5fc:
    // 0x26c5fc: 0x0  nop
    ctx->pc = 0x26c5fcu;
    // NOP
label_26c600:
    // 0x26c600: 0x276f  .word       0x0000276F                   # dsubu       $a0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26c604:
    // 0x26c604: 0x6c30  tge         $zero, $zero, 432
    ctx->pc = 0x26c604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c608:
    // 0x26c608: 0x0  nop
    ctx->pc = 0x26c608u;
    // NOP
label_26c60c:
    // 0x26c60c: 0x0  nop
    ctx->pc = 0x26c60cu;
    // NOP
label_26c610:
    // 0x26c610: 0x277d  .word       0x0000277D                   # INVALID     $zero, $zero, 0x277D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26C610 raw=0x0000277D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c614:
    // 0x26c614: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x26c614u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26c618:
    // 0x26c618: 0x0  nop
    ctx->pc = 0x26c618u;
    // NOP
label_26c61c:
    // 0x26c61c: 0x0  nop
    ctx->pc = 0x26c61cu;
    // NOP
label_26c620:
    // 0x26c620: 0x278f  .word       0x0000278F                   # sync.p # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26c624:
    // 0x26c624: 0x7af0  tge         $zero, $zero, 491
    ctx->pc = 0x26c624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c628:
    // 0x26c628: 0x0  nop
    ctx->pc = 0x26c628u;
    // NOP
label_26c62c:
    // 0x26c62c: 0x0  nop
    ctx->pc = 0x26c62cu;
    // NOP
label_26c630:
    // 0x26c630: 0x279f  .word       0x0000279F                   # ddivu       $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26C630 raw=0x0000279F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c634:
    // 0x26c634: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c634u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26c638:
    // 0x26c638: 0x0  nop
    ctx->pc = 0x26c638u;
    // NOP
label_26c63c:
    // 0x26c63c: 0x0  nop
    ctx->pc = 0x26c63cu;
    // NOP
label_26c640:
    // 0x26c640: 0x27af  .word       0x000027AF                   # dsubu       $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26c644:
    // 0x26c644: 0xa8d0  .word       0x0000A8D0                   # mfhi        $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c644u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26c648:
    // 0x26c648: 0x0  nop
    ctx->pc = 0x26c648u;
    // NOP
label_26c64c:
    // 0x26c64c: 0x0  nop
    ctx->pc = 0x26c64cu;
    // NOP
label_26c650:
    // 0x26c650: 0x27c5  .word       0x000027C5                   # INVALID     $zero, $zero, 0x27C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26C650 raw=0x000027C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c654:
    // 0x26c654: 0xb8c0  sll         $s7, $zero, 3
    ctx->pc = 0x26c654u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26c658:
    // 0x26c658: 0x0  nop
    ctx->pc = 0x26c658u;
    // NOP
label_26c65c:
    // 0x26c65c: 0x0  nop
    ctx->pc = 0x26c65cu;
    // NOP
label_26c660:
    // 0x26c660: 0x27dd  .word       0x000027DD                   # dmultu      $zero, $zero # 000027C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26C660 raw=0x000027DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c664:
    // 0x26c664: 0xf3d0  .word       0x0000F3D0                   # mfhi        $fp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_26c668:
    // 0x26c668: 0x0  nop
    ctx->pc = 0x26c668u;
    // NOP
label_26c66c:
    // 0x26c66c: 0x0  nop
    ctx->pc = 0x26c66cu;
    // NOP
label_26c670:
    // 0x26c670: 0x27fc  dsll32      $a0, $zero, 31
    ctx->pc = 0x26c670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 31));
label_26c674:
    // 0x26c674: 0xaec0  sll         $s5, $zero, 27
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26c678:
    // 0x26c678: 0x0  nop
    ctx->pc = 0x26c678u;
    // NOP
label_26c67c:
    // 0x26c67c: 0x0  nop
    ctx->pc = 0x26c67cu;
    // NOP
label_26c680:
    // 0x26c680: 0x2812  mflo        $a1
    ctx->pc = 0x26c680u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_26c684:
    // 0x26c684: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x26c684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c688:
    // 0x26c688: 0x0  nop
    ctx->pc = 0x26c688u;
    // NOP
label_26c68c:
    // 0x26c68c: 0x0  nop
    ctx->pc = 0x26c68cu;
    // NOP
label_26c690:
    // 0x26c690: 0x2825  move        $a1, $zero
    ctx->pc = 0x26c690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26c694:
    // 0x26c694: 0xaae0  .word       0x0000AAE0                   # add         $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c698:
    // 0x26c698: 0x0  nop
    ctx->pc = 0x26c698u;
    // NOP
label_26c69c:
    // 0x26c69c: 0x0  nop
    ctx->pc = 0x26c69cu;
    // NOP
label_26c6a0:
    // 0x26c6a0: 0x283b  dsra        $a1, $zero, 0
    ctx->pc = 0x26c6a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> 0);
label_26c6a4:
    // 0x26c6a4: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26c6a8:
    // 0x26c6a8: 0x0  nop
    ctx->pc = 0x26c6a8u;
    // NOP
label_26c6ac:
    // 0x26c6ac: 0x0  nop
    ctx->pc = 0x26c6acu;
    // NOP
label_26c6b0:
    // 0x26c6b0: 0x2848  .word       0x00002848                   # jr          $zero # 00002840 <InstrIdType: CPU_SPECIAL>
label_26c6b4:
    if (ctx->pc == 0x26C6B4u) {
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B0u;
        // 0x26c6b4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6B8u;
        goto label_26c6b8;
    }
    ctx->pc = 0x26C6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B0u;
        // 0x26c6b4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C6B8u;
label_26c6b8:
    // 0x26c6b8: 0x0  nop
    ctx->pc = 0x26c6b8u;
    // NOP
label_26c6bc:
    // 0x26c6bc: 0x0  nop
    ctx->pc = 0x26c6bcu;
    // NOP
label_26c6c0:
    // 0x26c6c0: 0x285a  .word       0x0000285A                   # div         $a1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26c6c4:
    // 0x26c6c4: 0xcf70  tge         $zero, $zero, 829
    ctx->pc = 0x26c6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c6c8:
    // 0x26c6c8: 0x0  nop
    ctx->pc = 0x26c6c8u;
    // NOP
label_26c6cc:
    // 0x26c6cc: 0x0  nop
    ctx->pc = 0x26c6ccu;
    // NOP
label_26c6d0:
    // 0x26c6d0: 0x2874  teq         $zero, $zero, 161
    ctx->pc = 0x26c6d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c6d4:
    // 0x26c6d4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6d4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26c6d8:
    // 0x26c6d8: 0x0  nop
    ctx->pc = 0x26c6d8u;
    // NOP
label_26c6dc:
    // 0x26c6dc: 0x0  nop
    ctx->pc = 0x26c6dcu;
    // NOP
label_26c6e0:
    // 0x26c6e0: 0x288d  break       0, 162
    ctx->pc = 0x26c6e0u;
    runtime->handleBreak(rdram, ctx);
label_26c6e4:
    // 0x26c6e4: 0x8a70  tge         $zero, $zero, 553
    ctx->pc = 0x26c6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c6e8:
    // 0x26c6e8: 0x0  nop
    ctx->pc = 0x26c6e8u;
    // NOP
label_26c6ec:
    // 0x26c6ec: 0x0  nop
    ctx->pc = 0x26c6ecu;
    // NOP
label_26c6f0:
    // 0x26c6f0: 0x289f  .word       0x0000289F                   # ddivu       $a1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26C6F0 raw=0x0000289F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c6f4:
    // 0x26c6f4: 0xb680  sll         $s6, $zero, 26
    ctx->pc = 0x26c6f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26c6f8:
    // 0x26c6f8: 0x0  nop
    ctx->pc = 0x26c6f8u;
    // NOP
label_26c6fc:
    // 0x26c6fc: 0x0  nop
    ctx->pc = 0x26c6fcu;
    // NOP
label_26c700:
    // 0x26c700: 0x28b6  tne         $zero, $zero, 162
    ctx->pc = 0x26c700u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c704:
    // 0x26c704: 0xa560  .word       0x0000A560                   # add         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c708:
    // 0x26c708: 0x0  nop
    ctx->pc = 0x26c708u;
    // NOP
label_26c70c:
    // 0x26c70c: 0x0  nop
    ctx->pc = 0x26c70cu;
    // NOP
label_26c710:
    // 0x26c710: 0x28cb  .word       0x000028CB                   # movn        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c710u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26c714:
    // 0x26c714: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c714u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26c718:
    // 0x26c718: 0x0  nop
    ctx->pc = 0x26c718u;
    // NOP
label_26c71c:
    // 0x26c71c: 0x0  nop
    ctx->pc = 0x26c71cu;
    // NOP
label_26c720:
    // 0x26c720: 0x28db  .word       0x000028DB                   # divu        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c720u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26c724:
    // 0x26c724: 0x9070  tge         $zero, $zero, 577
    ctx->pc = 0x26c724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c728:
    // 0x26c728: 0x0  nop
    ctx->pc = 0x26c728u;
    // NOP
label_26c72c:
    // 0x26c72c: 0x0  nop
    ctx->pc = 0x26c72cu;
    // NOP
label_26c730:
    // 0x26c730: 0x28ee  .word       0x000028EE                   # dsub        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c730u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26c734:
    // 0x26c734: 0x9bf0  tge         $zero, $zero, 623
    ctx->pc = 0x26c734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c738:
    // 0x26c738: 0x0  nop
    ctx->pc = 0x26c738u;
    // NOP
label_26c73c:
    // 0x26c73c: 0x0  nop
    ctx->pc = 0x26c73cu;
    // NOP
label_26c740:
    // 0x26c740: 0x2902  srl         $a1, $zero, 4
    ctx->pc = 0x26c740u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_26c744:
    // 0x26c744: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c748:
    // 0x26c748: 0x0  nop
    ctx->pc = 0x26c748u;
    // NOP
label_26c74c:
    // 0x26c74c: 0x0  nop
    ctx->pc = 0x26c74cu;
    // NOP
label_26c750:
    // 0x26c750: 0x2917  .word       0x00002917                   # dsrav       $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c750u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c754:
    // 0x26c754: 0x8d30  tge         $zero, $zero, 564
    ctx->pc = 0x26c754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c758:
    // 0x26c758: 0x0  nop
    ctx->pc = 0x26c758u;
    // NOP
label_26c75c:
    // 0x26c75c: 0x0  nop
    ctx->pc = 0x26c75cu;
    // NOP
label_26c760:
    // 0x26c760: 0x2929  .word       0x00002929                   # mtsa        $zero # 00002900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c760u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26c764:
    // 0x26c764: 0x14a70  tge         $zero, $at, 297
    ctx->pc = 0x26c764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26c768:
    // 0x26c768: 0x0  nop
    ctx->pc = 0x26c768u;
    // NOP
label_26c76c:
    // 0x26c76c: 0x0  nop
    ctx->pc = 0x26c76cu;
    // NOP
label_26c770:
    // 0x26c770: 0x2953  .word       0x00002953                   # mtlo        $zero # 00002940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c770u;
    ctx->lo = GPR_U64(ctx, 0);
label_26c774:
    // 0x26c774: 0x97d0  .word       0x000097D0                   # mfhi        $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c774u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c778:
    // 0x26c778: 0x0  nop
    ctx->pc = 0x26c778u;
    // NOP
label_26c77c:
    // 0x26c77c: 0x0  nop
    ctx->pc = 0x26c77cu;
    // NOP
label_26c780:
    // 0x26c780: 0x2966  .word       0x00002966                   # xor         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26c784:
    // 0x26c784: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26c788:
    // 0x26c788: 0x0  nop
    ctx->pc = 0x26c788u;
    // NOP
label_26c78c:
    // 0x26c78c: 0x0  nop
    ctx->pc = 0x26c78cu;
    // NOP
label_26c790:
    // 0x26c790: 0x297f  dsra32      $a1, $zero, 5
    ctx->pc = 0x26c790u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 5));
label_26c794:
    // 0x26c794: 0xad20  .word       0x0000AD20                   # add         $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c798:
    // 0x26c798: 0x0  nop
    ctx->pc = 0x26c798u;
    // NOP
label_26c79c:
    // 0x26c79c: 0x0  nop
    ctx->pc = 0x26c79cu;
    // NOP
label_26c7a0:
    // 0x26c7a0: 0x2995  .word       0x00002995                   # INVALID     $zero, $zero, 0x2995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26C7A0 raw=0x00002995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c7a4:
    // 0x26c7a4: 0x8700  sll         $s0, $zero, 28
    ctx->pc = 0x26c7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26c7a8:
    // 0x26c7a8: 0x0  nop
    ctx->pc = 0x26c7a8u;
    // NOP
label_26c7ac:
    // 0x26c7ac: 0x0  nop
    ctx->pc = 0x26c7acu;
    // NOP
label_26c7b0:
    // 0x26c7b0: 0x29a6  .word       0x000029A6                   # xor         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26c7b4:
    // 0x26c7b4: 0x89e0  .word       0x000089E0                   # add         $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26c7b8:
    // 0x26c7b8: 0x0  nop
    ctx->pc = 0x26c7b8u;
    // NOP
label_26c7bc:
    // 0x26c7bc: 0x0  nop
    ctx->pc = 0x26c7bcu;
    // NOP
label_26c7c0:
    // 0x26c7c0: 0x29b8  dsll        $a1, $zero, 6
    ctx->pc = 0x26c7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 6);
label_26c7c4:
    // 0x26c7c4: 0x8830  tge         $zero, $zero, 544
    ctx->pc = 0x26c7c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c7c8:
    // 0x26c7c8: 0x0  nop
    ctx->pc = 0x26c7c8u;
    // NOP
label_26c7cc:
    // 0x26c7cc: 0x0  nop
    ctx->pc = 0x26c7ccu;
    // NOP
label_26c7d0:
    // 0x26c7d0: 0x29ca  .word       0x000029CA                   # movz        $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26c7d4:
    // 0x26c7d4: 0x10790  .word       0x00010790                   # mfhi        $zero # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26c7d8:
    // 0x26c7d8: 0x0  nop
    ctx->pc = 0x26c7d8u;
    // NOP
label_26c7dc:
    // 0x26c7dc: 0x0  nop
    ctx->pc = 0x26c7dcu;
    // NOP
label_26c7e0:
    // 0x26c7e0: 0x29eb  .word       0x000029EB                   # sltu        $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26c7e4:
    // 0x26c7e4: 0xa950  .word       0x0000A950                   # mfhi        $s5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7e4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26c7e8:
    // 0x26c7e8: 0x0  nop
    ctx->pc = 0x26c7e8u;
    // NOP
label_26c7ec:
    // 0x26c7ec: 0x0  nop
    ctx->pc = 0x26c7ecu;
    // NOP
label_26c7f0:
    // 0x26c7f0: 0x2a01  .word       0x00002A01                   # INVALID     $zero, $zero, 0x2A01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26C7F0 raw=0x00002A01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c7f4:
    // 0x26c7f4: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x26c7f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26c7f8:
    // 0x26c7f8: 0x0  nop
    ctx->pc = 0x26c7f8u;
    // NOP
label_26c7fc:
    // 0x26c7fc: 0x0  nop
    ctx->pc = 0x26c7fcu;
    // NOP
label_26c800:
    // 0x26c800: 0x2a17  .word       0x00002A17                   # dsrav       $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c800u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c804:
    // 0x26c804: 0x9b30  tge         $zero, $zero, 620
    ctx->pc = 0x26c804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c808:
    // 0x26c808: 0x0  nop
    ctx->pc = 0x26c808u;
    // NOP
label_26c80c:
    // 0x26c80c: 0x0  nop
    ctx->pc = 0x26c80cu;
    // NOP
label_26c810:
    // 0x26c810: 0x2a2b  .word       0x00002A2B                   # sltu        $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c810u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26c814:
    // 0x26c814: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x26c814u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26c818:
    // 0x26c818: 0x0  nop
    ctx->pc = 0x26c818u;
    // NOP
label_26c81c:
    // 0x26c81c: 0x0  nop
    ctx->pc = 0x26c81cu;
    // NOP
label_26c820:
    // 0x26c820: 0x2a3a  dsrl        $a1, $zero, 8
    ctx->pc = 0x26c820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> 8);
label_26c824:
    // 0x26c824: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x26c824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c828:
    // 0x26c828: 0x0  nop
    ctx->pc = 0x26c828u;
    // NOP
label_26c82c:
    // 0x26c82c: 0x0  nop
    ctx->pc = 0x26c82cu;
    // NOP
    ctx->pc = 0x26c830u;
    return;
}

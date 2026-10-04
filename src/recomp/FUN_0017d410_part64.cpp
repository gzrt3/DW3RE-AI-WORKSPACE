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


void FUN_0017d410_part64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19c040u: goto label_19c040;
        case 0x19c044u: goto label_19c044;
        case 0x19c048u: goto label_19c048;
        case 0x19c04cu: goto label_19c04c;
        case 0x19c050u: goto label_19c050;
        case 0x19c054u: goto label_19c054;
        case 0x19c058u: goto label_19c058;
        case 0x19c05cu: goto label_19c05c;
        case 0x19c060u: goto label_19c060;
        case 0x19c064u: goto label_19c064;
        case 0x19c068u: goto label_19c068;
        case 0x19c06cu: goto label_19c06c;
        case 0x19c070u: goto label_19c070;
        case 0x19c074u: goto label_19c074;
        case 0x19c078u: goto label_19c078;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c080u: goto label_19c080;
        case 0x19c084u: goto label_19c084;
        case 0x19c088u: goto label_19c088;
        case 0x19c08cu: goto label_19c08c;
        case 0x19c090u: goto label_19c090;
        case 0x19c094u: goto label_19c094;
        case 0x19c098u: goto label_19c098;
        case 0x19c09cu: goto label_19c09c;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0a4u: goto label_19c0a4;
        case 0x19c0a8u: goto label_19c0a8;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b0u: goto label_19c0b0;
        case 0x19c0b4u: goto label_19c0b4;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0bcu: goto label_19c0bc;
        case 0x19c0c0u: goto label_19c0c0;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0d4u: goto label_19c0d4;
        case 0x19c0d8u: goto label_19c0d8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0e4u: goto label_19c0e4;
        case 0x19c0e8u: goto label_19c0e8;
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c0f0u: goto label_19c0f0;
        case 0x19c0f4u: goto label_19c0f4;
        case 0x19c0f8u: goto label_19c0f8;
        case 0x19c0fcu: goto label_19c0fc;
        case 0x19c100u: goto label_19c100;
        case 0x19c104u: goto label_19c104;
        case 0x19c108u: goto label_19c108;
        case 0x19c10cu: goto label_19c10c;
        case 0x19c110u: goto label_19c110;
        case 0x19c114u: goto label_19c114;
        case 0x19c118u: goto label_19c118;
        case 0x19c11cu: goto label_19c11c;
        case 0x19c120u: goto label_19c120;
        case 0x19c124u: goto label_19c124;
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        case 0x19c150u: goto label_19c150;
        case 0x19c154u: goto label_19c154;
        case 0x19c158u: goto label_19c158;
        case 0x19c15cu: goto label_19c15c;
        case 0x19c160u: goto label_19c160;
        case 0x19c164u: goto label_19c164;
        case 0x19c168u: goto label_19c168;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c170u: goto label_19c170;
        case 0x19c174u: goto label_19c174;
        case 0x19c178u: goto label_19c178;
        case 0x19c17cu: goto label_19c17c;
        case 0x19c180u: goto label_19c180;
        case 0x19c184u: goto label_19c184;
        case 0x19c188u: goto label_19c188;
        case 0x19c18cu: goto label_19c18c;
        case 0x19c190u: goto label_19c190;
        case 0x19c194u: goto label_19c194;
        case 0x19c198u: goto label_19c198;
        case 0x19c19cu: goto label_19c19c;
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1a4u: goto label_19c1a4;
        case 0x19c1a8u: goto label_19c1a8;
        case 0x19c1acu: goto label_19c1ac;
        case 0x19c1b0u: goto label_19c1b0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1bcu: goto label_19c1bc;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c1c8u: goto label_19c1c8;
        case 0x19c1ccu: goto label_19c1cc;
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c1d4u: goto label_19c1d4;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c1dcu: goto label_19c1dc;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e4u: goto label_19c1e4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c1ecu: goto label_19c1ec;
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        case 0x19c240u: goto label_19c240;
        case 0x19c244u: goto label_19c244;
        case 0x19c248u: goto label_19c248;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c250u: goto label_19c250;
        case 0x19c254u: goto label_19c254;
        case 0x19c258u: goto label_19c258;
        case 0x19c25cu: goto label_19c25c;
        case 0x19c260u: goto label_19c260;
        case 0x19c264u: goto label_19c264;
        case 0x19c268u: goto label_19c268;
        case 0x19c26cu: goto label_19c26c;
        case 0x19c270u: goto label_19c270;
        case 0x19c274u: goto label_19c274;
        case 0x19c278u: goto label_19c278;
        case 0x19c27cu: goto label_19c27c;
        case 0x19c280u: goto label_19c280;
        case 0x19c284u: goto label_19c284;
        case 0x19c288u: goto label_19c288;
        case 0x19c28cu: goto label_19c28c;
        case 0x19c290u: goto label_19c290;
        case 0x19c294u: goto label_19c294;
        case 0x19c298u: goto label_19c298;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2a0u: goto label_19c2a0;
        case 0x19c2a4u: goto label_19c2a4;
        case 0x19c2a8u: goto label_19c2a8;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2b0u: goto label_19c2b0;
        case 0x19c2b4u: goto label_19c2b4;
        case 0x19c2b8u: goto label_19c2b8;
        case 0x19c2bcu: goto label_19c2bc;
        case 0x19c2c0u: goto label_19c2c0;
        case 0x19c2c4u: goto label_19c2c4;
        case 0x19c2c8u: goto label_19c2c8;
        case 0x19c2ccu: goto label_19c2cc;
        case 0x19c2d0u: goto label_19c2d0;
        case 0x19c2d4u: goto label_19c2d4;
        case 0x19c2d8u: goto label_19c2d8;
        case 0x19c2dcu: goto label_19c2dc;
        case 0x19c2e0u: goto label_19c2e0;
        case 0x19c2e4u: goto label_19c2e4;
        case 0x19c2e8u: goto label_19c2e8;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c2f0u: goto label_19c2f0;
        case 0x19c2f4u: goto label_19c2f4;
        case 0x19c2f8u: goto label_19c2f8;
        case 0x19c2fcu: goto label_19c2fc;
        case 0x19c300u: goto label_19c300;
        case 0x19c304u: goto label_19c304;
        case 0x19c308u: goto label_19c308;
        case 0x19c30cu: goto label_19c30c;
        case 0x19c310u: goto label_19c310;
        case 0x19c314u: goto label_19c314;
        case 0x19c318u: goto label_19c318;
        case 0x19c31cu: goto label_19c31c;
        case 0x19c320u: goto label_19c320;
        case 0x19c324u: goto label_19c324;
        case 0x19c328u: goto label_19c328;
        case 0x19c32cu: goto label_19c32c;
        case 0x19c330u: goto label_19c330;
        case 0x19c334u: goto label_19c334;
        case 0x19c338u: goto label_19c338;
        case 0x19c33cu: goto label_19c33c;
        case 0x19c340u: goto label_19c340;
        case 0x19c344u: goto label_19c344;
        case 0x19c348u: goto label_19c348;
        case 0x19c34cu: goto label_19c34c;
        case 0x19c350u: goto label_19c350;
        case 0x19c354u: goto label_19c354;
        case 0x19c358u: goto label_19c358;
        case 0x19c35cu: goto label_19c35c;
        case 0x19c360u: goto label_19c360;
        case 0x19c364u: goto label_19c364;
        case 0x19c368u: goto label_19c368;
        case 0x19c36cu: goto label_19c36c;
        case 0x19c370u: goto label_19c370;
        case 0x19c374u: goto label_19c374;
        case 0x19c378u: goto label_19c378;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c380u: goto label_19c380;
        case 0x19c384u: goto label_19c384;
        case 0x19c388u: goto label_19c388;
        case 0x19c38cu: goto label_19c38c;
        case 0x19c390u: goto label_19c390;
        case 0x19c394u: goto label_19c394;
        case 0x19c398u: goto label_19c398;
        case 0x19c39cu: goto label_19c39c;
        case 0x19c3a0u: goto label_19c3a0;
        case 0x19c3a4u: goto label_19c3a4;
        case 0x19c3a8u: goto label_19c3a8;
        case 0x19c3acu: goto label_19c3ac;
        case 0x19c3b0u: goto label_19c3b0;
        case 0x19c3b4u: goto label_19c3b4;
        case 0x19c3b8u: goto label_19c3b8;
        case 0x19c3bcu: goto label_19c3bc;
        case 0x19c3c0u: goto label_19c3c0;
        case 0x19c3c4u: goto label_19c3c4;
        case 0x19c3c8u: goto label_19c3c8;
        case 0x19c3ccu: goto label_19c3cc;
        case 0x19c3d0u: goto label_19c3d0;
        case 0x19c3d4u: goto label_19c3d4;
        case 0x19c3d8u: goto label_19c3d8;
        case 0x19c3dcu: goto label_19c3dc;
        case 0x19c3e0u: goto label_19c3e0;
        case 0x19c3e4u: goto label_19c3e4;
        case 0x19c3e8u: goto label_19c3e8;
        case 0x19c3ecu: goto label_19c3ec;
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c3f4u: goto label_19c3f4;
        case 0x19c3f8u: goto label_19c3f8;
        case 0x19c3fcu: goto label_19c3fc;
        case 0x19c400u: goto label_19c400;
        case 0x19c404u: goto label_19c404;
        case 0x19c408u: goto label_19c408;
        case 0x19c40cu: goto label_19c40c;
        case 0x19c410u: goto label_19c410;
        case 0x19c414u: goto label_19c414;
        case 0x19c418u: goto label_19c418;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c420u: goto label_19c420;
        case 0x19c424u: goto label_19c424;
        case 0x19c428u: goto label_19c428;
        case 0x19c42cu: goto label_19c42c;
        case 0x19c430u: goto label_19c430;
        case 0x19c434u: goto label_19c434;
        case 0x19c438u: goto label_19c438;
        case 0x19c43cu: goto label_19c43c;
        case 0x19c440u: goto label_19c440;
        case 0x19c444u: goto label_19c444;
        case 0x19c448u: goto label_19c448;
        case 0x19c44cu: goto label_19c44c;
        case 0x19c450u: goto label_19c450;
        case 0x19c454u: goto label_19c454;
        case 0x19c458u: goto label_19c458;
        case 0x19c45cu: goto label_19c45c;
        case 0x19c460u: goto label_19c460;
        case 0x19c464u: goto label_19c464;
        case 0x19c468u: goto label_19c468;
        case 0x19c46cu: goto label_19c46c;
        case 0x19c470u: goto label_19c470;
        case 0x19c474u: goto label_19c474;
        case 0x19c478u: goto label_19c478;
        case 0x19c47cu: goto label_19c47c;
        case 0x19c480u: goto label_19c480;
        case 0x19c484u: goto label_19c484;
        case 0x19c488u: goto label_19c488;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c490u: goto label_19c490;
        case 0x19c494u: goto label_19c494;
        case 0x19c498u: goto label_19c498;
        case 0x19c49cu: goto label_19c49c;
        case 0x19c4a0u: goto label_19c4a0;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4b0u: goto label_19c4b0;
        case 0x19c4b4u: goto label_19c4b4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4bcu: goto label_19c4bc;
        case 0x19c4c0u: goto label_19c4c0;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4c8u: goto label_19c4c8;
        case 0x19c4ccu: goto label_19c4cc;
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c4d8u: goto label_19c4d8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4e0u: goto label_19c4e0;
        case 0x19c4e4u: goto label_19c4e4;
        case 0x19c4e8u: goto label_19c4e8;
        case 0x19c4ecu: goto label_19c4ec;
        case 0x19c4f0u: goto label_19c4f0;
        case 0x19c4f4u: goto label_19c4f4;
        case 0x19c4f8u: goto label_19c4f8;
        case 0x19c4fcu: goto label_19c4fc;
        case 0x19c500u: goto label_19c500;
        case 0x19c504u: goto label_19c504;
        case 0x19c508u: goto label_19c508;
        case 0x19c50cu: goto label_19c50c;
        case 0x19c510u: goto label_19c510;
        case 0x19c514u: goto label_19c514;
        case 0x19c518u: goto label_19c518;
        case 0x19c51cu: goto label_19c51c;
        case 0x19c520u: goto label_19c520;
        case 0x19c524u: goto label_19c524;
        case 0x19c528u: goto label_19c528;
        case 0x19c52cu: goto label_19c52c;
        case 0x19c530u: goto label_19c530;
        case 0x19c534u: goto label_19c534;
        case 0x19c538u: goto label_19c538;
        case 0x19c53cu: goto label_19c53c;
        case 0x19c540u: goto label_19c540;
        case 0x19c544u: goto label_19c544;
        case 0x19c548u: goto label_19c548;
        case 0x19c54cu: goto label_19c54c;
        case 0x19c550u: goto label_19c550;
        case 0x19c554u: goto label_19c554;
        case 0x19c558u: goto label_19c558;
        case 0x19c55cu: goto label_19c55c;
        case 0x19c560u: goto label_19c560;
        case 0x19c564u: goto label_19c564;
        case 0x19c568u: goto label_19c568;
        case 0x19c56cu: goto label_19c56c;
        case 0x19c570u: goto label_19c570;
        case 0x19c574u: goto label_19c574;
        case 0x19c578u: goto label_19c578;
        case 0x19c57cu: goto label_19c57c;
        case 0x19c580u: goto label_19c580;
        case 0x19c584u: goto label_19c584;
        case 0x19c588u: goto label_19c588;
        case 0x19c58cu: goto label_19c58c;
        case 0x19c590u: goto label_19c590;
        case 0x19c594u: goto label_19c594;
        case 0x19c598u: goto label_19c598;
        case 0x19c59cu: goto label_19c59c;
        case 0x19c5a0u: goto label_19c5a0;
        case 0x19c5a4u: goto label_19c5a4;
        case 0x19c5a8u: goto label_19c5a8;
        case 0x19c5acu: goto label_19c5ac;
        case 0x19c5b0u: goto label_19c5b0;
        case 0x19c5b4u: goto label_19c5b4;
        case 0x19c5b8u: goto label_19c5b8;
        case 0x19c5bcu: goto label_19c5bc;
        case 0x19c5c0u: goto label_19c5c0;
        case 0x19c5c4u: goto label_19c5c4;
        case 0x19c5c8u: goto label_19c5c8;
        case 0x19c5ccu: goto label_19c5cc;
        case 0x19c5d0u: goto label_19c5d0;
        case 0x19c5d4u: goto label_19c5d4;
        case 0x19c5d8u: goto label_19c5d8;
        case 0x19c5dcu: goto label_19c5dc;
        case 0x19c5e0u: goto label_19c5e0;
        case 0x19c5e4u: goto label_19c5e4;
        case 0x19c5e8u: goto label_19c5e8;
        case 0x19c5ecu: goto label_19c5ec;
        case 0x19c5f0u: goto label_19c5f0;
        case 0x19c5f4u: goto label_19c5f4;
        case 0x19c5f8u: goto label_19c5f8;
        case 0x19c5fcu: goto label_19c5fc;
        case 0x19c600u: goto label_19c600;
        case 0x19c604u: goto label_19c604;
        case 0x19c608u: goto label_19c608;
        case 0x19c60cu: goto label_19c60c;
        case 0x19c610u: goto label_19c610;
        case 0x19c614u: goto label_19c614;
        case 0x19c618u: goto label_19c618;
        case 0x19c61cu: goto label_19c61c;
        case 0x19c620u: goto label_19c620;
        case 0x19c624u: goto label_19c624;
        case 0x19c628u: goto label_19c628;
        case 0x19c62cu: goto label_19c62c;
        case 0x19c630u: goto label_19c630;
        case 0x19c634u: goto label_19c634;
        case 0x19c638u: goto label_19c638;
        case 0x19c63cu: goto label_19c63c;
        case 0x19c640u: goto label_19c640;
        case 0x19c644u: goto label_19c644;
        case 0x19c648u: goto label_19c648;
        case 0x19c64cu: goto label_19c64c;
        case 0x19c650u: goto label_19c650;
        case 0x19c654u: goto label_19c654;
        case 0x19c658u: goto label_19c658;
        case 0x19c65cu: goto label_19c65c;
        case 0x19c660u: goto label_19c660;
        case 0x19c664u: goto label_19c664;
        case 0x19c668u: goto label_19c668;
        case 0x19c66cu: goto label_19c66c;
        case 0x19c670u: goto label_19c670;
        case 0x19c674u: goto label_19c674;
        case 0x19c678u: goto label_19c678;
        case 0x19c67cu: goto label_19c67c;
        case 0x19c680u: goto label_19c680;
        case 0x19c684u: goto label_19c684;
        case 0x19c688u: goto label_19c688;
        case 0x19c68cu: goto label_19c68c;
        case 0x19c690u: goto label_19c690;
        case 0x19c694u: goto label_19c694;
        case 0x19c698u: goto label_19c698;
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6a0u: goto label_19c6a0;
        case 0x19c6a4u: goto label_19c6a4;
        case 0x19c6a8u: goto label_19c6a8;
        case 0x19c6acu: goto label_19c6ac;
        case 0x19c6b0u: goto label_19c6b0;
        case 0x19c6b4u: goto label_19c6b4;
        case 0x19c6b8u: goto label_19c6b8;
        case 0x19c6bcu: goto label_19c6bc;
        case 0x19c6c0u: goto label_19c6c0;
        case 0x19c6c4u: goto label_19c6c4;
        case 0x19c6c8u: goto label_19c6c8;
        case 0x19c6ccu: goto label_19c6cc;
        case 0x19c6d0u: goto label_19c6d0;
        case 0x19c6d4u: goto label_19c6d4;
        case 0x19c6d8u: goto label_19c6d8;
        case 0x19c6dcu: goto label_19c6dc;
        case 0x19c6e0u: goto label_19c6e0;
        case 0x19c6e4u: goto label_19c6e4;
        case 0x19c6e8u: goto label_19c6e8;
        case 0x19c6ecu: goto label_19c6ec;
        case 0x19c6f0u: goto label_19c6f0;
        case 0x19c6f4u: goto label_19c6f4;
        case 0x19c6f8u: goto label_19c6f8;
        case 0x19c6fcu: goto label_19c6fc;
        case 0x19c700u: goto label_19c700;
        case 0x19c704u: goto label_19c704;
        case 0x19c708u: goto label_19c708;
        case 0x19c70cu: goto label_19c70c;
        case 0x19c710u: goto label_19c710;
        case 0x19c714u: goto label_19c714;
        case 0x19c718u: goto label_19c718;
        case 0x19c71cu: goto label_19c71c;
        case 0x19c720u: goto label_19c720;
        case 0x19c724u: goto label_19c724;
        case 0x19c728u: goto label_19c728;
        case 0x19c72cu: goto label_19c72c;
        case 0x19c730u: goto label_19c730;
        case 0x19c734u: goto label_19c734;
        case 0x19c738u: goto label_19c738;
        case 0x19c73cu: goto label_19c73c;
        case 0x19c740u: goto label_19c740;
        case 0x19c744u: goto label_19c744;
        case 0x19c748u: goto label_19c748;
        case 0x19c74cu: goto label_19c74c;
        case 0x19c750u: goto label_19c750;
        case 0x19c754u: goto label_19c754;
        case 0x19c758u: goto label_19c758;
        case 0x19c75cu: goto label_19c75c;
        case 0x19c760u: goto label_19c760;
        case 0x19c764u: goto label_19c764;
        case 0x19c768u: goto label_19c768;
        case 0x19c76cu: goto label_19c76c;
        case 0x19c770u: goto label_19c770;
        case 0x19c774u: goto label_19c774;
        case 0x19c778u: goto label_19c778;
        case 0x19c77cu: goto label_19c77c;
        case 0x19c780u: goto label_19c780;
        case 0x19c784u: goto label_19c784;
        case 0x19c788u: goto label_19c788;
        case 0x19c78cu: goto label_19c78c;
        case 0x19c790u: goto label_19c790;
        case 0x19c794u: goto label_19c794;
        case 0x19c798u: goto label_19c798;
        case 0x19c79cu: goto label_19c79c;
        case 0x19c7a0u: goto label_19c7a0;
        case 0x19c7a4u: goto label_19c7a4;
        case 0x19c7a8u: goto label_19c7a8;
        case 0x19c7acu: goto label_19c7ac;
        case 0x19c7b0u: goto label_19c7b0;
        case 0x19c7b4u: goto label_19c7b4;
        case 0x19c7b8u: goto label_19c7b8;
        case 0x19c7bcu: goto label_19c7bc;
        case 0x19c7c0u: goto label_19c7c0;
        case 0x19c7c4u: goto label_19c7c4;
        case 0x19c7c8u: goto label_19c7c8;
        case 0x19c7ccu: goto label_19c7cc;
        case 0x19c7d0u: goto label_19c7d0;
        case 0x19c7d4u: goto label_19c7d4;
        case 0x19c7d8u: goto label_19c7d8;
        case 0x19c7dcu: goto label_19c7dc;
        case 0x19c7e0u: goto label_19c7e0;
        case 0x19c7e4u: goto label_19c7e4;
        case 0x19c7e8u: goto label_19c7e8;
        case 0x19c7ecu: goto label_19c7ec;
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c7f4u: goto label_19c7f4;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c7fcu: goto label_19c7fc;
        case 0x19c800u: goto label_19c800;
        case 0x19c804u: goto label_19c804;
        case 0x19c808u: goto label_19c808;
        case 0x19c80cu: goto label_19c80c;
        default: return;
    }

label_19c040:
    // 0x19c040: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x19c040u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_19c044:
    // 0x19c044: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x19c044u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_19c048:
    // 0x19c048: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x19c048u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_19c04c:
    // 0x19c04c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x19c04cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_19c050:
    // 0x19c050: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x19c050u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_19c054:
    // 0x19c054: 0xe4890030  swc1        $f9, 0x30($a0)
    ctx->pc = 0x19c054u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_19c058:
    // 0x19c058: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x19c058u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_19c05c:
    // 0x19c05c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x19c05cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_19c060:
    // 0x19c060: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x19c060u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_19c064:
    // 0x19c064: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x19c064u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_19c068:
    // 0x19c068: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x19c068u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_19c06c:
    // 0x19c06c: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x19c06cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_19c070:
    // 0x19c070: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x19c070u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_19c074:
    // 0x19c074: 0xe48b0034  swc1        $f11, 0x34($a0)
    ctx->pc = 0x19c074u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_19c078:
    // 0x19c078: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x19c078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_19c07c:
    // 0x19c07c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x19c07cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_19c080:
    // 0x19c080: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x19c080u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_19c084:
    // 0x19c084: 0xe4880028  swc1        $f8, 0x28($a0)
    ctx->pc = 0x19c084u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_19c088:
    // 0x19c088: 0x3e00008  jr          $ra
label_19c08c:
    if (ctx->pc == 0x19C08Cu) {
        ctx->pc = 0x19C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C088u;
        // 0x19c08c: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C090u;
        goto label_19c090;
    }
    ctx->pc = 0x19C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C088u;
        // 0x19c08c: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C090u;
label_19c090:
    // 0x19c090: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c094:
    // 0x19c094: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19c094u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19c098:
    // 0x19c098: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19c098u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19c09c:
    // 0x19c09c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19c09cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19c0a0:
    // 0x19c0a0: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19c0a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c0a4:
    // 0x19c0a4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19c0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c0a8:
    // 0x19c0a8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19c0a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c0ac:
    // 0x19c0ac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19c0acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c0b0:
    // 0x19c0b0: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x19c0b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c0b4:
    // 0x19c0b4: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x19c0b4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_19c0b8:
    // 0x19c0b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x19c0b8u;
    // VWAITQ (Q already resolved in this runtime)
label_19c0bc:
    // 0x19c0bc: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x19c0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c0c0:
    // 0x19c0c0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_19c0c4:
    if (ctx->pc == 0x19C0C4u) {
        ctx->pc = 0x19C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0C0u;
        // 0x19c0c4: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0C8u;
        goto label_19c0c8;
    }
    ctx->pc = 0x19C0C0u;
    {
        const bool branch_taken_0x19c0c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0C0u;
        // 0x19c0c4: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0c0) {
            ctx->pc = 0x19C0CCu;
            goto label_19c0cc;
        }
    }
    ctx->pc = 0x19C0C8u;
label_19c0c8:
    // 0x19c0c8: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x19c0c8u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_19c0cc:
    // 0x19c0cc: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x19c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
label_19c0d0:
    // 0x19c0d0: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19c0d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19c0d4:
    // 0x19c0d4: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x19c0d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_19c0d8:
    // 0x19c0d8: 0x1407fff1  bne         $zero, $a3, . + 4 + (-0xF << 2)
label_19c0dc:
    if (ctx->pc == 0x19C0DCu) {
        ctx->pc = 0x19C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D8u;
        // 0x19c0dc: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0E0u;
        goto label_19c0e0;
    }
    ctx->pc = 0x19C0D8u;
    {
        const bool branch_taken_0x19c0d8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x19C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D8u;
        // 0x19c0dc: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0d8) {
            ctx->pc = 0x19C0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c0a0;
        }
    }
    ctx->pc = 0x19C0E0u;
label_19c0e0:
    // 0x19c0e0: 0x3e00008  jr          $ra
label_19c0e4:
    if (ctx->pc == 0x19C0E4u) {
        ctx->pc = 0x19C0E8u;
        goto label_19c0e8;
    }
    ctx->pc = 0x19C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0E8u;
label_19c0e8:
    // 0x19c0e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c0ec:
    // 0x19c0ec: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19c0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19c0f0:
    // 0x19c0f0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19c0f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19c0f4:
    // 0x19c0f4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19c0f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19c0f8:
    // 0x19c0f8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19c0f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c0fc:
    // 0x19c0fc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19c0fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c100:
    // 0x19c100: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19c100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c104:
    // 0x19c104: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19c104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c108:
    // 0x19c108: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x19c108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c10c:
    // 0x19c10c: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x19c10cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_19c110:
    // 0x19c110: 0x4a0003bf  vwaitq
    ctx->pc = 0x19c110u;
    // VWAITQ (Q already resolved in this runtime)
label_19c114:
    // 0x19c114: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x19c114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c118:
    // 0x19c118: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_19c11c:
    if (ctx->pc == 0x19C11Cu) {
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C118u;
        // 0x19c11c: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C120u;
        goto label_19c120;
    }
    ctx->pc = 0x19C118u;
    {
        const bool branch_taken_0x19c118 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C118u;
        // 0x19c11c: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c118) {
            ctx->pc = 0x19C124u;
            goto label_19c124;
        }
    }
    ctx->pc = 0x19C120u;
label_19c120:
    // 0x19c120: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x19c120u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_19c124:
    // 0x19c124: 0x3e00008  jr          $ra
label_19c128:
    if (ctx->pc == 0x19C128u) {
        ctx->pc = 0x19C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C124u;
        // 0x19c128: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C12Cu;
        goto label_19c12c;
    }
    ctx->pc = 0x19C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C124u;
        // 0x19c128: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C12Cu;
label_19c12c:
    // 0x19c12c: 0x0  nop
    ctx->pc = 0x19c12cu;
    // NOP
label_19c130:
    // 0x19c130: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c134:
    // 0x19c134: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c138:
    // 0x19c138: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x19c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c13c:
    // 0x19c13c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x19c13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_19c140:
    // 0x19c140: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c144:
    // 0x19c144: 0x3e00008  jr          $ra
label_19c148:
    if (ctx->pc == 0x19C148u) {
        ctx->pc = 0x19C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C144u;
        // 0x19c148: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C14Cu;
        goto label_19c14c;
    }
    ctx->pc = 0x19C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C144u;
        // 0x19c148: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C14Cu;
label_19c14c:
    // 0x19c14c: 0x0  nop
    ctx->pc = 0x19c14cu;
    // NOP
label_19c150:
    // 0x19c150: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c154:
    // 0x19c154: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x19c154u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c158:
    // 0x19c158: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19c158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19c15c:
    // 0x19c15c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19c15cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19c160:
    // 0x19c160: 0x4a29233c  vmove.w     $vf9, $vf4
    ctx->pc = 0x19c160u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
label_19c164:
    // 0x19c164: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x19c164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_19c168:
    // 0x19c168: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x19c168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19c16c:
    // 0x19c16c: 0x4bc621bc  vmulax.xyz  $ACC, $vf4, $vf6x
    ctx->pc = 0x19c16cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19c170:
    // 0x19c170: 0x4bc82a48  vmaddx.xyz  $vf9, $vf5, $vf8x
    ctx->pc = 0x19c170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19c174:
    // 0x19c174: 0x3e00008  jr          $ra
label_19c178:
    if (ctx->pc == 0x19C178u) {
        ctx->pc = 0x19C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C174u;
        // 0x19c178: 0xf8890000  sqc2        $vf9, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C17Cu;
        goto label_19c17c;
    }
    ctx->pc = 0x19C174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C174u;
        // 0x19c178: 0xf8890000  sqc2        $vf9, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C17Cu;
label_19c17c:
    // 0x19c17c: 0x0  nop
    ctx->pc = 0x19c17cu;
    // NOP
label_19c180:
    // 0x19c180: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19c180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c184:
    // 0x19c184: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19c184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19c188:
    // 0x19c188: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19c188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19c18c:
    // 0x19c18c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19c18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19c190:
    // 0x19c190: 0x3e00008  jr          $ra
label_19c194:
    if (ctx->pc == 0x19C194u) {
        ctx->pc = 0x19C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C190u;
        // 0x19c194: 0xf8840000  sqc2        $vf4, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C198u;
        goto label_19c198;
    }
    ctx->pc = 0x19C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C190u;
        // 0x19c194: 0xf8840000  sqc2        $vf4, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C198u;
label_19c198:
    // 0x19c198: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19c198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19c19c:
    // 0x19c19c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
label_19c1a0:
    // 0x19c1a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1a4:
    // 0x19c1a4: 0x34424580  ori         $v0, $v0, 0x4580
    ctx->pc = 0x19c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17792);
label_19c1a8:
    // 0x19c1a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1ac:
    // 0x19c1ac: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x19c1acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c1b0:
    // 0x19c1b0: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x19c1b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19c1b4:
    // 0x19c1b4: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x19c1b4u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
label_19c1b8:
    // 0x19c1b8: 0x4ba4396c  vsub.xyw    $vf5, $vf7, $vf4
    ctx->pc = 0x19c1b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c1bc:
    // 0x19c1bc: 0x4b87316c  vsub.xy     $vf5, $vf6, $vf7
    ctx->pc = 0x19c1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c1c0:
    // 0x19c1c0: 0x4a0002ff  vnop
    ctx->pc = 0x19c1c0u;
    // NOP operation, no action needed for VU0
label_19c1c4:
    // 0x19c1c4: 0x4a0002ff  vnop
    ctx->pc = 0x19c1c4u;
    // NOP operation, no action needed for VU0
label_19c1c8:
    // 0x19c1c8: 0x4a0002ff  vnop
    ctx->pc = 0x19c1c8u;
    // NOP operation, no action needed for VU0
label_19c1cc:
    // 0x19c1cc: 0x4a0002ff  vnop
    ctx->pc = 0x19c1ccu;
    // NOP operation, no action needed for VU0
label_19c1d0:
    // 0x19c1d0: 0x4a0002ff  vnop
    ctx->pc = 0x19c1d0u;
    // NOP operation, no action needed for VU0
label_19c1d4:
    // 0x19c1d4: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x19c1d4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
label_19c1d8:
    // 0x19c1d8: 0x3e00008  jr          $ra
label_19c1dc:
    if (ctx->pc == 0x19C1DCu) {
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1E0u;
        goto label_19c1e0;
    }
    ctx->pc = 0x19C1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C1E0u;
label_19c1e0:
    // 0x19c1e0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19c1e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19c1e4:
    // 0x19c1e4: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x19c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
label_19c1e8:
    // 0x19c1e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1ec:
    // 0x19c1ec: 0x34424580  ori         $v0, $v0, 0x4580
    ctx->pc = 0x19c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17792);
label_19c1f0:
    // 0x19c1f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x19c1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_19c1f4:
    // 0x19c1f4: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x19c1f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c1f8:
    // 0x19c1f8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x19c1f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c1fc:
    // 0x19c1fc: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x19c1fcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c200:
    // 0x19c200: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x19c200u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19c204:
    // 0x19c204: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x19c204u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
label_19c208:
    // 0x19c208: 0x4ba4316c  vsub.xyw    $vf5, $vf6, $vf4
    ctx->pc = 0x19c208u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c20c:
    // 0x19c20c: 0x4b86396c  vsub.xy     $vf5, $vf7, $vf6
    ctx->pc = 0x19c20cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c210:
    // 0x19c210: 0x4ba4416c  vsub.xyw    $vf5, $vf8, $vf4
    ctx->pc = 0x19c210u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c214:
    // 0x19c214: 0x4b88396c  vsub.xy     $vf5, $vf7, $vf8
    ctx->pc = 0x19c214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c218:
    // 0x19c218: 0x4ba4496c  vsub.xyw    $vf5, $vf9, $vf4
    ctx->pc = 0x19c218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c21c:
    // 0x19c21c: 0x4b89396c  vsub.xy     $vf5, $vf7, $vf9
    ctx->pc = 0x19c21cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19c220:
    // 0x19c220: 0x4a0002ff  vnop
    ctx->pc = 0x19c220u;
    // NOP operation, no action needed for VU0
label_19c224:
    // 0x19c224: 0x4a0002ff  vnop
    ctx->pc = 0x19c224u;
    // NOP operation, no action needed for VU0
label_19c228:
    // 0x19c228: 0x4a0002ff  vnop
    ctx->pc = 0x19c228u;
    // NOP operation, no action needed for VU0
label_19c22c:
    // 0x19c22c: 0x4a0002ff  vnop
    ctx->pc = 0x19c22cu;
    // NOP operation, no action needed for VU0
label_19c230:
    // 0x19c230: 0x4a0002ff  vnop
    ctx->pc = 0x19c230u;
    // NOP operation, no action needed for VU0
label_19c234:
    // 0x19c234: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x19c234u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
label_19c238:
    // 0x19c238: 0x3e00008  jr          $ra
label_19c23c:
    if (ctx->pc == 0x19C23Cu) {
        ctx->pc = 0x19C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C238u;
        // 0x19c23c: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C240u;
        goto label_19c240;
    }
    ctx->pc = 0x19C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C238u;
        // 0x19c23c: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C240u;
label_19c240:
    // 0x19c240: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x19c240u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19c244:
    // 0x19c244: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x19c244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19c248:
    // 0x19c248: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x19c248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_19c24c:
    // 0x19c24c: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x19c24cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_19c250:
    // 0x19c250: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x19c250u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_19c254:
    // 0x19c254: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x19c254u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c258:
    // 0x19c258: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x19c258u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c25c:
    // 0x19c25c: 0xd88b0000  lqc2        $vf11, 0x0($a0)
    ctx->pc = 0x19c25cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c260:
    // 0x19c260: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x19c260u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c264:
    // 0x19c264: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19c264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c268:
    // 0x19c268: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19c268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c26c:
    // 0x19c26c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19c26cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19c270:
    // 0x19c270: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x19c270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_19c274:
    // 0x19c274: 0x4bc84adb  vmulw.xyz   $vf11, $vf9, $vf8w
    ctx->pc = 0x19c274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_19c278:
    // 0x19c278: 0x4bc8531b  vmulw.xyz   $vf12, $vf10, $vf8w
    ctx->pc = 0x19c278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_19c27c:
    // 0x19c27c: 0x4a0002ff  vnop
    ctx->pc = 0x19c27cu;
    // NOP operation, no action needed for VU0
label_19c280:
    // 0x19c280: 0x4a0002ff  vnop
    ctx->pc = 0x19c280u;
    // NOP operation, no action needed for VU0
label_19c284:
    // 0x19c284: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x19c284u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
label_19c288:
    // 0x19c288: 0x4bab42ec  vsub.xyw    $vf11, $vf8, $vf11
    ctx->pc = 0x19c288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_19c28c:
    // 0x19c28c: 0x4ba8632c  vsub.xyw    $vf12, $vf12, $vf8
    ctx->pc = 0x19c28cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_19c290:
    // 0x19c290: 0x4a2b4b3c  vmove.w     $vf11, $vf9
    ctx->pc = 0x19c290u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
label_19c294:
    // 0x19c294: 0x4a2c533c  vmove.w     $vf12, $vf10
    ctx->pc = 0x19c294u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
label_19c298:
    // 0x19c298: 0x4a0002ff  vnop
    ctx->pc = 0x19c298u;
    // NOP operation, no action needed for VU0
label_19c29c:
    // 0x19c29c: 0x20e70010  addi        $a3, $a3, 0x10
    ctx->pc = 0x19c29cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19c2a0:
    // 0x19c2a0: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x19c2a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19c2a4:
    // 0x19c2a4: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x19c2a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_19c2a8:
    // 0x19c2a8: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x19c2a8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
label_19c2ac:
    // 0x19c2ac: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x19c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_19c2b0:
    // 0x19c2b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19c2b4:
    if (ctx->pc == 0x19C2B4u) {
        ctx->pc = 0x19C2B8u;
        goto label_19c2b8;
    }
    ctx->pc = 0x19C2B0u;
    {
        const bool branch_taken_0x19c2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2b0) {
            ctx->pc = 0x19C2C4u;
            goto label_19c2c4;
        }
    }
    ctx->pc = 0x19C2B8u;
label_19c2b8:
    // 0x19c2b8: 0x1408ffea  bne         $zero, $t0, . + 4 + (-0x16 << 2)
label_19c2bc:
    if (ctx->pc == 0x19C2BCu) {
        ctx->pc = 0x19C2C0u;
        goto label_19c2c0;
    }
    ctx->pc = 0x19C2B8u;
    {
        const bool branch_taken_0x19c2b8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        if (branch_taken_0x19c2b8) {
            ctx->pc = 0x19C264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c264;
        }
    }
    ctx->pc = 0x19C2C0u;
label_19c2c0:
    // 0x19c2c0: 0x20020001  addi        $v0, $zero, 0x1
    ctx->pc = 0x19c2c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_19c2c4:
    // 0x19c2c4: 0x3e00008  jr          $ra
label_19c2c8:
    if (ctx->pc == 0x19C2C8u) {
        ctx->pc = 0x19C2CCu;
        goto label_19c2cc;
    }
    ctx->pc = 0x19C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C2CCu;
label_19c2cc:
    // 0x19c2cc: 0x0  nop
    ctx->pc = 0x19c2ccu;
    // NOP
label_19c2d0:
    // 0x19c2d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19c2d4:
    // 0x19c2d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19c2d8:
    // 0x19c2d8: 0x34423830  ori         $v0, $v0, 0x3830
    ctx->pc = 0x19c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14384);
label_19c2dc:
    // 0x19c2dc: 0x34843820  ori         $a0, $a0, 0x3820
    ctx->pc = 0x19c2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14368);
label_19c2e0:
    // 0x19c2e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19c2e4:
    // 0x19c2e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19c2e8:
    // 0x19c2e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_19c2ec:
    // 0x19c2ec: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x19c2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
label_19c2f0:
    // 0x19c2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c2f4:
    // 0x19c2f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c2f8:
    // 0x19c2f8: 0x4848e000  cfc2.ni     $t0, $vi28
    ctx->pc = 0x19c2f8u;
    SET_GPR_U32(ctx, 8, ctx->vu0_fbrst);
label_19c2fc:
    // 0x19c2fc: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x19c2fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_19c300:
    // 0x19c300: 0x48c8e000  ctc2.ni     $t0, $vi28
    ctx->pc = 0x19c300u;
    ctx->vu0_fbrst = GPR_U32(ctx, 8) & 0x00000C0Cu;
label_19c304:
    // 0x19c304: 0x40f  sync.p
    ctx->pc = 0x19c304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_19c308:
    // 0x19c308: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x19c308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_19c30c:
    // 0x19c30c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_19c310:
    // 0x19c310: 0x248458b0  addiu       $a0, $a0, 0x58B0
    ctx->pc = 0x19c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22704));
label_19c314:
    // 0x19c314: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x19c314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_19c318:
    // 0x19c318: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19c318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19c31c:
    // 0x19c31c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_19c320:
    // 0x19c320: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x19c320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_19c324:
    // 0x19c324: 0x3e00008  jr          $ra
label_19c328:
    if (ctx->pc == 0x19C328u) {
        ctx->pc = 0x19C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C324u;
        // 0x19c328: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C32Cu;
        goto label_19c32c;
    }
    ctx->pc = 0x19C324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C324u;
        // 0x19c328: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C32Cu;
label_19c32c:
    // 0x19c32c: 0x0  nop
    ctx->pc = 0x19c32cu;
    // NOP
label_19c330:
    // 0x19c330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19c334:
    // 0x19c334: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x19c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_19c338:
    // 0x19c338: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x19c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_19c33c:
    // 0x19c33c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19c33cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c340:
    // 0x19c340: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x19c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_19c344:
    // 0x19c344: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x19c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_19c348:
    // 0x19c348: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19c34c:
    // 0x19c34c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19c34cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19c350:
    // 0x19c350: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19c354:
    // 0x19c354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c358:
    // 0x19c358: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_19c35c:
    // 0x19c35c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x19c35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_19c360:
    // 0x19c360: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x19c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_19c364:
    // 0x19c364: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19c368:
    // 0x19c368: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_19c36c:
    // 0x19c36c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_19c370:
    // 0x19c370: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c374:
    // 0x19c374: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x19c374u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19c378:
    // 0x19c378: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_19c37c:
    if (ctx->pc == 0x19C37Cu) {
        ctx->pc = 0x19C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C378u;
        // 0x19c37c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C380u;
        goto label_19c380;
    }
    ctx->pc = 0x19C378u;
    {
        const bool branch_taken_0x19c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c378) {
            ctx->pc = 0x19C37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C378u;
            // 0x19c37c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C380u;
            goto label_19c380;
        }
    }
    ctx->pc = 0x19C380u;
label_19c380:
    // 0x19c380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c384:
    // 0x19c384: 0x1810  mfhi        $v1
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19c388:
    // 0x19c388: 0xb812  mflo        $s7
    ctx->pc = 0x19c388u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_19c38c:
    // 0x19c38c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x19c38cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19c390:
    // 0x19c390: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_19c394:
    // 0x19c394: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_19c398:
    if (ctx->pc == 0x19C398u) {
        ctx->pc = 0x19C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C394u;
        // 0x19c398: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C39Cu;
        goto label_19c39c;
    }
    ctx->pc = 0x19C394u;
    {
        const bool branch_taken_0x19c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C394u;
        // 0x19c398: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c394) {
            ctx->pc = 0x19C3E0u;
            goto label_19c3e0;
        }
    }
    ctx->pc = 0x19C39Cu;
label_19c39c:
    // 0x19c39c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c3a0:
    // 0x19c3a0: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_19c3a4:
    // 0x19c3a4: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
label_19c3a8:
    // 0x19c3a8: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_19c3ac:
    // 0x19c3ac: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_19c3b0:
    // 0x19c3b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19c3b4:
    // 0x19c3b4: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x19c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
label_19c3b8:
    // 0x19c3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c3bc:
    // 0x19c3bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_19c3c0:
    // 0x19c3c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19c3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19c3c4:
    // 0x19c3c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_19c3c8:
    if (ctx->pc == 0x19C3C8u) {
        ctx->pc = 0x19C3CCu;
        goto label_19c3cc;
    }
    ctx->pc = 0x19C3C4u;
    {
        const bool branch_taken_0x19c3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c3c4) {
            ctx->pc = 0x19C3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c3b0;
        }
    }
    ctx->pc = 0x19C3CCu;
label_19c3cc:
    // 0x19c3cc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c3d0:
    // 0x19c3d0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x19c3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19c3d4:
    // 0x19c3d4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x19c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_19c3d8:
    // 0x19c3d8: 0x10000026  b           . + 4 + (0x26 << 2)
label_19c3dc:
    if (ctx->pc == 0x19C3DCu) {
        ctx->pc = 0x19C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D8u;
        // 0x19c3dc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3E0u;
        goto label_19c3e0;
    }
    ctx->pc = 0x19C3D8u;
    {
        const bool branch_taken_0x19c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D8u;
        // 0x19c3dc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3d8) {
            ctx->pc = 0x19C474u;
            goto label_19c474;
        }
    }
    ctx->pc = 0x19C3E0u;
label_19c3e0:
    // 0x19c3e0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x19c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_19c3e4:
    // 0x19c3e4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x19c3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19c3e8:
    // 0x19c3e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19c3ec:
    if (ctx->pc == 0x19C3ECu) {
        ctx->pc = 0x19C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E8u;
        // 0x19c3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3F0u;
        goto label_19c3f0;
    }
    ctx->pc = 0x19C3E8u;
    {
        const bool branch_taken_0x19c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E8u;
        // 0x19c3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3e8) {
            ctx->pc = 0x19C414u;
            goto label_19c414;
        }
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19c3f4:
    // 0x19c3f4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x19c3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19c3f8:
    // 0x19c3f8: 0x24a59fa8  addiu       $a1, $a1, -0x6058
    ctx->pc = 0x19c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942632));
label_19c3fc:
    // 0x19c3fc: 0xc068d1e  jal         func_1A3478
label_19c400:
    if (ctx->pc == 0x19C400u) {
        ctx->pc = 0x19C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3FCu;
        // 0x19c400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C404u;
        goto label_19c404;
    }
    ctx->pc = 0x19C3FCu;
    SET_GPR_U32(ctx, 31, 0x19C404u);
    ctx->pc = 0x19C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3FCu;
    // 0x19c400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19C404u;
label_19c404:
    // 0x19c404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c408:
    // 0x19c408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c40c:
    // 0x19c40c: 0x10000050  b           . + 4 + (0x50 << 2)
label_19c410:
    if (ctx->pc == 0x19C410u) {
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C40Cu;
        // 0x19c410: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C414u;
        goto label_19c414;
    }
    ctx->pc = 0x19C40Cu;
    {
        const bool branch_taken_0x19c40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C40Cu;
        // 0x19c410: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c40c) {
            ctx->pc = 0x19C550u;
            goto label_19c550;
        }
    }
    ctx->pc = 0x19C414u;
label_19c414:
    // 0x19c414: 0xc067160  jal         func_19C580
label_19c418:
    if (ctx->pc == 0x19C418u) {
        ctx->pc = 0x19C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C414u;
        // 0x19c418: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C41Cu;
        goto label_19c41c;
    }
    ctx->pc = 0x19C414u;
    SET_GPR_U32(ctx, 31, 0x19C41Cu);
    ctx->pc = 0x19C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C414u;
    // 0x19c418: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C580u;
    goto label_19c580;
    ctx->pc = 0x19C41Cu;
label_19c41c:
    // 0x19c41c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19c420:
    // 0x19c420: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_19c424:
    // 0x19c424: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
label_19c428:
    // 0x19c428: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_19c42c:
    // 0x19c42c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x19c42cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_19c430:
    // 0x19c430: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x19c430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_19c434:
    // 0x19c434: 0x0  nop
    ctx->pc = 0x19c434u;
    // NOP
label_19c438:
    // 0x19c438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c43c:
    // 0x19c43c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_19c440:
    // 0x19c440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19c444:
    // 0x19c444: 0x0  nop
    ctx->pc = 0x19c444u;
    // NOP
label_19c448:
    // 0x19c448: 0x0  nop
    ctx->pc = 0x19c448u;
    // NOP
label_19c44c:
    // 0x19c44c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19c450:
    if (ctx->pc == 0x19C450u) {
        ctx->pc = 0x19C454u;
        goto label_19c454;
    }
    ctx->pc = 0x19C44Cu;
    {
        const bool branch_taken_0x19c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c44c) {
            ctx->pc = 0x19C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c438;
        }
    }
    ctx->pc = 0x19C454u;
label_19c454:
    // 0x19c454: 0xc068372  jal         func_1A0DC8
label_19c458:
    if (ctx->pc == 0x19C458u) {
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C454u;
        // 0x19c458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C45Cu;
        goto label_19c45c;
    }
    ctx->pc = 0x19C454u;
    SET_GPR_U32(ctx, 31, 0x19C45Cu);
    ctx->pc = 0x19C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C454u;
    // 0x19c458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DC8u;
    { ctx->pc = 0x1a0dc8; return; }
    ctx->pc = 0x19C45Cu;
label_19c45c:
    // 0x19c45c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c460:
    // 0x19c460: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c464:
    // 0x19c464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c468:
    // 0x19c468: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19c468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19c46c:
    // 0x19c46c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x19c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_19c470:
    // 0x19c470: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19c470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_19c474:
    // 0x19c474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c478:
    // 0x19c478: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
label_19c47c:
    if (ctx->pc == 0x19C47Cu) {
        ctx->pc = 0x19C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C478u;
        // 0x19c47c: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C480u;
        goto label_19c480;
    }
    ctx->pc = 0x19C478u;
    {
        const bool branch_taken_0x19c478 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c478) {
            ctx->pc = 0x19C47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C478u;
            // 0x19c47c: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C4A4u;
            goto label_19c4a4;
        }
    }
    ctx->pc = 0x19C480u;
label_19c480:
    // 0x19c480: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x19c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_19c484:
    // 0x19c484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19c488:
    if (ctx->pc == 0x19C488u) {
        ctx->pc = 0x19C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C484u;
        // 0x19c488: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C48Cu;
        goto label_19c48c;
    }
    ctx->pc = 0x19C484u;
    {
        const bool branch_taken_0x19c484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C484u;
        // 0x19c488: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c484) {
            ctx->pc = 0x19C4A0u;
            goto label_19c4a0;
        }
    }
    ctx->pc = 0x19C48Cu;
label_19c48c:
    // 0x19c48c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c490:
    // 0x19c490: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19c490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c494:
    // 0x19c494: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_19c498:
    // 0x19c498: 0x10000006  b           . + 4 + (0x6 << 2)
label_19c49c:
    if (ctx->pc == 0x19C49Cu) {
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4A0u;
        goto label_19c4a0;
    }
    ctx->pc = 0x19C498u;
    {
        const bool branch_taken_0x19c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c498) {
            ctx->pc = 0x19C4B4u;
            goto label_19c4b4;
        }
    }
    ctx->pc = 0x19C4A0u;
label_19c4a0:
    // 0x19c4a0: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c4a4:
    // 0x19c4a4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c4a8:
    // 0x19c4a8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19c4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c4ac:
    // 0x19c4ac: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x19c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_19c4b0:
    // 0x19c4b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19c4b4:
    // 0x19c4b4: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c4b8:
    // 0x19c4b8: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c4bc:
    // 0x19c4bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c4c0:
    // 0x19c4c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19c4c4:
    // 0x19c4c4: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x19c4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c4c8:
    // 0x19c4c8: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_19c4cc:
    // 0x19c4cc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19c4d0:
    // 0x19c4d0: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x19c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19c4d4:
    // 0x19c4d4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_19c4d8:
    if (ctx->pc == 0x19C4D8u) {
        ctx->pc = 0x19C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D4u;
        // 0x19c4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4DCu;
        goto label_19c4dc;
    }
    ctx->pc = 0x19C4D4u;
    {
        const bool branch_taken_0x19c4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D4u;
        // 0x19c4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4d4) {
            ctx->pc = 0x19C510u;
            goto label_19c510;
        }
    }
    ctx->pc = 0x19C4DCu;
label_19c4dc:
    // 0x19c4dc: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c4e0:
    // 0x19c4e0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_19c4e4:
    // 0x19c4e4: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x19c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_19c4e8:
    // 0x19c4e8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x19c4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19c4ec:
    // 0x19c4ec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19c4f0:
    // 0x19c4f0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_19c4f4:
    // 0x19c4f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19c4f8:
    // 0x19c4f8: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x19c4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19c4fc:
    // 0x19c4fc: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x19c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_19c500:
    // 0x19c500: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x19c500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19c504:
    // 0x19c504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19c508:
    // 0x19c508: 0x10000010  b           . + 4 + (0x10 << 2)
label_19c50c:
    if (ctx->pc == 0x19C50Cu) {
        ctx->pc = 0x19C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C508u;
        // 0x19c50c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C510u;
        goto label_19c510;
    }
    ctx->pc = 0x19C508u;
    {
        const bool branch_taken_0x19c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C508u;
        // 0x19c50c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c508) {
            ctx->pc = 0x19C54Cu;
            goto label_19c54c;
        }
    }
    ctx->pc = 0x19C510u;
label_19c510:
    // 0x19c510: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_19c514:
    if (ctx->pc == 0x19C514u) {
        ctx->pc = 0x19C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C510u;
        // 0x19c514: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C518u;
        goto label_19c518;
    }
    ctx->pc = 0x19C510u;
    {
        const bool branch_taken_0x19c510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c510) {
            ctx->pc = 0x19C514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C510u;
            // 0x19c514: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C51Cu;
            goto label_19c51c;
        }
    }
    ctx->pc = 0x19C518u;
label_19c518:
    // 0x19c518: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x19c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_19c51c:
    // 0x19c51c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_19c520:
    // 0x19c520: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_19c524:
    // 0x19c524: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19c528:
    // 0x19c528: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c52c:
    // 0x19c52c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x19c52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_19c530:
    // 0x19c530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c534:
    // 0x19c534: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_19c538:
    // 0x19c538: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x19c538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_19c53c:
    // 0x19c53c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x19c53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19c540:
    // 0x19c540: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x19c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_19c544:
    // 0x19c544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c548:
    // 0x19c548: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19c548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_19c54c:
    // 0x19c54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c550:
    // 0x19c550: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19c554:
    // 0x19c554: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19c554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19c558:
    // 0x19c558: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19c558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19c55c:
    // 0x19c55c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19c55cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19c560:
    // 0x19c560: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19c560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19c564:
    // 0x19c564: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19c564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19c568:
    // 0x19c568: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19c568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19c56c:
    // 0x19c56c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19c56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19c570:
    // 0x19c570: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19c570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c574:
    // 0x19c574: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19c574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c578:
    // 0x19c578: 0x3e00008  jr          $ra
label_19c57c:
    if (ctx->pc == 0x19C57Cu) {
        ctx->pc = 0x19C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C578u;
        // 0x19c57c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C580u;
        goto label_19c580;
    }
    ctx->pc = 0x19C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C578u;
        // 0x19c57c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C580u;
label_19c580:
    // 0x19c580: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_19c584:
    // 0x19c584: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19c588:
    // 0x19c588: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x19c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_19c58c:
    // 0x19c58c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x19c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_19c590:
    // 0x19c590: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x19c590u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19c594:
    // 0x19c594: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x19c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_19c598:
    // 0x19c598: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x19c598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c59c:
    // 0x19c59c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x19c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_19c5a0:
    // 0x19c5a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19c5a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c5a4:
    // 0x19c5a4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x19c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_19c5a8:
    // 0x19c5a8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19c5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19c5ac:
    // 0x19c5ac: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x19c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_19c5b0:
    // 0x19c5b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c5b4:
    // 0x19c5b4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x19c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_19c5b8:
    // 0x19c5b8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x19c5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19c5bc:
    // 0x19c5bc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x19c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_19c5c0:
    // 0x19c5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c5c4:
    // 0x19c5c4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x19c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_19c5c8:
    // 0x19c5c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c5cc:
    // 0x19c5cc: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x19c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_19c5d0:
    // 0x19c5d0: 0x8e220810  lw          $v0, 0x810($s1)
    ctx->pc = 0x19c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
label_19c5d4:
    // 0x19c5d4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x19c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_19c5d8:
    // 0x19c5d8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19c5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19c5dc:
    // 0x19c5dc: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x19c5dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_19c5e0:
    // 0x19c5e0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x19c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_19c5e4:
    // 0x19c5e4: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
label_19c5e8:
    if (ctx->pc == 0x19C5E8u) {
        ctx->pc = 0x19C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5E4u;
        // 0x19c5e8: 0xac4006bc  sw          $zero, 0x6BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C5ECu;
        goto label_19c5ec;
    }
    ctx->pc = 0x19C5E4u;
    {
        const bool branch_taken_0x19c5e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5E4u;
        // 0x19c5e8: 0xac4006bc  sw          $zero, 0x6BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5e4) {
            ctx->pc = 0x19C5FCu;
            goto label_19c5fc;
        }
    }
    ctx->pc = 0x19C5ECu;
label_19c5ec:
    // 0x19c5ec: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x19c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_19c5f0:
    // 0x19c5f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c5f4:
    // 0x19c5f4: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
label_19c5f8:
    if (ctx->pc == 0x19C5F8u) {
        ctx->pc = 0x19C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5F4u;
        // 0x19c5f8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C5FCu;
        goto label_19c5fc;
    }
    ctx->pc = 0x19C5F4u;
    {
        const bool branch_taken_0x19c5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5F4u;
        // 0x19c5f8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5f4) {
            ctx->pc = 0x19CA68u;
            { ctx->pc = 0x19ca68; return; }
        }
    }
    ctx->pc = 0x19C5FCu;
label_19c5fc:
    // 0x19c5fc: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_19c600:
    // 0x19c600: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19c604:
    // 0x19c604: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
label_19c608:
    if (ctx->pc == 0x19C608u) {
        ctx->pc = 0x19C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C604u;
        // 0x19c608: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C60Cu;
        goto label_19c60c;
    }
    ctx->pc = 0x19C604u;
    {
        const bool branch_taken_0x19c604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C604u;
        // 0x19c608: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c604) {
            ctx->pc = 0x19C814u;
            { ctx->pc = 0x19c814; return; }
        }
    }
    ctx->pc = 0x19C60Cu;
label_19c60c:
    // 0x19c60c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c610:
    // 0x19c610: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
label_19c614:
    if (ctx->pc == 0x19C614u) {
        ctx->pc = 0x19C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C610u;
        // 0x19c614: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C618u;
        goto label_19c618;
    }
    ctx->pc = 0x19C610u;
    {
        const bool branch_taken_0x19c610 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c610) {
            ctx->pc = 0x19C614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C610u;
            // 0x19c614: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C624u;
            goto label_19c624;
        }
    }
    ctx->pc = 0x19C618u;
label_19c618:
    // 0x19c618: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
label_19c61c:
    if (ctx->pc == 0x19C61Cu) {
        ctx->pc = 0x19C620u;
        goto label_19c620;
    }
    ctx->pc = 0x19C618u;
    {
        const bool branch_taken_0x19c618 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c618) {
            ctx->pc = 0x19C658u;
            goto label_19c658;
        }
    }
    ctx->pc = 0x19C620u;
label_19c620:
    // 0x19c620: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c624:
    // 0x19c624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c628:
    // 0x19c628: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c62c:
    // 0x19c62c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c630:
    // 0x19c630: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c634:
    // 0x19c634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c638:
    // 0x19c638: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19c638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19c63c:
    // 0x19c63c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c63cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c640:
    // 0x19c640: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19c640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19c644:
    // 0x19c644: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x19c644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19c648:
    // 0x19c648: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19c64c:
    // 0x19c64c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c64cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c650:
    // 0x19c650: 0x100000fb  b           . + 4 + (0xFB << 2)
label_19c654:
    if (ctx->pc == 0x19C654u) {
        ctx->pc = 0x19C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C650u;
        // 0x19c654: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C658u;
        goto label_19c658;
    }
    ctx->pc = 0x19C650u;
    {
        const bool branch_taken_0x19c650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C650u;
        // 0x19c654: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c650) {
            ctx->pc = 0x19CA40u;
            { ctx->pc = 0x19ca40; return; }
        }
    }
    ctx->pc = 0x19C658u;
label_19c658:
    // 0x19c658: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
label_19c65c:
    if (ctx->pc == 0x19C65Cu) {
        ctx->pc = 0x19C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C658u;
        // 0x19c65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C660u;
        goto label_19c660;
    }
    ctx->pc = 0x19C658u;
    {
        const bool branch_taken_0x19c658 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x19C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C658u;
        // 0x19c65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c658) {
            ctx->pc = 0x19C6E4u;
            goto label_19c6e4;
        }
    }
    ctx->pc = 0x19C660u;
label_19c660:
    // 0x19c660: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c664:
    // 0x19c664: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c668:
    // 0x19c668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c66c:
    // 0x19c66c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c670:
    // 0x19c670: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19c674:
    // 0x19c674: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_19c678:
    // 0x19c678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c67c:
    // 0x19c67c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c680:
    // 0x19c680: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c684:
    // 0x19c684: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19c684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19c688:
    // 0x19c688: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c68c:
    // 0x19c68c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x19c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
label_19c690:
    // 0x19c690: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19c690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19c694:
    // 0x19c694: 0xc067322  jal         func_19CC88
label_19c698:
    if (ctx->pc == 0x19C698u) {
        ctx->pc = 0x19C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C694u;
        // 0x19c698: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C69Cu;
        goto label_19c69c;
    }
    ctx->pc = 0x19C694u;
    SET_GPR_U32(ctx, 31, 0x19C69Cu);
    ctx->pc = 0x19C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C694u;
    // 0x19c698: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    { ctx->pc = 0x19cc88; return; }
    ctx->pc = 0x19C69Cu;
label_19c69c:
    // 0x19c69c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x19c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_19c6a0:
    // 0x19c6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c6a4:
    // 0x19c6a4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x19c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_19c6a8:
    // 0x19c6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c6ac:
    // 0x19c6ac: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c6b0:
    // 0x19c6b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19c6b4:
    // 0x19c6b4: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x19c6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_19c6b8:
    // 0x19c6b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c6b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c6bc:
    // 0x19c6bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c6c0:
    // 0x19c6c0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c6c4:
    // 0x19c6c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19c6c8:
    // 0x19c6c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c6c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c6cc:
    // 0x19c6cc: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x19c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
label_19c6d0:
    // 0x19c6d0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19c6d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19c6d4:
    // 0x19c6d4: 0xc067322  jal         func_19CC88
label_19c6d8:
    if (ctx->pc == 0x19C6D8u) {
        ctx->pc = 0x19C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6D4u;
        // 0x19c6d8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6DCu;
        goto label_19c6dc;
    }
    ctx->pc = 0x19C6D4u;
    SET_GPR_U32(ctx, 31, 0x19C6DCu);
    ctx->pc = 0x19C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6D4u;
    // 0x19c6d8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    { ctx->pc = 0x19cc88; return; }
    ctx->pc = 0x19C6DCu;
label_19c6dc:
    // 0x19c6dc: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_19c6e0:
    if (ctx->pc == 0x19C6E0u) {
        ctx->pc = 0x19C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6DCu;
        // 0x19c6e0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6E4u;
        goto label_19c6e4;
    }
    ctx->pc = 0x19C6DCu;
    {
        const bool branch_taken_0x19c6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6DCu;
        // 0x19c6e0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6dc) {
            ctx->pc = 0x19CA64u;
            { ctx->pc = 0x19ca64; return; }
        }
    }
    ctx->pc = 0x19C6E4u;
label_19c6e4:
    // 0x19c6e4: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
label_19c6e8:
    if (ctx->pc == 0x19C6E8u) {
        ctx->pc = 0x19C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6E4u;
        // 0x19c6e8: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6ECu;
        goto label_19c6ec;
    }
    ctx->pc = 0x19C6E4u;
    {
        const bool branch_taken_0x19c6e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6E4u;
        // 0x19c6e8: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6e4) {
            ctx->pc = 0x19C7FCu;
            goto label_19c7fc;
        }
    }
    ctx->pc = 0x19C6ECu;
label_19c6ec:
    // 0x19c6ec: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x19c6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c6f0:
    // 0x19c6f0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x19c6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_19c6f4:
    // 0x19c6f4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x19c6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c6f8:
    // 0x19c6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c6fc:
    // 0x19c6fc: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_19c700:
    // 0x19c700: 0xc0678ac  jal         func_19E2B0
label_19c704:
    if (ctx->pc == 0x19C704u) {
        ctx->pc = 0x19C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C700u;
        // 0x19c704: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C708u;
        goto label_19c708;
    }
    ctx->pc = 0x19C700u;
    SET_GPR_U32(ctx, 31, 0x19C708u);
    ctx->pc = 0x19C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C700u;
    // 0x19c704: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E2B0u;
    { ctx->pc = 0x19e2b0; return; }
    ctx->pc = 0x19C708u;
label_19c708:
    // 0x19c708: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c70c:
    // 0x19c70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c710:
    // 0x19c710: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c714:
    // 0x19c714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c718:
    // 0x19c718: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c71c:
    // 0x19c71c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19c720:
    // 0x19c720: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c724:
    // 0x19c724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c728:
    // 0x19c728: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19c728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19c72c:
    // 0x19c72c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c730:
    // 0x19c730: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x19c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_19c734:
    // 0x19c734: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c738:
    // 0x19c738: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19c738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_19c73c:
    // 0x19c73c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c73cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c740:
    // 0x19c740: 0xc067322  jal         func_19CC88
label_19c744:
    if (ctx->pc == 0x19C744u) {
        ctx->pc = 0x19C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C740u;
        // 0x19c744: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C748u;
        goto label_19c748;
    }
    ctx->pc = 0x19C740u;
    SET_GPR_U32(ctx, 31, 0x19C748u);
    ctx->pc = 0x19C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C740u;
    // 0x19c744: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    { ctx->pc = 0x19cc88; return; }
    ctx->pc = 0x19C748u;
label_19c748:
    // 0x19c748: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19c74c:
    // 0x19c74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c750:
    // 0x19c750: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x19c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19c754:
    // 0x19c754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c758:
    // 0x19c758: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c75c:
    // 0x19c75c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c760:
    // 0x19c760: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19c760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19c764:
    // 0x19c764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c768:
    // 0x19c768: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19c76c:
    // 0x19c76c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c770:
    // 0x19c770: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x19c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_19c774:
    // 0x19c774: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c778:
    // 0x19c778: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x19c778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
label_19c77c:
    // 0x19c77c: 0xc067322  jal         func_19CC88
label_19c780:
    if (ctx->pc == 0x19C780u) {
        ctx->pc = 0x19C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C77Cu;
        // 0x19c780: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C784u;
        goto label_19c784;
    }
    ctx->pc = 0x19C77Cu;
    SET_GPR_U32(ctx, 31, 0x19C784u);
    ctx->pc = 0x19C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C77Cu;
    // 0x19c780: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    { ctx->pc = 0x19cc88; return; }
    ctx->pc = 0x19C784u;
label_19c784:
    // 0x19c784: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c788:
    // 0x19c788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c78c:
    // 0x19c78c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c790:
    // 0x19c790: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c794:
    // 0x19c794: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c798:
    // 0x19c798: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19c798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19c79c:
    // 0x19c79c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c7a0:
    // 0x19c7a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c7a4:
    // 0x19c7a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19c7a8:
    // 0x19c7a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c7a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c7ac:
    // 0x19c7ac: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x19c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_19c7b0:
    // 0x19c7b0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c7b4:
    // 0x19c7b4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_19c7b8:
    // 0x19c7b8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c7b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c7bc:
    // 0x19c7bc: 0xc067322  jal         func_19CC88
label_19c7c0:
    if (ctx->pc == 0x19C7C0u) {
        ctx->pc = 0x19C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7BCu;
        // 0x19c7c0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7C4u;
        goto label_19c7c4;
    }
    ctx->pc = 0x19C7BCu;
    SET_GPR_U32(ctx, 31, 0x19C7C4u);
    ctx->pc = 0x19C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C7BCu;
    // 0x19c7c0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    { ctx->pc = 0x19cc88; return; }
    ctx->pc = 0x19C7C4u;
label_19c7c4:
    // 0x19c7c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19c7c8:
    // 0x19c7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c7cc:
    // 0x19c7cc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_19c7d0:
    // 0x19c7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c7d4:
    // 0x19c7d4: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x19c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_19c7d8:
    // 0x19c7d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c7dc:
    // 0x19c7dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19c7e0:
    // 0x19c7e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c7e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c7e4:
    // 0x19c7e4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19c7e8:
    // 0x19c7e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c7ec:
    // 0x19c7ec: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x19c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
label_19c7f0:
    // 0x19c7f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c7f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c7f4:
    // 0x19c7f4: 0x10000092  b           . + 4 + (0x92 << 2)
label_19c7f8:
    if (ctx->pc == 0x19C7F8u) {
        ctx->pc = 0x19C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7F4u;
        // 0x19c7f8: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7FCu;
        goto label_19c7fc;
    }
    ctx->pc = 0x19C7F4u;
    {
        const bool branch_taken_0x19c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7F4u;
        // 0x19c7f8: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7f4) {
            ctx->pc = 0x19CA40u;
            { ctx->pc = 0x19ca40; return; }
        }
    }
    ctx->pc = 0x19C7FCu;
label_19c7fc:
    // 0x19c7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c800:
    // 0x19c800: 0x24a59fd0  addiu       $a1, $a1, -0x6030
    ctx->pc = 0x19c800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942672));
label_19c804:
    // 0x19c804: 0xc068d1e  jal         func_1A3478
label_19c808:
    if (ctx->pc == 0x19C808u) {
        ctx->pc = 0x19C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C804u;
        // 0x19c808: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C80Cu;
        goto label_19c80c;
    }
    ctx->pc = 0x19C804u;
    SET_GPR_U32(ctx, 31, 0x19C80Cu);
    ctx->pc = 0x19C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C804u;
    // 0x19c808: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19C80Cu;
label_19c80c:
    // 0x19c80c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x19c810u;
    return;
}

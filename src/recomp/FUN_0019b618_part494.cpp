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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c1c8u: goto label_28c1c8;
        case 0x28c1ccu: goto label_28c1cc;
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        case 0x28c428u: goto label_28c428;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c430u: goto label_28c430;
        case 0x28c434u: goto label_28c434;
        case 0x28c438u: goto label_28c438;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c440u: goto label_28c440;
        case 0x28c444u: goto label_28c444;
        case 0x28c448u: goto label_28c448;
        case 0x28c44cu: goto label_28c44c;
        case 0x28c450u: goto label_28c450;
        case 0x28c454u: goto label_28c454;
        case 0x28c458u: goto label_28c458;
        case 0x28c45cu: goto label_28c45c;
        case 0x28c460u: goto label_28c460;
        case 0x28c464u: goto label_28c464;
        case 0x28c468u: goto label_28c468;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c470u: goto label_28c470;
        case 0x28c474u: goto label_28c474;
        case 0x28c478u: goto label_28c478;
        case 0x28c47cu: goto label_28c47c;
        case 0x28c480u: goto label_28c480;
        case 0x28c484u: goto label_28c484;
        case 0x28c488u: goto label_28c488;
        case 0x28c48cu: goto label_28c48c;
        case 0x28c490u: goto label_28c490;
        case 0x28c494u: goto label_28c494;
        case 0x28c498u: goto label_28c498;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4a0u: goto label_28c4a0;
        case 0x28c4a4u: goto label_28c4a4;
        case 0x28c4a8u: goto label_28c4a8;
        case 0x28c4acu: goto label_28c4ac;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c4b4u: goto label_28c4b4;
        case 0x28c4b8u: goto label_28c4b8;
        case 0x28c4bcu: goto label_28c4bc;
        case 0x28c4c0u: goto label_28c4c0;
        case 0x28c4c4u: goto label_28c4c4;
        case 0x28c4c8u: goto label_28c4c8;
        case 0x28c4ccu: goto label_28c4cc;
        case 0x28c4d0u: goto label_28c4d0;
        case 0x28c4d4u: goto label_28c4d4;
        case 0x28c4d8u: goto label_28c4d8;
        case 0x28c4dcu: goto label_28c4dc;
        case 0x28c4e0u: goto label_28c4e0;
        case 0x28c4e4u: goto label_28c4e4;
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c4ecu: goto label_28c4ec;
        case 0x28c4f0u: goto label_28c4f0;
        case 0x28c4f4u: goto label_28c4f4;
        case 0x28c4f8u: goto label_28c4f8;
        case 0x28c4fcu: goto label_28c4fc;
        case 0x28c500u: goto label_28c500;
        case 0x28c504u: goto label_28c504;
        case 0x28c508u: goto label_28c508;
        case 0x28c50cu: goto label_28c50c;
        case 0x28c510u: goto label_28c510;
        case 0x28c514u: goto label_28c514;
        case 0x28c518u: goto label_28c518;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c520u: goto label_28c520;
        case 0x28c524u: goto label_28c524;
        case 0x28c528u: goto label_28c528;
        case 0x28c52cu: goto label_28c52c;
        case 0x28c530u: goto label_28c530;
        case 0x28c534u: goto label_28c534;
        case 0x28c538u: goto label_28c538;
        case 0x28c53cu: goto label_28c53c;
        case 0x28c540u: goto label_28c540;
        case 0x28c544u: goto label_28c544;
        case 0x28c548u: goto label_28c548;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6a4u: goto label_28c6a4;
        case 0x28c6a8u: goto label_28c6a8;
        case 0x28c6acu: goto label_28c6ac;
        case 0x28c6b0u: goto label_28c6b0;
        case 0x28c6b4u: goto label_28c6b4;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6bcu: goto label_28c6bc;
        case 0x28c6c0u: goto label_28c6c0;
        case 0x28c6c4u: goto label_28c6c4;
        case 0x28c6c8u: goto label_28c6c8;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6d0u: goto label_28c6d0;
        case 0x28c6d4u: goto label_28c6d4;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c6e0u: goto label_28c6e0;
        case 0x28c6e4u: goto label_28c6e4;
        case 0x28c6e8u: goto label_28c6e8;
        case 0x28c6ecu: goto label_28c6ec;
        case 0x28c6f0u: goto label_28c6f0;
        case 0x28c6f4u: goto label_28c6f4;
        case 0x28c6f8u: goto label_28c6f8;
        case 0x28c6fcu: goto label_28c6fc;
        case 0x28c700u: goto label_28c700;
        case 0x28c704u: goto label_28c704;
        case 0x28c708u: goto label_28c708;
        case 0x28c70cu: goto label_28c70c;
        case 0x28c710u: goto label_28c710;
        case 0x28c714u: goto label_28c714;
        case 0x28c718u: goto label_28c718;
        case 0x28c71cu: goto label_28c71c;
        case 0x28c720u: goto label_28c720;
        case 0x28c724u: goto label_28c724;
        case 0x28c728u: goto label_28c728;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c730u: goto label_28c730;
        case 0x28c734u: goto label_28c734;
        case 0x28c738u: goto label_28c738;
        case 0x28c73cu: goto label_28c73c;
        case 0x28c740u: goto label_28c740;
        case 0x28c744u: goto label_28c744;
        case 0x28c748u: goto label_28c748;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c750u: goto label_28c750;
        case 0x28c754u: goto label_28c754;
        case 0x28c758u: goto label_28c758;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c760u: goto label_28c760;
        case 0x28c764u: goto label_28c764;
        case 0x28c768u: goto label_28c768;
        case 0x28c76cu: goto label_28c76c;
        case 0x28c770u: goto label_28c770;
        case 0x28c774u: goto label_28c774;
        case 0x28c778u: goto label_28c778;
        case 0x28c77cu: goto label_28c77c;
        case 0x28c780u: goto label_28c780;
        case 0x28c784u: goto label_28c784;
        case 0x28c788u: goto label_28c788;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c790u: goto label_28c790;
        case 0x28c794u: goto label_28c794;
        case 0x28c798u: goto label_28c798;
        case 0x28c79cu: goto label_28c79c;
        case 0x28c7a0u: goto label_28c7a0;
        case 0x28c7a4u: goto label_28c7a4;
        case 0x28c7a8u: goto label_28c7a8;
        case 0x28c7acu: goto label_28c7ac;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7b4u: goto label_28c7b4;
        case 0x28c7b8u: goto label_28c7b8;
        case 0x28c7bcu: goto label_28c7bc;
        case 0x28c7c0u: goto label_28c7c0;
        case 0x28c7c4u: goto label_28c7c4;
        case 0x28c7c8u: goto label_28c7c8;
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c7d0u: goto label_28c7d0;
        case 0x28c7d4u: goto label_28c7d4;
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7dcu: goto label_28c7dc;
        case 0x28c7e0u: goto label_28c7e0;
        case 0x28c7e4u: goto label_28c7e4;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c7ecu: goto label_28c7ec;
        case 0x28c7f0u: goto label_28c7f0;
        case 0x28c7f4u: goto label_28c7f4;
        case 0x28c7f8u: goto label_28c7f8;
        case 0x28c7fcu: goto label_28c7fc;
        case 0x28c800u: goto label_28c800;
        case 0x28c804u: goto label_28c804;
        case 0x28c808u: goto label_28c808;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c810u: goto label_28c810;
        case 0x28c814u: goto label_28c814;
        case 0x28c818u: goto label_28c818;
        case 0x28c81cu: goto label_28c81c;
        case 0x28c820u: goto label_28c820;
        case 0x28c824u: goto label_28c824;
        case 0x28c828u: goto label_28c828;
        case 0x28c82cu: goto label_28c82c;
        case 0x28c830u: goto label_28c830;
        case 0x28c834u: goto label_28c834;
        case 0x28c838u: goto label_28c838;
        case 0x28c83cu: goto label_28c83c;
        case 0x28c840u: goto label_28c840;
        case 0x28c844u: goto label_28c844;
        case 0x28c848u: goto label_28c848;
        case 0x28c84cu: goto label_28c84c;
        case 0x28c850u: goto label_28c850;
        case 0x28c854u: goto label_28c854;
        case 0x28c858u: goto label_28c858;
        case 0x28c85cu: goto label_28c85c;
        case 0x28c860u: goto label_28c860;
        case 0x28c864u: goto label_28c864;
        case 0x28c868u: goto label_28c868;
        case 0x28c86cu: goto label_28c86c;
        case 0x28c870u: goto label_28c870;
        case 0x28c874u: goto label_28c874;
        case 0x28c878u: goto label_28c878;
        case 0x28c87cu: goto label_28c87c;
        case 0x28c880u: goto label_28c880;
        case 0x28c884u: goto label_28c884;
        case 0x28c888u: goto label_28c888;
        case 0x28c88cu: goto label_28c88c;
        case 0x28c890u: goto label_28c890;
        case 0x28c894u: goto label_28c894;
        case 0x28c898u: goto label_28c898;
        case 0x28c89cu: goto label_28c89c;
        case 0x28c8a0u: goto label_28c8a0;
        case 0x28c8a4u: goto label_28c8a4;
        case 0x28c8a8u: goto label_28c8a8;
        case 0x28c8acu: goto label_28c8ac;
        case 0x28c8b0u: goto label_28c8b0;
        case 0x28c8b4u: goto label_28c8b4;
        case 0x28c8b8u: goto label_28c8b8;
        case 0x28c8bcu: goto label_28c8bc;
        case 0x28c8c0u: goto label_28c8c0;
        case 0x28c8c4u: goto label_28c8c4;
        case 0x28c8c8u: goto label_28c8c8;
        case 0x28c8ccu: goto label_28c8cc;
        case 0x28c8d0u: goto label_28c8d0;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8d8u: goto label_28c8d8;
        case 0x28c8dcu: goto label_28c8dc;
        case 0x28c8e0u: goto label_28c8e0;
        case 0x28c8e4u: goto label_28c8e4;
        case 0x28c8e8u: goto label_28c8e8;
        case 0x28c8ecu: goto label_28c8ec;
        case 0x28c8f0u: goto label_28c8f0;
        case 0x28c8f4u: goto label_28c8f4;
        case 0x28c8f8u: goto label_28c8f8;
        case 0x28c8fcu: goto label_28c8fc;
        case 0x28c900u: goto label_28c900;
        case 0x28c904u: goto label_28c904;
        case 0x28c908u: goto label_28c908;
        case 0x28c90cu: goto label_28c90c;
        case 0x28c910u: goto label_28c910;
        case 0x28c914u: goto label_28c914;
        case 0x28c918u: goto label_28c918;
        case 0x28c91cu: goto label_28c91c;
        case 0x28c920u: goto label_28c920;
        case 0x28c924u: goto label_28c924;
        case 0x28c928u: goto label_28c928;
        case 0x28c92cu: goto label_28c92c;
        case 0x28c930u: goto label_28c930;
        case 0x28c934u: goto label_28c934;
        case 0x28c938u: goto label_28c938;
        case 0x28c93cu: goto label_28c93c;
        case 0x28c940u: goto label_28c940;
        case 0x28c944u: goto label_28c944;
        case 0x28c948u: goto label_28c948;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c950u: goto label_28c950;
        case 0x28c954u: goto label_28c954;
        case 0x28c958u: goto label_28c958;
        case 0x28c95cu: goto label_28c95c;
        case 0x28c960u: goto label_28c960;
        case 0x28c964u: goto label_28c964;
        case 0x28c968u: goto label_28c968;
        case 0x28c96cu: goto label_28c96c;
        case 0x28c970u: goto label_28c970;
        case 0x28c974u: goto label_28c974;
        default: return;
    }

label_28c1a8:
    // 0x28c1a8: 0xffff4b3d  sd          $ra, 0x4B3D($ra)
    ctx->pc = 0x28c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19261), GPR_U64(ctx, 31));
label_28c1ac:
    // 0x28c1ac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1b0:
    // 0x28c1b0: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c1b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c1b4:
    // 0x28c1b4: 0x1a130f03  .word       0x1A130F03                   # blez        $s0, . + 4 + (0xF03 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_28c1b8:
    if (ctx->pc == 0x28C1B8u) {
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x33312d2b  andi        $s1, $t9, 0x2D2B (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)11563);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1BCu;
        goto label_28c1bc;
    }
    ctx->pc = 0x28C1B4u;
    {
        const bool branch_taken_0x28c1b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x33312d2b  andi        $s1, $t9, 0x2D2B (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)11563);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1b4) {
            ctx->pc = 0x28FDC4u;
            { ctx->pc = 0x28fdc4; return; }
        }
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0xffff4b36  sd          $ra, 0x4B36($ra)
    ctx->pc = 0x28c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19254), GPR_U64(ctx, 31));
label_28c1c0:
    // 0x28c1c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1c4:
    // 0x28c1c4: 0x4dff00ff  .word       0x4DFF00FF                   # INVALID     $t7, $ra, 0xFF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c1c4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C1C4 raw=0x4DFF00FF");
 /* MITIGATED */
label_28c1c8:
    // 0x28c1c8: 0x9030201  j           func_40C0804
label_28c1cc:
    if (ctx->pc == 0x28C1CCu) {
        ctx->pc = 0x28C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1C8u;
        // 0x28c1cc: 0x2c2a210a  sltiu       $t2, $at, 0x210A (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)8458) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1D0u;
        goto label_28c1d0;
    }
    ctx->pc = 0x28C1C8u;
    ctx->pc = 0x28C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1C8u;
    // 0x28c1cc: 0x2c2a210a  sltiu       $t2, $at, 0x210A (Delay Slot)
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)8458) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C0804u, 0x28C1C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C1D0u;
label_28c1d0:
    // 0x28c1d0: 0xffff4a3c  sd          $ra, 0x4A3C($ra)
    ctx->pc = 0x28c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19004), GPR_U64(ctx, 31));
label_28c1d4:
    // 0x28c1d4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1d8:
    // 0x28c1d8: 0xe030201  jal         func_80C0804
label_28c1dc:
    if (ctx->pc == 0x28C1DCu) {
        ctx->pc = 0x28C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1D8u;
        // 0x28c1dc: 0x4cff1511  .word       0x4CFF1511                   # INVALID     $a3, $ra, 0x1511 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C1DC raw=0x4CFF1511");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1E0u;
        goto label_28c1e0;
    }
    ctx->pc = 0x28C1D8u;
    SET_GPR_U32(ctx, 31, 0x28C1E0u);
    ctx->pc = 0x28C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1D8u;
    // 0x28c1dc: 0x4cff1511  .word       0x4CFF1511                   # INVALID     $a3, $ra, 0x1511 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C1DC raw=0x4CFF1511");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x80C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x80C0804u, 0x28C1D8u, 0x28C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1E0u;
label_28c1e0:
    // 0x28c1e0: 0x211f1c1b  addi        $ra, $t0, 0x1C1B
    ctx->pc = 0x28c1e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7195, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_28c1e4:
    // 0x28c1e4: 0xffff4629  sd          $ra, 0x4629($ra)
    ctx->pc = 0x28c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17961), GPR_U64(ctx, 31));
label_28c1e8:
    // 0x28c1e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c1ec:
    // 0x28c1ec: 0xe0a09ff  jal         func_82827FC
label_28c1f0:
    if (ctx->pc == 0x28C1F0u) {
        ctx->pc = 0x28C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1ECu;
        // 0x28c1f0: 0x251b1410  addiu       $k1, $t0, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 8), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1F4u;
        goto label_28c1f4;
    }
    ctx->pc = 0x28C1ECu;
    SET_GPR_U32(ctx, 31, 0x28C1F4u);
    ctx->pc = 0x28C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1ECu;
    // 0x28c1f0: 0x251b1410  addiu       $k1, $t0, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 8), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x82827FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x82827FCu, 0x28C1ECu, 0x28C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1F4u;
label_28c1f4:
    // 0x28c1f4: 0x46433e3b  .word       0x46433E3B                   # INVALID     $s2, $v1, 0x3E3B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c1f4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3B at 0x28C1F4 raw=0x46433E3B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c1f8:
    // 0x28c1f8: 0xffff4a48  sd          $ra, 0x4A48($ra)
    ctx->pc = 0x28c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19016), GPR_U64(ctx, 31));
label_28c1fc:
    // 0x28c1fc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c200:
    // 0x28c200: 0xff4eff  .word       0x00FF4EFF                   # dsra32      $t1, $ra, 27 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c200u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 31) >> (32 + 27));
label_28c204:
    // 0x28c204: 0x16030201  bne         $s0, $v1, . + 4 + (0x201 << 2)
label_28c208:
    if (ctx->pc == 0x28C208u) {
        ctx->pc = 0x28C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C204u;
        // 0x28c208: 0x322e2620  andi        $t6, $s1, 0x2620 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9760);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C20Cu;
        goto label_28c20c;
    }
    ctx->pc = 0x28C204u;
    {
        const bool branch_taken_0x28c204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C204u;
        // 0x28c208: 0x322e2620  andi        $t6, $s1, 0x2620 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9760);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c204) {
            ctx->pc = 0x28CA0Cu;
            { ctx->pc = 0x28ca0c; return; }
        }
    }
    ctx->pc = 0x28C20Cu;
label_28c20c:
    // 0x28c20c: 0xffff4734  sd          $ra, 0x4734($ra)
    ctx->pc = 0x28c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18228), GPR_U64(ctx, 31));
label_28c210:
    // 0x28c210: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c210u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c214:
    // 0x28c214: 0x16ff4eff  bne         $s7, $ra, . + 4 + (0x4EFF << 2)
label_28c218:
    if (ctx->pc == 0x28C218u) {
        ctx->pc = 0x28C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C214u;
        // 0x28c218: 0x26232220  addiu       $v1, $s1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C21Cu;
        goto label_28c21c;
    }
    ctx->pc = 0x28C214u;
    {
        const bool branch_taken_0x28c214 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 31));
        ctx->pc = 0x28C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C214u;
        // 0x28c218: 0x26232220  addiu       $v1, $s1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c214) {
            ctx->pc = 0x29FE14u;
            return;
        }
    }
    ctx->pc = 0x28C21Cu;
label_28c21c:
    // 0x28c21c: 0x3734322e  ori         $s4, $t9, 0x322E
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12846);
label_28c220:
    // 0x28c220: 0xffff4740  sd          $ra, 0x4740($ra)
    ctx->pc = 0x28c220u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18240), GPR_U64(ctx, 31));
label_28c224:
    // 0x28c224: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c224u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c228:
    // 0x28c228: 0x17130fff  bne         $t8, $s3, . + 4 + (0xFFF << 2)
label_28c22c:
    if (ctx->pc == 0x28C22Cu) {
        ctx->pc = 0x28C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C228u;
        // 0x28c22c: 0x4dff3318  .word       0x4DFF3318                   # INVALID     $t7, $ra, 0x3318 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C22C raw=0x4DFF3318");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C230u;
        goto label_28c230;
    }
    ctx->pc = 0x28C228u;
    {
        const bool branch_taken_0x28c228 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x28C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C228u;
        // 0x28c22c: 0x4dff3318  .word       0x4DFF3318                   # INVALID     $t7, $ra, 0x3318 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C22C raw=0x4DFF3318");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c228) {
            ctx->pc = 0x290228u;
            { ctx->pc = 0x290228; return; }
        }
    }
    ctx->pc = 0x28C230u;
label_28c230:
    // 0x28c230: 0x3f3d3936  .word       0x3F3D3936                   # lui         $sp, 0x3936 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)14646 << 16));
label_28c234:
    // 0x28c234: 0xffff4b49  sd          $ra, 0x4B49($ra)
    ctx->pc = 0x28c234u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19273), GPR_U64(ctx, 31));
label_28c238:
    // 0x28c238: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c238u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c23c:
    // 0x28c23c: 0x565500ff  bnel        $s2, $s5, . + 4 + (0xFF << 2)
label_28c240:
    if (ctx->pc == 0x28C240u) {
        ctx->pc = 0x28C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C23Cu;
        // 0x28c240: 0xa09201f  j           func_824807C (Delay Slot)
        // J 0x824807C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C244u;
        goto label_28c244;
    }
    ctx->pc = 0x28C23Cu;
    {
        const bool branch_taken_0x28c23c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x28c23c) {
            ctx->pc = 0x28C240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C23Cu;
            // 0x28c240: 0xa09201f  j           func_824807C (Delay Slot)
            // J 0x824807C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C63Cu;
            goto label_28c63c;
        }
    }
    ctx->pc = 0x28C244u;
label_28c244:
    // 0x28c244: 0x403f2a29  .word       0x403F2A29                   # dmfc0       $ra, PageMask # 00000229 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c244u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x28C244 raw=0x403F2A29"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c248:
    // 0x28c248: 0xffff4443  sd          $ra, 0x4443($ra)
    ctx->pc = 0x28c248u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17475), GPR_U64(ctx, 31));
label_28c24c:
    // 0x28c24c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c250:
    // 0x28c250: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c250u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c254:
    // 0x28c254: 0x9080503  j           func_420140C
label_28c258:
    if (ctx->pc == 0x28C258u) {
        ctx->pc = 0x28C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C254u;
        // 0x28c258: 0x211f1c0a  addi        $ra, $t0, 0x1C0A (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7178, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C25Cu;
        goto label_28c25c;
    }
    ctx->pc = 0x28C254u;
    ctx->pc = 0x28C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C254u;
    // 0x28c258: 0x211f1c0a  addi        $ra, $t0, 0x1C0A (Delay Slot)
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7178, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x420140Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420140Cu, 0x28C254u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28C25Cu;
label_28c25c:
    // 0x28c25c: 0xffff4a2a  sd          $ra, 0x4A2A($ra)
    ctx->pc = 0x28c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18986), GPR_U64(ctx, 31));
label_28c260:
    // 0x28c260: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c260u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c264:
    // 0x28c264: 0xe0a09ff  jal         func_82827FC
label_28c268:
    if (ctx->pc == 0x28C268u) {
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x2c1b1410  sltiu       $k1, $zero, 0x1410 (Delay Slot)
        SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)5136) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C26Cu;
        goto label_28c26c;
    }
    ctx->pc = 0x28C264u;
    SET_GPR_U32(ctx, 31, 0x28C26Cu);
    ctx->pc = 0x28C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C264u;
    // 0x28c268: 0x2c1b1410  sltiu       $k1, $zero, 0x1410 (Delay Slot)
    SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)5136) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x82827FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x82827FCu, 0x28C264u, 0x28C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C26Cu;
label_28c26c:
    // 0x28c26c: 0x46433e3c  .word       0x46433E3C                   # INVALID     $s2, $v1, 0x3E3C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c26cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3C at 0x28C26C raw=0x46433E3C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c270:
    // 0x28c270: 0xffff4a48  sd          $ra, 0x4A48($ra)
    ctx->pc = 0x28c270u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19016), GPR_U64(ctx, 31));
label_28c274:
    // 0x28c274: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c274u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c278:
    // 0x28c278: 0x2014dff  .word       0x02014DFF                   # dsra32      $t1, $at, 23 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c278u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 23));
label_28c27c:
    // 0x28c27c: 0x15110e03  bne         $t0, $s1, . + 4 + (0xE03 << 2)
label_28c280:
    if (ctx->pc == 0x28C280u) {
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x4129211b  .word       0x4129211B                   # INVALID     $t1, $t1, 0x211B # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28C280 raw=0x4129211B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C284u;
        goto label_28c284;
    }
    ctx->pc = 0x28C27Cu;
    {
        const bool branch_taken_0x28c27c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 17));
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x4129211b  .word       0x4129211B                   # INVALID     $t1, $t1, 0x211B # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28C280 raw=0x4129211B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c27c) {
            ctx->pc = 0x28FA8Cu;
            { ctx->pc = 0x28fa8c; return; }
        }
    }
    ctx->pc = 0x28C284u;
label_28c284:
    // 0x28c284: 0xffff4644  sd          $ra, 0x4644($ra)
    ctx->pc = 0x28c284u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 17988), GPR_U64(ctx, 31));
label_28c288:
    // 0x28c288: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c288u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c28c:
    // 0x28c28c: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c290:
    // 0x28c290: 0x16060403  bne         $s0, $a2, . + 4 + (0x403 << 2)
label_28c294:
    if (ctx->pc == 0x28C294u) {
        ctx->pc = 0x28C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C290u;
        // 0x28c294: 0x42343220  .word       0x42343220                   # INVALID     $s1, $s4, 0x3220 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28C294 raw=0x42343220"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C298u;
        goto label_28c298;
    }
    ctx->pc = 0x28C290u;
    {
        const bool branch_taken_0x28c290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x28C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C290u;
        // 0x28c294: 0x42343220  .word       0x42343220                   # INVALID     $s1, $s4, 0x3220 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28C294 raw=0x42343220"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c290) {
            ctx->pc = 0x28D2A0u;
            { ctx->pc = 0x28d2a0; return; }
        }
    }
    ctx->pc = 0x28C298u;
label_28c298:
    // 0x28c298: 0xffff4745  sd          $ra, 0x4745($ra)
    ctx->pc = 0x28c298u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18245), GPR_U64(ctx, 31));
label_28c29c:
    // 0x28c29c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c29cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2a0:
    // 0x28c2a0: 0x7030201  bgezl       $t8, . + 4 + (0x201 << 2)
label_28c2a4:
    if (ctx->pc == 0x28C2A4u) {
        ctx->pc = 0x28C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2A0u;
        // 0x28c2a4: 0x22201612  addi        $zero, $s1, 0x1612 (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2A8u;
        goto label_28c2a8;
    }
    ctx->pc = 0x28C2A0u;
    {
        const bool branch_taken_0x28c2a0 = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x28c2a0) {
            ctx->pc = 0x28C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2A0u;
            // 0x28c2a4: 0x22201612  addi        $zero, $s1, 0x1612 (Delay Slot)
            // NOP (addi to $zero)
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CAA8u;
            { ctx->pc = 0x28caa8; return; }
        }
    }
    ctx->pc = 0x28C2A8u;
label_28c2a8:
    // 0x28c2a8: 0x322e2724  andi        $t6, $s1, 0x2724
    ctx->pc = 0x28c2a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)10020);
label_28c2ac:
    // 0x28c2ac: 0xffff3834  sd          $ra, 0x3834($ra)
    ctx->pc = 0x28c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14388), GPR_U64(ctx, 31));
label_28c2b0:
    // 0x28c2b0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2b4:
    // 0x28c2b4: 0x4dff00ff  .word       0x4DFF00FF                   # INVALID     $t7, $ra, 0xFF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c2b4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C2B4 raw=0x4DFF00FF");
 /* MITIGATED */
label_28c2b8:
    // 0x28c2b8: 0xf030201  jal         func_C0C0804
label_28c2bc:
    if (ctx->pc == 0x28C2BCu) {
        ctx->pc = 0x28C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2B8u;
        // 0x28c2bc: 0x3f363313  .word       0x3F363313                   # lui         $s6, 0x3313 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)13075 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2C0u;
        goto label_28c2c0;
    }
    ctx->pc = 0x28C2B8u;
    SET_GPR_U32(ctx, 31, 0x28C2C0u);
    ctx->pc = 0x28C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2B8u;
    // 0x28c2bc: 0x3f363313  .word       0x3F363313                   # lui         $s6, 0x3313 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)13075 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C0804u, 0x28C2B8u, 0x28C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2C0u;
label_28c2c0:
    // 0x28c2c0: 0xffff4b49  sd          $ra, 0x4B49($ra)
    ctx->pc = 0x28c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 19273), GPR_U64(ctx, 31));
label_28c2c4:
    // 0x28c2c4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2c8:
    // 0x28c2c8: 0xf030201  jal         func_C0C0804
label_28c2cc:
    if (ctx->pc == 0x28C2CCu) {
        ctx->pc = 0x28C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C8u;
        // 0x28c2cc: 0x1a191713  .word       0x1A191713                   # blez        $s0, . + 4 + (0x1713 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C2CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2D0u;
        goto label_28c2d0;
    }
    ctx->pc = 0x28C2C8u;
    SET_GPR_U32(ctx, 31, 0x28C2D0u);
    ctx->pc = 0x28C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2C8u;
    // 0x28c2cc: 0x1a191713  .word       0x1A191713                   # blez        $s0, . + 4 + (0x1713 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C2CC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C0804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C0804u, 0x28C2C8u, 0x28C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2D0u;
label_28c2d0:
    // 0x28c2d0: 0x4cff337b  .word       0x4CFF337B                   # INVALID     $a3, $ra, 0x337B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c2d0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C2D0 raw=0x4CFF337B");
 /* MITIGATED */
label_28c2d4:
    // 0x28c2d4: 0xffff3a36  sd          $ra, 0x3A36($ra)
    ctx->pc = 0x28c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14902), GPR_U64(ctx, 31));
label_28c2d8:
    // 0x28c2d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2dc:
    // 0x28c2dc: 0x2e2d45ff  sltiu       $t5, $s1, 0x45FF
    ctx->pc = 0x28c2dcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17919) ? 1 : 0);
label_28c2e0:
    // 0x28c2e0: 0x42412221  .word       0x42412221                   # INVALID     $s2, $at, 0x2221 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c2e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28C2E0 raw=0x42412221"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c2e4:
    // 0x28c2e4: 0x4e4d0e0d  .word       0x4E4D0E0D                   # INVALID     $s2, $t5, 0xE0D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c2e4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C2E4 raw=0x4E4D0E0D");
 /* MITIGATED */
label_28c2e8:
    // 0x28c2e8: 0xffff0201  sd          $ra, 0x201($ra)
    ctx->pc = 0x28c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 513), GPR_U64(ctx, 31));
label_28c2ec:
    // 0x28c2ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c2f0:
    // 0x28c2f0: 0x5a5946ff  .word       0x5A5946FF                   # blezl       $s2, . + 4 + (0x46FF << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_28c2f4:
    if (ctx->pc == 0x28C2F4u) {
        ctx->pc = 0x28C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2F0u;
        // 0x28c2f4: 0x8072c2b  j           func_1CB0AC (Delay Slot)
        // J 0x1CB0AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2F8u;
        goto label_28c2f8;
    }
    ctx->pc = 0x28C2F0u;
    {
        const bool branch_taken_0x28c2f0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x28c2f0) {
            ctx->pc = 0x28C2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2F0u;
            // 0x28c2f4: 0x8072c2b  j           func_1CB0AC (Delay Slot)
            // J 0x1CB0AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DEF0u;
            return;
        }
    }
    ctx->pc = 0x28C2F8u;
label_28c2f8:
    // 0x28c2f8: 0x38374a49  xori        $s7, $at, 0x4A49
    ctx->pc = 0x28c2f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)19017);
label_28c2fc:
    // 0x28c2fc: 0xffff504f  sd          $ra, 0x504F($ra)
    ctx->pc = 0x28c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 20559), GPR_U64(ctx, 31));
label_28c300:
    // 0x28c300: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c300u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c304:
    // 0x28c304: 0x20100ff  .word       0x020100FF                   # dsra32      $zero, $at, 3 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 3));
label_28c308:
    // 0x28c308: 0x7060403  .word       0x07060403                   # INVALID     $t8, $a2, 0x403 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28c308u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28C308 raw=0x07060403");
 /* MITIGATED */
label_28c30c:
    // 0x28c30c: 0x32201612  andi        $zero, $s1, 0x1612
    ctx->pc = 0x28c30cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5650);
label_28c310:
    // 0x28c310: 0xffff4734  sd          $ra, 0x4734($ra)
    ctx->pc = 0x28c310u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 18228), GPR_U64(ctx, 31));
label_28c314:
    // 0x28c314: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c314u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c318:
    // 0x28c318: 0x2014eff  .word       0x02014EFF                   # dsra32      $t1, $at, 27 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c318u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 27));
label_28c31c:
    // 0x28c31c: 0x4cff1603  .word       0x4CFF1603                   # INVALID     $a3, $ra, 0x1603 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c31cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C31C raw=0x4CFF1603");
 /* MITIGATED */
label_28c320:
    // 0x28c320: 0x32242220  andi        $a0, $s1, 0x2220
    ctx->pc = 0x28c320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8736);
label_28c324:
    // 0x28c324: 0xffff3834  sd          $ra, 0x3834($ra)
    ctx->pc = 0x28c324u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14388), GPR_U64(ctx, 31));
label_28c328:
    // 0x28c328: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c328u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c32c:
    // 0x28c32c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c330:
    // 0x28c330: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c330u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c334:
    // 0x28c334: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c334u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c338:
    // 0x28c338: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c338u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c33c:
    // 0x28c33c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c33cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c340:
    // 0x28c340: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c340u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c344:
    // 0x28c344: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c344u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c348:
    // 0x28c348: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c348u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c34c:
    // 0x28c34c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c350:
    // 0x28c350: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c350u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c354:
    // 0x28c354: 0x0  nop
    ctx->pc = 0x28c354u;
    // NOP
label_28c358:
    // 0x28c358: 0x0  nop
    ctx->pc = 0x28c358u;
    // NOP
label_28c35c:
    // 0x28c35c: 0x0  nop
    ctx->pc = 0x28c35cu;
    // NOP
label_28c360:
    // 0x28c360: 0x50024f00  beql        $zero, $v0, . + 4 + (0x4F00 << 2)
label_28c364:
    if (ctx->pc == 0x28C364u) {
        ctx->pc = 0x28C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C360u;
        // 0x28c364: 0x52055104  beql        $s0, $a1, . + 4 + (0x5104 << 2) (Delay Slot)
        // Likely branch instruction at 0x28C364 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C368u;
        goto label_28c368;
    }
    ctx->pc = 0x28C360u;
    {
        const bool branch_taken_0x28c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c360) {
            ctx->pc = 0x28C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C360u;
            // 0x28c364: 0x52055104  beql        $s0, $a1, . + 4 + (0x5104 << 2) (Delay Slot)
            // Likely branch instruction at 0x28C364 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FF64u;
            return;
        }
    }
    ctx->pc = 0x28C368u;
label_28c368:
    // 0x28c368: 0x54095307  bnel        $zero, $t1, . + 4 + (0x5307 << 2)
label_28c36c:
    if (ctx->pc == 0x28C36Cu) {
        ctx->pc = 0x28C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C368u;
        // 0x28c36c: 0xe0f0b0c  jal         func_83C2C30 (Delay Slot)
        // JAL 0x83C2C30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C370u;
        goto label_28c370;
    }
    ctx->pc = 0x28C368u;
    {
        const bool branch_taken_0x28c368 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 9));
        if (branch_taken_0x28c368) {
            ctx->pc = 0x28C36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C368u;
            // 0x28c36c: 0xe0f0b0c  jal         func_83C2C30 (Delay Slot)
            // JAL 0x83C2C30 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0F88u;
            return;
        }
    }
    ctx->pc = 0x28C370u;
label_28c370:
    // 0x28c370: 0x1a161417  .word       0x1A161417                   # blez        $s0, . + 4 + (0x1417 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
label_28c374:
    if (ctx->pc == 0x28C374u) {
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0x211c1d55  addi        $gp, $t0, 0x1D55 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7509, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C378u;
        goto label_28c378;
    }
    ctx->pc = 0x28C370u;
    {
        const bool branch_taken_0x28c370 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0x211c1d55  addi        $gp, $t0, 0x1D55 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7509, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c370) {
            ctx->pc = 0x2913D0u;
            { ctx->pc = 0x2913d0; return; }
        }
    }
    ctx->pc = 0x28C378u;
label_28c378:
    // 0x28c378: 0x26252822  addiu       $a1, $s1, 0x2822
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10274));
label_28c37c:
    // 0x28c37c: 0x32332c2d  andi        $s3, $s1, 0x2C2D
    ctx->pc = 0x28c37cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11309);
label_28c380:
    // 0x28c380: 0x3f563739  .word       0x3F563739                   # lui         $s6, 0x3739 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)14137 << 16));
label_28c384:
    // 0x28c384: 0x4642413e  .word       0x4642413E                   # INVALID     $s2, $v0, 0x413E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c384u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3E at 0x28C384 raw=0x4642413E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c388:
    // 0x28c388: 0xff4a4b47  sd          $t2, 0x4B47($k0)
    ctx->pc = 0x28c388u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 19271), GPR_U64(ctx, 10));
label_28c38c:
    // 0x28c38c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c390:
    // 0x28c390: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c390u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c394:
    // 0x28c394: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c394u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c398:
    // 0x28c398: 0xffff01ff  sd          $ra, 0x1FF($ra)
    ctx->pc = 0x28c398u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 511), GPR_U64(ctx, 31));
label_28c39c:
    // 0x28c39c: 0xd0b0907  jal         func_42C241C
label_28c3a0:
    if (ctx->pc == 0x28C3A0u) {
        ctx->pc = 0x28C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C39Cu;
        // 0x28c3a0: 0x19171513  .word       0x19171513                   # blez        $t0, . + 4 + (0x1513 << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C3A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3A4u;
        goto label_28c3a4;
    }
    ctx->pc = 0x28C39Cu;
    SET_GPR_U32(ctx, 31, 0x28C3A4u);
    ctx->pc = 0x28C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C39Cu;
    // 0x28c3a0: 0x19171513  .word       0x19171513                   # blez        $t0, . + 4 + (0x1513 << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C3A0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C241Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C241Cu, 0x28C39Cu, 0x28C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C3A4u;
label_28c3a4:
    // 0x28c3a4: 0x211f1d1b  addi        $ra, $t0, 0x1D1B
    ctx->pc = 0x28c3a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)7451, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_28c3a8:
    // 0x28c3a8: 0x2b292723  slti        $t1, $t9, 0x2723
    ctx->pc = 0x28c3a8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)10019) ? 1 : 0);
label_28c3ac:
    // 0x28c3ac: 0x35332f2d  ori         $s3, $t1, 0x2F2D
    ctx->pc = 0x28c3acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)12077);
label_28c3b0:
    // 0x28c3b0: 0x3d3b3937  .word       0x3D3B3937                   # lui         $k1, 0x3937 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)14647 << 16));
label_28c3b4:
    // 0x28c3b4: 0xff43413f  sd          $v1, 0x413F($k0)
    ctx->pc = 0x28c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 16703), GPR_U64(ctx, 3));
label_28c3b8:
    // 0x28c3b8: 0x4d4b4947  .word       0x4D4B4947                   # INVALID     $t2, $t3, 0x4947 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c3b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C3B8 raw=0x4D4B4947");
 /* MITIGATED */
label_28c3bc:
    // 0x28c3bc: 0x5553514f  bnel        $t2, $s3, . + 4 + (0x514F << 2)
label_28c3c0:
    if (ctx->pc == 0x28C3C0u) {
        ctx->pc = 0x28C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3BCu;
        // 0x28c3c0: 0xffff5957  sd          $ra, 0x5957($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 22871), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3C4u;
        goto label_28c3c4;
    }
    ctx->pc = 0x28C3BCu;
    {
        const bool branch_taken_0x28c3bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 19));
        if (branch_taken_0x28c3bc) {
            ctx->pc = 0x28C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C3BCu;
            // 0x28c3c0: 0xffff5957  sd          $ra, 0x5957($ra) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 31), 22871), GPR_U64(ctx, 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A08FCu;
            return;
        }
    }
    ctx->pc = 0x28C3C4u;
label_28c3c4:
    // 0x28c3c4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x28c3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_28c3c8:
    // 0x28c3c8: 0x0  nop
    ctx->pc = 0x28c3c8u;
    // NOP
label_28c3cc:
    // 0x28c3cc: 0x0  nop
    ctx->pc = 0x28c3ccu;
    // NOP
label_28c3d0:
    // 0x28c3d0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3d4:
    // 0x28c3d4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3d8:
    // 0x28c3d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3dc:
    // 0x28c3dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3e0:
    // 0x28c3e0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3e4:
    // 0x28c3e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3e8:
    // 0x28c3e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3ec:
    // 0x28c3ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3f0:
    // 0x28c3f0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3f4:
    // 0x28c3f4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3f8:
    // 0x28c3f8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c3fc:
    // 0x28c3fc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c400:
    // 0x28c400: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c400u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c404:
    // 0x28c404: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28c404u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28c408:
    // 0x28c408: 0x6050200  .word       0x06050200                   # INVALID     $s0, $a1, 0x200 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28c408u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x28C408 raw=0x06050200");
 /* MITIGATED */
label_28c40c:
    // 0x28c40c: 0xe0c0a08  jal         func_8302820
label_28c410:
    if (ctx->pc == 0x28C410u) {
        ctx->pc = 0x28C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C40Cu;
        // 0x28c410: 0x1a181614  .word       0x1A181614                   # blez        $s0, . + 4 + (0x1614 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C410 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C414u;
        goto label_28c414;
    }
    ctx->pc = 0x28C40Cu;
    SET_GPR_U32(ctx, 31, 0x28C414u);
    ctx->pc = 0x28C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C40Cu;
    // 0x28c410: 0x1a181614  .word       0x1A181614                   # blez        $s0, . + 4 + (0x1614 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28C410 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8302820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8302820u, 0x28C40Cu, 0x28C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C414u;
label_28c414:
    // 0x28c414: 0x22201e1c  addi        $zero, $s1, 0x1E1C
    ctx->pc = 0x28c414u;
    // NOP (addi to $zero)
label_28c418:
    // 0x28c418: 0x2c2a2824  sltiu       $t2, $at, 0x2824
    ctx->pc = 0x28c418u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)10276) ? 1 : 0);
label_28c41c:
    // 0x28c41c: 0x3634302e  ori         $s4, $s1, 0x302E
    ctx->pc = 0x28c41cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12334);
label_28c420:
    // 0x28c420: 0x3e3c3a38  .word       0x3E3C3A38                   # lui         $gp, 0x3A38 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c420u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)14904 << 16));
label_28c424:
    // 0x28c424: 0x45444240  .word       0x45444240                   # INVALID     $t2, $a0, 0x4240 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c424u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x0 at 0x28C424 raw=0x45444240"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c428:
    // 0x28c428: 0x4e4c4a48  .word       0x4E4C4A48                   # INVALID     $s2, $t4, 0x4A48 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c428u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28C428 raw=0x4E4C4A48");
 /* MITIGATED */
label_28c42c:
    // 0x28c42c: 0x56545250  bnel        $s2, $s4, . + 4 + (0x5250 << 2)
label_28c430:
    if (ctx->pc == 0x28C430u) {
        ctx->pc = 0x28C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C42Cu;
        // 0x28c430: 0xffff5a58  sd          $ra, 0x5A58($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 23128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C434u;
        goto label_28c434;
    }
    ctx->pc = 0x28C42Cu;
    {
        const bool branch_taken_0x28c42c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x28c42c) {
            ctx->pc = 0x28C430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C42Cu;
            // 0x28c430: 0xffff5a58  sd          $ra, 0x5A58($ra) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 31), 23128), GPR_U64(ctx, 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0D70u;
            return;
        }
    }
    ctx->pc = 0x28C434u;
label_28c434:
    // 0x28c434: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x28c434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_28c438:
    // 0x28c438: 0x0  nop
    ctx->pc = 0x28c438u;
    // NOP
label_28c43c:
    // 0x28c43c: 0x0  nop
    ctx->pc = 0x28c43cu;
    // NOP
label_28c440:
    // 0x28c440: 0x155b5a14  bne         $t2, $k1, . + 4 + (0x5A14 << 2)
label_28c444:
    if (ctx->pc == 0x28C444u) {
        ctx->pc = 0x28C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C440u;
        // 0x28c444: 0x5e165d5c  .word       0x5E165D5C                   # bgtzl       $s0, . + 4 + (0x5D5C << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C444 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C448u;
        goto label_28c448;
    }
    ctx->pc = 0x28C440u;
    {
        const bool branch_taken_0x28c440 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 27));
        ctx->pc = 0x28C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C440u;
        // 0x28c444: 0x5e165d5c  .word       0x5E165D5C                   # bgtzl       $s0, . + 4 + (0x5D5C << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28C444 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c440) {
            ctx->pc = 0x2A2C94u;
            return;
        }
    }
    ctx->pc = 0x28C448u;
label_28c448:
    // 0x28c448: 0x6160175f  daddi       $zero, $t3, 0x175F
    ctx->pc = 0x28c448u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)5983; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_28c44c:
    // 0x28c44c: 0x19636218  .word       0x19636218                   # blez        $t3, . + 4 + (0x6218 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_28c450:
    if (ctx->pc == 0x28C450u) {
        ctx->pc = 0x28C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C44Cu;
        // 0x28c450: 0x66206564  daddiu      $zero, $s1, 0x6564 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25956);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C454u;
        goto label_28c454;
    }
    ctx->pc = 0x28C44Cu;
    {
        const bool branch_taken_0x28c44c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x28C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C44Cu;
        // 0x28c450: 0x66206564  daddiu      $zero, $s1, 0x6564 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25956);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c44c) {
            ctx->pc = 0x2A4CB0u;
            return;
        }
    }
    ctx->pc = 0x28C454u;
label_28c454:
    // 0x28c454: 0x69682167  ldl         $t0, 0x2167($t3)
    ctx->pc = 0x28c454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_28c458:
    // 0x28c458: 0x236b6a22  addi        $t3, $k1, 0x6A22
    ctx->pc = 0x28c458u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 27), (int32_t)27170, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_28c45c:
    // 0x28c45c: 0x6e246d6c  ldr         $a0, 0x6D6C($s1)
    ctx->pc = 0x28c45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28012); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28c460:
    // 0x28c460: 0x7170256f  .word       0x7170256F                   # INVALID     $t3, $s0, 0x256F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28c460u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x28C460 raw=0x7170256F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c464:
    // 0x28c464: 0x38737226  xori        $s3, $v1, 0x7226
    ctx->pc = 0x28c464u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)29222);
label_28c468:
    // 0x28c468: 0x76467574  .word       0x76467574                   # INVALID     $s2, $a2, 0x7574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c468u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28C468 raw=0x76467574");
 /* MITIGATED */
label_28c46c:
    // 0x28c46c: 0x79784777  lq          $t8, 0x4777($t3)
    ctx->pc = 0x28c46cu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 11), 18295)));
label_28c470:
    // 0x28c470: 0x8002  srl         $s0, $zero, 0
    ctx->pc = 0x28c470u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28c474:
    // 0x28c474: 0x10000000  b           . + 4 + (0x0 << 2)
label_28c478:
    if (ctx->pc == 0x28C478u) {
        ctx->pc = 0x28C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C474u;
        // 0x28c478: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28C478 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C47Cu;
        goto label_28c47c;
    }
    ctx->pc = 0x28C474u;
    {
        const bool branch_taken_0x28c474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C474u;
        // 0x28c478: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28C478 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c474) {
            ctx->pc = 0x28C478u;
            goto label_28c478;
        }
    }
    ctx->pc = 0x28C47Cu;
label_28c47c:
    // 0x28c47c: 0x0  nop
    ctx->pc = 0x28c47cu;
    // NOP
label_28c480:
    // 0x28c480: 0x1adc7c6  .word       0x01ADC7C6                   # srlv        $t8, $t5, $t5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c480u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 13) & 0x1F));
label_28c484:
    // 0x28c484: 0x12a0006  srlv        $zero, $t2, $t1
    ctx->pc = 0x28c484u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
label_28c488:
    // 0x28c488: 0x1a8c4d0  .word       0x01A8C4D0                   # mfhi        $t8 # 01A804C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c488u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_28c48c:
    // 0x28c48c: 0x120170f  .word       0x0120170F                   # sync.p # 01201000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c48cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28c490:
    // 0x28c490: 0x16b8486  .word       0x016B8486                   # srlv        $s0, $t3, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c490u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 11) & 0x1F));
label_28c494:
    // 0x28c494: 0x1171000  .word       0x01171000                   # sll         $v0, $s7, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 0));
label_28c498:
    // 0x28c498: 0x19da99f  .word       0x019DA99F                   # ddivu       $s5, $t4, $sp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c498u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28C498 raw=0x019DA99F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c49c:
    // 0x28c49c: 0x197a29c  .word       0x0197A29C                   # dmult       $t4, $s7 # 0000A280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c49cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28C49C raw=0x0197A29C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c4a0:
    // 0x28c4a0: 0x1141313  .word       0x01141313                   # mtlo        $t0 # 00141300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4a0u;
    ctx->lo = GPR_U64(ctx, 8);
label_28c4a4:
    // 0x28c4a4: 0x128354d  break       296, 213
    ctx->pc = 0x28c4a4u;
    runtime->handleBreak(rdram, ctx);
label_28c4a8:
    // 0x28c4a8: 0x1c0d1c8  .word       0x01C0D1C8                   # jr          $t6 # 0000D1C0 <InstrIdType: CPU_SPECIAL>
label_28c4ac:
    if (ctx->pc == 0x28C4ACu) {
        ctx->pc = 0x28C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4A8u;
        // 0x28c4ac: 0x1b5b6ad  .word       0x01B5B6AD                   # daddu       $s6, $t5, $s5 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4B0u;
        goto label_28c4b0;
    }
    ctx->pc = 0x28C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 14);
        ctx->pc = 0x28C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4A8u;
        // 0x28c4ac: 0x1b5b6ad  .word       0x01B5B6AD                   # daddu       $s6, $t5, $s5 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C4A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28C4B0u;
label_28c4b0:
    // 0x28c4b0: 0x17d817f  .word       0x017D817F                   # dsra32      $s0, $sp, 5 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 29) >> (32 + 5));
label_28c4b4:
    // 0x28c4b4: 0x1d1b1ad  .word       0x01D1B1AD                   # daddu       $s6, $t6, $s1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 17));
label_28c4b8:
    // 0x28c4b8: 0x1140e0d  break       276, 56
    ctx->pc = 0x28c4b8u;
    runtime->handleBreak(rdram, ctx);
label_28c4bc:
    // 0x28c4bc: 0x1bfd3d2  .word       0x01BFD3D2                   # mflo        $k0 # 01BF03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4bcu;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_28c4c0:
    // 0x28c4c0: 0x1b8b2b1  tgeu        $t5, $t8, 714
    ctx->pc = 0x28c4c0u;
    if (GPR_U64(ctx, 13) >= GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_28c4c4:
    // 0x28c4c4: 0x1b8c0b3  tltu        $t5, $t8, 770
    ctx->pc = 0x28c4c4u;
    if (GPR_U64(ctx, 13) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_28c4c8:
    // 0x28c4c8: 0x1949186  .word       0x01949186                   # srlv        $s2, $s4, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 12) & 0x1F));
label_28c4cc:
    // 0x28c4cc: 0x11a150e  .word       0x011A150E                   # INVALID     $t0, $k0, 0x150E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28C4CC raw=0x011A150E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c4d0:
    // 0x28c4d0: 0x1acbdb9  .word       0x01ACBDB9                   # INVALID     $t5, $t4, -0x4247 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28C4D0 raw=0x01ACBDB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c4d4:
    // 0x28c4d4: 0x1a09696  .word       0x01A09696                   # dsrlv       $s2, $zero, $t5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 13) & 0x3F));
label_28c4d8:
    // 0x28c4d8: 0x1b8b196  .word       0x01B8B196                   # dsrlv       $s6, $t8, $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 24) >> (GPR_U32(ctx, 13) & 0x3F));
label_28c4dc:
    // 0x28c4dc: 0x0  nop
    ctx->pc = 0x28c4dcu;
    // NOP
label_28c4e0:
    // 0x28c4e0: 0x1241f1d  .word       0x01241F1D                   # dmultu      $t1, $a0 # 00001F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28C4E0 raw=0x01241F1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c4e4:
    // 0x28c4e4: 0x1ad9f9a  .word       0x01AD9F9A                   # div         $s3, $t5, $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4e4u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28c4e8:
    // 0x28c4e8: 0x1251c16  .word       0x01251C16                   # dsrlv       $v1, $a1, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 9) & 0x3F));
label_28c4ec:
    // 0x28c4ec: 0x120170f  .word       0x0120170F                   # sync.p # 01201000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28c4f0:
    // 0x28c4f0: 0x16b8486  .word       0x016B8486                   # srlv        $s0, $t3, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 11) & 0x1F));
label_28c4f4:
    // 0x28c4f4: 0x1918374  teq         $t4, $s1, 525
    ctx->pc = 0x28c4f4u;
    if (GPR_U64(ctx, 12) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_28c4f8:
    // 0x28c4f8: 0x19da99f  .word       0x019DA99F                   # ddivu       $s5, $t4, $sp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28C4F8 raw=0x019DA99F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c4fc:
    // 0x28c4fc: 0x197a29c  .word       0x0197A29C                   # dmult       $t4, $s7 # 0000A280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c4fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28C4FC raw=0x0197A29C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c500:
    // 0x28c500: 0x1141313  .word       0x01141313                   # mtlo        $t0 # 00141300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c500u;
    ctx->lo = GPR_U64(ctx, 8);
label_28c504:
    // 0x28c504: 0x1aa8276  tne         $t5, $t2, 521
    ctx->pc = 0x28c504u;
    if (GPR_U64(ctx, 13) != GPR_U64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_28c508:
    // 0x28c508: 0x1546ba2  .word       0x01546BA2                   # sub         $t5, $t2, $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c508u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 10), GPR_U32(ctx, 20), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_28c50c:
    // 0x28c50c: 0x1b5b6ad  .word       0x01B5B6AD                   # daddu       $s6, $t5, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c50cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 21));
label_28c510:
    // 0x28c510: 0x17d817f  .word       0x017D817F                   # dsra32      $s0, $sp, 5 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c510u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 29) >> (32 + 5));
label_28c514:
    // 0x28c514: 0x1261914  .word       0x01261914                   # dsllv       $v1, $a2, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (GPR_U32(ctx, 9) & 0x3F));
label_28c518:
    // 0x28c518: 0x1140e0d  break       276, 56
    ctx->pc = 0x28c518u;
    runtime->handleBreak(rdram, ctx);
label_28c51c:
    // 0x28c51c: 0x1bfd3d2  .word       0x01BFD3D2                   # mflo        $k0 # 01BF03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c51cu;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_28c520:
    // 0x28c520: 0x12e2120  .word       0x012E2120                   # add         $a0, $t1, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c520u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_28c524:
    // 0x28c524: 0x1b8c0b3  tltu        $t5, $t8, 770
    ctx->pc = 0x28c524u;
    if (GPR_U64(ctx, 13) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_28c528:
    // 0x28c528: 0x1949186  .word       0x01949186                   # srlv        $s2, $s4, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c528u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 12) & 0x1F));
label_28c52c:
    // 0x28c52c: 0x11a150e  .word       0x011A150E                   # INVALID     $t0, $k0, 0x150E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c52cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28C52C raw=0x011A150E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c530:
    // 0x28c530: 0x1acbdb9  .word       0x01ACBDB9                   # INVALID     $t5, $t4, -0x4247 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28C530 raw=0x01ACBDB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c534:
    // 0x28c534: 0x1a09696  .word       0x01A09696                   # dsrlv       $s2, $zero, $t5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c534u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 13) & 0x3F));
label_28c538:
    // 0x28c538: 0x1271e19  .word       0x01271E19                   # multu       $t1, $a3 # 00001E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c538u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 9) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28c53c:
    // 0x28c53c: 0x0  nop
    ctx->pc = 0x28c53cu;
    // NOP
label_28c540:
    // 0x28c540: 0x0  nop
    ctx->pc = 0x28c540u;
    // NOP
label_28c544:
    // 0x28c544: 0x0  nop
    ctx->pc = 0x28c544u;
    // NOP
label_28c548:
    // 0x28c548: 0x458ca000  .word       0x458CA000                   # INVALID     $t4, $t4, -0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c548u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C548 raw=0x458CA000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c54c:
    // 0x28c54c: 0x0  nop
    ctx->pc = 0x28c54cu;
    // NOP
label_28c550:
    // 0x28c550: 0x0  nop
    ctx->pc = 0x28c550u;
    // NOP
label_28c554:
    // 0x28c554: 0x0  nop
    ctx->pc = 0x28c554u;
    // NOP
label_28c558:
    // 0x28c558: 0x0  nop
    ctx->pc = 0x28c558u;
    // NOP
label_28c55c:
    // 0x28c55c: 0x45dac000  .word       0x45DAC000                   # INVALID     $t6, $k0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c55cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28C55C raw=0x45DAC000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c560:
    // 0x28c560: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c560u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x28C560 raw=0x45FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c564:
    // 0x28c564: 0x0  nop
    ctx->pc = 0x28c564u;
    // NOP
label_28c568:
    // 0x28c568: 0x0  nop
    ctx->pc = 0x28c568u;
    // NOP
label_28c56c:
    // 0x28c56c: 0x0  nop
    ctx->pc = 0x28c56cu;
    // NOP
label_28c570:
    // 0x28c570: 0x0  nop
    ctx->pc = 0x28c570u;
    // NOP
label_28c574:
    // 0x28c574: 0x0  nop
    ctx->pc = 0x28c574u;
    // NOP
label_28c578:
    // 0x28c578: 0x0  nop
    ctx->pc = 0x28c578u;
    // NOP
label_28c57c:
    // 0x28c57c: 0x0  nop
    ctx->pc = 0x28c57cu;
    // NOP
label_28c580:
    // 0x28c580: 0x0  nop
    ctx->pc = 0x28c580u;
    // NOP
label_28c584:
    // 0x28c584: 0x0  nop
    ctx->pc = 0x28c584u;
    // NOP
label_28c588:
    // 0x28c588: 0x0  nop
    ctx->pc = 0x28c588u;
    // NOP
label_28c58c:
    // 0x28c58c: 0x0  nop
    ctx->pc = 0x28c58cu;
    // NOP
label_28c590:
    // 0x28c590: 0x0  nop
    ctx->pc = 0x28c590u;
    // NOP
label_28c594:
    // 0x28c594: 0x0  nop
    ctx->pc = 0x28c594u;
    // NOP
label_28c598:
    // 0x28c598: 0x0  nop
    ctx->pc = 0x28c598u;
    // NOP
label_28c59c:
    // 0x28c59c: 0x0  nop
    ctx->pc = 0x28c59cu;
    // NOP
label_28c5a0:
    // 0x28c5a0: 0x0  nop
    ctx->pc = 0x28c5a0u;
    // NOP
label_28c5a4:
    // 0x28c5a4: 0x0  nop
    ctx->pc = 0x28c5a4u;
    // NOP
label_28c5a8:
    // 0x28c5a8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28c5a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28c5ac:
    // 0x28c5ac: 0x0  nop
    ctx->pc = 0x28c5acu;
    // NOP
label_28c5b0:
    // 0x28c5b0: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x28c5b0u;
    
label_28c5b4:
    // 0x28c5b4: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28c5b8:
    // 0x28c5b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c5b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C5B8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c5bc:
    // 0x28c5bc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c5bcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28C5BC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c5c0:
    // 0x28c5c0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c5c0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C5C0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c5c4:
    // 0x28c5c4: 0x0  nop
    ctx->pc = 0x28c5c4u;
    // NOP
label_28c5c8:
    // 0x28c5c8: 0x0  nop
    ctx->pc = 0x28c5c8u;
    // NOP
label_28c5cc:
    // 0x28c5cc: 0x0  nop
    ctx->pc = 0x28c5ccu;
    // NOP
label_28c5d0:
    // 0x28c5d0: 0x3f4f5c29  .word       0x3F4F5C29                   # lui         $t7, 0x5C29 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28c5d4:
    // 0x28c5d4: 0x3f3851ec  .word       0x3F3851EC                   # lui         $t8, 0x51EC # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5d4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20972 << 16));
label_28c5d8:
    // 0x28c5d8: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_28c5dc:
    // 0x28c5dc: 0x0  nop
    ctx->pc = 0x28c5dcu;
    // NOP
label_28c5e0:
    // 0x28c5e0: 0x3eb851ec  .word       0x3EB851EC                   # lui         $t8, 0x51EC # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5e0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20972 << 16));
label_28c5e4:
    // 0x28c5e4: 0x3eb851ec  .word       0x3EB851EC                   # lui         $t8, 0x51EC # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5e4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20972 << 16));
label_28c5e8:
    // 0x28c5e8: 0x3ec28f5c  .word       0x3EC28F5C                   # lui         $v0, 0x8F5C # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_28c5ec:
    // 0x28c5ec: 0x0  nop
    ctx->pc = 0x28c5ecu;
    // NOP
label_28c5f0:
    // 0x28c5f0: 0x3f47ae14  .word       0x3F47AE14                   # lui         $a3, 0xAE14 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44564 << 16));
label_28c5f4:
    // 0x28c5f4: 0x3f3ae148  .word       0x3F3AE148                   # lui         $k0, 0xE148 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)57672 << 16));
label_28c5f8:
    // 0x28c5f8: 0x3f2e147b  .word       0x3F2E147B                   # lui         $t6, 0x147B # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c5f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28c5fc:
    // 0x28c5fc: 0x0  nop
    ctx->pc = 0x28c5fcu;
    // NOP
label_28c600:
    // 0x28c600: 0x788282  .word       0x00788282                   # srl         $s0, $t8, 10 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c600u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 24), 10));
label_28c604:
    // 0x28c604: 0x0  nop
    ctx->pc = 0x28c604u;
    // NOP
label_28c608:
    // 0x28c608: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c608u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C608 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c60c:
    // 0x28c60c: 0x0  nop
    ctx->pc = 0x28c60cu;
    // NOP
label_28c610:
    // 0x28c610: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_28c614:
    // 0x28c614: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c614u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28c618:
    // 0x28c618: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c618u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C618 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c61c:
    // 0x28c61c: 0x44bb8000  dmtc1       $k1, $f16
    ctx->pc = 0x28c61cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28C61C raw=0x44BB8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c620:
    // 0x28c620: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c620u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C620 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c624:
    // 0x28c624: 0x0  nop
    ctx->pc = 0x28c624u;
    // NOP
label_28c628:
    // 0x28c628: 0x0  nop
    ctx->pc = 0x28c628u;
    // NOP
label_28c62c:
    // 0x28c62c: 0x0  nop
    ctx->pc = 0x28c62cu;
    // NOP
label_28c630:
    // 0x28c630: 0x3f051eb8  .word       0x3F051EB8                   # lui         $a1, 0x1EB8 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_28c634:
    // 0x28c634: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c634u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28c638:
    // 0x28c638: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28c63c:
    // 0x28c63c: 0x0  nop
    ctx->pc = 0x28c63cu;
    // NOP
label_28c640:
    // 0x28c640: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28c644:
    // 0x28c644: 0x3ec28f5c  .word       0x3EC28F5C                   # lui         $v0, 0x8F5C # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_28c648:
    // 0x28c648: 0x3edc28f6  .word       0x3EDC28F6                   # lui         $gp, 0x28F6 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)10486 << 16));
label_28c64c:
    // 0x28c64c: 0x0  nop
    ctx->pc = 0x28c64cu;
    // NOP
label_28c650:
    // 0x28c650: 0x3f170a3d  .word       0x3F170A3D                   # lui         $s7, 0xA3D # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c650u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2621 << 16));
label_28c654:
    // 0x28c654: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c654u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28c658:
    // 0x28c658: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c658u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28c65c:
    // 0x28c65c: 0x0  nop
    ctx->pc = 0x28c65cu;
    // NOP
label_28c660:
    // 0x28c660: 0x788282  .word       0x00788282                   # srl         $s0, $t8, 10 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c660u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 24), 10));
label_28c664:
    // 0x28c664: 0x0  nop
    ctx->pc = 0x28c664u;
    // NOP
label_28c668:
    // 0x28c668: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c668u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C668 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c66c:
    // 0x28c66c: 0x0  nop
    ctx->pc = 0x28c66cu;
    // NOP
label_28c670:
    // 0x28c670: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28c670u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28c674:
    // 0x28c674: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28c678:
    // 0x28c678: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c678u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C678 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c67c:
    // 0x28c67c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c67cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28C67C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c680:
    // 0x28c680: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c680u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C680 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c684:
    // 0x28c684: 0x0  nop
    ctx->pc = 0x28c684u;
    // NOP
label_28c688:
    // 0x28c688: 0x0  nop
    ctx->pc = 0x28c688u;
    // NOP
label_28c68c:
    // 0x28c68c: 0x0  nop
    ctx->pc = 0x28c68cu;
    // NOP
label_28c690:
    // 0x28c690: 0x0  nop
    ctx->pc = 0x28c690u;
    // NOP
label_28c694:
    // 0x28c694: 0x0  nop
    ctx->pc = 0x28c694u;
    // NOP
label_28c698:
    // 0x28c698: 0x0  nop
    ctx->pc = 0x28c698u;
    // NOP
label_28c69c:
    // 0x28c69c: 0x0  nop
    ctx->pc = 0x28c69cu;
    // NOP
label_28c6a0:
    // 0x28c6a0: 0x0  nop
    ctx->pc = 0x28c6a0u;
    // NOP
label_28c6a4:
    // 0x28c6a4: 0x0  nop
    ctx->pc = 0x28c6a4u;
    // NOP
label_28c6a8:
    // 0x28c6a8: 0x0  nop
    ctx->pc = 0x28c6a8u;
    // NOP
label_28c6ac:
    // 0x28c6ac: 0x0  nop
    ctx->pc = 0x28c6acu;
    // NOP
label_28c6b0:
    // 0x28c6b0: 0x0  nop
    ctx->pc = 0x28c6b0u;
    // NOP
label_28c6b4:
    // 0x28c6b4: 0x0  nop
    ctx->pc = 0x28c6b4u;
    // NOP
label_28c6b8:
    // 0x28c6b8: 0x0  nop
    ctx->pc = 0x28c6b8u;
    // NOP
label_28c6bc:
    // 0x28c6bc: 0x0  nop
    ctx->pc = 0x28c6bcu;
    // NOP
label_28c6c0:
    // 0x28c6c0: 0xb7c7ca  .word       0x00B7C7CA                   # movz        $t8, $a1, $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c6c0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 5));
label_28c6c4:
    // 0x28c6c4: 0x0  nop
    ctx->pc = 0x28c6c4u;
    // NOP
label_28c6c8:
    // 0x28c6c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c6c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C6C8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c6cc:
    // 0x28c6cc: 0x0  nop
    ctx->pc = 0x28c6ccu;
    // NOP
label_28c6d0:
    // 0x28c6d0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28c6d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28c6d4:
    // 0x28c6d4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28c6d8:
    // 0x28c6d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c6d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C6D8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c6dc:
    // 0x28c6dc: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c6dcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x28C6DC raw=0x447A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c6e0:
    // 0x28c6e0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c6e0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C6E0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c6e4:
    // 0x28c6e4: 0x0  nop
    ctx->pc = 0x28c6e4u;
    // NOP
label_28c6e8:
    // 0x28c6e8: 0x0  nop
    ctx->pc = 0x28c6e8u;
    // NOP
label_28c6ec:
    // 0x28c6ec: 0x0  nop
    ctx->pc = 0x28c6ecu;
    // NOP
label_28c6f0:
    // 0x28c6f0: 0x0  nop
    ctx->pc = 0x28c6f0u;
    // NOP
label_28c6f4:
    // 0x28c6f4: 0x0  nop
    ctx->pc = 0x28c6f4u;
    // NOP
label_28c6f8:
    // 0x28c6f8: 0x0  nop
    ctx->pc = 0x28c6f8u;
    // NOP
label_28c6fc:
    // 0x28c6fc: 0x0  nop
    ctx->pc = 0x28c6fcu;
    // NOP
label_28c700:
    // 0x28c700: 0x0  nop
    ctx->pc = 0x28c700u;
    // NOP
label_28c704:
    // 0x28c704: 0x0  nop
    ctx->pc = 0x28c704u;
    // NOP
label_28c708:
    // 0x28c708: 0x0  nop
    ctx->pc = 0x28c708u;
    // NOP
label_28c70c:
    // 0x28c70c: 0x0  nop
    ctx->pc = 0x28c70cu;
    // NOP
label_28c710:
    // 0x28c710: 0x0  nop
    ctx->pc = 0x28c710u;
    // NOP
label_28c714:
    // 0x28c714: 0x0  nop
    ctx->pc = 0x28c714u;
    // NOP
label_28c718:
    // 0x28c718: 0x0  nop
    ctx->pc = 0x28c718u;
    // NOP
label_28c71c:
    // 0x28c71c: 0x0  nop
    ctx->pc = 0x28c71cu;
    // NOP
label_28c720:
    // 0x28c720: 0xb7c7ca  .word       0x00B7C7CA                   # movz        $t8, $a1, $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c720u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 5));
label_28c724:
    // 0x28c724: 0x0  nop
    ctx->pc = 0x28c724u;
    // NOP
label_28c728:
    // 0x28c728: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28c72c:
    // 0x28c72c: 0x0  nop
    ctx->pc = 0x28c72cu;
    // NOP
label_28c730:
    // 0x28c730: 0x0  nop
    ctx->pc = 0x28c730u;
    // NOP
label_28c734:
    // 0x28c734: 0x0  nop
    ctx->pc = 0x28c734u;
    // NOP
label_28c738:
    // 0x28c738: 0x0  nop
    ctx->pc = 0x28c738u;
    // NOP
label_28c73c:
    // 0x28c73c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c73cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28C73C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c740:
    // 0x28c740: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c740u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C740 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c744:
    // 0x28c744: 0x0  nop
    ctx->pc = 0x28c744u;
    // NOP
label_28c748:
    // 0x28c748: 0x0  nop
    ctx->pc = 0x28c748u;
    // NOP
label_28c74c:
    // 0x28c74c: 0x0  nop
    ctx->pc = 0x28c74cu;
    // NOP
label_28c750:
    // 0x28c750: 0x0  nop
    ctx->pc = 0x28c750u;
    // NOP
label_28c754:
    // 0x28c754: 0x0  nop
    ctx->pc = 0x28c754u;
    // NOP
label_28c758:
    // 0x28c758: 0x0  nop
    ctx->pc = 0x28c758u;
    // NOP
label_28c75c:
    // 0x28c75c: 0x0  nop
    ctx->pc = 0x28c75cu;
    // NOP
label_28c760:
    // 0x28c760: 0x0  nop
    ctx->pc = 0x28c760u;
    // NOP
label_28c764:
    // 0x28c764: 0x0  nop
    ctx->pc = 0x28c764u;
    // NOP
label_28c768:
    // 0x28c768: 0x0  nop
    ctx->pc = 0x28c768u;
    // NOP
label_28c76c:
    // 0x28c76c: 0x0  nop
    ctx->pc = 0x28c76cu;
    // NOP
label_28c770:
    // 0x28c770: 0x0  nop
    ctx->pc = 0x28c770u;
    // NOP
label_28c774:
    // 0x28c774: 0x0  nop
    ctx->pc = 0x28c774u;
    // NOP
label_28c778:
    // 0x28c778: 0x0  nop
    ctx->pc = 0x28c778u;
    // NOP
label_28c77c:
    // 0x28c77c: 0x0  nop
    ctx->pc = 0x28c77cu;
    // NOP
label_28c780:
    // 0x28c780: 0x0  nop
    ctx->pc = 0x28c780u;
    // NOP
label_28c784:
    // 0x28c784: 0x0  nop
    ctx->pc = 0x28c784u;
    // NOP
label_28c788:
    // 0x28c788: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28c788u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28c78c:
    // 0x28c78c: 0x0  nop
    ctx->pc = 0x28c78cu;
    // NOP
label_28c790:
    // 0x28c790: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28c790u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28c794:
    // 0x28c794: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28c798:
    // 0x28c798: 0x0  nop
    ctx->pc = 0x28c798u;
    // NOP
label_28c79c:
    // 0x28c79c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c79cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28C79C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c7a0:
    // 0x28c7a0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c7a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C7A0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c7a4:
    // 0x28c7a4: 0x0  nop
    ctx->pc = 0x28c7a4u;
    // NOP
label_28c7a8:
    // 0x28c7a8: 0x0  nop
    ctx->pc = 0x28c7a8u;
    // NOP
label_28c7ac:
    // 0x28c7ac: 0x0  nop
    ctx->pc = 0x28c7acu;
    // NOP
label_28c7b0:
    // 0x28c7b0: 0x0  nop
    ctx->pc = 0x28c7b0u;
    // NOP
label_28c7b4:
    // 0x28c7b4: 0x0  nop
    ctx->pc = 0x28c7b4u;
    // NOP
label_28c7b8:
    // 0x28c7b8: 0x0  nop
    ctx->pc = 0x28c7b8u;
    // NOP
label_28c7bc:
    // 0x28c7bc: 0x0  nop
    ctx->pc = 0x28c7bcu;
    // NOP
label_28c7c0:
    // 0x28c7c0: 0x0  nop
    ctx->pc = 0x28c7c0u;
    // NOP
label_28c7c4:
    // 0x28c7c4: 0x0  nop
    ctx->pc = 0x28c7c4u;
    // NOP
label_28c7c8:
    // 0x28c7c8: 0x0  nop
    ctx->pc = 0x28c7c8u;
    // NOP
label_28c7cc:
    // 0x28c7cc: 0x0  nop
    ctx->pc = 0x28c7ccu;
    // NOP
label_28c7d0:
    // 0x28c7d0: 0x0  nop
    ctx->pc = 0x28c7d0u;
    // NOP
label_28c7d4:
    // 0x28c7d4: 0x0  nop
    ctx->pc = 0x28c7d4u;
    // NOP
label_28c7d8:
    // 0x28c7d8: 0x0  nop
    ctx->pc = 0x28c7d8u;
    // NOP
label_28c7dc:
    // 0x28c7dc: 0x0  nop
    ctx->pc = 0x28c7dcu;
    // NOP
label_28c7e0:
    // 0x28c7e0: 0x121314  .word       0x00121314                   # dsllv       $v0, $s2, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_28c7e4:
    // 0x28c7e4: 0x0  nop
    ctx->pc = 0x28c7e4u;
    // NOP
label_28c7e8:
    // 0x28c7e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c7e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C7E8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c7ec:
    // 0x28c7ec: 0x0  nop
    ctx->pc = 0x28c7ecu;
    // NOP
label_28c7f0:
    // 0x28c7f0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28c7f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28c7f4:
    // 0x28c7f4: 0x3f8147ae  .word       0x3F8147AE                   # lui         $at, 0x47AE # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_28c7f8:
    // 0x28c7f8: 0x0  nop
    ctx->pc = 0x28c7f8u;
    // NOP
label_28c7fc:
    // 0x28c7fc: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c7fcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x28C7FC raw=0x447A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c800:
    // 0x28c800: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c800u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28C800 raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c804:
    // 0x28c804: 0x0  nop
    ctx->pc = 0x28c804u;
    // NOP
label_28c808:
    // 0x28c808: 0x0  nop
    ctx->pc = 0x28c808u;
    // NOP
label_28c80c:
    // 0x28c80c: 0x0  nop
    ctx->pc = 0x28c80cu;
    // NOP
label_28c810:
    // 0x28c810: 0x0  nop
    ctx->pc = 0x28c810u;
    // NOP
label_28c814:
    // 0x28c814: 0x0  nop
    ctx->pc = 0x28c814u;
    // NOP
label_28c818:
    // 0x28c818: 0x0  nop
    ctx->pc = 0x28c818u;
    // NOP
label_28c81c:
    // 0x28c81c: 0x0  nop
    ctx->pc = 0x28c81cu;
    // NOP
label_28c820:
    // 0x28c820: 0x0  nop
    ctx->pc = 0x28c820u;
    // NOP
label_28c824:
    // 0x28c824: 0x0  nop
    ctx->pc = 0x28c824u;
    // NOP
label_28c828:
    // 0x28c828: 0x0  nop
    ctx->pc = 0x28c828u;
    // NOP
label_28c82c:
    // 0x28c82c: 0x0  nop
    ctx->pc = 0x28c82cu;
    // NOP
label_28c830:
    // 0x28c830: 0x0  nop
    ctx->pc = 0x28c830u;
    // NOP
label_28c834:
    // 0x28c834: 0x0  nop
    ctx->pc = 0x28c834u;
    // NOP
label_28c838:
    // 0x28c838: 0x0  nop
    ctx->pc = 0x28c838u;
    // NOP
label_28c83c:
    // 0x28c83c: 0x0  nop
    ctx->pc = 0x28c83cu;
    // NOP
label_28c840:
    // 0x28c840: 0x121314  .word       0x00121314                   # dsllv       $v0, $s2, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_28c844:
    // 0x28c844: 0x0  nop
    ctx->pc = 0x28c844u;
    // NOP
label_28c848:
    // 0x28c848: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28c848u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28c84c:
    // 0x28c84c: 0x0  nop
    ctx->pc = 0x28c84cu;
    // NOP
label_28c850:
    // 0x28c850: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x28c850u;
    
label_28c854:
    // 0x28c854: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28c858:
    // 0x28c858: 0x0  nop
    ctx->pc = 0x28c858u;
    // NOP
label_28c85c:
    // 0x28c85c: 0x44fa0000  .word       0x44FA0000                   # INVALID     $a3, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c85cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x28C85C raw=0x44FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c860:
    // 0x28c860: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c860u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C860 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c864:
    // 0x28c864: 0x0  nop
    ctx->pc = 0x28c864u;
    // NOP
label_28c868:
    // 0x28c868: 0x0  nop
    ctx->pc = 0x28c868u;
    // NOP
label_28c86c:
    // 0x28c86c: 0x0  nop
    ctx->pc = 0x28c86cu;
    // NOP
label_28c870:
    // 0x28c870: 0x0  nop
    ctx->pc = 0x28c870u;
    // NOP
label_28c874:
    // 0x28c874: 0x0  nop
    ctx->pc = 0x28c874u;
    // NOP
label_28c878:
    // 0x28c878: 0x0  nop
    ctx->pc = 0x28c878u;
    // NOP
label_28c87c:
    // 0x28c87c: 0x0  nop
    ctx->pc = 0x28c87cu;
    // NOP
label_28c880:
    // 0x28c880: 0x0  nop
    ctx->pc = 0x28c880u;
    // NOP
label_28c884:
    // 0x28c884: 0x0  nop
    ctx->pc = 0x28c884u;
    // NOP
label_28c888:
    // 0x28c888: 0x0  nop
    ctx->pc = 0x28c888u;
    // NOP
label_28c88c:
    // 0x28c88c: 0x0  nop
    ctx->pc = 0x28c88cu;
    // NOP
label_28c890:
    // 0x28c890: 0x0  nop
    ctx->pc = 0x28c890u;
    // NOP
label_28c894:
    // 0x28c894: 0x0  nop
    ctx->pc = 0x28c894u;
    // NOP
label_28c898:
    // 0x28c898: 0x0  nop
    ctx->pc = 0x28c898u;
    // NOP
label_28c89c:
    // 0x28c89c: 0x0  nop
    ctx->pc = 0x28c89cu;
    // NOP
label_28c8a0:
    // 0x28c8a0: 0x202020  add         $a0, $at, $zero
    ctx->pc = 0x28c8a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_28c8a4:
    // 0x28c8a4: 0x0  nop
    ctx->pc = 0x28c8a4u;
    // NOP
label_28c8a8:
    // 0x28c8a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c8a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C8A8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c8ac:
    // 0x28c8ac: 0x0  nop
    ctx->pc = 0x28c8acu;
    // NOP
label_28c8b0:
    // 0x28c8b0: 0xf00  sll         $at, $zero, 28
    ctx->pc = 0x28c8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28c8b4:
    // 0x28c8b4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c8b4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28c8b8:
    // 0x28c8b8: 0x0  nop
    ctx->pc = 0x28c8b8u;
    // NOP
label_28c8bc:
    // 0x28c8bc: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28c8bcu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28c8c0:
    // 0x28c8c0: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c8c0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28C8C0 raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c8c4:
    // 0x28c8c4: 0x0  nop
    ctx->pc = 0x28c8c4u;
    // NOP
label_28c8c8:
    // 0x28c8c8: 0x0  nop
    ctx->pc = 0x28c8c8u;
    // NOP
label_28c8cc:
    // 0x28c8cc: 0x0  nop
    ctx->pc = 0x28c8ccu;
    // NOP
label_28c8d0:
    // 0x28c8d0: 0x0  nop
    ctx->pc = 0x28c8d0u;
    // NOP
label_28c8d4:
    // 0x28c8d4: 0x0  nop
    ctx->pc = 0x28c8d4u;
    // NOP
label_28c8d8:
    // 0x28c8d8: 0x0  nop
    ctx->pc = 0x28c8d8u;
    // NOP
label_28c8dc:
    // 0x28c8dc: 0x0  nop
    ctx->pc = 0x28c8dcu;
    // NOP
label_28c8e0:
    // 0x28c8e0: 0x0  nop
    ctx->pc = 0x28c8e0u;
    // NOP
label_28c8e4:
    // 0x28c8e4: 0x0  nop
    ctx->pc = 0x28c8e4u;
    // NOP
label_28c8e8:
    // 0x28c8e8: 0x0  nop
    ctx->pc = 0x28c8e8u;
    // NOP
label_28c8ec:
    // 0x28c8ec: 0x0  nop
    ctx->pc = 0x28c8ecu;
    // NOP
label_28c8f0:
    // 0x28c8f0: 0x0  nop
    ctx->pc = 0x28c8f0u;
    // NOP
label_28c8f4:
    // 0x28c8f4: 0x0  nop
    ctx->pc = 0x28c8f4u;
    // NOP
label_28c8f8:
    // 0x28c8f8: 0x0  nop
    ctx->pc = 0x28c8f8u;
    // NOP
label_28c8fc:
    // 0x28c8fc: 0x0  nop
    ctx->pc = 0x28c8fcu;
    // NOP
label_28c900:
    // 0x28c900: 0x202020  add         $a0, $at, $zero
    ctx->pc = 0x28c900u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_28c904:
    // 0x28c904: 0x0  nop
    ctx->pc = 0x28c904u;
    // NOP
label_28c908:
    // 0x28c908: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c908u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C908 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c90c:
    // 0x28c90c: 0x0  nop
    ctx->pc = 0x28c90cu;
    // NOP
label_28c910:
    // 0x28c910: 0x0  nop
    ctx->pc = 0x28c910u;
    // NOP
label_28c914:
    // 0x28c914: 0x0  nop
    ctx->pc = 0x28c914u;
    // NOP
label_28c918:
    // 0x28c918: 0x0  nop
    ctx->pc = 0x28c918u;
    // NOP
label_28c91c:
    // 0x28c91c: 0x455ac000  .word       0x455AC000                   # INVALID     $t2, $k0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c91cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x0 at 0x28C91C raw=0x455AC000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c920:
    // 0x28c920: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28c920u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28C920 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c924:
    // 0x28c924: 0x0  nop
    ctx->pc = 0x28c924u;
    // NOP
label_28c928:
    // 0x28c928: 0x0  nop
    ctx->pc = 0x28c928u;
    // NOP
label_28c92c:
    // 0x28c92c: 0x0  nop
    ctx->pc = 0x28c92cu;
    // NOP
label_28c930:
    // 0x28c930: 0x3f23d70a  .word       0x3F23D70A                   # lui         $v1, 0xD70A # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28c934:
    // 0x28c934: 0x3f1eb852  .word       0x3F1EB852                   # lui         $fp, 0xB852 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c934u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_28c938:
    // 0x28c938: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c938u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28c93c:
    // 0x28c93c: 0x0  nop
    ctx->pc = 0x28c93cu;
    // NOP
label_28c940:
    // 0x28c940: 0x3e947ae1  .word       0x3E947AE1                   # lui         $s4, 0x7AE1 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c940u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31457 << 16));
label_28c944:
    // 0x28c944: 0x3e570a3d  .word       0x3E570A3D                   # lui         $s7, 0xA3D # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c944u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2621 << 16));
label_28c948:
    // 0x28c948: 0x3e3851ec  .word       0x3E3851EC                   # lui         $t8, 0x51EC # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c948u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20972 << 16));
label_28c94c:
    // 0x28c94c: 0x0  nop
    ctx->pc = 0x28c94cu;
    // NOP
label_28c950:
    // 0x28c950: 0x3f51eb85  .word       0x3F51EB85                   # lui         $s1, 0xEB85 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c950u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60293 << 16));
label_28c954:
    // 0x28c954: 0x3f428f5c  .word       0x3F428F5C                   # lui         $v0, 0x8F5C # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_28c958:
    // 0x28c958: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28c958u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_28c95c:
    // 0x28c95c: 0x0  nop
    ctx->pc = 0x28c95cu;
    // NOP
label_28c960:
    // 0x28c960: 0x515164  .word       0x00515164                   # and         $t2, $v0, $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c960u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_28c964:
    // 0x28c964: 0x0  nop
    ctx->pc = 0x28c964u;
    // NOP
label_28c968:
    // 0x28c968: 0x981  .word       0x00000981                   # INVALID     $zero, $zero, 0x981 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28c968u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28C968 raw=0x00000981"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28c96c:
    // 0x28c96c: 0x0  nop
    ctx->pc = 0x28c96cu;
    // NOP
label_28c970:
    // 0x28c970: 0x0  nop
    ctx->pc = 0x28c970u;
    // NOP
label_28c974:
    // 0x28c974: 0x0  nop
    ctx->pc = 0x28c974u;
    // NOP
    ctx->pc = 0x28c978u;
    return;
}

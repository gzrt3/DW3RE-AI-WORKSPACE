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


void FUN_0017d410_part193(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1db010u: goto label_1db010;
        case 0x1db014u: goto label_1db014;
        case 0x1db018u: goto label_1db018;
        case 0x1db01cu: goto label_1db01c;
        case 0x1db020u: goto label_1db020;
        case 0x1db024u: goto label_1db024;
        case 0x1db028u: goto label_1db028;
        case 0x1db02cu: goto label_1db02c;
        case 0x1db030u: goto label_1db030;
        case 0x1db034u: goto label_1db034;
        case 0x1db038u: goto label_1db038;
        case 0x1db03cu: goto label_1db03c;
        case 0x1db040u: goto label_1db040;
        case 0x1db044u: goto label_1db044;
        case 0x1db048u: goto label_1db048;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db050u: goto label_1db050;
        case 0x1db054u: goto label_1db054;
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0b4u: goto label_1db0b4;
        case 0x1db0b8u: goto label_1db0b8;
        case 0x1db0bcu: goto label_1db0bc;
        case 0x1db0c0u: goto label_1db0c0;
        case 0x1db0c4u: goto label_1db0c4;
        case 0x1db0c8u: goto label_1db0c8;
        case 0x1db0ccu: goto label_1db0cc;
        case 0x1db0d0u: goto label_1db0d0;
        case 0x1db0d4u: goto label_1db0d4;
        case 0x1db0d8u: goto label_1db0d8;
        case 0x1db0dcu: goto label_1db0dc;
        case 0x1db0e0u: goto label_1db0e0;
        case 0x1db0e4u: goto label_1db0e4;
        case 0x1db0e8u: goto label_1db0e8;
        case 0x1db0ecu: goto label_1db0ec;
        case 0x1db0f0u: goto label_1db0f0;
        case 0x1db0f4u: goto label_1db0f4;
        case 0x1db0f8u: goto label_1db0f8;
        case 0x1db0fcu: goto label_1db0fc;
        case 0x1db100u: goto label_1db100;
        case 0x1db104u: goto label_1db104;
        case 0x1db108u: goto label_1db108;
        case 0x1db10cu: goto label_1db10c;
        case 0x1db110u: goto label_1db110;
        case 0x1db114u: goto label_1db114;
        case 0x1db118u: goto label_1db118;
        case 0x1db11cu: goto label_1db11c;
        case 0x1db120u: goto label_1db120;
        case 0x1db124u: goto label_1db124;
        case 0x1db128u: goto label_1db128;
        case 0x1db12cu: goto label_1db12c;
        case 0x1db130u: goto label_1db130;
        case 0x1db134u: goto label_1db134;
        case 0x1db138u: goto label_1db138;
        case 0x1db13cu: goto label_1db13c;
        case 0x1db140u: goto label_1db140;
        case 0x1db144u: goto label_1db144;
        case 0x1db148u: goto label_1db148;
        case 0x1db14cu: goto label_1db14c;
        case 0x1db150u: goto label_1db150;
        case 0x1db154u: goto label_1db154;
        case 0x1db158u: goto label_1db158;
        case 0x1db15cu: goto label_1db15c;
        case 0x1db160u: goto label_1db160;
        case 0x1db164u: goto label_1db164;
        case 0x1db168u: goto label_1db168;
        case 0x1db16cu: goto label_1db16c;
        case 0x1db170u: goto label_1db170;
        case 0x1db174u: goto label_1db174;
        case 0x1db178u: goto label_1db178;
        case 0x1db17cu: goto label_1db17c;
        case 0x1db180u: goto label_1db180;
        case 0x1db184u: goto label_1db184;
        case 0x1db188u: goto label_1db188;
        case 0x1db18cu: goto label_1db18c;
        case 0x1db190u: goto label_1db190;
        case 0x1db194u: goto label_1db194;
        case 0x1db198u: goto label_1db198;
        case 0x1db19cu: goto label_1db19c;
        case 0x1db1a0u: goto label_1db1a0;
        case 0x1db1a4u: goto label_1db1a4;
        case 0x1db1a8u: goto label_1db1a8;
        case 0x1db1acu: goto label_1db1ac;
        case 0x1db1b0u: goto label_1db1b0;
        case 0x1db1b4u: goto label_1db1b4;
        case 0x1db1b8u: goto label_1db1b8;
        case 0x1db1bcu: goto label_1db1bc;
        case 0x1db1c0u: goto label_1db1c0;
        case 0x1db1c4u: goto label_1db1c4;
        case 0x1db1c8u: goto label_1db1c8;
        case 0x1db1ccu: goto label_1db1cc;
        case 0x1db1d0u: goto label_1db1d0;
        case 0x1db1d4u: goto label_1db1d4;
        case 0x1db1d8u: goto label_1db1d8;
        case 0x1db1dcu: goto label_1db1dc;
        case 0x1db1e0u: goto label_1db1e0;
        case 0x1db1e4u: goto label_1db1e4;
        case 0x1db1e8u: goto label_1db1e8;
        case 0x1db1ecu: goto label_1db1ec;
        case 0x1db1f0u: goto label_1db1f0;
        case 0x1db1f4u: goto label_1db1f4;
        case 0x1db1f8u: goto label_1db1f8;
        case 0x1db1fcu: goto label_1db1fc;
        case 0x1db200u: goto label_1db200;
        case 0x1db204u: goto label_1db204;
        case 0x1db208u: goto label_1db208;
        case 0x1db20cu: goto label_1db20c;
        case 0x1db210u: goto label_1db210;
        case 0x1db214u: goto label_1db214;
        case 0x1db218u: goto label_1db218;
        case 0x1db21cu: goto label_1db21c;
        case 0x1db220u: goto label_1db220;
        case 0x1db224u: goto label_1db224;
        case 0x1db228u: goto label_1db228;
        case 0x1db22cu: goto label_1db22c;
        case 0x1db230u: goto label_1db230;
        case 0x1db234u: goto label_1db234;
        case 0x1db238u: goto label_1db238;
        case 0x1db23cu: goto label_1db23c;
        case 0x1db240u: goto label_1db240;
        case 0x1db244u: goto label_1db244;
        case 0x1db248u: goto label_1db248;
        case 0x1db24cu: goto label_1db24c;
        case 0x1db250u: goto label_1db250;
        case 0x1db254u: goto label_1db254;
        case 0x1db258u: goto label_1db258;
        case 0x1db25cu: goto label_1db25c;
        case 0x1db260u: goto label_1db260;
        case 0x1db264u: goto label_1db264;
        case 0x1db268u: goto label_1db268;
        case 0x1db26cu: goto label_1db26c;
        case 0x1db270u: goto label_1db270;
        case 0x1db274u: goto label_1db274;
        case 0x1db278u: goto label_1db278;
        case 0x1db27cu: goto label_1db27c;
        case 0x1db280u: goto label_1db280;
        case 0x1db284u: goto label_1db284;
        case 0x1db288u: goto label_1db288;
        case 0x1db28cu: goto label_1db28c;
        case 0x1db290u: goto label_1db290;
        case 0x1db294u: goto label_1db294;
        case 0x1db298u: goto label_1db298;
        case 0x1db29cu: goto label_1db29c;
        case 0x1db2a0u: goto label_1db2a0;
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2a8u: goto label_1db2a8;
        case 0x1db2acu: goto label_1db2ac;
        case 0x1db2b0u: goto label_1db2b0;
        case 0x1db2b4u: goto label_1db2b4;
        case 0x1db2b8u: goto label_1db2b8;
        case 0x1db2bcu: goto label_1db2bc;
        case 0x1db2c0u: goto label_1db2c0;
        case 0x1db2c4u: goto label_1db2c4;
        case 0x1db2c8u: goto label_1db2c8;
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2d0u: goto label_1db2d0;
        case 0x1db2d4u: goto label_1db2d4;
        case 0x1db2d8u: goto label_1db2d8;
        case 0x1db2dcu: goto label_1db2dc;
        case 0x1db2e0u: goto label_1db2e0;
        case 0x1db2e4u: goto label_1db2e4;
        case 0x1db2e8u: goto label_1db2e8;
        case 0x1db2ecu: goto label_1db2ec;
        case 0x1db2f0u: goto label_1db2f0;
        case 0x1db2f4u: goto label_1db2f4;
        case 0x1db2f8u: goto label_1db2f8;
        case 0x1db2fcu: goto label_1db2fc;
        case 0x1db300u: goto label_1db300;
        case 0x1db304u: goto label_1db304;
        case 0x1db308u: goto label_1db308;
        case 0x1db30cu: goto label_1db30c;
        case 0x1db310u: goto label_1db310;
        case 0x1db314u: goto label_1db314;
        case 0x1db318u: goto label_1db318;
        case 0x1db31cu: goto label_1db31c;
        case 0x1db320u: goto label_1db320;
        case 0x1db324u: goto label_1db324;
        case 0x1db328u: goto label_1db328;
        case 0x1db32cu: goto label_1db32c;
        case 0x1db330u: goto label_1db330;
        case 0x1db334u: goto label_1db334;
        case 0x1db338u: goto label_1db338;
        case 0x1db33cu: goto label_1db33c;
        case 0x1db340u: goto label_1db340;
        case 0x1db344u: goto label_1db344;
        case 0x1db348u: goto label_1db348;
        case 0x1db34cu: goto label_1db34c;
        case 0x1db350u: goto label_1db350;
        case 0x1db354u: goto label_1db354;
        case 0x1db358u: goto label_1db358;
        case 0x1db35cu: goto label_1db35c;
        case 0x1db360u: goto label_1db360;
        case 0x1db364u: goto label_1db364;
        case 0x1db368u: goto label_1db368;
        case 0x1db36cu: goto label_1db36c;
        case 0x1db370u: goto label_1db370;
        case 0x1db374u: goto label_1db374;
        case 0x1db378u: goto label_1db378;
        case 0x1db37cu: goto label_1db37c;
        case 0x1db380u: goto label_1db380;
        case 0x1db384u: goto label_1db384;
        case 0x1db388u: goto label_1db388;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db390u: goto label_1db390;
        case 0x1db394u: goto label_1db394;
        case 0x1db398u: goto label_1db398;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3a0u: goto label_1db3a0;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3a8u: goto label_1db3a8;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3b0u: goto label_1db3b0;
        case 0x1db3b4u: goto label_1db3b4;
        case 0x1db3b8u: goto label_1db3b8;
        case 0x1db3bcu: goto label_1db3bc;
        case 0x1db3c0u: goto label_1db3c0;
        case 0x1db3c4u: goto label_1db3c4;
        case 0x1db3c8u: goto label_1db3c8;
        case 0x1db3ccu: goto label_1db3cc;
        case 0x1db3d0u: goto label_1db3d0;
        case 0x1db3d4u: goto label_1db3d4;
        case 0x1db3d8u: goto label_1db3d8;
        case 0x1db3dcu: goto label_1db3dc;
        case 0x1db3e0u: goto label_1db3e0;
        case 0x1db3e4u: goto label_1db3e4;
        case 0x1db3e8u: goto label_1db3e8;
        case 0x1db3ecu: goto label_1db3ec;
        case 0x1db3f0u: goto label_1db3f0;
        case 0x1db3f4u: goto label_1db3f4;
        case 0x1db3f8u: goto label_1db3f8;
        case 0x1db3fcu: goto label_1db3fc;
        case 0x1db400u: goto label_1db400;
        case 0x1db404u: goto label_1db404;
        case 0x1db408u: goto label_1db408;
        case 0x1db40cu: goto label_1db40c;
        case 0x1db410u: goto label_1db410;
        case 0x1db414u: goto label_1db414;
        case 0x1db418u: goto label_1db418;
        case 0x1db41cu: goto label_1db41c;
        case 0x1db420u: goto label_1db420;
        case 0x1db424u: goto label_1db424;
        case 0x1db428u: goto label_1db428;
        case 0x1db42cu: goto label_1db42c;
        case 0x1db430u: goto label_1db430;
        case 0x1db434u: goto label_1db434;
        case 0x1db438u: goto label_1db438;
        case 0x1db43cu: goto label_1db43c;
        case 0x1db440u: goto label_1db440;
        case 0x1db444u: goto label_1db444;
        case 0x1db448u: goto label_1db448;
        case 0x1db44cu: goto label_1db44c;
        case 0x1db450u: goto label_1db450;
        case 0x1db454u: goto label_1db454;
        case 0x1db458u: goto label_1db458;
        case 0x1db45cu: goto label_1db45c;
        case 0x1db460u: goto label_1db460;
        case 0x1db464u: goto label_1db464;
        case 0x1db468u: goto label_1db468;
        case 0x1db46cu: goto label_1db46c;
        case 0x1db470u: goto label_1db470;
        case 0x1db474u: goto label_1db474;
        case 0x1db478u: goto label_1db478;
        case 0x1db47cu: goto label_1db47c;
        case 0x1db480u: goto label_1db480;
        case 0x1db484u: goto label_1db484;
        case 0x1db488u: goto label_1db488;
        case 0x1db48cu: goto label_1db48c;
        case 0x1db490u: goto label_1db490;
        case 0x1db494u: goto label_1db494;
        case 0x1db498u: goto label_1db498;
        case 0x1db49cu: goto label_1db49c;
        case 0x1db4a0u: goto label_1db4a0;
        case 0x1db4a4u: goto label_1db4a4;
        case 0x1db4a8u: goto label_1db4a8;
        case 0x1db4acu: goto label_1db4ac;
        case 0x1db4b0u: goto label_1db4b0;
        case 0x1db4b4u: goto label_1db4b4;
        case 0x1db4b8u: goto label_1db4b8;
        case 0x1db4bcu: goto label_1db4bc;
        case 0x1db4c0u: goto label_1db4c0;
        case 0x1db4c4u: goto label_1db4c4;
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4ccu: goto label_1db4cc;
        case 0x1db4d0u: goto label_1db4d0;
        case 0x1db4d4u: goto label_1db4d4;
        case 0x1db4d8u: goto label_1db4d8;
        case 0x1db4dcu: goto label_1db4dc;
        case 0x1db4e0u: goto label_1db4e0;
        case 0x1db4e4u: goto label_1db4e4;
        case 0x1db4e8u: goto label_1db4e8;
        case 0x1db4ecu: goto label_1db4ec;
        case 0x1db4f0u: goto label_1db4f0;
        case 0x1db4f4u: goto label_1db4f4;
        case 0x1db4f8u: goto label_1db4f8;
        case 0x1db4fcu: goto label_1db4fc;
        case 0x1db500u: goto label_1db500;
        case 0x1db504u: goto label_1db504;
        case 0x1db508u: goto label_1db508;
        case 0x1db50cu: goto label_1db50c;
        case 0x1db510u: goto label_1db510;
        case 0x1db514u: goto label_1db514;
        case 0x1db518u: goto label_1db518;
        case 0x1db51cu: goto label_1db51c;
        case 0x1db520u: goto label_1db520;
        case 0x1db524u: goto label_1db524;
        case 0x1db528u: goto label_1db528;
        case 0x1db52cu: goto label_1db52c;
        case 0x1db530u: goto label_1db530;
        case 0x1db534u: goto label_1db534;
        case 0x1db538u: goto label_1db538;
        case 0x1db53cu: goto label_1db53c;
        case 0x1db540u: goto label_1db540;
        case 0x1db544u: goto label_1db544;
        case 0x1db548u: goto label_1db548;
        case 0x1db54cu: goto label_1db54c;
        case 0x1db550u: goto label_1db550;
        case 0x1db554u: goto label_1db554;
        case 0x1db558u: goto label_1db558;
        case 0x1db55cu: goto label_1db55c;
        case 0x1db560u: goto label_1db560;
        case 0x1db564u: goto label_1db564;
        case 0x1db568u: goto label_1db568;
        case 0x1db56cu: goto label_1db56c;
        case 0x1db570u: goto label_1db570;
        case 0x1db574u: goto label_1db574;
        case 0x1db578u: goto label_1db578;
        case 0x1db57cu: goto label_1db57c;
        case 0x1db580u: goto label_1db580;
        case 0x1db584u: goto label_1db584;
        case 0x1db588u: goto label_1db588;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db590u: goto label_1db590;
        case 0x1db594u: goto label_1db594;
        case 0x1db598u: goto label_1db598;
        case 0x1db59cu: goto label_1db59c;
        case 0x1db5a0u: goto label_1db5a0;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5a8u: goto label_1db5a8;
        case 0x1db5acu: goto label_1db5ac;
        case 0x1db5b0u: goto label_1db5b0;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5c0u: goto label_1db5c0;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5c8u: goto label_1db5c8;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db5d0u: goto label_1db5d0;
        case 0x1db5d4u: goto label_1db5d4;
        case 0x1db5d8u: goto label_1db5d8;
        case 0x1db5dcu: goto label_1db5dc;
        case 0x1db5e0u: goto label_1db5e0;
        case 0x1db5e4u: goto label_1db5e4;
        case 0x1db5e8u: goto label_1db5e8;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db5f0u: goto label_1db5f0;
        case 0x1db5f4u: goto label_1db5f4;
        case 0x1db5f8u: goto label_1db5f8;
        case 0x1db5fcu: goto label_1db5fc;
        case 0x1db600u: goto label_1db600;
        case 0x1db604u: goto label_1db604;
        case 0x1db608u: goto label_1db608;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db610u: goto label_1db610;
        case 0x1db614u: goto label_1db614;
        case 0x1db618u: goto label_1db618;
        case 0x1db61cu: goto label_1db61c;
        case 0x1db620u: goto label_1db620;
        case 0x1db624u: goto label_1db624;
        case 0x1db628u: goto label_1db628;
        case 0x1db62cu: goto label_1db62c;
        case 0x1db630u: goto label_1db630;
        case 0x1db634u: goto label_1db634;
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6b4u: goto label_1db6b4;
        case 0x1db6b8u: goto label_1db6b8;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6c0u: goto label_1db6c0;
        case 0x1db6c4u: goto label_1db6c4;
        case 0x1db6c8u: goto label_1db6c8;
        case 0x1db6ccu: goto label_1db6cc;
        case 0x1db6d0u: goto label_1db6d0;
        case 0x1db6d4u: goto label_1db6d4;
        case 0x1db6d8u: goto label_1db6d8;
        case 0x1db6dcu: goto label_1db6dc;
        case 0x1db6e0u: goto label_1db6e0;
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db6e8u: goto label_1db6e8;
        case 0x1db6ecu: goto label_1db6ec;
        case 0x1db6f0u: goto label_1db6f0;
        case 0x1db6f4u: goto label_1db6f4;
        case 0x1db6f8u: goto label_1db6f8;
        case 0x1db6fcu: goto label_1db6fc;
        case 0x1db700u: goto label_1db700;
        case 0x1db704u: goto label_1db704;
        case 0x1db708u: goto label_1db708;
        case 0x1db70cu: goto label_1db70c;
        case 0x1db710u: goto label_1db710;
        case 0x1db714u: goto label_1db714;
        case 0x1db718u: goto label_1db718;
        case 0x1db71cu: goto label_1db71c;
        case 0x1db720u: goto label_1db720;
        case 0x1db724u: goto label_1db724;
        case 0x1db728u: goto label_1db728;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db730u: goto label_1db730;
        case 0x1db734u: goto label_1db734;
        case 0x1db738u: goto label_1db738;
        case 0x1db73cu: goto label_1db73c;
        case 0x1db740u: goto label_1db740;
        case 0x1db744u: goto label_1db744;
        case 0x1db748u: goto label_1db748;
        case 0x1db74cu: goto label_1db74c;
        case 0x1db750u: goto label_1db750;
        case 0x1db754u: goto label_1db754;
        case 0x1db758u: goto label_1db758;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db760u: goto label_1db760;
        case 0x1db764u: goto label_1db764;
        case 0x1db768u: goto label_1db768;
        case 0x1db76cu: goto label_1db76c;
        case 0x1db770u: goto label_1db770;
        case 0x1db774u: goto label_1db774;
        case 0x1db778u: goto label_1db778;
        case 0x1db77cu: goto label_1db77c;
        case 0x1db780u: goto label_1db780;
        case 0x1db784u: goto label_1db784;
        case 0x1db788u: goto label_1db788;
        case 0x1db78cu: goto label_1db78c;
        case 0x1db790u: goto label_1db790;
        case 0x1db794u: goto label_1db794;
        case 0x1db798u: goto label_1db798;
        case 0x1db79cu: goto label_1db79c;
        case 0x1db7a0u: goto label_1db7a0;
        case 0x1db7a4u: goto label_1db7a4;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db7acu: goto label_1db7ac;
        case 0x1db7b0u: goto label_1db7b0;
        case 0x1db7b4u: goto label_1db7b4;
        case 0x1db7b8u: goto label_1db7b8;
        case 0x1db7bcu: goto label_1db7bc;
        case 0x1db7c0u: goto label_1db7c0;
        case 0x1db7c4u: goto label_1db7c4;
        case 0x1db7c8u: goto label_1db7c8;
        case 0x1db7ccu: goto label_1db7cc;
        case 0x1db7d0u: goto label_1db7d0;
        case 0x1db7d4u: goto label_1db7d4;
        case 0x1db7d8u: goto label_1db7d8;
        case 0x1db7dcu: goto label_1db7dc;
        default: return;
    }

label_1db010:
    // 0x1db010: 0xc077e84  jal         func_1DFA10
label_1db014:
    if (ctx->pc == 0x1DB014u) {
        ctx->pc = 0x1DB018u;
        goto label_1db018;
    }
    ctx->pc = 0x1DB010u;
    SET_GPR_U32(ctx, 31, 0x1DB018u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DB018u;
label_1db018:
    // 0x1db018: 0xc077d90  jal         func_1DF640
label_1db01c:
    if (ctx->pc == 0x1DB01Cu) {
        ctx->pc = 0x1DB020u;
        goto label_1db020;
    }
    ctx->pc = 0x1DB018u;
    SET_GPR_U32(ctx, 31, 0x1DB020u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DB020u;
label_1db020:
    // 0x1db020: 0xc077ab4  jal         func_1DEAD0
label_1db024:
    if (ctx->pc == 0x1DB024u) {
        ctx->pc = 0x1DB028u;
        goto label_1db028;
    }
    ctx->pc = 0x1DB020u;
    SET_GPR_U32(ctx, 31, 0x1DB028u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DB028u;
label_1db028:
    // 0x1db028: 0xc077880  jal         func_1DE200
label_1db02c:
    if (ctx->pc == 0x1DB02Cu) {
        ctx->pc = 0x1DB030u;
        goto label_1db030;
    }
    ctx->pc = 0x1DB028u;
    SET_GPR_U32(ctx, 31, 0x1DB030u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DB030u;
label_1db030:
    // 0x1db030: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1db034:
    // 0x1db034: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1db038:
    if (ctx->pc == 0x1DB038u) {
        ctx->pc = 0x1DB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB034u;
        // 0x1db038: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB03Cu;
        goto label_1db03c;
    }
    ctx->pc = 0x1DB034u;
    {
        const bool branch_taken_0x1db034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB034u;
        // 0x1db038: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db034) {
            ctx->pc = 0x1DB108u;
            goto label_1db108;
        }
    }
    ctx->pc = 0x1DB03Cu;
label_1db03c:
    // 0x1db03c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db040:
    // 0x1db040: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db044:
    // 0x1db044: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db048:
    // 0x1db048: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1db048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1db04c:
    // 0x1db04c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1db04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1db050:
    // 0x1db050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db054:
    // 0x1db054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db058:
    // 0x1db058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db05c:
    // 0x1db05c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db060:
    // 0x1db060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db064:
    // 0x1db064: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db068:
    // 0x1db068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db06c:
    // 0x1db06c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db070:
    // 0x1db070: 0xc066c72  jal         func_19B1C8
label_1db074:
    if (ctx->pc == 0x1DB074u) {
        ctx->pc = 0x1DB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB070u;
        // 0x1db074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB078u;
        goto label_1db078;
    }
    ctx->pc = 0x1DB070u;
    SET_GPR_U32(ctx, 31, 0x1DB078u);
    ctx->pc = 0x1DB074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB070u;
    // 0x1db074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB078u;
label_1db078:
    // 0x1db078: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1db07c:
    // 0x1db07c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db080:
    // 0x1db080: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db084:
    // 0x1db084: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db088:
    // 0x1db088: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1db088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1db08c:
    // 0x1db08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db090:
    // 0x1db090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db094:
    // 0x1db094: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db098:
    // 0x1db098: 0xc070e2c  jal         func_1C38B0
label_1db09c:
    if (ctx->pc == 0x1DB09Cu) {
        ctx->pc = 0x1DB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB098u;
        // 0x1db09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0A0u;
        goto label_1db0a0;
    }
    ctx->pc = 0x1DB098u;
    SET_GPR_U32(ctx, 31, 0x1DB0A0u);
    ctx->pc = 0x1DB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB098u;
    // 0x1db09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB0A0u;
label_1db0a0:
    // 0x1db0a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db0a4:
    // 0x1db0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db0a8:
    // 0x1db0a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db0ac:
    // 0x1db0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db0b0:
    // 0x1db0b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db0b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db0b4:
    // 0x1db0b4: 0xc066c72  jal         func_19B1C8
label_1db0b8:
    if (ctx->pc == 0x1DB0B8u) {
        ctx->pc = 0x1DB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0B4u;
        // 0x1db0b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0BCu;
        goto label_1db0bc;
    }
    ctx->pc = 0x1DB0B4u;
    SET_GPR_U32(ctx, 31, 0x1DB0BCu);
    ctx->pc = 0x1DB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB0B4u;
    // 0x1db0b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB0BCu;
label_1db0bc:
    // 0x1db0bc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1db0c0:
    // 0x1db0c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1db0c4:
    if (ctx->pc == 0x1DB0C4u) {
        ctx->pc = 0x1DB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0C0u;
        // 0x1db0c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0C8u;
        goto label_1db0c8;
    }
    ctx->pc = 0x1DB0C0u;
    {
        const bool branch_taken_0x1db0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0C0u;
        // 0x1db0c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0c0) {
            ctx->pc = 0x1DB108u;
            goto label_1db108;
        }
    }
    ctx->pc = 0x1DB0C8u;
label_1db0c8:
    // 0x1db0c8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db0cc:
    // 0x1db0cc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db0d0:
    // 0x1db0d0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db0d4:
    // 0x1db0d4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1db0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1db0d8:
    // 0x1db0d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db0dc:
    // 0x1db0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db0e0:
    // 0x1db0e0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1db0e4:
    // 0x1db0e4: 0xc070e2c  jal         func_1C38B0
label_1db0e8:
    if (ctx->pc == 0x1DB0E8u) {
        ctx->pc = 0x1DB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0E4u;
        // 0x1db0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0ECu;
        goto label_1db0ec;
    }
    ctx->pc = 0x1DB0E4u;
    SET_GPR_U32(ctx, 31, 0x1DB0ECu);
    ctx->pc = 0x1DB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB0E4u;
    // 0x1db0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB0ECu;
label_1db0ec:
    // 0x1db0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db0f0:
    // 0x1db0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db0f4:
    // 0x1db0f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db0f8:
    // 0x1db0f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db0fc:
    // 0x1db0fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db0fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db100:
    // 0x1db100: 0xc066c72  jal         func_19B1C8
label_1db104:
    if (ctx->pc == 0x1DB104u) {
        ctx->pc = 0x1DB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB100u;
        // 0x1db104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB108u;
        goto label_1db108;
    }
    ctx->pc = 0x1DB100u;
    SET_GPR_U32(ctx, 31, 0x1DB108u);
    ctx->pc = 0x1DB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB100u;
    // 0x1db104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB108u;
label_1db108:
    // 0x1db108: 0xc07a86c  jal         func_1EA1B0
label_1db10c:
    if (ctx->pc == 0x1DB10Cu) {
        ctx->pc = 0x1DB110u;
        goto label_1db110;
    }
    ctx->pc = 0x1DB108u;
    SET_GPR_U32(ctx, 31, 0x1DB110u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DB110u;
label_1db110:
    // 0x1db110: 0xc04e120  jal         func_138480
label_1db114:
    if (ctx->pc == 0x1DB114u) {
        ctx->pc = 0x1DB118u;
        goto label_1db118;
    }
    ctx->pc = 0x1DB110u;
    SET_GPR_U32(ctx, 31, 0x1DB118u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DB110u, 0x1DB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB118u;
label_1db118:
    // 0x1db118: 0xc05b578  jal         func_16D5E0
label_1db11c:
    if (ctx->pc == 0x1DB11Cu) {
        ctx->pc = 0x1DB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB118u;
        // 0x1db11c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB120u;
        goto label_1db120;
    }
    ctx->pc = 0x1DB118u;
    SET_GPR_U32(ctx, 31, 0x1DB120u);
    ctx->pc = 0x1DB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB118u;
    // 0x1db11c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DB118u, 0x1DB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB120u;
label_1db120:
    // 0x1db120: 0xc060258  jal         func_180960
label_1db124:
    if (ctx->pc == 0x1DB124u) {
        ctx->pc = 0x1DB128u;
        goto label_1db128;
    }
    ctx->pc = 0x1DB120u;
    SET_GPR_U32(ctx, 31, 0x1DB128u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DB128u;
label_1db128:
    // 0x1db128: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1db128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1db12c:
    // 0x1db12c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db130:
    // 0x1db130: 0x1062ff54  beq         $v1, $v0, . + 4 + (-0xAC << 2)
label_1db134:
    if (ctx->pc == 0x1DB134u) {
        ctx->pc = 0x1DB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB130u;
        // 0x1db134: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB138u;
        goto label_1db138;
    }
    ctx->pc = 0x1DB130u;
    {
        const bool branch_taken_0x1db130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB130u;
        // 0x1db134: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db130) {
            ctx->pc = 0x1DAE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dae84; return; }
        }
    }
    ctx->pc = 0x1DB138u;
label_1db138:
    // 0x1db138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1db138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1db13c:
    // 0x1db13c: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1db140:
    if (ctx->pc == 0x1DB140u) {
        ctx->pc = 0x1DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB13Cu;
        // 0x1db140: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB144u;
        goto label_1db144;
    }
    ctx->pc = 0x1DB13Cu;
    {
        const bool branch_taken_0x1db13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB13Cu;
        // 0x1db140: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db13c) {
            ctx->pc = 0x1DB448u;
            goto label_1db448;
        }
    }
    ctx->pc = 0x1DB144u;
label_1db144:
    // 0x1db144: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1db144u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1db148:
    // 0x1db148: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1db148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1db14c:
    // 0x1db14c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1db150:
    if (ctx->pc == 0x1DB150u) {
        ctx->pc = 0x1DB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB14Cu;
        // 0x1db150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB154u;
        goto label_1db154;
    }
    ctx->pc = 0x1DB14Cu;
    {
        const bool branch_taken_0x1db14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB14Cu;
        // 0x1db150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db14c) {
            ctx->pc = 0x1DB170u;
            goto label_1db170;
        }
    }
    ctx->pc = 0x1DB154u;
label_1db154:
    // 0x1db154: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
label_1db158:
    if (ctx->pc == 0x1DB158u) {
        ctx->pc = 0x1DB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB154u;
        // 0x1db158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB15Cu;
        goto label_1db15c;
    }
    ctx->pc = 0x1DB154u;
    {
        const bool branch_taken_0x1db154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB154u;
        // 0x1db158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db154) {
            ctx->pc = 0x1DB198u;
            goto label_1db198;
        }
    }
    ctx->pc = 0x1DB15Cu;
label_1db15c:
    // 0x1db15c: 0xc05b420  jal         func_16D080
label_1db160:
    if (ctx->pc == 0x1DB160u) {
        ctx->pc = 0x1DB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB15Cu;
        // 0x1db160: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB164u;
        goto label_1db164;
    }
    ctx->pc = 0x1DB15Cu;
    SET_GPR_U32(ctx, 31, 0x1DB164u);
    ctx->pc = 0x1DB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB15Cu;
    // 0x1db160: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DB15Cu, 0x1DB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB164u;
label_1db164:
    // 0x1db164: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1db164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1db168:
    // 0x1db168: 0x1000000b  b           . + 4 + (0xB << 2)
label_1db16c:
    if (ctx->pc == 0x1DB16Cu) {
        ctx->pc = 0x1DB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB168u;
        // 0x1db16c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB170u;
        goto label_1db170;
    }
    ctx->pc = 0x1DB168u;
    {
        const bool branch_taken_0x1db168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB168u;
        // 0x1db16c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db168) {
            ctx->pc = 0x1DB198u;
            goto label_1db198;
        }
    }
    ctx->pc = 0x1DB170u;
label_1db170:
    // 0x1db170: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1db170u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1db174:
    // 0x1db174: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1db174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1db178:
    // 0x1db178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1db17c:
    if (ctx->pc == 0x1DB17Cu) {
        ctx->pc = 0x1DB180u;
        goto label_1db180;
    }
    ctx->pc = 0x1DB178u;
    {
        const bool branch_taken_0x1db178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db178) {
            ctx->pc = 0x1DB198u;
            goto label_1db198;
        }
    }
    ctx->pc = 0x1DB180u;
label_1db180:
    // 0x1db180: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1db184:
    if (ctx->pc == 0x1DB184u) {
        ctx->pc = 0x1DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB180u;
        // 0x1db184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB188u;
        goto label_1db188;
    }
    ctx->pc = 0x1DB180u;
    {
        const bool branch_taken_0x1db180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB180u;
        // 0x1db184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db180) {
            ctx->pc = 0x1DB198u;
            goto label_1db198;
        }
    }
    ctx->pc = 0x1DB188u;
label_1db188:
    // 0x1db188: 0xc05b420  jal         func_16D080
label_1db18c:
    if (ctx->pc == 0x1DB18Cu) {
        ctx->pc = 0x1DB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB188u;
        // 0x1db18c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB190u;
        goto label_1db190;
    }
    ctx->pc = 0x1DB188u;
    SET_GPR_U32(ctx, 31, 0x1DB190u);
    ctx->pc = 0x1DB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB188u;
    // 0x1db18c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DB188u, 0x1DB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB190u;
label_1db190:
    // 0x1db190: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db194:
    // 0x1db194: 0xaf908c98  sw          $s0, -0x7368($gp)
    ctx->pc = 0x1db194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 16));
label_1db198:
    // 0x1db198: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1db198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1db19c:
    // 0x1db19c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1db1a0:
    if (ctx->pc == 0x1DB1A0u) {
        ctx->pc = 0x1DB1A4u;
        goto label_1db1a4;
    }
    ctx->pc = 0x1DB19Cu;
    {
        const bool branch_taken_0x1db19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db19c) {
            ctx->pc = 0x1DB1ACu;
            goto label_1db1ac;
        }
    }
    ctx->pc = 0x1DB1A4u;
label_1db1a4:
    // 0x1db1a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1db1a8:
    if (ctx->pc == 0x1DB1A8u) {
        ctx->pc = 0x1DB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1A4u;
        // 0x1db1a8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB1ACu;
        goto label_1db1ac;
    }
    ctx->pc = 0x1DB1A4u;
    {
        const bool branch_taken_0x1db1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1A4u;
        // 0x1db1a8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1a4) {
            ctx->pc = 0x1DB1BCu;
            goto label_1db1bc;
        }
    }
    ctx->pc = 0x1DB1ACu;
label_1db1ac:
    // 0x1db1ac: 0x0  nop
    ctx->pc = 0x1db1acu;
    // NOP
label_1db1b0:
    // 0x1db1b0: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1db1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1db1b4:
    // 0x1db1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db1b8:
    // 0x1db1b8: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1db1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1db1bc:
    // 0x1db1bc: 0x0  nop
    ctx->pc = 0x1db1bcu;
    // NOP
label_1db1c0:
    // 0x1db1c0: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1db1c4:
    // 0x1db1c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1db1c8:
    if (ctx->pc == 0x1DB1C8u) {
        ctx->pc = 0x1DB1CCu;
        goto label_1db1cc;
    }
    ctx->pc = 0x1DB1C4u;
    {
        const bool branch_taken_0x1db1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1c4) {
            ctx->pc = 0x1DB1D8u;
            goto label_1db1d8;
        }
    }
    ctx->pc = 0x1DB1CCu;
label_1db1cc:
    // 0x1db1cc: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1db1d0:
    // 0x1db1d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db1d4:
    // 0x1db1d4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1db1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1db1d8:
    // 0x1db1d8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1db1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1db1dc:
    // 0x1db1dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1db1e0:
    if (ctx->pc == 0x1DB1E0u) {
        ctx->pc = 0x1DB1E4u;
        goto label_1db1e4;
    }
    ctx->pc = 0x1DB1DCu;
    {
        const bool branch_taken_0x1db1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1dc) {
            ctx->pc = 0x1DB240u;
            goto label_1db240;
        }
    }
    ctx->pc = 0x1DB1E4u;
label_1db1e4:
    // 0x1db1e4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1db1e8:
    // 0x1db1e8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1db1ec:
    // 0x1db1ec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1db1f0:
    if (ctx->pc == 0x1DB1F0u) {
        ctx->pc = 0x1DB1F4u;
        goto label_1db1f4;
    }
    ctx->pc = 0x1DB1ECu;
    {
        const bool branch_taken_0x1db1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1ec) {
            ctx->pc = 0x1DB214u;
            goto label_1db214;
        }
    }
    ctx->pc = 0x1DB1F4u;
label_1db1f4:
    // 0x1db1f4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1db1f8:
    // 0x1db1f8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1db1f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1db1fc:
    // 0x1db1fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1db200:
    if (ctx->pc == 0x1DB200u) {
        ctx->pc = 0x1DB204u;
        goto label_1db204;
    }
    ctx->pc = 0x1DB1FCu;
    {
        const bool branch_taken_0x1db1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1fc) {
            ctx->pc = 0x1DB20Cu;
            goto label_1db20c;
        }
    }
    ctx->pc = 0x1DB204u;
label_1db204:
    // 0x1db204: 0x10000003  b           . + 4 + (0x3 << 2)
label_1db208:
    if (ctx->pc == 0x1DB208u) {
        ctx->pc = 0x1DB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB204u;
        // 0x1db208: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB20Cu;
        goto label_1db20c;
    }
    ctx->pc = 0x1DB204u;
    {
        const bool branch_taken_0x1db204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB204u;
        // 0x1db208: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db204) {
            ctx->pc = 0x1DB214u;
            goto label_1db214;
        }
    }
    ctx->pc = 0x1DB20Cu;
label_1db20c:
    // 0x1db20c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1db20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1db210:
    // 0x1db210: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1db210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1db214:
    // 0x1db214: 0x0  nop
    ctx->pc = 0x1db214u;
    // NOP
label_1db218:
    // 0x1db218: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1db218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1db21c:
    // 0x1db21c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1db220:
    if (ctx->pc == 0x1DB220u) {
        ctx->pc = 0x1DB224u;
        goto label_1db224;
    }
    ctx->pc = 0x1DB21Cu;
    {
        const bool branch_taken_0x1db21c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1db21c) {
            ctx->pc = 0x1DB240u;
            goto label_1db240;
        }
    }
    ctx->pc = 0x1DB224u;
label_1db224:
    // 0x1db224: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1db224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1db228:
    // 0x1db228: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1db228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1db22c:
    // 0x1db22c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1db22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1db230:
    // 0x1db230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1db234:
    if (ctx->pc == 0x1DB234u) {
        ctx->pc = 0x1DB238u;
        goto label_1db238;
    }
    ctx->pc = 0x1DB230u;
    {
        const bool branch_taken_0x1db230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db230) {
            ctx->pc = 0x1DB240u;
            goto label_1db240;
        }
    }
    ctx->pc = 0x1DB238u;
label_1db238:
    // 0x1db238: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1db23c:
    // 0x1db23c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1db23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1db240:
    // 0x1db240: 0xc077a7c  jal         func_1DE9F0
label_1db244:
    if (ctx->pc == 0x1DB244u) {
        ctx->pc = 0x1DB248u;
        goto label_1db248;
    }
    ctx->pc = 0x1DB240u;
    SET_GPR_U32(ctx, 31, 0x1DB248u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DB248u;
label_1db248:
    // 0x1db248: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1db248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1db24c:
    // 0x1db24c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1db250:
    // 0x1db250: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1db254:
    if (ctx->pc == 0x1DB254u) {
        ctx->pc = 0x1DB258u;
        goto label_1db258;
    }
    ctx->pc = 0x1DB250u;
    {
        const bool branch_taken_0x1db250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1db250) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB258u;
label_1db258:
    // 0x1db258: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db25c:
    // 0x1db25c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db260:
    // 0x1db260: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1db264:
    if (ctx->pc == 0x1DB264u) {
        ctx->pc = 0x1DB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB260u;
        // 0x1db264: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB268u;
        goto label_1db268;
    }
    ctx->pc = 0x1DB260u;
    {
        const bool branch_taken_0x1db260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB260u;
        // 0x1db264: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db260) {
            ctx->pc = 0x1DB284u;
            goto label_1db284;
        }
    }
    ctx->pc = 0x1DB268u;
label_1db268:
    // 0x1db268: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db26c:
    // 0x1db26c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1db26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1db270:
    // 0x1db270: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1db274:
    if (ctx->pc == 0x1DB274u) {
        ctx->pc = 0x1DB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB270u;
        // 0x1db274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB278u;
        goto label_1db278;
    }
    ctx->pc = 0x1DB270u;
    {
        const bool branch_taken_0x1db270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB270u;
        // 0x1db274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db270) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB278u;
label_1db278:
    // 0x1db278: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db27c:
    // 0x1db27c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1db280:
    if (ctx->pc == 0x1DB280u) {
        ctx->pc = 0x1DB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB27Cu;
        // 0x1db280: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB284u;
        goto label_1db284;
    }
    ctx->pc = 0x1DB27Cu;
    {
        const bool branch_taken_0x1db27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB27Cu;
        // 0x1db280: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db27c) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB284u;
label_1db284:
    // 0x1db284: 0x0  nop
    ctx->pc = 0x1db284u;
    // NOP
label_1db288:
    // 0x1db288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db28c:
    // 0x1db28c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1db290:
    if (ctx->pc == 0x1DB290u) {
        ctx->pc = 0x1DB294u;
        goto label_1db294;
    }
    ctx->pc = 0x1DB28Cu;
    {
        const bool branch_taken_0x1db28c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db28c) {
            ctx->pc = 0x1DB2B0u;
            goto label_1db2b0;
        }
    }
    ctx->pc = 0x1DB294u;
label_1db294:
    // 0x1db294: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db298:
    // 0x1db298: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1db298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1db29c:
    // 0x1db29c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1db2a0:
    if (ctx->pc == 0x1DB2A0u) {
        ctx->pc = 0x1DB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB29Cu;
        // 0x1db2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2A4u;
        goto label_1db2a4;
    }
    ctx->pc = 0x1DB29Cu;
    {
        const bool branch_taken_0x1db29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB29Cu;
        // 0x1db2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db29c) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB2A4u;
label_1db2a4:
    // 0x1db2a4: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db2a8:
    // 0x1db2a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1db2ac:
    if (ctx->pc == 0x1DB2ACu) {
        ctx->pc = 0x1DB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2A8u;
        // 0x1db2ac: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2B0u;
        goto label_1db2b0;
    }
    ctx->pc = 0x1DB2A8u;
    {
        const bool branch_taken_0x1db2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2A8u;
        // 0x1db2ac: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2a8) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB2B0u;
label_1db2b0:
    // 0x1db2b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db2b4:
    // 0x1db2b4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1db2b8:
    if (ctx->pc == 0x1DB2B8u) {
        ctx->pc = 0x1DB2BCu;
        goto label_1db2bc;
    }
    ctx->pc = 0x1DB2B4u;
    {
        const bool branch_taken_0x1db2b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db2b4) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB2BCu;
label_1db2bc:
    // 0x1db2bc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db2c0:
    // 0x1db2c0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1db2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1db2c4:
    // 0x1db2c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1db2c8:
    if (ctx->pc == 0x1DB2C8u) {
        ctx->pc = 0x1DB2CCu;
        goto label_1db2cc;
    }
    ctx->pc = 0x1DB2C4u;
    {
        const bool branch_taken_0x1db2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db2c4) {
            ctx->pc = 0x1DB2D4u;
            goto label_1db2d4;
        }
    }
    ctx->pc = 0x1DB2CCu;
label_1db2cc:
    // 0x1db2cc: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1db2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1db2d0:
    // 0x1db2d0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db2d4:
    // 0x1db2d4: 0x0  nop
    ctx->pc = 0x1db2d4u;
    // NOP
label_1db2d8:
    // 0x1db2d8: 0xc07a9d8  jal         func_1EA760
label_1db2dc:
    if (ctx->pc == 0x1DB2DCu) {
        ctx->pc = 0x1DB2E0u;
        goto label_1db2e0;
    }
    ctx->pc = 0x1DB2D8u;
    SET_GPR_U32(ctx, 31, 0x1DB2E0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DB2E0u;
label_1db2e0:
    // 0x1db2e0: 0xc04e168  jal         func_1385A0
label_1db2e4:
    if (ctx->pc == 0x1DB2E4u) {
        ctx->pc = 0x1DB2E8u;
        goto label_1db2e8;
    }
    ctx->pc = 0x1DB2E0u;
    SET_GPR_U32(ctx, 31, 0x1DB2E8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DB2E0u, 0x1DB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E8u;
label_1db2e8:
    // 0x1db2e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1db2ec:
    // 0x1db2ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db2f0:
    // 0x1db2f0: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1db2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1db2f4:
    // 0x1db2f4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db2f8:
    // 0x1db2f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1db2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1db2fc:
    // 0x1db2fc: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1db2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1db300:
    // 0x1db300: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1db304:
    // 0x1db304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db308:
    // 0x1db308: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db30c:
    // 0x1db30c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db310:
    // 0x1db310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db314:
    // 0x1db314: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1db314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db318:
    // 0x1db318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db31c:
    // 0x1db31c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db320:
    // 0x1db320: 0xc066c72  jal         func_19B1C8
label_1db324:
    if (ctx->pc == 0x1DB324u) {
        ctx->pc = 0x1DB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB320u;
        // 0x1db324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB328u;
        goto label_1db328;
    }
    ctx->pc = 0x1DB320u;
    SET_GPR_U32(ctx, 31, 0x1DB328u);
    ctx->pc = 0x1DB324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB320u;
    // 0x1db324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB328u;
label_1db328:
    // 0x1db328: 0xc077e84  jal         func_1DFA10
label_1db32c:
    if (ctx->pc == 0x1DB32Cu) {
        ctx->pc = 0x1DB330u;
        goto label_1db330;
    }
    ctx->pc = 0x1DB328u;
    SET_GPR_U32(ctx, 31, 0x1DB330u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DB330u;
label_1db330:
    // 0x1db330: 0xc077d90  jal         func_1DF640
label_1db334:
    if (ctx->pc == 0x1DB334u) {
        ctx->pc = 0x1DB338u;
        goto label_1db338;
    }
    ctx->pc = 0x1DB330u;
    SET_GPR_U32(ctx, 31, 0x1DB338u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DB338u;
label_1db338:
    // 0x1db338: 0xc077ab4  jal         func_1DEAD0
label_1db33c:
    if (ctx->pc == 0x1DB33Cu) {
        ctx->pc = 0x1DB340u;
        goto label_1db340;
    }
    ctx->pc = 0x1DB338u;
    SET_GPR_U32(ctx, 31, 0x1DB340u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DB340u;
label_1db340:
    // 0x1db340: 0xc077880  jal         func_1DE200
label_1db344:
    if (ctx->pc == 0x1DB344u) {
        ctx->pc = 0x1DB348u;
        goto label_1db348;
    }
    ctx->pc = 0x1DB340u;
    SET_GPR_U32(ctx, 31, 0x1DB348u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DB348u;
label_1db348:
    // 0x1db348: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1db348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1db34c:
    // 0x1db34c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1db350:
    if (ctx->pc == 0x1DB350u) {
        ctx->pc = 0x1DB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB34Cu;
        // 0x1db350: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB354u;
        goto label_1db354;
    }
    ctx->pc = 0x1DB34Cu;
    {
        const bool branch_taken_0x1db34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB34Cu;
        // 0x1db350: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db34c) {
            ctx->pc = 0x1DB420u;
            goto label_1db420;
        }
    }
    ctx->pc = 0x1DB354u;
label_1db354:
    // 0x1db354: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db358:
    // 0x1db358: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db35c:
    // 0x1db35c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db360:
    // 0x1db360: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1db360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1db364:
    // 0x1db364: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1db368:
    // 0x1db368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db36c:
    // 0x1db36c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db370:
    // 0x1db370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db374:
    // 0x1db374: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db378:
    // 0x1db378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db37c:
    // 0x1db37c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1db37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db380:
    // 0x1db380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db384:
    // 0x1db384: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db388:
    // 0x1db388: 0xc066c72  jal         func_19B1C8
label_1db38c:
    if (ctx->pc == 0x1DB38Cu) {
        ctx->pc = 0x1DB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB388u;
        // 0x1db38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB390u;
        goto label_1db390;
    }
    ctx->pc = 0x1DB388u;
    SET_GPR_U32(ctx, 31, 0x1DB390u);
    ctx->pc = 0x1DB38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB388u;
    // 0x1db38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB390u;
label_1db390:
    // 0x1db390: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1db394:
    // 0x1db394: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db398:
    // 0x1db398: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db39c:
    // 0x1db39c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db3a0:
    // 0x1db3a0: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1db3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1db3a4:
    // 0x1db3a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db3a8:
    // 0x1db3a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db3ac:
    // 0x1db3ac: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1db3acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db3b0:
    // 0x1db3b0: 0xc070e2c  jal         func_1C38B0
label_1db3b4:
    if (ctx->pc == 0x1DB3B4u) {
        ctx->pc = 0x1DB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3B0u;
        // 0x1db3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3B8u;
        goto label_1db3b8;
    }
    ctx->pc = 0x1DB3B0u;
    SET_GPR_U32(ctx, 31, 0x1DB3B8u);
    ctx->pc = 0x1DB3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3B0u;
    // 0x1db3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB3B8u;
label_1db3b8:
    // 0x1db3b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1db3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db3bc:
    // 0x1db3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db3c0:
    // 0x1db3c0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db3c4:
    // 0x1db3c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db3c8:
    // 0x1db3c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db3cc:
    // 0x1db3cc: 0xc066c72  jal         func_19B1C8
label_1db3d0:
    if (ctx->pc == 0x1DB3D0u) {
        ctx->pc = 0x1DB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3CCu;
        // 0x1db3d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3D4u;
        goto label_1db3d4;
    }
    ctx->pc = 0x1DB3CCu;
    SET_GPR_U32(ctx, 31, 0x1DB3D4u);
    ctx->pc = 0x1DB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3CCu;
    // 0x1db3d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB3D4u;
label_1db3d4:
    // 0x1db3d4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1db3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1db3d8:
    // 0x1db3d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1db3dc:
    if (ctx->pc == 0x1DB3DCu) {
        ctx->pc = 0x1DB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3D8u;
        // 0x1db3dc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3E0u;
        goto label_1db3e0;
    }
    ctx->pc = 0x1DB3D8u;
    {
        const bool branch_taken_0x1db3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3D8u;
        // 0x1db3dc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3d8) {
            ctx->pc = 0x1DB420u;
            goto label_1db420;
        }
    }
    ctx->pc = 0x1DB3E0u;
label_1db3e0:
    // 0x1db3e0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db3e4:
    // 0x1db3e4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db3e8:
    // 0x1db3e8: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db3ec:
    // 0x1db3ec: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1db3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1db3f0:
    // 0x1db3f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db3f4:
    // 0x1db3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db3f8:
    // 0x1db3f8: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1db3fc:
    // 0x1db3fc: 0xc070e2c  jal         func_1C38B0
label_1db400:
    if (ctx->pc == 0x1DB400u) {
        ctx->pc = 0x1DB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3FCu;
        // 0x1db400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB404u;
        goto label_1db404;
    }
    ctx->pc = 0x1DB3FCu;
    SET_GPR_U32(ctx, 31, 0x1DB404u);
    ctx->pc = 0x1DB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3FCu;
    // 0x1db400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB404u;
label_1db404:
    // 0x1db404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db408:
    // 0x1db408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1db408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db40c:
    // 0x1db40c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db410:
    // 0x1db410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db414:
    // 0x1db414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db418:
    // 0x1db418: 0xc066c72  jal         func_19B1C8
label_1db41c:
    if (ctx->pc == 0x1DB41Cu) {
        ctx->pc = 0x1DB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB418u;
        // 0x1db41c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB420u;
        goto label_1db420;
    }
    ctx->pc = 0x1DB418u;
    SET_GPR_U32(ctx, 31, 0x1DB420u);
    ctx->pc = 0x1DB41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB418u;
    // 0x1db41c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB420u;
label_1db420:
    // 0x1db420: 0xc07a86c  jal         func_1EA1B0
label_1db424:
    if (ctx->pc == 0x1DB424u) {
        ctx->pc = 0x1DB428u;
        goto label_1db428;
    }
    ctx->pc = 0x1DB420u;
    SET_GPR_U32(ctx, 31, 0x1DB428u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DB428u;
label_1db428:
    // 0x1db428: 0xc04e120  jal         func_138480
label_1db42c:
    if (ctx->pc == 0x1DB42Cu) {
        ctx->pc = 0x1DB430u;
        goto label_1db430;
    }
    ctx->pc = 0x1DB428u;
    SET_GPR_U32(ctx, 31, 0x1DB430u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DB428u, 0x1DB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB430u;
label_1db430:
    // 0x1db430: 0xc05b578  jal         func_16D5E0
label_1db434:
    if (ctx->pc == 0x1DB434u) {
        ctx->pc = 0x1DB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB430u;
        // 0x1db434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB438u;
        goto label_1db438;
    }
    ctx->pc = 0x1DB430u;
    SET_GPR_U32(ctx, 31, 0x1DB438u);
    ctx->pc = 0x1DB434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB430u;
    // 0x1db434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DB430u, 0x1DB438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB438u;
label_1db438:
    // 0x1db438: 0xc060258  jal         func_180960
label_1db43c:
    if (ctx->pc == 0x1DB43Cu) {
        ctx->pc = 0x1DB440u;
        goto label_1db440;
    }
    ctx->pc = 0x1DB438u;
    SET_GPR_U32(ctx, 31, 0x1DB440u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DB440u;
label_1db440:
    // 0x1db440: 0x1000fdc4  b           . + 4 + (-0x23C << 2)
label_1db444:
    if (ctx->pc == 0x1DB444u) {
        ctx->pc = 0x1DB448u;
        goto label_1db448;
    }
    ctx->pc = 0x1DB440u;
    {
        const bool branch_taken_0x1db440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db440) {
            ctx->pc = 0x1DAB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dab54; return; }
        }
    }
    ctx->pc = 0x1DB448u;
label_1db448:
    // 0x1db448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1db44c:
    // 0x1db44c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db450:
    // 0x1db450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db454:
    // 0x1db454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db458:
    // 0x1db458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db45c:
    // 0x1db45c: 0x3e00008  jr          $ra
label_1db460:
    if (ctx->pc == 0x1DB460u) {
        ctx->pc = 0x1DB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB45Cu;
        // 0x1db460: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB464u;
        goto label_1db464;
    }
    ctx->pc = 0x1DB45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB45Cu;
        // 0x1db460: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB464u;
label_1db464:
    // 0x1db464: 0x0  nop
    ctx->pc = 0x1db464u;
    // NOP
label_1db468:
    // 0x1db468: 0x0  nop
    ctx->pc = 0x1db468u;
    // NOP
label_1db46c:
    // 0x1db46c: 0x0  nop
    ctx->pc = 0x1db46cu;
    // NOP
label_1db470:
    // 0x1db470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1db470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1db474:
    // 0x1db474: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1db474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1db478:
    // 0x1db478: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1db47c:
    // 0x1db47c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1db480:
    // 0x1db480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db484:
    // 0x1db484: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db488:
    // 0x1db488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db48c:
    // 0x1db48c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db490:
    // 0x1db490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db494:
    // 0x1db494: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1db494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1db498:
    // 0x1db498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db49c:
    // 0x1db49c: 0xaf808ca0  sw          $zero, -0x7360($gp)
    ctx->pc = 0x1db49cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 0));
label_1db4a0:
    // 0x1db4a0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1db4a4:
    if (ctx->pc == 0x1DB4A4u) {
        ctx->pc = 0x1DB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4A0u;
        // 0x1db4a4: 0xaf808c9c  sw          $zero, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4A8u;
        goto label_1db4a8;
    }
    ctx->pc = 0x1DB4A0u;
    {
        const bool branch_taken_0x1db4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4A0u;
        // 0x1db4a4: 0xaf808c9c  sw          $zero, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4a0) {
            ctx->pc = 0x1DB750u;
            goto label_1db750;
        }
    }
    ctx->pc = 0x1DB4A8u;
label_1db4a8:
    // 0x1db4a8: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1db4a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1db4ac:
    // 0x1db4ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1db4b0:
    if (ctx->pc == 0x1DB4B0u) {
        ctx->pc = 0x1DB4B4u;
        goto label_1db4b4;
    }
    ctx->pc = 0x1DB4ACu;
    {
        const bool branch_taken_0x1db4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4ac) {
            ctx->pc = 0x1DB4BCu;
            goto label_1db4bc;
        }
    }
    ctx->pc = 0x1DB4B4u;
label_1db4b4:
    // 0x1db4b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1db4b8:
    if (ctx->pc == 0x1DB4B8u) {
        ctx->pc = 0x1DB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4B4u;
        // 0x1db4b8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4BCu;
        goto label_1db4bc;
    }
    ctx->pc = 0x1DB4B4u;
    {
        const bool branch_taken_0x1db4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4B4u;
        // 0x1db4b8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4b4) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB4BCu;
label_1db4bc:
    // 0x1db4bc: 0x0  nop
    ctx->pc = 0x1db4bcu;
    // NOP
label_1db4c0:
    // 0x1db4c0: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1db4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1db4c4:
    // 0x1db4c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db4c8:
    // 0x1db4c8: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1db4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1db4cc:
    // 0x1db4cc: 0x0  nop
    ctx->pc = 0x1db4ccu;
    // NOP
label_1db4d0:
    // 0x1db4d0: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1db4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1db4d4:
    // 0x1db4d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1db4d8:
    if (ctx->pc == 0x1DB4D8u) {
        ctx->pc = 0x1DB4DCu;
        goto label_1db4dc;
    }
    ctx->pc = 0x1DB4D4u;
    {
        const bool branch_taken_0x1db4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4d4) {
            ctx->pc = 0x1DB4E8u;
            goto label_1db4e8;
        }
    }
    ctx->pc = 0x1DB4DCu;
label_1db4dc:
    // 0x1db4dc: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1db4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1db4e0:
    // 0x1db4e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db4e4:
    // 0x1db4e4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1db4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1db4e8:
    // 0x1db4e8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1db4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1db4ec:
    // 0x1db4ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1db4f0:
    if (ctx->pc == 0x1DB4F0u) {
        ctx->pc = 0x1DB4F4u;
        goto label_1db4f4;
    }
    ctx->pc = 0x1DB4ECu;
    {
        const bool branch_taken_0x1db4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4ec) {
            ctx->pc = 0x1DB550u;
            goto label_1db550;
        }
    }
    ctx->pc = 0x1DB4F4u;
label_1db4f4:
    // 0x1db4f4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1db4f8:
    // 0x1db4f8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1db4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1db4fc:
    // 0x1db4fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1db500:
    if (ctx->pc == 0x1DB500u) {
        ctx->pc = 0x1DB504u;
        goto label_1db504;
    }
    ctx->pc = 0x1DB4FCu;
    {
        const bool branch_taken_0x1db4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db4fc) {
            ctx->pc = 0x1DB524u;
            goto label_1db524;
        }
    }
    ctx->pc = 0x1DB504u;
label_1db504:
    // 0x1db504: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1db504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1db508:
    // 0x1db508: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1db508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1db50c:
    // 0x1db50c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1db510:
    if (ctx->pc == 0x1DB510u) {
        ctx->pc = 0x1DB514u;
        goto label_1db514;
    }
    ctx->pc = 0x1DB50Cu;
    {
        const bool branch_taken_0x1db50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db50c) {
            ctx->pc = 0x1DB51Cu;
            goto label_1db51c;
        }
    }
    ctx->pc = 0x1DB514u;
label_1db514:
    // 0x1db514: 0x10000003  b           . + 4 + (0x3 << 2)
label_1db518:
    if (ctx->pc == 0x1DB518u) {
        ctx->pc = 0x1DB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB514u;
        // 0x1db518: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB51Cu;
        goto label_1db51c;
    }
    ctx->pc = 0x1DB514u;
    {
        const bool branch_taken_0x1db514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB514u;
        // 0x1db518: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db514) {
            ctx->pc = 0x1DB524u;
            goto label_1db524;
        }
    }
    ctx->pc = 0x1DB51Cu;
label_1db51c:
    // 0x1db51c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1db51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1db520:
    // 0x1db520: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1db520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1db524:
    // 0x1db524: 0x0  nop
    ctx->pc = 0x1db524u;
    // NOP
label_1db528:
    // 0x1db528: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1db52c:
    // 0x1db52c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1db530:
    if (ctx->pc == 0x1DB530u) {
        ctx->pc = 0x1DB534u;
        goto label_1db534;
    }
    ctx->pc = 0x1DB52Cu;
    {
        const bool branch_taken_0x1db52c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1db52c) {
            ctx->pc = 0x1DB550u;
            goto label_1db550;
        }
    }
    ctx->pc = 0x1DB534u;
label_1db534:
    // 0x1db534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1db534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1db538:
    // 0x1db538: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1db538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1db53c:
    // 0x1db53c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1db53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1db540:
    // 0x1db540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1db544:
    if (ctx->pc == 0x1DB544u) {
        ctx->pc = 0x1DB548u;
        goto label_1db548;
    }
    ctx->pc = 0x1DB540u;
    {
        const bool branch_taken_0x1db540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db540) {
            ctx->pc = 0x1DB550u;
            goto label_1db550;
        }
    }
    ctx->pc = 0x1DB548u;
label_1db548:
    // 0x1db548: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1db548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1db54c:
    // 0x1db54c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1db54cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1db550:
    // 0x1db550: 0xc077a7c  jal         func_1DE9F0
label_1db554:
    if (ctx->pc == 0x1DB554u) {
        ctx->pc = 0x1DB558u;
        goto label_1db558;
    }
    ctx->pc = 0x1DB550u;
    SET_GPR_U32(ctx, 31, 0x1DB558u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DB558u;
label_1db558:
    // 0x1db558: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1db558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1db55c:
    // 0x1db55c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1db55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1db560:
    // 0x1db560: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1db564:
    if (ctx->pc == 0x1DB564u) {
        ctx->pc = 0x1DB568u;
        goto label_1db568;
    }
    ctx->pc = 0x1DB560u;
    {
        const bool branch_taken_0x1db560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1db560) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB568u;
label_1db568:
    // 0x1db568: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db56c:
    // 0x1db56c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db570:
    // 0x1db570: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1db574:
    if (ctx->pc == 0x1DB574u) {
        ctx->pc = 0x1DB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB570u;
        // 0x1db574: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB578u;
        goto label_1db578;
    }
    ctx->pc = 0x1DB570u;
    {
        const bool branch_taken_0x1db570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB570u;
        // 0x1db574: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db570) {
            ctx->pc = 0x1DB594u;
            goto label_1db594;
        }
    }
    ctx->pc = 0x1DB578u;
label_1db578:
    // 0x1db578: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db57c:
    // 0x1db57c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1db57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1db580:
    // 0x1db580: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1db584:
    if (ctx->pc == 0x1DB584u) {
        ctx->pc = 0x1DB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB580u;
        // 0x1db584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB588u;
        goto label_1db588;
    }
    ctx->pc = 0x1DB580u;
    {
        const bool branch_taken_0x1db580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB580u;
        // 0x1db584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db580) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB588u;
label_1db588:
    // 0x1db588: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db58c:
    // 0x1db58c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1db590:
    if (ctx->pc == 0x1DB590u) {
        ctx->pc = 0x1DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB58Cu;
        // 0x1db590: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB594u;
        goto label_1db594;
    }
    ctx->pc = 0x1DB58Cu;
    {
        const bool branch_taken_0x1db58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB58Cu;
        // 0x1db590: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db58c) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB594u;
label_1db594:
    // 0x1db594: 0x0  nop
    ctx->pc = 0x1db594u;
    // NOP
label_1db598:
    // 0x1db598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db59c:
    // 0x1db59c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1db5a0:
    if (ctx->pc == 0x1DB5A0u) {
        ctx->pc = 0x1DB5A4u;
        goto label_1db5a4;
    }
    ctx->pc = 0x1DB59Cu;
    {
        const bool branch_taken_0x1db59c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db59c) {
            ctx->pc = 0x1DB5C0u;
            goto label_1db5c0;
        }
    }
    ctx->pc = 0x1DB5A4u;
label_1db5a4:
    // 0x1db5a4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db5a8:
    // 0x1db5a8: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1db5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1db5ac:
    // 0x1db5ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1db5b0:
    if (ctx->pc == 0x1DB5B0u) {
        ctx->pc = 0x1DB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5ACu;
        // 0x1db5b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5B4u;
        goto label_1db5b4;
    }
    ctx->pc = 0x1DB5ACu;
    {
        const bool branch_taken_0x1db5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5ACu;
        // 0x1db5b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5ac) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB5B4u;
label_1db5b4:
    // 0x1db5b4: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db5b8:
    // 0x1db5b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1db5bc:
    if (ctx->pc == 0x1DB5BCu) {
        ctx->pc = 0x1DB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5B8u;
        // 0x1db5bc: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5C0u;
        goto label_1db5c0;
    }
    ctx->pc = 0x1DB5B8u;
    {
        const bool branch_taken_0x1db5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5B8u;
        // 0x1db5bc: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5b8) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB5C0u;
label_1db5c0:
    // 0x1db5c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db5c4:
    // 0x1db5c4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1db5c8:
    if (ctx->pc == 0x1DB5C8u) {
        ctx->pc = 0x1DB5CCu;
        goto label_1db5cc;
    }
    ctx->pc = 0x1DB5C4u;
    {
        const bool branch_taken_0x1db5c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db5c4) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB5CCu;
label_1db5cc:
    // 0x1db5cc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1db5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1db5d0:
    // 0x1db5d0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1db5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1db5d4:
    // 0x1db5d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1db5d8:
    if (ctx->pc == 0x1DB5D8u) {
        ctx->pc = 0x1DB5DCu;
        goto label_1db5dc;
    }
    ctx->pc = 0x1DB5D4u;
    {
        const bool branch_taken_0x1db5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d4) {
            ctx->pc = 0x1DB5E4u;
            goto label_1db5e4;
        }
    }
    ctx->pc = 0x1DB5DCu;
label_1db5dc:
    // 0x1db5dc: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1db5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1db5e0:
    // 0x1db5e0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db5e4:
    // 0x1db5e4: 0x0  nop
    ctx->pc = 0x1db5e4u;
    // NOP
label_1db5e8:
    // 0x1db5e8: 0xc07a9d8  jal         func_1EA760
label_1db5ec:
    if (ctx->pc == 0x1DB5ECu) {
        ctx->pc = 0x1DB5F0u;
        goto label_1db5f0;
    }
    ctx->pc = 0x1DB5E8u;
    SET_GPR_U32(ctx, 31, 0x1DB5F0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DB5F0u;
label_1db5f0:
    // 0x1db5f0: 0xc04e168  jal         func_1385A0
label_1db5f4:
    if (ctx->pc == 0x1DB5F4u) {
        ctx->pc = 0x1DB5F8u;
        goto label_1db5f8;
    }
    ctx->pc = 0x1DB5F0u;
    SET_GPR_U32(ctx, 31, 0x1DB5F8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DB5F0u, 0x1DB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5F8u;
label_1db5f8:
    // 0x1db5f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1db5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1db5fc:
    // 0x1db5fc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db600:
    // 0x1db600: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1db600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1db604:
    // 0x1db604: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db608:
    // 0x1db608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1db608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1db60c:
    // 0x1db60c: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1db610:
    // 0x1db610: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1db610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1db614:
    // 0x1db614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db618:
    // 0x1db618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db61c:
    // 0x1db61c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db61cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db620:
    // 0x1db620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db624:
    // 0x1db624: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db628:
    // 0x1db628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db62c:
    // 0x1db62c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db630:
    // 0x1db630: 0xc066c72  jal         func_19B1C8
label_1db634:
    if (ctx->pc == 0x1DB634u) {
        ctx->pc = 0x1DB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB630u;
        // 0x1db634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB638u;
        goto label_1db638;
    }
    ctx->pc = 0x1DB630u;
    SET_GPR_U32(ctx, 31, 0x1DB638u);
    ctx->pc = 0x1DB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB630u;
    // 0x1db634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB638u;
label_1db638:
    // 0x1db638: 0xc077e84  jal         func_1DFA10
label_1db63c:
    if (ctx->pc == 0x1DB63Cu) {
        ctx->pc = 0x1DB640u;
        goto label_1db640;
    }
    ctx->pc = 0x1DB638u;
    SET_GPR_U32(ctx, 31, 0x1DB640u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DB640u;
label_1db640:
    // 0x1db640: 0xc077d90  jal         func_1DF640
label_1db644:
    if (ctx->pc == 0x1DB644u) {
        ctx->pc = 0x1DB648u;
        goto label_1db648;
    }
    ctx->pc = 0x1DB640u;
    SET_GPR_U32(ctx, 31, 0x1DB648u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DB648u;
label_1db648:
    // 0x1db648: 0xc077ab4  jal         func_1DEAD0
label_1db64c:
    if (ctx->pc == 0x1DB64Cu) {
        ctx->pc = 0x1DB650u;
        goto label_1db650;
    }
    ctx->pc = 0x1DB648u;
    SET_GPR_U32(ctx, 31, 0x1DB650u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DB650u;
label_1db650:
    // 0x1db650: 0xc077880  jal         func_1DE200
label_1db654:
    if (ctx->pc == 0x1DB654u) {
        ctx->pc = 0x1DB658u;
        goto label_1db658;
    }
    ctx->pc = 0x1DB650u;
    SET_GPR_U32(ctx, 31, 0x1DB658u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DB658u;
label_1db658:
    // 0x1db658: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1db658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1db65c:
    // 0x1db65c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1db660:
    if (ctx->pc == 0x1DB660u) {
        ctx->pc = 0x1DB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB65Cu;
        // 0x1db660: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB664u;
        goto label_1db664;
    }
    ctx->pc = 0x1DB65Cu;
    {
        const bool branch_taken_0x1db65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB65Cu;
        // 0x1db660: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db65c) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB664u;
label_1db664:
    // 0x1db664: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db668:
    // 0x1db668: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db66c:
    // 0x1db66c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db670:
    // 0x1db670: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1db670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1db674:
    // 0x1db674: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1db674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1db678:
    // 0x1db678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db67c:
    // 0x1db67c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db67cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db680:
    // 0x1db680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db684:
    // 0x1db684: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db688:
    // 0x1db688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db68c:
    // 0x1db68c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1db68cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db690:
    // 0x1db690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db694:
    // 0x1db694: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db698:
    // 0x1db698: 0xc066c72  jal         func_19B1C8
label_1db69c:
    if (ctx->pc == 0x1DB69Cu) {
        ctx->pc = 0x1DB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB698u;
        // 0x1db69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6A0u;
        goto label_1db6a0;
    }
    ctx->pc = 0x1DB698u;
    SET_GPR_U32(ctx, 31, 0x1DB6A0u);
    ctx->pc = 0x1DB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB698u;
    // 0x1db69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB6A0u;
label_1db6a0:
    // 0x1db6a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1db6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1db6a4:
    // 0x1db6a4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db6a8:
    // 0x1db6a8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db6ac:
    // 0x1db6ac: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db6b0:
    // 0x1db6b0: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1db6b4:
    // 0x1db6b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db6b8:
    // 0x1db6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db6bc:
    // 0x1db6bc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1db6bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db6c0:
    // 0x1db6c0: 0xc070e2c  jal         func_1C38B0
label_1db6c4:
    if (ctx->pc == 0x1DB6C4u) {
        ctx->pc = 0x1DB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6C0u;
        // 0x1db6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6C8u;
        goto label_1db6c8;
    }
    ctx->pc = 0x1DB6C0u;
    SET_GPR_U32(ctx, 31, 0x1DB6C8u);
    ctx->pc = 0x1DB6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6C0u;
    // 0x1db6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB6C8u;
label_1db6c8:
    // 0x1db6c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1db6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db6cc:
    // 0x1db6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db6d0:
    // 0x1db6d0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db6d4:
    // 0x1db6d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db6d8:
    // 0x1db6d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db6dc:
    // 0x1db6dc: 0xc066c72  jal         func_19B1C8
label_1db6e0:
    if (ctx->pc == 0x1DB6E0u) {
        ctx->pc = 0x1DB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6DCu;
        // 0x1db6e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6E4u;
        goto label_1db6e4;
    }
    ctx->pc = 0x1DB6DCu;
    SET_GPR_U32(ctx, 31, 0x1DB6E4u);
    ctx->pc = 0x1DB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6DCu;
    // 0x1db6e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB6E4u;
label_1db6e4:
    // 0x1db6e4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1db6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1db6e8:
    // 0x1db6e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1db6ec:
    if (ctx->pc == 0x1DB6ECu) {
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E8u;
        // 0x1db6ec: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6F0u;
        goto label_1db6f0;
    }
    ctx->pc = 0x1DB6E8u;
    {
        const bool branch_taken_0x1db6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E8u;
        // 0x1db6ec: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6e8) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB6F0u;
label_1db6f0:
    // 0x1db6f0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db6f4:
    // 0x1db6f4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db6f8:
    // 0x1db6f8: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db6fc:
    // 0x1db6fc: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1db6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1db700:
    // 0x1db700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db704:
    // 0x1db704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db708:
    // 0x1db708: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1db708u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1db70c:
    // 0x1db70c: 0xc070e2c  jal         func_1C38B0
label_1db710:
    if (ctx->pc == 0x1DB710u) {
        ctx->pc = 0x1DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB70Cu;
        // 0x1db710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB714u;
        goto label_1db714;
    }
    ctx->pc = 0x1DB70Cu;
    SET_GPR_U32(ctx, 31, 0x1DB714u);
    ctx->pc = 0x1DB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB70Cu;
    // 0x1db710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB714u;
label_1db714:
    // 0x1db714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db718:
    // 0x1db718: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1db718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db71c:
    // 0x1db71c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db720:
    // 0x1db720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db724:
    // 0x1db724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db728:
    // 0x1db728: 0xc066c72  jal         func_19B1C8
label_1db72c:
    if (ctx->pc == 0x1DB72Cu) {
        ctx->pc = 0x1DB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB728u;
        // 0x1db72c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB730u;
        goto label_1db730;
    }
    ctx->pc = 0x1DB728u;
    SET_GPR_U32(ctx, 31, 0x1DB730u);
    ctx->pc = 0x1DB72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB728u;
    // 0x1db72c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DB730u;
label_1db730:
    // 0x1db730: 0xc07a86c  jal         func_1EA1B0
label_1db734:
    if (ctx->pc == 0x1DB734u) {
        ctx->pc = 0x1DB738u;
        goto label_1db738;
    }
    ctx->pc = 0x1DB730u;
    SET_GPR_U32(ctx, 31, 0x1DB738u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DB738u;
label_1db738:
    // 0x1db738: 0xc04e120  jal         func_138480
label_1db73c:
    if (ctx->pc == 0x1DB73Cu) {
        ctx->pc = 0x1DB740u;
        goto label_1db740;
    }
    ctx->pc = 0x1DB738u;
    SET_GPR_U32(ctx, 31, 0x1DB740u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DB738u, 0x1DB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB740u;
label_1db740:
    // 0x1db740: 0xc05b578  jal         func_16D5E0
label_1db744:
    if (ctx->pc == 0x1DB744u) {
        ctx->pc = 0x1DB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB740u;
        // 0x1db744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB748u;
        goto label_1db748;
    }
    ctx->pc = 0x1DB740u;
    SET_GPR_U32(ctx, 31, 0x1DB748u);
    ctx->pc = 0x1DB744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB740u;
    // 0x1db744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DB740u, 0x1DB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB748u;
label_1db748:
    // 0x1db748: 0xc060258  jal         func_180960
label_1db74c:
    if (ctx->pc == 0x1DB74Cu) {
        ctx->pc = 0x1DB750u;
        goto label_1db750;
    }
    ctx->pc = 0x1DB748u;
    SET_GPR_U32(ctx, 31, 0x1DB750u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DB750u;
label_1db750:
    // 0x1db750: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1db750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1db754:
    // 0x1db754: 0x1040ff54  beqz        $v0, . + 4 + (-0xAC << 2)
label_1db758:
    if (ctx->pc == 0x1DB758u) {
        ctx->pc = 0x1DB75Cu;
        goto label_1db75c;
    }
    ctx->pc = 0x1DB754u;
    {
        const bool branch_taken_0x1db754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db754) {
            ctx->pc = 0x1DB4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db4a8;
        }
    }
    ctx->pc = 0x1DB75Cu;
label_1db75c:
    // 0x1db75c: 0x0  nop
    ctx->pc = 0x1db75cu;
    // NOP
label_1db760:
    // 0x1db760: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1db760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1db764:
    // 0x1db764: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x1db764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
label_1db768:
    // 0x1db768: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1db76c:
    if (ctx->pc == 0x1DB76Cu) {
        ctx->pc = 0x1DB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB768u;
        // 0x1db76c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB770u;
        goto label_1db770;
    }
    ctx->pc = 0x1DB768u;
    {
        const bool branch_taken_0x1db768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB768u;
        // 0x1db76c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db768) {
            ctx->pc = 0x1DB778u;
            goto label_1db778;
        }
    }
    ctx->pc = 0x1DB770u;
label_1db770:
    // 0x1db770: 0x1000023e  b           . + 4 + (0x23E << 2)
label_1db774:
    if (ctx->pc == 0x1DB774u) {
        ctx->pc = 0x1DB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB770u;
        // 0x1db774: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB778u;
        goto label_1db778;
    }
    ctx->pc = 0x1DB770u;
    {
        const bool branch_taken_0x1db770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB770u;
        // 0x1db774: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db770) {
            ctx->pc = 0x1DC06Cu;
            { ctx->pc = 0x1dc06c; return; }
        }
    }
    ctx->pc = 0x1DB778u;
label_1db778:
    // 0x1db778: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1db778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1db77c:
    // 0x1db77c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1db77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1db780:
    // 0x1db780: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_1db784:
    if (ctx->pc == 0x1DB784u) {
        ctx->pc = 0x1DB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB780u;
        // 0x1db784: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB788u;
        goto label_1db788;
    }
    ctx->pc = 0x1DB780u;
    {
        const bool branch_taken_0x1db780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB780u;
        // 0x1db784: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db780) {
            ctx->pc = 0x1DBA60u;
            { ctx->pc = 0x1dba60; return; }
        }
    }
    ctx->pc = 0x1DB788u;
label_1db788:
    // 0x1db788: 0xc05b420  jal         func_16D080
label_1db78c:
    if (ctx->pc == 0x1DB78Cu) {
        ctx->pc = 0x1DB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB788u;
        // 0x1db78c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB790u;
        goto label_1db790;
    }
    ctx->pc = 0x1DB788u;
    SET_GPR_U32(ctx, 31, 0x1DB790u);
    ctx->pc = 0x1DB78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB788u;
    // 0x1db78c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DB788u, 0x1DB790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB790u;
label_1db790:
    // 0x1db790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db794:
    // 0x1db794: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1db794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1db798:
    // 0x1db798: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1db79c:
    if (ctx->pc == 0x1DB79Cu) {
        ctx->pc = 0x1DB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB798u;
        // 0x1db79c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7A0u;
        goto label_1db7a0;
    }
    ctx->pc = 0x1DB798u;
    {
        const bool branch_taken_0x1db798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB798u;
        // 0x1db79c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db798) {
            ctx->pc = 0x1DBA48u;
            { ctx->pc = 0x1dba48; return; }
        }
    }
    ctx->pc = 0x1DB7A0u;
label_1db7a0:
    // 0x1db7a0: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1db7a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1db7a4:
    // 0x1db7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1db7a8:
    if (ctx->pc == 0x1DB7A8u) {
        ctx->pc = 0x1DB7ACu;
        goto label_1db7ac;
    }
    ctx->pc = 0x1DB7A4u;
    {
        const bool branch_taken_0x1db7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7a4) {
            ctx->pc = 0x1DB7B4u;
            goto label_1db7b4;
        }
    }
    ctx->pc = 0x1DB7ACu;
label_1db7ac:
    // 0x1db7ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1db7b0:
    if (ctx->pc == 0x1DB7B0u) {
        ctx->pc = 0x1DB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7ACu;
        // 0x1db7b0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7B4u;
        goto label_1db7b4;
    }
    ctx->pc = 0x1DB7ACu;
    {
        const bool branch_taken_0x1db7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7ACu;
        // 0x1db7b0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7ac) {
            ctx->pc = 0x1DB7C4u;
            goto label_1db7c4;
        }
    }
    ctx->pc = 0x1DB7B4u;
label_1db7b4:
    // 0x1db7b4: 0x0  nop
    ctx->pc = 0x1db7b4u;
    // NOP
label_1db7b8:
    // 0x1db7b8: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1db7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1db7bc:
    // 0x1db7bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db7c0:
    // 0x1db7c0: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1db7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1db7c4:
    // 0x1db7c4: 0x0  nop
    ctx->pc = 0x1db7c4u;
    // NOP
label_1db7c8:
    // 0x1db7c8: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1db7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1db7cc:
    // 0x1db7cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1db7d0:
    if (ctx->pc == 0x1DB7D0u) {
        ctx->pc = 0x1DB7D4u;
        goto label_1db7d4;
    }
    ctx->pc = 0x1DB7CCu;
    {
        const bool branch_taken_0x1db7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7cc) {
            ctx->pc = 0x1DB7E0u;
            { ctx->pc = 0x1db7e0; return; }
        }
    }
    ctx->pc = 0x1DB7D4u;
label_1db7d4:
    // 0x1db7d4: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1db7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1db7d8:
    // 0x1db7d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db7dc:
    // 0x1db7dc: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1db7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
    ctx->pc = 0x1db7e0u;
    return;
}

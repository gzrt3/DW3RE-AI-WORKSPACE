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


void FUN_0017faa0_part645(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba3f4u: goto label_2ba3f4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba404u: goto label_2ba404;
        case 0x2ba408u: goto label_2ba408;
        case 0x2ba40cu: goto label_2ba40c;
        case 0x2ba410u: goto label_2ba410;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba418u: goto label_2ba418;
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba420u: goto label_2ba420;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba428u: goto label_2ba428;
        case 0x2ba42cu: goto label_2ba42c;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba434u: goto label_2ba434;
        case 0x2ba438u: goto label_2ba438;
        case 0x2ba43cu: goto label_2ba43c;
        case 0x2ba440u: goto label_2ba440;
        case 0x2ba444u: goto label_2ba444;
        case 0x2ba448u: goto label_2ba448;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba450u: goto label_2ba450;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba458u: goto label_2ba458;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba464u: goto label_2ba464;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba46cu: goto label_2ba46c;
        case 0x2ba470u: goto label_2ba470;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba47cu: goto label_2ba47c;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba484u: goto label_2ba484;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba48cu: goto label_2ba48c;
        case 0x2ba490u: goto label_2ba490;
        case 0x2ba494u: goto label_2ba494;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba49cu: goto label_2ba49c;
        case 0x2ba4a0u: goto label_2ba4a0;
        case 0x2ba4a4u: goto label_2ba4a4;
        case 0x2ba4a8u: goto label_2ba4a8;
        case 0x2ba4acu: goto label_2ba4ac;
        case 0x2ba4b0u: goto label_2ba4b0;
        case 0x2ba4b4u: goto label_2ba4b4;
        case 0x2ba4b8u: goto label_2ba4b8;
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4c0u: goto label_2ba4c0;
        case 0x2ba4c4u: goto label_2ba4c4;
        case 0x2ba4c8u: goto label_2ba4c8;
        case 0x2ba4ccu: goto label_2ba4cc;
        case 0x2ba4d0u: goto label_2ba4d0;
        case 0x2ba4d4u: goto label_2ba4d4;
        case 0x2ba4d8u: goto label_2ba4d8;
        case 0x2ba4dcu: goto label_2ba4dc;
        case 0x2ba4e0u: goto label_2ba4e0;
        case 0x2ba4e4u: goto label_2ba4e4;
        case 0x2ba4e8u: goto label_2ba4e8;
        case 0x2ba4ecu: goto label_2ba4ec;
        case 0x2ba4f0u: goto label_2ba4f0;
        case 0x2ba4f4u: goto label_2ba4f4;
        case 0x2ba4f8u: goto label_2ba4f8;
        case 0x2ba4fcu: goto label_2ba4fc;
        case 0x2ba500u: goto label_2ba500;
        case 0x2ba504u: goto label_2ba504;
        case 0x2ba508u: goto label_2ba508;
        case 0x2ba50cu: goto label_2ba50c;
        case 0x2ba510u: goto label_2ba510;
        case 0x2ba514u: goto label_2ba514;
        case 0x2ba518u: goto label_2ba518;
        case 0x2ba51cu: goto label_2ba51c;
        case 0x2ba520u: goto label_2ba520;
        case 0x2ba524u: goto label_2ba524;
        case 0x2ba528u: goto label_2ba528;
        case 0x2ba52cu: goto label_2ba52c;
        case 0x2ba530u: goto label_2ba530;
        case 0x2ba534u: goto label_2ba534;
        case 0x2ba538u: goto label_2ba538;
        case 0x2ba53cu: goto label_2ba53c;
        case 0x2ba540u: goto label_2ba540;
        case 0x2ba544u: goto label_2ba544;
        case 0x2ba548u: goto label_2ba548;
        case 0x2ba54cu: goto label_2ba54c;
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba554u: goto label_2ba554;
        case 0x2ba558u: goto label_2ba558;
        case 0x2ba55cu: goto label_2ba55c;
        case 0x2ba560u: goto label_2ba560;
        case 0x2ba564u: goto label_2ba564;
        case 0x2ba568u: goto label_2ba568;
        case 0x2ba56cu: goto label_2ba56c;
        case 0x2ba570u: goto label_2ba570;
        case 0x2ba574u: goto label_2ba574;
        case 0x2ba578u: goto label_2ba578;
        case 0x2ba57cu: goto label_2ba57c;
        case 0x2ba580u: goto label_2ba580;
        case 0x2ba584u: goto label_2ba584;
        case 0x2ba588u: goto label_2ba588;
        case 0x2ba58cu: goto label_2ba58c;
        case 0x2ba590u: goto label_2ba590;
        case 0x2ba594u: goto label_2ba594;
        case 0x2ba598u: goto label_2ba598;
        case 0x2ba59cu: goto label_2ba59c;
        case 0x2ba5a0u: goto label_2ba5a0;
        case 0x2ba5a4u: goto label_2ba5a4;
        case 0x2ba5a8u: goto label_2ba5a8;
        case 0x2ba5acu: goto label_2ba5ac;
        case 0x2ba5b0u: goto label_2ba5b0;
        case 0x2ba5b4u: goto label_2ba5b4;
        case 0x2ba5b8u: goto label_2ba5b8;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5c0u: goto label_2ba5c0;
        case 0x2ba5c4u: goto label_2ba5c4;
        case 0x2ba5c8u: goto label_2ba5c8;
        case 0x2ba5ccu: goto label_2ba5cc;
        case 0x2ba5d0u: goto label_2ba5d0;
        case 0x2ba5d4u: goto label_2ba5d4;
        case 0x2ba5d8u: goto label_2ba5d8;
        case 0x2ba5dcu: goto label_2ba5dc;
        case 0x2ba5e0u: goto label_2ba5e0;
        case 0x2ba5e4u: goto label_2ba5e4;
        case 0x2ba5e8u: goto label_2ba5e8;
        case 0x2ba5ecu: goto label_2ba5ec;
        case 0x2ba5f0u: goto label_2ba5f0;
        case 0x2ba5f4u: goto label_2ba5f4;
        case 0x2ba5f8u: goto label_2ba5f8;
        case 0x2ba5fcu: goto label_2ba5fc;
        case 0x2ba600u: goto label_2ba600;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba608u: goto label_2ba608;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba610u: goto label_2ba610;
        case 0x2ba614u: goto label_2ba614;
        case 0x2ba618u: goto label_2ba618;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba628u: goto label_2ba628;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba630u: goto label_2ba630;
        case 0x2ba634u: goto label_2ba634;
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba63cu: goto label_2ba63c;
        case 0x2ba640u: goto label_2ba640;
        case 0x2ba644u: goto label_2ba644;
        case 0x2ba648u: goto label_2ba648;
        case 0x2ba64cu: goto label_2ba64c;
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba65cu: goto label_2ba65c;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba664u: goto label_2ba664;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba674u: goto label_2ba674;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba67cu: goto label_2ba67c;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba684u: goto label_2ba684;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba68cu: goto label_2ba68c;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6ecu: goto label_2ba6ec;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f4u: goto label_2ba6f4;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba6fcu: goto label_2ba6fc;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba704u: goto label_2ba704;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba70cu: goto label_2ba70c;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba714u: goto label_2ba714;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba724u: goto label_2ba724;
        case 0x2ba728u: goto label_2ba728;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba730u: goto label_2ba730;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba738u: goto label_2ba738;
        case 0x2ba73cu: goto label_2ba73c;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba744u: goto label_2ba744;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba74cu: goto label_2ba74c;
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba780u: goto label_2ba780;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        case 0x2ba818u: goto label_2ba818;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba820u: goto label_2ba820;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba828u: goto label_2ba828;
        case 0x2ba82cu: goto label_2ba82c;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba83cu: goto label_2ba83c;
        case 0x2ba840u: goto label_2ba840;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba848u: goto label_2ba848;
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba854u: goto label_2ba854;
        case 0x2ba858u: goto label_2ba858;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba860u: goto label_2ba860;
        case 0x2ba864u: goto label_2ba864;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba86cu: goto label_2ba86c;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba874u: goto label_2ba874;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        default: return;
    }

label_2ba1e0:
    // 0x2ba1e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1e4:
    // 0x2ba1e4: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1e4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2ba1e8:
    // 0x2ba1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1ec:
    // 0x2ba1ec: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1ecu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2ba1f0:
    // 0x2ba1f0: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba1f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BA1F0 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba1f4:
    // 0x2ba1f4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2ba1f4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2ba1f8:
    // 0x2ba1f8: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2ba1fc:
    // 0x2ba1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba200:
    // 0x2ba200: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba200u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2ba204:
    // 0x2ba204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba208:
    // 0x2ba208: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2ba208u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2ba20c:
    // 0x2ba20c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba20cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba210:
    // 0x2ba210: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2ba214:
    if (ctx->pc == 0x2BA214u) {
        ctx->pc = 0x2BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA210u;
        // 0x2ba214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA218u;
        goto label_2ba218;
    }
    ctx->pc = 0x2BA210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2BA218u);
        ctx->pc = 0x2BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA210u;
        // 0x2ba214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA210u, 0x2BA218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA218u;
label_2ba218:
    // 0x2ba218: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba218u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA218 raw=0x01F637FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba21c:
    // 0x2ba21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba220:
    // 0x2ba220: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2ba224:
    // 0x2ba224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba228:
    // 0x2ba228: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba228u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2ba22c:
    // 0x2ba22c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba22cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba230:
    // 0x2ba230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba234:
    // 0x2ba234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba238:
    // 0x2ba238: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba238u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2ba23c:
    // 0x2ba23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba240:
    // 0x2ba240: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BA240 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba244:
    // 0x2ba244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba248:
    // 0x2ba248: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2ba24c:
    if (ctx->pc == 0x2BA24Cu) {
        ctx->pc = 0x2BA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA248u;
        // 0x2ba24c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA250u;
        goto label_2ba250;
    }
    ctx->pc = 0x2BA248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA248u;
        // 0x2ba24c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA250u;
label_2ba250:
    // 0x2ba250: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2ba250u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2ba254:
    // 0x2ba254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba258:
    // 0x2ba258: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2ba25c:
    // 0x2ba25c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba25cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba260:
    // 0x2ba260: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2ba264:
    if (ctx->pc == 0x2BA264u) {
        ctx->pc = 0x2BA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA260u;
        // 0x2ba264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA268u;
        goto label_2ba268;
    }
    ctx->pc = 0x2BA260u;
    {
        const bool branch_taken_0x2ba260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA260u;
        // 0x2ba264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba260) {
            ctx->pc = 0x2BA264u;
            goto label_2ba264;
        }
    }
    ctx->pc = 0x2BA268u;
label_2ba268:
    // 0x2ba268: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2ba26c:
    if (ctx->pc == 0x2BA26Cu) {
        ctx->pc = 0x2BA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA268u;
        // 0x2ba26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA270u;
        goto label_2ba270;
    }
    ctx->pc = 0x2BA268u;
    {
        const bool branch_taken_0x2ba268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA268u;
        // 0x2ba26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba268) {
            ctx->pc = 0x2BA2ECu;
            goto label_2ba2ec;
        }
    }
    ctx->pc = 0x2BA270u;
label_2ba270:
    // 0x2ba270: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2ba274:
    if (ctx->pc == 0x2BA274u) {
        ctx->pc = 0x2BA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA270u;
        // 0x2ba274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA278u;
        goto label_2ba278;
    }
    ctx->pc = 0x2BA270u;
    {
        const bool branch_taken_0x2ba270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA270u;
        // 0x2ba274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba270) {
            ctx->pc = 0x2BA27Cu;
            goto label_2ba27c;
        }
    }
    ctx->pc = 0x2BA278u;
label_2ba278:
    // 0x2ba278: 0x0  nop
    ctx->pc = 0x2ba278u;
    // NOP
label_2ba27c:
    // 0x2ba27c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2ba27cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2ba280:
    // 0x2ba280: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba284:
    if (ctx->pc == 0x2BA284u) {
        ctx->pc = 0x2BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA280u;
        // 0x2ba284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA288u;
        goto label_2ba288;
    }
    ctx->pc = 0x2BA280u;
    {
        const bool branch_taken_0x2ba280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA280u;
        // 0x2ba284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba280) {
            ctx->pc = 0x2C0284u;
            return;
        }
    }
    ctx->pc = 0x2BA288u;
label_2ba288:
    // 0x2ba288: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2ba28c:
    if (ctx->pc == 0x2BA28Cu) {
        ctx->pc = 0x2BA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA288u;
        // 0x2ba28c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA290u;
        goto label_2ba290;
    }
    ctx->pc = 0x2BA288u;
    {
        const bool branch_taken_0x2ba288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA288u;
        // 0x2ba28c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba288) {
            ctx->pc = 0x2C030Cu;
            return;
        }
    }
    ctx->pc = 0x2BA290u;
label_2ba290:
    // 0x2ba290: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2ba294:
    if (ctx->pc == 0x2BA294u) {
        ctx->pc = 0x2BA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA290u;
        // 0x2ba294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA298u;
        goto label_2ba298;
    }
    ctx->pc = 0x2BA290u;
    {
        const bool branch_taken_0x2ba290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA290u;
        // 0x2ba294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba290) {
            ctx->pc = 0x2BA2A0u;
            goto label_2ba2a0;
        }
    }
    ctx->pc = 0x2BA298u;
label_2ba298:
    // 0x2ba298: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba29c:
    if (ctx->pc == 0x2BA29Cu) {
        ctx->pc = 0x2BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA298u;
        // 0x2ba29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2A0u;
        goto label_2ba2a0;
    }
    ctx->pc = 0x2BA298u;
    {
        const bool branch_taken_0x2ba298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA298u;
        // 0x2ba29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba298) {
            ctx->pc = 0x2BA29Cu;
            goto label_2ba29c;
        }
    }
    ctx->pc = 0x2BA2A0u;
label_2ba2a0:
    // 0x2ba2a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2a4:
    // 0x2ba2a4: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba2a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2ba2a8:
    // 0x2ba2a8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba2a8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba2ac:
    // 0x2ba2ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2b0:
    // 0x2ba2b0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba2b0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba2b4:
    // 0x2ba2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2b8:
    // 0x2ba2b8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba2b8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba2bc:
    // 0x2ba2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2c0:
    // 0x2ba2c0: 0x42020081  .word       0x42020081                   # tlbr # 00020080 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba2c0u;
    runtime->handleTLBR(rdram, ctx);
label_2ba2c4:
    // 0x2ba2c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2c8:
    // 0x2ba2c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2cc:
    // 0x2ba2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2d0:
    // 0x2ba2d0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba2d4:
    if (ctx->pc == 0x2BA2D4u) {
        ctx->pc = 0x2BA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D0u;
        // 0x2ba2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2D8u;
        goto label_2ba2d8;
    }
    ctx->pc = 0x2BA2D0u;
    {
        const bool branch_taken_0x2ba2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D0u;
        // 0x2ba2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2d0) {
            ctx->pc = 0x2CE2D8u;
            return;
        }
    }
    ctx->pc = 0x2BA2D8u;
label_2ba2d8:
    // 0x2ba2d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2dc:
    // 0x2ba2dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2e0:
    // 0x2ba2e0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba2e4:
    if (ctx->pc == 0x2BA2E4u) {
        ctx->pc = 0x2BA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2E0u;
        // 0x2ba2e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2E8u;
        goto label_2ba2e8;
    }
    ctx->pc = 0x2BA2E0u;
    {
        const bool branch_taken_0x2ba2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba2e0) {
            ctx->pc = 0x2BA2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA2E0u;
            // 0x2ba2e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC2D0u;
            { ctx->pc = 0x2bc2d0; return; }
        }
    }
    ctx->pc = 0x2BA2E8u;
label_2ba2e8:
    // 0x2ba2e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2ec:
    // 0x2ba2ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2f0:
    // 0x2ba2f0: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba2f4:
    if (ctx->pc == 0x2BA2F4u) {
        ctx->pc = 0x2BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F0u;
        // 0x2ba2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2F8u;
        goto label_2ba2f8;
    }
    ctx->pc = 0x2BA2F0u;
    {
        const bool branch_taken_0x2ba2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F0u;
        // 0x2ba2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2f0) {
            ctx->pc = 0x2C0374u;
            return;
        }
    }
    ctx->pc = 0x2BA2F8u;
label_2ba2f8:
    // 0x2ba2f8: 0x42020071  .word       0x42020071                   # INVALID     $s0, $v0, 0x71 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba2f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2BA2F8 raw=0x42020071"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba2fc:
    // 0x2ba2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba300:
    // 0x2ba300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba304:
    // 0x2ba304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba308:
    // 0x2ba308: 0x500b006d  beql        $zero, $t3, . + 4 + (0x6D << 2)
label_2ba30c:
    if (ctx->pc == 0x2BA30Cu) {
        ctx->pc = 0x2BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA308u;
        // 0x2ba30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA310u;
        goto label_2ba310;
    }
    ctx->pc = 0x2BA308u;
    {
        const bool branch_taken_0x2ba308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba308) {
            ctx->pc = 0x2BA30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA308u;
            // 0x2ba30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA4C0u;
            goto label_2ba4c0;
        }
    }
    ctx->pc = 0x2BA310u;
label_2ba310:
    // 0x2ba310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba314:
    // 0x2ba314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba318:
    // 0x2ba318: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2ba31c:
    if (ctx->pc == 0x2BA31Cu) {
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA320u;
        goto label_2ba320;
    }
    ctx->pc = 0x2BA318u;
    {
        const bool branch_taken_0x2ba318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba318) {
            ctx->pc = 0x2BA51Cu;
            goto label_2ba51c;
        }
    }
    ctx->pc = 0x2BA320u;
label_2ba320:
    // 0x2ba320: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2ba324:
    if (ctx->pc == 0x2BA324u) {
        ctx->pc = 0x2BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA320u;
        // 0x2ba324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA328u;
        goto label_2ba328;
    }
    ctx->pc = 0x2BA320u;
    {
        const bool branch_taken_0x2ba320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA320u;
        // 0x2ba324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba320) {
            ctx->pc = 0x2BA32Cu;
            goto label_2ba32c;
        }
    }
    ctx->pc = 0x2BA328u;
label_2ba328:
    // 0x2ba328: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2ba32c:
    if (ctx->pc == 0x2BA32Cu) {
        ctx->pc = 0x2BA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA328u;
        // 0x2ba32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA330u;
        goto label_2ba330;
    }
    ctx->pc = 0x2BA328u;
    {
        const bool branch_taken_0x2ba328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA328u;
        // 0x2ba32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba328) {
            ctx->pc = 0x2BA32Cu;
            goto label_2ba32c;
        }
    }
    ctx->pc = 0x2BA330u;
label_2ba330:
    // 0x2ba330: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba334:
    if (ctx->pc == 0x2BA334u) {
        ctx->pc = 0x2BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA330u;
        // 0x2ba334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA338u;
        goto label_2ba338;
    }
    ctx->pc = 0x2BA330u;
    {
        const bool branch_taken_0x2ba330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA330u;
        // 0x2ba334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba330) {
            ctx->pc = 0x2C03B4u;
            return;
        }
    }
    ctx->pc = 0x2BA338u;
label_2ba338:
    // 0x2ba338: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2ba33c:
    if (ctx->pc == 0x2BA33Cu) {
        ctx->pc = 0x2BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA338u;
        // 0x2ba33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA340u;
        goto label_2ba340;
    }
    ctx->pc = 0x2BA338u;
    {
        const bool branch_taken_0x2ba338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA338u;
        // 0x2ba33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba338) {
            ctx->pc = 0x2C033Cu;
            return;
        }
    }
    ctx->pc = 0x2BA340u;
label_2ba340:
    // 0x2ba340: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba340u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba344:
    // 0x2ba344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba348:
    // 0x2ba348: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba34c:
    if (ctx->pc == 0x2BA34Cu) {
        ctx->pc = 0x2BA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA348u;
        // 0x2ba34c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA350u;
        goto label_2ba350;
    }
    ctx->pc = 0x2BA348u;
    {
        const bool branch_taken_0x2ba348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA348u;
        // 0x2ba34c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba348) {
            ctx->pc = 0x2BA34Cu;
            goto label_2ba34c;
        }
    }
    ctx->pc = 0x2BA350u;
label_2ba350:
    // 0x2ba350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba354:
    // 0x2ba354: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba354u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2ba358:
    // 0x2ba358: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba35c:
    // 0x2ba35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba360:
    // 0x2ba360: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba364:
    // 0x2ba364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba368:
    // 0x2ba368: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba368u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba36c:
    // 0x2ba36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba370:
    // 0x2ba370: 0x4202006b  .word       0x4202006B                   # INVALID     $s0, $v0, 0x6B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba370u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2BA370 raw=0x4202006B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba374:
    // 0x2ba374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba378:
    // 0x2ba378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba37c:
    // 0x2ba37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba380:
    // 0x2ba380: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba384:
    if (ctx->pc == 0x2BA384u) {
        ctx->pc = 0x2BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA380u;
        // 0x2ba384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA388u;
        goto label_2ba388;
    }
    ctx->pc = 0x2BA380u;
    {
        const bool branch_taken_0x2ba380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA380u;
        // 0x2ba384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba380) {
            ctx->pc = 0x2CE388u;
            return;
        }
    }
    ctx->pc = 0x2BA388u;
label_2ba388:
    // 0x2ba388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba38c:
    // 0x2ba38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba390:
    // 0x2ba390: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba394:
    if (ctx->pc == 0x2BA394u) {
        ctx->pc = 0x2BA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA390u;
        // 0x2ba394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA398u;
        goto label_2ba398;
    }
    ctx->pc = 0x2BA390u;
    {
        const bool branch_taken_0x2ba390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba390) {
            ctx->pc = 0x2BA394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA390u;
            // 0x2ba394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC380u;
            { ctx->pc = 0x2bc380; return; }
        }
    }
    ctx->pc = 0x2BA398u;
label_2ba398:
    // 0x2ba398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba39c:
    // 0x2ba39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3a0:
    // 0x2ba3a0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba3a4:
    if (ctx->pc == 0x2BA3A4u) {
        ctx->pc = 0x2BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3A0u;
        // 0x2ba3a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3A8u;
        goto label_2ba3a8;
    }
    ctx->pc = 0x2BA3A0u;
    {
        const bool branch_taken_0x2ba3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3A0u;
        // 0x2ba3a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3a0) {
            ctx->pc = 0x2C03A4u;
            return;
        }
    }
    ctx->pc = 0x2BA3A8u;
label_2ba3a8:
    // 0x2ba3a8: 0x4202005b  .word       0x4202005B                   # INVALID     $s0, $v0, 0x5B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba3a8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2BA3A8 raw=0x4202005B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba3ac:
    // 0x2ba3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3b0:
    // 0x2ba3b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba3b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba3b4:
    // 0x2ba3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3b8:
    // 0x2ba3b8: 0x500b0057  beql        $zero, $t3, . + 4 + (0x57 << 2)
label_2ba3bc:
    if (ctx->pc == 0x2BA3BCu) {
        ctx->pc = 0x2BA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B8u;
        // 0x2ba3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3C0u;
        goto label_2ba3c0;
    }
    ctx->pc = 0x2BA3B8u;
    {
        const bool branch_taken_0x2ba3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba3b8) {
            ctx->pc = 0x2BA3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA3B8u;
            // 0x2ba3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA518u;
            goto label_2ba518;
        }
    }
    ctx->pc = 0x2BA3C0u;
label_2ba3c0:
    // 0x2ba3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba3c4:
    // 0x2ba3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3c8:
    // 0x2ba3c8: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2ba3cc:
    if (ctx->pc == 0x2BA3CCu) {
        ctx->pc = 0x2BA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3C8u;
        // 0x2ba3cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3D0u;
        goto label_2ba3d0;
    }
    ctx->pc = 0x2BA3C8u;
    {
        const bool branch_taken_0x2ba3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3C8u;
        // 0x2ba3cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3c8) {
            ctx->pc = 0x2BA4CCu;
            goto label_2ba4cc;
        }
    }
    ctx->pc = 0x2BA3D0u;
label_2ba3d0:
    // 0x2ba3d0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2ba3d4:
    if (ctx->pc == 0x2BA3D4u) {
        ctx->pc = 0x2BA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D0u;
        // 0x2ba3d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3D8u;
        goto label_2ba3d8;
    }
    ctx->pc = 0x2BA3D0u;
    {
        const bool branch_taken_0x2ba3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D0u;
        // 0x2ba3d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3d0) {
            ctx->pc = 0x2BA3D8u;
            goto label_2ba3d8;
        }
    }
    ctx->pc = 0x2BA3D8u;
label_2ba3d8:
    // 0x2ba3d8: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2ba3dc:
    if (ctx->pc == 0x2BA3DCu) {
        ctx->pc = 0x2BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D8u;
        // 0x2ba3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3E0u;
        goto label_2ba3e0;
    }
    ctx->pc = 0x2BA3D8u;
    {
        const bool branch_taken_0x2ba3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D8u;
        // 0x2ba3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3d8) {
            ctx->pc = 0x2BA3DCu;
            goto label_2ba3dc;
        }
    }
    ctx->pc = 0x2BA3E0u;
label_2ba3e0:
    // 0x2ba3e0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba3e4:
    if (ctx->pc == 0x2BA3E4u) {
        ctx->pc = 0x2BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E0u;
        // 0x2ba3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3E8u;
        goto label_2ba3e8;
    }
    ctx->pc = 0x2BA3E0u;
    {
        const bool branch_taken_0x2ba3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E0u;
        // 0x2ba3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3e0) {
            ctx->pc = 0x2C03E4u;
            return;
        }
    }
    ctx->pc = 0x2BA3E8u;
label_2ba3e8:
    // 0x2ba3e8: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2ba3ec:
    if (ctx->pc == 0x2BA3ECu) {
        ctx->pc = 0x2BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E8u;
        // 0x2ba3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3F0u;
        goto label_2ba3f0;
    }
    ctx->pc = 0x2BA3E8u;
    {
        const bool branch_taken_0x2ba3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E8u;
        // 0x2ba3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3e8) {
            ctx->pc = 0x2C046Cu;
            return;
        }
    }
    ctx->pc = 0x2BA3F0u;
label_2ba3f0:
    // 0x2ba3f0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba3f0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba3f4:
    // 0x2ba3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3f8:
    // 0x2ba3f8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba3fc:
    if (ctx->pc == 0x2BA3FCu) {
        ctx->pc = 0x2BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3F8u;
        // 0x2ba3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA400u;
        goto label_2ba400;
    }
    ctx->pc = 0x2BA3F8u;
    {
        const bool branch_taken_0x2ba3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3F8u;
        // 0x2ba3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3f8) {
            ctx->pc = 0x2BA3FCu;
            goto label_2ba3fc;
        }
    }
    ctx->pc = 0x2BA400u;
label_2ba400:
    // 0x2ba400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba404:
    // 0x2ba404: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba404u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2ba408:
    // 0x2ba408: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba408u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba40c:
    // 0x2ba40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba410:
    // 0x2ba410: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba410u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba414:
    // 0x2ba414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba418:
    // 0x2ba418: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba418u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba41c:
    // 0x2ba41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba420:
    // 0x2ba420: 0x42020055  .word       0x42020055                   # INVALID     $s0, $v0, 0x55 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba420u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x15 at 0x2BA420 raw=0x42020055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba424:
    // 0x2ba424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba428:
    // 0x2ba428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba42c:
    // 0x2ba42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba430:
    // 0x2ba430: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba434:
    if (ctx->pc == 0x2BA434u) {
        ctx->pc = 0x2BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA430u;
        // 0x2ba434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA438u;
        goto label_2ba438;
    }
    ctx->pc = 0x2BA430u;
    {
        const bool branch_taken_0x2ba430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA430u;
        // 0x2ba434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba430) {
            ctx->pc = 0x2CE438u;
            return;
        }
    }
    ctx->pc = 0x2BA438u;
label_2ba438:
    // 0x2ba438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba43c:
    // 0x2ba43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba440:
    // 0x2ba440: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba444:
    if (ctx->pc == 0x2BA444u) {
        ctx->pc = 0x2BA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA440u;
        // 0x2ba444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA448u;
        goto label_2ba448;
    }
    ctx->pc = 0x2BA440u;
    {
        const bool branch_taken_0x2ba440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba440) {
            ctx->pc = 0x2BA444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA440u;
            // 0x2ba444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC430u;
            { ctx->pc = 0x2bc430; return; }
        }
    }
    ctx->pc = 0x2BA448u;
label_2ba448:
    // 0x2ba448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba44c:
    // 0x2ba44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba450:
    // 0x2ba450: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba454:
    if (ctx->pc == 0x2BA454u) {
        ctx->pc = 0x2BA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA450u;
        // 0x2ba454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA458u;
        goto label_2ba458;
    }
    ctx->pc = 0x2BA450u;
    {
        const bool branch_taken_0x2ba450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA450u;
        // 0x2ba454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba450) {
            ctx->pc = 0x2C04D4u;
            return;
        }
    }
    ctx->pc = 0x2BA458u;
label_2ba458:
    // 0x2ba458: 0x42020045  .word       0x42020045                   # INVALID     $s0, $v0, 0x45 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba458u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2BA458 raw=0x42020045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba45c:
    // 0x2ba45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba460:
    // 0x2ba460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba464:
    // 0x2ba464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba468:
    // 0x2ba468: 0x500b0041  beql        $zero, $t3, . + 4 + (0x41 << 2)
label_2ba46c:
    if (ctx->pc == 0x2BA46Cu) {
        ctx->pc = 0x2BA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA468u;
        // 0x2ba46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA470u;
        goto label_2ba470;
    }
    ctx->pc = 0x2BA468u;
    {
        const bool branch_taken_0x2ba468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba468) {
            ctx->pc = 0x2BA46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA468u;
            // 0x2ba46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA570u;
            goto label_2ba570;
        }
    }
    ctx->pc = 0x2BA470u;
label_2ba470:
    // 0x2ba470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba474:
    // 0x2ba474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba478:
    // 0x2ba478: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2ba47c:
    if (ctx->pc == 0x2BA47Cu) {
        ctx->pc = 0x2BA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA478u;
        // 0x2ba47c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA480u;
        goto label_2ba480;
    }
    ctx->pc = 0x2BA478u;
    {
        const bool branch_taken_0x2ba478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA478u;
        // 0x2ba47c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba478) {
            ctx->pc = 0x2BAC7Cu;
            { ctx->pc = 0x2bac7c; return; }
        }
    }
    ctx->pc = 0x2BA480u;
label_2ba480:
    // 0x2ba480: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2ba484:
    if (ctx->pc == 0x2BA484u) {
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA488u;
        goto label_2ba488;
    }
    ctx->pc = 0x2BA480u;
    {
        const bool branch_taken_0x2ba480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba480) {
            ctx->pc = 0x2BA4A4u;
            goto label_2ba4a4;
        }
    }
    ctx->pc = 0x2BA488u;
label_2ba488:
    // 0x2ba488: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2ba48c:
    if (ctx->pc == 0x2BA48Cu) {
        ctx->pc = 0x2BA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA488u;
        // 0x2ba48c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA490u;
        goto label_2ba490;
    }
    ctx->pc = 0x2BA488u;
    {
        const bool branch_taken_0x2ba488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA488u;
        // 0x2ba48c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba488) {
            ctx->pc = 0x2BA490u;
            goto label_2ba490;
        }
    }
    ctx->pc = 0x2BA490u;
label_2ba490:
    // 0x2ba490: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba494:
    if (ctx->pc == 0x2BA494u) {
        ctx->pc = 0x2BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA490u;
        // 0x2ba494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA498u;
        goto label_2ba498;
    }
    ctx->pc = 0x2BA490u;
    {
        const bool branch_taken_0x2ba490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA490u;
        // 0x2ba494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba490) {
            ctx->pc = 0x2C0514u;
            return;
        }
    }
    ctx->pc = 0x2BA498u;
label_2ba498:
    // 0x2ba498: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2ba49c:
    if (ctx->pc == 0x2BA49Cu) {
        ctx->pc = 0x2BA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA498u;
        // 0x2ba49c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4A0u;
        goto label_2ba4a0;
    }
    ctx->pc = 0x2BA498u;
    {
        const bool branch_taken_0x2ba498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA498u;
        // 0x2ba49c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba498) {
            ctx->pc = 0x2C049Cu;
            return;
        }
    }
    ctx->pc = 0x2BA4A0u;
label_2ba4a0:
    // 0x2ba4a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba4a4:
    // 0x2ba4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4a8:
    // 0x2ba4a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba4ac:
    if (ctx->pc == 0x2BA4ACu) {
        ctx->pc = 0x2BA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A8u;
        // 0x2ba4ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4B0u;
        goto label_2ba4b0;
    }
    ctx->pc = 0x2BA4A8u;
    {
        const bool branch_taken_0x2ba4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A8u;
        // 0x2ba4ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4a8) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA4B0u;
label_2ba4b0:
    // 0x2ba4b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4b4:
    // 0x2ba4b4: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba4b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2ba4b8:
    // 0x2ba4b8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba4b8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba4bc:
    // 0x2ba4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4c0:
    // 0x2ba4c0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba4c0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba4c4:
    // 0x2ba4c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4c8:
    // 0x2ba4c8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba4c8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba4cc:
    // 0x2ba4cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4d0:
    // 0x2ba4d0: 0x4202003f  .word       0x4202003F                   # INVALID     $s0, $v0, 0x3F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba4d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2BA4D0 raw=0x4202003F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba4d4:
    // 0x2ba4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4d8:
    // 0x2ba4d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4dc:
    // 0x2ba4dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4e0:
    // 0x2ba4e0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba4e4:
    if (ctx->pc == 0x2BA4E4u) {
        ctx->pc = 0x2BA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4E0u;
        // 0x2ba4e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4E8u;
        goto label_2ba4e8;
    }
    ctx->pc = 0x2BA4E0u;
    {
        const bool branch_taken_0x2ba4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4E0u;
        // 0x2ba4e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4e0) {
            ctx->pc = 0x2CE4E8u;
            return;
        }
    }
    ctx->pc = 0x2BA4E8u;
label_2ba4e8:
    // 0x2ba4e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4ec:
    // 0x2ba4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4f0:
    // 0x2ba4f0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba4f4:
    if (ctx->pc == 0x2BA4F4u) {
        ctx->pc = 0x2BA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4F0u;
        // 0x2ba4f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4F8u;
        goto label_2ba4f8;
    }
    ctx->pc = 0x2BA4F0u;
    {
        const bool branch_taken_0x2ba4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba4f0) {
            ctx->pc = 0x2BA4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA4F0u;
            // 0x2ba4f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4E0u;
            { ctx->pc = 0x2bc4e0; return; }
        }
    }
    ctx->pc = 0x2BA4F8u;
label_2ba4f8:
    // 0x2ba4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4fc:
    // 0x2ba4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba500:
    // 0x2ba500: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba504:
    if (ctx->pc == 0x2BA504u) {
        ctx->pc = 0x2BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA500u;
        // 0x2ba504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA508u;
        goto label_2ba508;
    }
    ctx->pc = 0x2BA500u;
    {
        const bool branch_taken_0x2ba500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA500u;
        // 0x2ba504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba500) {
            ctx->pc = 0x2C0504u;
            return;
        }
    }
    ctx->pc = 0x2BA508u;
label_2ba508:
    // 0x2ba508: 0x4202002f  .word       0x4202002F                   # INVALID     $s0, $v0, 0x2F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba508u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2F at 0x2BA508 raw=0x4202002F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba50c:
    // 0x2ba50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba510:
    // 0x2ba510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba514:
    // 0x2ba514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba518:
    // 0x2ba518: 0x500b002b  beql        $zero, $t3, . + 4 + (0x2B << 2)
label_2ba51c:
    if (ctx->pc == 0x2BA51Cu) {
        ctx->pc = 0x2BA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA518u;
        // 0x2ba51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA520u;
        goto label_2ba520;
    }
    ctx->pc = 0x2BA518u;
    {
        const bool branch_taken_0x2ba518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba518) {
            ctx->pc = 0x2BA51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA518u;
            // 0x2ba51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA5C8u;
            goto label_2ba5c8;
        }
    }
    ctx->pc = 0x2BA520u;
label_2ba520:
    // 0x2ba520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba524:
    // 0x2ba524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba528:
    // 0x2ba528: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2ba52c:
    if (ctx->pc == 0x2BA52Cu) {
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA530u;
        goto label_2ba530;
    }
    ctx->pc = 0x2BA528u;
    {
        const bool branch_taken_0x2ba528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba528) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA530u;
label_2ba530:
    // 0x2ba530: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2ba534:
    if (ctx->pc == 0x2BA534u) {
        ctx->pc = 0x2BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA530u;
        // 0x2ba534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA538u;
        goto label_2ba538;
    }
    ctx->pc = 0x2BA530u;
    {
        const bool branch_taken_0x2ba530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA530u;
        // 0x2ba534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba530) {
            ctx->pc = 0x2BA544u;
            goto label_2ba544;
        }
    }
    ctx->pc = 0x2BA538u;
label_2ba538:
    // 0x2ba538: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2ba53c:
    if (ctx->pc == 0x2BA53Cu) {
        ctx->pc = 0x2BA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA538u;
        // 0x2ba53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA540u;
        goto label_2ba540;
    }
    ctx->pc = 0x2BA538u;
    {
        const bool branch_taken_0x2ba538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA538u;
        // 0x2ba53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba538) {
            ctx->pc = 0x2BA540u;
            goto label_2ba540;
        }
    }
    ctx->pc = 0x2BA540u;
label_2ba540:
    // 0x2ba540: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba544:
    if (ctx->pc == 0x2BA544u) {
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA548u;
        goto label_2ba548;
    }
    ctx->pc = 0x2BA540u;
    {
        const bool branch_taken_0x2ba540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba540) {
            ctx->pc = 0x2C0544u;
            return;
        }
    }
    ctx->pc = 0x2BA548u;
label_2ba548:
    // 0x2ba548: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2ba54c:
    if (ctx->pc == 0x2BA54Cu) {
        ctx->pc = 0x2BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA548u;
        // 0x2ba54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA550u;
        goto label_2ba550;
    }
    ctx->pc = 0x2BA548u;
    {
        const bool branch_taken_0x2ba548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA548u;
        // 0x2ba54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba548) {
            ctx->pc = 0x2C05CCu;
            return;
        }
    }
    ctx->pc = 0x2BA550u;
label_2ba550:
    // 0x2ba550: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba550u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba554:
    // 0x2ba554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba558:
    // 0x2ba558: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba55c:
    if (ctx->pc == 0x2BA55Cu) {
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA558u;
        // 0x2ba55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA560u;
        goto label_2ba560;
    }
    ctx->pc = 0x2BA558u;
    {
        const bool branch_taken_0x2ba558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA558u;
        // 0x2ba55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba558) {
            ctx->pc = 0x2BA55Cu;
            goto label_2ba55c;
        }
    }
    ctx->pc = 0x2BA560u;
label_2ba560:
    // 0x2ba560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba564:
    // 0x2ba564: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba564u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2ba568:
    // 0x2ba568: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba568u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba56c:
    // 0x2ba56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba570:
    // 0x2ba570: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba570u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba574:
    // 0x2ba574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba578:
    // 0x2ba578: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba578u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba57c:
    // 0x2ba57c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba57cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba580:
    // 0x2ba580: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba580u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BA580 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba584:
    // 0x2ba584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba588:
    // 0x2ba588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba58c:
    // 0x2ba58c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba58cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba590:
    // 0x2ba590: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba594:
    if (ctx->pc == 0x2BA594u) {
        ctx->pc = 0x2BA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA590u;
        // 0x2ba594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA598u;
        goto label_2ba598;
    }
    ctx->pc = 0x2BA590u;
    {
        const bool branch_taken_0x2ba590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA590u;
        // 0x2ba594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba590) {
            ctx->pc = 0x2CE598u;
            return;
        }
    }
    ctx->pc = 0x2BA598u;
label_2ba598:
    // 0x2ba598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba59c:
    // 0x2ba59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5a0:
    // 0x2ba5a0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba5a4:
    if (ctx->pc == 0x2BA5A4u) {
        ctx->pc = 0x2BA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5A0u;
        // 0x2ba5a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5A8u;
        goto label_2ba5a8;
    }
    ctx->pc = 0x2BA5A0u;
    {
        const bool branch_taken_0x2ba5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba5a0) {
            ctx->pc = 0x2BA5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5A0u;
            // 0x2ba5a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC590u;
            { ctx->pc = 0x2bc590; return; }
        }
    }
    ctx->pc = 0x2BA5A8u;
label_2ba5a8:
    // 0x2ba5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5ac:
    // 0x2ba5ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5b0:
    // 0x2ba5b0: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba5b4:
    if (ctx->pc == 0x2BA5B4u) {
        ctx->pc = 0x2BA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5B0u;
        // 0x2ba5b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5B8u;
        goto label_2ba5b8;
    }
    ctx->pc = 0x2BA5B0u;
    {
        const bool branch_taken_0x2ba5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5B0u;
        // 0x2ba5b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5b0) {
            ctx->pc = 0x2C0634u;
            return;
        }
    }
    ctx->pc = 0x2BA5B8u;
label_2ba5b8:
    // 0x2ba5b8: 0x42020019  .word       0x42020019                   # INVALID     $s0, $v0, 0x19 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba5b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x19 at 0x2BA5B8 raw=0x42020019"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba5bc:
    // 0x2ba5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5c0:
    // 0x2ba5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5c4:
    // 0x2ba5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5c8:
    // 0x2ba5c8: 0x500b0015  beql        $zero, $t3, . + 4 + (0x15 << 2)
label_2ba5cc:
    if (ctx->pc == 0x2BA5CCu) {
        ctx->pc = 0x2BA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5C8u;
        // 0x2ba5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5D0u;
        goto label_2ba5d0;
    }
    ctx->pc = 0x2BA5C8u;
    {
        const bool branch_taken_0x2ba5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba5c8) {
            ctx->pc = 0x2BA5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5C8u;
            // 0x2ba5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA620u;
            goto label_2ba620;
        }
    }
    ctx->pc = 0x2BA5D0u;
label_2ba5d0:
    // 0x2ba5d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5d4:
    // 0x2ba5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5d8:
    // 0x2ba5d8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba5d8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba5dc:
    // 0x2ba5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5e0:
    // 0x2ba5e0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2ba5e0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2ba5e4:
    // 0x2ba5e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5e8:
    // 0x2ba5e8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba5ec:
    if (ctx->pc == 0x2BA5ECu) {
        ctx->pc = 0x2BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E8u;
        // 0x2ba5ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5F0u;
        goto label_2ba5f0;
    }
    ctx->pc = 0x2BA5E8u;
    {
        const bool branch_taken_0x2ba5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E8u;
        // 0x2ba5ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5e8) {
            ctx->pc = 0x2BA5ECu;
            goto label_2ba5ec;
        }
    }
    ctx->pc = 0x2BA5F0u;
label_2ba5f0:
    // 0x2ba5f0: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2ba5f4:
    if (ctx->pc == 0x2BA5F4u) {
        ctx->pc = 0x2BA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5F0u;
        // 0x2ba5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5F8u;
        goto label_2ba5f8;
    }
    ctx->pc = 0x2BA5F0u;
    {
        const bool branch_taken_0x2ba5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5F0u;
        // 0x2ba5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5f0) {
            ctx->pc = 0x2BA78Cu;
            goto label_2ba78c;
        }
    }
    ctx->pc = 0x2BA5F8u;
label_2ba5f8:
    // 0x2ba5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5fc:
    // 0x2ba5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba600:
    // 0x2ba600: 0x5203080e  beql        $s0, $v1, . + 4 + (0x80E << 2)
label_2ba604:
    if (ctx->pc == 0x2BA604u) {
        ctx->pc = 0x2BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA600u;
        // 0x2ba604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA608u;
        goto label_2ba608;
    }
    ctx->pc = 0x2BA600u;
    {
        const bool branch_taken_0x2ba600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ba600) {
            ctx->pc = 0x2BA604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA600u;
            // 0x2ba604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC63Cu;
            { ctx->pc = 0x2bc63c; return; }
        }
    }
    ctx->pc = 0x2BA608u;
label_2ba608:
    // 0x2ba608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba60c:
    // 0x2ba60c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba60cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba610:
    // 0x2ba610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba614:
    // 0x2ba614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba618:
    // 0x2ba618: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2ba61c:
    if (ctx->pc == 0x2BA61Cu) {
        ctx->pc = 0x2BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA618u;
        // 0x2ba61c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA620u;
        goto label_2ba620;
    }
    ctx->pc = 0x2BA618u;
    {
        const bool branch_taken_0x2ba618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA618u;
        // 0x2ba61c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba618) {
            ctx->pc = 0x2C071Cu;
            return;
        }
    }
    ctx->pc = 0x2BA620u;
label_2ba620:
    // 0x2ba620: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2ba620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2ba624:
    // 0x2ba624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba628:
    // 0x2ba628: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba628u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BA628 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba62c:
    // 0x2ba62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba630:
    // 0x2ba630: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2ba634:
    if (ctx->pc == 0x2BA634u) {
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA638u;
        goto label_2ba638;
    }
    ctx->pc = 0x2BA630u;
    {
        const bool branch_taken_0x2ba630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba630) {
            ctx->pc = 0x2BE638u;
            { ctx->pc = 0x2be638; return; }
        }
    }
    ctx->pc = 0x2BA638u;
label_2ba638:
    // 0x2ba638: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba63c:
    if (ctx->pc == 0x2BA63Cu) {
        ctx->pc = 0x2BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA638u;
        // 0x2ba63c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA640u;
        goto label_2ba640;
    }
    ctx->pc = 0x2BA638u;
    {
        const bool branch_taken_0x2ba638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA638u;
        // 0x2ba63c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba638) {
            ctx->pc = 0x2C06BCu;
            return;
        }
    }
    ctx->pc = 0x2BA640u;
label_2ba640:
    // 0x2ba640: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2ba644:
    if (ctx->pc == 0x2BA644u) {
        ctx->pc = 0x2BA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA640u;
        // 0x2ba644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA648u;
        goto label_2ba648;
    }
    ctx->pc = 0x2BA640u;
    {
        const bool branch_taken_0x2ba640 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA640u;
        // 0x2ba644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba640) {
            ctx->pc = 0x2D0640u;
            return;
        }
    }
    ctx->pc = 0x2BA648u;
label_2ba648:
    // 0x2ba648: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba64c:
    if (ctx->pc == 0x2BA64Cu) {
        ctx->pc = 0x2BA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA648u;
        // 0x2ba64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA650u;
        goto label_2ba650;
    }
    ctx->pc = 0x2BA648u;
    {
        const bool branch_taken_0x2ba648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA648u;
        // 0x2ba64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba648) {
            ctx->pc = 0x2D0650u;
            return;
        }
    }
    ctx->pc = 0x2BA650u;
label_2ba650:
    // 0x2ba650: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba650u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2ba654:
    // 0x2ba654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba658:
    // 0x2ba658: 0xb0b1000  j           func_C2C4000
label_2ba65c:
    if (ctx->pc == 0x2BA65Cu) {
        ctx->pc = 0x2BA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA658u;
        // 0x2ba65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA660u;
        goto label_2ba660;
    }
    ctx->pc = 0x2BA658u;
    ctx->pc = 0x2BA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA658u;
    // 0x2ba65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BA658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba660u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2BA660 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba664:
    // 0x2ba664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba668:
    // 0x2ba668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba66c:
    // 0x2ba66c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba66cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba670:
    // 0x2ba670: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2ba670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2ba674:
    // 0x2ba674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba678:
    // 0x2ba678: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba678u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA678 raw=0x48007800");
 /* MITIGATED */
label_2ba67c:
    // 0x2ba67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba680:
    // 0x2ba680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba684:
    // 0x2ba684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba688:
    // 0x2ba688: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2ba68c:
    // 0x2ba68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba690:
    // 0x2ba690: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BA690 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba694:
    // 0x2ba694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba698:
    // 0x2ba698: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba698u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2ba69c:
    // 0x2ba69c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba69cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6a0:
    // 0x2ba6a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6a4:
    // 0x2ba6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6a8:
    // 0x2ba6a8: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2ba6a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2ba6ac:
    // 0x2ba6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6b0:
    // 0x2ba6b0: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2ba6b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2ba6b4:
    // 0x2ba6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6b8:
    // 0x2ba6b8: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2ba6b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2ba6bc:
    // 0x2ba6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6c0:
    // 0x2ba6c0: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba6c0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA6C0 raw=0x48001000");
 /* MITIGATED */
label_2ba6c4:
    // 0x2ba6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6c8:
    // 0x2ba6c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6cc:
    // 0x2ba6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6d0:
    // 0x2ba6d0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba6d0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba6d4:
    // 0x2ba6d4: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba6d4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2ba6d8:
    // 0x2ba6d8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba6d8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba6dc:
    // 0x2ba6dc: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba6dcu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2ba6e0:
    // 0x2ba6e0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba6e0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba6e4:
    // 0x2ba6e4: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba6e4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2ba6e8:
    // 0x2ba6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6ec:
    // 0x2ba6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6f0:
    // 0x2ba6f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6f4:
    // 0x2ba6f4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba6f4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2ba6f8:
    // 0x2ba6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6fc:
    // 0x2ba6fc: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba6fcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2ba700:
    // 0x2ba700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba704:
    // 0x2ba704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba708:
    // 0x2ba708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba70c:
    // 0x2ba70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba710:
    // 0x2ba710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba714:
    // 0x2ba714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba718:
    // 0x2ba718: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2ba718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2ba71c:
    // 0x2ba71c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba71cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba720:
    // 0x2ba720: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2ba724:
    // 0x2ba724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba728:
    // 0x2ba728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba72c:
    // 0x2ba72c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba72cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba730:
    // 0x2ba730: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2ba734:
    if (ctx->pc == 0x2BA734u) {
        ctx->pc = 0x2BA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA730u;
        // 0x2ba734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA738u;
        goto label_2ba738;
    }
    ctx->pc = 0x2BA730u;
    {
        const bool branch_taken_0x2ba730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba730) {
            ctx->pc = 0x2BA734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA730u;
            // 0x2ba734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA770u;
            goto label_2ba770;
        }
    }
    ctx->pc = 0x2BA738u;
label_2ba738:
    // 0x2ba738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba73c:
    // 0x2ba73c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba73cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba740:
    // 0x2ba740: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2ba744:
    // 0x2ba744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba748:
    // 0x2ba748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba74c:
    // 0x2ba74c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba74cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba750:
    // 0x2ba750: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2ba754:
    if (ctx->pc == 0x2BA754u) {
        ctx->pc = 0x2BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA750u;
        // 0x2ba754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA758u;
        goto label_2ba758;
    }
    ctx->pc = 0x2BA750u;
    {
        const bool branch_taken_0x2ba750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba750) {
            ctx->pc = 0x2BA754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA750u;
            // 0x2ba754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA760u;
            goto label_2ba760;
        }
    }
    ctx->pc = 0x2BA758u;
label_2ba758:
    // 0x2ba758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba75c:
    // 0x2ba75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba760:
    // 0x2ba760: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba760u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba764:
    // 0x2ba764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba768:
    // 0x2ba768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba76c:
    // 0x2ba76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba770:
    // 0x2ba770: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba770u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BA770 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba774:
    // 0x2ba774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba778:
    // 0x2ba778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba77c:
    // 0x2ba77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba780:
    // 0x2ba780: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2ba780u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2ba784:
    // 0x2ba784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba788:
    // 0x2ba788: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2ba788u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2ba78c:
    // 0x2ba78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba790:
    // 0x2ba790: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2ba790u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2ba794:
    // 0x2ba794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba798:
    // 0x2ba798: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba79c:
    if (ctx->pc == 0x2BA79Cu) {
        ctx->pc = 0x2BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA798u;
        // 0x2ba79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7A0u;
        goto label_2ba7a0;
    }
    ctx->pc = 0x2BA798u;
    {
        const bool branch_taken_0x2ba798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA798u;
        // 0x2ba79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba798) {
            ctx->pc = 0x2D07A0u;
            return;
        }
    }
    ctx->pc = 0x2BA7A0u;
label_2ba7a0:
    // 0x2ba7a0: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba7a0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba7a4:
    // 0x2ba7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7a8:
    // 0x2ba7a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7ac:
    // 0x2ba7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7b0:
    // 0x2ba7b0: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2ba7b0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2ba7b4:
    // 0x2ba7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7b8:
    // 0x2ba7b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7bc:
    // 0x2ba7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7c0:
    // 0x2ba7c0: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2ba7c4:
    if (ctx->pc == 0x2BA7C4u) {
        ctx->pc = 0x2BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7C0u;
        // 0x2ba7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7C8u;
        goto label_2ba7c8;
    }
    ctx->pc = 0x2BA7C0u;
    {
        const bool branch_taken_0x2ba7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba7c0) {
            ctx->pc = 0x2BA7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA7C0u;
            // 0x2ba7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA7F4u;
            goto label_2ba7f4;
        }
    }
    ctx->pc = 0x2BA7C8u;
label_2ba7c8:
    // 0x2ba7c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7cc:
    // 0x2ba7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7d0:
    // 0x2ba7d0: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba7d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2BA7D0 raw=0x42010010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba7d4:
    // 0x2ba7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7d8:
    // 0x2ba7d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7dc:
    // 0x2ba7dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7e0:
    // 0x2ba7e0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2ba7e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2ba7e4:
    // 0x2ba7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7e8:
    // 0x2ba7e8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2ba7ec:
    // 0x2ba7ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7f0:
    // 0x2ba7f0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2ba7f4:
    // 0x2ba7f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7f8:
    // 0x2ba7f8: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2ba7f8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2ba7fc:
    // 0x2ba7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba800:
    // 0x2ba800: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2ba800u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2ba804:
    // 0x2ba804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba808:
    // 0x2ba808: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2ba808u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2ba80c:
    // 0x2ba80c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba80cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba810:
    // 0x2ba810: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2ba814:
    if (ctx->pc == 0x2BA814u) {
        ctx->pc = 0x2BA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA810u;
        // 0x2ba814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA818u;
        goto label_2ba818;
    }
    ctx->pc = 0x2BA810u;
    {
        const bool branch_taken_0x2ba810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA810u;
        // 0x2ba814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba810) {
            ctx->pc = 0x2D081Cu;
            return;
        }
    }
    ctx->pc = 0x2BA818u;
label_2ba818:
    // 0x2ba818: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba818u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba81c:
    // 0x2ba81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba820:
    // 0x2ba820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba824:
    // 0x2ba824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba828:
    // 0x2ba828: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2ba828u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2ba82c:
    // 0x2ba82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba830:
    // 0x2ba830: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2ba830u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2ba834:
    // 0x2ba834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba838:
    // 0x2ba838: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2ba83c:
    // 0x2ba83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba840:
    // 0x2ba840: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba844:
    if (ctx->pc == 0x2BA844u) {
        ctx->pc = 0x2BA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA840u;
        // 0x2ba844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA848u;
        goto label_2ba848;
    }
    ctx->pc = 0x2BA840u;
    {
        const bool branch_taken_0x2ba840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA840u;
        // 0x2ba844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba840) {
            ctx->pc = 0x2D0848u;
            return;
        }
    }
    ctx->pc = 0x2BA848u;
label_2ba848:
    // 0x2ba848: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba848u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA848 raw=0x48001000");
 /* MITIGATED */
label_2ba84c:
    // 0x2ba84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba850:
    // 0x2ba850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba854:
    // 0x2ba854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba858:
    // 0x2ba858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba85c:
    // 0x2ba85c: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba85cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2ba860:
    // 0x2ba860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba864:
    // 0x2ba864: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2ba868:
    // 0x2ba868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba86c:
    // 0x2ba86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba870:
    // 0x2ba870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba874:
    // 0x2ba874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba878:
    // 0x2ba878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba87c:
    // 0x2ba87c: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba87cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2ba880:
    // 0x2ba880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba884:
    // 0x2ba884: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba884u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2ba888:
    // 0x2ba888: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2ba888u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2ba88c:
    // 0x2ba88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba890:
    // 0x2ba890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba894:
    // 0x2ba894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba898:
    // 0x2ba898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba89c:
    // 0x2ba89c: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba89cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA89C raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba8a0:
    // 0x2ba8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8a4:
    // 0x2ba8a4: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba8a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA8A4 raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba8a8:
    // 0x2ba8a8: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2ba8ac:
    if (ctx->pc == 0x2BA8ACu) {
        ctx->pc = 0x2BA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8A8u;
        // 0x2ba8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8B0u;
        goto label_2ba8b0;
    }
    ctx->pc = 0x2BA8A8u;
    {
        const bool branch_taken_0x2ba8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2ba8a8) {
            ctx->pc = 0x2BA8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA8A8u;
            // 0x2ba8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA8B0u;
label_2ba8b0:
    // 0x2ba8b0: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2ba8b4:
    if (ctx->pc == 0x2BA8B4u) {
        ctx->pc = 0x2BA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8B0u;
        // 0x2ba8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8B8u;
        goto label_2ba8b8;
    }
    ctx->pc = 0x2BA8B0u;
    {
        const bool branch_taken_0x2ba8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2BA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8B0u;
        // 0x2ba8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8b0) {
            ctx->pc = 0x2D28B8u;
            return;
        }
    }
    ctx->pc = 0x2BA8B8u;
label_2ba8b8:
    // 0x2ba8b8: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2ba8b8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2ba8bc:
    // 0x2ba8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8c0:
    // 0x2ba8c0: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba8c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba8c4:
    // 0x2ba8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8c8:
    // 0x2ba8c8: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2ba8c8u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2ba8cc:
    // 0x2ba8cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8d0:
    // 0x2ba8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8d4:
    // 0x2ba8d4: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba8d4u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2ba8d8:
    // 0x2ba8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8dc:
    // 0x2ba8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8e0:
    // 0x2ba8e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8e4:
    // 0x2ba8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8e8:
    // 0x2ba8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8ec:
    // 0x2ba8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8f0:
    // 0x2ba8f0: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2ba8f0u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2ba8f4:
    // 0x2ba8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8f8:
    // 0x2ba8f8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2ba8fc:
    // 0x2ba8fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba900:
    // 0x2ba900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba904:
    // 0x2ba904: 0x1000760  .word       0x01000760                   # add         $zero, $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba904u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2ba908:
    // 0x2ba908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba90c:
    // 0x2ba90c: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba90cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2ba910:
    // 0x2ba910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba914:
    // 0x2ba914: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba914u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2ba918:
    // 0x2ba918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba91c:
    // 0x2ba91c: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba91cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2ba920:
    // 0x2ba920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba924:
    // 0x2ba924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba928:
    // 0x2ba928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba92c:
    // 0x2ba92c: 0x1fdce58  .word       0x01FDCE58                   # mult        $t9, $t7, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2ba930:
    // 0x2ba930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba934:
    // 0x2ba934: 0x1fdd698  .word       0x01FDD698                   # mult        $k0, $t7, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2ba938:
    // 0x2ba938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba93c:
    // 0x2ba93c: 0x1fdded8  .word       0x01FDDED8                   # mult        $k1, $t7, $sp # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2ba940:
    // 0x2ba940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba944:
    // 0x2ba944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba948:
    // 0x2ba948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba94c:
    // 0x2ba94c: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba94cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2ba950:
    // 0x2ba950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba954:
    // 0x2ba954: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba954u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2ba958:
    // 0x2ba958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba95c:
    // 0x2ba95c: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba95cu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2ba960:
    // 0x2ba960: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba960u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA960 raw=0x48000800");
 /* MITIGATED */
label_2ba964:
    // 0x2ba964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba968:
    // 0x2ba968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba96c:
    // 0x2ba96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba970:
    // 0x2ba970: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba970u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2ba974:
    // 0x2ba974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba978:
    // 0x2ba978: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2ba978u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2ba97c:
    // 0x2ba97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba980:
    // 0x2ba980: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2ba980u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2ba984:
    // 0x2ba984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba988:
    // 0x2ba988: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba988u;
    ctx->pc = 0x2BA98Cu;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2ba98c:
    // 0x2ba98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba990:
    // 0x2ba990: 0x1f4000d  break       500
    ctx->pc = 0x2ba990u;
    runtime->handleBreak(rdram, ctx);
label_2ba994:
    // 0x2ba994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba998:
    // 0x2ba998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba99c:
    // 0x2ba99c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba99cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2ba9a0:
    // 0x2ba9a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9a4:
    // 0x2ba9a4: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba9a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA9A4 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba9a8:
    // 0x2ba9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9ac:
    // 0x2ba9ac: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba9acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
    ctx->pc = 0x2ba9b0u;
    return;
}

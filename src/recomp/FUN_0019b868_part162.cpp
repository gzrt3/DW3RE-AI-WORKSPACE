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


void FUN_0019b868_part162(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ea238u: goto label_1ea238;
        case 0x1ea23cu: goto label_1ea23c;
        case 0x1ea240u: goto label_1ea240;
        case 0x1ea244u: goto label_1ea244;
        case 0x1ea248u: goto label_1ea248;
        case 0x1ea24cu: goto label_1ea24c;
        case 0x1ea250u: goto label_1ea250;
        case 0x1ea254u: goto label_1ea254;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea25cu: goto label_1ea25c;
        case 0x1ea260u: goto label_1ea260;
        case 0x1ea264u: goto label_1ea264;
        case 0x1ea268u: goto label_1ea268;
        case 0x1ea26cu: goto label_1ea26c;
        case 0x1ea270u: goto label_1ea270;
        case 0x1ea274u: goto label_1ea274;
        case 0x1ea278u: goto label_1ea278;
        case 0x1ea27cu: goto label_1ea27c;
        case 0x1ea280u: goto label_1ea280;
        case 0x1ea284u: goto label_1ea284;
        case 0x1ea288u: goto label_1ea288;
        case 0x1ea28cu: goto label_1ea28c;
        case 0x1ea290u: goto label_1ea290;
        case 0x1ea294u: goto label_1ea294;
        case 0x1ea298u: goto label_1ea298;
        case 0x1ea29cu: goto label_1ea29c;
        case 0x1ea2a0u: goto label_1ea2a0;
        case 0x1ea2a4u: goto label_1ea2a4;
        case 0x1ea2a8u: goto label_1ea2a8;
        case 0x1ea2acu: goto label_1ea2ac;
        case 0x1ea2b0u: goto label_1ea2b0;
        case 0x1ea2b4u: goto label_1ea2b4;
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2bcu: goto label_1ea2bc;
        case 0x1ea2c0u: goto label_1ea2c0;
        case 0x1ea2c4u: goto label_1ea2c4;
        case 0x1ea2c8u: goto label_1ea2c8;
        case 0x1ea2ccu: goto label_1ea2cc;
        case 0x1ea2d0u: goto label_1ea2d0;
        case 0x1ea2d4u: goto label_1ea2d4;
        case 0x1ea2d8u: goto label_1ea2d8;
        case 0x1ea2dcu: goto label_1ea2dc;
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea2e4u: goto label_1ea2e4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2ecu: goto label_1ea2ec;
        case 0x1ea2f0u: goto label_1ea2f0;
        case 0x1ea2f4u: goto label_1ea2f4;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea300u: goto label_1ea300;
        case 0x1ea304u: goto label_1ea304;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea30cu: goto label_1ea30c;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea314u: goto label_1ea314;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea31cu: goto label_1ea31c;
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea348u: goto label_1ea348;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea354u: goto label_1ea354;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea35cu: goto label_1ea35c;
        case 0x1ea360u: goto label_1ea360;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea36cu: goto label_1ea36c;
        case 0x1ea370u: goto label_1ea370;
        case 0x1ea374u: goto label_1ea374;
        case 0x1ea378u: goto label_1ea378;
        case 0x1ea37cu: goto label_1ea37c;
        case 0x1ea380u: goto label_1ea380;
        case 0x1ea384u: goto label_1ea384;
        case 0x1ea388u: goto label_1ea388;
        case 0x1ea38cu: goto label_1ea38c;
        case 0x1ea390u: goto label_1ea390;
        case 0x1ea394u: goto label_1ea394;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea3a4u: goto label_1ea3a4;
        case 0x1ea3a8u: goto label_1ea3a8;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3b4u: goto label_1ea3b4;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3bcu: goto label_1ea3bc;
        case 0x1ea3c0u: goto label_1ea3c0;
        case 0x1ea3c4u: goto label_1ea3c4;
        case 0x1ea3c8u: goto label_1ea3c8;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3d4u: goto label_1ea3d4;
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea3e0u: goto label_1ea3e0;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea3e8u: goto label_1ea3e8;
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f0u: goto label_1ea3f0;
        case 0x1ea3f4u: goto label_1ea3f4;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea3fcu: goto label_1ea3fc;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea408u: goto label_1ea408;
        case 0x1ea40cu: goto label_1ea40c;
        case 0x1ea410u: goto label_1ea410;
        case 0x1ea414u: goto label_1ea414;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea41cu: goto label_1ea41c;
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea590u: goto label_1ea590;
        case 0x1ea594u: goto label_1ea594;
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea59cu: goto label_1ea59c;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5a8u: goto label_1ea5a8;
        case 0x1ea5acu: goto label_1ea5ac;
        case 0x1ea5b0u: goto label_1ea5b0;
        case 0x1ea5b4u: goto label_1ea5b4;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5c0u: goto label_1ea5c0;
        case 0x1ea5c4u: goto label_1ea5c4;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea5d0u: goto label_1ea5d0;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5dcu: goto label_1ea5dc;
        case 0x1ea5e0u: goto label_1ea5e0;
        case 0x1ea5e4u: goto label_1ea5e4;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea5ecu: goto label_1ea5ec;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f4u: goto label_1ea5f4;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea5fcu: goto label_1ea5fc;
        case 0x1ea600u: goto label_1ea600;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea608u: goto label_1ea608;
        case 0x1ea60cu: goto label_1ea60c;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea614u: goto label_1ea614;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea61cu: goto label_1ea61c;
        case 0x1ea620u: goto label_1ea620;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea638u: goto label_1ea638;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea640u: goto label_1ea640;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea648u: goto label_1ea648;
        case 0x1ea64cu: goto label_1ea64c;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea654u: goto label_1ea654;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea660u: goto label_1ea660;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea668u: goto label_1ea668;
        case 0x1ea66cu: goto label_1ea66c;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea674u: goto label_1ea674;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea67cu: goto label_1ea67c;
        case 0x1ea680u: goto label_1ea680;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea688u: goto label_1ea688;
        case 0x1ea68cu: goto label_1ea68c;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea694u: goto label_1ea694;
        case 0x1ea698u: goto label_1ea698;
        case 0x1ea69cu: goto label_1ea69c;
        case 0x1ea6a0u: goto label_1ea6a0;
        case 0x1ea6a4u: goto label_1ea6a4;
        case 0x1ea6a8u: goto label_1ea6a8;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6b0u: goto label_1ea6b0;
        case 0x1ea6b4u: goto label_1ea6b4;
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea6bcu: goto label_1ea6bc;
        case 0x1ea6c0u: goto label_1ea6c0;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6c8u: goto label_1ea6c8;
        case 0x1ea6ccu: goto label_1ea6cc;
        case 0x1ea6d0u: goto label_1ea6d0;
        case 0x1ea6d4u: goto label_1ea6d4;
        case 0x1ea6d8u: goto label_1ea6d8;
        case 0x1ea6dcu: goto label_1ea6dc;
        case 0x1ea6e0u: goto label_1ea6e0;
        case 0x1ea6e4u: goto label_1ea6e4;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea6ecu: goto label_1ea6ec;
        case 0x1ea6f0u: goto label_1ea6f0;
        case 0x1ea6f4u: goto label_1ea6f4;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea6fcu: goto label_1ea6fc;
        case 0x1ea700u: goto label_1ea700;
        case 0x1ea704u: goto label_1ea704;
        case 0x1ea708u: goto label_1ea708;
        case 0x1ea70cu: goto label_1ea70c;
        case 0x1ea710u: goto label_1ea710;
        case 0x1ea714u: goto label_1ea714;
        case 0x1ea718u: goto label_1ea718;
        case 0x1ea71cu: goto label_1ea71c;
        case 0x1ea720u: goto label_1ea720;
        case 0x1ea724u: goto label_1ea724;
        case 0x1ea728u: goto label_1ea728;
        case 0x1ea72cu: goto label_1ea72c;
        case 0x1ea730u: goto label_1ea730;
        case 0x1ea734u: goto label_1ea734;
        case 0x1ea738u: goto label_1ea738;
        case 0x1ea73cu: goto label_1ea73c;
        case 0x1ea740u: goto label_1ea740;
        case 0x1ea744u: goto label_1ea744;
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea74cu: goto label_1ea74c;
        case 0x1ea750u: goto label_1ea750;
        case 0x1ea754u: goto label_1ea754;
        case 0x1ea758u: goto label_1ea758;
        case 0x1ea75cu: goto label_1ea75c;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea764u: goto label_1ea764;
        case 0x1ea768u: goto label_1ea768;
        case 0x1ea76cu: goto label_1ea76c;
        case 0x1ea770u: goto label_1ea770;
        case 0x1ea774u: goto label_1ea774;
        case 0x1ea778u: goto label_1ea778;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea780u: goto label_1ea780;
        case 0x1ea784u: goto label_1ea784;
        case 0x1ea788u: goto label_1ea788;
        case 0x1ea78cu: goto label_1ea78c;
        case 0x1ea790u: goto label_1ea790;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea798u: goto label_1ea798;
        case 0x1ea79cu: goto label_1ea79c;
        case 0x1ea7a0u: goto label_1ea7a0;
        case 0x1ea7a4u: goto label_1ea7a4;
        case 0x1ea7a8u: goto label_1ea7a8;
        case 0x1ea7acu: goto label_1ea7ac;
        case 0x1ea7b0u: goto label_1ea7b0;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7b8u: goto label_1ea7b8;
        case 0x1ea7bcu: goto label_1ea7bc;
        case 0x1ea7c0u: goto label_1ea7c0;
        case 0x1ea7c4u: goto label_1ea7c4;
        case 0x1ea7c8u: goto label_1ea7c8;
        case 0x1ea7ccu: goto label_1ea7cc;
        case 0x1ea7d0u: goto label_1ea7d0;
        case 0x1ea7d4u: goto label_1ea7d4;
        case 0x1ea7d8u: goto label_1ea7d8;
        case 0x1ea7dcu: goto label_1ea7dc;
        case 0x1ea7e0u: goto label_1ea7e0;
        case 0x1ea7e4u: goto label_1ea7e4;
        case 0x1ea7e8u: goto label_1ea7e8;
        case 0x1ea7ecu: goto label_1ea7ec;
        case 0x1ea7f0u: goto label_1ea7f0;
        case 0x1ea7f4u: goto label_1ea7f4;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea804u: goto label_1ea804;
        case 0x1ea808u: goto label_1ea808;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea810u: goto label_1ea810;
        case 0x1ea814u: goto label_1ea814;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea81cu: goto label_1ea81c;
        case 0x1ea820u: goto label_1ea820;
        case 0x1ea824u: goto label_1ea824;
        case 0x1ea828u: goto label_1ea828;
        case 0x1ea82cu: goto label_1ea82c;
        case 0x1ea830u: goto label_1ea830;
        case 0x1ea834u: goto label_1ea834;
        case 0x1ea838u: goto label_1ea838;
        case 0x1ea83cu: goto label_1ea83c;
        case 0x1ea840u: goto label_1ea840;
        case 0x1ea844u: goto label_1ea844;
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea84cu: goto label_1ea84c;
        case 0x1ea850u: goto label_1ea850;
        case 0x1ea854u: goto label_1ea854;
        case 0x1ea858u: goto label_1ea858;
        case 0x1ea85cu: goto label_1ea85c;
        case 0x1ea860u: goto label_1ea860;
        case 0x1ea864u: goto label_1ea864;
        case 0x1ea868u: goto label_1ea868;
        case 0x1ea86cu: goto label_1ea86c;
        case 0x1ea870u: goto label_1ea870;
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea878u: goto label_1ea878;
        case 0x1ea87cu: goto label_1ea87c;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea884u: goto label_1ea884;
        case 0x1ea888u: goto label_1ea888;
        case 0x1ea88cu: goto label_1ea88c;
        case 0x1ea890u: goto label_1ea890;
        case 0x1ea894u: goto label_1ea894;
        case 0x1ea898u: goto label_1ea898;
        case 0x1ea89cu: goto label_1ea89c;
        case 0x1ea8a0u: goto label_1ea8a0;
        case 0x1ea8a4u: goto label_1ea8a4;
        case 0x1ea8a8u: goto label_1ea8a8;
        case 0x1ea8acu: goto label_1ea8ac;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8b4u: goto label_1ea8b4;
        case 0x1ea8b8u: goto label_1ea8b8;
        case 0x1ea8bcu: goto label_1ea8bc;
        case 0x1ea8c0u: goto label_1ea8c0;
        case 0x1ea8c4u: goto label_1ea8c4;
        case 0x1ea8c8u: goto label_1ea8c8;
        case 0x1ea8ccu: goto label_1ea8cc;
        case 0x1ea8d0u: goto label_1ea8d0;
        case 0x1ea8d4u: goto label_1ea8d4;
        case 0x1ea8d8u: goto label_1ea8d8;
        case 0x1ea8dcu: goto label_1ea8dc;
        case 0x1ea8e0u: goto label_1ea8e0;
        case 0x1ea8e4u: goto label_1ea8e4;
        case 0x1ea8e8u: goto label_1ea8e8;
        case 0x1ea8ecu: goto label_1ea8ec;
        case 0x1ea8f0u: goto label_1ea8f0;
        case 0x1ea8f4u: goto label_1ea8f4;
        case 0x1ea8f8u: goto label_1ea8f8;
        case 0x1ea8fcu: goto label_1ea8fc;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea904u: goto label_1ea904;
        case 0x1ea908u: goto label_1ea908;
        case 0x1ea90cu: goto label_1ea90c;
        case 0x1ea910u: goto label_1ea910;
        case 0x1ea914u: goto label_1ea914;
        case 0x1ea918u: goto label_1ea918;
        case 0x1ea91cu: goto label_1ea91c;
        case 0x1ea920u: goto label_1ea920;
        case 0x1ea924u: goto label_1ea924;
        case 0x1ea928u: goto label_1ea928;
        case 0x1ea92cu: goto label_1ea92c;
        case 0x1ea930u: goto label_1ea930;
        case 0x1ea934u: goto label_1ea934;
        case 0x1ea938u: goto label_1ea938;
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea940u: goto label_1ea940;
        case 0x1ea944u: goto label_1ea944;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea94cu: goto label_1ea94c;
        case 0x1ea950u: goto label_1ea950;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea958u: goto label_1ea958;
        case 0x1ea95cu: goto label_1ea95c;
        case 0x1ea960u: goto label_1ea960;
        case 0x1ea964u: goto label_1ea964;
        case 0x1ea968u: goto label_1ea968;
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea970u: goto label_1ea970;
        case 0x1ea974u: goto label_1ea974;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea97cu: goto label_1ea97c;
        case 0x1ea980u: goto label_1ea980;
        case 0x1ea984u: goto label_1ea984;
        case 0x1ea988u: goto label_1ea988;
        case 0x1ea98cu: goto label_1ea98c;
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea994u: goto label_1ea994;
        case 0x1ea998u: goto label_1ea998;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9a0u: goto label_1ea9a0;
        case 0x1ea9a4u: goto label_1ea9a4;
        case 0x1ea9a8u: goto label_1ea9a8;
        case 0x1ea9acu: goto label_1ea9ac;
        case 0x1ea9b0u: goto label_1ea9b0;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9b8u: goto label_1ea9b8;
        case 0x1ea9bcu: goto label_1ea9bc;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9c4u: goto label_1ea9c4;
        case 0x1ea9c8u: goto label_1ea9c8;
        case 0x1ea9ccu: goto label_1ea9cc;
        case 0x1ea9d0u: goto label_1ea9d0;
        case 0x1ea9d4u: goto label_1ea9d4;
        case 0x1ea9d8u: goto label_1ea9d8;
        case 0x1ea9dcu: goto label_1ea9dc;
        case 0x1ea9e0u: goto label_1ea9e0;
        case 0x1ea9e4u: goto label_1ea9e4;
        case 0x1ea9e8u: goto label_1ea9e8;
        case 0x1ea9ecu: goto label_1ea9ec;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9f4u: goto label_1ea9f4;
        case 0x1ea9f8u: goto label_1ea9f8;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa00u: goto label_1eaa00;
        case 0x1eaa04u: goto label_1eaa04;
        default: return;
    }

label_1ea238:
    // 0x1ea238: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x1ea238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ea23c:
    // 0x1ea23c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ea240:
    if (ctx->pc == 0x1EA240u) {
        ctx->pc = 0x1EA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA23Cu;
        // 0x1ea240: 0x240c3  sra         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA244u;
        goto label_1ea244;
    }
    ctx->pc = 0x1EA23Cu;
    {
        const bool branch_taken_0x1ea23c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA23Cu;
        // 0x1ea240: 0x240c3  sra         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea23c) {
            ctx->pc = 0x1EA24Cu;
            goto label_1ea24c;
        }
    }
    ctx->pc = 0x1EA244u;
label_1ea244:
    // 0x1ea244: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1ea244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1ea248:
    // 0x1ea248: 0x240c3  sra         $t0, $v0, 3
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
label_1ea24c:
    // 0x1ea24c: 0x8f868edc  lw          $a2, -0x7124($gp)
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938332)));
label_1ea250:
    // 0x1ea250: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x1ea250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ea254:
    // 0x1ea254: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ea258:
    if (ctx->pc == 0x1EA258u) {
        ctx->pc = 0x1EA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA254u;
        // 0x1ea258: 0x248c3  sra         $t1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA25Cu;
        goto label_1ea25c;
    }
    ctx->pc = 0x1EA254u;
    {
        const bool branch_taken_0x1ea254 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA254u;
        // 0x1ea258: 0x248c3  sra         $t1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea254) {
            ctx->pc = 0x1EA264u;
            goto label_1ea264;
        }
    }
    ctx->pc = 0x1EA25Cu;
label_1ea25c:
    // 0x1ea25c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1ea260:
    // 0x1ea260: 0x248c3  sra         $t1, $v0, 3
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
label_1ea264:
    // 0x1ea264: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x1ea264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1ea268:
    // 0x1ea268: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ea26c:
    if (ctx->pc == 0x1EA26Cu) {
        ctx->pc = 0x1EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA268u;
        // 0x1ea26c: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA270u;
        goto label_1ea270;
    }
    ctx->pc = 0x1EA268u;
    {
        const bool branch_taken_0x1ea268 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA268u;
        // 0x1ea26c: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea268) {
            ctx->pc = 0x1EA278u;
            goto label_1ea278;
        }
    }
    ctx->pc = 0x1EA270u;
label_1ea270:
    // 0x1ea270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ea274:
    // 0x1ea274: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x1ea274u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_1ea278:
    // 0x1ea278: 0x8f848eec  lw          $a0, -0x7114($gp)
    ctx->pc = 0x1ea278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
label_1ea27c:
    // 0x1ea27c: 0xc91023  subu        $v0, $a2, $t1
    ctx->pc = 0x1ea27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1ea280:
    // 0x1ea280: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1ea280u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1ea284:
    // 0x1ea284: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ea288:
    if (ctx->pc == 0x1EA288u) {
        ctx->pc = 0x1EA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA284u;
        // 0x1ea288: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA28Cu;
        goto label_1ea28c;
    }
    ctx->pc = 0x1EA284u;
    {
        const bool branch_taken_0x1ea284 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA284u;
        // 0x1ea288: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea284) {
            ctx->pc = 0x1EA294u;
            goto label_1ea294;
        }
    }
    ctx->pc = 0x1EA28Cu;
label_1ea28c:
    // 0x1ea28c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ea290:
    // 0x1ea290: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1ea290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1ea294:
    // 0x1ea294: 0x8f828ee8  lw          $v0, -0x7118($gp)
    ctx->pc = 0x1ea294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
label_1ea298:
    // 0x1ea298: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1ea298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea29c:
    // 0x1ea29c: 0x8f878ee4  lw          $a3, -0x711C($gp)
    ctx->pc = 0x1ea29cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1ea2a0:
    // 0x1ea2a0: 0xc07a98c  jal         func_1EA630
label_1ea2a4:
    if (ctx->pc == 0x1EA2A4u) {
        ctx->pc = 0x1EA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A0u;
        // 0x1ea2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2A8u;
        goto label_1ea2a8;
    }
    ctx->pc = 0x1EA2A0u;
    SET_GPR_U32(ctx, 31, 0x1EA2A8u);
    ctx->pc = 0x1EA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2A0u;
    // 0x1ea2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA630u;
    goto label_1ea630;
    ctx->pc = 0x1EA2A8u;
label_1ea2a8:
    // 0x1ea2a8: 0x8f838efc  lw          $v1, -0x7104($gp)
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1ea2ac:
    // 0x1ea2ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea2b0:
    // 0x1ea2b0: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
label_1ea2b4:
    if (ctx->pc == 0x1EA2B4u) {
        ctx->pc = 0x1EA2B8u;
        goto label_1ea2b8;
    }
    ctx->pc = 0x1EA2B0u;
    {
        const bool branch_taken_0x1ea2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea2b0) {
            ctx->pc = 0x1EA434u;
            goto label_1ea434;
        }
    }
    ctx->pc = 0x1EA2B8u;
label_1ea2b8:
    // 0x1ea2b8: 0x8f828ec8  lw          $v0, -0x7138($gp)
    ctx->pc = 0x1ea2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
label_1ea2bc:
    // 0x1ea2bc: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_1ea2c0:
    if (ctx->pc == 0x1EA2C0u) {
        ctx->pc = 0x1EA2C4u;
        goto label_1ea2c4;
    }
    ctx->pc = 0x1EA2BCu;
    {
        const bool branch_taken_0x1ea2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea2bc) {
            ctx->pc = 0x1EA434u;
            goto label_1ea434;
        }
    }
    ctx->pc = 0x1EA2C4u;
label_1ea2c4:
    // 0x1ea2c4: 0x8f828ee0  lw          $v0, -0x7120($gp)
    ctx->pc = 0x1ea2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938336)));
label_1ea2c8:
    // 0x1ea2c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ea2cc:
    if (ctx->pc == 0x1EA2CCu) {
        ctx->pc = 0x1EA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2C8u;
        // 0x1ea2cc: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2D0u;
        goto label_1ea2d0;
    }
    ctx->pc = 0x1EA2C8u;
    {
        const bool branch_taken_0x1ea2c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2C8u;
        // 0x1ea2cc: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2c8) {
            ctx->pc = 0x1EA2D8u;
            goto label_1ea2d8;
        }
    }
    ctx->pc = 0x1EA2D0u;
label_1ea2d0:
    // 0x1ea2d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ea2d4:
    // 0x1ea2d4: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_1ea2d8:
    // 0x1ea2d8: 0x8f848ee8  lw          $a0, -0x7118($gp)
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
label_1ea2dc:
    // 0x1ea2dc: 0x8f838edc  lw          $v1, -0x7124($gp)
    ctx->pc = 0x1ea2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938332)));
label_1ea2e0:
    // 0x1ea2e0: 0x8f858eec  lw          $a1, -0x7114($gp)
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
label_1ea2e4:
    // 0x1ea2e4: 0x8f828ec0  lw          $v0, -0x7140($gp)
    ctx->pc = 0x1ea2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
label_1ea2e8:
    // 0x1ea2e8: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea2ec:
    // 0x1ea2ec: 0xa6b821  addu        $s7, $a1, $a2
    ctx->pc = 0x1ea2ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ea2f0:
    // 0x1ea2f0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ea2f4:
    if (ctx->pc == 0x1EA2F4u) {
        ctx->pc = 0x1EA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F0u;
        // 0x1ea2f4: 0x3043001f  andi        $v1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2F8u;
        goto label_1ea2f8;
    }
    ctx->pc = 0x1EA2F0u;
    {
        const bool branch_taken_0x1ea2f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F0u;
        // 0x1ea2f4: 0x3043001f  andi        $v1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2f0) {
            ctx->pc = 0x1EA304u;
            goto label_1ea304;
        }
    }
    ctx->pc = 0x1EA2F8u;
label_1ea2f8:
    // 0x1ea2f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ea2fc:
    if (ctx->pc == 0x1EA2FCu) {
        ctx->pc = 0x1EA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F8u;
        // 0x1ea2fc: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA300u;
        goto label_1ea300;
    }
    ctx->pc = 0x1EA2F8u;
    {
        const bool branch_taken_0x1ea2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F8u;
        // 0x1ea2fc: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2f8) {
            ctx->pc = 0x1EA308u;
            goto label_1ea308;
        }
    }
    ctx->pc = 0x1EA300u;
label_1ea300:
    // 0x1ea300: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1ea300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1ea304:
    // 0x1ea304: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1ea304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ea308:
    // 0x1ea308: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1ea30c:
    if (ctx->pc == 0x1EA30Cu) {
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA308u;
        // 0x1ea30c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA310u;
        goto label_1ea310;
    }
    ctx->pc = 0x1EA308u;
    {
        const bool branch_taken_0x1ea308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA308u;
        // 0x1ea30c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea308) {
            ctx->pc = 0x1EA32Cu;
            goto label_1ea32c;
        }
    }
    ctx->pc = 0x1EA310u;
label_1ea310:
    // 0x1ea310: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ea314:
    // 0x1ea314: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ea318:
    if (ctx->pc == 0x1EA318u) {
        ctx->pc = 0x1EA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA314u;
        // 0x1ea318: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA31Cu;
        goto label_1ea31c;
    }
    ctx->pc = 0x1EA314u;
    {
        const bool branch_taken_0x1ea314 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA314u;
        // 0x1ea318: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea314) {
            ctx->pc = 0x1EA324u;
            goto label_1ea324;
        }
    }
    ctx->pc = 0x1EA31Cu;
label_1ea31c:
    // 0x1ea31c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ea31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ea320:
    // 0x1ea320: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ea320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ea324:
    // 0x1ea324: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ea328:
    if (ctx->pc == 0x1EA328u) {
        ctx->pc = 0x1EA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA324u;
        // 0x1ea328: 0x24550080  addiu       $s5, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA32Cu;
        goto label_1ea32c;
    }
    ctx->pc = 0x1EA324u;
    {
        const bool branch_taken_0x1ea324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA324u;
        // 0x1ea328: 0x24550080  addiu       $s5, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea324) {
            ctx->pc = 0x1EA348u;
            goto label_1ea348;
        }
    }
    ctx->pc = 0x1EA32Cu;
label_1ea32c:
    // 0x1ea32c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ea32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea330:
    // 0x1ea330: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ea330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ea334:
    // 0x1ea334: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ea338:
    if (ctx->pc == 0x1EA338u) {
        ctx->pc = 0x1EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA334u;
        // 0x1ea338: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA33Cu;
        goto label_1ea33c;
    }
    ctx->pc = 0x1EA334u;
    {
        const bool branch_taken_0x1ea334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA334u;
        // 0x1ea338: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea334) {
            ctx->pc = 0x1EA344u;
            goto label_1ea344;
        }
    }
    ctx->pc = 0x1EA33Cu;
label_1ea33c:
    // 0x1ea33c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ea33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ea340:
    // 0x1ea340: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ea344:
    // 0x1ea344: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1ea348:
    // 0x1ea348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea34c:
    // 0x1ea34c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ea34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea350:
    // 0x1ea350: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea354:
    // 0x1ea354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea358:
    // 0x1ea358: 0x232a021  addu        $s4, $s1, $s2
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1ea35c:
    // 0x1ea35c: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x1ea35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ea360:
    // 0x1ea360: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1ea364:
    // 0x1ea364: 0x26c2ffe0  addiu       $v0, $s6, -0x20
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
label_1ea368:
    // 0x1ea368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ea368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ea36c:
    // 0x1ea36c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ea370:
    // 0x1ea370: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1ea374:
    // 0x1ea374: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1ea374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ea378:
    // 0x1ea378: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x1ea378u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_1ea37c:
    // 0x1ea37c: 0x2f31021  addu        $v0, $s7, $s3
    ctx->pc = 0x1ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_1ea380:
    // 0x1ea380: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ea384:
    // 0x1ea384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea388:
    // 0x1ea388: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x1ea388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_1ea38c:
    // 0x1ea38c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ea38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ea390:
    // 0x1ea390: 0xa6850630  sh          $a1, 0x630($s4)
    ctx->pc = 0x1ea390u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1584), (uint16_t)GPR_U32(ctx, 5));
label_1ea394:
    // 0x1ea394: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x1ea394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_1ea398:
    // 0x1ea398: 0xa6840632  sh          $a0, 0x632($s4)
    ctx->pc = 0x1ea398u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1586), (uint16_t)GPR_U32(ctx, 4));
label_1ea39c:
    // 0x1ea39c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ea3a0:
    // 0x1ea3a0: 0x8f848ee4  lw          $a0, -0x711C($gp)
    ctx->pc = 0x1ea3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1ea3a4:
    // 0x1ea3a4: 0xae840634  sw          $a0, 0x634($s4)
    ctx->pc = 0x1ea3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1588), GPR_U32(ctx, 4));
label_1ea3a8:
    // 0x1ea3a8: 0xa6830640  sh          $v1, 0x640($s4)
    ctx->pc = 0x1ea3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1600), (uint16_t)GPR_U32(ctx, 3));
label_1ea3ac:
    // 0x1ea3ac: 0xa6820642  sh          $v0, 0x642($s4)
    ctx->pc = 0x1ea3acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1602), (uint16_t)GPR_U32(ctx, 2));
label_1ea3b0:
    // 0x1ea3b0: 0x8f828ee4  lw          $v0, -0x711C($gp)
    ctx->pc = 0x1ea3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1ea3b4:
    // 0x1ea3b4: 0xae820644  sw          $v0, 0x644($s4)
    ctx->pc = 0x1ea3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1604), GPR_U32(ctx, 2));
label_1ea3b8:
    // 0x1ea3b8: 0x8f828ec4  lw          $v0, -0x713C($gp)
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea3bc:
    // 0x1ea3bc: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_1ea3c0:
    if (ctx->pc == 0x1EA3C0u) {
        ctx->pc = 0x1EA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3BCu;
        // 0x1ea3c0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3C4u;
        goto label_1ea3c4;
    }
    ctx->pc = 0x1EA3BCu;
    {
        const bool branch_taken_0x1ea3bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3BCu;
        // 0x1ea3c0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3bc) {
            ctx->pc = 0x1EA3F0u;
            goto label_1ea3f0;
        }
    }
    ctx->pc = 0x1EA3C4u;
label_1ea3c4:
    // 0x1ea3c4: 0xc070834  jal         func_1C20D0
label_1ea3c8:
    if (ctx->pc == 0x1EA3C8u) {
        ctx->pc = 0x1EA3CCu;
        goto label_1ea3cc;
    }
    ctx->pc = 0x1EA3C4u;
    SET_GPR_U32(ctx, 31, 0x1EA3CCu);
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1EA3CCu;
label_1ea3cc:
    // 0x1ea3cc: 0xfe820610  sd          $v0, 0x610($s4)
    ctx->pc = 0x1ea3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1552), GPR_U64(ctx, 2));
label_1ea3d0:
    // 0x1ea3d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ea3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ea3d4:
    // 0x1ea3d4: 0xa2950620  sb          $s5, 0x620($s4)
    ctx->pc = 0x1ea3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1568), (uint8_t)GPR_U32(ctx, 21));
label_1ea3d8:
    // 0x1ea3d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ea3dc:
    // 0x1ea3dc: 0xa2950621  sb          $s5, 0x621($s4)
    ctx->pc = 0x1ea3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1569), (uint8_t)GPR_U32(ctx, 21));
label_1ea3e0:
    // 0x1ea3e0: 0xa2950622  sb          $s5, 0x622($s4)
    ctx->pc = 0x1ea3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1570), (uint8_t)GPR_U32(ctx, 21));
label_1ea3e4:
    // 0x1ea3e4: 0xa2830623  sb          $v1, 0x623($s4)
    ctx->pc = 0x1ea3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1571), (uint8_t)GPR_U32(ctx, 3));
label_1ea3e8:
    // 0x1ea3e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ea3ec:
    if (ctx->pc == 0x1EA3ECu) {
        ctx->pc = 0x1EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3E8u;
        // 0x1ea3ec: 0xae820624  sw          $v0, 0x624($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3F0u;
        goto label_1ea3f0;
    }
    ctx->pc = 0x1EA3E8u;
    {
        const bool branch_taken_0x1ea3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3E8u;
        // 0x1ea3ec: 0xae820624  sw          $v0, 0x624($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3e8) {
            ctx->pc = 0x1EA418u;
            goto label_1ea418;
        }
    }
    ctx->pc = 0x1EA3F0u;
label_1ea3f0:
    // 0x1ea3f0: 0xc070834  jal         func_1C20D0
label_1ea3f4:
    if (ctx->pc == 0x1EA3F4u) {
        ctx->pc = 0x1EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F0u;
        // 0x1ea3f4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3F8u;
        goto label_1ea3f8;
    }
    ctx->pc = 0x1EA3F0u;
    SET_GPR_U32(ctx, 31, 0x1EA3F8u);
    ctx->pc = 0x1EA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3F0u;
    // 0x1ea3f4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1EA3F8u;
label_1ea3f8:
    // 0x1ea3f8: 0xfe820610  sd          $v0, 0x610($s4)
    ctx->pc = 0x1ea3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1552), GPR_U64(ctx, 2));
label_1ea3fc:
    // 0x1ea3fc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ea3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ea400:
    // 0x1ea400: 0xa2830620  sb          $v1, 0x620($s4)
    ctx->pc = 0x1ea400u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1568), (uint8_t)GPR_U32(ctx, 3));
label_1ea404:
    // 0x1ea404: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ea408:
    // 0x1ea408: 0xa2830621  sb          $v1, 0x621($s4)
    ctx->pc = 0x1ea408u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1569), (uint8_t)GPR_U32(ctx, 3));
label_1ea40c:
    // 0x1ea40c: 0xa2830622  sb          $v1, 0x622($s4)
    ctx->pc = 0x1ea40cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1570), (uint8_t)GPR_U32(ctx, 3));
label_1ea410:
    // 0x1ea410: 0xa2830623  sb          $v1, 0x623($s4)
    ctx->pc = 0x1ea410u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1571), (uint8_t)GPR_U32(ctx, 3));
label_1ea414:
    // 0x1ea414: 0xae820624  sw          $v0, 0x624($s4)
    ctx->pc = 0x1ea414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1572), GPR_U32(ctx, 2));
label_1ea418:
    // 0x1ea418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ea418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ea41c:
    // 0x1ea41c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1ea41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea420:
    // 0x1ea420: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1ea424:
    // 0x1ea424: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_1ea428:
    if (ctx->pc == 0x1EA428u) {
        ctx->pc = 0x1EA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA424u;
        // 0x1ea428: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA42Cu;
        goto label_1ea42c;
    }
    ctx->pc = 0x1EA424u;
    {
        const bool branch_taken_0x1ea424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA424u;
        // 0x1ea428: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea424) {
            ctx->pc = 0x1EA354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea354;
        }
    }
    ctx->pc = 0x1EA42Cu;
label_1ea42c:
    // 0x1ea42c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ea430:
    if (ctx->pc == 0x1EA430u) {
        ctx->pc = 0x1EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA42Cu;
        // 0x1ea430: 0x8f838efc  lw          $v1, -0x7104($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA434u;
        goto label_1ea434;
    }
    ctx->pc = 0x1EA42Cu;
    {
        const bool branch_taken_0x1ea42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA42Cu;
        // 0x1ea430: 0x8f838efc  lw          $v1, -0x7104($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea42c) {
            ctx->pc = 0x1EA468u;
            goto label_1ea468;
        }
    }
    ctx->pc = 0x1EA434u;
label_1ea434:
    // 0x1ea434: 0xa6200630  sh          $zero, 0x630($s1)
    ctx->pc = 0x1ea434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1584), (uint16_t)GPR_U32(ctx, 0));
label_1ea438:
    // 0x1ea438: 0xa6200632  sh          $zero, 0x632($s1)
    ctx->pc = 0x1ea438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1586), (uint16_t)GPR_U32(ctx, 0));
label_1ea43c:
    // 0x1ea43c: 0xae200634  sw          $zero, 0x634($s1)
    ctx->pc = 0x1ea43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1588), GPR_U32(ctx, 0));
label_1ea440:
    // 0x1ea440: 0xa6200640  sh          $zero, 0x640($s1)
    ctx->pc = 0x1ea440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1600), (uint16_t)GPR_U32(ctx, 0));
label_1ea444:
    // 0x1ea444: 0xa6200642  sh          $zero, 0x642($s1)
    ctx->pc = 0x1ea444u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1602), (uint16_t)GPR_U32(ctx, 0));
label_1ea448:
    // 0x1ea448: 0xae200644  sw          $zero, 0x644($s1)
    ctx->pc = 0x1ea448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 0));
label_1ea44c:
    // 0x1ea44c: 0xa62006d0  sh          $zero, 0x6D0($s1)
    ctx->pc = 0x1ea44cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1744), (uint16_t)GPR_U32(ctx, 0));
label_1ea450:
    // 0x1ea450: 0xa62006d2  sh          $zero, 0x6D2($s1)
    ctx->pc = 0x1ea450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1746), (uint16_t)GPR_U32(ctx, 0));
label_1ea454:
    // 0x1ea454: 0xae2006d4  sw          $zero, 0x6D4($s1)
    ctx->pc = 0x1ea454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1748), GPR_U32(ctx, 0));
label_1ea458:
    // 0x1ea458: 0xa62006e0  sh          $zero, 0x6E0($s1)
    ctx->pc = 0x1ea458u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1760), (uint16_t)GPR_U32(ctx, 0));
label_1ea45c:
    // 0x1ea45c: 0xa62006e2  sh          $zero, 0x6E2($s1)
    ctx->pc = 0x1ea45cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1762), (uint16_t)GPR_U32(ctx, 0));
label_1ea460:
    // 0x1ea460: 0xae2006e4  sw          $zero, 0x6E4($s1)
    ctx->pc = 0x1ea460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 0));
label_1ea464:
    // 0x1ea464: 0x8f838efc  lw          $v1, -0x7104($gp)
    ctx->pc = 0x1ea464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1ea468:
    // 0x1ea468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea46c:
    // 0x1ea46c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
label_1ea470:
    if (ctx->pc == 0x1EA470u) {
        ctx->pc = 0x1EA474u;
        goto label_1ea474;
    }
    ctx->pc = 0x1EA46Cu;
    {
        const bool branch_taken_0x1ea46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea46c) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA474u;
label_1ea474:
    // 0x1ea474: 0x8f828eb4  lw          $v0, -0x714C($gp)
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
label_1ea478:
    // 0x1ea478: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1ea47c:
    if (ctx->pc == 0x1EA47Cu) {
        ctx->pc = 0x1EA480u;
        goto label_1ea480;
    }
    ctx->pc = 0x1EA478u;
    {
        const bool branch_taken_0x1ea478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea478) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA480u;
label_1ea480:
    // 0x1ea480: 0x8f848ee8  lw          $a0, -0x7118($gp)
    ctx->pc = 0x1ea480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
label_1ea484:
    // 0x1ea484: 0x8f838edc  lw          $v1, -0x7124($gp)
    ctx->pc = 0x1ea484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938332)));
label_1ea488:
    // 0x1ea488: 0x8f868eec  lw          $a2, -0x7114($gp)
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
label_1ea48c:
    // 0x1ea48c: 0x8f858ee0  lw          $a1, -0x7120($gp)
    ctx->pc = 0x1ea48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938336)));
label_1ea490:
    // 0x1ea490: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1ea494:
    // 0x1ea494: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ea494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea498:
    // 0x1ea498: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1ea49c:
    // 0x1ea49c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ea4a0:
    if (ctx->pc == 0x1EA4A0u) {
        ctx->pc = 0x1EA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA49Cu;
        // 0x1ea4a0: 0x3043001f  andi        $v1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4A4u;
        goto label_1ea4a4;
    }
    ctx->pc = 0x1EA49Cu;
    {
        const bool branch_taken_0x1ea49c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA49Cu;
        // 0x1ea4a0: 0x3043001f  andi        $v1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea49c) {
            ctx->pc = 0x1EA4B0u;
            goto label_1ea4b0;
        }
    }
    ctx->pc = 0x1EA4A4u;
label_1ea4a4:
    // 0x1ea4a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ea4a8:
    if (ctx->pc == 0x1EA4A8u) {
        ctx->pc = 0x1EA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A4u;
        // 0x1ea4a8: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4ACu;
        goto label_1ea4ac;
    }
    ctx->pc = 0x1EA4A4u;
    {
        const bool branch_taken_0x1ea4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A4u;
        // 0x1ea4a8: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4a4) {
            ctx->pc = 0x1EA4B4u;
            goto label_1ea4b4;
        }
    }
    ctx->pc = 0x1EA4ACu;
label_1ea4ac:
    // 0x1ea4ac: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1ea4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1ea4b0:
    // 0x1ea4b0: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1ea4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ea4b4:
    // 0x1ea4b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1ea4b8:
    if (ctx->pc == 0x1EA4B8u) {
        ctx->pc = 0x1EA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4B4u;
        // 0x1ea4b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4BCu;
        goto label_1ea4bc;
    }
    ctx->pc = 0x1EA4B4u;
    {
        const bool branch_taken_0x1ea4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4B4u;
        // 0x1ea4b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4b4) {
            ctx->pc = 0x1EA4D8u;
            goto label_1ea4d8;
        }
    }
    ctx->pc = 0x1EA4BCu;
label_1ea4bc:
    // 0x1ea4bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ea4c0:
    // 0x1ea4c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ea4c4:
    if (ctx->pc == 0x1EA4C4u) {
        ctx->pc = 0x1EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C0u;
        // 0x1ea4c4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4C8u;
        goto label_1ea4c8;
    }
    ctx->pc = 0x1EA4C0u;
    {
        const bool branch_taken_0x1ea4c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C0u;
        // 0x1ea4c4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4c0) {
            ctx->pc = 0x1EA4D0u;
            goto label_1ea4d0;
        }
    }
    ctx->pc = 0x1EA4C8u;
label_1ea4c8:
    // 0x1ea4c8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ea4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ea4cc:
    // 0x1ea4cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ea4ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ea4d0:
    // 0x1ea4d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ea4d4:
    if (ctx->pc == 0x1EA4D4u) {
        ctx->pc = 0x1EA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4D0u;
        // 0x1ea4d4: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4D8u;
        goto label_1ea4d8;
    }
    ctx->pc = 0x1EA4D0u;
    {
        const bool branch_taken_0x1ea4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4D0u;
        // 0x1ea4d4: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4d0) {
            ctx->pc = 0x1EA4F4u;
            goto label_1ea4f4;
        }
    }
    ctx->pc = 0x1EA4D8u;
label_1ea4d8:
    // 0x1ea4d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ea4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea4dc:
    // 0x1ea4dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ea4e0:
    // 0x1ea4e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ea4e4:
    if (ctx->pc == 0x1EA4E4u) {
        ctx->pc = 0x1EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E0u;
        // 0x1ea4e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4E8u;
        goto label_1ea4e8;
    }
    ctx->pc = 0x1EA4E0u;
    {
        const bool branch_taken_0x1ea4e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E0u;
        // 0x1ea4e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4e0) {
            ctx->pc = 0x1EA4F0u;
            goto label_1ea4f0;
        }
    }
    ctx->pc = 0x1EA4E8u;
label_1ea4e8:
    // 0x1ea4e8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ea4ec:
    // 0x1ea4ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ea4f0:
    // 0x1ea4f0: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x1ea4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1ea4f4:
    // 0x1ea4f4: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x1ea4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1ea4f8:
    // 0x1ea4f8: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_1ea4fc:
    // 0x1ea4fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ea500:
    // 0x1ea500: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea504:
    // 0x1ea504: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ea508:
    // 0x1ea508: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ea50c:
    // 0x1ea50c: 0xa6230770  sh          $v1, 0x770($s1)
    ctx->pc = 0x1ea50cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 3));
label_1ea510:
    // 0x1ea510: 0x2482ffe8  addiu       $v0, $a0, -0x18
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
label_1ea514:
    // 0x1ea514: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ea514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ea518:
    // 0x1ea518: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1ea518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ea51c:
    // 0x1ea51c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1ea51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ea520:
    // 0x1ea520: 0xa6230772  sh          $v1, 0x772($s1)
    ctx->pc = 0x1ea520u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 3));
label_1ea524:
    // 0x1ea524: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ea528:
    // 0x1ea528: 0x8f868ee4  lw          $a2, -0x711C($gp)
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1ea52c:
    // 0x1ea52c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ea530:
    // 0x1ea530: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ea534:
    // 0x1ea534: 0xae260774  sw          $a2, 0x774($s1)
    ctx->pc = 0x1ea534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1908), GPR_U32(ctx, 6));
label_1ea538:
    // 0x1ea538: 0xa6250780  sh          $a1, 0x780($s1)
    ctx->pc = 0x1ea538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1920), (uint16_t)GPR_U32(ctx, 5));
label_1ea53c:
    // 0x1ea53c: 0xa6240782  sh          $a0, 0x782($s1)
    ctx->pc = 0x1ea53cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1922), (uint16_t)GPR_U32(ctx, 4));
label_1ea540:
    // 0x1ea540: 0x8f848ee4  lw          $a0, -0x711C($gp)
    ctx->pc = 0x1ea540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1ea544:
    // 0x1ea544: 0xae240784  sw          $a0, 0x784($s1)
    ctx->pc = 0x1ea544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1924), GPR_U32(ctx, 4));
label_1ea548:
    // 0x1ea548: 0xa2270760  sb          $a3, 0x760($s1)
    ctx->pc = 0x1ea548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1888), (uint8_t)GPR_U32(ctx, 7));
label_1ea54c:
    // 0x1ea54c: 0xa2270761  sb          $a3, 0x761($s1)
    ctx->pc = 0x1ea54cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1889), (uint8_t)GPR_U32(ctx, 7));
label_1ea550:
    // 0x1ea550: 0xa2270762  sb          $a3, 0x762($s1)
    ctx->pc = 0x1ea550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1890), (uint8_t)GPR_U32(ctx, 7));
label_1ea554:
    // 0x1ea554: 0xa2230763  sb          $v1, 0x763($s1)
    ctx->pc = 0x1ea554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1891), (uint8_t)GPR_U32(ctx, 3));
label_1ea558:
    // 0x1ea558: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ea55c:
    if (ctx->pc == 0x1EA55Cu) {
        ctx->pc = 0x1EA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA558u;
        // 0x1ea55c: 0xae220764  sw          $v0, 0x764($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA560u;
        goto label_1ea560;
    }
    ctx->pc = 0x1EA558u;
    {
        const bool branch_taken_0x1ea558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA558u;
        // 0x1ea55c: 0xae220764  sw          $v0, 0x764($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea558) {
            ctx->pc = 0x1EA578u;
            goto label_1ea578;
        }
    }
    ctx->pc = 0x1EA560u;
label_1ea560:
    // 0x1ea560: 0xa6200770  sh          $zero, 0x770($s1)
    ctx->pc = 0x1ea560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 0));
label_1ea564:
    // 0x1ea564: 0xa6200772  sh          $zero, 0x772($s1)
    ctx->pc = 0x1ea564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 0));
label_1ea568:
    // 0x1ea568: 0xae200774  sw          $zero, 0x774($s1)
    ctx->pc = 0x1ea568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1908), GPR_U32(ctx, 0));
label_1ea56c:
    // 0x1ea56c: 0xa6200780  sh          $zero, 0x780($s1)
    ctx->pc = 0x1ea56cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1920), (uint16_t)GPR_U32(ctx, 0));
label_1ea570:
    // 0x1ea570: 0xa6200782  sh          $zero, 0x782($s1)
    ctx->pc = 0x1ea570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1922), (uint16_t)GPR_U32(ctx, 0));
label_1ea574:
    // 0x1ea574: 0xae200784  sw          $zero, 0x784($s1)
    ctx->pc = 0x1ea574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1924), GPR_U32(ctx, 0));
label_1ea578:
    // 0x1ea578: 0x8f838efc  lw          $v1, -0x7104($gp)
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1ea57c:
    // 0x1ea57c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea580:
    // 0x1ea580: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1ea584:
    if (ctx->pc == 0x1EA584u) {
        ctx->pc = 0x1EA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA580u;
        // 0x1ea584: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA588u;
        goto label_1ea588;
    }
    ctx->pc = 0x1EA580u;
    {
        const bool branch_taken_0x1ea580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA580u;
        // 0x1ea584: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea580) {
            ctx->pc = 0x1EA5A8u;
            goto label_1ea5a8;
        }
    }
    ctx->pc = 0x1EA588u;
label_1ea588:
    // 0x1ea588: 0x8f828ef8  lw          $v0, -0x7108($gp)
    ctx->pc = 0x1ea588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938360)));
label_1ea58c:
    // 0x1ea58c: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1ea590:
    // 0x1ea590: 0x262407f0  addiu       $a0, $s1, 0x7F0
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2032));
label_1ea594:
    // 0x1ea594: 0x24a55770  addiu       $a1, $a1, 0x5770
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22384));
label_1ea598:
    // 0x1ea598: 0xc08e93e  jal         func_23A4F8
label_1ea59c:
    if (ctx->pc == 0x1EA59Cu) {
        ctx->pc = 0x1EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA598u;
        // 0x1ea59c: 0x231c0  sll         $a2, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5A0u;
        goto label_1ea5a0;
    }
    ctx->pc = 0x1EA598u;
    SET_GPR_U32(ctx, 31, 0x1EA5A0u);
    ctx->pc = 0x1EA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA598u;
    // 0x1ea59c: 0x231c0  sll         $a2, $v0, 7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1EA5A0u;
label_1ea5a0:
    // 0x1ea5a0: 0x8f838ef8  lw          $v1, -0x7108($gp)
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938360)));
label_1ea5a4:
    // 0x1ea5a4: 0x0  nop
    ctx->pc = 0x1ea5a4u;
    // NOP
label_1ea5a8:
    // 0x1ea5a8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ea5ac:
    // 0x1ea5ac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ea5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1ea5b0:
    // 0x1ea5b0: 0x2450007f  addiu       $s0, $v0, 0x7F
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1ea5b4:
    // 0x1ea5b4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1ea5b8:
    // 0x1ea5b8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ea5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1ea5bc:
    // 0x1ea5bc: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1ea5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ea5c0:
    // 0x1ea5c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea5c4:
    // 0x1ea5c4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ea5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ea5c8:
    // 0x1ea5c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ea5cc:
    // 0x1ea5cc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1ea5d0:
    // 0x1ea5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5d4:
    // 0x1ea5d4: 0xc05e234  jal         func_1788D0
label_1ea5d8:
    if (ctx->pc == 0x1EA5D8u) {
        ctx->pc = 0x1EA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D4u;
        // 0x1ea5d8: 0xfe2207e0  sd          $v0, 0x7E0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 2016), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5DCu;
        goto label_1ea5dc;
    }
    ctx->pc = 0x1EA5D4u;
    SET_GPR_U32(ctx, 31, 0x1EA5DCu);
    ctx->pc = 0x1EA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5D4u;
    // 0x1ea5d8: 0xfe2207e0  sd          $v0, 0x7E0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 2016), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EA5D4u, 0x1EA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5DCu;
label_1ea5dc:
    // 0x1ea5dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ea5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5e0:
    // 0x1ea5e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ea5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5e4:
    // 0x1ea5e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ea5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5e8:
    // 0x1ea5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5ec:
    // 0x1ea5ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ea5ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5f0:
    // 0x1ea5f0: 0xc066c72  jal         func_19B1C8
label_1ea5f4:
    if (ctx->pc == 0x1EA5F4u) {
        ctx->pc = 0x1EA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5F0u;
        // 0x1ea5f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5F8u;
        goto label_1ea5f8;
    }
    ctx->pc = 0x1EA5F0u;
    SET_GPR_U32(ctx, 31, 0x1EA5F8u);
    ctx->pc = 0x1EA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5F0u;
    // 0x1ea5f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EA5F0u, 0x1EA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5F8u;
label_1ea5f8:
    // 0x1ea5f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ea5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ea5fc:
    // 0x1ea5fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea600:
    // 0x1ea600: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ea600u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea604:
    // 0x1ea604: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ea604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea608:
    // 0x1ea608: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ea608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea60c:
    // 0x1ea60c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea60cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea610:
    // 0x1ea610: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea614:
    // 0x1ea614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea618:
    // 0x1ea618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea61c:
    // 0x1ea61c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea620:
    // 0x1ea620: 0x3e00008  jr          $ra
label_1ea624:
    if (ctx->pc == 0x1EA624u) {
        ctx->pc = 0x1EA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA620u;
        // 0x1ea624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA628u;
        goto label_1ea628;
    }
    ctx->pc = 0x1EA620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA620u;
        // 0x1ea624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA628u;
label_1ea628:
    // 0x1ea628: 0x0  nop
    ctx->pc = 0x1ea628u;
    // NOP
label_1ea62c:
    // 0x1ea62c: 0x0  nop
    ctx->pc = 0x1ea62cu;
    // NOP
label_1ea630:
    // 0x1ea630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ea634:
    // 0x1ea634: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1ea634u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea638:
    // 0x1ea638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ea63c:
    // 0x1ea63c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1ea63cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea640:
    // 0x1ea640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ea644:
    // 0x1ea644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ea648:
    // 0x1ea648: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1ea648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1ea64c:
    // 0x1ea64c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ea64cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea650:
    // 0x1ea650: 0x346a5556  ori         $t2, $v1, 0x5556
    ctx->pc = 0x1ea650u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1ea654:
    // 0x1ea654: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea658:
    // 0x1ea658: 0x1ac001a  div         $zero, $t5, $t4
    ctx->pc = 0x1ea658u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea65c:
    // 0x1ea65c: 0x0  nop
    ctx->pc = 0x1ea65cu;
    // NOP
label_1ea660:
    // 0x1ea660: 0x0  nop
    ctx->pc = 0x1ea660u;
    // NOP
label_1ea664:
    // 0x1ea664: 0x1810  mfhi        $v1
    ctx->pc = 0x1ea664u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ea668:
    // 0x1ea668: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ea66c:
    if (ctx->pc == 0x1EA66Cu) {
        ctx->pc = 0x1EA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA668u;
        // 0x1ea66c: 0x24b0fff8  addiu       $s0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA670u;
        goto label_1ea670;
    }
    ctx->pc = 0x1EA668u;
    {
        const bool branch_taken_0x1ea668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA668u;
        // 0x1ea66c: 0x24b0fff8  addiu       $s0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea668) {
            ctx->pc = 0x1EA678u;
            goto label_1ea678;
        }
    }
    ctx->pc = 0x1EA670u;
label_1ea670:
    // 0x1ea670: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ea674:
    if (ctx->pc == 0x1EA674u) {
        ctx->pc = 0x1EA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA670u;
        // 0x1ea674: 0x24180008  addiu       $t8, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA678u;
        goto label_1ea678;
    }
    ctx->pc = 0x1EA670u;
    {
        const bool branch_taken_0x1ea670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA670u;
        // 0x1ea674: 0x24180008  addiu       $t8, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea670) {
            ctx->pc = 0x1EA690u;
            goto label_1ea690;
        }
    }
    ctx->pc = 0x1EA678u;
label_1ea678:
    // 0x1ea678: 0x146b0003  bne         $v1, $t3, . + 4 + (0x3 << 2)
label_1ea67c:
    if (ctx->pc == 0x1EA67Cu) {
        ctx->pc = 0x1EA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA678u;
        // 0x1ea67c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA680u;
        goto label_1ea680;
    }
    ctx->pc = 0x1EA678u;
    {
        const bool branch_taken_0x1ea678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x1EA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA678u;
        // 0x1ea67c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea678) {
            ctx->pc = 0x1EA688u;
            goto label_1ea688;
        }
    }
    ctx->pc = 0x1EA680u;
label_1ea680:
    // 0x1ea680: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea684:
    if (ctx->pc == 0x1EA684u) {
        ctx->pc = 0x1EA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA680u;
        // 0x1ea684: 0x100c02d  daddu       $t8, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA688u;
        goto label_1ea688;
    }
    ctx->pc = 0x1EA680u;
    {
        const bool branch_taken_0x1ea680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA680u;
        // 0x1ea684: 0x100c02d  daddu       $t8, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea680) {
            ctx->pc = 0x1EA690u;
            goto label_1ea690;
        }
    }
    ctx->pc = 0x1EA688u;
label_1ea688:
    // 0x1ea688: 0xa88021  addu        $s0, $a1, $t0
    ctx->pc = 0x1ea688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1ea68c:
    // 0x1ea68c: 0x24180008  addiu       $t8, $zero, 0x8
    ctx->pc = 0x1ea68cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea690:
    // 0x1ea690: 0xd77c2  srl         $t6, $t5, 31
    ctx->pc = 0x1ea690u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_1ea694:
    // 0x1ea694: 0x14d0018  mult        $zero, $t2, $t5
    ctx->pc = 0x1ea694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ea698:
    // 0x1ea698: 0x0  nop
    ctx->pc = 0x1ea698u;
    // NOP
label_1ea69c:
    // 0x1ea69c: 0x0  nop
    ctx->pc = 0x1ea69cu;
    // NOP
label_1ea6a0:
    // 0x1ea6a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1ea6a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ea6a4:
    // 0x1ea6a4: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1ea6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_1ea6a8:
    // 0x1ea6a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ea6ac:
    if (ctx->pc == 0x1EA6ACu) {
        ctx->pc = 0x1EA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6A8u;
        // 0x1ea6ac: 0x24d2fff8  addiu       $s2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6B0u;
        goto label_1ea6b0;
    }
    ctx->pc = 0x1EA6A8u;
    {
        const bool branch_taken_0x1ea6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6A8u;
        // 0x1ea6ac: 0x24d2fff8  addiu       $s2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6a8) {
            ctx->pc = 0x1EA6B8u;
            goto label_1ea6b8;
        }
    }
    ctx->pc = 0x1EA6B0u;
label_1ea6b0:
    // 0x1ea6b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ea6b4:
    if (ctx->pc == 0x1EA6B4u) {
        ctx->pc = 0x1EA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B0u;
        // 0x1ea6b4: 0x240e0008  addiu       $t6, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6B8u;
        goto label_1ea6b8;
    }
    ctx->pc = 0x1EA6B0u;
    {
        const bool branch_taken_0x1ea6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B0u;
        // 0x1ea6b4: 0x240e0008  addiu       $t6, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6b0) {
            ctx->pc = 0x1EA6D0u;
            goto label_1ea6d0;
        }
    }
    ctx->pc = 0x1EA6B8u;
label_1ea6b8:
    // 0x1ea6b8: 0x146b0003  bne         $v1, $t3, . + 4 + (0x3 << 2)
label_1ea6bc:
    if (ctx->pc == 0x1EA6BCu) {
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B8u;
        // 0x1ea6bc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6C0u;
        goto label_1ea6c0;
    }
    ctx->pc = 0x1EA6B8u;
    {
        const bool branch_taken_0x1ea6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B8u;
        // 0x1ea6bc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6b8) {
            ctx->pc = 0x1EA6C8u;
            goto label_1ea6c8;
        }
    }
    ctx->pc = 0x1EA6C0u;
label_1ea6c0:
    // 0x1ea6c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea6c4:
    if (ctx->pc == 0x1EA6C4u) {
        ctx->pc = 0x1EA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6C0u;
        // 0x1ea6c4: 0x120702d  daddu       $t6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6C8u;
        goto label_1ea6c8;
    }
    ctx->pc = 0x1EA6C0u;
    {
        const bool branch_taken_0x1ea6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6C0u;
        // 0x1ea6c4: 0x120702d  daddu       $t6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6c0) {
            ctx->pc = 0x1EA6D0u;
            goto label_1ea6d0;
        }
    }
    ctx->pc = 0x1EA6C8u;
label_1ea6c8:
    // 0x1ea6c8: 0xc99021  addu        $s2, $a2, $t1
    ctx->pc = 0x1ea6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1ea6cc:
    // 0x1ea6cc: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x1ea6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea6d0:
    // 0x1ea6d0: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1ea6d4:
    // 0x1ea6d4: 0x8f1821  addu        $v1, $a0, $t7
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
label_1ea6d8:
    // 0x1ea6d8: 0x2188021  addu        $s0, $s0, $t8
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
label_1ea6dc:
    // 0x1ea6dc: 0x26316c00  addiu       $s1, $s1, 0x6C00
    ctx->pc = 0x1ea6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27648));
label_1ea6e0:
    // 0x1ea6e0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1ea6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1ea6e4:
    // 0x1ea6e4: 0xa4710090  sh          $s1, 0x90($v1)
    ctx->pc = 0x1ea6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 17));
label_1ea6e8:
    // 0x1ea6e8: 0x18c900  sll         $t9, $t8, 4
    ctx->pc = 0x1ea6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_1ea6ec:
    // 0x1ea6ec: 0x26116c00  addiu       $s1, $s0, 0x6C00
    ctx->pc = 0x1ea6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
label_1ea6f0:
    // 0x1ea6f0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1ea6f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1ea6f4:
    // 0x1ea6f4: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x1ea6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1ea6f8:
    // 0x1ea6f8: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x1ea6f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_1ea6fc:
    // 0x1ea6fc: 0x26187900  addiu       $t8, $s0, 0x7900
    ctx->pc = 0x1ea6fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 30976));
label_1ea700:
    // 0x1ea700: 0xa4780092  sh          $t8, 0x92($v1)
    ctx->pc = 0x1ea700u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 146), (uint16_t)GPR_U32(ctx, 24));
label_1ea704:
    // 0x1ea704: 0x24e8021  addu        $s0, $s2, $t6
    ctx->pc = 0x1ea704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
label_1ea708:
    // 0x1ea708: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1ea708u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1ea70c:
    // 0x1ea70c: 0xac670094  sw          $a3, 0x94($v1)
    ctx->pc = 0x1ea70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 7));
label_1ea710:
    // 0x1ea710: 0x26107900  addiu       $s0, $s0, 0x7900
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30976));
label_1ea714:
    // 0x1ea714: 0xa47100a0  sh          $s1, 0xA0($v1)
    ctx->pc = 0x1ea714u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 160), (uint16_t)GPR_U32(ctx, 17));
label_1ea718:
    // 0x1ea718: 0xa47000a2  sh          $s0, 0xA2($v1)
    ctx->pc = 0x1ea718u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 162), (uint16_t)GPR_U32(ctx, 16));
label_1ea71c:
    // 0x1ea71c: 0xec100  sll         $t8, $t6, 4
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1ea720:
    // 0x1ea720: 0xac6700a4  sw          $a3, 0xA4($v1)
    ctx->pc = 0x1ea720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 7));
label_1ea724:
    // 0x1ea724: 0x29ae0009  slti        $t6, $t5, 0x9
    ctx->pc = 0x1ea724u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)9) ? 1 : 0);
label_1ea728:
    // 0x1ea728: 0x84700088  lh          $s0, 0x88($v1)
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ea72c:
    // 0x1ea72c: 0x219c821  addu        $t9, $s0, $t9
    ctx->pc = 0x1ea72cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
label_1ea730:
    // 0x1ea730: 0xa4790098  sh          $t9, 0x98($v1)
    ctx->pc = 0x1ea730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 152), (uint16_t)GPR_U32(ctx, 25));
label_1ea734:
    // 0x1ea734: 0x8479008a  lh          $t9, 0x8A($v1)
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 138)));
label_1ea738:
    // 0x1ea738: 0x338c021  addu        $t8, $t9, $t8
    ctx->pc = 0x1ea738u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
label_1ea73c:
    // 0x1ea73c: 0x15c0ffc6  bnez        $t6, . + 4 + (-0x3A << 2)
label_1ea740:
    if (ctx->pc == 0x1EA740u) {
        ctx->pc = 0x1EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA73Cu;
        // 0x1ea740: 0xa478009a  sh          $t8, 0x9A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 154), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA744u;
        goto label_1ea744;
    }
    ctx->pc = 0x1EA73Cu;
    {
        const bool branch_taken_0x1ea73c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA73Cu;
        // 0x1ea740: 0xa478009a  sh          $t8, 0x9A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 154), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea73c) {
            ctx->pc = 0x1EA658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea658;
        }
    }
    ctx->pc = 0x1EA744u;
label_1ea744:
    // 0x1ea744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea748:
    // 0x1ea748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea74c:
    // 0x1ea74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea750:
    // 0x1ea750: 0x3e00008  jr          $ra
label_1ea754:
    if (ctx->pc == 0x1EA754u) {
        ctx->pc = 0x1EA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA750u;
        // 0x1ea754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA758u;
        goto label_1ea758;
    }
    ctx->pc = 0x1EA750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA750u;
        // 0x1ea754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA758u;
label_1ea758:
    // 0x1ea758: 0x0  nop
    ctx->pc = 0x1ea758u;
    // NOP
label_1ea75c:
    // 0x1ea75c: 0x0  nop
    ctx->pc = 0x1ea75cu;
    // NOP
label_1ea760:
    // 0x1ea760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ea764:
    // 0x1ea764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ea768:
    // 0x1ea768: 0x8f858efc  lw          $a1, -0x7104($gp)
    ctx->pc = 0x1ea768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1ea76c:
    // 0x1ea76c: 0x10a0007b  beqz        $a1, . + 4 + (0x7B << 2)
label_1ea770:
    if (ctx->pc == 0x1EA770u) {
        ctx->pc = 0x1EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA76Cu;
        // 0x1ea770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA774u;
        goto label_1ea774;
    }
    ctx->pc = 0x1EA76Cu;
    {
        const bool branch_taken_0x1ea76c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA76Cu;
        // 0x1ea770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea76c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA774u;
label_1ea774:
    // 0x1ea774: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
label_1ea778:
    if (ctx->pc == 0x1EA778u) {
        ctx->pc = 0x1EA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA774u;
        // 0x1ea778: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA77Cu;
        goto label_1ea77c;
    }
    ctx->pc = 0x1EA774u;
    {
        const bool branch_taken_0x1ea774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA774u;
        // 0x1ea778: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea774) {
            ctx->pc = 0x1EA7A0u;
            goto label_1ea7a0;
        }
    }
    ctx->pc = 0x1EA77Cu;
label_1ea77c:
    // 0x1ea77c: 0x8f838ef4  lw          $v1, -0x710C($gp)
    ctx->pc = 0x1ea77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
label_1ea780:
    // 0x1ea780: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ea780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ea784:
    // 0x1ea784: 0xaf838ef4  sw          $v1, -0x710C($gp)
    ctx->pc = 0x1ea784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 3));
label_1ea788:
    // 0x1ea788: 0x8f838ef4  lw          $v1, -0x710C($gp)
    ctx->pc = 0x1ea788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
label_1ea78c:
    // 0x1ea78c: 0x1c600073  bgtz        $v1, . + 4 + (0x73 << 2)
label_1ea790:
    if (ctx->pc == 0x1EA790u) {
        ctx->pc = 0x1EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA78Cu;
        // 0x1ea790: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA794u;
        goto label_1ea794;
    }
    ctx->pc = 0x1EA78Cu;
    {
        const bool branch_taken_0x1ea78c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA78Cu;
        // 0x1ea790: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea78c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA794u;
label_1ea794:
    // 0x1ea794: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1ea798:
    // 0x1ea798: 0x10000070  b           . + 4 + (0x70 << 2)
label_1ea79c:
    if (ctx->pc == 0x1EA79Cu) {
        ctx->pc = 0x1EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA798u;
        // 0x1ea79c: 0xaf838efc  sw          $v1, -0x7104($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7A0u;
        goto label_1ea7a0;
    }
    ctx->pc = 0x1EA798u;
    {
        const bool branch_taken_0x1ea798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA798u;
        // 0x1ea79c: 0xaf838efc  sw          $v1, -0x7104($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea798) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA7A0u;
label_1ea7a0:
    // 0x1ea7a0: 0x14a4001c  bne         $a1, $a0, . + 4 + (0x1C << 2)
label_1ea7a4:
    if (ctx->pc == 0x1EA7A4u) {
        ctx->pc = 0x1EA7A8u;
        goto label_1ea7a8;
    }
    ctx->pc = 0x1EA7A0u;
    {
        const bool branch_taken_0x1ea7a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea7a0) {
            ctx->pc = 0x1EA814u;
            goto label_1ea814;
        }
    }
    ctx->pc = 0x1EA7A8u;
label_1ea7a8:
    // 0x1ea7a8: 0x8f848ef4  lw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
label_1ea7ac:
    // 0x1ea7ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ea7b0:
    // 0x1ea7b0: 0xaf848ef4  sw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 4));
label_1ea7b4:
    // 0x1ea7b4: 0x8f848ef4  lw          $a0, -0x710C($gp)
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
label_1ea7b8:
    // 0x1ea7b8: 0x28840008  slti        $a0, $a0, 0x8
    ctx->pc = 0x1ea7b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_1ea7bc:
    // 0x1ea7bc: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
label_1ea7c0:
    if (ctx->pc == 0x1EA7C0u) {
        ctx->pc = 0x1EA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7BCu;
        // 0x1ea7c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7C4u;
        goto label_1ea7c4;
    }
    ctx->pc = 0x1EA7BCu;
    {
        const bool branch_taken_0x1ea7bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7BCu;
        // 0x1ea7c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7bc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA7C4u;
label_1ea7c4:
    // 0x1ea7c4: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1ea7c8:
    // 0x1ea7c8: 0xaf848ef0  sw          $a0, -0x7110($gp)
    ctx->pc = 0x1ea7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 4));
label_1ea7cc:
    // 0x1ea7cc: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x1ea7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ea7d0:
    // 0x1ea7d0: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1ea7d4:
    // 0x1ea7d4: 0xaf848eec  sw          $a0, -0x7114($gp)
    ctx->pc = 0x1ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 4));
label_1ea7d8:
    // 0x1ea7d8: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ea7dc:
    // 0x1ea7dc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1ea7e0:
    // 0x1ea7e0: 0xaf848ee8  sw          $a0, -0x7118($gp)
    ctx->pc = 0x1ea7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 4));
label_1ea7e4:
    // 0x1ea7e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ea7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ea7e8:
    // 0x1ea7e8: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1ea7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
label_1ea7ec:
    // 0x1ea7ec: 0xaf848ee0  sw          $a0, -0x7120($gp)
    ctx->pc = 0x1ea7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 4));
label_1ea7f0:
    // 0x1ea7f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ea7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea7f4:
    // 0x1ea7f4: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1ea7f8:
    // 0x1ea7f8: 0xaf848edc  sw          $a0, -0x7124($gp)
    ctx->pc = 0x1ea7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 4));
label_1ea7fc:
    // 0x1ea7fc: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
label_1ea800:
    // 0x1ea800: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
label_1ea804:
    // 0x1ea804: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1ea804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
label_1ea808:
    // 0x1ea808: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1ea80c:
    // 0x1ea80c: 0x10000053  b           . + 4 + (0x53 << 2)
label_1ea810:
    if (ctx->pc == 0x1EA810u) {
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA80Cu;
        // 0x1ea810: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA814u;
        goto label_1ea814;
    }
    ctx->pc = 0x1EA80Cu;
    {
        const bool branch_taken_0x1ea80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA80Cu;
        // 0x1ea810: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea80c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA814u;
label_1ea814:
    // 0x1ea814: 0x8f868ec8  lw          $a2, -0x7138($gp)
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
label_1ea818:
    // 0x1ea818: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
label_1ea81c:
    if (ctx->pc == 0x1EA81Cu) {
        ctx->pc = 0x1EA820u;
        goto label_1ea820;
    }
    ctx->pc = 0x1EA818u;
    {
        const bool branch_taken_0x1ea818 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea818) {
            ctx->pc = 0x1EA91Cu;
            goto label_1ea91c;
        }
    }
    ctx->pc = 0x1EA820u;
label_1ea820:
    // 0x1ea820: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
label_1ea824:
    // 0x1ea824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ea828:
    // 0x1ea828: 0x14c3004c  bne         $a2, $v1, . + 4 + (0x4C << 2)
label_1ea82c:
    if (ctx->pc == 0x1EA82Cu) {
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0xaf858ec0  sw          $a1, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA830u;
        goto label_1ea830;
    }
    ctx->pc = 0x1EA828u;
    {
        const bool branch_taken_0x1ea828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0xaf858ec0  sw          $a1, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea828) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA830u;
label_1ea830:
    // 0x1ea830: 0x8f878ebc  lw          $a3, -0x7144($gp)
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
label_1ea834:
    // 0x1ea834: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ea838:
    // 0x1ea838: 0xdf8587c8  ld          $a1, -0x7838($gp)
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea83c:
    // 0x1ea83c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1ea840:
    // 0x1ea840: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_1ea844:
    // 0x1ea844: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1ea844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1ea848:
    // 0x1ea848: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1ea84c:
    if (ctx->pc == 0x1EA84Cu) {
        ctx->pc = 0x1EA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA848u;
        // 0x1ea84c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA850u;
        goto label_1ea850;
    }
    ctx->pc = 0x1EA848u;
    {
        const bool branch_taken_0x1ea848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA848u;
        // 0x1ea84c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea848) {
            ctx->pc = 0x1EA870u;
            goto label_1ea870;
        }
    }
    ctx->pc = 0x1EA850u;
label_1ea850:
    // 0x1ea850: 0xc05b420  jal         func_16D080
label_1ea854:
    if (ctx->pc == 0x1EA854u) {
        ctx->pc = 0x1EA858u;
        goto label_1ea858;
    }
    ctx->pc = 0x1EA850u;
    SET_GPR_U32(ctx, 31, 0x1EA858u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA850u, 0x1EA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA858u;
label_1ea858:
    // 0x1ea858: 0x8f858ec4  lw          $a1, -0x713C($gp)
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea85c:
    // 0x1ea85c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea860:
    // 0x1ea860: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea864:
    // 0x1ea864: 0x65200b  movn        $a0, $v1, $a1
    ctx->pc = 0x1ea864u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1ea868:
    // 0x1ea868: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1ea86c:
    if (ctx->pc == 0x1EA86Cu) {
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA868u;
        // 0x1ea86c: 0xaf848ec8  sw          $a0, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA870u;
        goto label_1ea870;
    }
    ctx->pc = 0x1EA868u;
    {
        const bool branch_taken_0x1ea868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA868u;
        // 0x1ea86c: 0xaf848ec8  sw          $a0, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea868) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA870u;
label_1ea870:
    // 0x1ea870: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea874:
    // 0x1ea874: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1ea878:
    // 0x1ea878: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_1ea87c:
    // 0x1ea87c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ea880:
    // 0x1ea880: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1ea884:
    if (ctx->pc == 0x1EA884u) {
        ctx->pc = 0x1EA888u;
        goto label_1ea888;
    }
    ctx->pc = 0x1EA880u;
    {
        const bool branch_taken_0x1ea880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea880) {
            ctx->pc = 0x1EA8B0u;
            goto label_1ea8b0;
        }
    }
    ctx->pc = 0x1EA888u;
label_1ea888:
    // 0x1ea888: 0x8f838eb8  lw          $v1, -0x7148($gp)
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938296)));
label_1ea88c:
    // 0x1ea88c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_1ea890:
    if (ctx->pc == 0x1EA890u) {
        ctx->pc = 0x1EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA88Cu;
        // 0x1ea890: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA894u;
        goto label_1ea894;
    }
    ctx->pc = 0x1EA88Cu;
    {
        const bool branch_taken_0x1ea88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA88Cu;
        // 0x1ea890: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea88c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA894u;
label_1ea894:
    // 0x1ea894: 0xc05b420  jal         func_16D080
label_1ea898:
    if (ctx->pc == 0x1EA898u) {
        ctx->pc = 0x1EA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA894u;
        // 0x1ea898: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA89Cu;
        goto label_1ea89c;
    }
    ctx->pc = 0x1EA894u;
    SET_GPR_U32(ctx, 31, 0x1EA89Cu);
    ctx->pc = 0x1EA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA894u;
    // 0x1ea898: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA894u, 0x1EA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA89Cu;
label_1ea89c:
    // 0x1ea89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea8a0:
    // 0x1ea8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea8a4:
    // 0x1ea8a4: 0xaf848ec4  sw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 4));
label_1ea8a8:
    // 0x1ea8a8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1ea8ac:
    if (ctx->pc == 0x1EA8ACu) {
        ctx->pc = 0x1EA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A8u;
        // 0x1ea8ac: 0xaf838ec8  sw          $v1, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8B0u;
        goto label_1ea8b0;
    }
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A8u;
        // 0x1ea8ac: 0xaf838ec8  sw          $v1, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8B0u;
label_1ea8b0:
    // 0x1ea8b0: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea8b4:
    // 0x1ea8b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ea8b8:
    // 0x1ea8b8: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_1ea8bc:
    // 0x1ea8bc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ea8c0:
    // 0x1ea8c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1ea8c4:
    if (ctx->pc == 0x1EA8C4u) {
        ctx->pc = 0x1EA8C8u;
        goto label_1ea8c8;
    }
    ctx->pc = 0x1EA8C0u;
    {
        const bool branch_taken_0x1ea8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8c0) {
            ctx->pc = 0x1EA8E4u;
            goto label_1ea8e4;
        }
    }
    ctx->pc = 0x1EA8C8u;
label_1ea8c8:
    // 0x1ea8c8: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea8cc:
    // 0x1ea8cc: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_1ea8d0:
    if (ctx->pc == 0x1EA8D0u) {
        ctx->pc = 0x1EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8CCu;
        // 0x1ea8d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8D4u;
        goto label_1ea8d4;
    }
    ctx->pc = 0x1EA8CCu;
    {
        const bool branch_taken_0x1ea8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8CCu;
        // 0x1ea8d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8cc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8D4u;
label_1ea8d4:
    // 0x1ea8d4: 0xc05b420  jal         func_16D080
label_1ea8d8:
    if (ctx->pc == 0x1EA8D8u) {
        ctx->pc = 0x1EA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8D4u;
        // 0x1ea8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8DCu;
        goto label_1ea8dc;
    }
    ctx->pc = 0x1EA8D4u;
    SET_GPR_U32(ctx, 31, 0x1EA8DCu);
    ctx->pc = 0x1EA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8D4u;
    // 0x1ea8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA8D4u, 0x1EA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8DCu;
label_1ea8dc:
    // 0x1ea8dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1ea8e0:
    if (ctx->pc == 0x1EA8E0u) {
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0xaf808ec4  sw          $zero, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8E4u;
        goto label_1ea8e4;
    }
    ctx->pc = 0x1EA8DCu;
    {
        const bool branch_taken_0x1ea8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0xaf808ec4  sw          $zero, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8dc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8E4u;
label_1ea8e4:
    // 0x1ea8e4: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea8e8:
    // 0x1ea8e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ea8ec:
    // 0x1ea8ec: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_1ea8f0:
    // 0x1ea8f0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ea8f4:
    // 0x1ea8f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1ea8f8:
    if (ctx->pc == 0x1EA8F8u) {
        ctx->pc = 0x1EA8FCu;
        goto label_1ea8fc;
    }
    ctx->pc = 0x1EA8F4u;
    {
        const bool branch_taken_0x1ea8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8f4) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8FCu;
label_1ea8fc:
    // 0x1ea8fc: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea900:
    // 0x1ea900: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_1ea904:
    if (ctx->pc == 0x1EA904u) {
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA908u;
        goto label_1ea908;
    }
    ctx->pc = 0x1EA900u;
    {
        const bool branch_taken_0x1ea900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea900) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA908u;
label_1ea908:
    // 0x1ea908: 0xc05b420  jal         func_16D080
label_1ea90c:
    if (ctx->pc == 0x1EA90Cu) {
        ctx->pc = 0x1EA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA908u;
        // 0x1ea90c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA910u;
        goto label_1ea910;
    }
    ctx->pc = 0x1EA908u;
    SET_GPR_U32(ctx, 31, 0x1EA910u);
    ctx->pc = 0x1EA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA908u;
    // 0x1ea90c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA908u, 0x1EA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA910u;
label_1ea910:
    // 0x1ea910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea914:
    // 0x1ea914: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ea918:
    if (ctx->pc == 0x1EA918u) {
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA914u;
        // 0x1ea918: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA91Cu;
        goto label_1ea91c;
    }
    ctx->pc = 0x1EA914u;
    {
        const bool branch_taken_0x1ea914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA914u;
        // 0x1ea918: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea914) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA91Cu;
label_1ea91c:
    // 0x1ea91c: 0x8f858eb4  lw          $a1, -0x714C($gp)
    ctx->pc = 0x1ea91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
label_1ea920:
    // 0x1ea920: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_1ea924:
    if (ctx->pc == 0x1EA924u) {
        ctx->pc = 0x1EA928u;
        goto label_1ea928;
    }
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA928u;
label_1ea928:
    // 0x1ea928: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1ea92c:
    // 0x1ea92c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ea930:
    // 0x1ea930: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
label_1ea934:
    if (ctx->pc == 0x1EA934u) {
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xaf848eb0  sw          $a0, -0x7150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA938u;
        goto label_1ea938;
    }
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xaf848eb0  sw          $a0, -0x7150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA938u;
label_1ea938:
    // 0x1ea938: 0x8f858eac  lw          $a1, -0x7154($gp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1ea93c:
    // 0x1ea93c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ea940:
    // 0x1ea940: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1ea940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea944:
    // 0x1ea944: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ea944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ea948:
    // 0x1ea948: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_1ea94c:
    // 0x1ea94c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ea94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1ea950:
    // 0x1ea950: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1ea954:
    if (ctx->pc == 0x1EA954u) {
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA958u;
        goto label_1ea958;
    }
    ctx->pc = 0x1EA950u;
    {
        const bool branch_taken_0x1ea950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea950) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA958u;
label_1ea958:
    // 0x1ea958: 0xaf838eb4  sw          $v1, -0x714C($gp)
    ctx->pc = 0x1ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 3));
label_1ea95c:
    // 0x1ea95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea960:
    // 0x1ea960: 0x3e00008  jr          $ra
label_1ea964:
    if (ctx->pc == 0x1EA964u) {
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA968u;
        goto label_1ea968;
    }
    ctx->pc = 0x1EA960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA968u;
label_1ea968:
    // 0x1ea968: 0x0  nop
    ctx->pc = 0x1ea968u;
    // NOP
label_1ea96c:
    // 0x1ea96c: 0x0  nop
    ctx->pc = 0x1ea96cu;
    // NOP
label_1ea970:
    // 0x1ea970: 0x104001a  div         $zero, $t0, $a0
    ctx->pc = 0x1ea970u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea974:
    // 0x1ea974: 0xaf858eec  sw          $a1, -0x7114($gp)
    ctx->pc = 0x1ea974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 5));
label_1ea978:
    // 0x1ea978: 0xaf868ee8  sw          $a2, -0x7118($gp)
    ctx->pc = 0x1ea978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 6));
label_1ea97c:
    // 0x1ea97c: 0xaf878ee4  sw          $a3, -0x711C($gp)
    ctx->pc = 0x1ea97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 7));
label_1ea980:
    // 0x1ea980: 0xaf888ee0  sw          $t0, -0x7120($gp)
    ctx->pc = 0x1ea980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 8));
label_1ea984:
    // 0x1ea984: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1ea988:
    // 0x1ea988: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1ea98c:
    // 0x1ea98c: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea98cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1ea990:
    // 0x1ea990: 0xaf848ef0  sw          $a0, -0x7110($gp)
    ctx->pc = 0x1ea990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 4));
label_1ea994:
    // 0x1ea994: 0xaf898edc  sw          $t1, -0x7124($gp)
    ctx->pc = 0x1ea994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 9));
label_1ea998:
    // 0x1ea998: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1ea99c:
    // 0x1ea99c: 0x1812  mflo        $v1
    ctx->pc = 0x1ea99cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1ea9a0:
    // 0x1ea9a0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1ea9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea9a4:
    // 0x1ea9a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ea9a8:
    if (ctx->pc == 0x1EA9A8u) {
        ctx->pc = 0x1EA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A4u;
        // 0x1ea9a8: 0xaf808ed4  sw          $zero, -0x712C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9ACu;
        goto label_1ea9ac;
    }
    ctx->pc = 0x1EA9A4u;
    {
        const bool branch_taken_0x1ea9a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A4u;
        // 0x1ea9a8: 0xaf808ed4  sw          $zero, -0x712C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9a4) {
            ctx->pc = 0x1EA9B4u;
            goto label_1ea9b4;
        }
    }
    ctx->pc = 0x1EA9ACu;
label_1ea9ac:
    // 0x1ea9ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea9b0:
    if (ctx->pc == 0x1EA9B0u) {
        ctx->pc = 0x1EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9ACu;
        // 0x1ea9b0: 0x124001a  div         $zero, $t1, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9B4u;
        goto label_1ea9b4;
    }
    ctx->pc = 0x1EA9ACu;
    {
        const bool branch_taken_0x1ea9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9ACu;
        // 0x1ea9b0: 0x124001a  div         $zero, $t1, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9ac) {
            ctx->pc = 0x1EA9BCu;
            goto label_1ea9bc;
        }
    }
    ctx->pc = 0x1EA9B4u;
label_1ea9b4:
    // 0x1ea9b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea9b8:
    // 0x1ea9b8: 0x124001a  div         $zero, $t1, $a0
    ctx->pc = 0x1ea9b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea9bc:
    // 0x1ea9bc: 0x0  nop
    ctx->pc = 0x1ea9bcu;
    // NOP
label_1ea9c0:
    // 0x1ea9c0: 0x0  nop
    ctx->pc = 0x1ea9c0u;
    // NOP
label_1ea9c4:
    // 0x1ea9c4: 0x2012  mflo        $a0
    ctx->pc = 0x1ea9c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1ea9c8:
    // 0x1ea9c8: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1ea9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea9cc:
    // 0x1ea9cc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ea9d0:
    if (ctx->pc == 0x1EA9D0u) {
        ctx->pc = 0x1EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9CCu;
        // 0x1ea9d0: 0xaf838ed0  sw          $v1, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9D4u;
        goto label_1ea9d4;
    }
    ctx->pc = 0x1EA9CCu;
    {
        const bool branch_taken_0x1ea9cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9CCu;
        // 0x1ea9d0: 0xaf838ed0  sw          $v1, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9cc) {
            ctx->pc = 0x1EA9DCu;
            goto label_1ea9dc;
        }
    }
    ctx->pc = 0x1EA9D4u;
label_1ea9d4:
    // 0x1ea9d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea9d8:
    if (ctx->pc == 0x1EA9D8u) {
        ctx->pc = 0x1EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D4u;
        // 0x1ea9d8: 0xaf848ecc  sw          $a0, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9DCu;
        goto label_1ea9dc;
    }
    ctx->pc = 0x1EA9D4u;
    {
        const bool branch_taken_0x1ea9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D4u;
        // 0x1ea9d8: 0xaf848ecc  sw          $a0, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9d4) {
            ctx->pc = 0x1EA9E4u;
            goto label_1ea9e4;
        }
    }
    ctx->pc = 0x1EA9DCu;
label_1ea9dc:
    // 0x1ea9dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea9e0:
    // 0x1ea9e0: 0xaf848ecc  sw          $a0, -0x7134($gp)
    ctx->pc = 0x1ea9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 4));
label_1ea9e4:
    // 0x1ea9e4: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1ea9e8:
    // 0x1ea9e8: 0x3e00008  jr          $ra
label_1ea9ec:
    if (ctx->pc == 0x1EA9ECu) {
        ctx->pc = 0x1EA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E8u;
        // 0x1ea9ec: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9F0u;
        goto label_1ea9f0;
    }
    ctx->pc = 0x1EA9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E8u;
        // 0x1ea9ec: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA9F0u;
label_1ea9f0:
    // 0x1ea9f0: 0xaf848ed8  sw          $a0, -0x7128($gp)
    ctx->pc = 0x1ea9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 4));
label_1ea9f4:
    // 0x1ea9f4: 0xaf858ed4  sw          $a1, -0x712C($gp)
    ctx->pc = 0x1ea9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 5));
label_1ea9f8:
    // 0x1ea9f8: 0xaf868ed0  sw          $a2, -0x7130($gp)
    ctx->pc = 0x1ea9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 6));
label_1ea9fc:
    // 0x1ea9fc: 0x3e00008  jr          $ra
label_1eaa00:
    if (ctx->pc == 0x1EAA00u) {
        ctx->pc = 0x1EAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9FCu;
        // 0x1eaa00: 0xaf878ecc  sw          $a3, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA04u;
        goto label_1eaa04;
    }
    ctx->pc = 0x1EA9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9FCu;
        // 0x1eaa00: 0xaf878ecc  sw          $a3, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA04u;
label_1eaa04:
    // 0x1eaa04: 0x0  nop
    ctx->pc = 0x1eaa04u;
    // NOP
    ctx->pc = 0x1eaa08u;
    return;
}

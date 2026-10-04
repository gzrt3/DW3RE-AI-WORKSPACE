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


void FUN_0014eba0_part319(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ea000u: goto label_1ea000;
        case 0x1ea004u: goto label_1ea004;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea010u: goto label_1ea010;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea01cu: goto label_1ea01c;
        case 0x1ea020u: goto label_1ea020;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea028u: goto label_1ea028;
        case 0x1ea02cu: goto label_1ea02c;
        case 0x1ea030u: goto label_1ea030;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea03cu: goto label_1ea03c;
        case 0x1ea040u: goto label_1ea040;
        case 0x1ea044u: goto label_1ea044;
        case 0x1ea048u: goto label_1ea048;
        case 0x1ea04cu: goto label_1ea04c;
        case 0x1ea050u: goto label_1ea050;
        case 0x1ea054u: goto label_1ea054;
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea05cu: goto label_1ea05c;
        case 0x1ea060u: goto label_1ea060;
        case 0x1ea064u: goto label_1ea064;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea06cu: goto label_1ea06c;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea074u: goto label_1ea074;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea07cu: goto label_1ea07c;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea084u: goto label_1ea084;
        case 0x1ea088u: goto label_1ea088;
        case 0x1ea08cu: goto label_1ea08c;
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea0ecu: goto label_1ea0ec;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea0f4u: goto label_1ea0f4;
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea0fcu: goto label_1ea0fc;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea108u: goto label_1ea108;
        case 0x1ea10cu: goto label_1ea10c;
        case 0x1ea110u: goto label_1ea110;
        case 0x1ea114u: goto label_1ea114;
        case 0x1ea118u: goto label_1ea118;
        case 0x1ea11cu: goto label_1ea11c;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea12cu: goto label_1ea12c;
        case 0x1ea130u: goto label_1ea130;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea138u: goto label_1ea138;
        case 0x1ea13cu: goto label_1ea13c;
        case 0x1ea140u: goto label_1ea140;
        case 0x1ea144u: goto label_1ea144;
        case 0x1ea148u: goto label_1ea148;
        case 0x1ea14cu: goto label_1ea14c;
        case 0x1ea150u: goto label_1ea150;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea158u: goto label_1ea158;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea160u: goto label_1ea160;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea168u: goto label_1ea168;
        case 0x1ea16cu: goto label_1ea16c;
        case 0x1ea170u: goto label_1ea170;
        case 0x1ea174u: goto label_1ea174;
        case 0x1ea178u: goto label_1ea178;
        case 0x1ea17cu: goto label_1ea17c;
        case 0x1ea180u: goto label_1ea180;
        case 0x1ea184u: goto label_1ea184;
        case 0x1ea188u: goto label_1ea188;
        case 0x1ea18cu: goto label_1ea18c;
        case 0x1ea190u: goto label_1ea190;
        case 0x1ea194u: goto label_1ea194;
        case 0x1ea198u: goto label_1ea198;
        case 0x1ea19cu: goto label_1ea19c;
        case 0x1ea1a0u: goto label_1ea1a0;
        case 0x1ea1a4u: goto label_1ea1a4;
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1acu: goto label_1ea1ac;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1b4u: goto label_1ea1b4;
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c0u: goto label_1ea1c0;
        case 0x1ea1c4u: goto label_1ea1c4;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1d0u: goto label_1ea1d0;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1d8u: goto label_1ea1d8;
        case 0x1ea1dcu: goto label_1ea1dc;
        case 0x1ea1e0u: goto label_1ea1e0;
        case 0x1ea1e4u: goto label_1ea1e4;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea1ecu: goto label_1ea1ec;
        case 0x1ea1f0u: goto label_1ea1f0;
        case 0x1ea1f4u: goto label_1ea1f4;
        case 0x1ea1f8u: goto label_1ea1f8;
        case 0x1ea1fcu: goto label_1ea1fc;
        case 0x1ea200u: goto label_1ea200;
        case 0x1ea204u: goto label_1ea204;
        case 0x1ea208u: goto label_1ea208;
        case 0x1ea20cu: goto label_1ea20c;
        case 0x1ea210u: goto label_1ea210;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea218u: goto label_1ea218;
        case 0x1ea21cu: goto label_1ea21c;
        case 0x1ea220u: goto label_1ea220;
        case 0x1ea224u: goto label_1ea224;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea22cu: goto label_1ea22c;
        case 0x1ea230u: goto label_1ea230;
        case 0x1ea234u: goto label_1ea234;
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
        default: return;
    }

label_1ea000:
    // 0x1ea000: 0x24090380  addiu       $t1, $zero, 0x380
    ctx->pc = 0x1ea000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
label_1ea004:
    // 0x1ea004: 0xc05de30  jal         func_1778C0
label_1ea008:
    if (ctx->pc == 0x1EA008u) {
        ctx->pc = 0x1EA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA004u;
        // 0x1ea008: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA00Cu;
        goto label_1ea00c;
    }
    ctx->pc = 0x1EA004u;
    SET_GPR_U32(ctx, 31, 0x1EA00Cu);
    ctx->pc = 0x1EA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA004u;
    // 0x1ea008: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1EA00Cu;
label_1ea00c:
    // 0x1ea00c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ea010:
    // 0x1ea010: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ea014:
    // 0x1ea014: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ea014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea018:
    // 0x1ea018: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1ea01c:
    if (ctx->pc == 0x1EA01Cu) {
        ctx->pc = 0x1EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA018u;
        // 0x1ea01c: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA020u;
        goto label_1ea020;
    }
    ctx->pc = 0x1EA018u;
    {
        const bool branch_taken_0x1ea018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA018u;
        // 0x1ea01c: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea018) {
            ctx->pc = 0x1E9FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e9fc8; return; }
        }
    }
    ctx->pc = 0x1EA020u;
label_1ea020:
    // 0x1ea020: 0xc070834  jal         func_1C20D0
label_1ea024:
    if (ctx->pc == 0x1EA024u) {
        ctx->pc = 0x1EA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA020u;
        // 0x1ea024: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA028u;
        goto label_1ea028;
    }
    ctx->pc = 0x1EA020u;
    SET_GPR_U32(ctx, 31, 0x1EA028u);
    ctx->pc = 0x1EA024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA020u;
    // 0x1ea024: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1EA028u;
label_1ea028:
    // 0x1ea028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea02c:
    // 0x1ea02c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ea030:
    // 0x1ea030: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1ea030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1ea034:
    // 0x1ea034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea038:
    // 0x1ea038: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ea038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ea03c:
    // 0x1ea03c: 0x26a406f0  addiu       $a0, $s5, 0x6F0
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1776));
label_1ea040:
    // 0x1ea040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea044:
    // 0x1ea044: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ea044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ea048:
    // 0x1ea048: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ea048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ea04c:
    // 0x1ea04c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ea050:
    // 0x1ea050: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ea050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ea054:
    // 0x1ea054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ea054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea058:
    // 0x1ea058: 0x24090190  addiu       $t1, $zero, 0x190
    ctx->pc = 0x1ea058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1ea05c:
    // 0x1ea05c: 0xc05de30  jal         func_1778C0
label_1ea060:
    if (ctx->pc == 0x1EA060u) {
        ctx->pc = 0x1EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA05Cu;
        // 0x1ea060: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA064u;
        goto label_1ea064;
    }
    ctx->pc = 0x1EA05Cu;
    SET_GPR_U32(ctx, 31, 0x1EA064u);
    ctx->pc = 0x1EA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA05Cu;
    // 0x1ea060: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1EA064u;
label_1ea064:
    // 0x1ea064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea068:
    // 0x1ea068: 0x26a40790  addiu       $a0, $s5, 0x790
    ctx->pc = 0x1ea068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
label_1ea06c:
    // 0x1ea06c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea070:
    // 0x1ea070: 0xc05e1d4  jal         func_178750
label_1ea074:
    if (ctx->pc == 0x1EA074u) {
        ctx->pc = 0x1EA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA070u;
        // 0x1ea074: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA078u;
        goto label_1ea078;
    }
    ctx->pc = 0x1EA070u;
    SET_GPR_U32(ctx, 31, 0x1EA078u);
    ctx->pc = 0x1EA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA070u;
    // 0x1ea074: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    { ctx->pc = 0x178750; return; }
    ctx->pc = 0x1EA078u;
label_1ea078:
    // 0x1ea078: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ea078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1ea07c:
    // 0x1ea07c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ea07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ea080:
    // 0x1ea080: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1ea084:
    // 0x1ea084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea088:
    // 0x1ea088: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1ea088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1ea08c:
    // 0x1ea08c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ea090:
    // 0x1ea090: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1ea090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1ea094:
    // 0x1ea094: 0xfea307e0  sd          $v1, 0x7E0($s5)
    ctx->pc = 0x1ea094u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 2016), GPR_U64(ctx, 3));
label_1ea098:
    // 0x1ea098: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea09c:
    // 0x1ea09c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a0:
    // 0x1ea0a0: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1ea0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1ea0a4:
    // 0x1ea0a4: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1ea0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1ea0a8:
    // 0x1ea0a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ea0ac:
    // 0x1ea0ac: 0xfea207e8  sd          $v0, 0x7E8($s5)
    ctx->pc = 0x1ea0acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 2024), GPR_U64(ctx, 2));
label_1ea0b0:
    // 0x1ea0b0: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1ea0b4:
    // 0x1ea0b4: 0x244407f0  addiu       $a0, $v0, 0x7F0
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_1ea0b8:
    // 0x1ea0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0bc:
    // 0x1ea0bc: 0xc05e158  jal         func_178560
label_1ea0c0:
    if (ctx->pc == 0x1EA0C0u) {
        ctx->pc = 0x1EA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0BCu;
        // 0x1ea0c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0C4u;
        goto label_1ea0c4;
    }
    ctx->pc = 0x1EA0BCu;
    SET_GPR_U32(ctx, 31, 0x1EA0C4u);
    ctx->pc = 0x1EA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0BCu;
    // 0x1ea0c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    { ctx->pc = 0x178560; return; }
    ctx->pc = 0x1EA0C4u;
label_1ea0c4:
    // 0x1ea0c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ea0c8:
    // 0x1ea0c8: 0x2a2200dc  slti        $v0, $s1, 0xDC
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)220) ? 1 : 0);
label_1ea0cc:
    // 0x1ea0cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1ea0d0:
    if (ctx->pc == 0x1EA0D0u) {
        ctx->pc = 0x1EA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0CCu;
        // 0x1ea0d0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0D4u;
        goto label_1ea0d4;
    }
    ctx->pc = 0x1EA0CCu;
    {
        const bool branch_taken_0x1ea0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0CCu;
        // 0x1ea0d0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0cc) {
            ctx->pc = 0x1EA0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea0b0;
        }
    }
    ctx->pc = 0x1EA0D4u;
label_1ea0d4:
    // 0x1ea0d4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ea0d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1ea0d8:
    // 0x1ea0d8: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x1ea0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea0dc:
    // 0x1ea0dc: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
label_1ea0e0:
    if (ctx->pc == 0x1EA0E0u) {
        ctx->pc = 0x1EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0DCu;
        // 0x1ea0e0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0E4u;
        goto label_1ea0e4;
    }
    ctx->pc = 0x1EA0DCu;
    {
        const bool branch_taken_0x1ea0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0DCu;
        // 0x1ea0e0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0dc) {
            ctx->pc = 0x1E9ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e9ed4; return; }
        }
    }
    ctx->pc = 0x1EA0E4u;
label_1ea0e4:
    // 0x1ea0e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0e8:
    // 0x1ea0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0ec:
    // 0x1ea0ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1ea0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1ea0f0:
    // 0x1ea0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0f4:
    // 0x1ea0f4: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x1ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
label_1ea0f8:
    // 0x1ea0f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea0fc:
    // 0x1ea0fc: 0xc05e158  jal         func_178560
label_1ea100:
    if (ctx->pc == 0x1EA100u) {
        ctx->pc = 0x1EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0FCu;
        // 0x1ea100: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA104u;
        goto label_1ea104;
    }
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0FCu;
    // 0x1ea100: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    { ctx->pc = 0x178560; return; }
    ctx->pc = 0x1EA104u;
label_1ea104:
    // 0x1ea104: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ea108:
    // 0x1ea108: 0x2a2300dc  slti        $v1, $s1, 0xDC
    ctx->pc = 0x1ea108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)220) ? 1 : 0);
label_1ea10c:
    // 0x1ea10c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1ea110:
    if (ctx->pc == 0x1EA110u) {
        ctx->pc = 0x1EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA10Cu;
        // 0x1ea110: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA114u;
        goto label_1ea114;
    }
    ctx->pc = 0x1EA10Cu;
    {
        const bool branch_taken_0x1ea10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA10Cu;
        // 0x1ea110: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea10c) {
            ctx->pc = 0x1EA0ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea0ec;
        }
    }
    ctx->pc = 0x1EA114u;
label_1ea114:
    // 0x1ea114: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ea114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ea118:
    // 0x1ea118: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1ea118u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ea11c:
    // 0x1ea11c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1ea11cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ea120:
    // 0x1ea120: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ea120u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea124:
    // 0x1ea124: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ea124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea128:
    // 0x1ea128: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ea128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea12c:
    // 0x1ea12c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ea12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea130:
    // 0x1ea130: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ea130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea134:
    // 0x1ea134: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ea134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea138:
    // 0x1ea138: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ea138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea13c:
    // 0x1ea13c: 0x3e00008  jr          $ra
label_1ea140:
    if (ctx->pc == 0x1EA140u) {
        ctx->pc = 0x1EA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA13Cu;
        // 0x1ea140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA144u;
        goto label_1ea144;
    }
    ctx->pc = 0x1EA13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA13Cu;
        // 0x1ea140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA144u;
label_1ea144:
    // 0x1ea144: 0x0  nop
    ctx->pc = 0x1ea144u;
    // NOP
label_1ea148:
    // 0x1ea148: 0x0  nop
    ctx->pc = 0x1ea148u;
    // NOP
label_1ea14c:
    // 0x1ea14c: 0x0  nop
    ctx->pc = 0x1ea14cu;
    // NOP
label_1ea150:
    // 0x1ea150: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ea154:
    // 0x1ea154: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1ea158:
    // 0x1ea158: 0xaf838ef0  sw          $v1, -0x7110($gp)
    ctx->pc = 0x1ea158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 3));
label_1ea15c:
    // 0x1ea15c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1ea15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ea160:
    // 0x1ea160: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1ea164:
    // 0x1ea164: 0xaf838eec  sw          $v1, -0x7114($gp)
    ctx->pc = 0x1ea164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 3));
label_1ea168:
    // 0x1ea168: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1ea168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ea16c:
    // 0x1ea16c: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1ea170:
    // 0x1ea170: 0xaf838ee8  sw          $v1, -0x7118($gp)
    ctx->pc = 0x1ea170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 3));
label_1ea174:
    // 0x1ea174: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1ea174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ea178:
    // 0x1ea178: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1ea178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
label_1ea17c:
    // 0x1ea17c: 0xaf838ee0  sw          $v1, -0x7120($gp)
    ctx->pc = 0x1ea17cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 3));
label_1ea180:
    // 0x1ea180: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ea180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea184:
    // 0x1ea184: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1ea188:
    // 0x1ea188: 0xaf838edc  sw          $v1, -0x7124($gp)
    ctx->pc = 0x1ea188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 3));
label_1ea18c:
    // 0x1ea18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea190:
    // 0x1ea190: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1ea190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
label_1ea194:
    // 0x1ea194: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1ea194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
label_1ea198:
    // 0x1ea198: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1ea198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
label_1ea19c:
    // 0x1ea19c: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea19cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1ea1a0:
    // 0x1ea1a0: 0x3e00008  jr          $ra
label_1ea1a4:
    if (ctx->pc == 0x1EA1A4u) {
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1A8u;
        goto label_1ea1a8;
    }
    ctx->pc = 0x1EA1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA1A8u;
label_1ea1a8:
    // 0x1ea1a8: 0x0  nop
    ctx->pc = 0x1ea1a8u;
    // NOP
label_1ea1ac:
    // 0x1ea1ac: 0x0  nop
    ctx->pc = 0x1ea1acu;
    // NOP
label_1ea1b0:
    // 0x1ea1b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ea1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ea1b4:
    // 0x1ea1b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ea1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ea1b8:
    // 0x1ea1b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ea1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ea1bc:
    // 0x1ea1bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ea1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ea1c0:
    // 0x1ea1c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ea1c4:
    // 0x1ea1c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ea1c8:
    // 0x1ea1c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ea1cc:
    // 0x1ea1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ea1d0:
    // 0x1ea1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ea1d4:
    // 0x1ea1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ea1d8:
    // 0x1ea1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ea1dc:
    // 0x1ea1dc: 0x8f878efc  lw          $a3, -0x7104($gp)
    ctx->pc = 0x1ea1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1ea1e0:
    // 0x1ea1e0: 0x10e00105  beqz        $a3, . + 4 + (0x105 << 2)
label_1ea1e4:
    if (ctx->pc == 0x1EA1E4u) {
        ctx->pc = 0x1EA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1E0u;
        // 0x1ea1e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1E8u;
        goto label_1ea1e8;
    }
    ctx->pc = 0x1EA1E0u;
    {
        const bool branch_taken_0x1ea1e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1E0u;
        // 0x1ea1e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1e0) {
            ctx->pc = 0x1EA5F8u;
            goto label_1ea5f8;
        }
    }
    ctx->pc = 0x1EA1E8u;
label_1ea1e8:
    // 0x1ea1e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1ea1ec:
    // 0x1ea1ec: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1ea1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ea1f0:
    // 0x1ea1f0: 0x27838f00  addiu       $v1, $gp, -0x7100
    ctx->pc = 0x1ea1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938368));
label_1ea1f4:
    // 0x1ea1f4: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1ea1f8:
    // 0x1ea1f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea1fc:
    // 0x1ea1fc: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1ea1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1ea200:
    // 0x1ea200: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ea200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea204:
    // 0x1ea204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ea204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ea208:
    // 0x1ea208: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea20c:
    // 0x1ea20c: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
label_1ea210:
    if (ctx->pc == 0x1EA210u) {
        ctx->pc = 0x1EA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA20Cu;
        // 0x1ea210: 0xa6f021  addu        $fp, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA214u;
        goto label_1ea214;
    }
    ctx->pc = 0x1EA20Cu;
    {
        const bool branch_taken_0x1ea20c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA20Cu;
        // 0x1ea210: 0xa6f021  addu        $fp, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea20c) {
            ctx->pc = 0x1EA228u;
            goto label_1ea228;
        }
    }
    ctx->pc = 0x1EA214u;
label_1ea214:
    // 0x1ea214: 0x8f898edc  lw          $t1, -0x7124($gp)
    ctx->pc = 0x1ea214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938332)));
label_1ea218:
    // 0x1ea218: 0x8f858eec  lw          $a1, -0x7114($gp)
    ctx->pc = 0x1ea218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
label_1ea21c:
    // 0x1ea21c: 0x8f868ee8  lw          $a2, -0x7118($gp)
    ctx->pc = 0x1ea21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
label_1ea220:
    // 0x1ea220: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ea224:
    if (ctx->pc == 0x1EA224u) {
        ctx->pc = 0x1EA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA220u;
        // 0x1ea224: 0x8f888ee0  lw          $t0, -0x7120($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA228u;
        goto label_1ea228;
    }
    ctx->pc = 0x1EA220u;
    {
        const bool branch_taken_0x1ea220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA220u;
        // 0x1ea224: 0x8f888ee0  lw          $t0, -0x7120($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea220) {
            ctx->pc = 0x1EA29Cu;
            goto label_1ea29c;
        }
    }
    ctx->pc = 0x1EA228u;
label_1ea228:
    // 0x1ea228: 0x8f828ef4  lw          $v0, -0x710C($gp)
    ctx->pc = 0x1ea228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938356)));
label_1ea22c:
    // 0x1ea22c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ea22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea230:
    // 0x1ea230: 0x8f848ee0  lw          $a0, -0x7120($gp)
    ctx->pc = 0x1ea230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938336)));
label_1ea234:
    // 0x1ea234: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ea234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
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
    { ctx->pc = 0x1788d0; return; }
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
    { ctx->pc = 0x19b1c8; return; }
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
            { ctx->pc = 0x1ea95c; return; }
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
            { ctx->pc = 0x1ea95c; return; }
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
            { ctx->pc = 0x1ea95c; return; }
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
            { ctx->pc = 0x1ea814; return; }
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
            { ctx->pc = 0x1ea95c; return; }
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
    ctx->pc = 0x1ea7d0u;
    return;
}

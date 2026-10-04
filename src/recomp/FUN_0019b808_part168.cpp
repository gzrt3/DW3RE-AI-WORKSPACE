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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ed0b8u: goto label_1ed0b8;
        case 0x1ed0bcu: goto label_1ed0bc;
        case 0x1ed0c0u: goto label_1ed0c0;
        case 0x1ed0c4u: goto label_1ed0c4;
        case 0x1ed0c8u: goto label_1ed0c8;
        case 0x1ed0ccu: goto label_1ed0cc;
        case 0x1ed0d0u: goto label_1ed0d0;
        case 0x1ed0d4u: goto label_1ed0d4;
        case 0x1ed0d8u: goto label_1ed0d8;
        case 0x1ed0dcu: goto label_1ed0dc;
        case 0x1ed0e0u: goto label_1ed0e0;
        case 0x1ed0e4u: goto label_1ed0e4;
        case 0x1ed0e8u: goto label_1ed0e8;
        case 0x1ed0ecu: goto label_1ed0ec;
        case 0x1ed0f0u: goto label_1ed0f0;
        case 0x1ed0f4u: goto label_1ed0f4;
        case 0x1ed0f8u: goto label_1ed0f8;
        case 0x1ed0fcu: goto label_1ed0fc;
        case 0x1ed100u: goto label_1ed100;
        case 0x1ed104u: goto label_1ed104;
        case 0x1ed108u: goto label_1ed108;
        case 0x1ed10cu: goto label_1ed10c;
        case 0x1ed110u: goto label_1ed110;
        case 0x1ed114u: goto label_1ed114;
        case 0x1ed118u: goto label_1ed118;
        case 0x1ed11cu: goto label_1ed11c;
        case 0x1ed120u: goto label_1ed120;
        case 0x1ed124u: goto label_1ed124;
        case 0x1ed128u: goto label_1ed128;
        case 0x1ed12cu: goto label_1ed12c;
        case 0x1ed130u: goto label_1ed130;
        case 0x1ed134u: goto label_1ed134;
        case 0x1ed138u: goto label_1ed138;
        case 0x1ed13cu: goto label_1ed13c;
        case 0x1ed140u: goto label_1ed140;
        case 0x1ed144u: goto label_1ed144;
        case 0x1ed148u: goto label_1ed148;
        case 0x1ed14cu: goto label_1ed14c;
        case 0x1ed150u: goto label_1ed150;
        case 0x1ed154u: goto label_1ed154;
        case 0x1ed158u: goto label_1ed158;
        case 0x1ed15cu: goto label_1ed15c;
        case 0x1ed160u: goto label_1ed160;
        case 0x1ed164u: goto label_1ed164;
        case 0x1ed168u: goto label_1ed168;
        case 0x1ed16cu: goto label_1ed16c;
        case 0x1ed170u: goto label_1ed170;
        case 0x1ed174u: goto label_1ed174;
        case 0x1ed178u: goto label_1ed178;
        case 0x1ed17cu: goto label_1ed17c;
        case 0x1ed180u: goto label_1ed180;
        case 0x1ed184u: goto label_1ed184;
        case 0x1ed188u: goto label_1ed188;
        case 0x1ed18cu: goto label_1ed18c;
        case 0x1ed190u: goto label_1ed190;
        case 0x1ed194u: goto label_1ed194;
        case 0x1ed198u: goto label_1ed198;
        case 0x1ed19cu: goto label_1ed19c;
        case 0x1ed1a0u: goto label_1ed1a0;
        case 0x1ed1a4u: goto label_1ed1a4;
        case 0x1ed1a8u: goto label_1ed1a8;
        case 0x1ed1acu: goto label_1ed1ac;
        case 0x1ed1b0u: goto label_1ed1b0;
        case 0x1ed1b4u: goto label_1ed1b4;
        case 0x1ed1b8u: goto label_1ed1b8;
        case 0x1ed1bcu: goto label_1ed1bc;
        case 0x1ed1c0u: goto label_1ed1c0;
        case 0x1ed1c4u: goto label_1ed1c4;
        case 0x1ed1c8u: goto label_1ed1c8;
        case 0x1ed1ccu: goto label_1ed1cc;
        case 0x1ed1d0u: goto label_1ed1d0;
        case 0x1ed1d4u: goto label_1ed1d4;
        case 0x1ed1d8u: goto label_1ed1d8;
        case 0x1ed1dcu: goto label_1ed1dc;
        case 0x1ed1e0u: goto label_1ed1e0;
        case 0x1ed1e4u: goto label_1ed1e4;
        case 0x1ed1e8u: goto label_1ed1e8;
        case 0x1ed1ecu: goto label_1ed1ec;
        case 0x1ed1f0u: goto label_1ed1f0;
        case 0x1ed1f4u: goto label_1ed1f4;
        case 0x1ed1f8u: goto label_1ed1f8;
        case 0x1ed1fcu: goto label_1ed1fc;
        case 0x1ed200u: goto label_1ed200;
        case 0x1ed204u: goto label_1ed204;
        case 0x1ed208u: goto label_1ed208;
        case 0x1ed20cu: goto label_1ed20c;
        case 0x1ed210u: goto label_1ed210;
        case 0x1ed214u: goto label_1ed214;
        case 0x1ed218u: goto label_1ed218;
        case 0x1ed21cu: goto label_1ed21c;
        case 0x1ed220u: goto label_1ed220;
        case 0x1ed224u: goto label_1ed224;
        case 0x1ed228u: goto label_1ed228;
        case 0x1ed22cu: goto label_1ed22c;
        case 0x1ed230u: goto label_1ed230;
        case 0x1ed234u: goto label_1ed234;
        case 0x1ed238u: goto label_1ed238;
        case 0x1ed23cu: goto label_1ed23c;
        case 0x1ed240u: goto label_1ed240;
        case 0x1ed244u: goto label_1ed244;
        case 0x1ed248u: goto label_1ed248;
        case 0x1ed24cu: goto label_1ed24c;
        case 0x1ed250u: goto label_1ed250;
        case 0x1ed254u: goto label_1ed254;
        case 0x1ed258u: goto label_1ed258;
        case 0x1ed25cu: goto label_1ed25c;
        case 0x1ed260u: goto label_1ed260;
        case 0x1ed264u: goto label_1ed264;
        case 0x1ed268u: goto label_1ed268;
        case 0x1ed26cu: goto label_1ed26c;
        case 0x1ed270u: goto label_1ed270;
        case 0x1ed274u: goto label_1ed274;
        case 0x1ed278u: goto label_1ed278;
        case 0x1ed27cu: goto label_1ed27c;
        case 0x1ed280u: goto label_1ed280;
        case 0x1ed284u: goto label_1ed284;
        case 0x1ed288u: goto label_1ed288;
        case 0x1ed28cu: goto label_1ed28c;
        case 0x1ed290u: goto label_1ed290;
        case 0x1ed294u: goto label_1ed294;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed29cu: goto label_1ed29c;
        case 0x1ed2a0u: goto label_1ed2a0;
        case 0x1ed2a4u: goto label_1ed2a4;
        case 0x1ed2a8u: goto label_1ed2a8;
        case 0x1ed2acu: goto label_1ed2ac;
        case 0x1ed2b0u: goto label_1ed2b0;
        case 0x1ed2b4u: goto label_1ed2b4;
        case 0x1ed2b8u: goto label_1ed2b8;
        case 0x1ed2bcu: goto label_1ed2bc;
        case 0x1ed2c0u: goto label_1ed2c0;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed2c8u: goto label_1ed2c8;
        case 0x1ed2ccu: goto label_1ed2cc;
        case 0x1ed2d0u: goto label_1ed2d0;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2d8u: goto label_1ed2d8;
        case 0x1ed2dcu: goto label_1ed2dc;
        case 0x1ed2e0u: goto label_1ed2e0;
        case 0x1ed2e4u: goto label_1ed2e4;
        case 0x1ed2e8u: goto label_1ed2e8;
        case 0x1ed2ecu: goto label_1ed2ec;
        case 0x1ed2f0u: goto label_1ed2f0;
        case 0x1ed2f4u: goto label_1ed2f4;
        case 0x1ed2f8u: goto label_1ed2f8;
        case 0x1ed2fcu: goto label_1ed2fc;
        case 0x1ed300u: goto label_1ed300;
        case 0x1ed304u: goto label_1ed304;
        case 0x1ed308u: goto label_1ed308;
        case 0x1ed30cu: goto label_1ed30c;
        case 0x1ed310u: goto label_1ed310;
        case 0x1ed314u: goto label_1ed314;
        case 0x1ed318u: goto label_1ed318;
        case 0x1ed31cu: goto label_1ed31c;
        case 0x1ed320u: goto label_1ed320;
        case 0x1ed324u: goto label_1ed324;
        case 0x1ed328u: goto label_1ed328;
        case 0x1ed32cu: goto label_1ed32c;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed338u: goto label_1ed338;
        case 0x1ed33cu: goto label_1ed33c;
        case 0x1ed340u: goto label_1ed340;
        case 0x1ed344u: goto label_1ed344;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed34cu: goto label_1ed34c;
        case 0x1ed350u: goto label_1ed350;
        case 0x1ed354u: goto label_1ed354;
        case 0x1ed358u: goto label_1ed358;
        case 0x1ed35cu: goto label_1ed35c;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed364u: goto label_1ed364;
        case 0x1ed368u: goto label_1ed368;
        case 0x1ed36cu: goto label_1ed36c;
        case 0x1ed370u: goto label_1ed370;
        case 0x1ed374u: goto label_1ed374;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed37cu: goto label_1ed37c;
        case 0x1ed380u: goto label_1ed380;
        case 0x1ed384u: goto label_1ed384;
        case 0x1ed388u: goto label_1ed388;
        case 0x1ed38cu: goto label_1ed38c;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed394u: goto label_1ed394;
        case 0x1ed398u: goto label_1ed398;
        case 0x1ed39cu: goto label_1ed39c;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3a4u: goto label_1ed3a4;
        case 0x1ed3a8u: goto label_1ed3a8;
        case 0x1ed3acu: goto label_1ed3ac;
        case 0x1ed3b0u: goto label_1ed3b0;
        case 0x1ed3b4u: goto label_1ed3b4;
        case 0x1ed3b8u: goto label_1ed3b8;
        case 0x1ed3bcu: goto label_1ed3bc;
        case 0x1ed3c0u: goto label_1ed3c0;
        case 0x1ed3c4u: goto label_1ed3c4;
        case 0x1ed3c8u: goto label_1ed3c8;
        case 0x1ed3ccu: goto label_1ed3cc;
        case 0x1ed3d0u: goto label_1ed3d0;
        case 0x1ed3d4u: goto label_1ed3d4;
        case 0x1ed3d8u: goto label_1ed3d8;
        case 0x1ed3dcu: goto label_1ed3dc;
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e4u: goto label_1ed3e4;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3ecu: goto label_1ed3ec;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed3fcu: goto label_1ed3fc;
        case 0x1ed400u: goto label_1ed400;
        case 0x1ed404u: goto label_1ed404;
        case 0x1ed408u: goto label_1ed408;
        case 0x1ed40cu: goto label_1ed40c;
        case 0x1ed410u: goto label_1ed410;
        case 0x1ed414u: goto label_1ed414;
        case 0x1ed418u: goto label_1ed418;
        case 0x1ed41cu: goto label_1ed41c;
        case 0x1ed420u: goto label_1ed420;
        case 0x1ed424u: goto label_1ed424;
        case 0x1ed428u: goto label_1ed428;
        case 0x1ed42cu: goto label_1ed42c;
        case 0x1ed430u: goto label_1ed430;
        case 0x1ed434u: goto label_1ed434;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed43cu: goto label_1ed43c;
        case 0x1ed440u: goto label_1ed440;
        case 0x1ed444u: goto label_1ed444;
        case 0x1ed448u: goto label_1ed448;
        case 0x1ed44cu: goto label_1ed44c;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed454u: goto label_1ed454;
        case 0x1ed458u: goto label_1ed458;
        case 0x1ed45cu: goto label_1ed45c;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed464u: goto label_1ed464;
        case 0x1ed468u: goto label_1ed468;
        case 0x1ed46cu: goto label_1ed46c;
        case 0x1ed470u: goto label_1ed470;
        case 0x1ed474u: goto label_1ed474;
        case 0x1ed478u: goto label_1ed478;
        case 0x1ed47cu: goto label_1ed47c;
        case 0x1ed480u: goto label_1ed480;
        case 0x1ed484u: goto label_1ed484;
        case 0x1ed488u: goto label_1ed488;
        case 0x1ed48cu: goto label_1ed48c;
        case 0x1ed490u: goto label_1ed490;
        case 0x1ed494u: goto label_1ed494;
        case 0x1ed498u: goto label_1ed498;
        case 0x1ed49cu: goto label_1ed49c;
        case 0x1ed4a0u: goto label_1ed4a0;
        case 0x1ed4a4u: goto label_1ed4a4;
        case 0x1ed4a8u: goto label_1ed4a8;
        case 0x1ed4acu: goto label_1ed4ac;
        case 0x1ed4b0u: goto label_1ed4b0;
        case 0x1ed4b4u: goto label_1ed4b4;
        case 0x1ed4b8u: goto label_1ed4b8;
        case 0x1ed4bcu: goto label_1ed4bc;
        case 0x1ed4c0u: goto label_1ed4c0;
        case 0x1ed4c4u: goto label_1ed4c4;
        case 0x1ed4c8u: goto label_1ed4c8;
        case 0x1ed4ccu: goto label_1ed4cc;
        case 0x1ed4d0u: goto label_1ed4d0;
        case 0x1ed4d4u: goto label_1ed4d4;
        case 0x1ed4d8u: goto label_1ed4d8;
        case 0x1ed4dcu: goto label_1ed4dc;
        case 0x1ed4e0u: goto label_1ed4e0;
        case 0x1ed4e4u: goto label_1ed4e4;
        case 0x1ed4e8u: goto label_1ed4e8;
        case 0x1ed4ecu: goto label_1ed4ec;
        case 0x1ed4f0u: goto label_1ed4f0;
        case 0x1ed4f4u: goto label_1ed4f4;
        case 0x1ed4f8u: goto label_1ed4f8;
        case 0x1ed4fcu: goto label_1ed4fc;
        case 0x1ed500u: goto label_1ed500;
        case 0x1ed504u: goto label_1ed504;
        case 0x1ed508u: goto label_1ed508;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed510u: goto label_1ed510;
        case 0x1ed514u: goto label_1ed514;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed520u: goto label_1ed520;
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed530u: goto label_1ed530;
        case 0x1ed534u: goto label_1ed534;
        case 0x1ed538u: goto label_1ed538;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed540u: goto label_1ed540;
        case 0x1ed544u: goto label_1ed544;
        case 0x1ed548u: goto label_1ed548;
        case 0x1ed54cu: goto label_1ed54c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed554u: goto label_1ed554;
        case 0x1ed558u: goto label_1ed558;
        case 0x1ed55cu: goto label_1ed55c;
        case 0x1ed560u: goto label_1ed560;
        case 0x1ed564u: goto label_1ed564;
        case 0x1ed568u: goto label_1ed568;
        case 0x1ed56cu: goto label_1ed56c;
        case 0x1ed570u: goto label_1ed570;
        case 0x1ed574u: goto label_1ed574;
        case 0x1ed578u: goto label_1ed578;
        case 0x1ed57cu: goto label_1ed57c;
        case 0x1ed580u: goto label_1ed580;
        case 0x1ed584u: goto label_1ed584;
        case 0x1ed588u: goto label_1ed588;
        case 0x1ed58cu: goto label_1ed58c;
        case 0x1ed590u: goto label_1ed590;
        case 0x1ed594u: goto label_1ed594;
        case 0x1ed598u: goto label_1ed598;
        case 0x1ed59cu: goto label_1ed59c;
        case 0x1ed5a0u: goto label_1ed5a0;
        case 0x1ed5a4u: goto label_1ed5a4;
        case 0x1ed5a8u: goto label_1ed5a8;
        case 0x1ed5acu: goto label_1ed5ac;
        case 0x1ed5b0u: goto label_1ed5b0;
        case 0x1ed5b4u: goto label_1ed5b4;
        case 0x1ed5b8u: goto label_1ed5b8;
        case 0x1ed5bcu: goto label_1ed5bc;
        case 0x1ed5c0u: goto label_1ed5c0;
        case 0x1ed5c4u: goto label_1ed5c4;
        case 0x1ed5c8u: goto label_1ed5c8;
        case 0x1ed5ccu: goto label_1ed5cc;
        case 0x1ed5d0u: goto label_1ed5d0;
        case 0x1ed5d4u: goto label_1ed5d4;
        case 0x1ed5d8u: goto label_1ed5d8;
        case 0x1ed5dcu: goto label_1ed5dc;
        case 0x1ed5e0u: goto label_1ed5e0;
        case 0x1ed5e4u: goto label_1ed5e4;
        case 0x1ed5e8u: goto label_1ed5e8;
        case 0x1ed5ecu: goto label_1ed5ec;
        case 0x1ed5f0u: goto label_1ed5f0;
        case 0x1ed5f4u: goto label_1ed5f4;
        case 0x1ed5f8u: goto label_1ed5f8;
        case 0x1ed5fcu: goto label_1ed5fc;
        case 0x1ed600u: goto label_1ed600;
        case 0x1ed604u: goto label_1ed604;
        case 0x1ed608u: goto label_1ed608;
        case 0x1ed60cu: goto label_1ed60c;
        case 0x1ed610u: goto label_1ed610;
        case 0x1ed614u: goto label_1ed614;
        case 0x1ed618u: goto label_1ed618;
        case 0x1ed61cu: goto label_1ed61c;
        case 0x1ed620u: goto label_1ed620;
        case 0x1ed624u: goto label_1ed624;
        case 0x1ed628u: goto label_1ed628;
        case 0x1ed62cu: goto label_1ed62c;
        case 0x1ed630u: goto label_1ed630;
        case 0x1ed634u: goto label_1ed634;
        case 0x1ed638u: goto label_1ed638;
        case 0x1ed63cu: goto label_1ed63c;
        case 0x1ed640u: goto label_1ed640;
        case 0x1ed644u: goto label_1ed644;
        case 0x1ed648u: goto label_1ed648;
        case 0x1ed64cu: goto label_1ed64c;
        case 0x1ed650u: goto label_1ed650;
        case 0x1ed654u: goto label_1ed654;
        case 0x1ed658u: goto label_1ed658;
        case 0x1ed65cu: goto label_1ed65c;
        case 0x1ed660u: goto label_1ed660;
        case 0x1ed664u: goto label_1ed664;
        case 0x1ed668u: goto label_1ed668;
        case 0x1ed66cu: goto label_1ed66c;
        case 0x1ed670u: goto label_1ed670;
        case 0x1ed674u: goto label_1ed674;
        case 0x1ed678u: goto label_1ed678;
        case 0x1ed67cu: goto label_1ed67c;
        case 0x1ed680u: goto label_1ed680;
        case 0x1ed684u: goto label_1ed684;
        case 0x1ed688u: goto label_1ed688;
        case 0x1ed68cu: goto label_1ed68c;
        case 0x1ed690u: goto label_1ed690;
        case 0x1ed694u: goto label_1ed694;
        case 0x1ed698u: goto label_1ed698;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed6a0u: goto label_1ed6a0;
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6a8u: goto label_1ed6a8;
        case 0x1ed6acu: goto label_1ed6ac;
        case 0x1ed6b0u: goto label_1ed6b0;
        case 0x1ed6b4u: goto label_1ed6b4;
        case 0x1ed6b8u: goto label_1ed6b8;
        case 0x1ed6bcu: goto label_1ed6bc;
        case 0x1ed6c0u: goto label_1ed6c0;
        case 0x1ed6c4u: goto label_1ed6c4;
        case 0x1ed6c8u: goto label_1ed6c8;
        case 0x1ed6ccu: goto label_1ed6cc;
        case 0x1ed6d0u: goto label_1ed6d0;
        case 0x1ed6d4u: goto label_1ed6d4;
        case 0x1ed6d8u: goto label_1ed6d8;
        case 0x1ed6dcu: goto label_1ed6dc;
        case 0x1ed6e0u: goto label_1ed6e0;
        case 0x1ed6e4u: goto label_1ed6e4;
        case 0x1ed6e8u: goto label_1ed6e8;
        case 0x1ed6ecu: goto label_1ed6ec;
        case 0x1ed6f0u: goto label_1ed6f0;
        case 0x1ed6f4u: goto label_1ed6f4;
        case 0x1ed6f8u: goto label_1ed6f8;
        case 0x1ed6fcu: goto label_1ed6fc;
        case 0x1ed700u: goto label_1ed700;
        case 0x1ed704u: goto label_1ed704;
        case 0x1ed708u: goto label_1ed708;
        case 0x1ed70cu: goto label_1ed70c;
        case 0x1ed710u: goto label_1ed710;
        case 0x1ed714u: goto label_1ed714;
        case 0x1ed718u: goto label_1ed718;
        case 0x1ed71cu: goto label_1ed71c;
        case 0x1ed720u: goto label_1ed720;
        case 0x1ed724u: goto label_1ed724;
        case 0x1ed728u: goto label_1ed728;
        case 0x1ed72cu: goto label_1ed72c;
        case 0x1ed730u: goto label_1ed730;
        case 0x1ed734u: goto label_1ed734;
        case 0x1ed738u: goto label_1ed738;
        case 0x1ed73cu: goto label_1ed73c;
        case 0x1ed740u: goto label_1ed740;
        case 0x1ed744u: goto label_1ed744;
        case 0x1ed748u: goto label_1ed748;
        case 0x1ed74cu: goto label_1ed74c;
        case 0x1ed750u: goto label_1ed750;
        case 0x1ed754u: goto label_1ed754;
        case 0x1ed758u: goto label_1ed758;
        case 0x1ed75cu: goto label_1ed75c;
        case 0x1ed760u: goto label_1ed760;
        case 0x1ed764u: goto label_1ed764;
        case 0x1ed768u: goto label_1ed768;
        case 0x1ed76cu: goto label_1ed76c;
        case 0x1ed770u: goto label_1ed770;
        case 0x1ed774u: goto label_1ed774;
        case 0x1ed778u: goto label_1ed778;
        case 0x1ed77cu: goto label_1ed77c;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed784u: goto label_1ed784;
        case 0x1ed788u: goto label_1ed788;
        case 0x1ed78cu: goto label_1ed78c;
        case 0x1ed790u: goto label_1ed790;
        case 0x1ed794u: goto label_1ed794;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed79cu: goto label_1ed79c;
        case 0x1ed7a0u: goto label_1ed7a0;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7a8u: goto label_1ed7a8;
        case 0x1ed7acu: goto label_1ed7ac;
        case 0x1ed7b0u: goto label_1ed7b0;
        case 0x1ed7b4u: goto label_1ed7b4;
        case 0x1ed7b8u: goto label_1ed7b8;
        case 0x1ed7bcu: goto label_1ed7bc;
        case 0x1ed7c0u: goto label_1ed7c0;
        case 0x1ed7c4u: goto label_1ed7c4;
        case 0x1ed7c8u: goto label_1ed7c8;
        case 0x1ed7ccu: goto label_1ed7cc;
        case 0x1ed7d0u: goto label_1ed7d0;
        case 0x1ed7d4u: goto label_1ed7d4;
        case 0x1ed7d8u: goto label_1ed7d8;
        case 0x1ed7dcu: goto label_1ed7dc;
        case 0x1ed7e0u: goto label_1ed7e0;
        case 0x1ed7e4u: goto label_1ed7e4;
        case 0x1ed7e8u: goto label_1ed7e8;
        case 0x1ed7ecu: goto label_1ed7ec;
        case 0x1ed7f0u: goto label_1ed7f0;
        case 0x1ed7f4u: goto label_1ed7f4;
        case 0x1ed7f8u: goto label_1ed7f8;
        case 0x1ed7fcu: goto label_1ed7fc;
        case 0x1ed800u: goto label_1ed800;
        case 0x1ed804u: goto label_1ed804;
        case 0x1ed808u: goto label_1ed808;
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed810u: goto label_1ed810;
        case 0x1ed814u: goto label_1ed814;
        case 0x1ed818u: goto label_1ed818;
        case 0x1ed81cu: goto label_1ed81c;
        case 0x1ed820u: goto label_1ed820;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed828u: goto label_1ed828;
        case 0x1ed82cu: goto label_1ed82c;
        case 0x1ed830u: goto label_1ed830;
        case 0x1ed834u: goto label_1ed834;
        case 0x1ed838u: goto label_1ed838;
        case 0x1ed83cu: goto label_1ed83c;
        case 0x1ed840u: goto label_1ed840;
        case 0x1ed844u: goto label_1ed844;
        case 0x1ed848u: goto label_1ed848;
        case 0x1ed84cu: goto label_1ed84c;
        case 0x1ed850u: goto label_1ed850;
        case 0x1ed854u: goto label_1ed854;
        case 0x1ed858u: goto label_1ed858;
        case 0x1ed85cu: goto label_1ed85c;
        case 0x1ed860u: goto label_1ed860;
        case 0x1ed864u: goto label_1ed864;
        case 0x1ed868u: goto label_1ed868;
        case 0x1ed86cu: goto label_1ed86c;
        case 0x1ed870u: goto label_1ed870;
        case 0x1ed874u: goto label_1ed874;
        case 0x1ed878u: goto label_1ed878;
        case 0x1ed87cu: goto label_1ed87c;
        case 0x1ed880u: goto label_1ed880;
        case 0x1ed884u: goto label_1ed884;
        default: return;
    }

label_1ed0b8:
    // 0x1ed0b8: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x1ed0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ed0bc:
    // 0x1ed0bc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1ed0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1ed0c0:
    // 0x1ed0c0: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed0c4:
    // 0x1ed0c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed0c8:
    // 0x1ed0c8: 0xaf838f48  sw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 3));
label_1ed0cc:
    // 0x1ed0cc: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed0d0:
    // 0x1ed0d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ed0d4:
    // 0x1ed0d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ed0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed0d8:
    // 0x1ed0d8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1ed0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1ed0dc:
    // 0x1ed0dc: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed0e0:
    // 0x1ed0e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed0e4:
    // 0x1ed0e4: 0xaf838f48  sw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 3));
label_1ed0e8:
    // 0x1ed0e8: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed0ec:
    // 0x1ed0ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ed0f0:
    // 0x1ed0f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed0f4:
    // 0x1ed0f4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ed0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1ed0f8:
    // 0x1ed0f8: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed0fc:
    // 0x1ed0fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed100:
    // 0x1ed100: 0xaf838f48  sw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 3));
label_1ed104:
    // 0x1ed104: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed108:
    // 0x1ed108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ed10c:
    // 0x1ed10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed110:
    // 0x1ed110: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1ed110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1ed114:
    // 0x1ed114: 0x8f828f48  lw          $v0, -0x70B8($gp)
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed118:
    // 0x1ed118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ed118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ed11c:
    // 0x1ed11c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1ed120:
    if (ctx->pc == 0x1ED120u) {
        ctx->pc = 0x1ED120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED11Cu;
        // 0x1ed120: 0xaf828f48  sw          $v0, -0x70B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED124u;
        goto label_1ed124;
    }
    ctx->pc = 0x1ED11Cu;
    {
        const bool branch_taken_0x1ed11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED11Cu;
        // 0x1ed120: 0xaf828f48  sw          $v0, -0x70B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed11c) {
            ctx->pc = 0x1ED1E0u;
            goto label_1ed1e0;
        }
    }
    ctx->pc = 0x1ED124u;
label_1ed124:
    // 0x1ed124: 0x8f888f48  lw          $t0, -0x70B8($gp)
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed128:
    // 0x1ed128: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ed12c:
    // 0x1ed12c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ed130:
    // 0x1ed130: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed134:
    // 0x1ed134: 0xac2229e0  sw          $v0, 0x29E0($at)
    ctx->pc = 0x1ed134u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10720), GPR_U32(ctx, 2));
label_1ed138:
    // 0x1ed138: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1ed138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ed13c:
    // 0x1ed13c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ed13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ed140:
    // 0x1ed140: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ed140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ed144:
    // 0x1ed144: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
label_1ed148:
    // 0x1ed148: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ed148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ed14c:
    // 0x1ed14c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ed14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ed150:
    // 0x1ed150: 0xaf888f48  sw          $t0, -0x70B8($gp)
    ctx->pc = 0x1ed150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 8));
label_1ed154:
    // 0x1ed154: 0x8f888f48  lw          $t0, -0x70B8($gp)
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed158:
    // 0x1ed158: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1ed158u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1ed15c:
    // 0x1ed15c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ed160:
    // 0x1ed160: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1ed160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_1ed164:
    // 0x1ed164: 0x8f888f48  lw          $t0, -0x70B8($gp)
    ctx->pc = 0x1ed164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed168:
    // 0x1ed168: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ed168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ed16c:
    // 0x1ed16c: 0xaf888f48  sw          $t0, -0x70B8($gp)
    ctx->pc = 0x1ed16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 8));
label_1ed170:
    // 0x1ed170: 0x8f888f48  lw          $t0, -0x70B8($gp)
    ctx->pc = 0x1ed170u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed174:
    // 0x1ed174: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1ed178:
    // 0x1ed178: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ed17c:
    // 0x1ed17c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1ed17cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1ed180:
    // 0x1ed180: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed184:
    // 0x1ed184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed188:
    // 0x1ed188: 0xaf838f48  sw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 3));
label_1ed18c:
    // 0x1ed18c: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed190:
    // 0x1ed190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ed194:
    // 0x1ed194: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed198:
    // 0x1ed198: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1ed198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1ed19c:
    // 0x1ed19c: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed1a0:
    // 0x1ed1a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed1a4:
    // 0x1ed1a4: 0xaf838f48  sw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 3));
label_1ed1a8:
    // 0x1ed1a8: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed1ac:
    // 0x1ed1ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ed1b0:
    // 0x1ed1b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed1b4:
    // 0x1ed1b4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ed1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1ed1b8:
    // 0x1ed1b8: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed1bc:
    // 0x1ed1bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed1c0:
    // 0x1ed1c0: 0xaf838f48  sw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 3));
label_1ed1c4:
    // 0x1ed1c4: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed1c8:
    // 0x1ed1c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ed1cc:
    // 0x1ed1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed1d0:
    // 0x1ed1d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1ed1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1ed1d4:
    // 0x1ed1d4: 0x8f828f48  lw          $v0, -0x70B8($gp)
    ctx->pc = 0x1ed1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ed1d8:
    // 0x1ed1d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ed1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ed1dc:
    // 0x1ed1dc: 0xaf828f48  sw          $v0, -0x70B8($gp)
    ctx->pc = 0x1ed1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938440), GPR_U32(ctx, 2));
label_1ed1e0:
    // 0x1ed1e0: 0xc07ba98  jal         func_1EEA60
label_1ed1e4:
    if (ctx->pc == 0x1ED1E4u) {
        ctx->pc = 0x1ED1E8u;
        goto label_1ed1e8;
    }
    ctx->pc = 0x1ED1E0u;
    SET_GPR_U32(ctx, 31, 0x1ED1E8u);
    ctx->pc = 0x1EEA60u;
    { ctx->pc = 0x1eea60; return; }
    ctx->pc = 0x1ED1E8u;
label_1ed1e8:
    // 0x1ed1e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ed1ec:
    if (ctx->pc == 0x1ED1ECu) {
        ctx->pc = 0x1ED1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E8u;
        // 0x1ed1ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1F0u;
        goto label_1ed1f0;
    }
    ctx->pc = 0x1ED1E8u;
    {
        const bool branch_taken_0x1ed1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E8u;
        // 0x1ed1ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1e8) {
            ctx->pc = 0x1ED1F8u;
            goto label_1ed1f8;
        }
    }
    ctx->pc = 0x1ED1F0u;
label_1ed1f0:
    // 0x1ed1f0: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_1ed1f4:
    if (ctx->pc == 0x1ED1F4u) {
        ctx->pc = 0x1ED1F8u;
        goto label_1ed1f8;
    }
    ctx->pc = 0x1ED1F0u;
    {
        const bool branch_taken_0x1ed1f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed1f0) {
            ctx->pc = 0x1ED208u;
            goto label_1ed208;
        }
    }
    ctx->pc = 0x1ED1F8u;
label_1ed1f8:
    // 0x1ed1f8: 0xc05187c  jal         func_1461F0
label_1ed1fc:
    if (ctx->pc == 0x1ED1FCu) {
        ctx->pc = 0x1ED200u;
        goto label_1ed200;
    }
    ctx->pc = 0x1ED1F8u;
    SET_GPR_U32(ctx, 31, 0x1ED200u);
    ctx->pc = 0x1461F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1461F0u, 0x1ED1F8u, 0x1ED200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED200u;
label_1ed200:
    // 0x1ed200: 0xc041500  jal         func_105400
label_1ed204:
    if (ctx->pc == 0x1ED204u) {
        ctx->pc = 0x1ED208u;
        goto label_1ed208;
    }
    ctx->pc = 0x1ED200u;
    SET_GPR_U32(ctx, 31, 0x1ED208u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x1ED200u, 0x1ED208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED208u;
label_1ed208:
    // 0x1ed208: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ed20c:
    // 0x1ed20c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ed20cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ed210:
    // 0x1ed210: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ed210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed214:
    // 0x1ed214: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed218:
    // 0x1ed218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed21c:
    // 0x1ed21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed220:
    // 0x1ed220: 0x3e00008  jr          $ra
label_1ed224:
    if (ctx->pc == 0x1ED224u) {
        ctx->pc = 0x1ED224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED220u;
        // 0x1ed224: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED228u;
        goto label_1ed228;
    }
    ctx->pc = 0x1ED220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED220u;
        // 0x1ed224: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED228u;
label_1ed228:
    // 0x1ed228: 0x0  nop
    ctx->pc = 0x1ed228u;
    // NOP
label_1ed22c:
    // 0x1ed22c: 0x0  nop
    ctx->pc = 0x1ed22cu;
    // NOP
label_1ed230:
    // 0x1ed230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ed234:
    // 0x1ed234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ed238:
    // 0x1ed238: 0xc07b18c  jal         func_1EC630
label_1ed23c:
    if (ctx->pc == 0x1ED23Cu) {
        ctx->pc = 0x1ED240u;
        goto label_1ed240;
    }
    ctx->pc = 0x1ED238u;
    SET_GPR_U32(ctx, 31, 0x1ED240u);
    ctx->pc = 0x1EC630u;
    { ctx->pc = 0x1ec630; return; }
    ctx->pc = 0x1ED240u;
label_1ed240:
    // 0x1ed240: 0xc07b4f4  jal         func_1ED3D0
label_1ed244:
    if (ctx->pc == 0x1ED244u) {
        ctx->pc = 0x1ED248u;
        goto label_1ed248;
    }
    ctx->pc = 0x1ED240u;
    SET_GPR_U32(ctx, 31, 0x1ED248u);
    ctx->pc = 0x1ED3D0u;
    goto label_1ed3d0;
    ctx->pc = 0x1ED248u;
label_1ed248:
    // 0x1ed248: 0xc078030  jal         func_1E00C0
label_1ed24c:
    if (ctx->pc == 0x1ED24Cu) {
        ctx->pc = 0x1ED250u;
        goto label_1ed250;
    }
    ctx->pc = 0x1ED248u;
    SET_GPR_U32(ctx, 31, 0x1ED250u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x1ED250u;
label_1ed250:
    // 0x1ed250: 0xc07a9d8  jal         func_1EA760
label_1ed254:
    if (ctx->pc == 0x1ED254u) {
        ctx->pc = 0x1ED258u;
        goto label_1ed258;
    }
    ctx->pc = 0x1ED250u;
    SET_GPR_U32(ctx, 31, 0x1ED258u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1ED258u;
label_1ed258:
    // 0x1ed258: 0xc07b230  jal         func_1EC8C0
label_1ed25c:
    if (ctx->pc == 0x1ED25Cu) {
        ctx->pc = 0x1ED260u;
        goto label_1ed260;
    }
    ctx->pc = 0x1ED258u;
    SET_GPR_U32(ctx, 31, 0x1ED260u);
    ctx->pc = 0x1EC8C0u;
    { ctx->pc = 0x1ec8c0; return; }
    ctx->pc = 0x1ED260u;
label_1ed260:
    // 0x1ed260: 0xc07ab54  jal         func_1EAD50
label_1ed264:
    if (ctx->pc == 0x1ED264u) {
        ctx->pc = 0x1ED268u;
        goto label_1ed268;
    }
    ctx->pc = 0x1ED260u;
    SET_GPR_U32(ctx, 31, 0x1ED268u);
    ctx->pc = 0x1EAD50u;
    { ctx->pc = 0x1ead50; return; }
    ctx->pc = 0x1ED268u;
label_1ed268:
    // 0x1ed268: 0xc04e168  jal         func_1385A0
label_1ed26c:
    if (ctx->pc == 0x1ED26Cu) {
        ctx->pc = 0x1ED270u;
        goto label_1ed270;
    }
    ctx->pc = 0x1ED268u;
    SET_GPR_U32(ctx, 31, 0x1ED270u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1ED268u, 0x1ED270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED270u;
label_1ed270:
    // 0x1ed270: 0xc07b4c4  jal         func_1ED310
label_1ed274:
    if (ctx->pc == 0x1ED274u) {
        ctx->pc = 0x1ED278u;
        goto label_1ed278;
    }
    ctx->pc = 0x1ED270u;
    SET_GPR_U32(ctx, 31, 0x1ED278u);
    ctx->pc = 0x1ED310u;
    goto label_1ed310;
    ctx->pc = 0x1ED278u;
label_1ed278:
    // 0x1ed278: 0xc077fc4  jal         func_1DFF10
label_1ed27c:
    if (ctx->pc == 0x1ED27Cu) {
        ctx->pc = 0x1ED280u;
        goto label_1ed280;
    }
    ctx->pc = 0x1ED278u;
    SET_GPR_U32(ctx, 31, 0x1ED280u);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x1ED280u;
label_1ed280:
    // 0x1ed280: 0xc07a86c  jal         func_1EA1B0
label_1ed284:
    if (ctx->pc == 0x1ED284u) {
        ctx->pc = 0x1ED288u;
        goto label_1ed288;
    }
    ctx->pc = 0x1ED280u;
    SET_GPR_U32(ctx, 31, 0x1ED288u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1ED288u;
label_1ed288:
    // 0x1ed288: 0xc07b1bc  jal         func_1EC6F0
label_1ed28c:
    if (ctx->pc == 0x1ED28Cu) {
        ctx->pc = 0x1ED290u;
        goto label_1ed290;
    }
    ctx->pc = 0x1ED288u;
    SET_GPR_U32(ctx, 31, 0x1ED290u);
    ctx->pc = 0x1EC6F0u;
    { ctx->pc = 0x1ec6f0; return; }
    ctx->pc = 0x1ED290u;
label_1ed290:
    // 0x1ed290: 0xc07ab3c  jal         func_1EACF0
label_1ed294:
    if (ctx->pc == 0x1ED294u) {
        ctx->pc = 0x1ED298u;
        goto label_1ed298;
    }
    ctx->pc = 0x1ED290u;
    SET_GPR_U32(ctx, 31, 0x1ED298u);
    ctx->pc = 0x1EACF0u;
    { ctx->pc = 0x1eacf0; return; }
    ctx->pc = 0x1ED298u;
label_1ed298:
    // 0x1ed298: 0xc04e120  jal         func_138480
label_1ed29c:
    if (ctx->pc == 0x1ED29Cu) {
        ctx->pc = 0x1ED2A0u;
        goto label_1ed2a0;
    }
    ctx->pc = 0x1ED298u;
    SET_GPR_U32(ctx, 31, 0x1ED2A0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1ED298u, 0x1ED2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2A0u;
label_1ed2a0:
    // 0x1ed2a0: 0xc05b578  jal         func_16D5E0
label_1ed2a4:
    if (ctx->pc == 0x1ED2A4u) {
        ctx->pc = 0x1ED2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2A0u;
        // 0x1ed2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2A8u;
        goto label_1ed2a8;
    }
    ctx->pc = 0x1ED2A0u;
    SET_GPR_U32(ctx, 31, 0x1ED2A8u);
    ctx->pc = 0x1ED2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2A0u;
    // 0x1ed2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1ED2A0u, 0x1ED2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2A8u;
label_1ed2a8:
    // 0x1ed2a8: 0xc060258  jal         func_180960
label_1ed2ac:
    if (ctx->pc == 0x1ED2ACu) {
        ctx->pc = 0x1ED2B0u;
        goto label_1ed2b0;
    }
    ctx->pc = 0x1ED2A8u;
    SET_GPR_U32(ctx, 31, 0x1ED2B0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1ED2A8u, 0x1ED2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2B0u;
label_1ed2b0:
    // 0x1ed2b0: 0x8f828f38  lw          $v0, -0x70C8($gp)
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938424)));
label_1ed2b4:
    // 0x1ed2b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ed2b8:
    if (ctx->pc == 0x1ED2B8u) {
        ctx->pc = 0x1ED2BCu;
        goto label_1ed2bc;
    }
    ctx->pc = 0x1ED2B4u;
    {
        const bool branch_taken_0x1ed2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2b4) {
            ctx->pc = 0x1ED2F4u;
            goto label_1ed2f4;
        }
    }
    ctx->pc = 0x1ED2BCu;
label_1ed2bc:
    // 0x1ed2bc: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1ed2c0:
    // 0x1ed2c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ed2c4:
    if (ctx->pc == 0x1ED2C4u) {
        ctx->pc = 0x1ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2C0u;
        // 0x1ed2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2C8u;
        goto label_1ed2c8;
    }
    ctx->pc = 0x1ED2C0u;
    {
        const bool branch_taken_0x1ed2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2C0u;
        // 0x1ed2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2c0) {
            ctx->pc = 0x1ED2CCu;
            goto label_1ed2cc;
        }
    }
    ctx->pc = 0x1ED2C8u;
label_1ed2c8:
    // 0x1ed2c8: 0xaf828f44  sw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ed2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938436), GPR_U32(ctx, 2));
label_1ed2cc:
    // 0x1ed2cc: 0xc07b1a8  jal         func_1EC6A0
label_1ed2d0:
    if (ctx->pc == 0x1ED2D0u) {
        ctx->pc = 0x1ED2D4u;
        goto label_1ed2d4;
    }
    ctx->pc = 0x1ED2CCu;
    SET_GPR_U32(ctx, 31, 0x1ED2D4u);
    ctx->pc = 0x1EC6A0u;
    { ctx->pc = 0x1ec6a0; return; }
    ctx->pc = 0x1ED2D4u;
label_1ed2d4:
    // 0x1ed2d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ed2d8:
    if (ctx->pc == 0x1ED2D8u) {
        ctx->pc = 0x1ED2DCu;
        goto label_1ed2dc;
    }
    ctx->pc = 0x1ED2D4u;
    {
        const bool branch_taken_0x1ed2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2d4) {
            ctx->pc = 0x1ED2F4u;
            goto label_1ed2f4;
        }
    }
    ctx->pc = 0x1ED2DCu;
label_1ed2dc:
    // 0x1ed2dc: 0xc07b1a4  jal         func_1EC690
label_1ed2e0:
    if (ctx->pc == 0x1ED2E0u) {
        ctx->pc = 0x1ED2E4u;
        goto label_1ed2e4;
    }
    ctx->pc = 0x1ED2DCu;
    SET_GPR_U32(ctx, 31, 0x1ED2E4u);
    ctx->pc = 0x1EC690u;
    { ctx->pc = 0x1ec690; return; }
    ctx->pc = 0x1ED2E4u;
label_1ed2e4:
    // 0x1ed2e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ed2e8:
    if (ctx->pc == 0x1ED2E8u) {
        ctx->pc = 0x1ED2ECu;
        goto label_1ed2ec;
    }
    ctx->pc = 0x1ED2E4u;
    {
        const bool branch_taken_0x1ed2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2e4) {
            ctx->pc = 0x1ED2F4u;
            goto label_1ed2f4;
        }
    }
    ctx->pc = 0x1ED2ECu;
label_1ed2ec:
    // 0x1ed2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed2f0:
    // 0x1ed2f0: 0xaf828f40  sw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ed2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938432), GPR_U32(ctx, 2));
label_1ed2f4:
    // 0x1ed2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed2f8:
    // 0x1ed2f8: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ed2fc:
    // 0x1ed2fc: 0x3e00008  jr          $ra
label_1ed300:
    if (ctx->pc == 0x1ED300u) {
        ctx->pc = 0x1ED300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2FCu;
        // 0x1ed300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED304u;
        goto label_1ed304;
    }
    ctx->pc = 0x1ED2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2FCu;
        // 0x1ed300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED304u;
label_1ed304:
    // 0x1ed304: 0x0  nop
    ctx->pc = 0x1ed304u;
    // NOP
label_1ed308:
    // 0x1ed308: 0x0  nop
    ctx->pc = 0x1ed308u;
    // NOP
label_1ed30c:
    // 0x1ed30c: 0x0  nop
    ctx->pc = 0x1ed30cu;
    // NOP
label_1ed310:
    // 0x1ed310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ed314:
    // 0x1ed314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ed318:
    // 0x1ed318: 0xc07c06c  jal         func_1F01B0
label_1ed31c:
    if (ctx->pc == 0x1ED31Cu) {
        ctx->pc = 0x1ED320u;
        goto label_1ed320;
    }
    ctx->pc = 0x1ED318u;
    SET_GPR_U32(ctx, 31, 0x1ED320u);
    ctx->pc = 0x1F01B0u;
    { ctx->pc = 0x1f01b0; return; }
    ctx->pc = 0x1ED320u;
label_1ed320:
    // 0x1ed320: 0xc085908  jal         func_216420
label_1ed324:
    if (ctx->pc == 0x1ED324u) {
        ctx->pc = 0x1ED328u;
        goto label_1ed328;
    }
    ctx->pc = 0x1ED320u;
    SET_GPR_U32(ctx, 31, 0x1ED328u);
    ctx->pc = 0x216420u;
    { ctx->pc = 0x216420; return; }
    ctx->pc = 0x1ED328u;
label_1ed328:
    // 0x1ed328: 0xc07d610  jal         func_1F5840
label_1ed32c:
    if (ctx->pc == 0x1ED32Cu) {
        ctx->pc = 0x1ED330u;
        goto label_1ed330;
    }
    ctx->pc = 0x1ED328u;
    SET_GPR_U32(ctx, 31, 0x1ED330u);
    ctx->pc = 0x1F5840u;
    { ctx->pc = 0x1f5840; return; }
    ctx->pc = 0x1ED330u;
label_1ed330:
    // 0x1ed330: 0xc07d40c  jal         func_1F5030
label_1ed334:
    if (ctx->pc == 0x1ED334u) {
        ctx->pc = 0x1ED338u;
        goto label_1ed338;
    }
    ctx->pc = 0x1ED330u;
    SET_GPR_U32(ctx, 31, 0x1ED338u);
    ctx->pc = 0x1F5030u;
    { ctx->pc = 0x1f5030; return; }
    ctx->pc = 0x1ED338u;
label_1ed338:
    // 0x1ed338: 0xc07dbbc  jal         func_1F6EF0
label_1ed33c:
    if (ctx->pc == 0x1ED33Cu) {
        ctx->pc = 0x1ED340u;
        goto label_1ed340;
    }
    ctx->pc = 0x1ED338u;
    SET_GPR_U32(ctx, 31, 0x1ED340u);
    ctx->pc = 0x1F6EF0u;
    { ctx->pc = 0x1f6ef0; return; }
    ctx->pc = 0x1ED340u;
label_1ed340:
    // 0x1ed340: 0xc07bfe0  jal         func_1EFF80
label_1ed344:
    if (ctx->pc == 0x1ED344u) {
        ctx->pc = 0x1ED348u;
        goto label_1ed348;
    }
    ctx->pc = 0x1ED340u;
    SET_GPR_U32(ctx, 31, 0x1ED348u);
    ctx->pc = 0x1EFF80u;
    { ctx->pc = 0x1eff80; return; }
    ctx->pc = 0x1ED348u;
label_1ed348:
    // 0x1ed348: 0xc07bec8  jal         func_1EFB20
label_1ed34c:
    if (ctx->pc == 0x1ED34Cu) {
        ctx->pc = 0x1ED350u;
        goto label_1ed350;
    }
    ctx->pc = 0x1ED348u;
    SET_GPR_U32(ctx, 31, 0x1ED350u);
    ctx->pc = 0x1EFB20u;
    { ctx->pc = 0x1efb20; return; }
    ctx->pc = 0x1ED350u;
label_1ed350:
    // 0x1ed350: 0xc07bdbc  jal         func_1EF6F0
label_1ed354:
    if (ctx->pc == 0x1ED354u) {
        ctx->pc = 0x1ED358u;
        goto label_1ed358;
    }
    ctx->pc = 0x1ED350u;
    SET_GPR_U32(ctx, 31, 0x1ED358u);
    ctx->pc = 0x1EF6F0u;
    { ctx->pc = 0x1ef6f0; return; }
    ctx->pc = 0x1ED358u;
label_1ed358:
    // 0x1ed358: 0xc07bb50  jal         func_1EED40
label_1ed35c:
    if (ctx->pc == 0x1ED35Cu) {
        ctx->pc = 0x1ED360u;
        goto label_1ed360;
    }
    ctx->pc = 0x1ED358u;
    SET_GPR_U32(ctx, 31, 0x1ED360u);
    ctx->pc = 0x1EED40u;
    { ctx->pc = 0x1eed40; return; }
    ctx->pc = 0x1ED360u;
label_1ed360:
    // 0x1ed360: 0xc07c6b8  jal         func_1F1AE0
label_1ed364:
    if (ctx->pc == 0x1ED364u) {
        ctx->pc = 0x1ED368u;
        goto label_1ed368;
    }
    ctx->pc = 0x1ED360u;
    SET_GPR_U32(ctx, 31, 0x1ED368u);
    ctx->pc = 0x1F1AE0u;
    { ctx->pc = 0x1f1ae0; return; }
    ctx->pc = 0x1ED368u;
label_1ed368:
    // 0x1ed368: 0xc08022c  jal         func_2008B0
label_1ed36c:
    if (ctx->pc == 0x1ED36Cu) {
        ctx->pc = 0x1ED370u;
        goto label_1ed370;
    }
    ctx->pc = 0x1ED368u;
    SET_GPR_U32(ctx, 31, 0x1ED370u);
    ctx->pc = 0x2008B0u;
    { ctx->pc = 0x2008b0; return; }
    ctx->pc = 0x1ED370u;
label_1ed370:
    // 0x1ed370: 0xc07fb68  jal         func_1FEDA0
label_1ed374:
    if (ctx->pc == 0x1ED374u) {
        ctx->pc = 0x1ED378u;
        goto label_1ed378;
    }
    ctx->pc = 0x1ED370u;
    SET_GPR_U32(ctx, 31, 0x1ED378u);
    ctx->pc = 0x1FEDA0u;
    { ctx->pc = 0x1feda0; return; }
    ctx->pc = 0x1ED378u;
label_1ed378:
    // 0x1ed378: 0xc07f758  jal         func_1FDD60
label_1ed37c:
    if (ctx->pc == 0x1ED37Cu) {
        ctx->pc = 0x1ED380u;
        goto label_1ed380;
    }
    ctx->pc = 0x1ED378u;
    SET_GPR_U32(ctx, 31, 0x1ED380u);
    ctx->pc = 0x1FDD60u;
    { ctx->pc = 0x1fdd60; return; }
    ctx->pc = 0x1ED380u;
label_1ed380:
    // 0x1ed380: 0xc07f5b4  jal         func_1FD6D0
label_1ed384:
    if (ctx->pc == 0x1ED384u) {
        ctx->pc = 0x1ED388u;
        goto label_1ed388;
    }
    ctx->pc = 0x1ED380u;
    SET_GPR_U32(ctx, 31, 0x1ED388u);
    ctx->pc = 0x1FD6D0u;
    { ctx->pc = 0x1fd6d0; return; }
    ctx->pc = 0x1ED388u;
label_1ed388:
    // 0x1ed388: 0xc07df44  jal         func_1F7D10
label_1ed38c:
    if (ctx->pc == 0x1ED38Cu) {
        ctx->pc = 0x1ED390u;
        goto label_1ed390;
    }
    ctx->pc = 0x1ED388u;
    SET_GPR_U32(ctx, 31, 0x1ED390u);
    ctx->pc = 0x1F7D10u;
    { ctx->pc = 0x1f7d10; return; }
    ctx->pc = 0x1ED390u;
label_1ed390:
    // 0x1ed390: 0xc081580  jal         func_205600
label_1ed394:
    if (ctx->pc == 0x1ED394u) {
        ctx->pc = 0x1ED398u;
        goto label_1ed398;
    }
    ctx->pc = 0x1ED390u;
    SET_GPR_U32(ctx, 31, 0x1ED398u);
    ctx->pc = 0x205600u;
    { ctx->pc = 0x205600; return; }
    ctx->pc = 0x1ED398u;
label_1ed398:
    // 0x1ed398: 0xc0827b4  jal         func_209ED0
label_1ed39c:
    if (ctx->pc == 0x1ED39Cu) {
        ctx->pc = 0x1ED3A0u;
        goto label_1ed3a0;
    }
    ctx->pc = 0x1ED398u;
    SET_GPR_U32(ctx, 31, 0x1ED3A0u);
    ctx->pc = 0x209ED0u;
    { ctx->pc = 0x209ed0; return; }
    ctx->pc = 0x1ED3A0u;
label_1ed3a0:
    // 0x1ed3a0: 0xc081e5c  jal         func_207970
label_1ed3a4:
    if (ctx->pc == 0x1ED3A4u) {
        ctx->pc = 0x1ED3A8u;
        goto label_1ed3a8;
    }
    ctx->pc = 0x1ED3A0u;
    SET_GPR_U32(ctx, 31, 0x1ED3A8u);
    ctx->pc = 0x207970u;
    { ctx->pc = 0x207970; return; }
    ctx->pc = 0x1ED3A8u;
label_1ed3a8:
    // 0x1ed3a8: 0xc0908b4  jal         func_2422D0
label_1ed3ac:
    if (ctx->pc == 0x1ED3ACu) {
        ctx->pc = 0x1ED3B0u;
        goto label_1ed3b0;
    }
    ctx->pc = 0x1ED3A8u;
    SET_GPR_U32(ctx, 31, 0x1ED3B0u);
    ctx->pc = 0x2422D0u;
    { ctx->pc = 0x2422d0; return; }
    ctx->pc = 0x1ED3B0u;
label_1ed3b0:
    // 0x1ed3b0: 0xc082bec  jal         func_20AFB0
label_1ed3b4:
    if (ctx->pc == 0x1ED3B4u) {
        ctx->pc = 0x1ED3B8u;
        goto label_1ed3b8;
    }
    ctx->pc = 0x1ED3B0u;
    SET_GPR_U32(ctx, 31, 0x1ED3B8u);
    ctx->pc = 0x20AFB0u;
    { ctx->pc = 0x20afb0; return; }
    ctx->pc = 0x1ED3B8u;
label_1ed3b8:
    // 0x1ed3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed3bc:
    // 0x1ed3bc: 0x3e00008  jr          $ra
label_1ed3c0:
    if (ctx->pc == 0x1ED3C0u) {
        ctx->pc = 0x1ED3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3BCu;
        // 0x1ed3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3C4u;
        goto label_1ed3c4;
    }
    ctx->pc = 0x1ED3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3BCu;
        // 0x1ed3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3C4u;
label_1ed3c4:
    // 0x1ed3c4: 0x0  nop
    ctx->pc = 0x1ed3c4u;
    // NOP
label_1ed3c8:
    // 0x1ed3c8: 0x0  nop
    ctx->pc = 0x1ed3c8u;
    // NOP
label_1ed3cc:
    // 0x1ed3cc: 0x0  nop
    ctx->pc = 0x1ed3ccu;
    // NOP
label_1ed3d0:
    // 0x1ed3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ed3d4:
    // 0x1ed3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ed3d8:
    // 0x1ed3d8: 0xc085828  jal         func_2160A0
label_1ed3dc:
    if (ctx->pc == 0x1ED3DCu) {
        ctx->pc = 0x1ED3E0u;
        goto label_1ed3e0;
    }
    ctx->pc = 0x1ED3D8u;
    SET_GPR_U32(ctx, 31, 0x1ED3E0u);
    ctx->pc = 0x2160A0u;
    { ctx->pc = 0x2160a0; return; }
    ctx->pc = 0x1ED3E0u;
label_1ed3e0:
    // 0x1ed3e0: 0xc07d60c  jal         func_1F5830
label_1ed3e4:
    if (ctx->pc == 0x1ED3E4u) {
        ctx->pc = 0x1ED3E8u;
        goto label_1ed3e8;
    }
    ctx->pc = 0x1ED3E0u;
    SET_GPR_U32(ctx, 31, 0x1ED3E8u);
    ctx->pc = 0x1F5830u;
    { ctx->pc = 0x1f5830; return; }
    ctx->pc = 0x1ED3E8u;
label_1ed3e8:
    // 0x1ed3e8: 0xc07d408  jal         func_1F5020
label_1ed3ec:
    if (ctx->pc == 0x1ED3ECu) {
        ctx->pc = 0x1ED3F0u;
        goto label_1ed3f0;
    }
    ctx->pc = 0x1ED3E8u;
    SET_GPR_U32(ctx, 31, 0x1ED3F0u);
    ctx->pc = 0x1F5020u;
    { ctx->pc = 0x1f5020; return; }
    ctx->pc = 0x1ED3F0u;
label_1ed3f0:
    // 0x1ed3f0: 0xc07db80  jal         func_1F6E00
label_1ed3f4:
    if (ctx->pc == 0x1ED3F4u) {
        ctx->pc = 0x1ED3F8u;
        goto label_1ed3f8;
    }
    ctx->pc = 0x1ED3F0u;
    SET_GPR_U32(ctx, 31, 0x1ED3F8u);
    ctx->pc = 0x1F6E00u;
    { ctx->pc = 0x1f6e00; return; }
    ctx->pc = 0x1ED3F8u;
label_1ed3f8:
    // 0x1ed3f8: 0xc07bfbc  jal         func_1EFEF0
label_1ed3fc:
    if (ctx->pc == 0x1ED3FCu) {
        ctx->pc = 0x1ED400u;
        goto label_1ed400;
    }
    ctx->pc = 0x1ED3F8u;
    SET_GPR_U32(ctx, 31, 0x1ED400u);
    ctx->pc = 0x1EFEF0u;
    { ctx->pc = 0x1efef0; return; }
    ctx->pc = 0x1ED400u;
label_1ed400:
    // 0x1ed400: 0xc07bea4  jal         func_1EFA90
label_1ed404:
    if (ctx->pc == 0x1ED404u) {
        ctx->pc = 0x1ED408u;
        goto label_1ed408;
    }
    ctx->pc = 0x1ED400u;
    SET_GPR_U32(ctx, 31, 0x1ED408u);
    ctx->pc = 0x1EFA90u;
    { ctx->pc = 0x1efa90; return; }
    ctx->pc = 0x1ED408u;
label_1ed408:
    // 0x1ed408: 0xc07bd98  jal         func_1EF660
label_1ed40c:
    if (ctx->pc == 0x1ED40Cu) {
        ctx->pc = 0x1ED410u;
        goto label_1ed410;
    }
    ctx->pc = 0x1ED408u;
    SET_GPR_U32(ctx, 31, 0x1ED410u);
    ctx->pc = 0x1EF660u;
    { ctx->pc = 0x1ef660; return; }
    ctx->pc = 0x1ED410u;
label_1ed410:
    // 0x1ed410: 0xc07bb00  jal         func_1EEC00
label_1ed414:
    if (ctx->pc == 0x1ED414u) {
        ctx->pc = 0x1ED418u;
        goto label_1ed418;
    }
    ctx->pc = 0x1ED410u;
    SET_GPR_U32(ctx, 31, 0x1ED418u);
    ctx->pc = 0x1EEC00u;
    { ctx->pc = 0x1eec00; return; }
    ctx->pc = 0x1ED418u;
label_1ed418:
    // 0x1ed418: 0xc07c6ac  jal         func_1F1AB0
label_1ed41c:
    if (ctx->pc == 0x1ED41Cu) {
        ctx->pc = 0x1ED420u;
        goto label_1ed420;
    }
    ctx->pc = 0x1ED418u;
    SET_GPR_U32(ctx, 31, 0x1ED420u);
    ctx->pc = 0x1F1AB0u;
    { ctx->pc = 0x1f1ab0; return; }
    ctx->pc = 0x1ED420u;
label_1ed420:
    // 0x1ed420: 0xc0801fc  jal         func_2007F0
label_1ed424:
    if (ctx->pc == 0x1ED424u) {
        ctx->pc = 0x1ED428u;
        goto label_1ed428;
    }
    ctx->pc = 0x1ED420u;
    SET_GPR_U32(ctx, 31, 0x1ED428u);
    ctx->pc = 0x2007F0u;
    { ctx->pc = 0x2007f0; return; }
    ctx->pc = 0x1ED428u;
label_1ed428:
    // 0x1ed428: 0xc07fb64  jal         func_1FED90
label_1ed42c:
    if (ctx->pc == 0x1ED42Cu) {
        ctx->pc = 0x1ED430u;
        goto label_1ed430;
    }
    ctx->pc = 0x1ED428u;
    SET_GPR_U32(ctx, 31, 0x1ED430u);
    ctx->pc = 0x1FED90u;
    { ctx->pc = 0x1fed90; return; }
    ctx->pc = 0x1ED430u;
label_1ed430:
    // 0x1ed430: 0xc07f754  jal         func_1FDD50
label_1ed434:
    if (ctx->pc == 0x1ED434u) {
        ctx->pc = 0x1ED438u;
        goto label_1ed438;
    }
    ctx->pc = 0x1ED430u;
    SET_GPR_U32(ctx, 31, 0x1ED438u);
    ctx->pc = 0x1FDD50u;
    { ctx->pc = 0x1fdd50; return; }
    ctx->pc = 0x1ED438u;
label_1ed438:
    // 0x1ed438: 0xc07f5a4  jal         func_1FD690
label_1ed43c:
    if (ctx->pc == 0x1ED43Cu) {
        ctx->pc = 0x1ED440u;
        goto label_1ed440;
    }
    ctx->pc = 0x1ED438u;
    SET_GPR_U32(ctx, 31, 0x1ED440u);
    ctx->pc = 0x1FD690u;
    { ctx->pc = 0x1fd690; return; }
    ctx->pc = 0x1ED440u;
label_1ed440:
    // 0x1ed440: 0xc07def8  jal         func_1F7BE0
label_1ed444:
    if (ctx->pc == 0x1ED444u) {
        ctx->pc = 0x1ED448u;
        goto label_1ed448;
    }
    ctx->pc = 0x1ED440u;
    SET_GPR_U32(ctx, 31, 0x1ED448u);
    ctx->pc = 0x1F7BE0u;
    { ctx->pc = 0x1f7be0; return; }
    ctx->pc = 0x1ED448u;
label_1ed448:
    // 0x1ed448: 0xc081540  jal         func_205500
label_1ed44c:
    if (ctx->pc == 0x1ED44Cu) {
        ctx->pc = 0x1ED450u;
        goto label_1ed450;
    }
    ctx->pc = 0x1ED448u;
    SET_GPR_U32(ctx, 31, 0x1ED450u);
    ctx->pc = 0x205500u;
    { ctx->pc = 0x205500; return; }
    ctx->pc = 0x1ED450u;
label_1ed450:
    // 0x1ed450: 0xc082774  jal         func_209DD0
label_1ed454:
    if (ctx->pc == 0x1ED454u) {
        ctx->pc = 0x1ED458u;
        goto label_1ed458;
    }
    ctx->pc = 0x1ED450u;
    SET_GPR_U32(ctx, 31, 0x1ED458u);
    ctx->pc = 0x209DD0u;
    { ctx->pc = 0x209dd0; return; }
    ctx->pc = 0x1ED458u;
label_1ed458:
    // 0x1ed458: 0xc081dfc  jal         func_2077F0
label_1ed45c:
    if (ctx->pc == 0x1ED45Cu) {
        ctx->pc = 0x1ED460u;
        goto label_1ed460;
    }
    ctx->pc = 0x1ED458u;
    SET_GPR_U32(ctx, 31, 0x1ED460u);
    ctx->pc = 0x2077F0u;
    { ctx->pc = 0x2077f0; return; }
    ctx->pc = 0x1ED460u;
label_1ed460:
    // 0x1ed460: 0xc090614  jal         func_241850
label_1ed464:
    if (ctx->pc == 0x1ED464u) {
        ctx->pc = 0x1ED468u;
        goto label_1ed468;
    }
    ctx->pc = 0x1ED460u;
    SET_GPR_U32(ctx, 31, 0x1ED468u);
    ctx->pc = 0x241850u;
    { ctx->pc = 0x241850; return; }
    ctx->pc = 0x1ED468u;
label_1ed468:
    // 0x1ed468: 0xc082bb0  jal         func_20AEC0
label_1ed46c:
    if (ctx->pc == 0x1ED46Cu) {
        ctx->pc = 0x1ED470u;
        goto label_1ed470;
    }
    ctx->pc = 0x1ED468u;
    SET_GPR_U32(ctx, 31, 0x1ED470u);
    ctx->pc = 0x20AEC0u;
    { ctx->pc = 0x20aec0; return; }
    ctx->pc = 0x1ED470u;
label_1ed470:
    // 0x1ed470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed474:
    // 0x1ed474: 0x3e00008  jr          $ra
label_1ed478:
    if (ctx->pc == 0x1ED478u) {
        ctx->pc = 0x1ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED474u;
        // 0x1ed478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED47Cu;
        goto label_1ed47c;
    }
    ctx->pc = 0x1ED474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED474u;
        // 0x1ed478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED47Cu;
label_1ed47c:
    // 0x1ed47c: 0x0  nop
    ctx->pc = 0x1ed47cu;
    // NOP
label_1ed480:
    // 0x1ed480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ed484:
    // 0x1ed484: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed488:
    // 0x1ed488: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ed488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ed48c:
    // 0x1ed48c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ed48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed490:
    // 0x1ed490: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ed490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ed494:
    // 0x1ed494: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ed494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ed498:
    // 0x1ed498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ed498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ed49c:
    // 0x1ed49c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ed49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed4a0:
    // 0x1ed4a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ed4a4:
    // 0x1ed4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ed4a8:
    // 0x1ed4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed4ac:
    // 0x1ed4ac: 0xdf838f30  ld          $v1, -0x70D0($gp)
    ctx->pc = 0x1ed4acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294938416)));
label_1ed4b0:
    // 0x1ed4b0: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1ed4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ed4b4:
    // 0x1ed4b4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1ed4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_1ed4b8:
    // 0x1ed4b8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1ed4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1ed4bc:
    // 0x1ed4bc: 0xc07b660  jal         func_1ED980
label_1ed4c0:
    if (ctx->pc == 0x1ED4C0u) {
        ctx->pc = 0x1ED4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4BCu;
        // 0x1ed4c0: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4C4u;
        goto label_1ed4c4;
    }
    ctx->pc = 0x1ED4BCu;
    SET_GPR_U32(ctx, 31, 0x1ED4C4u);
    ctx->pc = 0x1ED4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4BCu;
    // 0x1ed4c0: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED980u;
    { ctx->pc = 0x1ed980; return; }
    ctx->pc = 0x1ED4C4u;
label_1ed4c4:
    // 0x1ed4c4: 0x27b50074  addiu       $s5, $sp, 0x74
    ctx->pc = 0x1ed4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1ed4c8:
    // 0x1ed4c8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1ed4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1ed4cc:
    // 0x1ed4cc: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ed4d0:
    // 0x1ed4d0: 0xc07b620  jal         func_1ED880
label_1ed4d4:
    if (ctx->pc == 0x1ED4D4u) {
        ctx->pc = 0x1ED4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4D0u;
        // 0x1ed4d4: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4D8u;
        goto label_1ed4d8;
    }
    ctx->pc = 0x1ED4D0u;
    SET_GPR_U32(ctx, 31, 0x1ED4D8u);
    ctx->pc = 0x1ED4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4D0u;
    // 0x1ed4d4: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED880u;
    goto label_1ed880;
    ctx->pc = 0x1ED4D8u;
label_1ed4d8:
    // 0x1ed4d8: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ed4dc:
    // 0x1ed4dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ed4e0:
    if (ctx->pc == 0x1ED4E0u) {
        ctx->pc = 0x1ED4E4u;
        goto label_1ed4e4;
    }
    ctx->pc = 0x1ED4DCu;
    {
        const bool branch_taken_0x1ed4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed4dc) {
            ctx->pc = 0x1ED4ECu;
            goto label_1ed4ec;
        }
    }
    ctx->pc = 0x1ED4E4u;
label_1ed4e4:
    // 0x1ed4e4: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1ed4e8:
    if (ctx->pc == 0x1ED4E8u) {
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4ECu;
        goto label_1ed4ec;
    }
    ctx->pc = 0x1ED4E4u;
    {
        const bool branch_taken_0x1ed4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4e4) {
            ctx->pc = 0x1ED7F0u;
            goto label_1ed7f0;
        }
    }
    ctx->pc = 0x1ED4ECu;
label_1ed4ec:
    // 0x1ed4ec: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1ed4f0:
    // 0x1ed4f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ed4f4:
    if (ctx->pc == 0x1ED4F4u) {
        ctx->pc = 0x1ED4F8u;
        goto label_1ed4f8;
    }
    ctx->pc = 0x1ED4F0u;
    {
        const bool branch_taken_0x1ed4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed4f0) {
            ctx->pc = 0x1ED500u;
            goto label_1ed500;
        }
    }
    ctx->pc = 0x1ED4F8u;
label_1ed4f8:
    // 0x1ed4f8: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1ed4fc:
    if (ctx->pc == 0x1ED4FCu) {
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F8u;
        // 0x1ed4fc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED500u;
        goto label_1ed500;
    }
    ctx->pc = 0x1ED4F8u;
    {
        const bool branch_taken_0x1ed4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F8u;
        // 0x1ed4fc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f8) {
            ctx->pc = 0x1ED7F0u;
            goto label_1ed7f0;
        }
    }
    ctx->pc = 0x1ED500u;
label_1ed500:
    // 0x1ed500: 0x8f838f3c  lw          $v1, -0x70C4($gp)
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1ed504:
    // 0x1ed504: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1ed504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed508:
    // 0x1ed508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed50c:
    // 0x1ed50c: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1ed50cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_1ed510:
    // 0x1ed510: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1ed510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ed514:
    // 0x1ed514: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_1ed518:
    if (ctx->pc == 0x1ED518u) {
        ctx->pc = 0x1ED518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED514u;
        // 0x1ed518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED51Cu;
        goto label_1ed51c;
    }
    ctx->pc = 0x1ED514u;
    {
        const bool branch_taken_0x1ed514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED514u;
        // 0x1ed518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed514) {
            ctx->pc = 0x1ED580u;
            goto label_1ed580;
        }
    }
    ctx->pc = 0x1ED51Cu;
label_1ed51c:
    // 0x1ed51c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ed51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed520:
    // 0x1ed520: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1ed520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ed524:
    // 0x1ed524: 0x2621804  sllv        $v1, $v0, $s3
    ctx->pc = 0x1ed524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_1ed528:
    // 0x1ed528: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1ed528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1ed52c:
    // 0x1ed52c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ed52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ed530:
    // 0x1ed530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ed534:
    if (ctx->pc == 0x1ED534u) {
        ctx->pc = 0x1ED534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED530u;
        // 0x1ed534: 0x3c023c49  lui         $v0, 0x3C49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED538u;
        goto label_1ed538;
    }
    ctx->pc = 0x1ED530u;
    {
        const bool branch_taken_0x1ed530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED530u;
        // 0x1ed534: 0x3c023c49  lui         $v0, 0x3C49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed530) {
            ctx->pc = 0x1ED548u;
            goto label_1ed548;
        }
    }
    ctx->pc = 0x1ED538u;
label_1ed538:
    // 0x1ed538: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1ed53c:
    // 0x1ed53c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ed53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ed540:
    // 0x1ed540: 0xc085d34  jal         func_2174D0
label_1ed544:
    if (ctx->pc == 0x1ED544u) {
        ctx->pc = 0x1ED548u;
        goto label_1ed548;
    }
    ctx->pc = 0x1ED540u;
    SET_GPR_U32(ctx, 31, 0x1ED548u);
    ctx->pc = 0x2174D0u;
    { ctx->pc = 0x2174d0; return; }
    ctx->pc = 0x1ED548u;
label_1ed548:
    // 0x1ed548: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1ed548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1ed54c:
    // 0x1ed54c: 0x2621804  sllv        $v1, $v0, $s3
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_1ed550:
    // 0x1ed550: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1ed550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1ed554:
    // 0x1ed554: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ed554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ed558:
    // 0x1ed558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ed55c:
    if (ctx->pc == 0x1ED55Cu) {
        ctx->pc = 0x1ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED558u;
        // 0x1ed55c: 0x3c02bc49  lui         $v0, 0xBC49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED560u;
        goto label_1ed560;
    }
    ctx->pc = 0x1ED558u;
    {
        const bool branch_taken_0x1ed558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED558u;
        // 0x1ed55c: 0x3c02bc49  lui         $v0, 0xBC49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed558) {
            ctx->pc = 0x1ED570u;
            goto label_1ed570;
        }
    }
    ctx->pc = 0x1ED560u;
label_1ed560:
    // 0x1ed560: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1ed564:
    // 0x1ed564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ed564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ed568:
    // 0x1ed568: 0xc085d34  jal         func_2174D0
label_1ed56c:
    if (ctx->pc == 0x1ED56Cu) {
        ctx->pc = 0x1ED570u;
        goto label_1ed570;
    }
    ctx->pc = 0x1ED568u;
    SET_GPR_U32(ctx, 31, 0x1ED570u);
    ctx->pc = 0x2174D0u;
    { ctx->pc = 0x2174d0; return; }
    ctx->pc = 0x1ED570u;
label_1ed570:
    // 0x1ed570: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ed570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ed574:
    // 0x1ed574: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1ed574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ed578:
    // 0x1ed578: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1ed57c:
    if (ctx->pc == 0x1ED57Cu) {
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED580u;
        goto label_1ed580;
    }
    ctx->pc = 0x1ED578u;
    {
        const bool branch_taken_0x1ed578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed578) {
            ctx->pc = 0x1ED520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed520;
        }
    }
    ctx->pc = 0x1ED580u;
label_1ed580:
    // 0x1ed580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ed580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ed584:
    // 0x1ed584: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1ed584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1ed588:
    // 0x1ed588: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1ed588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1ed58c:
    // 0x1ed58c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1ed58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed590:
    // 0x1ed590: 0xc07b77c  jal         func_1EDDF0
label_1ed594:
    if (ctx->pc == 0x1ED594u) {
        ctx->pc = 0x1ED594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED590u;
        // 0x1ed594: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED598u;
        goto label_1ed598;
    }
    ctx->pc = 0x1ED590u;
    SET_GPR_U32(ctx, 31, 0x1ED598u);
    ctx->pc = 0x1ED594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED590u;
    // 0x1ed594: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDF0u;
    { ctx->pc = 0x1eddf0; return; }
    ctx->pc = 0x1ED598u;
label_1ed598:
    // 0x1ed598: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ed59c:
    // 0x1ed59c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1ed59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1ed5a0:
    // 0x1ed5a0: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ed5a4:
    // 0x1ed5a4: 0xc07b620  jal         func_1ED880
label_1ed5a8:
    if (ctx->pc == 0x1ED5A8u) {
        ctx->pc = 0x1ED5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5A4u;
        // 0x1ed5a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5ACu;
        goto label_1ed5ac;
    }
    ctx->pc = 0x1ED5A4u;
    SET_GPR_U32(ctx, 31, 0x1ED5ACu);
    ctx->pc = 0x1ED5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5A4u;
    // 0x1ed5a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED880u;
    goto label_1ed880;
    ctx->pc = 0x1ED5ACu;
label_1ed5ac:
    // 0x1ed5ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ed5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ed5b0:
    // 0x1ed5b0: 0x1222008b  beq         $s1, $v0, . + 4 + (0x8B << 2)
label_1ed5b4:
    if (ctx->pc == 0x1ED5B4u) {
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5B8u;
        goto label_1ed5b8;
    }
    ctx->pc = 0x1ED5B0u;
    {
        const bool branch_taken_0x1ed5b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5b0) {
            ctx->pc = 0x1ED7E0u;
            goto label_1ed7e0;
        }
    }
    ctx->pc = 0x1ED5B8u;
label_1ed5b8:
    // 0x1ed5b8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1ed5bc:
    if (ctx->pc == 0x1ED5BCu) {
        ctx->pc = 0x1ED5C0u;
        goto label_1ed5c0;
    }
    ctx->pc = 0x1ED5B8u;
    {
        const bool branch_taken_0x1ed5b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ed5b8) {
            ctx->pc = 0x1ED5CCu;
            goto label_1ed5cc;
        }
    }
    ctx->pc = 0x1ED5C0u;
label_1ed5c0:
    // 0x1ed5c0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ed5c4:
    // 0x1ed5c4: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
label_1ed5c8:
    if (ctx->pc == 0x1ED5C8u) {
        ctx->pc = 0x1ED5CCu;
        goto label_1ed5cc;
    }
    ctx->pc = 0x1ED5C4u;
    {
        const bool branch_taken_0x1ed5c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed5c4) {
            ctx->pc = 0x1ED614u;
            goto label_1ed614;
        }
    }
    ctx->pc = 0x1ED5CCu;
label_1ed5cc:
    // 0x1ed5cc: 0x0  nop
    ctx->pc = 0x1ed5ccu;
    // NOP
label_1ed5d0:
    // 0x1ed5d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed5d4:
    // 0x1ed5d4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed5d8:
    // 0x1ed5d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ed5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ed5dc:
    // 0x1ed5dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed5e0:
    // 0x1ed5e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed5e4:
    // 0x1ed5e4: 0xc07bad8  jal         func_1EEB60
label_1ed5e8:
    if (ctx->pc == 0x1ED5E8u) {
        ctx->pc = 0x1ED5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E4u;
        // 0x1ed5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5ECu;
        goto label_1ed5ec;
    }
    ctx->pc = 0x1ED5E4u;
    SET_GPR_U32(ctx, 31, 0x1ED5ECu);
    ctx->pc = 0x1ED5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5E4u;
    // 0x1ed5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED5ECu;
label_1ed5ec:
    // 0x1ed5ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1ed5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed5f0:
    // 0x1ed5f0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed5f4:
    // 0x1ed5f4: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x1ed5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1ed5f8:
    // 0x1ed5f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ed5fc:
    // 0x1ed5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed600:
    // 0x1ed600: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed604:
    // 0x1ed604: 0xc07bad8  jal         func_1EEB60
label_1ed608:
    if (ctx->pc == 0x1ED608u) {
        ctx->pc = 0x1ED608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED604u;
        // 0x1ed608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED60Cu;
        goto label_1ed60c;
    }
    ctx->pc = 0x1ED604u;
    SET_GPR_U32(ctx, 31, 0x1ED60Cu);
    ctx->pc = 0x1ED608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED604u;
    // 0x1ed608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED60Cu;
label_1ed60c:
    // 0x1ed60c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ed610:
    if (ctx->pc == 0x1ED610u) {
        ctx->pc = 0x1ED614u;
        goto label_1ed614;
    }
    ctx->pc = 0x1ED60Cu;
    {
        const bool branch_taken_0x1ed60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed60c) {
            ctx->pc = 0x1ED654u;
            goto label_1ed654;
        }
    }
    ctx->pc = 0x1ED614u;
label_1ed614:
    // 0x1ed614: 0x0  nop
    ctx->pc = 0x1ed614u;
    // NOP
label_1ed618:
    // 0x1ed618: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1ed618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed61c:
    // 0x1ed61c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed620:
    // 0x1ed620: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ed620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ed624:
    // 0x1ed624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed628:
    // 0x1ed628: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed62c:
    // 0x1ed62c: 0xc07bad8  jal         func_1EEB60
label_1ed630:
    if (ctx->pc == 0x1ED630u) {
        ctx->pc = 0x1ED630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED62Cu;
        // 0x1ed630: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED634u;
        goto label_1ed634;
    }
    ctx->pc = 0x1ED62Cu;
    SET_GPR_U32(ctx, 31, 0x1ED634u);
    ctx->pc = 0x1ED630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED62Cu;
    // 0x1ed630: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED634u;
label_1ed634:
    // 0x1ed634: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1ed634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed638:
    // 0x1ed638: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed63c:
    // 0x1ed63c: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x1ed63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1ed640:
    // 0x1ed640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ed644:
    // 0x1ed644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed648:
    // 0x1ed648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed64c:
    // 0x1ed64c: 0xc07bad8  jal         func_1EEB60
label_1ed650:
    if (ctx->pc == 0x1ED650u) {
        ctx->pc = 0x1ED650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED64Cu;
        // 0x1ed650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED654u;
        goto label_1ed654;
    }
    ctx->pc = 0x1ED64Cu;
    SET_GPR_U32(ctx, 31, 0x1ED654u);
    ctx->pc = 0x1ED650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED64Cu;
    // 0x1ed650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB60u;
    { ctx->pc = 0x1eeb60; return; }
    ctx->pc = 0x1ED654u;
label_1ed654:
    // 0x1ed654: 0x0  nop
    ctx->pc = 0x1ed654u;
    // NOP
label_1ed658:
    // 0x1ed658: 0xc078078  jal         func_1E01E0
label_1ed65c:
    if (ctx->pc == 0x1ED65Cu) {
        ctx->pc = 0x1ED660u;
        goto label_1ed660;
    }
    ctx->pc = 0x1ED658u;
    SET_GPR_U32(ctx, 31, 0x1ED660u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1ED660u;
label_1ed660:
    // 0x1ed660: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1ed660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed664:
    // 0x1ed664: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed668:
    // 0x1ed668: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ed66c:
    // 0x1ed66c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed670:
    // 0x1ed670: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed674:
    // 0x1ed674: 0xc07b6c0  jal         func_1EDB00
label_1ed678:
    if (ctx->pc == 0x1ED678u) {
        ctx->pc = 0x1ED678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED674u;
        // 0x1ed678: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED67Cu;
        goto label_1ed67c;
    }
    ctx->pc = 0x1ED674u;
    SET_GPR_U32(ctx, 31, 0x1ED67Cu);
    ctx->pc = 0x1ED678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED674u;
    // 0x1ed678: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDB00u;
    { ctx->pc = 0x1edb00; return; }
    ctx->pc = 0x1ED67Cu;
label_1ed67c:
    // 0x1ed67c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ed680:
    // 0x1ed680: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_1ed684:
    if (ctx->pc == 0x1ED684u) {
        ctx->pc = 0x1ED684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED680u;
        // 0x1ed684: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED688u;
        goto label_1ed688;
    }
    ctx->pc = 0x1ED680u;
    {
        const bool branch_taken_0x1ed680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED680u;
        // 0x1ed684: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed680) {
            ctx->pc = 0x1ED690u;
            goto label_1ed690;
        }
    }
    ctx->pc = 0x1ED688u;
label_1ed688:
    // 0x1ed688: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1ed68c:
    if (ctx->pc == 0x1ED68Cu) {
        ctx->pc = 0x1ED690u;
        goto label_1ed690;
    }
    ctx->pc = 0x1ED688u;
    {
        const bool branch_taken_0x1ed688 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed688) {
            ctx->pc = 0x1ED698u;
            goto label_1ed698;
        }
    }
    ctx->pc = 0x1ED690u;
label_1ed690:
    // 0x1ed690: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1ed694:
    if (ctx->pc == 0x1ED694u) {
        ctx->pc = 0x1ED694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED690u;
        // 0x1ed694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED698u;
        goto label_1ed698;
    }
    ctx->pc = 0x1ED690u;
    {
        const bool branch_taken_0x1ed690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED690u;
        // 0x1ed694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed690) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED698u;
label_1ed698:
    // 0x1ed698: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ed698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ed69c:
    // 0x1ed69c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed6a0:
    if (ctx->pc == 0x1ED6A0u) {
        ctx->pc = 0x1ED6A4u;
        goto label_1ed6a4;
    }
    ctx->pc = 0x1ED69Cu;
    {
        const bool branch_taken_0x1ed69c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed69c) {
            ctx->pc = 0x1ED6B4u;
            goto label_1ed6b4;
        }
    }
    ctx->pc = 0x1ED6A4u;
label_1ed6a4:
    // 0x1ed6a4: 0xc07b8a0  jal         func_1EE280
label_1ed6a8:
    if (ctx->pc == 0x1ED6A8u) {
        ctx->pc = 0x1ED6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6A4u;
        // 0x1ed6a8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6ACu;
        goto label_1ed6ac;
    }
    ctx->pc = 0x1ED6A4u;
    SET_GPR_U32(ctx, 31, 0x1ED6ACu);
    ctx->pc = 0x1ED6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6A4u;
    // 0x1ed6a8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE280u;
    { ctx->pc = 0x1ee280; return; }
    ctx->pc = 0x1ED6ACu;
label_1ed6ac:
    // 0x1ed6ac: 0x10000036  b           . + 4 + (0x36 << 2)
label_1ed6b0:
    if (ctx->pc == 0x1ED6B0u) {
        ctx->pc = 0x1ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ACu;
        // 0x1ed6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6B4u;
        goto label_1ed6b4;
    }
    ctx->pc = 0x1ED6ACu;
    {
        const bool branch_taken_0x1ed6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ACu;
        // 0x1ed6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6ac) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED6B4u;
label_1ed6b4:
    // 0x1ed6b4: 0x0  nop
    ctx->pc = 0x1ed6b4u;
    // NOP
label_1ed6b8:
    // 0x1ed6b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ed6bc:
    // 0x1ed6bc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed6c0:
    if (ctx->pc == 0x1ED6C0u) {
        ctx->pc = 0x1ED6C4u;
        goto label_1ed6c4;
    }
    ctx->pc = 0x1ED6BCu;
    {
        const bool branch_taken_0x1ed6bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed6bc) {
            ctx->pc = 0x1ED6D4u;
            goto label_1ed6d4;
        }
    }
    ctx->pc = 0x1ED6C4u;
label_1ed6c4:
    // 0x1ed6c4: 0xc07b8ec  jal         func_1EE3B0
label_1ed6c8:
    if (ctx->pc == 0x1ED6C8u) {
        ctx->pc = 0x1ED6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6C4u;
        // 0x1ed6c8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6CCu;
        goto label_1ed6cc;
    }
    ctx->pc = 0x1ED6C4u;
    SET_GPR_U32(ctx, 31, 0x1ED6CCu);
    ctx->pc = 0x1ED6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6C4u;
    // 0x1ed6c8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE3B0u;
    { ctx->pc = 0x1ee3b0; return; }
    ctx->pc = 0x1ED6CCu;
label_1ed6cc:
    // 0x1ed6cc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1ed6d0:
    if (ctx->pc == 0x1ED6D0u) {
        ctx->pc = 0x1ED6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6CCu;
        // 0x1ed6d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6D4u;
        goto label_1ed6d4;
    }
    ctx->pc = 0x1ED6CCu;
    {
        const bool branch_taken_0x1ed6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6CCu;
        // 0x1ed6d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6cc) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED6D4u;
label_1ed6d4:
    // 0x1ed6d4: 0x0  nop
    ctx->pc = 0x1ed6d4u;
    // NOP
label_1ed6d8:
    // 0x1ed6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed6dc:
    // 0x1ed6dc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed6e0:
    if (ctx->pc == 0x1ED6E0u) {
        ctx->pc = 0x1ED6E4u;
        goto label_1ed6e4;
    }
    ctx->pc = 0x1ED6DCu;
    {
        const bool branch_taken_0x1ed6dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed6dc) {
            ctx->pc = 0x1ED6F4u;
            goto label_1ed6f4;
        }
    }
    ctx->pc = 0x1ED6E4u;
label_1ed6e4:
    // 0x1ed6e4: 0xc07caf0  jal         func_1F2BC0
label_1ed6e8:
    if (ctx->pc == 0x1ED6E8u) {
        ctx->pc = 0x1ED6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6E4u;
        // 0x1ed6e8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6ECu;
        goto label_1ed6ec;
    }
    ctx->pc = 0x1ED6E4u;
    SET_GPR_U32(ctx, 31, 0x1ED6ECu);
    ctx->pc = 0x1ED6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6E4u;
    // 0x1ed6e8: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2BC0u;
    { ctx->pc = 0x1f2bc0; return; }
    ctx->pc = 0x1ED6ECu;
label_1ed6ec:
    // 0x1ed6ec: 0x10000026  b           . + 4 + (0x26 << 2)
label_1ed6f0:
    if (ctx->pc == 0x1ED6F0u) {
        ctx->pc = 0x1ED6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ECu;
        // 0x1ed6f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED6F4u;
        goto label_1ed6f4;
    }
    ctx->pc = 0x1ED6ECu;
    {
        const bool branch_taken_0x1ed6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6ECu;
        // 0x1ed6f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6ec) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED6F4u;
label_1ed6f4:
    // 0x1ed6f4: 0x0  nop
    ctx->pc = 0x1ed6f4u;
    // NOP
label_1ed6f8:
    // 0x1ed6f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed6fc:
    // 0x1ed6fc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed700:
    if (ctx->pc == 0x1ED700u) {
        ctx->pc = 0x1ED704u;
        goto label_1ed704;
    }
    ctx->pc = 0x1ED6FCu;
    {
        const bool branch_taken_0x1ed6fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed6fc) {
            ctx->pc = 0x1ED714u;
            goto label_1ed714;
        }
    }
    ctx->pc = 0x1ED704u;
label_1ed704:
    // 0x1ed704: 0xc07c2a0  jal         func_1F0A80
label_1ed708:
    if (ctx->pc == 0x1ED708u) {
        ctx->pc = 0x1ED708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED704u;
        // 0x1ed708: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED70Cu;
        goto label_1ed70c;
    }
    ctx->pc = 0x1ED704u;
    SET_GPR_U32(ctx, 31, 0x1ED70Cu);
    ctx->pc = 0x1ED708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED704u;
    // 0x1ed708: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0A80u;
    { ctx->pc = 0x1f0a80; return; }
    ctx->pc = 0x1ED70Cu;
label_1ed70c:
    // 0x1ed70c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ed710:
    if (ctx->pc == 0x1ED710u) {
        ctx->pc = 0x1ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED70Cu;
        // 0x1ed710: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED714u;
        goto label_1ed714;
    }
    ctx->pc = 0x1ED70Cu;
    {
        const bool branch_taken_0x1ed70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED70Cu;
        // 0x1ed710: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed70c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED714u;
label_1ed714:
    // 0x1ed714: 0x0  nop
    ctx->pc = 0x1ed714u;
    // NOP
label_1ed718:
    // 0x1ed718: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ed718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ed71c:
    // 0x1ed71c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed720:
    if (ctx->pc == 0x1ED720u) {
        ctx->pc = 0x1ED724u;
        goto label_1ed724;
    }
    ctx->pc = 0x1ED71Cu;
    {
        const bool branch_taken_0x1ed71c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed71c) {
            ctx->pc = 0x1ED734u;
            goto label_1ed734;
        }
    }
    ctx->pc = 0x1ED724u;
label_1ed724:
    // 0x1ed724: 0xc07d49c  jal         func_1F5270
label_1ed728:
    if (ctx->pc == 0x1ED728u) {
        ctx->pc = 0x1ED728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED724u;
        // 0x1ed728: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED72Cu;
        goto label_1ed72c;
    }
    ctx->pc = 0x1ED724u;
    SET_GPR_U32(ctx, 31, 0x1ED72Cu);
    ctx->pc = 0x1ED728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED724u;
    // 0x1ed728: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5270u;
    { ctx->pc = 0x1f5270; return; }
    ctx->pc = 0x1ED72Cu;
label_1ed72c:
    // 0x1ed72c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ed730:
    if (ctx->pc == 0x1ED730u) {
        ctx->pc = 0x1ED730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED72Cu;
        // 0x1ed730: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED734u;
        goto label_1ed734;
    }
    ctx->pc = 0x1ED72Cu;
    {
        const bool branch_taken_0x1ed72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED72Cu;
        // 0x1ed730: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed72c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED734u;
label_1ed734:
    // 0x1ed734: 0x0  nop
    ctx->pc = 0x1ed734u;
    // NOP
label_1ed738:
    // 0x1ed738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ed738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ed73c:
    // 0x1ed73c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_1ed740:
    if (ctx->pc == 0x1ED740u) {
        ctx->pc = 0x1ED744u;
        goto label_1ed744;
    }
    ctx->pc = 0x1ED73Cu;
    {
        const bool branch_taken_0x1ed73c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed73c) {
            ctx->pc = 0x1ED754u;
            goto label_1ed754;
        }
    }
    ctx->pc = 0x1ED744u;
label_1ed744:
    // 0x1ed744: 0xc07d7c0  jal         func_1F5F00
label_1ed748:
    if (ctx->pc == 0x1ED748u) {
        ctx->pc = 0x1ED748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED744u;
        // 0x1ed748: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED74Cu;
        goto label_1ed74c;
    }
    ctx->pc = 0x1ED744u;
    SET_GPR_U32(ctx, 31, 0x1ED74Cu);
    ctx->pc = 0x1ED748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED744u;
    // 0x1ed748: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5F00u;
    { ctx->pc = 0x1f5f00; return; }
    ctx->pc = 0x1ED74Cu;
label_1ed74c:
    // 0x1ed74c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ed750:
    if (ctx->pc == 0x1ED750u) {
        ctx->pc = 0x1ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED74Cu;
        // 0x1ed750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED754u;
        goto label_1ed754;
    }
    ctx->pc = 0x1ED74Cu;
    {
        const bool branch_taken_0x1ed74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED74Cu;
        // 0x1ed750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed74c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED754u;
label_1ed754:
    // 0x1ed754: 0x0  nop
    ctx->pc = 0x1ed754u;
    // NOP
label_1ed758:
    // 0x1ed758: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1ed75c:
    if (ctx->pc == 0x1ED75Cu) {
        ctx->pc = 0x1ED760u;
        goto label_1ed760;
    }
    ctx->pc = 0x1ED758u;
    {
        const bool branch_taken_0x1ed758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed758) {
            ctx->pc = 0x1ED770u;
            goto label_1ed770;
        }
    }
    ctx->pc = 0x1ED760u;
label_1ed760:
    // 0x1ed760: 0xc07dc90  jal         func_1F7240
label_1ed764:
    if (ctx->pc == 0x1ED764u) {
        ctx->pc = 0x1ED764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED760u;
        // 0x1ed764: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED768u;
        goto label_1ed768;
    }
    ctx->pc = 0x1ED760u;
    SET_GPR_U32(ctx, 31, 0x1ED768u);
    ctx->pc = 0x1ED764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED760u;
    // 0x1ed764: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7240u;
    { ctx->pc = 0x1f7240; return; }
    ctx->pc = 0x1ED768u;
label_1ed768:
    // 0x1ed768: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ed76c:
    if (ctx->pc == 0x1ED76Cu) {
        ctx->pc = 0x1ED76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED768u;
        // 0x1ed76c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED770u;
        goto label_1ed770;
    }
    ctx->pc = 0x1ED768u;
    {
        const bool branch_taken_0x1ed768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED768u;
        // 0x1ed76c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed768) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED770u;
label_1ed770:
    // 0x1ed770: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ed774:
    // 0x1ed774: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_1ed778:
    if (ctx->pc == 0x1ED778u) {
        ctx->pc = 0x1ED77Cu;
        goto label_1ed77c;
    }
    ctx->pc = 0x1ED774u;
    {
        const bool branch_taken_0x1ed774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed774) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED77Cu;
label_1ed77c:
    // 0x1ed77c: 0xc07f298  jal         func_1FCA60
label_1ed780:
    if (ctx->pc == 0x1ED780u) {
        ctx->pc = 0x1ED780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED77Cu;
        // 0x1ed780: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED784u;
        goto label_1ed784;
    }
    ctx->pc = 0x1ED77Cu;
    SET_GPR_U32(ctx, 31, 0x1ED784u);
    ctx->pc = 0x1ED780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED77Cu;
    // 0x1ed780: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA60u;
    { ctx->pc = 0x1fca60; return; }
    ctx->pc = 0x1ED784u;
label_1ed784:
    // 0x1ed784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed788:
    // 0x1ed788: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ed788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ed78c:
    // 0x1ed78c: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
label_1ed790:
    if (ctx->pc == 0x1ED790u) {
        ctx->pc = 0x1ED794u;
        goto label_1ed794;
    }
    ctx->pc = 0x1ED78Cu;
    {
        const bool branch_taken_0x1ed78c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed78c) {
            ctx->pc = 0x1ED7F0u;
            goto label_1ed7f0;
        }
    }
    ctx->pc = 0x1ED794u;
label_1ed794:
    // 0x1ed794: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ed798:
    // 0x1ed798: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ed798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed79c:
    // 0x1ed79c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ed79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ed7a0:
    // 0x1ed7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed7a4:
    // 0x1ed7a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ed7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed7a8:
    // 0x1ed7a8: 0xc07b6c0  jal         func_1EDB00
label_1ed7ac:
    if (ctx->pc == 0x1ED7ACu) {
        ctx->pc = 0x1ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7A8u;
        // 0x1ed7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7B0u;
        goto label_1ed7b0;
    }
    ctx->pc = 0x1ED7A8u;
    SET_GPR_U32(ctx, 31, 0x1ED7B0u);
    ctx->pc = 0x1ED7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7A8u;
    // 0x1ed7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDB00u;
    { ctx->pc = 0x1edb00; return; }
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1ed7b4:
    if (ctx->pc == 0x1ED7B4u) {
        ctx->pc = 0x1ED7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7B0u;
        // 0x1ed7b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7B8u;
        goto label_1ed7b8;
    }
    ctx->pc = 0x1ED7B0u;
    {
        const bool branch_taken_0x1ed7b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7B0u;
        // 0x1ed7b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7b0) {
            ctx->pc = 0x1ED7C0u;
            goto label_1ed7c0;
        }
    }
    ctx->pc = 0x1ED7B8u;
label_1ed7b8:
    // 0x1ed7b8: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_1ed7bc:
    if (ctx->pc == 0x1ED7BCu) {
        ctx->pc = 0x1ED7C0u;
        goto label_1ed7c0;
    }
    ctx->pc = 0x1ED7B8u;
    {
        const bool branch_taken_0x1ed7b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed7b8) {
            ctx->pc = 0x1ED7D0u;
            goto label_1ed7d0;
        }
    }
    ctx->pc = 0x1ED7C0u;
label_1ed7c0:
    // 0x1ed7c0: 0xc078050  jal         func_1E0140
label_1ed7c4:
    if (ctx->pc == 0x1ED7C4u) {
        ctx->pc = 0x1ED7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7C0u;
        // 0x1ed7c4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7C8u;
        goto label_1ed7c8;
    }
    ctx->pc = 0x1ED7C0u;
    SET_GPR_U32(ctx, 31, 0x1ED7C8u);
    ctx->pc = 0x1ED7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7C0u;
    // 0x1ed7c4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1ED7C8u;
label_1ed7c8:
    // 0x1ed7c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ed7cc:
    if (ctx->pc == 0x1ED7CCu) {
        ctx->pc = 0x1ED7D0u;
        goto label_1ed7d0;
    }
    ctx->pc = 0x1ED7C8u;
    {
        const bool branch_taken_0x1ed7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7c8) {
            ctx->pc = 0x1ED7D8u;
            goto label_1ed7d8;
        }
    }
    ctx->pc = 0x1ED7D0u;
label_1ed7d0:
    // 0x1ed7d0: 0xc078050  jal         func_1E0140
label_1ed7d4:
    if (ctx->pc == 0x1ED7D4u) {
        ctx->pc = 0x1ED7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7D0u;
        // 0x1ed7d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7D8u;
        goto label_1ed7d8;
    }
    ctx->pc = 0x1ED7D0u;
    SET_GPR_U32(ctx, 31, 0x1ED7D8u);
    ctx->pc = 0x1ED7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7D0u;
    // 0x1ed7d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1ED7D8u;
label_1ed7d8:
    // 0x1ed7d8: 0xc078070  jal         func_1E01C0
label_1ed7dc:
    if (ctx->pc == 0x1ED7DCu) {
        ctx->pc = 0x1ED7E0u;
        goto label_1ed7e0;
    }
    ctx->pc = 0x1ED7D8u;
    SET_GPR_U32(ctx, 31, 0x1ED7E0u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1ED7E0u;
label_1ed7e0:
    // 0x1ed7e0: 0xc07b48c  jal         func_1ED230
label_1ed7e4:
    if (ctx->pc == 0x1ED7E4u) {
        ctx->pc = 0x1ED7E8u;
        goto label_1ed7e8;
    }
    ctx->pc = 0x1ED7E0u;
    SET_GPR_U32(ctx, 31, 0x1ED7E8u);
    ctx->pc = 0x1ED230u;
    goto label_1ed230;
    ctx->pc = 0x1ED7E8u;
label_1ed7e8:
    // 0x1ed7e8: 0x1000ff3c  b           . + 4 + (-0xC4 << 2)
label_1ed7ec:
    if (ctx->pc == 0x1ED7ECu) {
        ctx->pc = 0x1ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7E8u;
        // 0x1ed7ec: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7F0u;
        goto label_1ed7f0;
    }
    ctx->pc = 0x1ED7E8u;
    {
        const bool branch_taken_0x1ed7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7E8u;
        // 0x1ed7ec: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7e8) {
            ctx->pc = 0x1ED4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed4dc;
        }
    }
    ctx->pc = 0x1ED7F0u;
label_1ed7f0:
    // 0x1ed7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed7f4:
    // 0x1ed7f4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ed7f8:
    if (ctx->pc == 0x1ED7F8u) {
        ctx->pc = 0x1ED7FCu;
        goto label_1ed7fc;
    }
    ctx->pc = 0x1ED7F4u;
    {
        const bool branch_taken_0x1ed7f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed7f4) {
            ctx->pc = 0x1ED808u;
            goto label_1ed808;
        }
    }
    ctx->pc = 0x1ED7FCu;
label_1ed7fc:
    // 0x1ed7fc: 0xc07b864  jal         func_1EE190
label_1ed800:
    if (ctx->pc == 0x1ED800u) {
        ctx->pc = 0x1ED804u;
        goto label_1ed804;
    }
    ctx->pc = 0x1ED7FCu;
    SET_GPR_U32(ctx, 31, 0x1ED804u);
    ctx->pc = 0x1EE190u;
    { ctx->pc = 0x1ee190; return; }
    ctx->pc = 0x1ED804u;
label_1ed804:
    // 0x1ed804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed808:
    // 0x1ed808: 0xc078078  jal         func_1E01E0
label_1ed80c:
    if (ctx->pc == 0x1ED80Cu) {
        ctx->pc = 0x1ED810u;
        goto label_1ed810;
    }
    ctx->pc = 0x1ED808u;
    SET_GPR_U32(ctx, 31, 0x1ED810u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1ED810u;
label_1ed810:
    // 0x1ed810: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed814:
    // 0x1ed814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed818:
    // 0x1ed818: 0xc04e188  jal         func_138620
label_1ed81c:
    if (ctx->pc == 0x1ED81Cu) {
        ctx->pc = 0x1ED81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED818u;
        // 0x1ed81c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED820u;
        goto label_1ed820;
    }
    ctx->pc = 0x1ED818u;
    SET_GPR_U32(ctx, 31, 0x1ED820u);
    ctx->pc = 0x1ED81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED818u;
    // 0x1ed81c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1ED818u, 0x1ED820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED820u;
label_1ed820:
    // 0x1ed820: 0xc04e198  jal         func_138660
label_1ed824:
    if (ctx->pc == 0x1ED824u) {
        ctx->pc = 0x1ED828u;
        goto label_1ed828;
    }
    ctx->pc = 0x1ED820u;
    SET_GPR_U32(ctx, 31, 0x1ED828u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1ED820u, 0x1ED828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED828u;
label_1ed828:
    // 0x1ed828: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ed82c:
    if (ctx->pc == 0x1ED82Cu) {
        ctx->pc = 0x1ED830u;
        goto label_1ed830;
    }
    ctx->pc = 0x1ED828u;
    {
        const bool branch_taken_0x1ed828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed828) {
            ctx->pc = 0x1ED858u;
            goto label_1ed858;
        }
    }
    ctx->pc = 0x1ED830u;
label_1ed830:
    // 0x1ed830: 0xc07b48c  jal         func_1ED230
label_1ed834:
    if (ctx->pc == 0x1ED834u) {
        ctx->pc = 0x1ED838u;
        goto label_1ed838;
    }
    ctx->pc = 0x1ED830u;
    SET_GPR_U32(ctx, 31, 0x1ED838u);
    ctx->pc = 0x1ED230u;
    goto label_1ed230;
    ctx->pc = 0x1ED838u;
label_1ed838:
    // 0x1ed838: 0xc04e198  jal         func_138660
label_1ed83c:
    if (ctx->pc == 0x1ED83Cu) {
        ctx->pc = 0x1ED840u;
        goto label_1ed840;
    }
    ctx->pc = 0x1ED838u;
    SET_GPR_U32(ctx, 31, 0x1ED840u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1ED838u, 0x1ED840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED840u;
label_1ed840:
    // 0x1ed840: 0x0  nop
    ctx->pc = 0x1ed840u;
    // NOP
label_1ed844:
    // 0x1ed844: 0x0  nop
    ctx->pc = 0x1ed844u;
    // NOP
label_1ed848:
    // 0x1ed848: 0x0  nop
    ctx->pc = 0x1ed848u;
    // NOP
label_1ed84c:
    // 0x1ed84c: 0x0  nop
    ctx->pc = 0x1ed84cu;
    // NOP
label_1ed850:
    // 0x1ed850: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1ed854:
    if (ctx->pc == 0x1ED854u) {
        ctx->pc = 0x1ED858u;
        goto label_1ed858;
    }
    ctx->pc = 0x1ED850u;
    {
        const bool branch_taken_0x1ed850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed850) {
            ctx->pc = 0x1ED830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed830;
        }
    }
    ctx->pc = 0x1ED858u;
label_1ed858:
    // 0x1ed858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ed858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed85c:
    // 0x1ed85c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ed85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ed860:
    // 0x1ed860: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ed860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ed864:
    // 0x1ed864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ed864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ed868:
    // 0x1ed868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ed868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed86c:
    // 0x1ed86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed870:
    // 0x1ed870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed874:
    // 0x1ed874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed878:
    // 0x1ed878: 0x3e00008  jr          $ra
label_1ed87c:
    if (ctx->pc == 0x1ED87Cu) {
        ctx->pc = 0x1ED87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED878u;
        // 0x1ed87c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED880u;
        goto label_1ed880;
    }
    ctx->pc = 0x1ED878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED878u;
        // 0x1ed87c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED880u;
label_1ed880:
    // 0x1ed880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ed880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ed884:
    // 0x1ed884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ed888u;
    return;
}

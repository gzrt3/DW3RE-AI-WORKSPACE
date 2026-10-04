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


void FUN_0017d410_part197(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dcf50u: goto label_1dcf50;
        case 0x1dcf54u: goto label_1dcf54;
        case 0x1dcf58u: goto label_1dcf58;
        case 0x1dcf5cu: goto label_1dcf5c;
        case 0x1dcf60u: goto label_1dcf60;
        case 0x1dcf64u: goto label_1dcf64;
        case 0x1dcf68u: goto label_1dcf68;
        case 0x1dcf6cu: goto label_1dcf6c;
        case 0x1dcf70u: goto label_1dcf70;
        case 0x1dcf74u: goto label_1dcf74;
        case 0x1dcf78u: goto label_1dcf78;
        case 0x1dcf7cu: goto label_1dcf7c;
        case 0x1dcf80u: goto label_1dcf80;
        case 0x1dcf84u: goto label_1dcf84;
        case 0x1dcf88u: goto label_1dcf88;
        case 0x1dcf8cu: goto label_1dcf8c;
        case 0x1dcf90u: goto label_1dcf90;
        case 0x1dcf94u: goto label_1dcf94;
        case 0x1dcf98u: goto label_1dcf98;
        case 0x1dcf9cu: goto label_1dcf9c;
        case 0x1dcfa0u: goto label_1dcfa0;
        case 0x1dcfa4u: goto label_1dcfa4;
        case 0x1dcfa8u: goto label_1dcfa8;
        case 0x1dcfacu: goto label_1dcfac;
        case 0x1dcfb0u: goto label_1dcfb0;
        case 0x1dcfb4u: goto label_1dcfb4;
        case 0x1dcfb8u: goto label_1dcfb8;
        case 0x1dcfbcu: goto label_1dcfbc;
        case 0x1dcfc0u: goto label_1dcfc0;
        case 0x1dcfc4u: goto label_1dcfc4;
        case 0x1dcfc8u: goto label_1dcfc8;
        case 0x1dcfccu: goto label_1dcfcc;
        case 0x1dcfd0u: goto label_1dcfd0;
        case 0x1dcfd4u: goto label_1dcfd4;
        case 0x1dcfd8u: goto label_1dcfd8;
        case 0x1dcfdcu: goto label_1dcfdc;
        case 0x1dcfe0u: goto label_1dcfe0;
        case 0x1dcfe4u: goto label_1dcfe4;
        case 0x1dcfe8u: goto label_1dcfe8;
        case 0x1dcfecu: goto label_1dcfec;
        case 0x1dcff0u: goto label_1dcff0;
        case 0x1dcff4u: goto label_1dcff4;
        case 0x1dcff8u: goto label_1dcff8;
        case 0x1dcffcu: goto label_1dcffc;
        case 0x1dd000u: goto label_1dd000;
        case 0x1dd004u: goto label_1dd004;
        case 0x1dd008u: goto label_1dd008;
        case 0x1dd00cu: goto label_1dd00c;
        case 0x1dd010u: goto label_1dd010;
        case 0x1dd014u: goto label_1dd014;
        case 0x1dd018u: goto label_1dd018;
        case 0x1dd01cu: goto label_1dd01c;
        case 0x1dd020u: goto label_1dd020;
        case 0x1dd024u: goto label_1dd024;
        case 0x1dd028u: goto label_1dd028;
        case 0x1dd02cu: goto label_1dd02c;
        case 0x1dd030u: goto label_1dd030;
        case 0x1dd034u: goto label_1dd034;
        case 0x1dd038u: goto label_1dd038;
        case 0x1dd03cu: goto label_1dd03c;
        case 0x1dd040u: goto label_1dd040;
        case 0x1dd044u: goto label_1dd044;
        case 0x1dd048u: goto label_1dd048;
        case 0x1dd04cu: goto label_1dd04c;
        case 0x1dd050u: goto label_1dd050;
        case 0x1dd054u: goto label_1dd054;
        case 0x1dd058u: goto label_1dd058;
        case 0x1dd05cu: goto label_1dd05c;
        case 0x1dd060u: goto label_1dd060;
        case 0x1dd064u: goto label_1dd064;
        case 0x1dd068u: goto label_1dd068;
        case 0x1dd06cu: goto label_1dd06c;
        case 0x1dd070u: goto label_1dd070;
        case 0x1dd074u: goto label_1dd074;
        case 0x1dd078u: goto label_1dd078;
        case 0x1dd07cu: goto label_1dd07c;
        case 0x1dd080u: goto label_1dd080;
        case 0x1dd084u: goto label_1dd084;
        case 0x1dd088u: goto label_1dd088;
        case 0x1dd08cu: goto label_1dd08c;
        case 0x1dd090u: goto label_1dd090;
        case 0x1dd094u: goto label_1dd094;
        case 0x1dd098u: goto label_1dd098;
        case 0x1dd09cu: goto label_1dd09c;
        case 0x1dd0a0u: goto label_1dd0a0;
        case 0x1dd0a4u: goto label_1dd0a4;
        case 0x1dd0a8u: goto label_1dd0a8;
        case 0x1dd0acu: goto label_1dd0ac;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd0b4u: goto label_1dd0b4;
        case 0x1dd0b8u: goto label_1dd0b8;
        case 0x1dd0bcu: goto label_1dd0bc;
        case 0x1dd0c0u: goto label_1dd0c0;
        case 0x1dd0c4u: goto label_1dd0c4;
        case 0x1dd0c8u: goto label_1dd0c8;
        case 0x1dd0ccu: goto label_1dd0cc;
        case 0x1dd0d0u: goto label_1dd0d0;
        case 0x1dd0d4u: goto label_1dd0d4;
        case 0x1dd0d8u: goto label_1dd0d8;
        case 0x1dd0dcu: goto label_1dd0dc;
        case 0x1dd0e0u: goto label_1dd0e0;
        case 0x1dd0e4u: goto label_1dd0e4;
        case 0x1dd0e8u: goto label_1dd0e8;
        case 0x1dd0ecu: goto label_1dd0ec;
        case 0x1dd0f0u: goto label_1dd0f0;
        case 0x1dd0f4u: goto label_1dd0f4;
        case 0x1dd0f8u: goto label_1dd0f8;
        case 0x1dd0fcu: goto label_1dd0fc;
        case 0x1dd100u: goto label_1dd100;
        case 0x1dd104u: goto label_1dd104;
        case 0x1dd108u: goto label_1dd108;
        case 0x1dd10cu: goto label_1dd10c;
        case 0x1dd110u: goto label_1dd110;
        case 0x1dd114u: goto label_1dd114;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd11cu: goto label_1dd11c;
        case 0x1dd120u: goto label_1dd120;
        case 0x1dd124u: goto label_1dd124;
        case 0x1dd128u: goto label_1dd128;
        case 0x1dd12cu: goto label_1dd12c;
        case 0x1dd130u: goto label_1dd130;
        case 0x1dd134u: goto label_1dd134;
        case 0x1dd138u: goto label_1dd138;
        case 0x1dd13cu: goto label_1dd13c;
        case 0x1dd140u: goto label_1dd140;
        case 0x1dd144u: goto label_1dd144;
        case 0x1dd148u: goto label_1dd148;
        case 0x1dd14cu: goto label_1dd14c;
        case 0x1dd150u: goto label_1dd150;
        case 0x1dd154u: goto label_1dd154;
        case 0x1dd158u: goto label_1dd158;
        case 0x1dd15cu: goto label_1dd15c;
        case 0x1dd160u: goto label_1dd160;
        case 0x1dd164u: goto label_1dd164;
        case 0x1dd168u: goto label_1dd168;
        case 0x1dd16cu: goto label_1dd16c;
        case 0x1dd170u: goto label_1dd170;
        case 0x1dd174u: goto label_1dd174;
        case 0x1dd178u: goto label_1dd178;
        case 0x1dd17cu: goto label_1dd17c;
        case 0x1dd180u: goto label_1dd180;
        case 0x1dd184u: goto label_1dd184;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd18cu: goto label_1dd18c;
        case 0x1dd190u: goto label_1dd190;
        case 0x1dd194u: goto label_1dd194;
        case 0x1dd198u: goto label_1dd198;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1a0u: goto label_1dd1a0;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1acu: goto label_1dd1ac;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1b4u: goto label_1dd1b4;
        case 0x1dd1b8u: goto label_1dd1b8;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1c8u: goto label_1dd1c8;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1d8u: goto label_1dd1d8;
        case 0x1dd1dcu: goto label_1dd1dc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1ecu: goto label_1dd1ec;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd1f4u: goto label_1dd1f4;
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd21cu: goto label_1dd21c;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd228u: goto label_1dd228;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd230u: goto label_1dd230;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd238u: goto label_1dd238;
        case 0x1dd23cu: goto label_1dd23c;
        case 0x1dd240u: goto label_1dd240;
        case 0x1dd244u: goto label_1dd244;
        case 0x1dd248u: goto label_1dd248;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd250u: goto label_1dd250;
        case 0x1dd254u: goto label_1dd254;
        case 0x1dd258u: goto label_1dd258;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        case 0x1dd3a8u: goto label_1dd3a8;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3b0u: goto label_1dd3b0;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3b8u: goto label_1dd3b8;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3c0u: goto label_1dd3c0;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd3c8u: goto label_1dd3c8;
        case 0x1dd3ccu: goto label_1dd3cc;
        case 0x1dd3d0u: goto label_1dd3d0;
        case 0x1dd3d4u: goto label_1dd3d4;
        case 0x1dd3d8u: goto label_1dd3d8;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3e0u: goto label_1dd3e0;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3e8u: goto label_1dd3e8;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3f0u: goto label_1dd3f0;
        case 0x1dd3f4u: goto label_1dd3f4;
        case 0x1dd3f8u: goto label_1dd3f8;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd404u: goto label_1dd404;
        case 0x1dd408u: goto label_1dd408;
        case 0x1dd40cu: goto label_1dd40c;
        case 0x1dd410u: goto label_1dd410;
        case 0x1dd414u: goto label_1dd414;
        case 0x1dd418u: goto label_1dd418;
        case 0x1dd41cu: goto label_1dd41c;
        case 0x1dd420u: goto label_1dd420;
        case 0x1dd424u: goto label_1dd424;
        case 0x1dd428u: goto label_1dd428;
        case 0x1dd42cu: goto label_1dd42c;
        case 0x1dd430u: goto label_1dd430;
        case 0x1dd434u: goto label_1dd434;
        case 0x1dd438u: goto label_1dd438;
        case 0x1dd43cu: goto label_1dd43c;
        case 0x1dd440u: goto label_1dd440;
        case 0x1dd444u: goto label_1dd444;
        case 0x1dd448u: goto label_1dd448;
        case 0x1dd44cu: goto label_1dd44c;
        case 0x1dd450u: goto label_1dd450;
        case 0x1dd454u: goto label_1dd454;
        case 0x1dd458u: goto label_1dd458;
        case 0x1dd45cu: goto label_1dd45c;
        case 0x1dd460u: goto label_1dd460;
        case 0x1dd464u: goto label_1dd464;
        case 0x1dd468u: goto label_1dd468;
        case 0x1dd46cu: goto label_1dd46c;
        case 0x1dd470u: goto label_1dd470;
        case 0x1dd474u: goto label_1dd474;
        case 0x1dd478u: goto label_1dd478;
        case 0x1dd47cu: goto label_1dd47c;
        case 0x1dd480u: goto label_1dd480;
        case 0x1dd484u: goto label_1dd484;
        case 0x1dd488u: goto label_1dd488;
        case 0x1dd48cu: goto label_1dd48c;
        case 0x1dd490u: goto label_1dd490;
        case 0x1dd494u: goto label_1dd494;
        case 0x1dd498u: goto label_1dd498;
        case 0x1dd49cu: goto label_1dd49c;
        case 0x1dd4a0u: goto label_1dd4a0;
        case 0x1dd4a4u: goto label_1dd4a4;
        case 0x1dd4a8u: goto label_1dd4a8;
        case 0x1dd4acu: goto label_1dd4ac;
        case 0x1dd4b0u: goto label_1dd4b0;
        case 0x1dd4b4u: goto label_1dd4b4;
        case 0x1dd4b8u: goto label_1dd4b8;
        case 0x1dd4bcu: goto label_1dd4bc;
        case 0x1dd4c0u: goto label_1dd4c0;
        case 0x1dd4c4u: goto label_1dd4c4;
        case 0x1dd4c8u: goto label_1dd4c8;
        case 0x1dd4ccu: goto label_1dd4cc;
        case 0x1dd4d0u: goto label_1dd4d0;
        case 0x1dd4d4u: goto label_1dd4d4;
        case 0x1dd4d8u: goto label_1dd4d8;
        case 0x1dd4dcu: goto label_1dd4dc;
        case 0x1dd4e0u: goto label_1dd4e0;
        case 0x1dd4e4u: goto label_1dd4e4;
        case 0x1dd4e8u: goto label_1dd4e8;
        case 0x1dd4ecu: goto label_1dd4ec;
        case 0x1dd4f0u: goto label_1dd4f0;
        case 0x1dd4f4u: goto label_1dd4f4;
        case 0x1dd4f8u: goto label_1dd4f8;
        case 0x1dd4fcu: goto label_1dd4fc;
        case 0x1dd500u: goto label_1dd500;
        case 0x1dd504u: goto label_1dd504;
        case 0x1dd508u: goto label_1dd508;
        case 0x1dd50cu: goto label_1dd50c;
        case 0x1dd510u: goto label_1dd510;
        case 0x1dd514u: goto label_1dd514;
        case 0x1dd518u: goto label_1dd518;
        case 0x1dd51cu: goto label_1dd51c;
        case 0x1dd520u: goto label_1dd520;
        case 0x1dd524u: goto label_1dd524;
        case 0x1dd528u: goto label_1dd528;
        case 0x1dd52cu: goto label_1dd52c;
        case 0x1dd530u: goto label_1dd530;
        case 0x1dd534u: goto label_1dd534;
        case 0x1dd538u: goto label_1dd538;
        case 0x1dd53cu: goto label_1dd53c;
        case 0x1dd540u: goto label_1dd540;
        case 0x1dd544u: goto label_1dd544;
        case 0x1dd548u: goto label_1dd548;
        case 0x1dd54cu: goto label_1dd54c;
        case 0x1dd550u: goto label_1dd550;
        case 0x1dd554u: goto label_1dd554;
        case 0x1dd558u: goto label_1dd558;
        case 0x1dd55cu: goto label_1dd55c;
        case 0x1dd560u: goto label_1dd560;
        case 0x1dd564u: goto label_1dd564;
        case 0x1dd568u: goto label_1dd568;
        case 0x1dd56cu: goto label_1dd56c;
        case 0x1dd570u: goto label_1dd570;
        case 0x1dd574u: goto label_1dd574;
        case 0x1dd578u: goto label_1dd578;
        case 0x1dd57cu: goto label_1dd57c;
        case 0x1dd580u: goto label_1dd580;
        case 0x1dd584u: goto label_1dd584;
        case 0x1dd588u: goto label_1dd588;
        case 0x1dd58cu: goto label_1dd58c;
        case 0x1dd590u: goto label_1dd590;
        case 0x1dd594u: goto label_1dd594;
        case 0x1dd598u: goto label_1dd598;
        case 0x1dd59cu: goto label_1dd59c;
        case 0x1dd5a0u: goto label_1dd5a0;
        case 0x1dd5a4u: goto label_1dd5a4;
        case 0x1dd5a8u: goto label_1dd5a8;
        case 0x1dd5acu: goto label_1dd5ac;
        case 0x1dd5b0u: goto label_1dd5b0;
        case 0x1dd5b4u: goto label_1dd5b4;
        case 0x1dd5b8u: goto label_1dd5b8;
        case 0x1dd5bcu: goto label_1dd5bc;
        case 0x1dd5c0u: goto label_1dd5c0;
        case 0x1dd5c4u: goto label_1dd5c4;
        case 0x1dd5c8u: goto label_1dd5c8;
        case 0x1dd5ccu: goto label_1dd5cc;
        case 0x1dd5d0u: goto label_1dd5d0;
        case 0x1dd5d4u: goto label_1dd5d4;
        case 0x1dd5d8u: goto label_1dd5d8;
        case 0x1dd5dcu: goto label_1dd5dc;
        case 0x1dd5e0u: goto label_1dd5e0;
        case 0x1dd5e4u: goto label_1dd5e4;
        case 0x1dd5e8u: goto label_1dd5e8;
        case 0x1dd5ecu: goto label_1dd5ec;
        case 0x1dd5f0u: goto label_1dd5f0;
        case 0x1dd5f4u: goto label_1dd5f4;
        case 0x1dd5f8u: goto label_1dd5f8;
        case 0x1dd5fcu: goto label_1dd5fc;
        case 0x1dd600u: goto label_1dd600;
        case 0x1dd604u: goto label_1dd604;
        case 0x1dd608u: goto label_1dd608;
        case 0x1dd60cu: goto label_1dd60c;
        case 0x1dd610u: goto label_1dd610;
        case 0x1dd614u: goto label_1dd614;
        case 0x1dd618u: goto label_1dd618;
        case 0x1dd61cu: goto label_1dd61c;
        case 0x1dd620u: goto label_1dd620;
        case 0x1dd624u: goto label_1dd624;
        case 0x1dd628u: goto label_1dd628;
        case 0x1dd62cu: goto label_1dd62c;
        case 0x1dd630u: goto label_1dd630;
        case 0x1dd634u: goto label_1dd634;
        case 0x1dd638u: goto label_1dd638;
        case 0x1dd63cu: goto label_1dd63c;
        case 0x1dd640u: goto label_1dd640;
        case 0x1dd644u: goto label_1dd644;
        case 0x1dd648u: goto label_1dd648;
        case 0x1dd64cu: goto label_1dd64c;
        case 0x1dd650u: goto label_1dd650;
        case 0x1dd654u: goto label_1dd654;
        case 0x1dd658u: goto label_1dd658;
        case 0x1dd65cu: goto label_1dd65c;
        case 0x1dd660u: goto label_1dd660;
        case 0x1dd664u: goto label_1dd664;
        case 0x1dd668u: goto label_1dd668;
        case 0x1dd66cu: goto label_1dd66c;
        case 0x1dd670u: goto label_1dd670;
        case 0x1dd674u: goto label_1dd674;
        case 0x1dd678u: goto label_1dd678;
        case 0x1dd67cu: goto label_1dd67c;
        case 0x1dd680u: goto label_1dd680;
        case 0x1dd684u: goto label_1dd684;
        case 0x1dd688u: goto label_1dd688;
        case 0x1dd68cu: goto label_1dd68c;
        case 0x1dd690u: goto label_1dd690;
        case 0x1dd694u: goto label_1dd694;
        case 0x1dd698u: goto label_1dd698;
        case 0x1dd69cu: goto label_1dd69c;
        case 0x1dd6a0u: goto label_1dd6a0;
        case 0x1dd6a4u: goto label_1dd6a4;
        case 0x1dd6a8u: goto label_1dd6a8;
        case 0x1dd6acu: goto label_1dd6ac;
        case 0x1dd6b0u: goto label_1dd6b0;
        case 0x1dd6b4u: goto label_1dd6b4;
        case 0x1dd6b8u: goto label_1dd6b8;
        case 0x1dd6bcu: goto label_1dd6bc;
        case 0x1dd6c0u: goto label_1dd6c0;
        case 0x1dd6c4u: goto label_1dd6c4;
        case 0x1dd6c8u: goto label_1dd6c8;
        case 0x1dd6ccu: goto label_1dd6cc;
        case 0x1dd6d0u: goto label_1dd6d0;
        case 0x1dd6d4u: goto label_1dd6d4;
        case 0x1dd6d8u: goto label_1dd6d8;
        case 0x1dd6dcu: goto label_1dd6dc;
        case 0x1dd6e0u: goto label_1dd6e0;
        case 0x1dd6e4u: goto label_1dd6e4;
        case 0x1dd6e8u: goto label_1dd6e8;
        case 0x1dd6ecu: goto label_1dd6ec;
        case 0x1dd6f0u: goto label_1dd6f0;
        case 0x1dd6f4u: goto label_1dd6f4;
        case 0x1dd6f8u: goto label_1dd6f8;
        case 0x1dd6fcu: goto label_1dd6fc;
        case 0x1dd700u: goto label_1dd700;
        case 0x1dd704u: goto label_1dd704;
        case 0x1dd708u: goto label_1dd708;
        case 0x1dd70cu: goto label_1dd70c;
        case 0x1dd710u: goto label_1dd710;
        case 0x1dd714u: goto label_1dd714;
        case 0x1dd718u: goto label_1dd718;
        case 0x1dd71cu: goto label_1dd71c;
        default: return;
    }

label_1dcf50:
    if (ctx->pc == 0x1DCF50u) {
        ctx->pc = 0x1DCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF4Cu;
        // 0x1dcf50: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF54u;
        goto label_1dcf54;
    }
    ctx->pc = 0x1DCF4Cu;
    {
        const bool branch_taken_0x1dcf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF4Cu;
        // 0x1dcf50: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf4c) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF54u;
label_1dcf54:
    // 0x1dcf54: 0x0  nop
    ctx->pc = 0x1dcf54u;
    // NOP
label_1dcf58:
    // 0x1dcf58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcf5c:
    // 0x1dcf5c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dcf60:
    if (ctx->pc == 0x1DCF60u) {
        ctx->pc = 0x1DCF64u;
        goto label_1dcf64;
    }
    ctx->pc = 0x1DCF5Cu;
    {
        const bool branch_taken_0x1dcf5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf5c) {
            ctx->pc = 0x1DCF80u;
            goto label_1dcf80;
        }
    }
    ctx->pc = 0x1DCF64u;
label_1dcf64:
    // 0x1dcf64: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf68:
    // 0x1dcf68: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dcf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dcf6c:
    // 0x1dcf6c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dcf70:
    if (ctx->pc == 0x1DCF70u) {
        ctx->pc = 0x1DCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF6Cu;
        // 0x1dcf70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF74u;
        goto label_1dcf74;
    }
    ctx->pc = 0x1DCF6Cu;
    {
        const bool branch_taken_0x1dcf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF6Cu;
        // 0x1dcf70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf6c) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF74u;
label_1dcf74:
    // 0x1dcf74: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcf78:
    // 0x1dcf78: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dcf7c:
    if (ctx->pc == 0x1DCF7Cu) {
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF80u;
        goto label_1dcf80;
    }
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF80u;
label_1dcf80:
    // 0x1dcf80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dcf84:
    // 0x1dcf84: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dcf88:
    if (ctx->pc == 0x1DCF88u) {
        ctx->pc = 0x1DCF8Cu;
        goto label_1dcf8c;
    }
    ctx->pc = 0x1DCF84u;
    {
        const bool branch_taken_0x1dcf84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf84) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF8Cu;
label_1dcf8c:
    // 0x1dcf8c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf90:
    // 0x1dcf90: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dcf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dcf94:
    // 0x1dcf94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcf98:
    if (ctx->pc == 0x1DCF98u) {
        ctx->pc = 0x1DCF9Cu;
        goto label_1dcf9c;
    }
    ctx->pc = 0x1DCF94u;
    {
        const bool branch_taken_0x1dcf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf94) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF9Cu;
label_1dcf9c:
    // 0x1dcf9c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dcf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dcfa0:
    // 0x1dcfa0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcfa4:
    // 0x1dcfa4: 0x0  nop
    ctx->pc = 0x1dcfa4u;
    // NOP
label_1dcfa8:
    // 0x1dcfa8: 0xc07a9d8  jal         func_1EA760
label_1dcfac:
    if (ctx->pc == 0x1DCFACu) {
        ctx->pc = 0x1DCFB0u;
        goto label_1dcfb0;
    }
    ctx->pc = 0x1DCFA8u;
    SET_GPR_U32(ctx, 31, 0x1DCFB0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DCFB0u;
label_1dcfb0:
    // 0x1dcfb0: 0xc04e168  jal         func_1385A0
label_1dcfb4:
    if (ctx->pc == 0x1DCFB4u) {
        ctx->pc = 0x1DCFB8u;
        goto label_1dcfb8;
    }
    ctx->pc = 0x1DCFB0u;
    SET_GPR_U32(ctx, 31, 0x1DCFB8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DCFB0u, 0x1DCFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFB8u;
label_1dcfb8:
    // 0x1dcfb8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dcfbc:
    // 0x1dcfbc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dcfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dcfc0:
    // 0x1dcfc0: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dcfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dcfc4:
    // 0x1dcfc4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dcfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dcfc8:
    // 0x1dcfc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dcfcc:
    // 0x1dcfcc: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dcfd0:
    // 0x1dcfd0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dcfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dcfd4:
    // 0x1dcfd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfd8:
    // 0x1dcfd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcfd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfdc:
    // 0x1dcfdc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dcfe0:
    // 0x1dcfe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dcfe4:
    // 0x1dcfe4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dcfe8:
    // 0x1dcfe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcfec:
    // 0x1dcfec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcff0:
    // 0x1dcff0: 0xc066c72  jal         func_19B1C8
label_1dcff4:
    if (ctx->pc == 0x1DCFF4u) {
        ctx->pc = 0x1DCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF0u;
        // 0x1dcff4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCFF8u;
        goto label_1dcff8;
    }
    ctx->pc = 0x1DCFF0u;
    SET_GPR_U32(ctx, 31, 0x1DCFF8u);
    ctx->pc = 0x1DCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCFF0u;
    // 0x1dcff4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DCFF8u;
label_1dcff8:
    // 0x1dcff8: 0xc077e84  jal         func_1DFA10
label_1dcffc:
    if (ctx->pc == 0x1DCFFCu) {
        ctx->pc = 0x1DD000u;
        goto label_1dd000;
    }
    ctx->pc = 0x1DCFF8u;
    SET_GPR_U32(ctx, 31, 0x1DD000u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DD000u;
label_1dd000:
    // 0x1dd000: 0xc077d90  jal         func_1DF640
label_1dd004:
    if (ctx->pc == 0x1DD004u) {
        ctx->pc = 0x1DD008u;
        goto label_1dd008;
    }
    ctx->pc = 0x1DD000u;
    SET_GPR_U32(ctx, 31, 0x1DD008u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DD008u;
label_1dd008:
    // 0x1dd008: 0xc077ab4  jal         func_1DEAD0
label_1dd00c:
    if (ctx->pc == 0x1DD00Cu) {
        ctx->pc = 0x1DD010u;
        goto label_1dd010;
    }
    ctx->pc = 0x1DD008u;
    SET_GPR_U32(ctx, 31, 0x1DD010u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DD010u;
label_1dd010:
    // 0x1dd010: 0xc077880  jal         func_1DE200
label_1dd014:
    if (ctx->pc == 0x1DD014u) {
        ctx->pc = 0x1DD018u;
        goto label_1dd018;
    }
    ctx->pc = 0x1DD010u;
    SET_GPR_U32(ctx, 31, 0x1DD018u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DD018u;
label_1dd018:
    // 0x1dd018: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dd01c:
    // 0x1dd01c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dd020:
    if (ctx->pc == 0x1DD020u) {
        ctx->pc = 0x1DD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD01Cu;
        // 0x1dd020: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD024u;
        goto label_1dd024;
    }
    ctx->pc = 0x1DD01Cu;
    {
        const bool branch_taken_0x1dd01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD01Cu;
        // 0x1dd020: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd01c) {
            ctx->pc = 0x1DD0F0u;
            goto label_1dd0f0;
        }
    }
    ctx->pc = 0x1DD024u;
label_1dd024:
    // 0x1dd024: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd028:
    // 0x1dd028: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd02c:
    // 0x1dd02c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd030:
    // 0x1dd030: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dd034:
    // 0x1dd034: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dd038:
    // 0x1dd038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd03c:
    // 0x1dd03c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd040:
    // 0x1dd040: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd044:
    // 0x1dd044: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd048:
    // 0x1dd048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd04c:
    // 0x1dd04c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd050:
    // 0x1dd050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd054:
    // 0x1dd054: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd058:
    // 0x1dd058: 0xc066c72  jal         func_19B1C8
label_1dd05c:
    if (ctx->pc == 0x1DD05Cu) {
        ctx->pc = 0x1DD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD058u;
        // 0x1dd05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD060u;
        goto label_1dd060;
    }
    ctx->pc = 0x1DD058u;
    SET_GPR_U32(ctx, 31, 0x1DD060u);
    ctx->pc = 0x1DD05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD058u;
    // 0x1dd05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD060u;
label_1dd060:
    // 0x1dd060: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dd064:
    // 0x1dd064: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd068:
    // 0x1dd068: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd06c:
    // 0x1dd06c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd070:
    // 0x1dd070: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dd074:
    // 0x1dd074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd078:
    // 0x1dd078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd07c:
    // 0x1dd07c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd080:
    // 0x1dd080: 0xc070e2c  jal         func_1C38B0
label_1dd084:
    if (ctx->pc == 0x1DD084u) {
        ctx->pc = 0x1DD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD080u;
        // 0x1dd084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD088u;
        goto label_1dd088;
    }
    ctx->pc = 0x1DD080u;
    SET_GPR_U32(ctx, 31, 0x1DD088u);
    ctx->pc = 0x1DD084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD080u;
    // 0x1dd084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD088u;
label_1dd088:
    // 0x1dd088: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd08c:
    // 0x1dd08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd090:
    // 0x1dd090: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd094:
    // 0x1dd094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd098:
    // 0x1dd098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd09c:
    // 0x1dd09c: 0xc066c72  jal         func_19B1C8
label_1dd0a0:
    if (ctx->pc == 0x1DD0A0u) {
        ctx->pc = 0x1DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD09Cu;
        // 0x1dd0a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0A4u;
        goto label_1dd0a4;
    }
    ctx->pc = 0x1DD09Cu;
    SET_GPR_U32(ctx, 31, 0x1DD0A4u);
    ctx->pc = 0x1DD0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD09Cu;
    // 0x1dd0a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD0A4u;
label_1dd0a4:
    // 0x1dd0a4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd0a8:
    // 0x1dd0a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dd0ac:
    if (ctx->pc == 0x1DD0ACu) {
        ctx->pc = 0x1DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A8u;
        // 0x1dd0ac: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0B0u;
        goto label_1dd0b0;
    }
    ctx->pc = 0x1DD0A8u;
    {
        const bool branch_taken_0x1dd0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A8u;
        // 0x1dd0ac: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0a8) {
            ctx->pc = 0x1DD0F0u;
            goto label_1dd0f0;
        }
    }
    ctx->pc = 0x1DD0B0u;
label_1dd0b0:
    // 0x1dd0b0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd0b4:
    // 0x1dd0b4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd0b8:
    // 0x1dd0b8: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd0bc:
    // 0x1dd0bc: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dd0c0:
    // 0x1dd0c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd0c4:
    // 0x1dd0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd0c8:
    // 0x1dd0c8: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd0cc:
    // 0x1dd0cc: 0xc070e2c  jal         func_1C38B0
label_1dd0d0:
    if (ctx->pc == 0x1DD0D0u) {
        ctx->pc = 0x1DD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0CCu;
        // 0x1dd0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0D4u;
        goto label_1dd0d4;
    }
    ctx->pc = 0x1DD0CCu;
    SET_GPR_U32(ctx, 31, 0x1DD0D4u);
    ctx->pc = 0x1DD0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0CCu;
    // 0x1dd0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD0D4u;
label_1dd0d4:
    // 0x1dd0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0d8:
    // 0x1dd0d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0dc:
    // 0x1dd0dc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd0e0:
    // 0x1dd0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0e4:
    // 0x1dd0e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0e8:
    // 0x1dd0e8: 0xc066c72  jal         func_19B1C8
label_1dd0ec:
    if (ctx->pc == 0x1DD0ECu) {
        ctx->pc = 0x1DD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0E8u;
        // 0x1dd0ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0F0u;
        goto label_1dd0f0;
    }
    ctx->pc = 0x1DD0E8u;
    SET_GPR_U32(ctx, 31, 0x1DD0F0u);
    ctx->pc = 0x1DD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0E8u;
    // 0x1dd0ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD0F0u;
label_1dd0f0:
    // 0x1dd0f0: 0xc07a86c  jal         func_1EA1B0
label_1dd0f4:
    if (ctx->pc == 0x1DD0F4u) {
        ctx->pc = 0x1DD0F8u;
        goto label_1dd0f8;
    }
    ctx->pc = 0x1DD0F0u;
    SET_GPR_U32(ctx, 31, 0x1DD0F8u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DD0F8u;
label_1dd0f8:
    // 0x1dd0f8: 0xc04e120  jal         func_138480
label_1dd0fc:
    if (ctx->pc == 0x1DD0FCu) {
        ctx->pc = 0x1DD100u;
        goto label_1dd100;
    }
    ctx->pc = 0x1DD0F8u;
    SET_GPR_U32(ctx, 31, 0x1DD100u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DD0F8u, 0x1DD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD100u;
label_1dd100:
    // 0x1dd100: 0xc05b578  jal         func_16D5E0
label_1dd104:
    if (ctx->pc == 0x1DD104u) {
        ctx->pc = 0x1DD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD100u;
        // 0x1dd104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD108u;
        goto label_1dd108;
    }
    ctx->pc = 0x1DD100u;
    SET_GPR_U32(ctx, 31, 0x1DD108u);
    ctx->pc = 0x1DD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD100u;
    // 0x1dd104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DD100u, 0x1DD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD108u;
label_1dd108:
    // 0x1dd108: 0xc060258  jal         func_180960
label_1dd10c:
    if (ctx->pc == 0x1DD10Cu) {
        ctx->pc = 0x1DD110u;
        goto label_1dd110;
    }
    ctx->pc = 0x1DD108u;
    SET_GPR_U32(ctx, 31, 0x1DD110u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DD110u;
label_1dd110:
    // 0x1dd110: 0xc07ab38  jal         func_1EACE0
label_1dd114:
    if (ctx->pc == 0x1DD114u) {
        ctx->pc = 0x1DD118u;
        goto label_1dd118;
    }
    ctx->pc = 0x1DD110u;
    SET_GPR_U32(ctx, 31, 0x1DD118u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd11c:
    // 0x1dd11c: 0x1443ff52  bne         $v0, $v1, . + 4 + (-0xAE << 2)
label_1dd120:
    if (ctx->pc == 0x1DD120u) {
        ctx->pc = 0x1DD124u;
        goto label_1dd124;
    }
    ctx->pc = 0x1DD11Cu;
    {
        const bool branch_taken_0x1dd11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd11c) {
            ctx->pc = 0x1DCE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dce68; return; }
        }
    }
    ctx->pc = 0x1DD124u;
label_1dd124:
    // 0x1dd124: 0x0  nop
    ctx->pc = 0x1dd124u;
    // NOP
label_1dd128:
    // 0x1dd128: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dd12c:
    // 0x1dd12c: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x1dd12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
label_1dd130:
    // 0x1dd130: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1dd134:
    if (ctx->pc == 0x1DD134u) {
        ctx->pc = 0x1DD138u;
        goto label_1dd138;
    }
    ctx->pc = 0x1DD130u;
    {
        const bool branch_taken_0x1dd130 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd130) {
            ctx->pc = 0x1DD140u;
            goto label_1dd140;
        }
    }
    ctx->pc = 0x1DD138u;
label_1dd138:
    // 0x1dd138: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1dd13c:
    if (ctx->pc == 0x1DD13Cu) {
        ctx->pc = 0x1DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD138u;
        // 0x1dd13c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD140u;
        goto label_1dd140;
    }
    ctx->pc = 0x1DD138u;
    {
        const bool branch_taken_0x1dd138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD138u;
        // 0x1dd13c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd138) {
            ctx->pc = 0x1DD430u;
            goto label_1dd430;
        }
    }
    ctx->pc = 0x1DD140u;
label_1dd140:
    // 0x1dd140: 0xc07aaa4  jal         func_1EAA90
label_1dd144:
    if (ctx->pc == 0x1DD144u) {
        ctx->pc = 0x1DD148u;
        goto label_1dd148;
    }
    ctx->pc = 0x1DD140u;
    SET_GPR_U32(ctx, 31, 0x1DD148u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x1DD148u;
label_1dd148:
    // 0x1dd148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd14c:
    // 0x1dd14c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1dd150:
    if (ctx->pc == 0x1DD150u) {
        ctx->pc = 0x1DD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD14Cu;
        // 0x1dd150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD154u;
        goto label_1dd154;
    }
    ctx->pc = 0x1DD14Cu;
    {
        const bool branch_taken_0x1dd14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD14Cu;
        // 0x1dd150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd14c) {
            ctx->pc = 0x1DD164u;
            goto label_1dd164;
        }
    }
    ctx->pc = 0x1DD154u;
label_1dd154:
    // 0x1dd154: 0xc07aaa0  jal         func_1EAA80
label_1dd158:
    if (ctx->pc == 0x1DD158u) {
        ctx->pc = 0x1DD15Cu;
        goto label_1dd15c;
    }
    ctx->pc = 0x1DD154u;
    SET_GPR_U32(ctx, 31, 0x1DD15Cu);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x1DD15Cu;
label_1dd15c:
    // 0x1dd15c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_1dd160:
    if (ctx->pc == 0x1DD160u) {
        ctx->pc = 0x1DD164u;
        goto label_1dd164;
    }
    ctx->pc = 0x1DD15Cu;
    {
        const bool branch_taken_0x1dd15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd15c) {
            ctx->pc = 0x1DD430u;
            goto label_1dd430;
        }
    }
    ctx->pc = 0x1DD164u;
label_1dd164:
    // 0x1dd164: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1dd168:
    if (ctx->pc == 0x1DD168u) {
        ctx->pc = 0x1DD16Cu;
        goto label_1dd16c;
    }
    ctx->pc = 0x1DD164u;
    {
        const bool branch_taken_0x1dd164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd164) {
            ctx->pc = 0x1DD180u;
            goto label_1dd180;
        }
    }
    ctx->pc = 0x1DD16Cu;
label_1dd16c:
    // 0x1dd16c: 0xc07aaa0  jal         func_1EAA80
label_1dd170:
    if (ctx->pc == 0x1DD170u) {
        ctx->pc = 0x1DD174u;
        goto label_1dd174;
    }
    ctx->pc = 0x1DD16Cu;
    SET_GPR_U32(ctx, 31, 0x1DD174u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x1DD174u;
label_1dd174:
    // 0x1dd174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd178:
    // 0x1dd178: 0x100000ad  b           . + 4 + (0xAD << 2)
label_1dd17c:
    if (ctx->pc == 0x1DD17Cu) {
        ctx->pc = 0x1DD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD178u;
        // 0x1dd17c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD180u;
        goto label_1dd180;
    }
    ctx->pc = 0x1DD178u;
    {
        const bool branch_taken_0x1dd178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD178u;
        // 0x1dd17c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd178) {
            ctx->pc = 0x1DD430u;
            goto label_1dd430;
        }
    }
    ctx->pc = 0x1DD180u;
label_1dd180:
    // 0x1dd180: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dd180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dd184:
    // 0x1dd184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dd188:
    if (ctx->pc == 0x1DD188u) {
        ctx->pc = 0x1DD18Cu;
        goto label_1dd18c;
    }
    ctx->pc = 0x1DD184u;
    {
        const bool branch_taken_0x1dd184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd184) {
            ctx->pc = 0x1DD194u;
            goto label_1dd194;
        }
    }
    ctx->pc = 0x1DD18Cu;
label_1dd18c:
    // 0x1dd18c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd190:
    if (ctx->pc == 0x1DD190u) {
        ctx->pc = 0x1DD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD18Cu;
        // 0x1dd190: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD194u;
        goto label_1dd194;
    }
    ctx->pc = 0x1DD18Cu;
    {
        const bool branch_taken_0x1dd18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD18Cu;
        // 0x1dd190: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd18c) {
            ctx->pc = 0x1DD1A4u;
            goto label_1dd1a4;
        }
    }
    ctx->pc = 0x1DD194u;
label_1dd194:
    // 0x1dd194: 0x0  nop
    ctx->pc = 0x1dd194u;
    // NOP
label_1dd198:
    // 0x1dd198: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dd19c:
    // 0x1dd19c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd1a0:
    // 0x1dd1a0: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dd1a4:
    // 0x1dd1a4: 0x0  nop
    ctx->pc = 0x1dd1a4u;
    // NOP
label_1dd1a8:
    // 0x1dd1a8: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dd1ac:
    // 0x1dd1ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd1b0:
    if (ctx->pc == 0x1DD1B0u) {
        ctx->pc = 0x1DD1B4u;
        goto label_1dd1b4;
    }
    ctx->pc = 0x1DD1ACu;
    {
        const bool branch_taken_0x1dd1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1ac) {
            ctx->pc = 0x1DD1C0u;
            goto label_1dd1c0;
        }
    }
    ctx->pc = 0x1DD1B4u;
label_1dd1b4:
    // 0x1dd1b4: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dd1b8:
    // 0x1dd1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd1bc:
    // 0x1dd1bc: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dd1c0:
    // 0x1dd1c0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dd1c4:
    // 0x1dd1c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dd1c8:
    if (ctx->pc == 0x1DD1C8u) {
        ctx->pc = 0x1DD1CCu;
        goto label_1dd1cc;
    }
    ctx->pc = 0x1DD1C4u;
    {
        const bool branch_taken_0x1dd1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1c4) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD1CCu;
label_1dd1cc:
    // 0x1dd1cc: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dd1d0:
    // 0x1dd1d0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dd1d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dd1d4:
    // 0x1dd1d4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dd1d8:
    if (ctx->pc == 0x1DD1D8u) {
        ctx->pc = 0x1DD1DCu;
        goto label_1dd1dc;
    }
    ctx->pc = 0x1DD1D4u;
    {
        const bool branch_taken_0x1dd1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1d4) {
            ctx->pc = 0x1DD1FCu;
            goto label_1dd1fc;
        }
    }
    ctx->pc = 0x1DD1DCu;
label_1dd1dc:
    // 0x1dd1dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dd1e0:
    // 0x1dd1e0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dd1e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dd1e4:
    // 0x1dd1e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dd1e8:
    if (ctx->pc == 0x1DD1E8u) {
        ctx->pc = 0x1DD1ECu;
        goto label_1dd1ec;
    }
    ctx->pc = 0x1DD1E4u;
    {
        const bool branch_taken_0x1dd1e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1e4) {
            ctx->pc = 0x1DD1F4u;
            goto label_1dd1f4;
        }
    }
    ctx->pc = 0x1DD1ECu;
label_1dd1ec:
    // 0x1dd1ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dd1f0:
    if (ctx->pc == 0x1DD1F0u) {
        ctx->pc = 0x1DD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1ECu;
        // 0x1dd1f0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1F4u;
        goto label_1dd1f4;
    }
    ctx->pc = 0x1DD1ECu;
    {
        const bool branch_taken_0x1dd1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1ECu;
        // 0x1dd1f0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1ec) {
            ctx->pc = 0x1DD1FCu;
            goto label_1dd1fc;
        }
    }
    ctx->pc = 0x1DD1F4u;
label_1dd1f4:
    // 0x1dd1f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dd1f8:
    // 0x1dd1f8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dd1fc:
    // 0x1dd1fc: 0x0  nop
    ctx->pc = 0x1dd1fcu;
    // NOP
label_1dd200:
    // 0x1dd200: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dd204:
    // 0x1dd204: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dd208:
    if (ctx->pc == 0x1DD208u) {
        ctx->pc = 0x1DD20Cu;
        goto label_1dd20c;
    }
    ctx->pc = 0x1DD204u;
    {
        const bool branch_taken_0x1dd204 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dd204) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD20Cu;
label_1dd20c:
    // 0x1dd20c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dd210:
    // 0x1dd210: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dd214:
    // 0x1dd214: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dd218:
    // 0x1dd218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd21c:
    if (ctx->pc == 0x1DD21Cu) {
        ctx->pc = 0x1DD220u;
        goto label_1dd220;
    }
    ctx->pc = 0x1DD218u;
    {
        const bool branch_taken_0x1dd218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd218) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD220u;
label_1dd220:
    // 0x1dd220: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dd224:
    // 0x1dd224: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dd224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dd228:
    // 0x1dd228: 0xc077a7c  jal         func_1DE9F0
label_1dd22c:
    if (ctx->pc == 0x1DD22Cu) {
        ctx->pc = 0x1DD230u;
        goto label_1dd230;
    }
    ctx->pc = 0x1DD228u;
    SET_GPR_U32(ctx, 31, 0x1DD230u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DD230u;
label_1dd230:
    // 0x1dd230: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dd234:
    // 0x1dd234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd238:
    // 0x1dd238: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dd23c:
    if (ctx->pc == 0x1DD23Cu) {
        ctx->pc = 0x1DD240u;
        goto label_1dd240;
    }
    ctx->pc = 0x1DD238u;
    {
        const bool branch_taken_0x1dd238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd238) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD240u;
label_1dd240:
    // 0x1dd240: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd244:
    // 0x1dd244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd248:
    // 0x1dd248: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dd24c:
    if (ctx->pc == 0x1DD24Cu) {
        ctx->pc = 0x1DD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD248u;
        // 0x1dd24c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD250u;
        goto label_1dd250;
    }
    ctx->pc = 0x1DD248u;
    {
        const bool branch_taken_0x1dd248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD248u;
        // 0x1dd24c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd248) {
            ctx->pc = 0x1DD26Cu;
            goto label_1dd26c;
        }
    }
    ctx->pc = 0x1DD250u;
label_1dd250:
    // 0x1dd250: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd254:
    // 0x1dd254: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dd254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dd258:
    // 0x1dd258: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dd25c:
    if (ctx->pc == 0x1DD25Cu) {
        ctx->pc = 0x1DD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD258u;
        // 0x1dd25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD260u;
        goto label_1dd260;
    }
    ctx->pc = 0x1DD258u;
    {
        const bool branch_taken_0x1dd258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD258u;
        // 0x1dd25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd258) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD260u;
label_1dd260:
    // 0x1dd260: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd264:
    // 0x1dd264: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dd268:
    if (ctx->pc == 0x1DD268u) {
        ctx->pc = 0x1DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD264u;
        // 0x1dd268: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD26Cu;
        goto label_1dd26c;
    }
    ctx->pc = 0x1DD264u;
    {
        const bool branch_taken_0x1dd264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD264u;
        // 0x1dd268: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd264) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD26Cu;
label_1dd26c:
    // 0x1dd26c: 0x0  nop
    ctx->pc = 0x1dd26cu;
    // NOP
label_1dd270:
    // 0x1dd270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd274:
    // 0x1dd274: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dd278:
    if (ctx->pc == 0x1DD278u) {
        ctx->pc = 0x1DD27Cu;
        goto label_1dd27c;
    }
    ctx->pc = 0x1DD274u;
    {
        const bool branch_taken_0x1dd274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd274) {
            ctx->pc = 0x1DD298u;
            goto label_1dd298;
        }
    }
    ctx->pc = 0x1DD27Cu;
label_1dd27c:
    // 0x1dd27c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd280:
    // 0x1dd280: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dd280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dd284:
    // 0x1dd284: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dd288:
    if (ctx->pc == 0x1DD288u) {
        ctx->pc = 0x1DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD284u;
        // 0x1dd288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD28Cu;
        goto label_1dd28c;
    }
    ctx->pc = 0x1DD284u;
    {
        const bool branch_taken_0x1dd284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD284u;
        // 0x1dd288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd284) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD28Cu;
label_1dd28c:
    // 0x1dd28c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd28cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd290:
    // 0x1dd290: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dd294:
    if (ctx->pc == 0x1DD294u) {
        ctx->pc = 0x1DD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD290u;
        // 0x1dd294: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD298u;
        goto label_1dd298;
    }
    ctx->pc = 0x1DD290u;
    {
        const bool branch_taken_0x1dd290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD290u;
        // 0x1dd294: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd290) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD298u;
label_1dd298:
    // 0x1dd298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd29c:
    // 0x1dd29c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dd2a0:
    if (ctx->pc == 0x1DD2A0u) {
        ctx->pc = 0x1DD2A4u;
        goto label_1dd2a4;
    }
    ctx->pc = 0x1DD29Cu;
    {
        const bool branch_taken_0x1dd29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd29c) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD2A4u;
label_1dd2a4:
    // 0x1dd2a4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd2a8:
    // 0x1dd2a8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dd2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dd2ac:
    // 0x1dd2ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd2b0:
    if (ctx->pc == 0x1DD2B0u) {
        ctx->pc = 0x1DD2B4u;
        goto label_1dd2b4;
    }
    ctx->pc = 0x1DD2ACu;
    {
        const bool branch_taken_0x1dd2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2ac) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD2B4u;
label_1dd2b4:
    // 0x1dd2b4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dd2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dd2b8:
    // 0x1dd2b8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd2bc:
    // 0x1dd2bc: 0x0  nop
    ctx->pc = 0x1dd2bcu;
    // NOP
label_1dd2c0:
    // 0x1dd2c0: 0xc07a9d8  jal         func_1EA760
label_1dd2c4:
    if (ctx->pc == 0x1DD2C4u) {
        ctx->pc = 0x1DD2C8u;
        goto label_1dd2c8;
    }
    ctx->pc = 0x1DD2C0u;
    SET_GPR_U32(ctx, 31, 0x1DD2C8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DD2C8u;
label_1dd2c8:
    // 0x1dd2c8: 0xc04e168  jal         func_1385A0
label_1dd2cc:
    if (ctx->pc == 0x1DD2CCu) {
        ctx->pc = 0x1DD2D0u;
        goto label_1dd2d0;
    }
    ctx->pc = 0x1DD2C8u;
    SET_GPR_U32(ctx, 31, 0x1DD2D0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DD2C8u, 0x1DD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2D0u;
label_1dd2d0:
    // 0x1dd2d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dd2d4:
    // 0x1dd2d4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd2d8:
    // 0x1dd2d8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dd2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dd2dc:
    // 0x1dd2dc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd2e0:
    // 0x1dd2e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd2e4:
    // 0x1dd2e4: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dd2e8:
    // 0x1dd2e8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dd2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd2ec:
    // 0x1dd2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2f0:
    // 0x1dd2f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2f4:
    // 0x1dd2f4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd2f8:
    // 0x1dd2f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd2fc:
    // 0x1dd2fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd300:
    // 0x1dd300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd304:
    // 0x1dd304: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd308:
    // 0x1dd308: 0xc066c72  jal         func_19B1C8
label_1dd30c:
    if (ctx->pc == 0x1DD30Cu) {
        ctx->pc = 0x1DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD308u;
        // 0x1dd30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD310u;
        goto label_1dd310;
    }
    ctx->pc = 0x1DD308u;
    SET_GPR_U32(ctx, 31, 0x1DD310u);
    ctx->pc = 0x1DD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD308u;
    // 0x1dd30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD310u;
label_1dd310:
    // 0x1dd310: 0xc077e84  jal         func_1DFA10
label_1dd314:
    if (ctx->pc == 0x1DD314u) {
        ctx->pc = 0x1DD318u;
        goto label_1dd318;
    }
    ctx->pc = 0x1DD310u;
    SET_GPR_U32(ctx, 31, 0x1DD318u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DD318u;
label_1dd318:
    // 0x1dd318: 0xc077d90  jal         func_1DF640
label_1dd31c:
    if (ctx->pc == 0x1DD31Cu) {
        ctx->pc = 0x1DD320u;
        goto label_1dd320;
    }
    ctx->pc = 0x1DD318u;
    SET_GPR_U32(ctx, 31, 0x1DD320u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DD320u;
label_1dd320:
    // 0x1dd320: 0xc077ab4  jal         func_1DEAD0
label_1dd324:
    if (ctx->pc == 0x1DD324u) {
        ctx->pc = 0x1DD328u;
        goto label_1dd328;
    }
    ctx->pc = 0x1DD320u;
    SET_GPR_U32(ctx, 31, 0x1DD328u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DD328u;
label_1dd328:
    // 0x1dd328: 0xc077880  jal         func_1DE200
label_1dd32c:
    if (ctx->pc == 0x1DD32Cu) {
        ctx->pc = 0x1DD330u;
        goto label_1dd330;
    }
    ctx->pc = 0x1DD328u;
    SET_GPR_U32(ctx, 31, 0x1DD330u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DD330u;
label_1dd330:
    // 0x1dd330: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dd334:
    // 0x1dd334: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dd338:
    if (ctx->pc == 0x1DD338u) {
        ctx->pc = 0x1DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD334u;
        // 0x1dd338: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD33Cu;
        goto label_1dd33c;
    }
    ctx->pc = 0x1DD334u;
    {
        const bool branch_taken_0x1dd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD334u;
        // 0x1dd338: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd334) {
            ctx->pc = 0x1DD408u;
            goto label_1dd408;
        }
    }
    ctx->pc = 0x1DD33Cu;
label_1dd33c:
    // 0x1dd33c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd340:
    // 0x1dd340: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd344:
    // 0x1dd344: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd348:
    // 0x1dd348: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dd34c:
    // 0x1dd34c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dd34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dd350:
    // 0x1dd350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd354:
    // 0x1dd354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd358:
    // 0x1dd358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd35c:
    // 0x1dd35c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd360:
    // 0x1dd360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd364:
    // 0x1dd364: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd368:
    // 0x1dd368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd36c:
    // 0x1dd36c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd370:
    // 0x1dd370: 0xc066c72  jal         func_19B1C8
label_1dd374:
    if (ctx->pc == 0x1DD374u) {
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD378u;
        goto label_1dd378;
    }
    ctx->pc = 0x1DD370u;
    SET_GPR_U32(ctx, 31, 0x1DD378u);
    ctx->pc = 0x1DD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD370u;
    // 0x1dd374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD378u;
label_1dd378:
    // 0x1dd378: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dd378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dd37c:
    // 0x1dd37c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd380:
    // 0x1dd380: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd384:
    // 0x1dd384: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd388:
    // 0x1dd388: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dd38c:
    // 0x1dd38c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd390:
    // 0x1dd390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd394:
    // 0x1dd394: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd398:
    // 0x1dd398: 0xc070e2c  jal         func_1C38B0
label_1dd39c:
    if (ctx->pc == 0x1DD39Cu) {
        ctx->pc = 0x1DD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD398u;
        // 0x1dd39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3A0u;
        goto label_1dd3a0;
    }
    ctx->pc = 0x1DD398u;
    SET_GPR_U32(ctx, 31, 0x1DD3A0u);
    ctx->pc = 0x1DD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD398u;
    // 0x1dd39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD3A0u;
label_1dd3a0:
    // 0x1dd3a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3a4:
    // 0x1dd3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3a8:
    // 0x1dd3a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd3ac:
    // 0x1dd3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b0:
    // 0x1dd3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b4:
    // 0x1dd3b4: 0xc066c72  jal         func_19B1C8
label_1dd3b8:
    if (ctx->pc == 0x1DD3B8u) {
        ctx->pc = 0x1DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3B4u;
        // 0x1dd3b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3BCu;
        goto label_1dd3bc;
    }
    ctx->pc = 0x1DD3B4u;
    SET_GPR_U32(ctx, 31, 0x1DD3BCu);
    ctx->pc = 0x1DD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3B4u;
    // 0x1dd3b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD3BCu;
label_1dd3bc:
    // 0x1dd3bc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd3c0:
    // 0x1dd3c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dd3c4:
    if (ctx->pc == 0x1DD3C4u) {
        ctx->pc = 0x1DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C0u;
        // 0x1dd3c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3C8u;
        goto label_1dd3c8;
    }
    ctx->pc = 0x1DD3C0u;
    {
        const bool branch_taken_0x1dd3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C0u;
        // 0x1dd3c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3c0) {
            ctx->pc = 0x1DD408u;
            goto label_1dd408;
        }
    }
    ctx->pc = 0x1DD3C8u;
label_1dd3c8:
    // 0x1dd3c8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd3cc:
    // 0x1dd3cc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd3d0:
    // 0x1dd3d0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd3d4:
    // 0x1dd3d4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dd3d8:
    // 0x1dd3d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd3dc:
    // 0x1dd3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd3e0:
    // 0x1dd3e0: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dd3e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd3e4:
    // 0x1dd3e4: 0xc070e2c  jal         func_1C38B0
label_1dd3e8:
    if (ctx->pc == 0x1DD3E8u) {
        ctx->pc = 0x1DD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3E4u;
        // 0x1dd3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3ECu;
        goto label_1dd3ec;
    }
    ctx->pc = 0x1DD3E4u;
    SET_GPR_U32(ctx, 31, 0x1DD3ECu);
    ctx->pc = 0x1DD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E4u;
    // 0x1dd3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD3ECu;
label_1dd3ec:
    // 0x1dd3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3f0:
    // 0x1dd3f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3f4:
    // 0x1dd3f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd3f8:
    // 0x1dd3f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3fc:
    // 0x1dd3fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd3fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd400:
    // 0x1dd400: 0xc066c72  jal         func_19B1C8
label_1dd404:
    if (ctx->pc == 0x1DD404u) {
        ctx->pc = 0x1DD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD400u;
        // 0x1dd404: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD408u;
        goto label_1dd408;
    }
    ctx->pc = 0x1DD400u;
    SET_GPR_U32(ctx, 31, 0x1DD408u);
    ctx->pc = 0x1DD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD400u;
    // 0x1dd404: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD408u;
label_1dd408:
    // 0x1dd408: 0xc07a86c  jal         func_1EA1B0
label_1dd40c:
    if (ctx->pc == 0x1DD40Cu) {
        ctx->pc = 0x1DD410u;
        goto label_1dd410;
    }
    ctx->pc = 0x1DD408u;
    SET_GPR_U32(ctx, 31, 0x1DD410u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DD410u;
label_1dd410:
    // 0x1dd410: 0xc04e120  jal         func_138480
label_1dd414:
    if (ctx->pc == 0x1DD414u) {
        ctx->pc = 0x1DD418u;
        goto label_1dd418;
    }
    ctx->pc = 0x1DD410u;
    SET_GPR_U32(ctx, 31, 0x1DD418u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DD410u, 0x1DD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD418u;
label_1dd418:
    // 0x1dd418: 0xc05b578  jal         func_16D5E0
label_1dd41c:
    if (ctx->pc == 0x1DD41Cu) {
        ctx->pc = 0x1DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD418u;
        // 0x1dd41c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD420u;
        goto label_1dd420;
    }
    ctx->pc = 0x1DD418u;
    SET_GPR_U32(ctx, 31, 0x1DD420u);
    ctx->pc = 0x1DD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD418u;
    // 0x1dd41c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DD418u, 0x1DD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD420u;
label_1dd420:
    // 0x1dd420: 0xc060258  jal         func_180960
label_1dd424:
    if (ctx->pc == 0x1DD424u) {
        ctx->pc = 0x1DD428u;
        goto label_1dd428;
    }
    ctx->pc = 0x1DD420u;
    SET_GPR_U32(ctx, 31, 0x1DD428u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DD428u;
label_1dd428:
    // 0x1dd428: 0x1000ff3e  b           . + 4 + (-0xC2 << 2)
label_1dd42c:
    if (ctx->pc == 0x1DD42Cu) {
        ctx->pc = 0x1DD430u;
        goto label_1dd430;
    }
    ctx->pc = 0x1DD428u;
    {
        const bool branch_taken_0x1dd428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd428) {
            ctx->pc = 0x1DD124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd124;
        }
    }
    ctx->pc = 0x1DD430u;
label_1dd430:
    // 0x1dd430: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd434:
    // 0x1dd434: 0x124200b4  beq         $s2, $v0, . + 4 + (0xB4 << 2)
label_1dd438:
    if (ctx->pc == 0x1DD438u) {
        ctx->pc = 0x1DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD434u;
        // 0x1dd438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD43Cu;
        goto label_1dd43c;
    }
    ctx->pc = 0x1DD434u;
    {
        const bool branch_taken_0x1dd434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD434u;
        // 0x1dd438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd434) {
            ctx->pc = 0x1DD708u;
            goto label_1dd708;
        }
    }
    ctx->pc = 0x1DD43Cu;
label_1dd43c:
    // 0x1dd43c: 0xc07ab18  jal         func_1EAC60
label_1dd440:
    if (ctx->pc == 0x1DD440u) {
        ctx->pc = 0x1DD444u;
        goto label_1dd444;
    }
    ctx->pc = 0x1DD43Cu;
    SET_GPR_U32(ctx, 31, 0x1DD444u);
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1DD444u;
label_1dd444:
    // 0x1dd444: 0xc07ab38  jal         func_1EACE0
label_1dd448:
    if (ctx->pc == 0x1DD448u) {
        ctx->pc = 0x1DD44Cu;
        goto label_1dd44c;
    }
    ctx->pc = 0x1DD444u;
    SET_GPR_U32(ctx, 31, 0x1DD44Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DD44Cu;
label_1dd44c:
    // 0x1dd44c: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_1dd450:
    if (ctx->pc == 0x1DD450u) {
        ctx->pc = 0x1DD454u;
        goto label_1dd454;
    }
    ctx->pc = 0x1DD44Cu;
    {
        const bool branch_taken_0x1dd44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd44c) {
            ctx->pc = 0x1DD708u;
            goto label_1dd708;
        }
    }
    ctx->pc = 0x1DD454u;
label_1dd454:
    // 0x1dd454: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dd454u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dd458:
    // 0x1dd458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dd45c:
    if (ctx->pc == 0x1DD45Cu) {
        ctx->pc = 0x1DD460u;
        goto label_1dd460;
    }
    ctx->pc = 0x1DD458u;
    {
        const bool branch_taken_0x1dd458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd458) {
            ctx->pc = 0x1DD468u;
            goto label_1dd468;
        }
    }
    ctx->pc = 0x1DD460u;
label_1dd460:
    // 0x1dd460: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dd464:
    if (ctx->pc == 0x1DD464u) {
        ctx->pc = 0x1DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD460u;
        // 0x1dd464: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD468u;
        goto label_1dd468;
    }
    ctx->pc = 0x1DD460u;
    {
        const bool branch_taken_0x1dd460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD460u;
        // 0x1dd464: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd460) {
            ctx->pc = 0x1DD474u;
            goto label_1dd474;
        }
    }
    ctx->pc = 0x1DD468u;
label_1dd468:
    // 0x1dd468: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dd46c:
    // 0x1dd46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd470:
    // 0x1dd470: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dd474:
    // 0x1dd474: 0x0  nop
    ctx->pc = 0x1dd474u;
    // NOP
label_1dd478:
    // 0x1dd478: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dd47c:
    // 0x1dd47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd480:
    if (ctx->pc == 0x1DD480u) {
        ctx->pc = 0x1DD484u;
        goto label_1dd484;
    }
    ctx->pc = 0x1DD47Cu;
    {
        const bool branch_taken_0x1dd47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd47c) {
            ctx->pc = 0x1DD490u;
            goto label_1dd490;
        }
    }
    ctx->pc = 0x1DD484u;
label_1dd484:
    // 0x1dd484: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dd488:
    // 0x1dd488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd48c:
    // 0x1dd48c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dd490:
    // 0x1dd490: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dd490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dd494:
    // 0x1dd494: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dd498:
    if (ctx->pc == 0x1DD498u) {
        ctx->pc = 0x1DD49Cu;
        goto label_1dd49c;
    }
    ctx->pc = 0x1DD494u;
    {
        const bool branch_taken_0x1dd494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd494) {
            ctx->pc = 0x1DD4F8u;
            goto label_1dd4f8;
        }
    }
    ctx->pc = 0x1DD49Cu;
label_1dd49c:
    // 0x1dd49c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dd4a0:
    // 0x1dd4a0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dd4a4:
    // 0x1dd4a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dd4a8:
    if (ctx->pc == 0x1DD4A8u) {
        ctx->pc = 0x1DD4ACu;
        goto label_1dd4ac;
    }
    ctx->pc = 0x1DD4A4u;
    {
        const bool branch_taken_0x1dd4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4a4) {
            ctx->pc = 0x1DD4CCu;
            goto label_1dd4cc;
        }
    }
    ctx->pc = 0x1DD4ACu;
label_1dd4ac:
    // 0x1dd4ac: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dd4b0:
    // 0x1dd4b0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dd4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dd4b4:
    // 0x1dd4b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dd4b8:
    if (ctx->pc == 0x1DD4B8u) {
        ctx->pc = 0x1DD4BCu;
        goto label_1dd4bc;
    }
    ctx->pc = 0x1DD4B4u;
    {
        const bool branch_taken_0x1dd4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4b4) {
            ctx->pc = 0x1DD4C4u;
            goto label_1dd4c4;
        }
    }
    ctx->pc = 0x1DD4BCu;
label_1dd4bc:
    // 0x1dd4bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dd4c0:
    if (ctx->pc == 0x1DD4C0u) {
        ctx->pc = 0x1DD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4BCu;
        // 0x1dd4c0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD4C4u;
        goto label_1dd4c4;
    }
    ctx->pc = 0x1DD4BCu;
    {
        const bool branch_taken_0x1dd4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4BCu;
        // 0x1dd4c0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4bc) {
            ctx->pc = 0x1DD4CCu;
            goto label_1dd4cc;
        }
    }
    ctx->pc = 0x1DD4C4u;
label_1dd4c4:
    // 0x1dd4c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dd4c8:
    // 0x1dd4c8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dd4cc:
    // 0x1dd4cc: 0x0  nop
    ctx->pc = 0x1dd4ccu;
    // NOP
label_1dd4d0:
    // 0x1dd4d0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dd4d4:
    // 0x1dd4d4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dd4d8:
    if (ctx->pc == 0x1DD4D8u) {
        ctx->pc = 0x1DD4DCu;
        goto label_1dd4dc;
    }
    ctx->pc = 0x1DD4D4u;
    {
        const bool branch_taken_0x1dd4d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dd4d4) {
            ctx->pc = 0x1DD4F8u;
            goto label_1dd4f8;
        }
    }
    ctx->pc = 0x1DD4DCu;
label_1dd4dc:
    // 0x1dd4dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dd4e0:
    // 0x1dd4e0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dd4e4:
    // 0x1dd4e4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dd4e8:
    // 0x1dd4e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd4ec:
    if (ctx->pc == 0x1DD4ECu) {
        ctx->pc = 0x1DD4F0u;
        goto label_1dd4f0;
    }
    ctx->pc = 0x1DD4E8u;
    {
        const bool branch_taken_0x1dd4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4e8) {
            ctx->pc = 0x1DD4F8u;
            goto label_1dd4f8;
        }
    }
    ctx->pc = 0x1DD4F0u;
label_1dd4f0:
    // 0x1dd4f0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dd4f4:
    // 0x1dd4f4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dd4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dd4f8:
    // 0x1dd4f8: 0xc077a7c  jal         func_1DE9F0
label_1dd4fc:
    if (ctx->pc == 0x1DD4FCu) {
        ctx->pc = 0x1DD500u;
        goto label_1dd500;
    }
    ctx->pc = 0x1DD4F8u;
    SET_GPR_U32(ctx, 31, 0x1DD500u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DD500u;
label_1dd500:
    // 0x1dd500: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dd504:
    // 0x1dd504: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd508:
    // 0x1dd508: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dd50c:
    if (ctx->pc == 0x1DD50Cu) {
        ctx->pc = 0x1DD510u;
        goto label_1dd510;
    }
    ctx->pc = 0x1DD508u;
    {
        const bool branch_taken_0x1dd508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd508) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD510u;
label_1dd510:
    // 0x1dd510: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd514:
    // 0x1dd514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd518:
    // 0x1dd518: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dd51c:
    if (ctx->pc == 0x1DD51Cu) {
        ctx->pc = 0x1DD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD518u;
        // 0x1dd51c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD520u;
        goto label_1dd520;
    }
    ctx->pc = 0x1DD518u;
    {
        const bool branch_taken_0x1dd518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD518u;
        // 0x1dd51c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd518) {
            ctx->pc = 0x1DD53Cu;
            goto label_1dd53c;
        }
    }
    ctx->pc = 0x1DD520u;
label_1dd520:
    // 0x1dd520: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd524:
    // 0x1dd524: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dd524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dd528:
    // 0x1dd528: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dd52c:
    if (ctx->pc == 0x1DD52Cu) {
        ctx->pc = 0x1DD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD528u;
        // 0x1dd52c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD530u;
        goto label_1dd530;
    }
    ctx->pc = 0x1DD528u;
    {
        const bool branch_taken_0x1dd528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD528u;
        // 0x1dd52c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd528) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD530u;
label_1dd530:
    // 0x1dd530: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd534:
    // 0x1dd534: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dd538:
    if (ctx->pc == 0x1DD538u) {
        ctx->pc = 0x1DD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD534u;
        // 0x1dd538: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD53Cu;
        goto label_1dd53c;
    }
    ctx->pc = 0x1DD534u;
    {
        const bool branch_taken_0x1dd534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD534u;
        // 0x1dd538: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd534) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD53Cu;
label_1dd53c:
    // 0x1dd53c: 0x0  nop
    ctx->pc = 0x1dd53cu;
    // NOP
label_1dd540:
    // 0x1dd540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd544:
    // 0x1dd544: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dd548:
    if (ctx->pc == 0x1DD548u) {
        ctx->pc = 0x1DD54Cu;
        goto label_1dd54c;
    }
    ctx->pc = 0x1DD544u;
    {
        const bool branch_taken_0x1dd544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd544) {
            ctx->pc = 0x1DD568u;
            goto label_1dd568;
        }
    }
    ctx->pc = 0x1DD54Cu;
label_1dd54c:
    // 0x1dd54c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd550:
    // 0x1dd550: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dd550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dd554:
    // 0x1dd554: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dd558:
    if (ctx->pc == 0x1DD558u) {
        ctx->pc = 0x1DD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD554u;
        // 0x1dd558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD55Cu;
        goto label_1dd55c;
    }
    ctx->pc = 0x1DD554u;
    {
        const bool branch_taken_0x1dd554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD554u;
        // 0x1dd558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd554) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD55Cu;
label_1dd55c:
    // 0x1dd55c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd560:
    // 0x1dd560: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dd564:
    if (ctx->pc == 0x1DD564u) {
        ctx->pc = 0x1DD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD560u;
        // 0x1dd564: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD568u;
        goto label_1dd568;
    }
    ctx->pc = 0x1DD560u;
    {
        const bool branch_taken_0x1dd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD560u;
        // 0x1dd564: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd560) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD568u;
label_1dd568:
    // 0x1dd568: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd56c:
    // 0x1dd56c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dd570:
    if (ctx->pc == 0x1DD570u) {
        ctx->pc = 0x1DD574u;
        goto label_1dd574;
    }
    ctx->pc = 0x1DD56Cu;
    {
        const bool branch_taken_0x1dd56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd56c) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD574u;
label_1dd574:
    // 0x1dd574: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd578:
    // 0x1dd578: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dd578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dd57c:
    // 0x1dd57c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd580:
    if (ctx->pc == 0x1DD580u) {
        ctx->pc = 0x1DD584u;
        goto label_1dd584;
    }
    ctx->pc = 0x1DD57Cu;
    {
        const bool branch_taken_0x1dd57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd57c) {
            ctx->pc = 0x1DD58Cu;
            goto label_1dd58c;
        }
    }
    ctx->pc = 0x1DD584u;
label_1dd584:
    // 0x1dd584: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dd584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dd588:
    // 0x1dd588: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd58c:
    // 0x1dd58c: 0x0  nop
    ctx->pc = 0x1dd58cu;
    // NOP
label_1dd590:
    // 0x1dd590: 0xc07a9d8  jal         func_1EA760
label_1dd594:
    if (ctx->pc == 0x1DD594u) {
        ctx->pc = 0x1DD598u;
        goto label_1dd598;
    }
    ctx->pc = 0x1DD590u;
    SET_GPR_U32(ctx, 31, 0x1DD598u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DD598u;
label_1dd598:
    // 0x1dd598: 0xc04e168  jal         func_1385A0
label_1dd59c:
    if (ctx->pc == 0x1DD59Cu) {
        ctx->pc = 0x1DD5A0u;
        goto label_1dd5a0;
    }
    ctx->pc = 0x1DD598u;
    SET_GPR_U32(ctx, 31, 0x1DD5A0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DD598u, 0x1DD5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5A0u;
label_1dd5a0:
    // 0x1dd5a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dd5a4:
    // 0x1dd5a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd5a8:
    // 0x1dd5a8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dd5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dd5ac:
    // 0x1dd5ac: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd5b0:
    // 0x1dd5b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd5b4:
    // 0x1dd5b4: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dd5b8:
    // 0x1dd5b8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dd5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd5bc:
    // 0x1dd5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5c0:
    // 0x1dd5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5c4:
    // 0x1dd5c4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd5c8:
    // 0x1dd5c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd5cc:
    // 0x1dd5cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dd5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd5d0:
    // 0x1dd5d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd5d4:
    // 0x1dd5d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd5d8:
    // 0x1dd5d8: 0xc066c72  jal         func_19B1C8
label_1dd5dc:
    if (ctx->pc == 0x1DD5DCu) {
        ctx->pc = 0x1DD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5D8u;
        // 0x1dd5dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5E0u;
        goto label_1dd5e0;
    }
    ctx->pc = 0x1DD5D8u;
    SET_GPR_U32(ctx, 31, 0x1DD5E0u);
    ctx->pc = 0x1DD5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5D8u;
    // 0x1dd5dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD5E0u;
label_1dd5e0:
    // 0x1dd5e0: 0xc077e84  jal         func_1DFA10
label_1dd5e4:
    if (ctx->pc == 0x1DD5E4u) {
        ctx->pc = 0x1DD5E8u;
        goto label_1dd5e8;
    }
    ctx->pc = 0x1DD5E0u;
    SET_GPR_U32(ctx, 31, 0x1DD5E8u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DD5E8u;
label_1dd5e8:
    // 0x1dd5e8: 0xc077d90  jal         func_1DF640
label_1dd5ec:
    if (ctx->pc == 0x1DD5ECu) {
        ctx->pc = 0x1DD5F0u;
        goto label_1dd5f0;
    }
    ctx->pc = 0x1DD5E8u;
    SET_GPR_U32(ctx, 31, 0x1DD5F0u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DD5F0u;
label_1dd5f0:
    // 0x1dd5f0: 0xc077ab4  jal         func_1DEAD0
label_1dd5f4:
    if (ctx->pc == 0x1DD5F4u) {
        ctx->pc = 0x1DD5F8u;
        goto label_1dd5f8;
    }
    ctx->pc = 0x1DD5F0u;
    SET_GPR_U32(ctx, 31, 0x1DD5F8u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DD5F8u;
label_1dd5f8:
    // 0x1dd5f8: 0xc077880  jal         func_1DE200
label_1dd5fc:
    if (ctx->pc == 0x1DD5FCu) {
        ctx->pc = 0x1DD600u;
        goto label_1dd600;
    }
    ctx->pc = 0x1DD5F8u;
    SET_GPR_U32(ctx, 31, 0x1DD600u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DD600u;
label_1dd600:
    // 0x1dd600: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dd604:
    // 0x1dd604: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dd608:
    if (ctx->pc == 0x1DD608u) {
        ctx->pc = 0x1DD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD604u;
        // 0x1dd608: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD60Cu;
        goto label_1dd60c;
    }
    ctx->pc = 0x1DD604u;
    {
        const bool branch_taken_0x1dd604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD604u;
        // 0x1dd608: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd604) {
            ctx->pc = 0x1DD6D8u;
            goto label_1dd6d8;
        }
    }
    ctx->pc = 0x1DD60Cu;
label_1dd60c:
    // 0x1dd60c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd610:
    // 0x1dd610: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd614:
    // 0x1dd614: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd618:
    // 0x1dd618: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dd61c:
    // 0x1dd61c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dd61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dd620:
    // 0x1dd620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd624:
    // 0x1dd624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd628:
    // 0x1dd628: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd628u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd62c:
    // 0x1dd62c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd630:
    // 0x1dd630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd634:
    // 0x1dd634: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1dd634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd638:
    // 0x1dd638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd63c:
    // 0x1dd63c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd640:
    // 0x1dd640: 0xc066c72  jal         func_19B1C8
label_1dd644:
    if (ctx->pc == 0x1DD644u) {
        ctx->pc = 0x1DD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD640u;
        // 0x1dd644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD648u;
        goto label_1dd648;
    }
    ctx->pc = 0x1DD640u;
    SET_GPR_U32(ctx, 31, 0x1DD648u);
    ctx->pc = 0x1DD644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD640u;
    // 0x1dd644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD648u;
label_1dd648:
    // 0x1dd648: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dd648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dd64c:
    // 0x1dd64c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd650:
    // 0x1dd650: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd654:
    // 0x1dd654: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd658:
    // 0x1dd658: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dd65c:
    // 0x1dd65c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd660:
    // 0x1dd660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd664:
    // 0x1dd664: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1dd664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd668:
    // 0x1dd668: 0xc070e2c  jal         func_1C38B0
label_1dd66c:
    if (ctx->pc == 0x1DD66Cu) {
        ctx->pc = 0x1DD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD668u;
        // 0x1dd66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD670u;
        goto label_1dd670;
    }
    ctx->pc = 0x1DD668u;
    SET_GPR_U32(ctx, 31, 0x1DD670u);
    ctx->pc = 0x1DD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD668u;
    // 0x1dd66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD670u;
label_1dd670:
    // 0x1dd670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd674:
    // 0x1dd674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd678:
    // 0x1dd678: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd67c:
    // 0x1dd67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd680:
    // 0x1dd680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd684:
    // 0x1dd684: 0xc066c72  jal         func_19B1C8
label_1dd688:
    if (ctx->pc == 0x1DD688u) {
        ctx->pc = 0x1DD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD684u;
        // 0x1dd688: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD68Cu;
        goto label_1dd68c;
    }
    ctx->pc = 0x1DD684u;
    SET_GPR_U32(ctx, 31, 0x1DD68Cu);
    ctx->pc = 0x1DD688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD684u;
    // 0x1dd688: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD68Cu;
label_1dd68c:
    // 0x1dd68c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd690:
    // 0x1dd690: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dd694:
    if (ctx->pc == 0x1DD694u) {
        ctx->pc = 0x1DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD690u;
        // 0x1dd694: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD698u;
        goto label_1dd698;
    }
    ctx->pc = 0x1DD690u;
    {
        const bool branch_taken_0x1dd690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD690u;
        // 0x1dd694: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd690) {
            ctx->pc = 0x1DD6D8u;
            goto label_1dd6d8;
        }
    }
    ctx->pc = 0x1DD698u;
label_1dd698:
    // 0x1dd698: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd69c:
    // 0x1dd69c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd6a0:
    // 0x1dd6a0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd6a4:
    // 0x1dd6a4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dd6a8:
    // 0x1dd6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd6ac:
    // 0x1dd6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd6b0:
    // 0x1dd6b0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1dd6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd6b4:
    // 0x1dd6b4: 0xc070e2c  jal         func_1C38B0
label_1dd6b8:
    if (ctx->pc == 0x1DD6B8u) {
        ctx->pc = 0x1DD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6B4u;
        // 0x1dd6b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6BCu;
        goto label_1dd6bc;
    }
    ctx->pc = 0x1DD6B4u;
    SET_GPR_U32(ctx, 31, 0x1DD6BCu);
    ctx->pc = 0x1DD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6B4u;
    // 0x1dd6b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD6BCu;
label_1dd6bc:
    // 0x1dd6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6c0:
    // 0x1dd6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6c4:
    // 0x1dd6c4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd6c8:
    // 0x1dd6c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6cc:
    // 0x1dd6cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6d0:
    // 0x1dd6d0: 0xc066c72  jal         func_19B1C8
label_1dd6d4:
    if (ctx->pc == 0x1DD6D4u) {
        ctx->pc = 0x1DD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D0u;
        // 0x1dd6d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6D8u;
        goto label_1dd6d8;
    }
    ctx->pc = 0x1DD6D0u;
    SET_GPR_U32(ctx, 31, 0x1DD6D8u);
    ctx->pc = 0x1DD6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6D0u;
    // 0x1dd6d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DD6D8u;
label_1dd6d8:
    // 0x1dd6d8: 0xc07a86c  jal         func_1EA1B0
label_1dd6dc:
    if (ctx->pc == 0x1DD6DCu) {
        ctx->pc = 0x1DD6E0u;
        goto label_1dd6e0;
    }
    ctx->pc = 0x1DD6D8u;
    SET_GPR_U32(ctx, 31, 0x1DD6E0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DD6E0u;
label_1dd6e0:
    // 0x1dd6e0: 0xc04e120  jal         func_138480
label_1dd6e4:
    if (ctx->pc == 0x1DD6E4u) {
        ctx->pc = 0x1DD6E8u;
        goto label_1dd6e8;
    }
    ctx->pc = 0x1DD6E0u;
    SET_GPR_U32(ctx, 31, 0x1DD6E8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DD6E0u, 0x1DD6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6E8u;
label_1dd6e8:
    // 0x1dd6e8: 0xc05b578  jal         func_16D5E0
label_1dd6ec:
    if (ctx->pc == 0x1DD6ECu) {
        ctx->pc = 0x1DD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E8u;
        // 0x1dd6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6F0u;
        goto label_1dd6f0;
    }
    ctx->pc = 0x1DD6E8u;
    SET_GPR_U32(ctx, 31, 0x1DD6F0u);
    ctx->pc = 0x1DD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6E8u;
    // 0x1dd6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DD6E8u, 0x1DD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F0u;
label_1dd6f0:
    // 0x1dd6f0: 0xc060258  jal         func_180960
label_1dd6f4:
    if (ctx->pc == 0x1DD6F4u) {
        ctx->pc = 0x1DD6F8u;
        goto label_1dd6f8;
    }
    ctx->pc = 0x1DD6F0u;
    SET_GPR_U32(ctx, 31, 0x1DD6F8u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DD6F8u;
label_1dd6f8:
    // 0x1dd6f8: 0xc07ab38  jal         func_1EACE0
label_1dd6fc:
    if (ctx->pc == 0x1DD6FCu) {
        ctx->pc = 0x1DD700u;
        goto label_1dd700;
    }
    ctx->pc = 0x1DD6F8u;
    SET_GPR_U32(ctx, 31, 0x1DD700u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DD700u;
label_1dd700:
    // 0x1dd700: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_1dd704:
    if (ctx->pc == 0x1DD704u) {
        ctx->pc = 0x1DD708u;
        goto label_1dd708;
    }
    ctx->pc = 0x1DD700u;
    {
        const bool branch_taken_0x1dd700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd700) {
            ctx->pc = 0x1DD454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd454;
        }
    }
    ctx->pc = 0x1DD708u;
label_1dd708:
    // 0x1dd708: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dd708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd70c:
    // 0x1dd70c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd710:
    // 0x1dd710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dd710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd714:
    // 0x1dd714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd718:
    // 0x1dd718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd71c:
    // 0x1dd71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1dd720u;
    return;
}

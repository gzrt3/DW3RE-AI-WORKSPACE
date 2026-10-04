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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1eaf58u: goto label_1eaf58;
        case 0x1eaf5cu: goto label_1eaf5c;
        case 0x1eaf60u: goto label_1eaf60;
        case 0x1eaf64u: goto label_1eaf64;
        case 0x1eaf68u: goto label_1eaf68;
        case 0x1eaf6cu: goto label_1eaf6c;
        case 0x1eaf70u: goto label_1eaf70;
        case 0x1eaf74u: goto label_1eaf74;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf7cu: goto label_1eaf7c;
        case 0x1eaf80u: goto label_1eaf80;
        case 0x1eaf84u: goto label_1eaf84;
        case 0x1eaf88u: goto label_1eaf88;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eaf90u: goto label_1eaf90;
        case 0x1eaf94u: goto label_1eaf94;
        case 0x1eaf98u: goto label_1eaf98;
        case 0x1eaf9cu: goto label_1eaf9c;
        case 0x1eafa0u: goto label_1eafa0;
        case 0x1eafa4u: goto label_1eafa4;
        case 0x1eafa8u: goto label_1eafa8;
        case 0x1eafacu: goto label_1eafac;
        case 0x1eafb0u: goto label_1eafb0;
        case 0x1eafb4u: goto label_1eafb4;
        case 0x1eafb8u: goto label_1eafb8;
        case 0x1eafbcu: goto label_1eafbc;
        case 0x1eafc0u: goto label_1eafc0;
        case 0x1eafc4u: goto label_1eafc4;
        case 0x1eafc8u: goto label_1eafc8;
        case 0x1eafccu: goto label_1eafcc;
        case 0x1eafd0u: goto label_1eafd0;
        case 0x1eafd4u: goto label_1eafd4;
        case 0x1eafd8u: goto label_1eafd8;
        case 0x1eafdcu: goto label_1eafdc;
        case 0x1eafe0u: goto label_1eafe0;
        case 0x1eafe4u: goto label_1eafe4;
        case 0x1eafe8u: goto label_1eafe8;
        case 0x1eafecu: goto label_1eafec;
        case 0x1eaff0u: goto label_1eaff0;
        case 0x1eaff4u: goto label_1eaff4;
        case 0x1eaff8u: goto label_1eaff8;
        case 0x1eaffcu: goto label_1eaffc;
        case 0x1eb000u: goto label_1eb000;
        case 0x1eb004u: goto label_1eb004;
        case 0x1eb008u: goto label_1eb008;
        case 0x1eb00cu: goto label_1eb00c;
        case 0x1eb010u: goto label_1eb010;
        case 0x1eb014u: goto label_1eb014;
        case 0x1eb018u: goto label_1eb018;
        case 0x1eb01cu: goto label_1eb01c;
        case 0x1eb020u: goto label_1eb020;
        case 0x1eb024u: goto label_1eb024;
        case 0x1eb028u: goto label_1eb028;
        case 0x1eb02cu: goto label_1eb02c;
        case 0x1eb030u: goto label_1eb030;
        case 0x1eb034u: goto label_1eb034;
        case 0x1eb038u: goto label_1eb038;
        case 0x1eb03cu: goto label_1eb03c;
        case 0x1eb040u: goto label_1eb040;
        case 0x1eb044u: goto label_1eb044;
        case 0x1eb048u: goto label_1eb048;
        case 0x1eb04cu: goto label_1eb04c;
        case 0x1eb050u: goto label_1eb050;
        case 0x1eb054u: goto label_1eb054;
        case 0x1eb058u: goto label_1eb058;
        case 0x1eb05cu: goto label_1eb05c;
        case 0x1eb060u: goto label_1eb060;
        case 0x1eb064u: goto label_1eb064;
        case 0x1eb068u: goto label_1eb068;
        case 0x1eb06cu: goto label_1eb06c;
        case 0x1eb070u: goto label_1eb070;
        case 0x1eb074u: goto label_1eb074;
        case 0x1eb078u: goto label_1eb078;
        case 0x1eb07cu: goto label_1eb07c;
        case 0x1eb080u: goto label_1eb080;
        case 0x1eb084u: goto label_1eb084;
        case 0x1eb088u: goto label_1eb088;
        case 0x1eb08cu: goto label_1eb08c;
        case 0x1eb090u: goto label_1eb090;
        case 0x1eb094u: goto label_1eb094;
        case 0x1eb098u: goto label_1eb098;
        case 0x1eb09cu: goto label_1eb09c;
        case 0x1eb0a0u: goto label_1eb0a0;
        case 0x1eb0a4u: goto label_1eb0a4;
        case 0x1eb0a8u: goto label_1eb0a8;
        case 0x1eb0acu: goto label_1eb0ac;
        case 0x1eb0b0u: goto label_1eb0b0;
        case 0x1eb0b4u: goto label_1eb0b4;
        case 0x1eb0b8u: goto label_1eb0b8;
        case 0x1eb0bcu: goto label_1eb0bc;
        case 0x1eb0c0u: goto label_1eb0c0;
        case 0x1eb0c4u: goto label_1eb0c4;
        case 0x1eb0c8u: goto label_1eb0c8;
        case 0x1eb0ccu: goto label_1eb0cc;
        case 0x1eb0d0u: goto label_1eb0d0;
        case 0x1eb0d4u: goto label_1eb0d4;
        case 0x1eb0d8u: goto label_1eb0d8;
        case 0x1eb0dcu: goto label_1eb0dc;
        case 0x1eb0e0u: goto label_1eb0e0;
        case 0x1eb0e4u: goto label_1eb0e4;
        case 0x1eb0e8u: goto label_1eb0e8;
        case 0x1eb0ecu: goto label_1eb0ec;
        case 0x1eb0f0u: goto label_1eb0f0;
        case 0x1eb0f4u: goto label_1eb0f4;
        case 0x1eb0f8u: goto label_1eb0f8;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb100u: goto label_1eb100;
        case 0x1eb104u: goto label_1eb104;
        case 0x1eb108u: goto label_1eb108;
        case 0x1eb10cu: goto label_1eb10c;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb114u: goto label_1eb114;
        case 0x1eb118u: goto label_1eb118;
        case 0x1eb11cu: goto label_1eb11c;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb124u: goto label_1eb124;
        case 0x1eb128u: goto label_1eb128;
        case 0x1eb12cu: goto label_1eb12c;
        case 0x1eb130u: goto label_1eb130;
        case 0x1eb134u: goto label_1eb134;
        case 0x1eb138u: goto label_1eb138;
        case 0x1eb13cu: goto label_1eb13c;
        case 0x1eb140u: goto label_1eb140;
        case 0x1eb144u: goto label_1eb144;
        case 0x1eb148u: goto label_1eb148;
        case 0x1eb14cu: goto label_1eb14c;
        case 0x1eb150u: goto label_1eb150;
        case 0x1eb154u: goto label_1eb154;
        case 0x1eb158u: goto label_1eb158;
        case 0x1eb15cu: goto label_1eb15c;
        case 0x1eb160u: goto label_1eb160;
        case 0x1eb164u: goto label_1eb164;
        case 0x1eb168u: goto label_1eb168;
        case 0x1eb16cu: goto label_1eb16c;
        case 0x1eb170u: goto label_1eb170;
        case 0x1eb174u: goto label_1eb174;
        case 0x1eb178u: goto label_1eb178;
        case 0x1eb17cu: goto label_1eb17c;
        case 0x1eb180u: goto label_1eb180;
        case 0x1eb184u: goto label_1eb184;
        case 0x1eb188u: goto label_1eb188;
        case 0x1eb18cu: goto label_1eb18c;
        case 0x1eb190u: goto label_1eb190;
        case 0x1eb194u: goto label_1eb194;
        case 0x1eb198u: goto label_1eb198;
        case 0x1eb19cu: goto label_1eb19c;
        case 0x1eb1a0u: goto label_1eb1a0;
        case 0x1eb1a4u: goto label_1eb1a4;
        case 0x1eb1a8u: goto label_1eb1a8;
        case 0x1eb1acu: goto label_1eb1ac;
        case 0x1eb1b0u: goto label_1eb1b0;
        case 0x1eb1b4u: goto label_1eb1b4;
        case 0x1eb1b8u: goto label_1eb1b8;
        case 0x1eb1bcu: goto label_1eb1bc;
        case 0x1eb1c0u: goto label_1eb1c0;
        case 0x1eb1c4u: goto label_1eb1c4;
        case 0x1eb1c8u: goto label_1eb1c8;
        case 0x1eb1ccu: goto label_1eb1cc;
        case 0x1eb1d0u: goto label_1eb1d0;
        case 0x1eb1d4u: goto label_1eb1d4;
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb1dcu: goto label_1eb1dc;
        case 0x1eb1e0u: goto label_1eb1e0;
        case 0x1eb1e4u: goto label_1eb1e4;
        case 0x1eb1e8u: goto label_1eb1e8;
        case 0x1eb1ecu: goto label_1eb1ec;
        case 0x1eb1f0u: goto label_1eb1f0;
        case 0x1eb1f4u: goto label_1eb1f4;
        case 0x1eb1f8u: goto label_1eb1f8;
        case 0x1eb1fcu: goto label_1eb1fc;
        case 0x1eb200u: goto label_1eb200;
        case 0x1eb204u: goto label_1eb204;
        case 0x1eb208u: goto label_1eb208;
        case 0x1eb20cu: goto label_1eb20c;
        case 0x1eb210u: goto label_1eb210;
        case 0x1eb214u: goto label_1eb214;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb21cu: goto label_1eb21c;
        case 0x1eb220u: goto label_1eb220;
        case 0x1eb224u: goto label_1eb224;
        case 0x1eb228u: goto label_1eb228;
        case 0x1eb22cu: goto label_1eb22c;
        case 0x1eb230u: goto label_1eb230;
        case 0x1eb234u: goto label_1eb234;
        case 0x1eb238u: goto label_1eb238;
        case 0x1eb23cu: goto label_1eb23c;
        case 0x1eb240u: goto label_1eb240;
        case 0x1eb244u: goto label_1eb244;
        case 0x1eb248u: goto label_1eb248;
        case 0x1eb24cu: goto label_1eb24c;
        case 0x1eb250u: goto label_1eb250;
        case 0x1eb254u: goto label_1eb254;
        case 0x1eb258u: goto label_1eb258;
        case 0x1eb25cu: goto label_1eb25c;
        case 0x1eb260u: goto label_1eb260;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb268u: goto label_1eb268;
        case 0x1eb26cu: goto label_1eb26c;
        case 0x1eb270u: goto label_1eb270;
        case 0x1eb274u: goto label_1eb274;
        case 0x1eb278u: goto label_1eb278;
        case 0x1eb27cu: goto label_1eb27c;
        case 0x1eb280u: goto label_1eb280;
        case 0x1eb284u: goto label_1eb284;
        case 0x1eb288u: goto label_1eb288;
        case 0x1eb28cu: goto label_1eb28c;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb294u: goto label_1eb294;
        case 0x1eb298u: goto label_1eb298;
        case 0x1eb29cu: goto label_1eb29c;
        case 0x1eb2a0u: goto label_1eb2a0;
        case 0x1eb2a4u: goto label_1eb2a4;
        case 0x1eb2a8u: goto label_1eb2a8;
        case 0x1eb2acu: goto label_1eb2ac;
        case 0x1eb2b0u: goto label_1eb2b0;
        case 0x1eb2b4u: goto label_1eb2b4;
        case 0x1eb2b8u: goto label_1eb2b8;
        case 0x1eb2bcu: goto label_1eb2bc;
        case 0x1eb2c0u: goto label_1eb2c0;
        case 0x1eb2c4u: goto label_1eb2c4;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2d0u: goto label_1eb2d0;
        case 0x1eb2d4u: goto label_1eb2d4;
        case 0x1eb2d8u: goto label_1eb2d8;
        case 0x1eb2dcu: goto label_1eb2dc;
        case 0x1eb2e0u: goto label_1eb2e0;
        case 0x1eb2e4u: goto label_1eb2e4;
        case 0x1eb2e8u: goto label_1eb2e8;
        case 0x1eb2ecu: goto label_1eb2ec;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb2f4u: goto label_1eb2f4;
        case 0x1eb2f8u: goto label_1eb2f8;
        case 0x1eb2fcu: goto label_1eb2fc;
        case 0x1eb300u: goto label_1eb300;
        case 0x1eb304u: goto label_1eb304;
        case 0x1eb308u: goto label_1eb308;
        case 0x1eb30cu: goto label_1eb30c;
        case 0x1eb310u: goto label_1eb310;
        case 0x1eb314u: goto label_1eb314;
        case 0x1eb318u: goto label_1eb318;
        case 0x1eb31cu: goto label_1eb31c;
        case 0x1eb320u: goto label_1eb320;
        case 0x1eb324u: goto label_1eb324;
        case 0x1eb328u: goto label_1eb328;
        case 0x1eb32cu: goto label_1eb32c;
        case 0x1eb330u: goto label_1eb330;
        case 0x1eb334u: goto label_1eb334;
        case 0x1eb338u: goto label_1eb338;
        case 0x1eb33cu: goto label_1eb33c;
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb344u: goto label_1eb344;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb34cu: goto label_1eb34c;
        case 0x1eb350u: goto label_1eb350;
        case 0x1eb354u: goto label_1eb354;
        case 0x1eb358u: goto label_1eb358;
        case 0x1eb35cu: goto label_1eb35c;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb364u: goto label_1eb364;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb36cu: goto label_1eb36c;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb378u: goto label_1eb378;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb380u: goto label_1eb380;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb38cu: goto label_1eb38c;
        case 0x1eb390u: goto label_1eb390;
        case 0x1eb394u: goto label_1eb394;
        case 0x1eb398u: goto label_1eb398;
        case 0x1eb39cu: goto label_1eb39c;
        case 0x1eb3a0u: goto label_1eb3a0;
        case 0x1eb3a4u: goto label_1eb3a4;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3acu: goto label_1eb3ac;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb3b4u: goto label_1eb3b4;
        case 0x1eb3b8u: goto label_1eb3b8;
        case 0x1eb3bcu: goto label_1eb3bc;
        case 0x1eb3c0u: goto label_1eb3c0;
        case 0x1eb3c4u: goto label_1eb3c4;
        case 0x1eb3c8u: goto label_1eb3c8;
        case 0x1eb3ccu: goto label_1eb3cc;
        case 0x1eb3d0u: goto label_1eb3d0;
        case 0x1eb3d4u: goto label_1eb3d4;
        case 0x1eb3d8u: goto label_1eb3d8;
        case 0x1eb3dcu: goto label_1eb3dc;
        case 0x1eb3e0u: goto label_1eb3e0;
        case 0x1eb3e4u: goto label_1eb3e4;
        case 0x1eb3e8u: goto label_1eb3e8;
        case 0x1eb3ecu: goto label_1eb3ec;
        case 0x1eb3f0u: goto label_1eb3f0;
        case 0x1eb3f4u: goto label_1eb3f4;
        case 0x1eb3f8u: goto label_1eb3f8;
        case 0x1eb3fcu: goto label_1eb3fc;
        case 0x1eb400u: goto label_1eb400;
        case 0x1eb404u: goto label_1eb404;
        case 0x1eb408u: goto label_1eb408;
        case 0x1eb40cu: goto label_1eb40c;
        case 0x1eb410u: goto label_1eb410;
        case 0x1eb414u: goto label_1eb414;
        case 0x1eb418u: goto label_1eb418;
        case 0x1eb41cu: goto label_1eb41c;
        case 0x1eb420u: goto label_1eb420;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb428u: goto label_1eb428;
        case 0x1eb42cu: goto label_1eb42c;
        case 0x1eb430u: goto label_1eb430;
        case 0x1eb434u: goto label_1eb434;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb43cu: goto label_1eb43c;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb444u: goto label_1eb444;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb44cu: goto label_1eb44c;
        case 0x1eb450u: goto label_1eb450;
        case 0x1eb454u: goto label_1eb454;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb45cu: goto label_1eb45c;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb464u: goto label_1eb464;
        case 0x1eb468u: goto label_1eb468;
        case 0x1eb46cu: goto label_1eb46c;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb474u: goto label_1eb474;
        case 0x1eb478u: goto label_1eb478;
        case 0x1eb47cu: goto label_1eb47c;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb484u: goto label_1eb484;
        case 0x1eb488u: goto label_1eb488;
        case 0x1eb48cu: goto label_1eb48c;
        case 0x1eb490u: goto label_1eb490;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb49cu: goto label_1eb49c;
        case 0x1eb4a0u: goto label_1eb4a0;
        case 0x1eb4a4u: goto label_1eb4a4;
        case 0x1eb4a8u: goto label_1eb4a8;
        case 0x1eb4acu: goto label_1eb4ac;
        case 0x1eb4b0u: goto label_1eb4b0;
        case 0x1eb4b4u: goto label_1eb4b4;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb4bcu: goto label_1eb4bc;
        case 0x1eb4c0u: goto label_1eb4c0;
        case 0x1eb4c4u: goto label_1eb4c4;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb4ccu: goto label_1eb4cc;
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb4d4u: goto label_1eb4d4;
        case 0x1eb4d8u: goto label_1eb4d8;
        case 0x1eb4dcu: goto label_1eb4dc;
        case 0x1eb4e0u: goto label_1eb4e0;
        case 0x1eb4e4u: goto label_1eb4e4;
        case 0x1eb4e8u: goto label_1eb4e8;
        case 0x1eb4ecu: goto label_1eb4ec;
        case 0x1eb4f0u: goto label_1eb4f0;
        case 0x1eb4f4u: goto label_1eb4f4;
        case 0x1eb4f8u: goto label_1eb4f8;
        case 0x1eb4fcu: goto label_1eb4fc;
        case 0x1eb500u: goto label_1eb500;
        case 0x1eb504u: goto label_1eb504;
        case 0x1eb508u: goto label_1eb508;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb510u: goto label_1eb510;
        case 0x1eb514u: goto label_1eb514;
        case 0x1eb518u: goto label_1eb518;
        case 0x1eb51cu: goto label_1eb51c;
        case 0x1eb520u: goto label_1eb520;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb534u: goto label_1eb534;
        case 0x1eb538u: goto label_1eb538;
        case 0x1eb53cu: goto label_1eb53c;
        case 0x1eb540u: goto label_1eb540;
        case 0x1eb544u: goto label_1eb544;
        case 0x1eb548u: goto label_1eb548;
        case 0x1eb54cu: goto label_1eb54c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb55cu: goto label_1eb55c;
        case 0x1eb560u: goto label_1eb560;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb56cu: goto label_1eb56c;
        case 0x1eb570u: goto label_1eb570;
        case 0x1eb574u: goto label_1eb574;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb580u: goto label_1eb580;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb58cu: goto label_1eb58c;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb594u: goto label_1eb594;
        case 0x1eb598u: goto label_1eb598;
        case 0x1eb59cu: goto label_1eb59c;
        case 0x1eb5a0u: goto label_1eb5a0;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5a8u: goto label_1eb5a8;
        case 0x1eb5acu: goto label_1eb5ac;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb5b8u: goto label_1eb5b8;
        case 0x1eb5bcu: goto label_1eb5bc;
        case 0x1eb5c0u: goto label_1eb5c0;
        case 0x1eb5c4u: goto label_1eb5c4;
        case 0x1eb5c8u: goto label_1eb5c8;
        case 0x1eb5ccu: goto label_1eb5cc;
        case 0x1eb5d0u: goto label_1eb5d0;
        case 0x1eb5d4u: goto label_1eb5d4;
        case 0x1eb5d8u: goto label_1eb5d8;
        case 0x1eb5dcu: goto label_1eb5dc;
        case 0x1eb5e0u: goto label_1eb5e0;
        case 0x1eb5e4u: goto label_1eb5e4;
        case 0x1eb5e8u: goto label_1eb5e8;
        case 0x1eb5ecu: goto label_1eb5ec;
        case 0x1eb5f0u: goto label_1eb5f0;
        case 0x1eb5f4u: goto label_1eb5f4;
        case 0x1eb5f8u: goto label_1eb5f8;
        case 0x1eb5fcu: goto label_1eb5fc;
        case 0x1eb600u: goto label_1eb600;
        case 0x1eb604u: goto label_1eb604;
        case 0x1eb608u: goto label_1eb608;
        case 0x1eb60cu: goto label_1eb60c;
        case 0x1eb610u: goto label_1eb610;
        case 0x1eb614u: goto label_1eb614;
        case 0x1eb618u: goto label_1eb618;
        case 0x1eb61cu: goto label_1eb61c;
        case 0x1eb620u: goto label_1eb620;
        case 0x1eb624u: goto label_1eb624;
        case 0x1eb628u: goto label_1eb628;
        case 0x1eb62cu: goto label_1eb62c;
        case 0x1eb630u: goto label_1eb630;
        case 0x1eb634u: goto label_1eb634;
        case 0x1eb638u: goto label_1eb638;
        case 0x1eb63cu: goto label_1eb63c;
        case 0x1eb640u: goto label_1eb640;
        case 0x1eb644u: goto label_1eb644;
        case 0x1eb648u: goto label_1eb648;
        case 0x1eb64cu: goto label_1eb64c;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb654u: goto label_1eb654;
        case 0x1eb658u: goto label_1eb658;
        case 0x1eb65cu: goto label_1eb65c;
        case 0x1eb660u: goto label_1eb660;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb668u: goto label_1eb668;
        case 0x1eb66cu: goto label_1eb66c;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb674u: goto label_1eb674;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb680u: goto label_1eb680;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb688u: goto label_1eb688;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb690u: goto label_1eb690;
        case 0x1eb694u: goto label_1eb694;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb69cu: goto label_1eb69c;
        case 0x1eb6a0u: goto label_1eb6a0;
        case 0x1eb6a4u: goto label_1eb6a4;
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6acu: goto label_1eb6ac;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6b8u: goto label_1eb6b8;
        case 0x1eb6bcu: goto label_1eb6bc;
        case 0x1eb6c0u: goto label_1eb6c0;
        case 0x1eb6c4u: goto label_1eb6c4;
        case 0x1eb6c8u: goto label_1eb6c8;
        case 0x1eb6ccu: goto label_1eb6cc;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6d4u: goto label_1eb6d4;
        case 0x1eb6d8u: goto label_1eb6d8;
        case 0x1eb6dcu: goto label_1eb6dc;
        case 0x1eb6e0u: goto label_1eb6e0;
        case 0x1eb6e4u: goto label_1eb6e4;
        case 0x1eb6e8u: goto label_1eb6e8;
        case 0x1eb6ecu: goto label_1eb6ec;
        case 0x1eb6f0u: goto label_1eb6f0;
        case 0x1eb6f4u: goto label_1eb6f4;
        case 0x1eb6f8u: goto label_1eb6f8;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb700u: goto label_1eb700;
        case 0x1eb704u: goto label_1eb704;
        case 0x1eb708u: goto label_1eb708;
        case 0x1eb70cu: goto label_1eb70c;
        case 0x1eb710u: goto label_1eb710;
        case 0x1eb714u: goto label_1eb714;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb71cu: goto label_1eb71c;
        case 0x1eb720u: goto label_1eb720;
        case 0x1eb724u: goto label_1eb724;
        default: return;
    }

label_1eaf58:
    // 0x1eaf58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1eaf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1eaf5c:
    // 0x1eaf5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eaf5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eaf60:
    // 0x1eaf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eaf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eaf64:
    // 0x1eaf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eaf68:
    // 0x1eaf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eaf6c:
    // 0x1eaf6c: 0x3e00008  jr          $ra
label_1eaf70:
    if (ctx->pc == 0x1EAF70u) {
        ctx->pc = 0x1EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF6Cu;
        // 0x1eaf70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF74u;
        goto label_1eaf74;
    }
    ctx->pc = 0x1EAF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF6Cu;
        // 0x1eaf70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAF74u;
label_1eaf74:
    // 0x1eaf74: 0x0  nop
    ctx->pc = 0x1eaf74u;
    // NOP
label_1eaf78:
    // 0x1eaf78: 0x0  nop
    ctx->pc = 0x1eaf78u;
    // NOP
label_1eaf7c:
    // 0x1eaf7c: 0x0  nop
    ctx->pc = 0x1eaf7cu;
    // NOP
label_1eaf80:
    // 0x1eaf80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1eaf84:
    // 0x1eaf84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eaf88:
    // 0x1eaf88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1eaf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1eaf8c:
    // 0x1eaf8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eaf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1eaf90:
    // 0x1eaf90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eaf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1eaf94:
    // 0x1eaf94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eaf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1eaf98:
    // 0x1eaf98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eaf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eaf9c:
    // 0x1eaf9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eaf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eafa0:
    // 0x1eafa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eafa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eafa4:
    // 0x1eafa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eafa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eafa8:
    // 0x1eafa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eafac:
    // 0x1eafac: 0x8f838f10  lw          $v1, -0x70F0($gp)
    ctx->pc = 0x1eafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938384)));
label_1eafb0:
    // 0x1eafb0: 0x106501f8  beq         $v1, $a1, . + 4 + (0x1F8 << 2)
label_1eafb4:
    if (ctx->pc == 0x1EAFB4u) {
        ctx->pc = 0x1EAFB8u;
        goto label_1eafb8;
    }
    ctx->pc = 0x1EAFB0u;
    {
        const bool branch_taken_0x1eafb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eafb0) {
            ctx->pc = 0x1EB794u;
            { ctx->pc = 0x1eb794; return; }
        }
    }
    ctx->pc = 0x1EAFB8u;
label_1eafb8:
    // 0x1eafb8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1eafbc:
    // 0x1eafbc: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x1eafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1eafc0:
    // 0x1eafc0: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x1eafc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1eafc4:
    // 0x1eafc4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_1eafc8:
    // 0x1eafc8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eafcc:
    // 0x1eafcc: 0x1043021  addu        $a2, $t0, $a0
    ctx->pc = 0x1eafccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1eafd0:
    // 0x1eafd0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1eafd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_1eafd4:
    // 0x1eafd4: 0x24a5e280  addiu       $a1, $a1, -0x1D80
    ctx->pc = 0x1eafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
label_1eafd8:
    // 0x1eafd8: 0x24e71e00  addiu       $a3, $a3, 0x1E00
    ctx->pc = 0x1eafd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7680));
label_1eafdc:
    // 0x1eafdc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1eafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1eafe0:
    // 0x1eafe0: 0xa4940  sll         $t1, $t2, 5
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1eafe4:
    // 0x1eafe4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1eafe8:
    // 0x1eafe8: 0xe98021  addu        $s0, $a3, $t1
    ctx->pc = 0x1eafe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1eafec:
    // 0x1eafec: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1eafecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1eaff0:
    // 0x1eaff0: 0x8f828f18  lw          $v0, -0x70E8($gp)
    ctx->pc = 0x1eaff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938392)));
label_1eaff4:
    // 0x1eaff4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1eaff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1eaff8:
    // 0x1eaff8: 0xa30c0  sll         $a2, $t2, 3
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1eaffc:
    // 0x1eaffc: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1eaffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1eb000:
    // 0x1eb000: 0xca3821  addu        $a3, $a2, $t2
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1eb004:
    // 0x1eb004: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1eb004u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1eb008:
    // 0x1eb008: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1eb008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1eb00c:
    // 0x1eb00c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1eb00cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1eb010:
    // 0x1eb010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb014:
    if (ctx->pc == 0x1EB014u) {
        ctx->pc = 0x1EB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB010u;
        // 0x1eb014: 0xa69021  addu        $s2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB018u;
        goto label_1eb018;
    }
    ctx->pc = 0x1EB010u;
    {
        const bool branch_taken_0x1eb010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB010u;
        // 0x1eb014: 0xa69021  addu        $s2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb010) {
            ctx->pc = 0x1EB028u;
            goto label_1eb028;
        }
    }
    ctx->pc = 0x1EB018u;
label_1eb018:
    // 0x1eb018: 0x241701a4  addiu       $s7, $zero, 0x1A4
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
label_1eb01c:
    // 0x1eb01c: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x1eb01cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1eb020:
    // 0x1eb020: 0x1000000b  b           . + 4 + (0xB << 2)
label_1eb024:
    if (ctx->pc == 0x1EB024u) {
        ctx->pc = 0x1EB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB020u;
        // 0x1eb024: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB028u;
        goto label_1eb028;
    }
    ctx->pc = 0x1EB020u;
    {
        const bool branch_taken_0x1eb020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB020u;
        // 0x1eb024: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb020) {
            ctx->pc = 0x1EB050u;
            goto label_1eb050;
        }
    }
    ctx->pc = 0x1EB028u;
label_1eb028:
    // 0x1eb028: 0x8f828f14  lw          $v0, -0x70EC($gp)
    ctx->pc = 0x1eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938388)));
label_1eb02c:
    // 0x1eb02c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1eb030:
    if (ctx->pc == 0x1EB030u) {
        ctx->pc = 0x1EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB02Cu;
        // 0x1eb030: 0x241701e4  addiu       $s7, $zero, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB034u;
        goto label_1eb034;
    }
    ctx->pc = 0x1EB02Cu;
    {
        const bool branch_taken_0x1eb02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB02Cu;
        // 0x1eb030: 0x241701e4  addiu       $s7, $zero, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb02c) {
            ctx->pc = 0x1EB048u;
            goto label_1eb048;
        }
    }
    ctx->pc = 0x1EB034u;
label_1eb034:
    // 0x1eb034: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1eb038:
    // 0x1eb038: 0x241701f4  addiu       $s7, $zero, 0x1F4
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1eb03c:
    // 0x1eb03c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1eb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1eb040:
    // 0x1eb040: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eb044:
    if (ctx->pc == 0x1EB044u) {
        ctx->pc = 0x1EB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB040u;
        // 0x1eb044: 0x2456001c  addiu       $s6, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB048u;
        goto label_1eb048;
    }
    ctx->pc = 0x1EB040u;
    {
        const bool branch_taken_0x1eb040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB040u;
        // 0x1eb044: 0x2456001c  addiu       $s6, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb040) {
            ctx->pc = 0x1EB04Cu;
            goto label_1eb04c;
        }
    }
    ctx->pc = 0x1EB048u;
label_1eb048:
    // 0x1eb048: 0x24160030  addiu       $s6, $zero, 0x30
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1eb04c:
    // 0x1eb04c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb050:
    // 0x1eb050: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb054:
    // 0x1eb054: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1eb058:
    // 0x1eb058: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1eb058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1eb05c:
    // 0x1eb05c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_1eb060:
    if (ctx->pc == 0x1EB060u) {
        ctx->pc = 0x1EB064u;
        goto label_1eb064;
    }
    ctx->pc = 0x1EB05Cu;
    {
        const bool branch_taken_0x1eb05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb05c) {
            ctx->pc = 0x1EB068u;
            goto label_1eb068;
        }
    }
    ctx->pc = 0x1EB064u;
label_1eb064:
    // 0x1eb064: 0x26d6fff2  addiu       $s6, $s6, -0xE
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967282));
label_1eb068:
    // 0x1eb068: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1eb06c:
    if (ctx->pc == 0x1EB06Cu) {
        ctx->pc = 0x1EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB068u;
        // 0x1eb06c: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB070u;
        goto label_1eb070;
    }
    ctx->pc = 0x1EB068u;
    {
        const bool branch_taken_0x1eb068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB068u;
        // 0x1eb06c: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb068) {
            ctx->pc = 0x1EB0ACu;
            goto label_1eb0ac;
        }
    }
    ctx->pc = 0x1EB070u;
label_1eb070:
    // 0x1eb070: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1eb074:
    if (ctx->pc == 0x1EB074u) {
        ctx->pc = 0x1EB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB070u;
        // 0x1eb074: 0x3c0b002d  lui         $t3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB078u;
        goto label_1eb078;
    }
    ctx->pc = 0x1EB070u;
    {
        const bool branch_taken_0x1eb070 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1EB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB070u;
        // 0x1eb074: 0x3c0b002d  lui         $t3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb070) {
            ctx->pc = 0x1EB080u;
            goto label_1eb080;
        }
    }
    ctx->pc = 0x1EB078u;
label_1eb078:
    // 0x1eb078: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eb07c:
    // 0x1eb07c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1eb07cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1eb080:
    // 0x1eb080: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1eb084:
    // 0x1eb084: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1eb088:
    // 0x1eb088: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb08c:
    // 0x1eb08c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1eb08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eb090:
    // 0x1eb090: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eb090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eb094:
    // 0x1eb094: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1eb094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb098:
    // 0x1eb098: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1eb098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb09c:
    // 0x1eb09c: 0xc0708ac  jal         func_1C22B0
label_1eb0a0:
    if (ctx->pc == 0x1EB0A0u) {
        ctx->pc = 0x1EB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB09Cu;
        // 0x1eb0a0: 0x256bd040  addiu       $t3, $t3, -0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0A4u;
        goto label_1eb0a4;
    }
    ctx->pc = 0x1EB09Cu;
    SET_GPR_U32(ctx, 31, 0x1EB0A4u);
    ctx->pc = 0x1EB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB09Cu;
    // 0x1eb0a0: 0x256bd040  addiu       $t3, $t3, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1EB0A4u;
label_1eb0a4:
    // 0x1eb0a4: 0x10000033  b           . + 4 + (0x33 << 2)
label_1eb0a8:
    if (ctx->pc == 0x1EB0A8u) {
        ctx->pc = 0x1EB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0A4u;
        // 0x1eb0a8: 0x8f838f10  lw          $v1, -0x70F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0ACu;
        goto label_1eb0ac;
    }
    ctx->pc = 0x1EB0A4u;
    {
        const bool branch_taken_0x1eb0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0A4u;
        // 0x1eb0a8: 0x8f838f10  lw          $v1, -0x70F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0a4) {
            ctx->pc = 0x1EB174u;
            goto label_1eb174;
        }
    }
    ctx->pc = 0x1EB0ACu;
label_1eb0ac:
    // 0x1eb0ac: 0x8f898f08  lw          $t1, -0x70F8($gp)
    ctx->pc = 0x1eb0acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938376)));
label_1eb0b0:
    // 0x1eb0b0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb0b4:
    // 0x1eb0b4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb0b8:
    // 0x1eb0b8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb0bc:
    // 0x1eb0bc: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb0c0:
    // 0x1eb0c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb0c4:
    // 0x1eb0c4: 0x24a5d048  addiu       $a1, $a1, -0x2FB8
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955080));
label_1eb0c8:
    // 0x1eb0c8: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb0cc:
    // 0x1eb0cc: 0x937c2  srl         $a2, $t1, 31
    ctx->pc = 0x1eb0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb0d0:
    // 0x1eb0d0: 0x0  nop
    ctx->pc = 0x1eb0d0u;
    // NOP
label_1eb0d4:
    // 0x1eb0d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1eb0d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1eb0d8:
    // 0x1eb0d8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1eb0dc:
    // 0x1eb0dc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1eb0e0:
    // 0x1eb0e0: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1eb0e4:
    // 0x1eb0e4: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x1eb0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb0e8:
    // 0x1eb0e8: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x1eb0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1eb0ec:
    // 0x1eb0ec: 0x0  nop
    ctx->pc = 0x1eb0ecu;
    // NOP
label_1eb0f0:
    // 0x1eb0f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1eb0f4:
    // 0x1eb0f4: 0xe8001a  div         $zero, $a3, $t0
    ctx->pc = 0x1eb0f4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb0f8:
    // 0x1eb0f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1eb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1eb0fc:
    // 0x1eb0fc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1eb0fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1eb100:
    // 0x1eb100: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1eb104:
    // 0x1eb104: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb104u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb108:
    // 0x1eb108: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x1eb108u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb10c:
    // 0x1eb10c: 0x0  nop
    ctx->pc = 0x1eb10cu;
    // NOP
label_1eb110:
    // 0x1eb110: 0x0  nop
    ctx->pc = 0x1eb110u;
    // NOP
label_1eb114:
    // 0x1eb114: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb114u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb118:
    // 0x1eb118: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb11c:
    // 0x1eb11c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb120:
    // 0x1eb120: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb124:
    // 0x1eb124: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb128:
    // 0x1eb128: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb128u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb12c:
    // 0x1eb12c: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb130:
    // 0x1eb130: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb130u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb134:
    // 0x1eb134: 0x0  nop
    ctx->pc = 0x1eb134u;
    // NOP
label_1eb138:
    // 0x1eb138: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb138u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb13c:
    // 0x1eb13c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb140:
    // 0x1eb140: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb144:
    // 0x1eb144: 0xc08f20e  jal         func_23C838
label_1eb148:
    if (ctx->pc == 0x1EB148u) {
        ctx->pc = 0x1EB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB144u;
        // 0x1eb148: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB14Cu;
        goto label_1eb14c;
    }
    ctx->pc = 0x1EB144u;
    SET_GPR_U32(ctx, 31, 0x1EB14Cu);
    ctx->pc = 0x1EB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB144u;
    // 0x1eb148: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB14Cu;
label_1eb14c:
    // 0x1eb14c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1eb150:
    // 0x1eb150: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb154:
    // 0x1eb154: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1eb154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1eb158:
    // 0x1eb158: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1eb158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eb15c:
    // 0x1eb15c: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eb15cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eb160:
    // 0x1eb160: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1eb160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb164:
    // 0x1eb164: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1eb164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb168:
    // 0x1eb168: 0xc0708ac  jal         func_1C22B0
label_1eb16c:
    if (ctx->pc == 0x1EB16Cu) {
        ctx->pc = 0x1EB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB168u;
        // 0x1eb16c: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB170u;
        goto label_1eb170;
    }
    ctx->pc = 0x1EB168u;
    SET_GPR_U32(ctx, 31, 0x1EB170u);
    ctx->pc = 0x1EB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB168u;
    // 0x1eb16c: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1EB170u;
label_1eb170:
    // 0x1eb170: 0x8f838f10  lw          $v1, -0x70F0($gp)
    ctx->pc = 0x1eb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938384)));
label_1eb174:
    // 0x1eb174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb178:
    // 0x1eb178: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_1eb17c:
    if (ctx->pc == 0x1EB17Cu) {
        ctx->pc = 0x1EB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB178u;
        // 0x1eb17c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB180u;
        goto label_1eb180;
    }
    ctx->pc = 0x1EB178u;
    {
        const bool branch_taken_0x1eb178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB178u;
        // 0x1eb17c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb178) {
            ctx->pc = 0x1EB22Cu;
            goto label_1eb22c;
        }
    }
    ctx->pc = 0x1EB180u;
label_1eb180:
    // 0x1eb180: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eb184:
    // 0x1eb184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1eb188:
    // 0x1eb188: 0xa2430080  sb          $v1, 0x80($s2)
    ctx->pc = 0x1eb188u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 3));
label_1eb18c:
    // 0x1eb18c: 0xa2430081  sb          $v1, 0x81($s2)
    ctx->pc = 0x1eb18cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 3));
label_1eb190:
    // 0x1eb190: 0xa2430082  sb          $v1, 0x82($s2)
    ctx->pc = 0x1eb190u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 3));
label_1eb194:
    // 0x1eb194: 0xa2430083  sb          $v1, 0x83($s2)
    ctx->pc = 0x1eb194u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 3));
label_1eb198:
    // 0x1eb198: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x1eb198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_1eb19c:
    // 0x1eb19c: 0xa2430120  sb          $v1, 0x120($s2)
    ctx->pc = 0x1eb19cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 288), (uint8_t)GPR_U32(ctx, 3));
label_1eb1a0:
    // 0x1eb1a0: 0xa2430121  sb          $v1, 0x121($s2)
    ctx->pc = 0x1eb1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 289), (uint8_t)GPR_U32(ctx, 3));
label_1eb1a4:
    // 0x1eb1a4: 0xa2430122  sb          $v1, 0x122($s2)
    ctx->pc = 0x1eb1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 290), (uint8_t)GPR_U32(ctx, 3));
label_1eb1a8:
    // 0x1eb1a8: 0xa2430123  sb          $v1, 0x123($s2)
    ctx->pc = 0x1eb1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 291), (uint8_t)GPR_U32(ctx, 3));
label_1eb1ac:
    // 0x1eb1ac: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x1eb1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
label_1eb1b0:
    // 0x1eb1b0: 0xa24301c0  sb          $v1, 0x1C0($s2)
    ctx->pc = 0x1eb1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 448), (uint8_t)GPR_U32(ctx, 3));
label_1eb1b4:
    // 0x1eb1b4: 0xa24301c1  sb          $v1, 0x1C1($s2)
    ctx->pc = 0x1eb1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 449), (uint8_t)GPR_U32(ctx, 3));
label_1eb1b8:
    // 0x1eb1b8: 0xa24301c2  sb          $v1, 0x1C2($s2)
    ctx->pc = 0x1eb1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 450), (uint8_t)GPR_U32(ctx, 3));
label_1eb1bc:
    // 0x1eb1bc: 0xa24301c3  sb          $v1, 0x1C3($s2)
    ctx->pc = 0x1eb1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 451), (uint8_t)GPR_U32(ctx, 3));
label_1eb1c0:
    // 0x1eb1c0: 0xae4201c4  sw          $v0, 0x1C4($s2)
    ctx->pc = 0x1eb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
label_1eb1c4:
    // 0x1eb1c4: 0xa2430260  sb          $v1, 0x260($s2)
    ctx->pc = 0x1eb1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 608), (uint8_t)GPR_U32(ctx, 3));
label_1eb1c8:
    // 0x1eb1c8: 0xa2430261  sb          $v1, 0x261($s2)
    ctx->pc = 0x1eb1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 609), (uint8_t)GPR_U32(ctx, 3));
label_1eb1cc:
    // 0x1eb1cc: 0xa2430262  sb          $v1, 0x262($s2)
    ctx->pc = 0x1eb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 610), (uint8_t)GPR_U32(ctx, 3));
label_1eb1d0:
    // 0x1eb1d0: 0xa2430263  sb          $v1, 0x263($s2)
    ctx->pc = 0x1eb1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 611), (uint8_t)GPR_U32(ctx, 3));
label_1eb1d4:
    // 0x1eb1d4: 0xae420264  sw          $v0, 0x264($s2)
    ctx->pc = 0x1eb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 2));
label_1eb1d8:
    // 0x1eb1d8: 0xa2430300  sb          $v1, 0x300($s2)
    ctx->pc = 0x1eb1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 3));
label_1eb1dc:
    // 0x1eb1dc: 0xa2430301  sb          $v1, 0x301($s2)
    ctx->pc = 0x1eb1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 769), (uint8_t)GPR_U32(ctx, 3));
label_1eb1e0:
    // 0x1eb1e0: 0xa2430302  sb          $v1, 0x302($s2)
    ctx->pc = 0x1eb1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 770), (uint8_t)GPR_U32(ctx, 3));
label_1eb1e4:
    // 0x1eb1e4: 0xa2430303  sb          $v1, 0x303($s2)
    ctx->pc = 0x1eb1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 771), (uint8_t)GPR_U32(ctx, 3));
label_1eb1e8:
    // 0x1eb1e8: 0xae420304  sw          $v0, 0x304($s2)
    ctx->pc = 0x1eb1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 2));
label_1eb1ec:
    // 0x1eb1ec: 0xa24303a0  sb          $v1, 0x3A0($s2)
    ctx->pc = 0x1eb1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 928), (uint8_t)GPR_U32(ctx, 3));
label_1eb1f0:
    // 0x1eb1f0: 0xa24303a1  sb          $v1, 0x3A1($s2)
    ctx->pc = 0x1eb1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 929), (uint8_t)GPR_U32(ctx, 3));
label_1eb1f4:
    // 0x1eb1f4: 0xa24303a2  sb          $v1, 0x3A2($s2)
    ctx->pc = 0x1eb1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 930), (uint8_t)GPR_U32(ctx, 3));
label_1eb1f8:
    // 0x1eb1f8: 0xa24303a3  sb          $v1, 0x3A3($s2)
    ctx->pc = 0x1eb1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 931), (uint8_t)GPR_U32(ctx, 3));
label_1eb1fc:
    // 0x1eb1fc: 0xae4203a4  sw          $v0, 0x3A4($s2)
    ctx->pc = 0x1eb1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 2));
label_1eb200:
    // 0x1eb200: 0xa2430440  sb          $v1, 0x440($s2)
    ctx->pc = 0x1eb200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1088), (uint8_t)GPR_U32(ctx, 3));
label_1eb204:
    // 0x1eb204: 0xa2430441  sb          $v1, 0x441($s2)
    ctx->pc = 0x1eb204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1089), (uint8_t)GPR_U32(ctx, 3));
label_1eb208:
    // 0x1eb208: 0xa2430442  sb          $v1, 0x442($s2)
    ctx->pc = 0x1eb208u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1090), (uint8_t)GPR_U32(ctx, 3));
label_1eb20c:
    // 0x1eb20c: 0xa2430443  sb          $v1, 0x443($s2)
    ctx->pc = 0x1eb20cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1eb210:
    // 0x1eb210: 0xae420444  sw          $v0, 0x444($s2)
    ctx->pc = 0x1eb210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1092), GPR_U32(ctx, 2));
label_1eb214:
    // 0x1eb214: 0xa24304e0  sb          $v1, 0x4E0($s2)
    ctx->pc = 0x1eb214u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1248), (uint8_t)GPR_U32(ctx, 3));
label_1eb218:
    // 0x1eb218: 0xa24304e1  sb          $v1, 0x4E1($s2)
    ctx->pc = 0x1eb218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1249), (uint8_t)GPR_U32(ctx, 3));
label_1eb21c:
    // 0x1eb21c: 0xa24304e2  sb          $v1, 0x4E2($s2)
    ctx->pc = 0x1eb21cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1250), (uint8_t)GPR_U32(ctx, 3));
label_1eb220:
    // 0x1eb220: 0xa24304e3  sb          $v1, 0x4E3($s2)
    ctx->pc = 0x1eb220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1251), (uint8_t)GPR_U32(ctx, 3));
label_1eb224:
    // 0x1eb224: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1eb228:
    if (ctx->pc == 0x1EB228u) {
        ctx->pc = 0x1EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB224u;
        // 0x1eb228: 0xae4204e4  sw          $v0, 0x4E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB22Cu;
        goto label_1eb22c;
    }
    ctx->pc = 0x1EB224u;
    {
        const bool branch_taken_0x1eb224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB224u;
        // 0x1eb228: 0xae4204e4  sw          $v0, 0x4E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb224) {
            ctx->pc = 0x1EB2DCu;
            goto label_1eb2dc;
        }
    }
    ctx->pc = 0x1EB22Cu;
label_1eb22c:
    // 0x1eb22c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1eb230:
    // 0x1eb230: 0xa2460080  sb          $a2, 0x80($s2)
    ctx->pc = 0x1eb230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 6));
label_1eb234:
    // 0x1eb234: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1eb234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1eb238:
    // 0x1eb238: 0xa2450081  sb          $a1, 0x81($s2)
    ctx->pc = 0x1eb238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 5));
label_1eb23c:
    // 0x1eb23c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eb240:
    // 0x1eb240: 0xa2440082  sb          $a0, 0x82($s2)
    ctx->pc = 0x1eb240u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 4));
label_1eb244:
    // 0x1eb244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1eb248:
    // 0x1eb248: 0xa2430083  sb          $v1, 0x83($s2)
    ctx->pc = 0x1eb248u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 3));
label_1eb24c:
    // 0x1eb24c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x1eb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_1eb250:
    // 0x1eb250: 0xa2460120  sb          $a2, 0x120($s2)
    ctx->pc = 0x1eb250u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 288), (uint8_t)GPR_U32(ctx, 6));
label_1eb254:
    // 0x1eb254: 0xa2450121  sb          $a1, 0x121($s2)
    ctx->pc = 0x1eb254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 289), (uint8_t)GPR_U32(ctx, 5));
label_1eb258:
    // 0x1eb258: 0xa2440122  sb          $a0, 0x122($s2)
    ctx->pc = 0x1eb258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 290), (uint8_t)GPR_U32(ctx, 4));
label_1eb25c:
    // 0x1eb25c: 0xa2430123  sb          $v1, 0x123($s2)
    ctx->pc = 0x1eb25cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 291), (uint8_t)GPR_U32(ctx, 3));
label_1eb260:
    // 0x1eb260: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x1eb260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
label_1eb264:
    // 0x1eb264: 0xa24601c0  sb          $a2, 0x1C0($s2)
    ctx->pc = 0x1eb264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 448), (uint8_t)GPR_U32(ctx, 6));
label_1eb268:
    // 0x1eb268: 0xa24501c1  sb          $a1, 0x1C1($s2)
    ctx->pc = 0x1eb268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 449), (uint8_t)GPR_U32(ctx, 5));
label_1eb26c:
    // 0x1eb26c: 0xa24401c2  sb          $a0, 0x1C2($s2)
    ctx->pc = 0x1eb26cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 450), (uint8_t)GPR_U32(ctx, 4));
label_1eb270:
    // 0x1eb270: 0xa24301c3  sb          $v1, 0x1C3($s2)
    ctx->pc = 0x1eb270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 451), (uint8_t)GPR_U32(ctx, 3));
label_1eb274:
    // 0x1eb274: 0xae4201c4  sw          $v0, 0x1C4($s2)
    ctx->pc = 0x1eb274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
label_1eb278:
    // 0x1eb278: 0xa2460260  sb          $a2, 0x260($s2)
    ctx->pc = 0x1eb278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 608), (uint8_t)GPR_U32(ctx, 6));
label_1eb27c:
    // 0x1eb27c: 0xa2450261  sb          $a1, 0x261($s2)
    ctx->pc = 0x1eb27cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 609), (uint8_t)GPR_U32(ctx, 5));
label_1eb280:
    // 0x1eb280: 0xa2440262  sb          $a0, 0x262($s2)
    ctx->pc = 0x1eb280u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 610), (uint8_t)GPR_U32(ctx, 4));
label_1eb284:
    // 0x1eb284: 0xa2430263  sb          $v1, 0x263($s2)
    ctx->pc = 0x1eb284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 611), (uint8_t)GPR_U32(ctx, 3));
label_1eb288:
    // 0x1eb288: 0xae420264  sw          $v0, 0x264($s2)
    ctx->pc = 0x1eb288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 2));
label_1eb28c:
    // 0x1eb28c: 0xa2460300  sb          $a2, 0x300($s2)
    ctx->pc = 0x1eb28cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 768), (uint8_t)GPR_U32(ctx, 6));
label_1eb290:
    // 0x1eb290: 0xa2450301  sb          $a1, 0x301($s2)
    ctx->pc = 0x1eb290u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 769), (uint8_t)GPR_U32(ctx, 5));
label_1eb294:
    // 0x1eb294: 0xa2440302  sb          $a0, 0x302($s2)
    ctx->pc = 0x1eb294u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 770), (uint8_t)GPR_U32(ctx, 4));
label_1eb298:
    // 0x1eb298: 0xa2430303  sb          $v1, 0x303($s2)
    ctx->pc = 0x1eb298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 771), (uint8_t)GPR_U32(ctx, 3));
label_1eb29c:
    // 0x1eb29c: 0xae420304  sw          $v0, 0x304($s2)
    ctx->pc = 0x1eb29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 2));
label_1eb2a0:
    // 0x1eb2a0: 0xa24603a0  sb          $a2, 0x3A0($s2)
    ctx->pc = 0x1eb2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 928), (uint8_t)GPR_U32(ctx, 6));
label_1eb2a4:
    // 0x1eb2a4: 0xa24503a1  sb          $a1, 0x3A1($s2)
    ctx->pc = 0x1eb2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 929), (uint8_t)GPR_U32(ctx, 5));
label_1eb2a8:
    // 0x1eb2a8: 0xa24403a2  sb          $a0, 0x3A2($s2)
    ctx->pc = 0x1eb2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 930), (uint8_t)GPR_U32(ctx, 4));
label_1eb2ac:
    // 0x1eb2ac: 0xa24303a3  sb          $v1, 0x3A3($s2)
    ctx->pc = 0x1eb2acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 931), (uint8_t)GPR_U32(ctx, 3));
label_1eb2b0:
    // 0x1eb2b0: 0xae4203a4  sw          $v0, 0x3A4($s2)
    ctx->pc = 0x1eb2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 2));
label_1eb2b4:
    // 0x1eb2b4: 0xa2460440  sb          $a2, 0x440($s2)
    ctx->pc = 0x1eb2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1088), (uint8_t)GPR_U32(ctx, 6));
label_1eb2b8:
    // 0x1eb2b8: 0xa2450441  sb          $a1, 0x441($s2)
    ctx->pc = 0x1eb2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1089), (uint8_t)GPR_U32(ctx, 5));
label_1eb2bc:
    // 0x1eb2bc: 0xa2440442  sb          $a0, 0x442($s2)
    ctx->pc = 0x1eb2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1090), (uint8_t)GPR_U32(ctx, 4));
label_1eb2c0:
    // 0x1eb2c0: 0xa2430443  sb          $v1, 0x443($s2)
    ctx->pc = 0x1eb2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1eb2c4:
    // 0x1eb2c4: 0xae420444  sw          $v0, 0x444($s2)
    ctx->pc = 0x1eb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1092), GPR_U32(ctx, 2));
label_1eb2c8:
    // 0x1eb2c8: 0xa24604e0  sb          $a2, 0x4E0($s2)
    ctx->pc = 0x1eb2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1248), (uint8_t)GPR_U32(ctx, 6));
label_1eb2cc:
    // 0x1eb2cc: 0xa24504e1  sb          $a1, 0x4E1($s2)
    ctx->pc = 0x1eb2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1249), (uint8_t)GPR_U32(ctx, 5));
label_1eb2d0:
    // 0x1eb2d0: 0xa24404e2  sb          $a0, 0x4E2($s2)
    ctx->pc = 0x1eb2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1250), (uint8_t)GPR_U32(ctx, 4));
label_1eb2d4:
    // 0x1eb2d4: 0xa24304e3  sb          $v1, 0x4E3($s2)
    ctx->pc = 0x1eb2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1251), (uint8_t)GPR_U32(ctx, 3));
label_1eb2d8:
    // 0x1eb2d8: 0xae4204e4  sw          $v0, 0x4E4($s2)
    ctx->pc = 0x1eb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 2));
label_1eb2dc:
    // 0x1eb2dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eb2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2e0:
    // 0x1eb2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2e4:
    // 0x1eb2e4: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1eb2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1eb2e8:
    // 0x1eb2e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2ec:
    // 0x1eb2ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb2ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2f0:
    // 0x1eb2f0: 0xc066c72  jal         func_19B1C8
label_1eb2f4:
    if (ctx->pc == 0x1EB2F4u) {
        ctx->pc = 0x1EB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2F0u;
        // 0x1eb2f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2F8u;
        goto label_1eb2f8;
    }
    ctx->pc = 0x1EB2F0u;
    SET_GPR_U32(ctx, 31, 0x1EB2F8u);
    ctx->pc = 0x1EB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2F0u;
    // 0x1eb2f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EB2F0u, 0x1EB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2F8u;
label_1eb2f8:
    // 0x1eb2f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb2fc:
    // 0x1eb2fc: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1eb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1eb300:
    // 0x1eb300: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1eb300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1eb304:
    // 0x1eb304: 0x14830123  bne         $a0, $v1, . + 4 + (0x123 << 2)
label_1eb308:
    if (ctx->pc == 0x1EB308u) {
        ctx->pc = 0x1EB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB304u;
        // 0x1eb308: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB30Cu;
        goto label_1eb30c;
    }
    ctx->pc = 0x1EB304u;
    {
        const bool branch_taken_0x1eb304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB304u;
        // 0x1eb308: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb304) {
            ctx->pc = 0x1EB794u;
            { ctx->pc = 0x1eb794; return; }
        }
    }
    ctx->pc = 0x1EB30Cu;
label_1eb30c:
    // 0x1eb30c: 0x64130080  daddiu      $s3, $zero, 0x80
    ctx->pc = 0x1eb30cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_1eb310:
    // 0x1eb310: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1eb310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1eb314:
    // 0x1eb314: 0x240305b0  addiu       $v1, $zero, 0x5B0
    ctx->pc = 0x1eb314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
label_1eb318:
    // 0x1eb318: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eb318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eb31c:
    // 0x1eb31c: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1eb31cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb320:
    // 0x1eb320: 0x2442d720  addiu       $v0, $v0, -0x28E0
    ctx->pc = 0x1eb320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956832));
label_1eb324:
    // 0x1eb324: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1eb324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb328:
    // 0x1eb328: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb32c:
    // 0x1eb32c: 0x8c25d71c  lw          $a1, -0x28E4($at)
    ctx->pc = 0x1eb32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956828)));
label_1eb330:
    // 0x1eb330: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1eb330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eb334:
    // 0x1eb334: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_1eb338:
    if (ctx->pc == 0x1EB338u) {
        ctx->pc = 0x1EB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB334u;
        // 0x1eb338: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB33Cu;
        goto label_1eb33c;
    }
    ctx->pc = 0x1EB334u;
    {
        const bool branch_taken_0x1eb334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB334u;
        // 0x1eb338: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb334) {
            ctx->pc = 0x1EB3E8u;
            goto label_1eb3e8;
        }
    }
    ctx->pc = 0x1EB33Cu;
label_1eb33c:
    // 0x1eb33c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1eb340:
    // 0x1eb340: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb344:
    // 0x1eb344: 0x8c28ccd4  lw          $t0, -0x332C($at)
    ctx->pc = 0x1eb344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954196)));
label_1eb348:
    // 0x1eb348: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb34c:
    // 0x1eb34c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb350:
    // 0x1eb350: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb354:
    // 0x1eb354: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb358:
    // 0x1eb358: 0x24a5d058  addiu       $a1, $a1, -0x2FA8
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955096));
label_1eb35c:
    // 0x1eb35c: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb360:
    // 0x1eb360: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb360u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb364:
    // 0x1eb364: 0x0  nop
    ctx->pc = 0x1eb364u;
    // NOP
label_1eb368:
    // 0x1eb368: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb368u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb36c:
    // 0x1eb36c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb370:
    // 0x1eb370: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb374:
    // 0x1eb374: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb378:
    // 0x1eb378: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb37c:
    // 0x1eb37c: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb37cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb380:
    // 0x1eb380: 0x0  nop
    ctx->pc = 0x1eb380u;
    // NOP
label_1eb384:
    // 0x1eb384: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb384u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb388:
    // 0x1eb388: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb388u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb38c:
    // 0x1eb38c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb390:
    // 0x1eb390: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb394:
    // 0x1eb394: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb398:
    // 0x1eb398: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb398u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb39c:
    // 0x1eb39c: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb39cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb3a0:
    // 0x1eb3a0: 0x0  nop
    ctx->pc = 0x1eb3a0u;
    // NOP
label_1eb3a4:
    // 0x1eb3a4: 0x0  nop
    ctx->pc = 0x1eb3a4u;
    // NOP
label_1eb3a8:
    // 0x1eb3a8: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb3a8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb3ac:
    // 0x1eb3ac: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb3b0:
    // 0x1eb3b0: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb3b4:
    // 0x1eb3b4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb3b8:
    // 0x1eb3b8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb3bc:
    // 0x1eb3bc: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb3c0:
    // 0x1eb3c0: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb3c4:
    // 0x1eb3c4: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb3c8:
    // 0x1eb3c8: 0x0  nop
    ctx->pc = 0x1eb3c8u;
    // NOP
label_1eb3cc:
    // 0x1eb3cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb3ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb3d0:
    // 0x1eb3d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb3d4:
    // 0x1eb3d4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb3d8:
    // 0x1eb3d8: 0xc08f20e  jal         func_23C838
label_1eb3dc:
    if (ctx->pc == 0x1EB3DCu) {
        ctx->pc = 0x1EB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3D8u;
        // 0x1eb3dc: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3E0u;
        goto label_1eb3e0;
    }
    ctx->pc = 0x1EB3D8u;
    SET_GPR_U32(ctx, 31, 0x1EB3E0u);
    ctx->pc = 0x1EB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3D8u;
    // 0x1eb3dc: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB3E0u;
label_1eb3e0:
    // 0x1eb3e0: 0x10000099  b           . + 4 + (0x99 << 2)
label_1eb3e4:
    if (ctx->pc == 0x1EB3E4u) {
        ctx->pc = 0x1EB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E0u;
        // 0x1eb3e4: 0x26e6ffe8  addiu       $a2, $s7, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3E8u;
        goto label_1eb3e8;
    }
    ctx->pc = 0x1EB3E0u;
    {
        const bool branch_taken_0x1eb3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E0u;
        // 0x1eb3e4: 0x26e6ffe8  addiu       $a2, $s7, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3e0) {
            ctx->pc = 0x1EB648u;
            goto label_1eb648;
        }
    }
    ctx->pc = 0x1EB3E8u;
label_1eb3e8:
    // 0x1eb3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb3ec:
    // 0x1eb3ec: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
label_1eb3f0:
    if (ctx->pc == 0x1EB3F0u) {
        ctx->pc = 0x1EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ECu;
        // 0x1eb3f0: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3F4u;
        goto label_1eb3f4;
    }
    ctx->pc = 0x1EB3ECu;
    {
        const bool branch_taken_0x1eb3ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ECu;
        // 0x1eb3f0: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3ec) {
            ctx->pc = 0x1EB4A0u;
            goto label_1eb4a0;
        }
    }
    ctx->pc = 0x1EB3F4u;
label_1eb3f4:
    // 0x1eb3f4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1eb3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1eb3f8:
    // 0x1eb3f8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb3fc:
    // 0x1eb3fc: 0x8c28cb98  lw          $t0, -0x3468($at)
    ctx->pc = 0x1eb3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953880)));
label_1eb400:
    // 0x1eb400: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb404:
    // 0x1eb404: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb408:
    // 0x1eb408: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb40c:
    // 0x1eb40c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb410:
    // 0x1eb410: 0x24a5d058  addiu       $a1, $a1, -0x2FA8
    ctx->pc = 0x1eb410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955096));
label_1eb414:
    // 0x1eb414: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb418:
    // 0x1eb418: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb41c:
    // 0x1eb41c: 0x0  nop
    ctx->pc = 0x1eb41cu;
    // NOP
label_1eb420:
    // 0x1eb420: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb420u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb424:
    // 0x1eb424: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb428:
    // 0x1eb428: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb42c:
    // 0x1eb42c: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb42cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb430:
    // 0x1eb430: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb434:
    // 0x1eb434: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb438:
    // 0x1eb438: 0x0  nop
    ctx->pc = 0x1eb438u;
    // NOP
label_1eb43c:
    // 0x1eb43c: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb43cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb440:
    // 0x1eb440: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb440u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb444:
    // 0x1eb444: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb448:
    // 0x1eb448: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb448u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb44c:
    // 0x1eb44c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb450:
    // 0x1eb450: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb450u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb454:
    // 0x1eb454: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb454u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb458:
    // 0x1eb458: 0x0  nop
    ctx->pc = 0x1eb458u;
    // NOP
label_1eb45c:
    // 0x1eb45c: 0x0  nop
    ctx->pc = 0x1eb45cu;
    // NOP
label_1eb460:
    // 0x1eb460: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb460u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb464:
    // 0x1eb464: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb468:
    // 0x1eb468: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb46c:
    // 0x1eb46c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb470:
    // 0x1eb470: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb474:
    // 0x1eb474: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb478:
    // 0x1eb478: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb47c:
    // 0x1eb47c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb480:
    // 0x1eb480: 0x0  nop
    ctx->pc = 0x1eb480u;
    // NOP
label_1eb484:
    // 0x1eb484: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb488:
    // 0x1eb488: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb48c:
    // 0x1eb48c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb48cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb490:
    // 0x1eb490: 0xc08f20e  jal         func_23C838
label_1eb494:
    if (ctx->pc == 0x1EB494u) {
        ctx->pc = 0x1EB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB490u;
        // 0x1eb494: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB498u;
        goto label_1eb498;
    }
    ctx->pc = 0x1EB490u;
    SET_GPR_U32(ctx, 31, 0x1EB498u);
    ctx->pc = 0x1EB494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB490u;
    // 0x1eb494: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB498u;
label_1eb498:
    // 0x1eb498: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1eb49c:
    if (ctx->pc == 0x1EB49Cu) {
        ctx->pc = 0x1EB4A0u;
        goto label_1eb4a0;
    }
    ctx->pc = 0x1EB498u;
    {
        const bool branch_taken_0x1eb498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb498) {
            ctx->pc = 0x1EB644u;
            goto label_1eb644;
        }
    }
    ctx->pc = 0x1EB4A0u;
label_1eb4a0:
    // 0x1eb4a0: 0x8c23d714  lw          $v1, -0x28EC($at)
    ctx->pc = 0x1eb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956820)));
label_1eb4a4:
    // 0x1eb4a4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1eb4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1eb4a8:
    // 0x1eb4a8: 0x8c22ccd4  lw          $v0, -0x332C($at)
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954196)));
label_1eb4ac:
    // 0x1eb4ac: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eb4b0:
    // 0x1eb4b0: 0x100082a  slt         $at, $t0, $zero
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1eb4b4:
    // 0x1eb4b4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_1eb4b8:
    if (ctx->pc == 0x1EB4B8u) {
        ctx->pc = 0x1EB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B4u;
        // 0x1eb4b8: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4BCu;
        goto label_1eb4bc;
    }
    ctx->pc = 0x1EB4B4u;
    {
        const bool branch_taken_0x1eb4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B4u;
        // 0x1eb4b8: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4b4) {
            ctx->pc = 0x1EB568u;
            goto label_1eb568;
        }
    }
    ctx->pc = 0x1EB4BCu;
label_1eb4bc:
    // 0x1eb4bc: 0x84023  negu        $t0, $t0
    ctx->pc = 0x1eb4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_1eb4c0:
    // 0x1eb4c0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb4c4:
    // 0x1eb4c4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb4c8:
    // 0x1eb4c8: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb4cc:
    // 0x1eb4cc: 0x64130060  daddiu      $s3, $zero, 0x60
    ctx->pc = 0x1eb4ccu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_1eb4d0:
    // 0x1eb4d0: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb4d4:
    // 0x1eb4d4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb4d8:
    // 0x1eb4d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb4dc:
    // 0x1eb4dc: 0x24a5d070  addiu       $a1, $a1, -0x2F90
    ctx->pc = 0x1eb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955120));
label_1eb4e0:
    // 0x1eb4e0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1eb4e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4e4:
    // 0x1eb4e4: 0x641500a0  daddiu      $s5, $zero, 0xA0
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1eb4e8:
    // 0x1eb4e8: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb4e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb4ec:
    // 0x1eb4ec: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb4f0:
    // 0x1eb4f0: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb4f4:
    // 0x1eb4f4: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb4f8:
    // 0x1eb4f8: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb4fc:
    // 0x1eb4fc: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb500:
    // 0x1eb500: 0x0  nop
    ctx->pc = 0x1eb500u;
    // NOP
label_1eb504:
    // 0x1eb504: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb504u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb508:
    // 0x1eb508: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb508u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb50c:
    // 0x1eb50c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb510:
    // 0x1eb510: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb510u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb514:
    // 0x1eb514: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb518:
    // 0x1eb518: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb518u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb51c:
    // 0x1eb51c: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb51cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb520:
    // 0x1eb520: 0x0  nop
    ctx->pc = 0x1eb520u;
    // NOP
label_1eb524:
    // 0x1eb524: 0x0  nop
    ctx->pc = 0x1eb524u;
    // NOP
label_1eb528:
    // 0x1eb528: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb528u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb52c:
    // 0x1eb52c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb530:
    // 0x1eb530: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb534:
    // 0x1eb534: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb538:
    // 0x1eb538: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb53c:
    // 0x1eb53c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb53cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb540:
    // 0x1eb540: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb544:
    // 0x1eb544: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb548:
    // 0x1eb548: 0x0  nop
    ctx->pc = 0x1eb548u;
    // NOP
label_1eb54c:
    // 0x1eb54c: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb550:
    // 0x1eb550: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb554:
    // 0x1eb554: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb558:
    // 0x1eb558: 0xc08f20e  jal         func_23C838
label_1eb55c:
    if (ctx->pc == 0x1EB55Cu) {
        ctx->pc = 0x1EB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB558u;
        // 0x1eb55c: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB560u;
        goto label_1eb560;
    }
    ctx->pc = 0x1EB558u;
    SET_GPR_U32(ctx, 31, 0x1EB560u);
    ctx->pc = 0x1EB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB558u;
    // 0x1eb55c: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB560u;
label_1eb560:
    // 0x1eb560: 0x10000038  b           . + 4 + (0x38 << 2)
label_1eb564:
    if (ctx->pc == 0x1EB564u) {
        ctx->pc = 0x1EB568u;
        goto label_1eb568;
    }
    ctx->pc = 0x1EB560u;
    {
        const bool branch_taken_0x1eb560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb560) {
            ctx->pc = 0x1EB644u;
            goto label_1eb644;
        }
    }
    ctx->pc = 0x1EB568u;
label_1eb568:
    // 0x1eb568: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x1eb568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1eb56c:
    // 0x1eb56c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_1eb570:
    if (ctx->pc == 0x1EB570u) {
        ctx->pc = 0x1EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB56Cu;
        // 0x1eb570: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB574u;
        goto label_1eb574;
    }
    ctx->pc = 0x1EB56Cu;
    {
        const bool branch_taken_0x1eb56c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB56Cu;
        // 0x1eb570: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb56c) {
            ctx->pc = 0x1EB620u;
            goto label_1eb620;
        }
    }
    ctx->pc = 0x1EB574u;
label_1eb574:
    // 0x1eb574: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1eb574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1eb578:
    // 0x1eb578: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1eb578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1eb57c:
    // 0x1eb57c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1eb57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1eb580:
    // 0x1eb580: 0x64140060  daddiu      $s4, $zero, 0x60
    ctx->pc = 0x1eb580u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_1eb584:
    // 0x1eb584: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb588:
    // 0x1eb588: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb58c:
    // 0x1eb58c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1eb590:
    // 0x1eb590: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb594:
    // 0x1eb594: 0x24a5d080  addiu       $a1, $a1, -0x2F80
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955136));
label_1eb598:
    // 0x1eb598: 0x641300a0  daddiu      $s3, $zero, 0xA0
    ctx->pc = 0x1eb598u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1eb59c:
    // 0x1eb59c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1eb59cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5a0:
    // 0x1eb5a0: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb5a0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb5a4:
    // 0x1eb5a4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1eb5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1eb5a8:
    // 0x1eb5a8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb5ac:
    // 0x1eb5ac: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1eb5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb5b0:
    // 0x1eb5b0: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1eb5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb5b4:
    // 0x1eb5b4: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1eb5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1eb5b8:
    // 0x1eb5b8: 0x0  nop
    ctx->pc = 0x1eb5b8u;
    // NOP
label_1eb5bc:
    // 0x1eb5bc: 0x3010  mfhi        $a2
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1eb5c0:
    // 0x1eb5c0: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1eb5c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb5c4:
    // 0x1eb5c4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1eb5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1eb5c8:
    // 0x1eb5c8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1eb5c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1eb5cc:
    // 0x1eb5cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eb5d0:
    // 0x1eb5d0: 0x3810  mfhi        $a3
    ctx->pc = 0x1eb5d0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1eb5d4:
    // 0x1eb5d4: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x1eb5d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb5d8:
    // 0x1eb5d8: 0x0  nop
    ctx->pc = 0x1eb5d8u;
    // NOP
label_1eb5dc:
    // 0x1eb5dc: 0x0  nop
    ctx->pc = 0x1eb5dcu;
    // NOP
label_1eb5e0:
    // 0x1eb5e0: 0x4010  mfhi        $t0
    ctx->pc = 0x1eb5e0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1eb5e4:
    // 0x1eb5e4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb5e8:
    // 0x1eb5e8: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1eb5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1eb5ec:
    // 0x1eb5ec: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1eb5f0:
    // 0x1eb5f0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1eb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1eb5f4:
    // 0x1eb5f4: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb5f8:
    // 0x1eb5f8: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1eb5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eb5fc:
    // 0x1eb5fc: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1eb600:
    // 0x1eb600: 0x0  nop
    ctx->pc = 0x1eb600u;
    // NOP
label_1eb604:
    // 0x1eb604: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb604u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb608:
    // 0x1eb608: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1eb60c:
    // 0x1eb60c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1eb60cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1eb610:
    // 0x1eb610: 0xc08f20e  jal         func_23C838
label_1eb614:
    if (ctx->pc == 0x1EB614u) {
        ctx->pc = 0x1EB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB610u;
        // 0x1eb614: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB618u;
        goto label_1eb618;
    }
    ctx->pc = 0x1EB610u;
    SET_GPR_U32(ctx, 31, 0x1EB618u);
    ctx->pc = 0x1EB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB610u;
    // 0x1eb614: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB618u;
label_1eb618:
    // 0x1eb618: 0x1000000a  b           . + 4 + (0xA << 2)
label_1eb61c:
    if (ctx->pc == 0x1EB61Cu) {
        ctx->pc = 0x1EB620u;
        goto label_1eb620;
    }
    ctx->pc = 0x1EB618u;
    {
        const bool branch_taken_0x1eb618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb618) {
            ctx->pc = 0x1EB644u;
            goto label_1eb644;
        }
    }
    ctx->pc = 0x1EB620u;
label_1eb620:
    // 0x1eb620: 0x641300a0  daddiu      $s3, $zero, 0xA0
    ctx->pc = 0x1eb620u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1eb624:
    // 0x1eb624: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eb628:
    // 0x1eb628: 0x24a5d058  addiu       $a1, $a1, -0x2FA8
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955096));
label_1eb62c:
    // 0x1eb62c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb630:
    // 0x1eb630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb634:
    // 0x1eb634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb638:
    // 0x1eb638: 0x64150060  daddiu      $s5, $zero, 0x60
    ctx->pc = 0x1eb638u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_1eb63c:
    // 0x1eb63c: 0xc08f20e  jal         func_23C838
label_1eb640:
    if (ctx->pc == 0x1EB640u) {
        ctx->pc = 0x1EB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB63Cu;
        // 0x1eb640: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB644u;
        goto label_1eb644;
    }
    ctx->pc = 0x1EB63Cu;
    SET_GPR_U32(ctx, 31, 0x1EB644u);
    ctx->pc = 0x1EB640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB63Cu;
    // 0x1eb640: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EB644u;
label_1eb644:
    // 0x1eb644: 0x26e6ffe8  addiu       $a2, $s7, -0x18
    ctx->pc = 0x1eb644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
label_1eb648:
    // 0x1eb648: 0x26c7001c  addiu       $a3, $s6, 0x1C
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
label_1eb64c:
    // 0x1eb64c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1eb64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1eb650:
    // 0x1eb650: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1eb650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1eb654:
    // 0x1eb654: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eb654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eb658:
    // 0x1eb658: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1eb658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb65c:
    // 0x1eb65c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1eb65cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb660:
    // 0x1eb660: 0xc0708ac  jal         func_1C22B0
label_1eb664:
    if (ctx->pc == 0x1EB664u) {
        ctx->pc = 0x1EB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB660u;
        // 0x1eb664: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB668u;
        goto label_1eb668;
    }
    ctx->pc = 0x1EB660u;
    SET_GPR_U32(ctx, 31, 0x1EB668u);
    ctx->pc = 0x1EB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB660u;
    // 0x1eb664: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1EB668u;
label_1eb668:
    // 0x1eb668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb66c:
    // 0x1eb66c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eb66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb670:
    // 0x1eb670: 0x326800ff  andi        $t0, $s3, 0xFF
    ctx->pc = 0x1eb670u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1eb674:
    // 0x1eb674: 0x328900ff  andi        $t1, $s4, 0xFF
    ctx->pc = 0x1eb674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1eb678:
    // 0x1eb678: 0x32aa00ff  andi        $t2, $s5, 0xFF
    ctx->pc = 0x1eb678u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1eb67c:
    // 0x1eb67c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eb680:
    // 0x1eb680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1eb684:
    // 0x1eb684: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1eb684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1eb688:
    // 0x1eb688: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1eb68c:
    // 0x1eb68c: 0xa0d30080  sb          $s3, 0x80($a2)
    ctx->pc = 0x1eb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 19));
label_1eb690:
    // 0x1eb690: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x1eb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
label_1eb694:
    // 0x1eb694: 0xa0d40081  sb          $s4, 0x81($a2)
    ctx->pc = 0x1eb694u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 129), (uint8_t)GPR_U32(ctx, 20));
label_1eb698:
    // 0x1eb698: 0xa0d50082  sb          $s5, 0x82($a2)
    ctx->pc = 0x1eb698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 130), (uint8_t)GPR_U32(ctx, 21));
label_1eb69c:
    // 0x1eb69c: 0xa0c30083  sb          $v1, 0x83($a2)
    ctx->pc = 0x1eb69cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 3));
label_1eb6a0:
    // 0x1eb6a0: 0xacc20084  sw          $v0, 0x84($a2)
    ctx->pc = 0x1eb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 2));
label_1eb6a4:
    // 0x1eb6a4: 0xa0d30120  sb          $s3, 0x120($a2)
    ctx->pc = 0x1eb6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 288), (uint8_t)GPR_U32(ctx, 19));
label_1eb6a8:
    // 0x1eb6a8: 0xa0d40121  sb          $s4, 0x121($a2)
    ctx->pc = 0x1eb6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 289), (uint8_t)GPR_U32(ctx, 20));
label_1eb6ac:
    // 0x1eb6ac: 0xa0d50122  sb          $s5, 0x122($a2)
    ctx->pc = 0x1eb6acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 290), (uint8_t)GPR_U32(ctx, 21));
label_1eb6b0:
    // 0x1eb6b0: 0xa0c30123  sb          $v1, 0x123($a2)
    ctx->pc = 0x1eb6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 291), (uint8_t)GPR_U32(ctx, 3));
label_1eb6b4:
    // 0x1eb6b4: 0xacc20124  sw          $v0, 0x124($a2)
    ctx->pc = 0x1eb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 2));
label_1eb6b8:
    // 0x1eb6b8: 0xa0d301c0  sb          $s3, 0x1C0($a2)
    ctx->pc = 0x1eb6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 448), (uint8_t)GPR_U32(ctx, 19));
label_1eb6bc:
    // 0x1eb6bc: 0xa0d401c1  sb          $s4, 0x1C1($a2)
    ctx->pc = 0x1eb6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 449), (uint8_t)GPR_U32(ctx, 20));
label_1eb6c0:
    // 0x1eb6c0: 0xa0d501c2  sb          $s5, 0x1C2($a2)
    ctx->pc = 0x1eb6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 450), (uint8_t)GPR_U32(ctx, 21));
label_1eb6c4:
    // 0x1eb6c4: 0xa0c301c3  sb          $v1, 0x1C3($a2)
    ctx->pc = 0x1eb6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 451), (uint8_t)GPR_U32(ctx, 3));
label_1eb6c8:
    // 0x1eb6c8: 0xacc201c4  sw          $v0, 0x1C4($a2)
    ctx->pc = 0x1eb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 2));
label_1eb6cc:
    // 0x1eb6cc: 0xa0d30260  sb          $s3, 0x260($a2)
    ctx->pc = 0x1eb6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 608), (uint8_t)GPR_U32(ctx, 19));
label_1eb6d0:
    // 0x1eb6d0: 0xa0d40261  sb          $s4, 0x261($a2)
    ctx->pc = 0x1eb6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 609), (uint8_t)GPR_U32(ctx, 20));
label_1eb6d4:
    // 0x1eb6d4: 0xa0d50262  sb          $s5, 0x262($a2)
    ctx->pc = 0x1eb6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 610), (uint8_t)GPR_U32(ctx, 21));
label_1eb6d8:
    // 0x1eb6d8: 0xa0c30263  sb          $v1, 0x263($a2)
    ctx->pc = 0x1eb6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 611), (uint8_t)GPR_U32(ctx, 3));
label_1eb6dc:
    // 0x1eb6dc: 0xacc20264  sw          $v0, 0x264($a2)
    ctx->pc = 0x1eb6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 612), GPR_U32(ctx, 2));
label_1eb6e0:
    // 0x1eb6e0: 0xa0d30300  sb          $s3, 0x300($a2)
    ctx->pc = 0x1eb6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 768), (uint8_t)GPR_U32(ctx, 19));
label_1eb6e4:
    // 0x1eb6e4: 0xa0d40301  sb          $s4, 0x301($a2)
    ctx->pc = 0x1eb6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 769), (uint8_t)GPR_U32(ctx, 20));
label_1eb6e8:
    // 0x1eb6e8: 0xa0d50302  sb          $s5, 0x302($a2)
    ctx->pc = 0x1eb6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 770), (uint8_t)GPR_U32(ctx, 21));
label_1eb6ec:
    // 0x1eb6ec: 0xa0c30303  sb          $v1, 0x303($a2)
    ctx->pc = 0x1eb6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 771), (uint8_t)GPR_U32(ctx, 3));
label_1eb6f0:
    // 0x1eb6f0: 0xacc20304  sw          $v0, 0x304($a2)
    ctx->pc = 0x1eb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 772), GPR_U32(ctx, 2));
label_1eb6f4:
    // 0x1eb6f4: 0xa0d303a0  sb          $s3, 0x3A0($a2)
    ctx->pc = 0x1eb6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 928), (uint8_t)GPR_U32(ctx, 19));
label_1eb6f8:
    // 0x1eb6f8: 0xa0d403a1  sb          $s4, 0x3A1($a2)
    ctx->pc = 0x1eb6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 929), (uint8_t)GPR_U32(ctx, 20));
label_1eb6fc:
    // 0x1eb6fc: 0xa0d503a2  sb          $s5, 0x3A2($a2)
    ctx->pc = 0x1eb6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 930), (uint8_t)GPR_U32(ctx, 21));
label_1eb700:
    // 0x1eb700: 0xa0c303a3  sb          $v1, 0x3A3($a2)
    ctx->pc = 0x1eb700u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 931), (uint8_t)GPR_U32(ctx, 3));
label_1eb704:
    // 0x1eb704: 0xacc203a4  sw          $v0, 0x3A4($a2)
    ctx->pc = 0x1eb704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 932), GPR_U32(ctx, 2));
label_1eb708:
    // 0x1eb708: 0xa0d30440  sb          $s3, 0x440($a2)
    ctx->pc = 0x1eb708u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1088), (uint8_t)GPR_U32(ctx, 19));
label_1eb70c:
    // 0x1eb70c: 0xa0d40441  sb          $s4, 0x441($a2)
    ctx->pc = 0x1eb70cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1089), (uint8_t)GPR_U32(ctx, 20));
label_1eb710:
    // 0x1eb710: 0xa0d50442  sb          $s5, 0x442($a2)
    ctx->pc = 0x1eb710u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1090), (uint8_t)GPR_U32(ctx, 21));
label_1eb714:
    // 0x1eb714: 0xa0c30443  sb          $v1, 0x443($a2)
    ctx->pc = 0x1eb714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1eb718:
    // 0x1eb718: 0xacc20444  sw          $v0, 0x444($a2)
    ctx->pc = 0x1eb718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1092), GPR_U32(ctx, 2));
label_1eb71c:
    // 0x1eb71c: 0xa0d304e0  sb          $s3, 0x4E0($a2)
    ctx->pc = 0x1eb71cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1248), (uint8_t)GPR_U32(ctx, 19));
label_1eb720:
    // 0x1eb720: 0xa0d404e1  sb          $s4, 0x4E1($a2)
    ctx->pc = 0x1eb720u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1249), (uint8_t)GPR_U32(ctx, 20));
label_1eb724:
    // 0x1eb724: 0xa0d504e2  sb          $s5, 0x4E2($a2)
    ctx->pc = 0x1eb724u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1250), (uint8_t)GPR_U32(ctx, 21));
    ctx->pc = 0x1eb728u;
    return;
}

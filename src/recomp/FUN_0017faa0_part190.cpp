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


void FUN_0017faa0_part190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        case 0x1dc00cu: goto label_1dc00c;
        case 0x1dc010u: goto label_1dc010;
        case 0x1dc014u: goto label_1dc014;
        case 0x1dc018u: goto label_1dc018;
        case 0x1dc01cu: goto label_1dc01c;
        case 0x1dc020u: goto label_1dc020;
        case 0x1dc024u: goto label_1dc024;
        case 0x1dc028u: goto label_1dc028;
        case 0x1dc02cu: goto label_1dc02c;
        case 0x1dc030u: goto label_1dc030;
        case 0x1dc034u: goto label_1dc034;
        case 0x1dc038u: goto label_1dc038;
        case 0x1dc03cu: goto label_1dc03c;
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc044u: goto label_1dc044;
        case 0x1dc048u: goto label_1dc048;
        case 0x1dc04cu: goto label_1dc04c;
        case 0x1dc050u: goto label_1dc050;
        case 0x1dc054u: goto label_1dc054;
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc05cu: goto label_1dc05c;
        case 0x1dc060u: goto label_1dc060;
        case 0x1dc064u: goto label_1dc064;
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc06cu: goto label_1dc06c;
        case 0x1dc070u: goto label_1dc070;
        case 0x1dc074u: goto label_1dc074;
        case 0x1dc078u: goto label_1dc078;
        case 0x1dc07cu: goto label_1dc07c;
        case 0x1dc080u: goto label_1dc080;
        case 0x1dc084u: goto label_1dc084;
        case 0x1dc088u: goto label_1dc088;
        case 0x1dc08cu: goto label_1dc08c;
        case 0x1dc090u: goto label_1dc090;
        case 0x1dc094u: goto label_1dc094;
        case 0x1dc098u: goto label_1dc098;
        case 0x1dc09cu: goto label_1dc09c;
        case 0x1dc0a0u: goto label_1dc0a0;
        case 0x1dc0a4u: goto label_1dc0a4;
        case 0x1dc0a8u: goto label_1dc0a8;
        case 0x1dc0acu: goto label_1dc0ac;
        case 0x1dc0b0u: goto label_1dc0b0;
        case 0x1dc0b4u: goto label_1dc0b4;
        case 0x1dc0b8u: goto label_1dc0b8;
        case 0x1dc0bcu: goto label_1dc0bc;
        case 0x1dc0c0u: goto label_1dc0c0;
        case 0x1dc0c4u: goto label_1dc0c4;
        case 0x1dc0c8u: goto label_1dc0c8;
        case 0x1dc0ccu: goto label_1dc0cc;
        case 0x1dc0d0u: goto label_1dc0d0;
        case 0x1dc0d4u: goto label_1dc0d4;
        case 0x1dc0d8u: goto label_1dc0d8;
        case 0x1dc0dcu: goto label_1dc0dc;
        case 0x1dc0e0u: goto label_1dc0e0;
        case 0x1dc0e4u: goto label_1dc0e4;
        case 0x1dc0e8u: goto label_1dc0e8;
        case 0x1dc0ecu: goto label_1dc0ec;
        case 0x1dc0f0u: goto label_1dc0f0;
        case 0x1dc0f4u: goto label_1dc0f4;
        case 0x1dc0f8u: goto label_1dc0f8;
        case 0x1dc0fcu: goto label_1dc0fc;
        case 0x1dc100u: goto label_1dc100;
        case 0x1dc104u: goto label_1dc104;
        case 0x1dc108u: goto label_1dc108;
        case 0x1dc10cu: goto label_1dc10c;
        case 0x1dc110u: goto label_1dc110;
        case 0x1dc114u: goto label_1dc114;
        case 0x1dc118u: goto label_1dc118;
        case 0x1dc11cu: goto label_1dc11c;
        case 0x1dc120u: goto label_1dc120;
        case 0x1dc124u: goto label_1dc124;
        case 0x1dc128u: goto label_1dc128;
        case 0x1dc12cu: goto label_1dc12c;
        case 0x1dc130u: goto label_1dc130;
        case 0x1dc134u: goto label_1dc134;
        case 0x1dc138u: goto label_1dc138;
        case 0x1dc13cu: goto label_1dc13c;
        case 0x1dc140u: goto label_1dc140;
        case 0x1dc144u: goto label_1dc144;
        case 0x1dc148u: goto label_1dc148;
        case 0x1dc14cu: goto label_1dc14c;
        case 0x1dc150u: goto label_1dc150;
        case 0x1dc154u: goto label_1dc154;
        case 0x1dc158u: goto label_1dc158;
        case 0x1dc15cu: goto label_1dc15c;
        case 0x1dc160u: goto label_1dc160;
        case 0x1dc164u: goto label_1dc164;
        case 0x1dc168u: goto label_1dc168;
        case 0x1dc16cu: goto label_1dc16c;
        case 0x1dc170u: goto label_1dc170;
        case 0x1dc174u: goto label_1dc174;
        case 0x1dc178u: goto label_1dc178;
        case 0x1dc17cu: goto label_1dc17c;
        case 0x1dc180u: goto label_1dc180;
        case 0x1dc184u: goto label_1dc184;
        case 0x1dc188u: goto label_1dc188;
        case 0x1dc18cu: goto label_1dc18c;
        case 0x1dc190u: goto label_1dc190;
        case 0x1dc194u: goto label_1dc194;
        case 0x1dc198u: goto label_1dc198;
        case 0x1dc19cu: goto label_1dc19c;
        case 0x1dc1a0u: goto label_1dc1a0;
        case 0x1dc1a4u: goto label_1dc1a4;
        case 0x1dc1a8u: goto label_1dc1a8;
        case 0x1dc1acu: goto label_1dc1ac;
        case 0x1dc1b0u: goto label_1dc1b0;
        case 0x1dc1b4u: goto label_1dc1b4;
        case 0x1dc1b8u: goto label_1dc1b8;
        case 0x1dc1bcu: goto label_1dc1bc;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1c4u: goto label_1dc1c4;
        case 0x1dc1c8u: goto label_1dc1c8;
        case 0x1dc1ccu: goto label_1dc1cc;
        case 0x1dc1d0u: goto label_1dc1d0;
        case 0x1dc1d4u: goto label_1dc1d4;
        case 0x1dc1d8u: goto label_1dc1d8;
        case 0x1dc1dcu: goto label_1dc1dc;
        case 0x1dc1e0u: goto label_1dc1e0;
        case 0x1dc1e4u: goto label_1dc1e4;
        case 0x1dc1e8u: goto label_1dc1e8;
        case 0x1dc1ecu: goto label_1dc1ec;
        case 0x1dc1f0u: goto label_1dc1f0;
        case 0x1dc1f4u: goto label_1dc1f4;
        case 0x1dc1f8u: goto label_1dc1f8;
        case 0x1dc1fcu: goto label_1dc1fc;
        case 0x1dc200u: goto label_1dc200;
        case 0x1dc204u: goto label_1dc204;
        case 0x1dc208u: goto label_1dc208;
        case 0x1dc20cu: goto label_1dc20c;
        case 0x1dc210u: goto label_1dc210;
        case 0x1dc214u: goto label_1dc214;
        case 0x1dc218u: goto label_1dc218;
        case 0x1dc21cu: goto label_1dc21c;
        case 0x1dc220u: goto label_1dc220;
        case 0x1dc224u: goto label_1dc224;
        case 0x1dc228u: goto label_1dc228;
        case 0x1dc22cu: goto label_1dc22c;
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc234u: goto label_1dc234;
        case 0x1dc238u: goto label_1dc238;
        case 0x1dc23cu: goto label_1dc23c;
        case 0x1dc240u: goto label_1dc240;
        case 0x1dc244u: goto label_1dc244;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc24cu: goto label_1dc24c;
        case 0x1dc250u: goto label_1dc250;
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc25cu: goto label_1dc25c;
        case 0x1dc260u: goto label_1dc260;
        case 0x1dc264u: goto label_1dc264;
        case 0x1dc268u: goto label_1dc268;
        case 0x1dc26cu: goto label_1dc26c;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc274u: goto label_1dc274;
        case 0x1dc278u: goto label_1dc278;
        case 0x1dc27cu: goto label_1dc27c;
        case 0x1dc280u: goto label_1dc280;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc288u: goto label_1dc288;
        case 0x1dc28cu: goto label_1dc28c;
        case 0x1dc290u: goto label_1dc290;
        case 0x1dc294u: goto label_1dc294;
        case 0x1dc298u: goto label_1dc298;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2a0u: goto label_1dc2a0;
        case 0x1dc2a4u: goto label_1dc2a4;
        case 0x1dc2a8u: goto label_1dc2a8;
        case 0x1dc2acu: goto label_1dc2ac;
        case 0x1dc2b0u: goto label_1dc2b0;
        case 0x1dc2b4u: goto label_1dc2b4;
        case 0x1dc2b8u: goto label_1dc2b8;
        case 0x1dc2bcu: goto label_1dc2bc;
        case 0x1dc2c0u: goto label_1dc2c0;
        case 0x1dc2c4u: goto label_1dc2c4;
        case 0x1dc2c8u: goto label_1dc2c8;
        case 0x1dc2ccu: goto label_1dc2cc;
        case 0x1dc2d0u: goto label_1dc2d0;
        case 0x1dc2d4u: goto label_1dc2d4;
        case 0x1dc2d8u: goto label_1dc2d8;
        case 0x1dc2dcu: goto label_1dc2dc;
        case 0x1dc2e0u: goto label_1dc2e0;
        case 0x1dc2e4u: goto label_1dc2e4;
        case 0x1dc2e8u: goto label_1dc2e8;
        case 0x1dc2ecu: goto label_1dc2ec;
        case 0x1dc2f0u: goto label_1dc2f0;
        case 0x1dc2f4u: goto label_1dc2f4;
        case 0x1dc2f8u: goto label_1dc2f8;
        case 0x1dc2fcu: goto label_1dc2fc;
        case 0x1dc300u: goto label_1dc300;
        case 0x1dc304u: goto label_1dc304;
        case 0x1dc308u: goto label_1dc308;
        case 0x1dc30cu: goto label_1dc30c;
        case 0x1dc310u: goto label_1dc310;
        case 0x1dc314u: goto label_1dc314;
        case 0x1dc318u: goto label_1dc318;
        case 0x1dc31cu: goto label_1dc31c;
        case 0x1dc320u: goto label_1dc320;
        case 0x1dc324u: goto label_1dc324;
        case 0x1dc328u: goto label_1dc328;
        case 0x1dc32cu: goto label_1dc32c;
        case 0x1dc330u: goto label_1dc330;
        case 0x1dc334u: goto label_1dc334;
        case 0x1dc338u: goto label_1dc338;
        case 0x1dc33cu: goto label_1dc33c;
        case 0x1dc340u: goto label_1dc340;
        case 0x1dc344u: goto label_1dc344;
        case 0x1dc348u: goto label_1dc348;
        case 0x1dc34cu: goto label_1dc34c;
        case 0x1dc350u: goto label_1dc350;
        case 0x1dc354u: goto label_1dc354;
        case 0x1dc358u: goto label_1dc358;
        case 0x1dc35cu: goto label_1dc35c;
        case 0x1dc360u: goto label_1dc360;
        case 0x1dc364u: goto label_1dc364;
        case 0x1dc368u: goto label_1dc368;
        case 0x1dc36cu: goto label_1dc36c;
        case 0x1dc370u: goto label_1dc370;
        case 0x1dc374u: goto label_1dc374;
        case 0x1dc378u: goto label_1dc378;
        case 0x1dc37cu: goto label_1dc37c;
        case 0x1dc380u: goto label_1dc380;
        case 0x1dc384u: goto label_1dc384;
        case 0x1dc388u: goto label_1dc388;
        case 0x1dc38cu: goto label_1dc38c;
        case 0x1dc390u: goto label_1dc390;
        case 0x1dc394u: goto label_1dc394;
        case 0x1dc398u: goto label_1dc398;
        case 0x1dc39cu: goto label_1dc39c;
        case 0x1dc3a0u: goto label_1dc3a0;
        case 0x1dc3a4u: goto label_1dc3a4;
        case 0x1dc3a8u: goto label_1dc3a8;
        case 0x1dc3acu: goto label_1dc3ac;
        case 0x1dc3b0u: goto label_1dc3b0;
        case 0x1dc3b4u: goto label_1dc3b4;
        case 0x1dc3b8u: goto label_1dc3b8;
        case 0x1dc3bcu: goto label_1dc3bc;
        case 0x1dc3c0u: goto label_1dc3c0;
        case 0x1dc3c4u: goto label_1dc3c4;
        case 0x1dc3c8u: goto label_1dc3c8;
        case 0x1dc3ccu: goto label_1dc3cc;
        case 0x1dc3d0u: goto label_1dc3d0;
        case 0x1dc3d4u: goto label_1dc3d4;
        case 0x1dc3d8u: goto label_1dc3d8;
        case 0x1dc3dcu: goto label_1dc3dc;
        case 0x1dc3e0u: goto label_1dc3e0;
        case 0x1dc3e4u: goto label_1dc3e4;
        case 0x1dc3e8u: goto label_1dc3e8;
        case 0x1dc3ecu: goto label_1dc3ec;
        case 0x1dc3f0u: goto label_1dc3f0;
        case 0x1dc3f4u: goto label_1dc3f4;
        case 0x1dc3f8u: goto label_1dc3f8;
        case 0x1dc3fcu: goto label_1dc3fc;
        case 0x1dc400u: goto label_1dc400;
        case 0x1dc404u: goto label_1dc404;
        case 0x1dc408u: goto label_1dc408;
        case 0x1dc40cu: goto label_1dc40c;
        case 0x1dc410u: goto label_1dc410;
        case 0x1dc414u: goto label_1dc414;
        case 0x1dc418u: goto label_1dc418;
        case 0x1dc41cu: goto label_1dc41c;
        case 0x1dc420u: goto label_1dc420;
        case 0x1dc424u: goto label_1dc424;
        case 0x1dc428u: goto label_1dc428;
        case 0x1dc42cu: goto label_1dc42c;
        case 0x1dc430u: goto label_1dc430;
        case 0x1dc434u: goto label_1dc434;
        case 0x1dc438u: goto label_1dc438;
        case 0x1dc43cu: goto label_1dc43c;
        case 0x1dc440u: goto label_1dc440;
        case 0x1dc444u: goto label_1dc444;
        case 0x1dc448u: goto label_1dc448;
        case 0x1dc44cu: goto label_1dc44c;
        case 0x1dc450u: goto label_1dc450;
        case 0x1dc454u: goto label_1dc454;
        case 0x1dc458u: goto label_1dc458;
        case 0x1dc45cu: goto label_1dc45c;
        case 0x1dc460u: goto label_1dc460;
        case 0x1dc464u: goto label_1dc464;
        case 0x1dc468u: goto label_1dc468;
        case 0x1dc46cu: goto label_1dc46c;
        case 0x1dc470u: goto label_1dc470;
        case 0x1dc474u: goto label_1dc474;
        case 0x1dc478u: goto label_1dc478;
        case 0x1dc47cu: goto label_1dc47c;
        case 0x1dc480u: goto label_1dc480;
        case 0x1dc484u: goto label_1dc484;
        case 0x1dc488u: goto label_1dc488;
        case 0x1dc48cu: goto label_1dc48c;
        case 0x1dc490u: goto label_1dc490;
        case 0x1dc494u: goto label_1dc494;
        case 0x1dc498u: goto label_1dc498;
        case 0x1dc49cu: goto label_1dc49c;
        case 0x1dc4a0u: goto label_1dc4a0;
        case 0x1dc4a4u: goto label_1dc4a4;
        case 0x1dc4a8u: goto label_1dc4a8;
        case 0x1dc4acu: goto label_1dc4ac;
        case 0x1dc4b0u: goto label_1dc4b0;
        case 0x1dc4b4u: goto label_1dc4b4;
        case 0x1dc4b8u: goto label_1dc4b8;
        case 0x1dc4bcu: goto label_1dc4bc;
        case 0x1dc4c0u: goto label_1dc4c0;
        case 0x1dc4c4u: goto label_1dc4c4;
        case 0x1dc4c8u: goto label_1dc4c8;
        case 0x1dc4ccu: goto label_1dc4cc;
        case 0x1dc4d0u: goto label_1dc4d0;
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4d8u: goto label_1dc4d8;
        case 0x1dc4dcu: goto label_1dc4dc;
        case 0x1dc4e0u: goto label_1dc4e0;
        case 0x1dc4e4u: goto label_1dc4e4;
        case 0x1dc4e8u: goto label_1dc4e8;
        case 0x1dc4ecu: goto label_1dc4ec;
        case 0x1dc4f0u: goto label_1dc4f0;
        case 0x1dc4f4u: goto label_1dc4f4;
        case 0x1dc4f8u: goto label_1dc4f8;
        case 0x1dc4fcu: goto label_1dc4fc;
        case 0x1dc500u: goto label_1dc500;
        case 0x1dc504u: goto label_1dc504;
        case 0x1dc508u: goto label_1dc508;
        case 0x1dc50cu: goto label_1dc50c;
        case 0x1dc510u: goto label_1dc510;
        case 0x1dc514u: goto label_1dc514;
        case 0x1dc518u: goto label_1dc518;
        case 0x1dc51cu: goto label_1dc51c;
        case 0x1dc520u: goto label_1dc520;
        case 0x1dc524u: goto label_1dc524;
        case 0x1dc528u: goto label_1dc528;
        case 0x1dc52cu: goto label_1dc52c;
        case 0x1dc530u: goto label_1dc530;
        case 0x1dc534u: goto label_1dc534;
        case 0x1dc538u: goto label_1dc538;
        case 0x1dc53cu: goto label_1dc53c;
        case 0x1dc540u: goto label_1dc540;
        case 0x1dc544u: goto label_1dc544;
        case 0x1dc548u: goto label_1dc548;
        case 0x1dc54cu: goto label_1dc54c;
        case 0x1dc550u: goto label_1dc550;
        case 0x1dc554u: goto label_1dc554;
        case 0x1dc558u: goto label_1dc558;
        case 0x1dc55cu: goto label_1dc55c;
        case 0x1dc560u: goto label_1dc560;
        case 0x1dc564u: goto label_1dc564;
        case 0x1dc568u: goto label_1dc568;
        case 0x1dc56cu: goto label_1dc56c;
        case 0x1dc570u: goto label_1dc570;
        case 0x1dc574u: goto label_1dc574;
        case 0x1dc578u: goto label_1dc578;
        case 0x1dc57cu: goto label_1dc57c;
        case 0x1dc580u: goto label_1dc580;
        case 0x1dc584u: goto label_1dc584;
        case 0x1dc588u: goto label_1dc588;
        case 0x1dc58cu: goto label_1dc58c;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc594u: goto label_1dc594;
        case 0x1dc598u: goto label_1dc598;
        case 0x1dc59cu: goto label_1dc59c;
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5a4u: goto label_1dc5a4;
        case 0x1dc5a8u: goto label_1dc5a8;
        case 0x1dc5acu: goto label_1dc5ac;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5b8u: goto label_1dc5b8;
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5c0u: goto label_1dc5c0;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5c8u: goto label_1dc5c8;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5d0u: goto label_1dc5d0;
        case 0x1dc5d4u: goto label_1dc5d4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc5dcu: goto label_1dc5dc;
        case 0x1dc5e0u: goto label_1dc5e0;
        case 0x1dc5e4u: goto label_1dc5e4;
        case 0x1dc5e8u: goto label_1dc5e8;
        case 0x1dc5ecu: goto label_1dc5ec;
        case 0x1dc5f0u: goto label_1dc5f0;
        case 0x1dc5f4u: goto label_1dc5f4;
        case 0x1dc5f8u: goto label_1dc5f8;
        case 0x1dc5fcu: goto label_1dc5fc;
        case 0x1dc600u: goto label_1dc600;
        case 0x1dc604u: goto label_1dc604;
        case 0x1dc608u: goto label_1dc608;
        case 0x1dc60cu: goto label_1dc60c;
        case 0x1dc610u: goto label_1dc610;
        case 0x1dc614u: goto label_1dc614;
        case 0x1dc618u: goto label_1dc618;
        case 0x1dc61cu: goto label_1dc61c;
        case 0x1dc620u: goto label_1dc620;
        case 0x1dc624u: goto label_1dc624;
        case 0x1dc628u: goto label_1dc628;
        case 0x1dc62cu: goto label_1dc62c;
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc634u: goto label_1dc634;
        case 0x1dc638u: goto label_1dc638;
        case 0x1dc63cu: goto label_1dc63c;
        case 0x1dc640u: goto label_1dc640;
        case 0x1dc644u: goto label_1dc644;
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc64cu: goto label_1dc64c;
        case 0x1dc650u: goto label_1dc650;
        case 0x1dc654u: goto label_1dc654;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc65cu: goto label_1dc65c;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc664u: goto label_1dc664;
        case 0x1dc668u: goto label_1dc668;
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc674u: goto label_1dc674;
        case 0x1dc678u: goto label_1dc678;
        case 0x1dc67cu: goto label_1dc67c;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc684u: goto label_1dc684;
        case 0x1dc688u: goto label_1dc688;
        case 0x1dc68cu: goto label_1dc68c;
        case 0x1dc690u: goto label_1dc690;
        case 0x1dc694u: goto label_1dc694;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc69cu: goto label_1dc69c;
        case 0x1dc6a0u: goto label_1dc6a0;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6acu: goto label_1dc6ac;
        case 0x1dc6b0u: goto label_1dc6b0;
        case 0x1dc6b4u: goto label_1dc6b4;
        case 0x1dc6b8u: goto label_1dc6b8;
        case 0x1dc6bcu: goto label_1dc6bc;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6c4u: goto label_1dc6c4;
        case 0x1dc6c8u: goto label_1dc6c8;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6d4u: goto label_1dc6d4;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc6dcu: goto label_1dc6dc;
        case 0x1dc6e0u: goto label_1dc6e0;
        case 0x1dc6e4u: goto label_1dc6e4;
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6ecu: goto label_1dc6ec;
        case 0x1dc6f0u: goto label_1dc6f0;
        case 0x1dc6f4u: goto label_1dc6f4;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc6fcu: goto label_1dc6fc;
        default: return;
    }

label_1dbf30:
    // 0x1dbf30: 0xc077e84  jal         func_1DFA10
label_1dbf34:
    if (ctx->pc == 0x1DBF34u) {
        ctx->pc = 0x1DBF38u;
        goto label_1dbf38;
    }
    ctx->pc = 0x1DBF30u;
    SET_GPR_U32(ctx, 31, 0x1DBF38u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DBF38u;
label_1dbf38:
    // 0x1dbf38: 0xc077d90  jal         func_1DF640
label_1dbf3c:
    if (ctx->pc == 0x1DBF3Cu) {
        ctx->pc = 0x1DBF40u;
        goto label_1dbf40;
    }
    ctx->pc = 0x1DBF38u;
    SET_GPR_U32(ctx, 31, 0x1DBF40u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DBF40u;
label_1dbf40:
    // 0x1dbf40: 0xc077ab4  jal         func_1DEAD0
label_1dbf44:
    if (ctx->pc == 0x1DBF44u) {
        ctx->pc = 0x1DBF48u;
        goto label_1dbf48;
    }
    ctx->pc = 0x1DBF40u;
    SET_GPR_U32(ctx, 31, 0x1DBF48u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DBF48u;
label_1dbf48:
    // 0x1dbf48: 0xc077880  jal         func_1DE200
label_1dbf4c:
    if (ctx->pc == 0x1DBF4Cu) {
        ctx->pc = 0x1DBF50u;
        goto label_1dbf50;
    }
    ctx->pc = 0x1DBF48u;
    SET_GPR_U32(ctx, 31, 0x1DBF50u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DBF50u;
label_1dbf50:
    // 0x1dbf50: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dbf54:
    // 0x1dbf54: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dbf58:
    if (ctx->pc == 0x1DBF58u) {
        ctx->pc = 0x1DBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF54u;
        // 0x1dbf58: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF5Cu;
        goto label_1dbf5c;
    }
    ctx->pc = 0x1DBF54u;
    {
        const bool branch_taken_0x1dbf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF54u;
        // 0x1dbf58: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf54) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DBF5Cu;
label_1dbf5c:
    // 0x1dbf5c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dbf60:
    // 0x1dbf60: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbf64:
    // 0x1dbf64: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dbf68:
    // 0x1dbf68: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dbf6c:
    // 0x1dbf6c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dbf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dbf70:
    // 0x1dbf70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbf70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf74:
    // 0x1dbf74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbf74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf78:
    // 0x1dbf78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbf78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf7c:
    // 0x1dbf7c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dbf80:
    // 0x1dbf80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbf84:
    // 0x1dbf84: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dbf88:
    // 0x1dbf88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbf8c:
    // 0x1dbf8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dbf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbf90:
    // 0x1dbf90: 0xc066c72  jal         func_19B1C8
label_1dbf94:
    if (ctx->pc == 0x1DBF94u) {
        ctx->pc = 0x1DBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF90u;
        // 0x1dbf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF98u;
        goto label_1dbf98;
    }
    ctx->pc = 0x1DBF90u;
    SET_GPR_U32(ctx, 31, 0x1DBF98u);
    ctx->pc = 0x1DBF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF90u;
    // 0x1dbf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DBF98u;
label_1dbf98:
    // 0x1dbf98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dbf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dbf9c:
    // 0x1dbf9c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dbfa0:
    // 0x1dbfa0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbfa4:
    // 0x1dbfa4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dbfa8:
    // 0x1dbfa8: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dbfac:
    // 0x1dbfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbfb0:
    // 0x1dbfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbfb4:
    // 0x1dbfb4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbfb8:
    // 0x1dbfb8: 0xc070e2c  jal         func_1C38B0
label_1dbfbc:
    if (ctx->pc == 0x1DBFBCu) {
        ctx->pc = 0x1DBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFB8u;
        // 0x1dbfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFC0u;
        goto label_1dbfc0;
    }
    ctx->pc = 0x1DBFB8u;
    SET_GPR_U32(ctx, 31, 0x1DBFC0u);
    ctx->pc = 0x1DBFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFB8u;
    // 0x1dbfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DBFC0u;
label_1dbfc0:
    // 0x1dbfc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dbfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfc4:
    // 0x1dbfc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfc8:
    // 0x1dbfc8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dbfcc:
    // 0x1dbfcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbfccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfd0:
    // 0x1dbfd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbfd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfd4:
    // 0x1dbfd4: 0xc066c72  jal         func_19B1C8
label_1dbfd8:
    if (ctx->pc == 0x1DBFD8u) {
        ctx->pc = 0x1DBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD4u;
        // 0x1dbfd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFDCu;
        goto label_1dbfdc;
    }
    ctx->pc = 0x1DBFD4u;
    SET_GPR_U32(ctx, 31, 0x1DBFDCu);
    ctx->pc = 0x1DBFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFD4u;
    // 0x1dbfd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DBFDCu;
label_1dbfdc:
    // 0x1dbfdc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dbfe0:
    // 0x1dbfe0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dbfe4:
    if (ctx->pc == 0x1DBFE4u) {
        ctx->pc = 0x1DBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFE0u;
        // 0x1dbfe4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFE8u;
        goto label_1dbfe8;
    }
    ctx->pc = 0x1DBFE0u;
    {
        const bool branch_taken_0x1dbfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFE0u;
        // 0x1dbfe4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfe0) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DBFE8u;
label_1dbfe8:
    // 0x1dbfe8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dbfec:
    // 0x1dbfec: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dbff0:
    // 0x1dbff0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dbff4:
    // 0x1dbff4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dbff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dbff8:
    // 0x1dbff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dbffc:
    // 0x1dbffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc000:
    // 0x1dc000: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dc004:
    // 0x1dc004: 0xc070e2c  jal         func_1C38B0
label_1dc008:
    if (ctx->pc == 0x1DC008u) {
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC00Cu;
        goto label_1dc00c;
    }
    ctx->pc = 0x1DC004u;
    SET_GPR_U32(ctx, 31, 0x1DC00Cu);
    ctx->pc = 0x1DC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC004u;
    // 0x1dc008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC00Cu;
label_1dc00c:
    // 0x1dc00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc010:
    // 0x1dc010: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dc010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc014:
    // 0x1dc014: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc018:
    // 0x1dc018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc01c:
    // 0x1dc01c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc020:
    // 0x1dc020: 0xc066c72  jal         func_19B1C8
label_1dc024:
    if (ctx->pc == 0x1DC024u) {
        ctx->pc = 0x1DC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC020u;
        // 0x1dc024: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC028u;
        goto label_1dc028;
    }
    ctx->pc = 0x1DC020u;
    SET_GPR_U32(ctx, 31, 0x1DC028u);
    ctx->pc = 0x1DC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC020u;
    // 0x1dc024: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC028u;
label_1dc028:
    // 0x1dc028: 0xc07a86c  jal         func_1EA1B0
label_1dc02c:
    if (ctx->pc == 0x1DC02Cu) {
        ctx->pc = 0x1DC030u;
        goto label_1dc030;
    }
    ctx->pc = 0x1DC028u;
    SET_GPR_U32(ctx, 31, 0x1DC030u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DC030u;
label_1dc030:
    // 0x1dc030: 0xc04e120  jal         func_138480
label_1dc034:
    if (ctx->pc == 0x1DC034u) {
        ctx->pc = 0x1DC038u;
        goto label_1dc038;
    }
    ctx->pc = 0x1DC030u;
    SET_GPR_U32(ctx, 31, 0x1DC038u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DC030u, 0x1DC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC038u;
label_1dc038:
    // 0x1dc038: 0xc05b578  jal         func_16D5E0
label_1dc03c:
    if (ctx->pc == 0x1DC03Cu) {
        ctx->pc = 0x1DC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC038u;
        // 0x1dc03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC040u;
        goto label_1dc040;
    }
    ctx->pc = 0x1DC038u;
    SET_GPR_U32(ctx, 31, 0x1DC040u);
    ctx->pc = 0x1DC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC038u;
    // 0x1dc03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DC038u, 0x1DC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC040u;
label_1dc040:
    // 0x1dc040: 0xc060258  jal         func_180960
label_1dc044:
    if (ctx->pc == 0x1DC044u) {
        ctx->pc = 0x1DC048u;
        goto label_1dc048;
    }
    ctx->pc = 0x1DC040u;
    SET_GPR_U32(ctx, 31, 0x1DC048u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DC048u;
label_1dc048:
    // 0x1dc048: 0x1000fdc4  b           . + 4 + (-0x23C << 2)
label_1dc04c:
    if (ctx->pc == 0x1DC04Cu) {
        ctx->pc = 0x1DC050u;
        goto label_1dc050;
    }
    ctx->pc = 0x1DC048u;
    {
        const bool branch_taken_0x1dc048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc048) {
            ctx->pc = 0x1DB75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1db75c; return; }
        }
    }
    ctx->pc = 0x1DC050u;
label_1dc050:
    // 0x1dc050: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1dc054:
    if (ctx->pc == 0x1DC054u) {
        ctx->pc = 0x1DC058u;
        goto label_1dc058;
    }
    ctx->pc = 0x1DC050u;
    {
        const bool branch_taken_0x1dc050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc050) {
            ctx->pc = 0x1DC060u;
            goto label_1dc060;
        }
    }
    ctx->pc = 0x1DC058u;
label_1dc058:
    // 0x1dc058: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc05c:
    if (ctx->pc == 0x1DC05Cu) {
        ctx->pc = 0x1DC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC058u;
        // 0x1dc05c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC060u;
        goto label_1dc060;
    }
    ctx->pc = 0x1DC058u;
    {
        const bool branch_taken_0x1dc058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC058u;
        // 0x1dc05c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc058) {
            ctx->pc = 0x1DC068u;
            goto label_1dc068;
        }
    }
    ctx->pc = 0x1DC060u;
label_1dc060:
    // 0x1dc060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1dc064:
    // 0x1dc064: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dc064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc068:
    // 0x1dc068: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dc068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc06c:
    // 0x1dc06c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc070:
    // 0x1dc070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc074:
    // 0x1dc074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc078:
    // 0x1dc078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc07c:
    // 0x1dc07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc080:
    // 0x1dc080: 0x3e00008  jr          $ra
label_1dc084:
    if (ctx->pc == 0x1DC084u) {
        ctx->pc = 0x1DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC080u;
        // 0x1dc084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC088u;
        goto label_1dc088;
    }
    ctx->pc = 0x1DC080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC080u;
        // 0x1dc084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC088u;
label_1dc088:
    // 0x1dc088: 0x0  nop
    ctx->pc = 0x1dc088u;
    // NOP
label_1dc08c:
    // 0x1dc08c: 0x0  nop
    ctx->pc = 0x1dc08cu;
    // NOP
label_1dc090:
    // 0x1dc090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dc090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1dc094:
    // 0x1dc094: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1dc094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1dc098:
    // 0x1dc098: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dc098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1dc09c:
    // 0x1dc09c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dc0a0:
    // 0x1dc0a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dc0a4:
    // 0x1dc0a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dc0a8:
    // 0x1dc0a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dc0a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0ac:
    // 0x1dc0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dc0b0:
    // 0x1dc0b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dc0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0b4:
    // 0x1dc0b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dc0b8:
    // 0x1dc0b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0bc:
    // 0x1dc0bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dc0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0c0:
    // 0x1dc0c0: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1dc0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1dc0c4:
    // 0x1dc0c4: 0xaf808ca0  sw          $zero, -0x7360($gp)
    ctx->pc = 0x1dc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 0));
label_1dc0c8:
    // 0x1dc0c8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1dc0cc:
    if (ctx->pc == 0x1DC0CCu) {
        ctx->pc = 0x1DC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0C8u;
        // 0x1dc0cc: 0xaf808c9c  sw          $zero, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0D0u;
        goto label_1dc0d0;
    }
    ctx->pc = 0x1DC0C8u;
    {
        const bool branch_taken_0x1dc0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0C8u;
        // 0x1dc0cc: 0xaf808c9c  sw          $zero, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0c8) {
            ctx->pc = 0x1DC378u;
            goto label_1dc378;
        }
    }
    ctx->pc = 0x1DC0D0u;
label_1dc0d0:
    // 0x1dc0d0: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dc0d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dc0d4:
    // 0x1dc0d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dc0d8:
    if (ctx->pc == 0x1DC0D8u) {
        ctx->pc = 0x1DC0DCu;
        goto label_1dc0dc;
    }
    ctx->pc = 0x1DC0D4u;
    {
        const bool branch_taken_0x1dc0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0d4) {
            ctx->pc = 0x1DC0E4u;
            goto label_1dc0e4;
        }
    }
    ctx->pc = 0x1DC0DCu;
label_1dc0dc:
    // 0x1dc0dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dc0e0:
    if (ctx->pc == 0x1DC0E0u) {
        ctx->pc = 0x1DC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0DCu;
        // 0x1dc0e0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0E4u;
        goto label_1dc0e4;
    }
    ctx->pc = 0x1DC0DCu;
    {
        const bool branch_taken_0x1dc0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0DCu;
        // 0x1dc0e0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0dc) {
            ctx->pc = 0x1DC0F4u;
            goto label_1dc0f4;
        }
    }
    ctx->pc = 0x1DC0E4u;
label_1dc0e4:
    // 0x1dc0e4: 0x0  nop
    ctx->pc = 0x1dc0e4u;
    // NOP
label_1dc0e8:
    // 0x1dc0e8: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dc0ec:
    // 0x1dc0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc0f0:
    // 0x1dc0f0: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dc0f4:
    // 0x1dc0f4: 0x0  nop
    ctx->pc = 0x1dc0f4u;
    // NOP
label_1dc0f8:
    // 0x1dc0f8: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dc0fc:
    // 0x1dc0fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc100:
    if (ctx->pc == 0x1DC100u) {
        ctx->pc = 0x1DC104u;
        goto label_1dc104;
    }
    ctx->pc = 0x1DC0FCu;
    {
        const bool branch_taken_0x1dc0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0fc) {
            ctx->pc = 0x1DC110u;
            goto label_1dc110;
        }
    }
    ctx->pc = 0x1DC104u;
label_1dc104:
    // 0x1dc104: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dc104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dc108:
    // 0x1dc108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc10c:
    // 0x1dc10c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dc110:
    // 0x1dc110: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dc110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dc114:
    // 0x1dc114: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dc118:
    if (ctx->pc == 0x1DC118u) {
        ctx->pc = 0x1DC11Cu;
        goto label_1dc11c;
    }
    ctx->pc = 0x1DC114u;
    {
        const bool branch_taken_0x1dc114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc114) {
            ctx->pc = 0x1DC178u;
            goto label_1dc178;
        }
    }
    ctx->pc = 0x1DC11Cu;
label_1dc11c:
    // 0x1dc11c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dc120:
    // 0x1dc120: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dc120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dc124:
    // 0x1dc124: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dc128:
    if (ctx->pc == 0x1DC128u) {
        ctx->pc = 0x1DC12Cu;
        goto label_1dc12c;
    }
    ctx->pc = 0x1DC124u;
    {
        const bool branch_taken_0x1dc124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc124) {
            ctx->pc = 0x1DC14Cu;
            goto label_1dc14c;
        }
    }
    ctx->pc = 0x1DC12Cu;
label_1dc12c:
    // 0x1dc12c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dc130:
    // 0x1dc130: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dc130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dc134:
    // 0x1dc134: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dc138:
    if (ctx->pc == 0x1DC138u) {
        ctx->pc = 0x1DC13Cu;
        goto label_1dc13c;
    }
    ctx->pc = 0x1DC134u;
    {
        const bool branch_taken_0x1dc134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc134) {
            ctx->pc = 0x1DC144u;
            goto label_1dc144;
        }
    }
    ctx->pc = 0x1DC13Cu;
label_1dc13c:
    // 0x1dc13c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc140:
    if (ctx->pc == 0x1DC140u) {
        ctx->pc = 0x1DC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC13Cu;
        // 0x1dc140: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC144u;
        goto label_1dc144;
    }
    ctx->pc = 0x1DC13Cu;
    {
        const bool branch_taken_0x1dc13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC13Cu;
        // 0x1dc140: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc13c) {
            ctx->pc = 0x1DC14Cu;
            goto label_1dc14c;
        }
    }
    ctx->pc = 0x1DC144u;
label_1dc144:
    // 0x1dc144: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dc144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dc148:
    // 0x1dc148: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dc148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dc14c:
    // 0x1dc14c: 0x0  nop
    ctx->pc = 0x1dc14cu;
    // NOP
label_1dc150:
    // 0x1dc150: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dc154:
    // 0x1dc154: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dc158:
    if (ctx->pc == 0x1DC158u) {
        ctx->pc = 0x1DC15Cu;
        goto label_1dc15c;
    }
    ctx->pc = 0x1DC154u;
    {
        const bool branch_taken_0x1dc154 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dc154) {
            ctx->pc = 0x1DC178u;
            goto label_1dc178;
        }
    }
    ctx->pc = 0x1DC15Cu;
label_1dc15c:
    // 0x1dc15c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dc160:
    // 0x1dc160: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dc164:
    // 0x1dc164: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dc168:
    // 0x1dc168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dc16c:
    if (ctx->pc == 0x1DC16Cu) {
        ctx->pc = 0x1DC170u;
        goto label_1dc170;
    }
    ctx->pc = 0x1DC168u;
    {
        const bool branch_taken_0x1dc168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc168) {
            ctx->pc = 0x1DC178u;
            goto label_1dc178;
        }
    }
    ctx->pc = 0x1DC170u;
label_1dc170:
    // 0x1dc170: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dc174:
    // 0x1dc174: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dc174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dc178:
    // 0x1dc178: 0xc077a7c  jal         func_1DE9F0
label_1dc17c:
    if (ctx->pc == 0x1DC17Cu) {
        ctx->pc = 0x1DC180u;
        goto label_1dc180;
    }
    ctx->pc = 0x1DC178u;
    SET_GPR_U32(ctx, 31, 0x1DC180u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DC180u;
label_1dc180:
    // 0x1dc180: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dc184:
    // 0x1dc184: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dc184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc188:
    // 0x1dc188: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dc18c:
    if (ctx->pc == 0x1DC18Cu) {
        ctx->pc = 0x1DC190u;
        goto label_1dc190;
    }
    ctx->pc = 0x1DC188u;
    {
        const bool branch_taken_0x1dc188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc188) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC190u;
label_1dc190:
    // 0x1dc190: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc194:
    // 0x1dc194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc198:
    // 0x1dc198: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dc19c:
    if (ctx->pc == 0x1DC19Cu) {
        ctx->pc = 0x1DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC198u;
        // 0x1dc19c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1A0u;
        goto label_1dc1a0;
    }
    ctx->pc = 0x1DC198u;
    {
        const bool branch_taken_0x1dc198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC198u;
        // 0x1dc19c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc198) {
            ctx->pc = 0x1DC1BCu;
            goto label_1dc1bc;
        }
    }
    ctx->pc = 0x1DC1A0u;
label_1dc1a0:
    // 0x1dc1a0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc1a4:
    // 0x1dc1a4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dc1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dc1a8:
    // 0x1dc1a8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dc1ac:
    if (ctx->pc == 0x1DC1ACu) {
        ctx->pc = 0x1DC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1A8u;
        // 0x1dc1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1B0u;
        goto label_1dc1b0;
    }
    ctx->pc = 0x1DC1A8u;
    {
        const bool branch_taken_0x1dc1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1A8u;
        // 0x1dc1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1a8) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC1B0u;
label_1dc1b0:
    // 0x1dc1b0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc1b4:
    // 0x1dc1b4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dc1b8:
    if (ctx->pc == 0x1DC1B8u) {
        ctx->pc = 0x1DC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1B4u;
        // 0x1dc1b8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1BCu;
        goto label_1dc1bc;
    }
    ctx->pc = 0x1DC1B4u;
    {
        const bool branch_taken_0x1dc1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1B4u;
        // 0x1dc1b8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1b4) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC1BCu;
label_1dc1bc:
    // 0x1dc1bc: 0x0  nop
    ctx->pc = 0x1dc1bcu;
    // NOP
label_1dc1c0:
    // 0x1dc1c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc1c4:
    // 0x1dc1c4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dc1c8:
    if (ctx->pc == 0x1DC1C8u) {
        ctx->pc = 0x1DC1CCu;
        goto label_1dc1cc;
    }
    ctx->pc = 0x1DC1C4u;
    {
        const bool branch_taken_0x1dc1c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc1c4) {
            ctx->pc = 0x1DC1E8u;
            goto label_1dc1e8;
        }
    }
    ctx->pc = 0x1DC1CCu;
label_1dc1cc:
    // 0x1dc1cc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc1d0:
    // 0x1dc1d0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dc1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dc1d4:
    // 0x1dc1d4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dc1d8:
    if (ctx->pc == 0x1DC1D8u) {
        ctx->pc = 0x1DC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1D4u;
        // 0x1dc1d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1DCu;
        goto label_1dc1dc;
    }
    ctx->pc = 0x1DC1D4u;
    {
        const bool branch_taken_0x1dc1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1D4u;
        // 0x1dc1d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1d4) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC1DCu;
label_1dc1dc:
    // 0x1dc1dc: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc1e0:
    // 0x1dc1e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dc1e4:
    if (ctx->pc == 0x1DC1E4u) {
        ctx->pc = 0x1DC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1E0u;
        // 0x1dc1e4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1E8u;
        goto label_1dc1e8;
    }
    ctx->pc = 0x1DC1E0u;
    {
        const bool branch_taken_0x1dc1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1E0u;
        // 0x1dc1e4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1e0) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC1E8u;
label_1dc1e8:
    // 0x1dc1e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc1ec:
    // 0x1dc1ec: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dc1f0:
    if (ctx->pc == 0x1DC1F0u) {
        ctx->pc = 0x1DC1F4u;
        goto label_1dc1f4;
    }
    ctx->pc = 0x1DC1ECu;
    {
        const bool branch_taken_0x1dc1ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc1ec) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC1F4u;
label_1dc1f4:
    // 0x1dc1f4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc1f8:
    // 0x1dc1f8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dc1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dc1fc:
    // 0x1dc1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dc200:
    if (ctx->pc == 0x1DC200u) {
        ctx->pc = 0x1DC204u;
        goto label_1dc204;
    }
    ctx->pc = 0x1DC1FCu;
    {
        const bool branch_taken_0x1dc1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1fc) {
            ctx->pc = 0x1DC20Cu;
            goto label_1dc20c;
        }
    }
    ctx->pc = 0x1DC204u;
label_1dc204:
    // 0x1dc204: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dc204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dc208:
    // 0x1dc208: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc20c:
    // 0x1dc20c: 0x0  nop
    ctx->pc = 0x1dc20cu;
    // NOP
label_1dc210:
    // 0x1dc210: 0xc07a9d8  jal         func_1EA760
label_1dc214:
    if (ctx->pc == 0x1DC214u) {
        ctx->pc = 0x1DC218u;
        goto label_1dc218;
    }
    ctx->pc = 0x1DC210u;
    SET_GPR_U32(ctx, 31, 0x1DC218u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DC218u;
label_1dc218:
    // 0x1dc218: 0xc04e168  jal         func_1385A0
label_1dc21c:
    if (ctx->pc == 0x1DC21Cu) {
        ctx->pc = 0x1DC220u;
        goto label_1dc220;
    }
    ctx->pc = 0x1DC218u;
    SET_GPR_U32(ctx, 31, 0x1DC220u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DC218u, 0x1DC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC220u;
label_1dc220:
    // 0x1dc220: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dc224:
    // 0x1dc224: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dc224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dc228:
    // 0x1dc228: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dc228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dc22c:
    // 0x1dc22c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dc230:
    // 0x1dc230: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dc230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dc234:
    // 0x1dc234: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dc234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dc238:
    // 0x1dc238: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dc238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dc23c:
    // 0x1dc23c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc240:
    // 0x1dc240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc244:
    // 0x1dc244: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dc244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dc248:
    // 0x1dc248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc24c:
    // 0x1dc24c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dc250:
    // 0x1dc250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc254:
    // 0x1dc254: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc258:
    // 0x1dc258: 0xc066c72  jal         func_19B1C8
label_1dc25c:
    if (ctx->pc == 0x1DC25Cu) {
        ctx->pc = 0x1DC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC258u;
        // 0x1dc25c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC260u;
        goto label_1dc260;
    }
    ctx->pc = 0x1DC258u;
    SET_GPR_U32(ctx, 31, 0x1DC260u);
    ctx->pc = 0x1DC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC258u;
    // 0x1dc25c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC260u;
label_1dc260:
    // 0x1dc260: 0xc077e84  jal         func_1DFA10
label_1dc264:
    if (ctx->pc == 0x1DC264u) {
        ctx->pc = 0x1DC268u;
        goto label_1dc268;
    }
    ctx->pc = 0x1DC260u;
    SET_GPR_U32(ctx, 31, 0x1DC268u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DC268u;
label_1dc268:
    // 0x1dc268: 0xc077d90  jal         func_1DF640
label_1dc26c:
    if (ctx->pc == 0x1DC26Cu) {
        ctx->pc = 0x1DC270u;
        goto label_1dc270;
    }
    ctx->pc = 0x1DC268u;
    SET_GPR_U32(ctx, 31, 0x1DC270u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DC270u;
label_1dc270:
    // 0x1dc270: 0xc077ab4  jal         func_1DEAD0
label_1dc274:
    if (ctx->pc == 0x1DC274u) {
        ctx->pc = 0x1DC278u;
        goto label_1dc278;
    }
    ctx->pc = 0x1DC270u;
    SET_GPR_U32(ctx, 31, 0x1DC278u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DC278u;
label_1dc278:
    // 0x1dc278: 0xc077880  jal         func_1DE200
label_1dc27c:
    if (ctx->pc == 0x1DC27Cu) {
        ctx->pc = 0x1DC280u;
        goto label_1dc280;
    }
    ctx->pc = 0x1DC278u;
    SET_GPR_U32(ctx, 31, 0x1DC280u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DC280u;
label_1dc280:
    // 0x1dc280: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dc284:
    // 0x1dc284: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dc288:
    if (ctx->pc == 0x1DC288u) {
        ctx->pc = 0x1DC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC284u;
        // 0x1dc288: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC28Cu;
        goto label_1dc28c;
    }
    ctx->pc = 0x1DC284u;
    {
        const bool branch_taken_0x1dc284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC284u;
        // 0x1dc288: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc284) {
            ctx->pc = 0x1DC358u;
            goto label_1dc358;
        }
    }
    ctx->pc = 0x1DC28Cu;
label_1dc28c:
    // 0x1dc28c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dc290:
    // 0x1dc290: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc294:
    // 0x1dc294: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dc294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dc298:
    // 0x1dc298: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dc298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dc29c:
    // 0x1dc29c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dc29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dc2a0:
    // 0x1dc2a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2a4:
    // 0x1dc2a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc2a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2a8:
    // 0x1dc2a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dc2a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2ac:
    // 0x1dc2ac: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dc2acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dc2b0:
    // 0x1dc2b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc2b4:
    // 0x1dc2b4: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dc2b8:
    // 0x1dc2b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc2bc:
    // 0x1dc2bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc2c0:
    // 0x1dc2c0: 0xc066c72  jal         func_19B1C8
label_1dc2c4:
    if (ctx->pc == 0x1DC2C4u) {
        ctx->pc = 0x1DC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2C0u;
        // 0x1dc2c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2C8u;
        goto label_1dc2c8;
    }
    ctx->pc = 0x1DC2C0u;
    SET_GPR_U32(ctx, 31, 0x1DC2C8u);
    ctx->pc = 0x1DC2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC2C0u;
    // 0x1dc2c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC2C8u;
label_1dc2c8:
    // 0x1dc2c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dc2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dc2cc:
    // 0x1dc2cc: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dc2d0:
    // 0x1dc2d0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc2d4:
    // 0x1dc2d4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dc2d8:
    // 0x1dc2d8: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dc2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dc2dc:
    // 0x1dc2dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc2e0:
    // 0x1dc2e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc2e4:
    // 0x1dc2e4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1dc2e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc2e8:
    // 0x1dc2e8: 0xc070e2c  jal         func_1C38B0
label_1dc2ec:
    if (ctx->pc == 0x1DC2ECu) {
        ctx->pc = 0x1DC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2E8u;
        // 0x1dc2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2F0u;
        goto label_1dc2f0;
    }
    ctx->pc = 0x1DC2E8u;
    SET_GPR_U32(ctx, 31, 0x1DC2F0u);
    ctx->pc = 0x1DC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC2E8u;
    // 0x1dc2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC2F0u;
label_1dc2f0:
    // 0x1dc2f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dc2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2f4:
    // 0x1dc2f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dc2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2f8:
    // 0x1dc2f8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc2fc:
    // 0x1dc2fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc300:
    // 0x1dc300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc304:
    // 0x1dc304: 0xc066c72  jal         func_19B1C8
label_1dc308:
    if (ctx->pc == 0x1DC308u) {
        ctx->pc = 0x1DC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC304u;
        // 0x1dc308: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC30Cu;
        goto label_1dc30c;
    }
    ctx->pc = 0x1DC304u;
    SET_GPR_U32(ctx, 31, 0x1DC30Cu);
    ctx->pc = 0x1DC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC304u;
    // 0x1dc308: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC30Cu;
label_1dc30c:
    // 0x1dc30c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dc310:
    // 0x1dc310: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dc314:
    if (ctx->pc == 0x1DC314u) {
        ctx->pc = 0x1DC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC310u;
        // 0x1dc314: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC318u;
        goto label_1dc318;
    }
    ctx->pc = 0x1DC310u;
    {
        const bool branch_taken_0x1dc310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC310u;
        // 0x1dc314: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc310) {
            ctx->pc = 0x1DC358u;
            goto label_1dc358;
        }
    }
    ctx->pc = 0x1DC318u;
label_1dc318:
    // 0x1dc318: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dc318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dc31c:
    // 0x1dc31c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc320:
    // 0x1dc320: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dc324:
    // 0x1dc324: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dc328:
    // 0x1dc328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc32c:
    // 0x1dc32c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc330:
    // 0x1dc330: 0x8c550008  lw          $s5, 0x8($v0)
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dc334:
    // 0x1dc334: 0xc070e2c  jal         func_1C38B0
label_1dc338:
    if (ctx->pc == 0x1DC338u) {
        ctx->pc = 0x1DC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC334u;
        // 0x1dc338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC33Cu;
        goto label_1dc33c;
    }
    ctx->pc = 0x1DC334u;
    SET_GPR_U32(ctx, 31, 0x1DC33Cu);
    ctx->pc = 0x1DC338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC334u;
    // 0x1dc338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC33Cu;
label_1dc33c:
    // 0x1dc33c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dc33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc340:
    // 0x1dc340: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dc340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc344:
    // 0x1dc344: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc348:
    // 0x1dc348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc34c:
    // 0x1dc34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc350:
    // 0x1dc350: 0xc066c72  jal         func_19B1C8
label_1dc354:
    if (ctx->pc == 0x1DC354u) {
        ctx->pc = 0x1DC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC350u;
        // 0x1dc354: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC358u;
        goto label_1dc358;
    }
    ctx->pc = 0x1DC350u;
    SET_GPR_U32(ctx, 31, 0x1DC358u);
    ctx->pc = 0x1DC354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC350u;
    // 0x1dc354: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC358u;
label_1dc358:
    // 0x1dc358: 0xc07a86c  jal         func_1EA1B0
label_1dc35c:
    if (ctx->pc == 0x1DC35Cu) {
        ctx->pc = 0x1DC360u;
        goto label_1dc360;
    }
    ctx->pc = 0x1DC358u;
    SET_GPR_U32(ctx, 31, 0x1DC360u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DC360u;
label_1dc360:
    // 0x1dc360: 0xc04e120  jal         func_138480
label_1dc364:
    if (ctx->pc == 0x1DC364u) {
        ctx->pc = 0x1DC368u;
        goto label_1dc368;
    }
    ctx->pc = 0x1DC360u;
    SET_GPR_U32(ctx, 31, 0x1DC368u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DC360u, 0x1DC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC368u;
label_1dc368:
    // 0x1dc368: 0xc05b578  jal         func_16D5E0
label_1dc36c:
    if (ctx->pc == 0x1DC36Cu) {
        ctx->pc = 0x1DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC368u;
        // 0x1dc36c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC370u;
        goto label_1dc370;
    }
    ctx->pc = 0x1DC368u;
    SET_GPR_U32(ctx, 31, 0x1DC370u);
    ctx->pc = 0x1DC36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC368u;
    // 0x1dc36c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DC368u, 0x1DC370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC370u;
label_1dc370:
    // 0x1dc370: 0xc060258  jal         func_180960
label_1dc374:
    if (ctx->pc == 0x1DC374u) {
        ctx->pc = 0x1DC378u;
        goto label_1dc378;
    }
    ctx->pc = 0x1DC370u;
    SET_GPR_U32(ctx, 31, 0x1DC378u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DC378u;
label_1dc378:
    // 0x1dc378: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1dc378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dc37c:
    // 0x1dc37c: 0x1040ff54  beqz        $v0, . + 4 + (-0xAC << 2)
label_1dc380:
    if (ctx->pc == 0x1DC380u) {
        ctx->pc = 0x1DC384u;
        goto label_1dc384;
    }
    ctx->pc = 0x1DC37Cu;
    {
        const bool branch_taken_0x1dc37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc37c) {
            ctx->pc = 0x1DC0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc0d0;
        }
    }
    ctx->pc = 0x1DC384u;
label_1dc384:
    // 0x1dc384: 0x0  nop
    ctx->pc = 0x1dc384u;
    // NOP
label_1dc388:
    // 0x1dc388: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_1dc38c:
    if (ctx->pc == 0x1DC38Cu) {
        ctx->pc = 0x1DC390u;
        goto label_1dc390;
    }
    ctx->pc = 0x1DC388u;
    {
        const bool branch_taken_0x1dc388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc388) {
            ctx->pc = 0x1DC3A8u;
            goto label_1dc3a8;
        }
    }
    ctx->pc = 0x1DC390u;
label_1dc390:
    // 0x1dc390: 0xc08fee8  jal         func_23FBA0
label_1dc394:
    if (ctx->pc == 0x1DC394u) {
        ctx->pc = 0x1DC398u;
        goto label_1dc398;
    }
    ctx->pc = 0x1DC390u;
    SET_GPR_U32(ctx, 31, 0x1DC398u);
    ctx->pc = 0x23FBA0u;
    { ctx->pc = 0x23fba0; return; }
    ctx->pc = 0x1DC398u;
label_1dc398:
    // 0x1dc398: 0x1040019f  beqz        $v0, . + 4 + (0x19F << 2)
label_1dc39c:
    if (ctx->pc == 0x1DC39Cu) {
        ctx->pc = 0x1DC3A0u;
        goto label_1dc3a0;
    }
    ctx->pc = 0x1DC398u;
    {
        const bool branch_taken_0x1dc398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc398) {
            ctx->pc = 0x1DCA18u;
            { ctx->pc = 0x1dca18; return; }
        }
    }
    ctx->pc = 0x1DC3A0u;
label_1dc3a0:
    // 0x1dc3a0: 0x1000019d  b           . + 4 + (0x19D << 2)
label_1dc3a4:
    if (ctx->pc == 0x1DC3A4u) {
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3A8u;
        goto label_1dc3a8;
    }
    ctx->pc = 0x1DC3A0u;
    {
        const bool branch_taken_0x1dc3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3a0) {
            ctx->pc = 0x1DCA18u;
            { ctx->pc = 0x1dca18; return; }
        }
    }
    ctx->pc = 0x1DC3A8u;
label_1dc3a8:
    // 0x1dc3a8: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dc3ac:
    // 0x1dc3ac: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x1dc3acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
label_1dc3b0:
    // 0x1dc3b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1dc3b4:
    if (ctx->pc == 0x1DC3B4u) {
        ctx->pc = 0x1DC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B0u;
        // 0x1dc3b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3B8u;
        goto label_1dc3b8;
    }
    ctx->pc = 0x1DC3B0u;
    {
        const bool branch_taken_0x1dc3b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B0u;
        // 0x1dc3b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3b0) {
            ctx->pc = 0x1DC3C0u;
            goto label_1dc3c0;
        }
    }
    ctx->pc = 0x1DC3B8u;
label_1dc3b8:
    // 0x1dc3b8: 0x10000257  b           . + 4 + (0x257 << 2)
label_1dc3bc:
    if (ctx->pc == 0x1DC3BCu) {
        ctx->pc = 0x1DC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B8u;
        // 0x1dc3bc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3C0u;
        goto label_1dc3c0;
    }
    ctx->pc = 0x1DC3B8u;
    {
        const bool branch_taken_0x1dc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B8u;
        // 0x1dc3bc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3b8) {
            ctx->pc = 0x1DCD18u;
            { ctx->pc = 0x1dcd18; return; }
        }
    }
    ctx->pc = 0x1DC3C0u;
label_1dc3c0:
    // 0x1dc3c0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dc3c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dc3c4:
    // 0x1dc3c4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1dc3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1dc3c8:
    // 0x1dc3c8: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_1dc3cc:
    if (ctx->pc == 0x1DC3CCu) {
        ctx->pc = 0x1DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C8u;
        // 0x1dc3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3D0u;
        goto label_1dc3d0;
    }
    ctx->pc = 0x1DC3C8u;
    {
        const bool branch_taken_0x1dc3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C8u;
        // 0x1dc3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3c8) {
            ctx->pc = 0x1DC6D8u;
            goto label_1dc6d8;
        }
    }
    ctx->pc = 0x1DC3D0u;
label_1dc3d0:
    // 0x1dc3d0: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
label_1dc3d4:
    if (ctx->pc == 0x1DC3D4u) {
        ctx->pc = 0x1DC3D8u;
        goto label_1dc3d8;
    }
    ctx->pc = 0x1DC3D0u;
    {
        const bool branch_taken_0x1dc3d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc3d0) {
            ctx->pc = 0x1DC400u;
            goto label_1dc400;
        }
    }
    ctx->pc = 0x1DC3D8u;
label_1dc3d8:
    // 0x1dc3d8: 0xc04439c  jal         func_110E70
label_1dc3dc:
    if (ctx->pc == 0x1DC3DCu) {
        ctx->pc = 0x1DC3E0u;
        goto label_1dc3e0;
    }
    ctx->pc = 0x1DC3D8u;
    SET_GPR_U32(ctx, 31, 0x1DC3E0u);
    ctx->pc = 0x110E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E70u, 0x1DC3D8u, 0x1DC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3E0u;
label_1dc3e0:
    // 0x1dc3e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1dc3e4:
    if (ctx->pc == 0x1DC3E4u) {
        ctx->pc = 0x1DC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3E0u;
        // 0x1dc3e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3E8u;
        goto label_1dc3e8;
    }
    ctx->pc = 0x1DC3E0u;
    {
        const bool branch_taken_0x1dc3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3E0u;
        // 0x1dc3e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3e0) {
            ctx->pc = 0x1DC400u;
            goto label_1dc400;
        }
    }
    ctx->pc = 0x1DC3E8u;
label_1dc3e8:
    // 0x1dc3e8: 0xc05b420  jal         func_16D080
label_1dc3ec:
    if (ctx->pc == 0x1DC3ECu) {
        ctx->pc = 0x1DC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3E8u;
        // 0x1dc3ec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3F0u;
        goto label_1dc3f0;
    }
    ctx->pc = 0x1DC3E8u;
    SET_GPR_U32(ctx, 31, 0x1DC3F0u);
    ctx->pc = 0x1DC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3E8u;
    // 0x1dc3ec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DC3E8u, 0x1DC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3F0u;
label_1dc3f0:
    // 0x1dc3f0: 0xc08fec8  jal         func_23FB20
label_1dc3f4:
    if (ctx->pc == 0x1DC3F4u) {
        ctx->pc = 0x1DC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F0u;
        // 0x1dc3f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3F8u;
        goto label_1dc3f8;
    }
    ctx->pc = 0x1DC3F0u;
    SET_GPR_U32(ctx, 31, 0x1DC3F8u);
    ctx->pc = 0x1DC3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3F0u;
    // 0x1dc3f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    { ctx->pc = 0x23fb20; return; }
    ctx->pc = 0x1DC3F8u;
label_1dc3f8:
    // 0x1dc3f8: 0x10000187  b           . + 4 + (0x187 << 2)
label_1dc3fc:
    if (ctx->pc == 0x1DC3FCu) {
        ctx->pc = 0x1DC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F8u;
        // 0x1dc3fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC400u;
        goto label_1dc400;
    }
    ctx->pc = 0x1DC3F8u;
    {
        const bool branch_taken_0x1dc3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F8u;
        // 0x1dc3fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3f8) {
            ctx->pc = 0x1DCA18u;
            { ctx->pc = 0x1dca18; return; }
        }
    }
    ctx->pc = 0x1DC400u;
label_1dc400:
    // 0x1dc400: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dc400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc404:
    // 0x1dc404: 0xc05b420  jal         func_16D080
label_1dc408:
    if (ctx->pc == 0x1DC408u) {
        ctx->pc = 0x1DC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC404u;
        // 0x1dc408: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC40Cu;
        goto label_1dc40c;
    }
    ctx->pc = 0x1DC404u;
    SET_GPR_U32(ctx, 31, 0x1DC40Cu);
    ctx->pc = 0x1DC408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC404u;
    // 0x1dc408: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DC404u, 0x1DC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC40Cu;
label_1dc40c:
    // 0x1dc40c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc410:
    // 0x1dc410: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc414:
    // 0x1dc414: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1dc418:
    if (ctx->pc == 0x1DC418u) {
        ctx->pc = 0x1DC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC414u;
        // 0x1dc418: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC41Cu;
        goto label_1dc41c;
    }
    ctx->pc = 0x1DC414u;
    {
        const bool branch_taken_0x1dc414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC414u;
        // 0x1dc418: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc414) {
            ctx->pc = 0x1DC6C0u;
            goto label_1dc6c0;
        }
    }
    ctx->pc = 0x1DC41Cu;
label_1dc41c:
    // 0x1dc41c: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dc41cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dc420:
    // 0x1dc420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dc424:
    if (ctx->pc == 0x1DC424u) {
        ctx->pc = 0x1DC428u;
        goto label_1dc428;
    }
    ctx->pc = 0x1DC420u;
    {
        const bool branch_taken_0x1dc420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc420) {
            ctx->pc = 0x1DC430u;
            goto label_1dc430;
        }
    }
    ctx->pc = 0x1DC428u;
label_1dc428:
    // 0x1dc428: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dc42c:
    if (ctx->pc == 0x1DC42Cu) {
        ctx->pc = 0x1DC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC428u;
        // 0x1dc42c: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC430u;
        goto label_1dc430;
    }
    ctx->pc = 0x1DC428u;
    {
        const bool branch_taken_0x1dc428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC428u;
        // 0x1dc42c: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc428) {
            ctx->pc = 0x1DC43Cu;
            goto label_1dc43c;
        }
    }
    ctx->pc = 0x1DC430u;
label_1dc430:
    // 0x1dc430: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dc434:
    // 0x1dc434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc438:
    // 0x1dc438: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dc438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dc43c:
    // 0x1dc43c: 0x0  nop
    ctx->pc = 0x1dc43cu;
    // NOP
label_1dc440:
    // 0x1dc440: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dc444:
    // 0x1dc444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc448:
    if (ctx->pc == 0x1DC448u) {
        ctx->pc = 0x1DC44Cu;
        goto label_1dc44c;
    }
    ctx->pc = 0x1DC444u;
    {
        const bool branch_taken_0x1dc444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc444) {
            ctx->pc = 0x1DC458u;
            goto label_1dc458;
        }
    }
    ctx->pc = 0x1DC44Cu;
label_1dc44c:
    // 0x1dc44c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dc450:
    // 0x1dc450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc454:
    // 0x1dc454: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dc454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dc458:
    // 0x1dc458: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dc45c:
    // 0x1dc45c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dc460:
    if (ctx->pc == 0x1DC460u) {
        ctx->pc = 0x1DC464u;
        goto label_1dc464;
    }
    ctx->pc = 0x1DC45Cu;
    {
        const bool branch_taken_0x1dc45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc45c) {
            ctx->pc = 0x1DC4C0u;
            goto label_1dc4c0;
        }
    }
    ctx->pc = 0x1DC464u;
label_1dc464:
    // 0x1dc464: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dc468:
    // 0x1dc468: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dc468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dc46c:
    // 0x1dc46c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dc470:
    if (ctx->pc == 0x1DC470u) {
        ctx->pc = 0x1DC474u;
        goto label_1dc474;
    }
    ctx->pc = 0x1DC46Cu;
    {
        const bool branch_taken_0x1dc46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc46c) {
            ctx->pc = 0x1DC494u;
            goto label_1dc494;
        }
    }
    ctx->pc = 0x1DC474u;
label_1dc474:
    // 0x1dc474: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dc474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dc478:
    // 0x1dc478: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dc478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dc47c:
    // 0x1dc47c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dc480:
    if (ctx->pc == 0x1DC480u) {
        ctx->pc = 0x1DC484u;
        goto label_1dc484;
    }
    ctx->pc = 0x1DC47Cu;
    {
        const bool branch_taken_0x1dc47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc47c) {
            ctx->pc = 0x1DC48Cu;
            goto label_1dc48c;
        }
    }
    ctx->pc = 0x1DC484u;
label_1dc484:
    // 0x1dc484: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc488:
    if (ctx->pc == 0x1DC488u) {
        ctx->pc = 0x1DC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC484u;
        // 0x1dc488: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC48Cu;
        goto label_1dc48c;
    }
    ctx->pc = 0x1DC484u;
    {
        const bool branch_taken_0x1dc484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC484u;
        // 0x1dc488: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc484) {
            ctx->pc = 0x1DC494u;
            goto label_1dc494;
        }
    }
    ctx->pc = 0x1DC48Cu;
label_1dc48c:
    // 0x1dc48c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dc490:
    // 0x1dc490: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dc490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dc494:
    // 0x1dc494: 0x0  nop
    ctx->pc = 0x1dc494u;
    // NOP
label_1dc498:
    // 0x1dc498: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dc49c:
    // 0x1dc49c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dc4a0:
    if (ctx->pc == 0x1DC4A0u) {
        ctx->pc = 0x1DC4A4u;
        goto label_1dc4a4;
    }
    ctx->pc = 0x1DC49Cu;
    {
        const bool branch_taken_0x1dc49c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dc49c) {
            ctx->pc = 0x1DC4C0u;
            goto label_1dc4c0;
        }
    }
    ctx->pc = 0x1DC4A4u;
label_1dc4a4:
    // 0x1dc4a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dc4a8:
    // 0x1dc4a8: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dc4ac:
    // 0x1dc4ac: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dc4b0:
    // 0x1dc4b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dc4b4:
    if (ctx->pc == 0x1DC4B4u) {
        ctx->pc = 0x1DC4B8u;
        goto label_1dc4b8;
    }
    ctx->pc = 0x1DC4B0u;
    {
        const bool branch_taken_0x1dc4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4b0) {
            ctx->pc = 0x1DC4C0u;
            goto label_1dc4c0;
        }
    }
    ctx->pc = 0x1DC4B8u;
label_1dc4b8:
    // 0x1dc4b8: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dc4bc:
    // 0x1dc4bc: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dc4c0:
    // 0x1dc4c0: 0xc077a7c  jal         func_1DE9F0
label_1dc4c4:
    if (ctx->pc == 0x1DC4C4u) {
        ctx->pc = 0x1DC4C8u;
        goto label_1dc4c8;
    }
    ctx->pc = 0x1DC4C0u;
    SET_GPR_U32(ctx, 31, 0x1DC4C8u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DC4C8u;
label_1dc4c8:
    // 0x1dc4c8: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dc4cc:
    // 0x1dc4cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc4d0:
    // 0x1dc4d0: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dc4d4:
    if (ctx->pc == 0x1DC4D4u) {
        ctx->pc = 0x1DC4D8u;
        goto label_1dc4d8;
    }
    ctx->pc = 0x1DC4D0u;
    {
        const bool branch_taken_0x1dc4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc4d0) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC4D8u;
label_1dc4d8:
    // 0x1dc4d8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc4dc:
    // 0x1dc4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc4e0:
    // 0x1dc4e0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dc4e4:
    if (ctx->pc == 0x1DC4E4u) {
        ctx->pc = 0x1DC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E0u;
        // 0x1dc4e4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4E8u;
        goto label_1dc4e8;
    }
    ctx->pc = 0x1DC4E0u;
    {
        const bool branch_taken_0x1dc4e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E0u;
        // 0x1dc4e4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4e0) {
            ctx->pc = 0x1DC504u;
            goto label_1dc504;
        }
    }
    ctx->pc = 0x1DC4E8u;
label_1dc4e8:
    // 0x1dc4e8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc4ec:
    // 0x1dc4ec: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dc4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dc4f0:
    // 0x1dc4f0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dc4f4:
    if (ctx->pc == 0x1DC4F4u) {
        ctx->pc = 0x1DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F0u;
        // 0x1dc4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC4F8u;
        goto label_1dc4f8;
    }
    ctx->pc = 0x1DC4F0u;
    {
        const bool branch_taken_0x1dc4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F0u;
        // 0x1dc4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4f0) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC4F8u;
label_1dc4f8:
    // 0x1dc4f8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc4fc:
    // 0x1dc4fc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dc500:
    if (ctx->pc == 0x1DC500u) {
        ctx->pc = 0x1DC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FCu;
        // 0x1dc500: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC504u;
        goto label_1dc504;
    }
    ctx->pc = 0x1DC4FCu;
    {
        const bool branch_taken_0x1dc4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FCu;
        // 0x1dc500: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4fc) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC504u;
label_1dc504:
    // 0x1dc504: 0x0  nop
    ctx->pc = 0x1dc504u;
    // NOP
label_1dc508:
    // 0x1dc508: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc50c:
    // 0x1dc50c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dc510:
    if (ctx->pc == 0x1DC510u) {
        ctx->pc = 0x1DC514u;
        goto label_1dc514;
    }
    ctx->pc = 0x1DC50Cu;
    {
        const bool branch_taken_0x1dc50c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc50c) {
            ctx->pc = 0x1DC530u;
            goto label_1dc530;
        }
    }
    ctx->pc = 0x1DC514u;
label_1dc514:
    // 0x1dc514: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc518:
    // 0x1dc518: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dc518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dc51c:
    // 0x1dc51c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dc520:
    if (ctx->pc == 0x1DC520u) {
        ctx->pc = 0x1DC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC51Cu;
        // 0x1dc520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC524u;
        goto label_1dc524;
    }
    ctx->pc = 0x1DC51Cu;
    {
        const bool branch_taken_0x1dc51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC51Cu;
        // 0x1dc520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc51c) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC524u;
label_1dc524:
    // 0x1dc524: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc528:
    // 0x1dc528: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dc52c:
    if (ctx->pc == 0x1DC52Cu) {
        ctx->pc = 0x1DC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC528u;
        // 0x1dc52c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC530u;
        goto label_1dc530;
    }
    ctx->pc = 0x1DC528u;
    {
        const bool branch_taken_0x1dc528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC528u;
        // 0x1dc52c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc528) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC530u;
label_1dc530:
    // 0x1dc530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dc530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc534:
    // 0x1dc534: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dc538:
    if (ctx->pc == 0x1DC538u) {
        ctx->pc = 0x1DC53Cu;
        goto label_1dc53c;
    }
    ctx->pc = 0x1DC534u;
    {
        const bool branch_taken_0x1dc534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc534) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC53Cu;
label_1dc53c:
    // 0x1dc53c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc540:
    // 0x1dc540: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dc540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dc544:
    // 0x1dc544: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dc548:
    if (ctx->pc == 0x1DC548u) {
        ctx->pc = 0x1DC54Cu;
        goto label_1dc54c;
    }
    ctx->pc = 0x1DC544u;
    {
        const bool branch_taken_0x1dc544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc544) {
            ctx->pc = 0x1DC554u;
            goto label_1dc554;
        }
    }
    ctx->pc = 0x1DC54Cu;
label_1dc54c:
    // 0x1dc54c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dc550:
    // 0x1dc550: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc554:
    // 0x1dc554: 0x0  nop
    ctx->pc = 0x1dc554u;
    // NOP
label_1dc558:
    // 0x1dc558: 0xc07a9d8  jal         func_1EA760
label_1dc55c:
    if (ctx->pc == 0x1DC55Cu) {
        ctx->pc = 0x1DC560u;
        goto label_1dc560;
    }
    ctx->pc = 0x1DC558u;
    SET_GPR_U32(ctx, 31, 0x1DC560u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DC560u;
label_1dc560:
    // 0x1dc560: 0xc04e168  jal         func_1385A0
label_1dc564:
    if (ctx->pc == 0x1DC564u) {
        ctx->pc = 0x1DC568u;
        goto label_1dc568;
    }
    ctx->pc = 0x1DC560u;
    SET_GPR_U32(ctx, 31, 0x1DC568u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DC560u, 0x1DC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC568u;
label_1dc568:
    // 0x1dc568: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dc568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dc56c:
    // 0x1dc56c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dc570:
    // 0x1dc570: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dc570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dc574:
    // 0x1dc574: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dc578:
    // 0x1dc578: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dc57c:
    // 0x1dc57c: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dc580:
    // 0x1dc580: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dc584:
    // 0x1dc584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc588:
    // 0x1dc588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc58c:
    // 0x1dc58c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dc58cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dc590:
    // 0x1dc590: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc594:
    // 0x1dc594: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dc598:
    // 0x1dc598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc59c:
    // 0x1dc59c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc5a0:
    // 0x1dc5a0: 0xc066c72  jal         func_19B1C8
label_1dc5a4:
    if (ctx->pc == 0x1DC5A4u) {
        ctx->pc = 0x1DC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5A0u;
        // 0x1dc5a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5A8u;
        goto label_1dc5a8;
    }
    ctx->pc = 0x1DC5A0u;
    SET_GPR_U32(ctx, 31, 0x1DC5A8u);
    ctx->pc = 0x1DC5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC5A0u;
    // 0x1dc5a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC5A8u;
label_1dc5a8:
    // 0x1dc5a8: 0xc077e84  jal         func_1DFA10
label_1dc5ac:
    if (ctx->pc == 0x1DC5ACu) {
        ctx->pc = 0x1DC5B0u;
        goto label_1dc5b0;
    }
    ctx->pc = 0x1DC5A8u;
    SET_GPR_U32(ctx, 31, 0x1DC5B0u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DC5B0u;
label_1dc5b0:
    // 0x1dc5b0: 0xc077d90  jal         func_1DF640
label_1dc5b4:
    if (ctx->pc == 0x1DC5B4u) {
        ctx->pc = 0x1DC5B8u;
        goto label_1dc5b8;
    }
    ctx->pc = 0x1DC5B0u;
    SET_GPR_U32(ctx, 31, 0x1DC5B8u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DC5B8u;
label_1dc5b8:
    // 0x1dc5b8: 0xc077ab4  jal         func_1DEAD0
label_1dc5bc:
    if (ctx->pc == 0x1DC5BCu) {
        ctx->pc = 0x1DC5C0u;
        goto label_1dc5c0;
    }
    ctx->pc = 0x1DC5B8u;
    SET_GPR_U32(ctx, 31, 0x1DC5C0u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DC5C0u;
label_1dc5c0:
    // 0x1dc5c0: 0xc077880  jal         func_1DE200
label_1dc5c4:
    if (ctx->pc == 0x1DC5C4u) {
        ctx->pc = 0x1DC5C8u;
        goto label_1dc5c8;
    }
    ctx->pc = 0x1DC5C0u;
    SET_GPR_U32(ctx, 31, 0x1DC5C8u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DC5C8u;
label_1dc5c8:
    // 0x1dc5c8: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dc5cc:
    // 0x1dc5cc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dc5d0:
    if (ctx->pc == 0x1DC5D0u) {
        ctx->pc = 0x1DC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5CCu;
        // 0x1dc5d0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5D4u;
        goto label_1dc5d4;
    }
    ctx->pc = 0x1DC5CCu;
    {
        const bool branch_taken_0x1dc5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5CCu;
        // 0x1dc5d0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5cc) {
            ctx->pc = 0x1DC6A0u;
            goto label_1dc6a0;
        }
    }
    ctx->pc = 0x1DC5D4u;
label_1dc5d4:
    // 0x1dc5d4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dc5d8:
    // 0x1dc5d8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc5dc:
    // 0x1dc5dc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dc5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dc5e0:
    // 0x1dc5e0: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dc5e4:
    // 0x1dc5e4: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dc5e8:
    // 0x1dc5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5ec:
    // 0x1dc5ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc5ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5f0:
    // 0x1dc5f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dc5f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5f4:
    // 0x1dc5f4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dc5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dc5f8:
    // 0x1dc5f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc5fc:
    // 0x1dc5fc: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1dc5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dc600:
    // 0x1dc600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc604:
    // 0x1dc604: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc608:
    // 0x1dc608: 0xc066c72  jal         func_19B1C8
label_1dc60c:
    if (ctx->pc == 0x1DC60Cu) {
        ctx->pc = 0x1DC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC608u;
        // 0x1dc60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC610u;
        goto label_1dc610;
    }
    ctx->pc = 0x1DC608u;
    SET_GPR_U32(ctx, 31, 0x1DC610u);
    ctx->pc = 0x1DC60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC608u;
    // 0x1dc60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC610u;
label_1dc610:
    // 0x1dc610: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dc614:
    // 0x1dc614: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dc614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dc618:
    // 0x1dc618: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc61c:
    // 0x1dc61c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dc620:
    // 0x1dc620: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dc620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dc624:
    // 0x1dc624: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc628:
    // 0x1dc628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc62c:
    // 0x1dc62c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1dc62cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc630:
    // 0x1dc630: 0xc070e2c  jal         func_1C38B0
label_1dc634:
    if (ctx->pc == 0x1DC634u) {
        ctx->pc = 0x1DC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC630u;
        // 0x1dc634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC638u;
        goto label_1dc638;
    }
    ctx->pc = 0x1DC630u;
    SET_GPR_U32(ctx, 31, 0x1DC638u);
    ctx->pc = 0x1DC634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC630u;
    // 0x1dc634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC638u;
label_1dc638:
    // 0x1dc638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dc638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc63c:
    // 0x1dc63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc640:
    // 0x1dc640: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc644:
    // 0x1dc644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc648:
    // 0x1dc648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc64c:
    // 0x1dc64c: 0xc066c72  jal         func_19B1C8
label_1dc650:
    if (ctx->pc == 0x1DC650u) {
        ctx->pc = 0x1DC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC64Cu;
        // 0x1dc650: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC654u;
        goto label_1dc654;
    }
    ctx->pc = 0x1DC64Cu;
    SET_GPR_U32(ctx, 31, 0x1DC654u);
    ctx->pc = 0x1DC650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC64Cu;
    // 0x1dc650: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC654u;
label_1dc654:
    // 0x1dc654: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dc654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dc658:
    // 0x1dc658: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dc65c:
    if (ctx->pc == 0x1DC65Cu) {
        ctx->pc = 0x1DC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC658u;
        // 0x1dc65c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC660u;
        goto label_1dc660;
    }
    ctx->pc = 0x1DC658u;
    {
        const bool branch_taken_0x1dc658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC658u;
        // 0x1dc65c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc658) {
            ctx->pc = 0x1DC6A0u;
            goto label_1dc6a0;
        }
    }
    ctx->pc = 0x1DC660u;
label_1dc660:
    // 0x1dc660: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dc664:
    // 0x1dc664: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc668:
    // 0x1dc668: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dc668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dc66c:
    // 0x1dc66c: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dc670:
    // 0x1dc670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc674:
    // 0x1dc674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc678:
    // 0x1dc678: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dc678u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dc67c:
    // 0x1dc67c: 0xc070e2c  jal         func_1C38B0
label_1dc680:
    if (ctx->pc == 0x1DC680u) {
        ctx->pc = 0x1DC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC67Cu;
        // 0x1dc680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC684u;
        goto label_1dc684;
    }
    ctx->pc = 0x1DC67Cu;
    SET_GPR_U32(ctx, 31, 0x1DC684u);
    ctx->pc = 0x1DC680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC67Cu;
    // 0x1dc680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC684u;
label_1dc684:
    // 0x1dc684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc688:
    // 0x1dc688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dc688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc68c:
    // 0x1dc68c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc690:
    // 0x1dc690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc694:
    // 0x1dc694: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc698:
    // 0x1dc698: 0xc066c72  jal         func_19B1C8
label_1dc69c:
    if (ctx->pc == 0x1DC69Cu) {
        ctx->pc = 0x1DC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC698u;
        // 0x1dc69c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6A0u;
        goto label_1dc6a0;
    }
    ctx->pc = 0x1DC698u;
    SET_GPR_U32(ctx, 31, 0x1DC6A0u);
    ctx->pc = 0x1DC69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC698u;
    // 0x1dc69c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC6A0u;
label_1dc6a0:
    // 0x1dc6a0: 0xc07a86c  jal         func_1EA1B0
label_1dc6a4:
    if (ctx->pc == 0x1DC6A4u) {
        ctx->pc = 0x1DC6A8u;
        goto label_1dc6a8;
    }
    ctx->pc = 0x1DC6A0u;
    SET_GPR_U32(ctx, 31, 0x1DC6A8u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DC6A8u;
label_1dc6a8:
    // 0x1dc6a8: 0xc04e120  jal         func_138480
label_1dc6ac:
    if (ctx->pc == 0x1DC6ACu) {
        ctx->pc = 0x1DC6B0u;
        goto label_1dc6b0;
    }
    ctx->pc = 0x1DC6A8u;
    SET_GPR_U32(ctx, 31, 0x1DC6B0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DC6A8u, 0x1DC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6B0u;
label_1dc6b0:
    // 0x1dc6b0: 0xc05b578  jal         func_16D5E0
label_1dc6b4:
    if (ctx->pc == 0x1DC6B4u) {
        ctx->pc = 0x1DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6B0u;
        // 0x1dc6b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6B8u;
        goto label_1dc6b8;
    }
    ctx->pc = 0x1DC6B0u;
    SET_GPR_U32(ctx, 31, 0x1DC6B8u);
    ctx->pc = 0x1DC6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6B0u;
    // 0x1dc6b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DC6B0u, 0x1DC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6B8u;
label_1dc6b8:
    // 0x1dc6b8: 0xc060258  jal         func_180960
label_1dc6bc:
    if (ctx->pc == 0x1DC6BCu) {
        ctx->pc = 0x1DC6C0u;
        goto label_1dc6c0;
    }
    ctx->pc = 0x1DC6B8u;
    SET_GPR_U32(ctx, 31, 0x1DC6C0u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DC6C0u;
label_1dc6c0:
    // 0x1dc6c0: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dc6c4:
    // 0x1dc6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc6c8:
    // 0x1dc6c8: 0x1062ff54  beq         $v1, $v0, . + 4 + (-0xAC << 2)
label_1dc6cc:
    if (ctx->pc == 0x1DC6CCu) {
        ctx->pc = 0x1DC6D0u;
        goto label_1dc6d0;
    }
    ctx->pc = 0x1DC6C8u;
    {
        const bool branch_taken_0x1dc6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dc6c8) {
            ctx->pc = 0x1DC41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc41c;
        }
    }
    ctx->pc = 0x1DC6D0u;
label_1dc6d0:
    // 0x1dc6d0: 0x1000017d  b           . + 4 + (0x17D << 2)
label_1dc6d4:
    if (ctx->pc == 0x1DC6D4u) {
        ctx->pc = 0x1DC6D8u;
        goto label_1dc6d8;
    }
    ctx->pc = 0x1DC6D0u;
    {
        const bool branch_taken_0x1dc6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc6d0) {
            ctx->pc = 0x1DCCC8u;
            { ctx->pc = 0x1dccc8; return; }
        }
    }
    ctx->pc = 0x1DC6D8u;
label_1dc6d8:
    // 0x1dc6d8: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dc6d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dc6dc:
    // 0x1dc6dc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1dc6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1dc6e0:
    // 0x1dc6e0: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_1dc6e4:
    if (ctx->pc == 0x1DC6E4u) {
        ctx->pc = 0x1DC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6E0u;
        // 0x1dc6e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6E8u;
        goto label_1dc6e8;
    }
    ctx->pc = 0x1DC6E0u;
    {
        const bool branch_taken_0x1dc6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6E0u;
        // 0x1dc6e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc6e0) {
            ctx->pc = 0x1DC9C0u;
            { ctx->pc = 0x1dc9c0; return; }
        }
    }
    ctx->pc = 0x1DC6E8u;
label_1dc6e8:
    // 0x1dc6e8: 0xc05b420  jal         func_16D080
label_1dc6ec:
    if (ctx->pc == 0x1DC6ECu) {
        ctx->pc = 0x1DC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6E8u;
        // 0x1dc6ec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6F0u;
        goto label_1dc6f0;
    }
    ctx->pc = 0x1DC6E8u;
    SET_GPR_U32(ctx, 31, 0x1DC6F0u);
    ctx->pc = 0x1DC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6E8u;
    // 0x1dc6ec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DC6E8u, 0x1DC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6F0u;
label_1dc6f0:
    // 0x1dc6f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc6f4:
    // 0x1dc6f4: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc6f8:
    // 0x1dc6f8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1dc6fc:
    if (ctx->pc == 0x1DC6FCu) {
        ctx->pc = 0x1DC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6F8u;
        // 0x1dc6fc: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC700u;
        { ctx->pc = 0x1dc700; return; }
    }
    ctx->pc = 0x1DC6F8u;
    {
        const bool branch_taken_0x1dc6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6F8u;
        // 0x1dc6fc: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc6f8) {
            ctx->pc = 0x1DC9A8u;
            { ctx->pc = 0x1dc9a8; return; }
        }
    }
    ctx->pc = 0x1DC700u;
    ctx->pc = 0x1dc700u;
    return;
}

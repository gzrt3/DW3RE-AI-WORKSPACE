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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1caee0u: goto label_1caee0;
        case 0x1caee4u: goto label_1caee4;
        case 0x1caee8u: goto label_1caee8;
        case 0x1caeecu: goto label_1caeec;
        case 0x1caef0u: goto label_1caef0;
        case 0x1caef4u: goto label_1caef4;
        case 0x1caef8u: goto label_1caef8;
        case 0x1caefcu: goto label_1caefc;
        case 0x1caf00u: goto label_1caf00;
        case 0x1caf04u: goto label_1caf04;
        case 0x1caf08u: goto label_1caf08;
        case 0x1caf0cu: goto label_1caf0c;
        case 0x1caf10u: goto label_1caf10;
        case 0x1caf14u: goto label_1caf14;
        case 0x1caf18u: goto label_1caf18;
        case 0x1caf1cu: goto label_1caf1c;
        case 0x1caf20u: goto label_1caf20;
        case 0x1caf24u: goto label_1caf24;
        case 0x1caf28u: goto label_1caf28;
        case 0x1caf2cu: goto label_1caf2c;
        case 0x1caf30u: goto label_1caf30;
        case 0x1caf34u: goto label_1caf34;
        case 0x1caf38u: goto label_1caf38;
        case 0x1caf3cu: goto label_1caf3c;
        case 0x1caf40u: goto label_1caf40;
        case 0x1caf44u: goto label_1caf44;
        case 0x1caf48u: goto label_1caf48;
        case 0x1caf4cu: goto label_1caf4c;
        case 0x1caf50u: goto label_1caf50;
        case 0x1caf54u: goto label_1caf54;
        case 0x1caf58u: goto label_1caf58;
        case 0x1caf5cu: goto label_1caf5c;
        case 0x1caf60u: goto label_1caf60;
        case 0x1caf64u: goto label_1caf64;
        case 0x1caf68u: goto label_1caf68;
        case 0x1caf6cu: goto label_1caf6c;
        case 0x1caf70u: goto label_1caf70;
        case 0x1caf74u: goto label_1caf74;
        case 0x1caf78u: goto label_1caf78;
        case 0x1caf7cu: goto label_1caf7c;
        case 0x1caf80u: goto label_1caf80;
        case 0x1caf84u: goto label_1caf84;
        case 0x1caf88u: goto label_1caf88;
        case 0x1caf8cu: goto label_1caf8c;
        case 0x1caf90u: goto label_1caf90;
        case 0x1caf94u: goto label_1caf94;
        case 0x1caf98u: goto label_1caf98;
        case 0x1caf9cu: goto label_1caf9c;
        case 0x1cafa0u: goto label_1cafa0;
        case 0x1cafa4u: goto label_1cafa4;
        case 0x1cafa8u: goto label_1cafa8;
        case 0x1cafacu: goto label_1cafac;
        case 0x1cafb0u: goto label_1cafb0;
        case 0x1cafb4u: goto label_1cafb4;
        case 0x1cafb8u: goto label_1cafb8;
        case 0x1cafbcu: goto label_1cafbc;
        case 0x1cafc0u: goto label_1cafc0;
        case 0x1cafc4u: goto label_1cafc4;
        case 0x1cafc8u: goto label_1cafc8;
        case 0x1cafccu: goto label_1cafcc;
        case 0x1cafd0u: goto label_1cafd0;
        case 0x1cafd4u: goto label_1cafd4;
        case 0x1cafd8u: goto label_1cafd8;
        case 0x1cafdcu: goto label_1cafdc;
        case 0x1cafe0u: goto label_1cafe0;
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1cafe8u: goto label_1cafe8;
        case 0x1cafecu: goto label_1cafec;
        case 0x1caff0u: goto label_1caff0;
        case 0x1caff4u: goto label_1caff4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1caffcu: goto label_1caffc;
        case 0x1cb000u: goto label_1cb000;
        case 0x1cb004u: goto label_1cb004;
        case 0x1cb008u: goto label_1cb008;
        case 0x1cb00cu: goto label_1cb00c;
        case 0x1cb010u: goto label_1cb010;
        case 0x1cb014u: goto label_1cb014;
        case 0x1cb018u: goto label_1cb018;
        case 0x1cb01cu: goto label_1cb01c;
        case 0x1cb020u: goto label_1cb020;
        case 0x1cb024u: goto label_1cb024;
        case 0x1cb028u: goto label_1cb028;
        case 0x1cb02cu: goto label_1cb02c;
        case 0x1cb030u: goto label_1cb030;
        case 0x1cb034u: goto label_1cb034;
        case 0x1cb038u: goto label_1cb038;
        case 0x1cb03cu: goto label_1cb03c;
        case 0x1cb040u: goto label_1cb040;
        case 0x1cb044u: goto label_1cb044;
        case 0x1cb048u: goto label_1cb048;
        case 0x1cb04cu: goto label_1cb04c;
        case 0x1cb050u: goto label_1cb050;
        case 0x1cb054u: goto label_1cb054;
        case 0x1cb058u: goto label_1cb058;
        case 0x1cb05cu: goto label_1cb05c;
        case 0x1cb060u: goto label_1cb060;
        case 0x1cb064u: goto label_1cb064;
        case 0x1cb068u: goto label_1cb068;
        case 0x1cb06cu: goto label_1cb06c;
        case 0x1cb070u: goto label_1cb070;
        case 0x1cb074u: goto label_1cb074;
        case 0x1cb078u: goto label_1cb078;
        case 0x1cb07cu: goto label_1cb07c;
        case 0x1cb080u: goto label_1cb080;
        case 0x1cb084u: goto label_1cb084;
        case 0x1cb088u: goto label_1cb088;
        case 0x1cb08cu: goto label_1cb08c;
        case 0x1cb090u: goto label_1cb090;
        case 0x1cb094u: goto label_1cb094;
        case 0x1cb098u: goto label_1cb098;
        case 0x1cb09cu: goto label_1cb09c;
        case 0x1cb0a0u: goto label_1cb0a0;
        case 0x1cb0a4u: goto label_1cb0a4;
        case 0x1cb0a8u: goto label_1cb0a8;
        case 0x1cb0acu: goto label_1cb0ac;
        case 0x1cb0b0u: goto label_1cb0b0;
        case 0x1cb0b4u: goto label_1cb0b4;
        case 0x1cb0b8u: goto label_1cb0b8;
        case 0x1cb0bcu: goto label_1cb0bc;
        case 0x1cb0c0u: goto label_1cb0c0;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb0c8u: goto label_1cb0c8;
        case 0x1cb0ccu: goto label_1cb0cc;
        case 0x1cb0d0u: goto label_1cb0d0;
        case 0x1cb0d4u: goto label_1cb0d4;
        case 0x1cb0d8u: goto label_1cb0d8;
        case 0x1cb0dcu: goto label_1cb0dc;
        case 0x1cb0e0u: goto label_1cb0e0;
        case 0x1cb0e4u: goto label_1cb0e4;
        case 0x1cb0e8u: goto label_1cb0e8;
        case 0x1cb0ecu: goto label_1cb0ec;
        case 0x1cb0f0u: goto label_1cb0f0;
        case 0x1cb0f4u: goto label_1cb0f4;
        case 0x1cb0f8u: goto label_1cb0f8;
        case 0x1cb0fcu: goto label_1cb0fc;
        case 0x1cb100u: goto label_1cb100;
        case 0x1cb104u: goto label_1cb104;
        case 0x1cb108u: goto label_1cb108;
        case 0x1cb10cu: goto label_1cb10c;
        case 0x1cb110u: goto label_1cb110;
        case 0x1cb114u: goto label_1cb114;
        case 0x1cb118u: goto label_1cb118;
        case 0x1cb11cu: goto label_1cb11c;
        case 0x1cb120u: goto label_1cb120;
        case 0x1cb124u: goto label_1cb124;
        case 0x1cb128u: goto label_1cb128;
        case 0x1cb12cu: goto label_1cb12c;
        case 0x1cb130u: goto label_1cb130;
        case 0x1cb134u: goto label_1cb134;
        case 0x1cb138u: goto label_1cb138;
        case 0x1cb13cu: goto label_1cb13c;
        case 0x1cb140u: goto label_1cb140;
        case 0x1cb144u: goto label_1cb144;
        case 0x1cb148u: goto label_1cb148;
        case 0x1cb14cu: goto label_1cb14c;
        case 0x1cb150u: goto label_1cb150;
        case 0x1cb154u: goto label_1cb154;
        case 0x1cb158u: goto label_1cb158;
        case 0x1cb15cu: goto label_1cb15c;
        case 0x1cb160u: goto label_1cb160;
        case 0x1cb164u: goto label_1cb164;
        case 0x1cb168u: goto label_1cb168;
        case 0x1cb16cu: goto label_1cb16c;
        case 0x1cb170u: goto label_1cb170;
        case 0x1cb174u: goto label_1cb174;
        case 0x1cb178u: goto label_1cb178;
        case 0x1cb17cu: goto label_1cb17c;
        case 0x1cb180u: goto label_1cb180;
        case 0x1cb184u: goto label_1cb184;
        case 0x1cb188u: goto label_1cb188;
        case 0x1cb18cu: goto label_1cb18c;
        case 0x1cb190u: goto label_1cb190;
        case 0x1cb194u: goto label_1cb194;
        case 0x1cb198u: goto label_1cb198;
        case 0x1cb19cu: goto label_1cb19c;
        case 0x1cb1a0u: goto label_1cb1a0;
        case 0x1cb1a4u: goto label_1cb1a4;
        case 0x1cb1a8u: goto label_1cb1a8;
        case 0x1cb1acu: goto label_1cb1ac;
        case 0x1cb1b0u: goto label_1cb1b0;
        case 0x1cb1b4u: goto label_1cb1b4;
        case 0x1cb1b8u: goto label_1cb1b8;
        case 0x1cb1bcu: goto label_1cb1bc;
        case 0x1cb1c0u: goto label_1cb1c0;
        case 0x1cb1c4u: goto label_1cb1c4;
        case 0x1cb1c8u: goto label_1cb1c8;
        case 0x1cb1ccu: goto label_1cb1cc;
        case 0x1cb1d0u: goto label_1cb1d0;
        case 0x1cb1d4u: goto label_1cb1d4;
        case 0x1cb1d8u: goto label_1cb1d8;
        case 0x1cb1dcu: goto label_1cb1dc;
        case 0x1cb1e0u: goto label_1cb1e0;
        case 0x1cb1e4u: goto label_1cb1e4;
        case 0x1cb1e8u: goto label_1cb1e8;
        case 0x1cb1ecu: goto label_1cb1ec;
        case 0x1cb1f0u: goto label_1cb1f0;
        case 0x1cb1f4u: goto label_1cb1f4;
        case 0x1cb1f8u: goto label_1cb1f8;
        case 0x1cb1fcu: goto label_1cb1fc;
        case 0x1cb200u: goto label_1cb200;
        case 0x1cb204u: goto label_1cb204;
        case 0x1cb208u: goto label_1cb208;
        case 0x1cb20cu: goto label_1cb20c;
        case 0x1cb210u: goto label_1cb210;
        case 0x1cb214u: goto label_1cb214;
        case 0x1cb218u: goto label_1cb218;
        case 0x1cb21cu: goto label_1cb21c;
        case 0x1cb220u: goto label_1cb220;
        case 0x1cb224u: goto label_1cb224;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb22cu: goto label_1cb22c;
        case 0x1cb230u: goto label_1cb230;
        case 0x1cb234u: goto label_1cb234;
        case 0x1cb238u: goto label_1cb238;
        case 0x1cb23cu: goto label_1cb23c;
        case 0x1cb240u: goto label_1cb240;
        case 0x1cb244u: goto label_1cb244;
        case 0x1cb248u: goto label_1cb248;
        case 0x1cb24cu: goto label_1cb24c;
        case 0x1cb250u: goto label_1cb250;
        case 0x1cb254u: goto label_1cb254;
        case 0x1cb258u: goto label_1cb258;
        case 0x1cb25cu: goto label_1cb25c;
        case 0x1cb260u: goto label_1cb260;
        case 0x1cb264u: goto label_1cb264;
        case 0x1cb268u: goto label_1cb268;
        case 0x1cb26cu: goto label_1cb26c;
        case 0x1cb270u: goto label_1cb270;
        case 0x1cb274u: goto label_1cb274;
        case 0x1cb278u: goto label_1cb278;
        case 0x1cb27cu: goto label_1cb27c;
        case 0x1cb280u: goto label_1cb280;
        case 0x1cb284u: goto label_1cb284;
        case 0x1cb288u: goto label_1cb288;
        case 0x1cb28cu: goto label_1cb28c;
        case 0x1cb290u: goto label_1cb290;
        case 0x1cb294u: goto label_1cb294;
        case 0x1cb298u: goto label_1cb298;
        case 0x1cb29cu: goto label_1cb29c;
        case 0x1cb2a0u: goto label_1cb2a0;
        case 0x1cb2a4u: goto label_1cb2a4;
        case 0x1cb2a8u: goto label_1cb2a8;
        case 0x1cb2acu: goto label_1cb2ac;
        case 0x1cb2b0u: goto label_1cb2b0;
        case 0x1cb2b4u: goto label_1cb2b4;
        case 0x1cb2b8u: goto label_1cb2b8;
        case 0x1cb2bcu: goto label_1cb2bc;
        case 0x1cb2c0u: goto label_1cb2c0;
        case 0x1cb2c4u: goto label_1cb2c4;
        case 0x1cb2c8u: goto label_1cb2c8;
        case 0x1cb2ccu: goto label_1cb2cc;
        case 0x1cb2d0u: goto label_1cb2d0;
        case 0x1cb2d4u: goto label_1cb2d4;
        case 0x1cb2d8u: goto label_1cb2d8;
        case 0x1cb2dcu: goto label_1cb2dc;
        case 0x1cb2e0u: goto label_1cb2e0;
        case 0x1cb2e4u: goto label_1cb2e4;
        case 0x1cb2e8u: goto label_1cb2e8;
        case 0x1cb2ecu: goto label_1cb2ec;
        case 0x1cb2f0u: goto label_1cb2f0;
        case 0x1cb2f4u: goto label_1cb2f4;
        case 0x1cb2f8u: goto label_1cb2f8;
        case 0x1cb2fcu: goto label_1cb2fc;
        case 0x1cb300u: goto label_1cb300;
        case 0x1cb304u: goto label_1cb304;
        case 0x1cb308u: goto label_1cb308;
        case 0x1cb30cu: goto label_1cb30c;
        case 0x1cb310u: goto label_1cb310;
        case 0x1cb314u: goto label_1cb314;
        case 0x1cb318u: goto label_1cb318;
        case 0x1cb31cu: goto label_1cb31c;
        case 0x1cb320u: goto label_1cb320;
        case 0x1cb324u: goto label_1cb324;
        case 0x1cb328u: goto label_1cb328;
        case 0x1cb32cu: goto label_1cb32c;
        case 0x1cb330u: goto label_1cb330;
        case 0x1cb334u: goto label_1cb334;
        case 0x1cb338u: goto label_1cb338;
        case 0x1cb33cu: goto label_1cb33c;
        case 0x1cb340u: goto label_1cb340;
        case 0x1cb344u: goto label_1cb344;
        case 0x1cb348u: goto label_1cb348;
        case 0x1cb34cu: goto label_1cb34c;
        case 0x1cb350u: goto label_1cb350;
        case 0x1cb354u: goto label_1cb354;
        case 0x1cb358u: goto label_1cb358;
        case 0x1cb35cu: goto label_1cb35c;
        case 0x1cb360u: goto label_1cb360;
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb368u: goto label_1cb368;
        case 0x1cb36cu: goto label_1cb36c;
        case 0x1cb370u: goto label_1cb370;
        case 0x1cb374u: goto label_1cb374;
        case 0x1cb378u: goto label_1cb378;
        case 0x1cb37cu: goto label_1cb37c;
        case 0x1cb380u: goto label_1cb380;
        case 0x1cb384u: goto label_1cb384;
        case 0x1cb388u: goto label_1cb388;
        case 0x1cb38cu: goto label_1cb38c;
        case 0x1cb390u: goto label_1cb390;
        case 0x1cb394u: goto label_1cb394;
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb39cu: goto label_1cb39c;
        case 0x1cb3a0u: goto label_1cb3a0;
        case 0x1cb3a4u: goto label_1cb3a4;
        case 0x1cb3a8u: goto label_1cb3a8;
        case 0x1cb3acu: goto label_1cb3ac;
        case 0x1cb3b0u: goto label_1cb3b0;
        case 0x1cb3b4u: goto label_1cb3b4;
        case 0x1cb3b8u: goto label_1cb3b8;
        case 0x1cb3bcu: goto label_1cb3bc;
        case 0x1cb3c0u: goto label_1cb3c0;
        case 0x1cb3c4u: goto label_1cb3c4;
        case 0x1cb3c8u: goto label_1cb3c8;
        case 0x1cb3ccu: goto label_1cb3cc;
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3d8u: goto label_1cb3d8;
        case 0x1cb3dcu: goto label_1cb3dc;
        case 0x1cb3e0u: goto label_1cb3e0;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3e8u: goto label_1cb3e8;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f0u: goto label_1cb3f0;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb3fcu: goto label_1cb3fc;
        case 0x1cb400u: goto label_1cb400;
        case 0x1cb404u: goto label_1cb404;
        case 0x1cb408u: goto label_1cb408;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb410u: goto label_1cb410;
        case 0x1cb414u: goto label_1cb414;
        case 0x1cb418u: goto label_1cb418;
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb420u: goto label_1cb420;
        case 0x1cb424u: goto label_1cb424;
        case 0x1cb428u: goto label_1cb428;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb430u: goto label_1cb430;
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb444u: goto label_1cb444;
        case 0x1cb448u: goto label_1cb448;
        case 0x1cb44cu: goto label_1cb44c;
        case 0x1cb450u: goto label_1cb450;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb458u: goto label_1cb458;
        case 0x1cb45cu: goto label_1cb45c;
        case 0x1cb460u: goto label_1cb460;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb468u: goto label_1cb468;
        case 0x1cb46cu: goto label_1cb46c;
        case 0x1cb470u: goto label_1cb470;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb478u: goto label_1cb478;
        case 0x1cb47cu: goto label_1cb47c;
        case 0x1cb480u: goto label_1cb480;
        case 0x1cb484u: goto label_1cb484;
        case 0x1cb488u: goto label_1cb488;
        case 0x1cb48cu: goto label_1cb48c;
        case 0x1cb490u: goto label_1cb490;
        case 0x1cb494u: goto label_1cb494;
        case 0x1cb498u: goto label_1cb498;
        case 0x1cb49cu: goto label_1cb49c;
        case 0x1cb4a0u: goto label_1cb4a0;
        case 0x1cb4a4u: goto label_1cb4a4;
        case 0x1cb4a8u: goto label_1cb4a8;
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4b0u: goto label_1cb4b0;
        case 0x1cb4b4u: goto label_1cb4b4;
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4bcu: goto label_1cb4bc;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4c8u: goto label_1cb4c8;
        case 0x1cb4ccu: goto label_1cb4cc;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4d4u: goto label_1cb4d4;
        case 0x1cb4d8u: goto label_1cb4d8;
        case 0x1cb4dcu: goto label_1cb4dc;
        case 0x1cb4e0u: goto label_1cb4e0;
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb4ecu: goto label_1cb4ec;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb4f4u: goto label_1cb4f4;
        case 0x1cb4f8u: goto label_1cb4f8;
        case 0x1cb4fcu: goto label_1cb4fc;
        case 0x1cb500u: goto label_1cb500;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb508u: goto label_1cb508;
        case 0x1cb50cu: goto label_1cb50c;
        case 0x1cb510u: goto label_1cb510;
        case 0x1cb514u: goto label_1cb514;
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb51cu: goto label_1cb51c;
        case 0x1cb520u: goto label_1cb520;
        case 0x1cb524u: goto label_1cb524;
        case 0x1cb528u: goto label_1cb528;
        case 0x1cb52cu: goto label_1cb52c;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb534u: goto label_1cb534;
        case 0x1cb538u: goto label_1cb538;
        case 0x1cb53cu: goto label_1cb53c;
        case 0x1cb540u: goto label_1cb540;
        case 0x1cb544u: goto label_1cb544;
        case 0x1cb548u: goto label_1cb548;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb550u: goto label_1cb550;
        case 0x1cb554u: goto label_1cb554;
        case 0x1cb558u: goto label_1cb558;
        case 0x1cb55cu: goto label_1cb55c;
        case 0x1cb560u: goto label_1cb560;
        case 0x1cb564u: goto label_1cb564;
        case 0x1cb568u: goto label_1cb568;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb570u: goto label_1cb570;
        case 0x1cb574u: goto label_1cb574;
        case 0x1cb578u: goto label_1cb578;
        case 0x1cb57cu: goto label_1cb57c;
        case 0x1cb580u: goto label_1cb580;
        case 0x1cb584u: goto label_1cb584;
        case 0x1cb588u: goto label_1cb588;
        case 0x1cb58cu: goto label_1cb58c;
        case 0x1cb590u: goto label_1cb590;
        case 0x1cb594u: goto label_1cb594;
        case 0x1cb598u: goto label_1cb598;
        case 0x1cb59cu: goto label_1cb59c;
        case 0x1cb5a0u: goto label_1cb5a0;
        case 0x1cb5a4u: goto label_1cb5a4;
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5acu: goto label_1cb5ac;
        case 0x1cb5b0u: goto label_1cb5b0;
        case 0x1cb5b4u: goto label_1cb5b4;
        case 0x1cb5b8u: goto label_1cb5b8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5c0u: goto label_1cb5c0;
        case 0x1cb5c4u: goto label_1cb5c4;
        case 0x1cb5c8u: goto label_1cb5c8;
        case 0x1cb5ccu: goto label_1cb5cc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5d4u: goto label_1cb5d4;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5dcu: goto label_1cb5dc;
        case 0x1cb5e0u: goto label_1cb5e0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb5f4u: goto label_1cb5f4;
        case 0x1cb5f8u: goto label_1cb5f8;
        case 0x1cb5fcu: goto label_1cb5fc;
        case 0x1cb600u: goto label_1cb600;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb608u: goto label_1cb608;
        case 0x1cb60cu: goto label_1cb60c;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb614u: goto label_1cb614;
        case 0x1cb618u: goto label_1cb618;
        case 0x1cb61cu: goto label_1cb61c;
        case 0x1cb620u: goto label_1cb620;
        case 0x1cb624u: goto label_1cb624;
        case 0x1cb628u: goto label_1cb628;
        case 0x1cb62cu: goto label_1cb62c;
        case 0x1cb630u: goto label_1cb630;
        case 0x1cb634u: goto label_1cb634;
        case 0x1cb638u: goto label_1cb638;
        case 0x1cb63cu: goto label_1cb63c;
        case 0x1cb640u: goto label_1cb640;
        case 0x1cb644u: goto label_1cb644;
        case 0x1cb648u: goto label_1cb648;
        case 0x1cb64cu: goto label_1cb64c;
        case 0x1cb650u: goto label_1cb650;
        case 0x1cb654u: goto label_1cb654;
        case 0x1cb658u: goto label_1cb658;
        case 0x1cb65cu: goto label_1cb65c;
        case 0x1cb660u: goto label_1cb660;
        case 0x1cb664u: goto label_1cb664;
        case 0x1cb668u: goto label_1cb668;
        case 0x1cb66cu: goto label_1cb66c;
        case 0x1cb670u: goto label_1cb670;
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb678u: goto label_1cb678;
        case 0x1cb67cu: goto label_1cb67c;
        case 0x1cb680u: goto label_1cb680;
        case 0x1cb684u: goto label_1cb684;
        case 0x1cb688u: goto label_1cb688;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb690u: goto label_1cb690;
        case 0x1cb694u: goto label_1cb694;
        case 0x1cb698u: goto label_1cb698;
        case 0x1cb69cu: goto label_1cb69c;
        case 0x1cb6a0u: goto label_1cb6a0;
        case 0x1cb6a4u: goto label_1cb6a4;
        case 0x1cb6a8u: goto label_1cb6a8;
        case 0x1cb6acu: goto label_1cb6ac;
        default: return;
    }

label_1caee0:
    // 0x1caee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1caee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1caee4:
    // 0x1caee4: 0xa0850222  sb          $a1, 0x222($a0)
    ctx->pc = 0x1caee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 546), (uint8_t)GPR_U32(ctx, 5));
label_1caee8:
    // 0x1caee8: 0xa4850230  sh          $a1, 0x230($a0)
    ctx->pc = 0x1caee8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 560), (uint16_t)GPR_U32(ctx, 5));
label_1caeec:
    // 0x1caeec: 0x8c254900  lw          $a1, 0x4900($at)
    ctx->pc = 0x1caeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1caef0:
    // 0x1caef0: 0xac85022c  sw          $a1, 0x22C($a0)
    ctx->pc = 0x1caef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 5));
label_1caef4:
    // 0x1caef4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1caef8:
    // 0x1caef8: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1caefc:
    // 0x1caefc: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
label_1caf00:
    if (ctx->pc == 0x1CAF00u) {
        ctx->pc = 0x1CAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEFCu;
        // 0x1caf00: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF04u;
        goto label_1caf04;
    }
    ctx->pc = 0x1CAEFCu;
    {
        const bool branch_taken_0x1caefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEFCu;
        // 0x1caf00: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caefc) {
            ctx->pc = 0x1CB050u;
            goto label_1cb050;
        }
    }
    ctx->pc = 0x1CAF04u;
label_1caf04:
    // 0x1caf04: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_1caf08:
    if (ctx->pc == 0x1CAF08u) {
        ctx->pc = 0x1CAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF04u;
        // 0x1caf08: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF0Cu;
        goto label_1caf0c;
    }
    ctx->pc = 0x1CAF04u;
    {
        const bool branch_taken_0x1caf04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF04u;
        // 0x1caf08: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf04) {
            ctx->pc = 0x1CB054u;
            goto label_1cb054;
        }
    }
    ctx->pc = 0x1CAF0Cu;
label_1caf0c:
    // 0x1caf0c: 0x9222021f  lbu         $v0, 0x21F($s1)
    ctx->pc = 0x1caf0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 543)));
label_1caf10:
    // 0x1caf10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1caf14:
    if (ctx->pc == 0x1CAF14u) {
        ctx->pc = 0x1CAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF10u;
        // 0x1caf14: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF18u;
        goto label_1caf18;
    }
    ctx->pc = 0x1CAF10u;
    {
        const bool branch_taken_0x1caf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF10u;
        // 0x1caf14: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf10) {
            ctx->pc = 0x1CAF24u;
            goto label_1caf24;
        }
    }
    ctx->pc = 0x1CAF18u;
label_1caf18:
    // 0x1caf18: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x1caf18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1caf1c:
    // 0x1caf1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1caf20:
    if (ctx->pc == 0x1CAF20u) {
        ctx->pc = 0x1CAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF1Cu;
        // 0x1caf20: 0x24140015  addiu       $s4, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF24u;
        goto label_1caf24;
    }
    ctx->pc = 0x1CAF1Cu;
    {
        const bool branch_taken_0x1caf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF1Cu;
        // 0x1caf20: 0x24140015  addiu       $s4, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf1c) {
            ctx->pc = 0x1CAF28u;
            goto label_1caf28;
        }
    }
    ctx->pc = 0x1CAF24u;
label_1caf24:
    // 0x1caf24: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1caf24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1caf28:
    // 0x1caf28: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1caf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1caf2c:
    // 0x1caf2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1caf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caf30:
    // 0x1caf30: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1caf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1caf34:
    // 0x1caf34: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1caf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1caf38:
    // 0x1caf38: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1caf3c:
    // 0x1caf3c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_1caf40:
    // 0x1caf40: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1caf44:
    // 0x1caf44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1caf48:
    // 0x1caf48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1caf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1caf4c:
    // 0x1caf4c: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1caf4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1caf50:
    // 0x1caf50: 0x92a2003e  lbu         $v0, 0x3E($s5)
    ctx->pc = 0x1caf50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 62)));
label_1caf54:
    // 0x1caf54: 0x1450001b  bne         $v0, $s0, . + 4 + (0x1B << 2)
label_1caf58:
    if (ctx->pc == 0x1CAF58u) {
        ctx->pc = 0x1CAF5Cu;
        goto label_1caf5c;
    }
    ctx->pc = 0x1CAF54u;
    {
        const bool branch_taken_0x1caf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1caf54) {
            ctx->pc = 0x1CAFC4u;
            goto label_1cafc4;
        }
    }
    ctx->pc = 0x1CAF5Cu;
label_1caf5c:
    // 0x1caf5c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1caf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1caf60:
    // 0x1caf60: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1caf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1caf64:
    // 0x1caf64: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1caf64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1caf68:
    // 0x1caf68: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1caf6c:
    if (ctx->pc == 0x1CAF6Cu) {
        ctx->pc = 0x1CAF70u;
        goto label_1caf70;
    }
    ctx->pc = 0x1CAF68u;
    {
        const bool branch_taken_0x1caf68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf68) {
            ctx->pc = 0x1CAFC4u;
            goto label_1cafc4;
        }
    }
    ctx->pc = 0x1CAF70u;
label_1caf70:
    // 0x1caf70: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1caf74:
    if (ctx->pc == 0x1CAF74u) {
        ctx->pc = 0x1CAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF70u;
        // 0x1caf74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF78u;
        goto label_1caf78;
    }
    ctx->pc = 0x1CAF70u;
    {
        const bool branch_taken_0x1caf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF70u;
        // 0x1caf74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf70) {
            ctx->pc = 0x1CAFC4u;
            goto label_1cafc4;
        }
    }
    ctx->pc = 0x1CAF78u;
label_1caf78:
    // 0x1caf78: 0xc0448bc  jal         func_1122F0
label_1caf7c:
    if (ctx->pc == 0x1CAF7Cu) {
        ctx->pc = 0x1CAF80u;
        goto label_1caf80;
    }
    ctx->pc = 0x1CAF78u;
    SET_GPR_U32(ctx, 31, 0x1CAF80u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1CAF78u, 0x1CAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF80u;
label_1caf80:
    // 0x1caf80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1caf84:
    if (ctx->pc == 0x1CAF84u) {
        ctx->pc = 0x1CAF88u;
        goto label_1caf88;
    }
    ctx->pc = 0x1CAF80u;
    {
        const bool branch_taken_0x1caf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf80) {
            ctx->pc = 0x1CAFC4u;
            goto label_1cafc4;
        }
    }
    ctx->pc = 0x1CAF88u;
label_1caf88:
    // 0x1caf88: 0x92a50034  lbu         $a1, 0x34($s5)
    ctx->pc = 0x1caf88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
label_1caf8c:
    // 0x1caf8c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1caf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1caf90:
    // 0x1caf90: 0x92a60035  lbu         $a2, 0x35($s5)
    ctx->pc = 0x1caf90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
label_1caf94:
    // 0x1caf94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caf98:
    // 0x1caf98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caf98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caf9c:
    // 0x1caf9c: 0xc05d3e4  jal         func_174F90
label_1cafa0:
    if (ctx->pc == 0x1CAFA0u) {
        ctx->pc = 0x1CAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF9Cu;
        // 0x1cafa0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFA4u;
        goto label_1cafa4;
    }
    ctx->pc = 0x1CAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CAFA4u);
    ctx->pc = 0x1CAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF9Cu;
    // 0x1cafa0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAF9Cu, 0x1CAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFA4u;
label_1cafa4:
    // 0x1cafa4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1cafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1cafa8:
    // 0x1cafa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cafa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cafac:
    // 0x1cafac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cafacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cafb0:
    // 0x1cafb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cafb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cafb4:
    // 0x1cafb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cafb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cafb8:
    // 0x1cafb8: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cafb8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cafbc:
    // 0x1cafbc: 0xc05d3e4  jal         func_174F90
label_1cafc0:
    if (ctx->pc == 0x1CAFC0u) {
        ctx->pc = 0x1CAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFBCu;
        // 0x1cafc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFC4u;
        goto label_1cafc4;
    }
    ctx->pc = 0x1CAFBCu;
    SET_GPR_U32(ctx, 31, 0x1CAFC4u);
    ctx->pc = 0x1CAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFBCu;
    // 0x1cafc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAFBCu, 0x1CAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFC4u;
label_1cafc4:
    // 0x1cafc4: 0x0  nop
    ctx->pc = 0x1cafc4u;
    // NOP
label_1cafc8:
    // 0x1cafc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cafc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cafcc:
    // 0x1cafcc: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x1cafccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_1cafd0:
    // 0x1cafd0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_1cafd4:
    if (ctx->pc == 0x1CAFD4u) {
        ctx->pc = 0x1CAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFD0u;
        // 0x1cafd4: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFD8u;
        goto label_1cafd8;
    }
    ctx->pc = 0x1CAFD0u;
    {
        const bool branch_taken_0x1cafd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFD0u;
        // 0x1cafd4: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafd0) {
            ctx->pc = 0x1CAF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caf50;
        }
    }
    ctx->pc = 0x1CAFD8u;
label_1cafd8:
    // 0x1cafd8: 0x9226021f  lbu         $a2, 0x21F($s1)
    ctx->pc = 0x1cafd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 543)));
label_1cafdc:
    // 0x1cafdc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1cafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1cafe0:
    // 0x1cafe0: 0x92230220  lbu         $v1, 0x220($s1)
    ctx->pc = 0x1cafe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 544)));
label_1cafe4:
    // 0x1cafe4: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1cafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1cafe8:
    // 0x1cafe8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cafe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1cafec:
    // 0x1cafec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cafecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caff0:
    // 0x1caff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caff4:
    // 0x1caff4: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1caff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1caff8:
    // 0x1caff8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1caff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1caffc:
    // 0x1caffc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1caffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb000:
    // 0x1cb000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb004:
    // 0x1cb004: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cb004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb008:
    // 0x1cb008: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cb00c:
    // 0x1cb00c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb010:
    // 0x1cb010: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1cb010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb014:
    // 0x1cb014: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cb018:
    // 0x1cb018: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb01c:
    // 0x1cb01c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb020:
    // 0x1cb020: 0x92450034  lbu         $a1, 0x34($s2)
    ctx->pc = 0x1cb020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1cb024:
    // 0x1cb024: 0x92460035  lbu         $a2, 0x35($s2)
    ctx->pc = 0x1cb024u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_1cb028:
    // 0x1cb028: 0xc05d3e4  jal         func_174F90
label_1cb02c:
    if (ctx->pc == 0x1CB02Cu) {
        ctx->pc = 0x1CB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB028u;
        // 0x1cb02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB030u;
        goto label_1cb030;
    }
    ctx->pc = 0x1CB028u;
    SET_GPR_U32(ctx, 31, 0x1CB030u);
    ctx->pc = 0x1CB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB028u;
    // 0x1cb02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB028u, 0x1CB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB030u;
label_1cb030:
    // 0x1cb030: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cb030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb034:
    // 0x1cb034: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cb034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cb038:
    // 0x1cb038: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb03c:
    // 0x1cb03c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb040:
    // 0x1cb040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb044:
    // 0x1cb044: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb044u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb048:
    // 0x1cb048: 0xc05d3e4  jal         func_174F90
label_1cb04c:
    if (ctx->pc == 0x1CB04Cu) {
        ctx->pc = 0x1CB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB048u;
        // 0x1cb04c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB050u;
        goto label_1cb050;
    }
    ctx->pc = 0x1CB048u;
    SET_GPR_U32(ctx, 31, 0x1CB050u);
    ctx->pc = 0x1CB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB048u;
    // 0x1cb04c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB048u, 0x1CB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB050u;
label_1cb050:
    // 0x1cb050: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cb050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb054:
    // 0x1cb054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cb054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb058:
    // 0x1cb058: 0x9224021f  lbu         $a0, 0x21F($s1)
    ctx->pc = 0x1cb058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 543)));
label_1cb05c:
    // 0x1cb05c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb060:
    // 0x1cb060: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1cb060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1cb064:
    // 0x1cb064: 0x2039804  sllv        $s3, $v1, $s0
    ctx->pc = 0x1cb064u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_1cb068:
    // 0x1cb068: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1cb068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1cb06c:
    // 0x1cb06c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x1cb06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_1cb070:
    // 0x1cb070: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb074:
    // 0x1cb074: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1cb074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cb078:
    // 0x1cb078: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cb07c:
    // 0x1cb07c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb080:
    // 0x1cb080: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1cb084:
    // 0x1cb084: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cb084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cb088:
    // 0x1cb088: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cb08c:
    // 0x1cb08c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1cb090:
    // 0x1cb090: 0x8c630238  lw          $v1, 0x238($v1)
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
label_1cb094:
    // 0x1cb094: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x1cb094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_1cb098:
    // 0x1cb098: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1cb09c:
    if (ctx->pc == 0x1CB09Cu) {
        ctx->pc = 0x1CB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB098u;
        // 0x1cb09c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0A0u;
        goto label_1cb0a0;
    }
    ctx->pc = 0x1CB098u;
    {
        const bool branch_taken_0x1cb098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB098u;
        // 0x1cb09c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb098) {
            ctx->pc = 0x1CB11Cu;
            goto label_1cb11c;
        }
    }
    ctx->pc = 0x1CB0A0u;
label_1cb0a0:
    // 0x1cb0a0: 0xc0564fc  jal         func_1593F0
label_1cb0a4:
    if (ctx->pc == 0x1CB0A4u) {
        ctx->pc = 0x1CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0A0u;
        // 0x1cb0a4: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB0A8u;
        goto label_1cb0a8;
    }
    ctx->pc = 0x1CB0A0u;
    SET_GPR_U32(ctx, 31, 0x1CB0A8u);
    ctx->pc = 0x1CB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0A0u;
    // 0x1cb0a4: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1CB0A0u, 0x1CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0A8u;
label_1cb0a8:
    // 0x1cb0a8: 0x9224021f  lbu         $a0, 0x21F($s1)
    ctx->pc = 0x1cb0a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 543)));
label_1cb0ac:
    // 0x1cb0ac: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1cb0b0:
    // 0x1cb0b0: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1cb0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1cb0b4:
    // 0x1cb0b4: 0x2601827  not         $v1, $s3
    ctx->pc = 0x1cb0b4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
label_1cb0b8:
    // 0x1cb0b8: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x1cb0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_1cb0bc:
    // 0x1cb0bc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1cb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb0c0:
    // 0x1cb0c0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1cb0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cb0c4:
    // 0x1cb0c4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cb0c8:
    // 0x1cb0c8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1cb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cb0cc:
    // 0x1cb0cc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1cb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cb0d0:
    // 0x1cb0d0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cb0d4:
    // 0x1cb0d4: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1cb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1cb0d8:
    // 0x1cb0d8: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1cb0dc:
    // 0x1cb0dc: 0x8ca40238  lw          $a0, 0x238($a1)
    ctx->pc = 0x1cb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
label_1cb0e0:
    // 0x1cb0e0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1cb0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cb0e4:
    // 0x1cb0e4: 0xaca40238  sw          $a0, 0x238($a1)
    ctx->pc = 0x1cb0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 4));
label_1cb0e8:
    // 0x1cb0e8: 0x9224021f  lbu         $a0, 0x21F($s1)
    ctx->pc = 0x1cb0e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 543)));
label_1cb0ec:
    // 0x1cb0ec: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x1cb0ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_1cb0f0:
    // 0x1cb0f0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb0f4:
    // 0x1cb0f4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1cb0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cb0f8:
    // 0x1cb0f8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1cb0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cb0fc:
    // 0x1cb0fc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1cb0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cb100:
    // 0x1cb100: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1cb100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cb104:
    // 0x1cb104: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cb108:
    // 0x1cb108: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1cb108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1cb10c:
    // 0x1cb10c: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1cb110:
    // 0x1cb110: 0x8ca40234  lw          $a0, 0x234($a1)
    ctx->pc = 0x1cb110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 564)));
label_1cb114:
    // 0x1cb114: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cb114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cb118:
    // 0x1cb118: 0xaca30234  sw          $v1, 0x234($a1)
    ctx->pc = 0x1cb118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 564), GPR_U32(ctx, 3));
label_1cb11c:
    // 0x1cb11c: 0x0  nop
    ctx->pc = 0x1cb11cu;
    // NOP
label_1cb120:
    // 0x1cb120: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1cb124:
    // 0x1cb124: 0x2a83000c  slti        $v1, $s4, 0xC
    ctx->pc = 0x1cb124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cb128:
    // 0x1cb128: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_1cb12c:
    if (ctx->pc == 0x1CB12Cu) {
        ctx->pc = 0x1CB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB128u;
        // 0x1cb12c: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB130u;
        goto label_1cb130;
    }
    ctx->pc = 0x1CB128u;
    {
        const bool branch_taken_0x1cb128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB128u;
        // 0x1cb12c: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb128) {
            ctx->pc = 0x1CB058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb058;
        }
    }
    ctx->pc = 0x1CB130u;
label_1cb130:
    // 0x1cb130: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1cb130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1cb134:
    // 0x1cb134: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cb134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cb138:
    // 0x1cb138: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cb138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cb13c:
    // 0x1cb13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cb13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb140:
    // 0x1cb140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb144:
    // 0x1cb144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb148:
    // 0x1cb148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb14c:
    // 0x1cb14c: 0x3e00008  jr          $ra
label_1cb150:
    if (ctx->pc == 0x1CB150u) {
        ctx->pc = 0x1CB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB14Cu;
        // 0x1cb150: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB154u;
        goto label_1cb154;
    }
    ctx->pc = 0x1CB14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB14Cu;
        // 0x1cb150: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB154u;
label_1cb154:
    // 0x1cb154: 0x0  nop
    ctx->pc = 0x1cb154u;
    // NOP
label_1cb158:
    // 0x1cb158: 0x0  nop
    ctx->pc = 0x1cb158u;
    // NOP
label_1cb15c:
    // 0x1cb15c: 0x0  nop
    ctx->pc = 0x1cb15cu;
    // NOP
label_1cb160:
    // 0x1cb160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cb164:
    // 0x1cb164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cb168:
    // 0x1cb168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cb16c:
    // 0x1cb16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb170:
    // 0x1cb170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb174:
    // 0x1cb174: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1cb174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb178:
    // 0x1cb178: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x1cb178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_1cb17c:
    // 0x1cb17c: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cb17cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cb180:
    // 0x1cb180: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1cb184:
    if (ctx->pc == 0x1CB184u) {
        ctx->pc = 0x1CB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB180u;
        // 0x1cb184: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB188u;
        goto label_1cb188;
    }
    ctx->pc = 0x1CB180u;
    {
        const bool branch_taken_0x1cb180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB180u;
        // 0x1cb184: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb180) {
            ctx->pc = 0x1CB190u;
            goto label_1cb190;
        }
    }
    ctx->pc = 0x1CB188u;
label_1cb188:
    // 0x1cb188: 0x10000010  b           . + 4 + (0x10 << 2)
label_1cb18c:
    if (ctx->pc == 0x1CB18Cu) {
        ctx->pc = 0x1CB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB188u;
        // 0x1cb18c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB190u;
        goto label_1cb190;
    }
    ctx->pc = 0x1CB188u;
    {
        const bool branch_taken_0x1cb188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB188u;
        // 0x1cb18c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb188) {
            ctx->pc = 0x1CB1CCu;
            goto label_1cb1cc;
        }
    }
    ctx->pc = 0x1CB190u;
label_1cb190:
    // 0x1cb190: 0x90860034  lbu         $a2, 0x34($a0)
    ctx->pc = 0x1cb190u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1cb194:
    // 0x1cb194: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1cb198:
    // 0x1cb198: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1cb198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1cb19c:
    // 0x1cb19c: 0x90e40011  lbu         $a0, 0x11($a3)
    ctx->pc = 0x1cb19cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
label_1cb1a0:
    // 0x1cb1a0: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1cb1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1cb1a4:
    // 0x1cb1a4: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x1cb1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb1a8:
    // 0x1cb1a8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb1ac:
    // 0x1cb1ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cb1b0:
    // 0x1cb1b0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb1b4:
    // 0x1cb1b4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cb1b8:
    // 0x1cb1b8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb1bc:
    // 0x1cb1bc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb1c0:
    // 0x1cb1c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cb1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cb1c4:
    // 0x1cb1c4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cb1c8:
    // 0x1cb1c8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cb1cc:
    // 0x1cb1cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb1d0:
    // 0x1cb1d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cb1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cb1d4:
    // 0x1cb1d4: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1cb1d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1cb1d8:
    // 0x1cb1d8: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_1cb1dc:
    if (ctx->pc == 0x1CB1DCu) {
        ctx->pc = 0x1CB1E0u;
        goto label_1cb1e0;
    }
    ctx->pc = 0x1CB1D8u;
    {
        const bool branch_taken_0x1cb1d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb1d8) {
            ctx->pc = 0x1CB264u;
            goto label_1cb264;
        }
    }
    ctx->pc = 0x1CB1E0u;
label_1cb1e0:
    // 0x1cb1e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb1e4:
    // 0x1cb1e4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1cb1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1cb1e8:
    // 0x1cb1e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1cb1ec:
    if (ctx->pc == 0x1CB1ECu) {
        ctx->pc = 0x1CB1F0u;
        goto label_1cb1f0;
    }
    ctx->pc = 0x1CB1E8u;
    {
        const bool branch_taken_0x1cb1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1e8) {
            ctx->pc = 0x1CB210u;
            goto label_1cb210;
        }
    }
    ctx->pc = 0x1CB1F0u;
label_1cb1f0:
    // 0x1cb1f0: 0x92230045  lbu         $v1, 0x45($s1)
    ctx->pc = 0x1cb1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_1cb1f4:
    // 0x1cb1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cb1f8:
    // 0x1cb1f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1cb1fc:
    if (ctx->pc == 0x1CB1FCu) {
        ctx->pc = 0x1CB200u;
        goto label_1cb200;
    }
    ctx->pc = 0x1CB1F8u;
    {
        const bool branch_taken_0x1cb1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb1f8) {
            ctx->pc = 0x1CB210u;
            goto label_1cb210;
        }
    }
    ctx->pc = 0x1CB200u;
label_1cb200:
    // 0x1cb200: 0x92020039  lbu         $v0, 0x39($s0)
    ctx->pc = 0x1cb200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_1cb204:
    // 0x1cb204: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1cb204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cb208:
    // 0x1cb208: 0xc0438a4  jal         func_10E290
label_1cb20c:
    if (ctx->pc == 0x1CB20Cu) {
        ctx->pc = 0x1CB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB208u;
        // 0x1cb20c: 0x2445ffb8  addiu       $a1, $v0, -0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB210u;
        goto label_1cb210;
    }
    ctx->pc = 0x1CB208u;
    SET_GPR_U32(ctx, 31, 0x1CB210u);
    ctx->pc = 0x1CB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB208u;
    // 0x1cb20c: 0x2445ffb8  addiu       $a1, $v0, -0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E290u, 0x1CB208u, 0x1CB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB210u;
label_1cb210:
    // 0x1cb210: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x1cb210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1cb214:
    // 0x1cb214: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb218:
    // 0x1cb218: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1cb218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1cb21c:
    // 0x1cb21c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1cb220:
    // 0x1cb220: 0x92260035  lbu         $a2, 0x35($s1)
    ctx->pc = 0x1cb220u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_1cb224:
    // 0x1cb224: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1cb228:
    // 0x1cb228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb22c:
    // 0x1cb22c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb22cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb230:
    // 0x1cb230: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb234:
    // 0x1cb234: 0xc05d3e4  jal         func_174F90
label_1cb238:
    if (ctx->pc == 0x1CB238u) {
        ctx->pc = 0x1CB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB234u;
        // 0x1cb238: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB23Cu;
        goto label_1cb23c;
    }
    ctx->pc = 0x1CB234u;
    SET_GPR_U32(ctx, 31, 0x1CB23Cu);
    ctx->pc = 0x1CB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB234u;
    // 0x1cb238: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB234u, 0x1CB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB23Cu;
label_1cb23c:
    // 0x1cb23c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb240:
    // 0x1cb240: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cb240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb244:
    // 0x1cb244: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb248:
    // 0x1cb248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb24c:
    // 0x1cb24c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb24cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb250:
    // 0x1cb250: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb250u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb254:
    // 0x1cb254: 0xc05d3e4  jal         func_174F90
label_1cb258:
    if (ctx->pc == 0x1CB258u) {
        ctx->pc = 0x1CB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB254u;
        // 0x1cb258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB25Cu;
        goto label_1cb25c;
    }
    ctx->pc = 0x1CB254u;
    SET_GPR_U32(ctx, 31, 0x1CB25Cu);
    ctx->pc = 0x1CB258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB254u;
    // 0x1cb258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB254u, 0x1CB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB25Cu;
label_1cb25c:
    // 0x1cb25c: 0xc0448fc  jal         func_1123F0
label_1cb260:
    if (ctx->pc == 0x1CB260u) {
        ctx->pc = 0x1CB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB25Cu;
        // 0x1cb260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB264u;
        goto label_1cb264;
    }
    ctx->pc = 0x1CB25Cu;
    SET_GPR_U32(ctx, 31, 0x1CB264u);
    ctx->pc = 0x1CB260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB25Cu;
    // 0x1cb260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1123F0u, 0x1CB25Cu, 0x1CB264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB264u;
label_1cb264:
    // 0x1cb264: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb268:
    // 0x1cb268: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb26c:
    // 0x1cb26c: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cb26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cb270:
    // 0x1cb270: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
label_1cb274:
    if (ctx->pc == 0x1CB274u) {
        ctx->pc = 0x1CB278u;
        goto label_1cb278;
    }
    ctx->pc = 0x1CB270u;
    {
        const bool branch_taken_0x1cb270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb270) {
            ctx->pc = 0x1CB3E4u;
            goto label_1cb3e4;
        }
    }
    ctx->pc = 0x1CB278u;
label_1cb278:
    // 0x1cb278: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x1cb278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1cb27c:
    // 0x1cb27c: 0x9225003e  lbu         $a1, 0x3E($s1)
    ctx->pc = 0x1cb27cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_1cb280:
    // 0x1cb280: 0xc0564fc  jal         func_1593F0
label_1cb284:
    if (ctx->pc == 0x1CB284u) {
        ctx->pc = 0x1CB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB280u;
        // 0x1cb284: 0x2406ff9c  addiu       $a2, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB288u;
        goto label_1cb288;
    }
    ctx->pc = 0x1CB280u;
    SET_GPR_U32(ctx, 31, 0x1CB288u);
    ctx->pc = 0x1CB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB280u;
    // 0x1cb284: 0x2406ff9c  addiu       $a2, $zero, -0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1CB280u, 0x1CB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB288u;
label_1cb288:
    // 0x1cb288: 0xc0448bc  jal         func_1122F0
label_1cb28c:
    if (ctx->pc == 0x1CB28Cu) {
        ctx->pc = 0x1CB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB288u;
        // 0x1cb28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB290u;
        goto label_1cb290;
    }
    ctx->pc = 0x1CB288u;
    SET_GPR_U32(ctx, 31, 0x1CB290u);
    ctx->pc = 0x1CB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB288u;
    // 0x1cb28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1CB288u, 0x1CB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB290u;
label_1cb290:
    // 0x1cb290: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_1cb294:
    if (ctx->pc == 0x1CB294u) {
        ctx->pc = 0x1CB298u;
        goto label_1cb298;
    }
    ctx->pc = 0x1CB290u;
    {
        const bool branch_taken_0x1cb290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb290) {
            ctx->pc = 0x1CB3E4u;
            goto label_1cb3e4;
        }
    }
    ctx->pc = 0x1CB298u;
label_1cb298:
    // 0x1cb298: 0x92040034  lbu         $a0, 0x34($s0)
    ctx->pc = 0x1cb298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1cb29c:
    // 0x1cb29c: 0x9205003e  lbu         $a1, 0x3E($s0)
    ctx->pc = 0x1cb29cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_1cb2a0:
    // 0x1cb2a0: 0xc0564fc  jal         func_1593F0
label_1cb2a4:
    if (ctx->pc == 0x1CB2A4u) {
        ctx->pc = 0x1CB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2A0u;
        // 0x1cb2a4: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB2A8u;
        goto label_1cb2a8;
    }
    ctx->pc = 0x1CB2A0u;
    SET_GPR_U32(ctx, 31, 0x1CB2A8u);
    ctx->pc = 0x1CB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2A0u;
    // 0x1cb2a4: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1CB2A0u, 0x1CB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2A8u;
label_1cb2a8:
    // 0x1cb2a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb2ac:
    // 0x1cb2ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cb2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1cb2b0:
    // 0x1cb2b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb2b4:
    // 0x1cb2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2b8:
    // 0x1cb2b8: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1cb2b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1cb2bc:
    // 0x1cb2bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb2bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2c0:
    // 0x1cb2c0: 0x92260035  lbu         $a2, 0x35($s1)
    ctx->pc = 0x1cb2c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_1cb2c4:
    // 0x1cb2c4: 0x9452000a  lhu         $s2, 0xA($v0)
    ctx->pc = 0x1cb2c4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb2c8:
    // 0x1cb2c8: 0x9471000a  lhu         $s1, 0xA($v1)
    ctx->pc = 0x1cb2c8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1cb2cc:
    // 0x1cb2cc: 0xc05d3e4  jal         func_174F90
label_1cb2d0:
    if (ctx->pc == 0x1CB2D0u) {
        ctx->pc = 0x1CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2CCu;
        // 0x1cb2d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB2D4u;
        goto label_1cb2d4;
    }
    ctx->pc = 0x1CB2CCu;
    SET_GPR_U32(ctx, 31, 0x1CB2D4u);
    ctx->pc = 0x1CB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2CCu;
    // 0x1cb2d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB2CCu, 0x1CB2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2D4u;
label_1cb2d4:
    // 0x1cb2d4: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x1cb2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1cb2d8:
    // 0x1cb2d8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_1cb2dc:
    if (ctx->pc == 0x1CB2DCu) {
        ctx->pc = 0x1CB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2D8u;
        // 0x1cb2dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB2E0u;
        goto label_1cb2e0;
    }
    ctx->pc = 0x1CB2D8u;
    {
        const bool branch_taken_0x1cb2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2D8u;
        // 0x1cb2dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2d8) {
            ctx->pc = 0x1CB3CCu;
            goto label_1cb3cc;
        }
    }
    ctx->pc = 0x1CB2E0u;
label_1cb2e0:
    // 0x1cb2e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cb2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2e4:
    // 0x1cb2e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1cb2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2e8:
    // 0x1cb2e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2ec:
    // 0x1cb2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb2f0:
    // 0x1cb2f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2f4:
    // 0x1cb2f4: 0xc05d3e4  jal         func_174F90
label_1cb2f8:
    if (ctx->pc == 0x1CB2F8u) {
        ctx->pc = 0x1CB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2F4u;
        // 0x1cb2f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB2FCu;
        goto label_1cb2fc;
    }
    ctx->pc = 0x1CB2F4u;
    SET_GPR_U32(ctx, 31, 0x1CB2FCu);
    ctx->pc = 0x1CB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2F4u;
    // 0x1cb2f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB2F4u, 0x1CB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2FCu;
label_1cb2fc:
    // 0x1cb2fc: 0xc08f0cc  jal         func_23C330
label_1cb300:
    if (ctx->pc == 0x1CB300u) {
        ctx->pc = 0x1CB304u;
        goto label_1cb304;
    }
    ctx->pc = 0x1CB2FCu;
    SET_GPR_U32(ctx, 31, 0x1CB304u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CB304u;
label_1cb304:
    // 0x1cb304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb308:
    // 0x1cb308: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1cb308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1cb30c:
    // 0x1cb30c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb310:
    // 0x1cb310: 0x0  nop
    ctx->pc = 0x1cb310u;
    // NOP
label_1cb314:
    // 0x1cb314: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cb318:
    // 0x1cb318: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cb31c:
    // 0x1cb31c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cb31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cb320:
    // 0x1cb320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb324:
    // 0x1cb324: 0x0  nop
    ctx->pc = 0x1cb324u;
    // NOP
label_1cb328:
    // 0x1cb328: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cb328u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cb32c:
    // 0x1cb32c: 0x0  nop
    ctx->pc = 0x1cb32cu;
    // NOP
label_1cb330:
    // 0x1cb330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cb334:
    // 0x1cb334: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cb334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1cb338:
    // 0x1cb338: 0x0  nop
    ctx->pc = 0x1cb338u;
    // NOP
label_1cb33c:
    // 0x1cb33c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1cb340:
    if (ctx->pc == 0x1CB340u) {
        ctx->pc = 0x1CB344u;
        goto label_1cb344;
    }
    ctx->pc = 0x1CB33Cu;
    {
        const bool branch_taken_0x1cb33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb33c) {
            ctx->pc = 0x1CB3E4u;
            goto label_1cb3e4;
        }
    }
    ctx->pc = 0x1CB344u;
label_1cb344:
    // 0x1cb344: 0x92050035  lbu         $a1, 0x35($s0)
    ctx->pc = 0x1cb344u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1cb348:
    // 0x1cb348: 0xc0561b8  jal         func_1586E0
label_1cb34c:
    if (ctx->pc == 0x1CB34Cu) {
        ctx->pc = 0x1CB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB348u;
        // 0x1cb34c: 0x92040034  lbu         $a0, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB350u;
        goto label_1cb350;
    }
    ctx->pc = 0x1CB348u;
    SET_GPR_U32(ctx, 31, 0x1CB350u);
    ctx->pc = 0x1CB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB348u;
    // 0x1cb34c: 0x92040034  lbu         $a0, 0x34($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1586E0u, 0x1CB348u, 0x1CB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB350u;
label_1cb350:
    // 0x1cb350: 0x92030035  lbu         $v1, 0x35($s0)
    ctx->pc = 0x1cb350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1cb354:
    // 0x1cb354: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_1cb358:
    if (ctx->pc == 0x1CB358u) {
        ctx->pc = 0x1CB35Cu;
        goto label_1cb35c;
    }
    ctx->pc = 0x1CB354u;
    {
        const bool branch_taken_0x1cb354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb354) {
            ctx->pc = 0x1CB3E4u;
            goto label_1cb3e4;
        }
    }
    ctx->pc = 0x1CB35Cu;
label_1cb35c:
    // 0x1cb35c: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x1cb35cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1cb360:
    // 0x1cb360: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb364:
    // 0x1cb364: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cb368:
    // 0x1cb368: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1cb36c:
    // 0x1cb36c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb370:
    // 0x1cb370: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1cb374:
    // 0x1cb374: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1cb378:
    // 0x1cb378: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cb37c:
    // 0x1cb37c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb380:
    // 0x1cb380: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cb380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cb384:
    // 0x1cb384: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cb384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb388:
    // 0x1cb388: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cb388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb38c:
    // 0x1cb38c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb390:
    // 0x1cb390: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb394:
    // 0x1cb394: 0x92040034  lbu         $a0, 0x34($s0)
    ctx->pc = 0x1cb394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1cb398:
    // 0x1cb398: 0x9205003e  lbu         $a1, 0x3E($s0)
    ctx->pc = 0x1cb398u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_1cb39c:
    // 0x1cb39c: 0xc0564fc  jal         func_1593F0
label_1cb3a0:
    if (ctx->pc == 0x1CB3A0u) {
        ctx->pc = 0x1CB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB39Cu;
        // 0x1cb3a0: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3A4u;
        goto label_1cb3a4;
    }
    ctx->pc = 0x1CB39Cu;
    SET_GPR_U32(ctx, 31, 0x1CB3A4u);
    ctx->pc = 0x1CB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB39Cu;
    // 0x1cb3a0: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1CB39Cu, 0x1CB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3A4u;
label_1cb3a4:
    // 0x1cb3a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb3a8:
    // 0x1cb3a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3ac:
    // 0x1cb3ac: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1cb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1cb3b0:
    // 0x1cb3b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3b4:
    // 0x1cb3b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb3b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3b8:
    // 0x1cb3b8: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb3b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb3bc:
    // 0x1cb3bc: 0xc05d3e4  jal         func_174F90
label_1cb3c0:
    if (ctx->pc == 0x1CB3C0u) {
        ctx->pc = 0x1CB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3BCu;
        // 0x1cb3c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3C4u;
        goto label_1cb3c4;
    }
    ctx->pc = 0x1CB3BCu;
    SET_GPR_U32(ctx, 31, 0x1CB3C4u);
    ctx->pc = 0x1CB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3BCu;
    // 0x1cb3c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB3BCu, 0x1CB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3C4u;
label_1cb3c4:
    // 0x1cb3c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cb3c8:
    if (ctx->pc == 0x1CB3C8u) {
        ctx->pc = 0x1CB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3C4u;
        // 0x1cb3c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3CCu;
        goto label_1cb3cc;
    }
    ctx->pc = 0x1CB3C4u;
    {
        const bool branch_taken_0x1cb3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3C4u;
        // 0x1cb3c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3c4) {
            ctx->pc = 0x1CB3E8u;
            goto label_1cb3e8;
        }
    }
    ctx->pc = 0x1CB3CCu;
label_1cb3cc:
    // 0x1cb3cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cb3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3d0:
    // 0x1cb3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3d4:
    // 0x1cb3d4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1cb3d8:
    // 0x1cb3d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3dc:
    // 0x1cb3dc: 0xc05d3e4  jal         func_174F90
label_1cb3e0:
    if (ctx->pc == 0x1CB3E0u) {
        ctx->pc = 0x1CB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3DCu;
        // 0x1cb3e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3E4u;
        goto label_1cb3e4;
    }
    ctx->pc = 0x1CB3DCu;
    SET_GPR_U32(ctx, 31, 0x1CB3E4u);
    ctx->pc = 0x1CB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3DCu;
    // 0x1cb3e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB3DCu, 0x1CB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3E4u;
label_1cb3e4:
    // 0x1cb3e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cb3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb3e8:
    // 0x1cb3e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb3ec:
    // 0x1cb3ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb3ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb3f0:
    // 0x1cb3f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb3f4:
    // 0x1cb3f4: 0x3e00008  jr          $ra
label_1cb3f8:
    if (ctx->pc == 0x1CB3F8u) {
        ctx->pc = 0x1CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3F4u;
        // 0x1cb3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3FCu;
        goto label_1cb3fc;
    }
    ctx->pc = 0x1CB3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3F4u;
        // 0x1cb3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB3FCu;
label_1cb3fc:
    // 0x1cb3fc: 0x0  nop
    ctx->pc = 0x1cb3fcu;
    // NOP
label_1cb400:
    // 0x1cb400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb404:
    // 0x1cb404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb408:
    // 0x1cb408: 0x80860238  lb          $a2, 0x238($a0)
    ctx->pc = 0x1cb408u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 568)));
label_1cb40c:
    // 0x1cb40c: 0x90a30233  lbu         $v1, 0x233($a1)
    ctx->pc = 0x1cb40cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 563)));
label_1cb410:
    // 0x1cb410: 0x24c6ffb8  addiu       $a2, $a2, -0x48
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967224));
label_1cb414:
    // 0x1cb414: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1cb418:
    if (ctx->pc == 0x1CB418u) {
        ctx->pc = 0x1CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB414u;
        // 0x1cb418: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB41Cu;
        goto label_1cb41c;
    }
    ctx->pc = 0x1CB414u;
    {
        const bool branch_taken_0x1cb414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB414u;
        // 0x1cb418: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb414) {
            ctx->pc = 0x1CB45Cu;
            goto label_1cb45c;
        }
    }
    ctx->pc = 0x1CB41Cu;
label_1cb41c:
    // 0x1cb41c: 0x90a80234  lbu         $t0, 0x234($a1)
    ctx->pc = 0x1cb41cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 564)));
label_1cb420:
    // 0x1cb420: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_1cb424:
    // 0x1cb424: 0x90a60239  lbu         $a2, 0x239($a1)
    ctx->pc = 0x1cb424u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 569)));
label_1cb428:
    // 0x1cb428: 0x24e725b5  addiu       $a3, $a3, 0x25B5
    ctx->pc = 0x1cb428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9653));
label_1cb42c:
    // 0x1cb42c: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x1cb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1cb430:
    // 0x1cb430: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cb434:
    // 0x1cb434: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb438:
    // 0x1cb438: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb43c:
    // 0x1cb43c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb440:
    // 0x1cb440: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1cb440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1cb444:
    // 0x1cb444: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1cb444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb448:
    // 0x1cb448: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb44c:
    // 0x1cb44c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1cb450:
    // 0x1cb450: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cb454:
    // 0x1cb454: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb458:
    // 0x1cb458: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x1cb458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
label_1cb45c:
    // 0x1cb45c: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x1cb45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_1cb460:
    // 0x1cb460: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1cb464:
    // 0x1cb464: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1cb468:
    // 0x1cb468: 0x24c64944  addiu       $a2, $a2, 0x4944
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18756));
label_1cb46c:
    // 0x1cb46c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb470:
    // 0x1cb470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cb474:
    // 0x1cb474: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cb478:
    // 0x1cb478: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cb47c:
    // 0x1cb47c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cb480:
    // 0x1cb480: 0x28e12710  slti        $at, $a3, 0x2710
    ctx->pc = 0x1cb480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1cb484:
    // 0x1cb484: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1cb488:
    if (ctx->pc == 0x1CB488u) {
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB48Cu;
        goto label_1cb48c;
    }
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB4B8u;
            goto label_1cb4b8;
        }
    }
    ctx->pc = 0x1CB48Cu;
label_1cb48c:
    // 0x1cb48c: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1cb48cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb490:
    // 0x1cb490: 0x0  nop
    ctx->pc = 0x1cb490u;
    // NOP
label_1cb494:
    // 0x1cb494: 0x0  nop
    ctx->pc = 0x1cb494u;
    // NOP
label_1cb498:
    // 0x1cb498: 0x3010  mfhi        $a2
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1cb49c:
    // 0x1cb49c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_1cb4a0:
    if (ctx->pc == 0x1CB4A0u) {
        ctx->pc = 0x1CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB49Cu;
        // 0x1cb4a0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB4A4u;
        goto label_1cb4a4;
    }
    ctx->pc = 0x1CB49Cu;
    {
        const bool branch_taken_0x1cb49c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB49Cu;
        // 0x1cb4a0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb49c) {
            ctx->pc = 0x1CB4B8u;
            goto label_1cb4b8;
        }
    }
    ctx->pc = 0x1CB4A4u;
label_1cb4a4:
    // 0x1cb4a4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1cb4a8:
    // 0x1cb4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb4ac:
    // 0x1cb4ac: 0x24c64948  addiu       $a2, $a2, 0x4948
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18760));
label_1cb4b0:
    // 0x1cb4b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cb4b4:
    // 0x1cb4b4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1cb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1cb4b8:
    // 0x1cb4b8: 0x90a70232  lbu         $a3, 0x232($a1)
    ctx->pc = 0x1cb4b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_1cb4bc:
    // 0x1cb4bc: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x1cb4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cb4c0:
    // 0x1cb4c0: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_1cb4c4:
    if (ctx->pc == 0x1CB4C4u) {
        ctx->pc = 0x1CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C0u;
        // 0x1cb4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB4C8u;
        goto label_1cb4c8;
    }
    ctx->pc = 0x1CB4C0u;
    {
        const bool branch_taken_0x1cb4c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C0u;
        // 0x1cb4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c0) {
            ctx->pc = 0x1CB58Cu;
            goto label_1cb58c;
        }
    }
    ctx->pc = 0x1CB4C8u;
label_1cb4c8:
    // 0x1cb4c8: 0x10e60030  beq         $a3, $a2, . + 4 + (0x30 << 2)
label_1cb4cc:
    if (ctx->pc == 0x1CB4CCu) {
        ctx->pc = 0x1CB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C8u;
        // 0x1cb4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB4D0u;
        goto label_1cb4d0;
    }
    ctx->pc = 0x1CB4C8u;
    {
        const bool branch_taken_0x1cb4c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C8u;
        // 0x1cb4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c8) {
            ctx->pc = 0x1CB58Cu;
            goto label_1cb58c;
        }
    }
    ctx->pc = 0x1CB4D0u;
label_1cb4d0:
    // 0x1cb4d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1cb4d4:
    // 0x1cb4d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cb4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cb4d8:
    // 0x1cb4d8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1cb4dc:
    // 0x1cb4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb4e0:
    // 0x1cb4e0: 0x24480000  addiu       $t0, $v0, 0x0
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb4e4:
    // 0x1cb4e4: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb4e8:
    // 0x1cb4e8: 0x90473630  lbu         $a3, 0x3630($v0)
    ctx->pc = 0x1cb4e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13872)));
label_1cb4ec:
    // 0x1cb4ec: 0x14e60009  bne         $a3, $a2, . + 4 + (0x9 << 2)
label_1cb4f0:
    if (ctx->pc == 0x1CB4F0u) {
        ctx->pc = 0x1CB4F4u;
        goto label_1cb4f4;
    }
    ctx->pc = 0x1CB4ECu;
    {
        const bool branch_taken_0x1cb4ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1cb4ec) {
            ctx->pc = 0x1CB514u;
            goto label_1cb514;
        }
    }
    ctx->pc = 0x1CB4F4u;
label_1cb4f4:
    // 0x1cb4f4: 0x90a50241  lbu         $a1, 0x241($a1)
    ctx->pc = 0x1cb4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
label_1cb4f8:
    // 0x1cb4f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1cb4fc:
    // 0x1cb4fc: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
label_1cb500:
    // 0x1cb500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb504:
    // 0x1cb504: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb508:
    // 0x1cb508: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1cb50c:
    // 0x1cb50c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cb510:
    if (ctx->pc == 0x1CB510u) {
        ctx->pc = 0x1CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB50Cu;
        // 0x1cb510: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB514u;
        goto label_1cb514;
    }
    ctx->pc = 0x1CB50Cu;
    {
        const bool branch_taken_0x1cb50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB50Cu;
        // 0x1cb510: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb50c) {
            ctx->pc = 0x1CB530u;
            goto label_1cb530;
        }
    }
    ctx->pc = 0x1CB514u;
label_1cb514:
    // 0x1cb514: 0x90a20241  lbu         $v0, 0x241($a1)
    ctx->pc = 0x1cb514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
label_1cb518:
    // 0x1cb518: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
label_1cb51c:
    if (ctx->pc == 0x1CB51Cu) {
        ctx->pc = 0x1CB520u;
        goto label_1cb520;
    }
    ctx->pc = 0x1CB518u;
    {
        const bool branch_taken_0x1cb518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb518) {
            ctx->pc = 0x1CB530u;
            goto label_1cb530;
        }
    }
    ctx->pc = 0x1CB520u;
label_1cb520:
    // 0x1cb520: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1cb524:
    // 0x1cb524: 0x29220014  slti        $v0, $t1, 0x14
    ctx->pc = 0x1cb524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)20) ? 1 : 0);
label_1cb528:
    // 0x1cb528: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1cb52c:
    if (ctx->pc == 0x1CB52Cu) {
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB530u;
        goto label_1cb530;
    }
    ctx->pc = 0x1CB528u;
    {
        const bool branch_taken_0x1cb528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb528) {
            ctx->pc = 0x1CB4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb4e8;
        }
    }
    ctx->pc = 0x1CB530u;
label_1cb530:
    // 0x1cb530: 0x908a0234  lbu         $t2, 0x234($a0)
    ctx->pc = 0x1cb530u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1cb534:
    // 0x1cb534: 0x90830239  lbu         $v1, 0x239($a0)
    ctx->pc = 0x1cb534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
label_1cb538:
    // 0x1cb538: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1cb53c:
    // 0x1cb53c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_1cb540:
    // 0x1cb540: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1cb544:
    // 0x1cb544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb548:
    // 0x1cb548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb54c:
    // 0x1cb54c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb550:
    // 0x1cb550: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1cb554:
    // 0x1cb554: 0x4a2023  subu        $a0, $v0, $t2
    ctx->pc = 0x1cb554u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cb558:
    // 0x1cb558: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb55c:
    // 0x1cb55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb560:
    // 0x1cb560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb564:
    // 0x1cb564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cb568:
    // 0x1cb568: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb56c:
    // 0x1cb56c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb570:
    // 0x1cb570: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1cb574:
    // 0x1cb574: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb578:
    // 0x1cb578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb57c:
    // 0x1cb57c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb580:
    // 0x1cb580: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb580u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb584:
    // 0x1cb584: 0xc05d3e4  jal         func_174F90
label_1cb588:
    if (ctx->pc == 0x1CB588u) {
        ctx->pc = 0x1CB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB584u;
        // 0x1cb588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB58Cu;
        goto label_1cb58c;
    }
    ctx->pc = 0x1CB584u;
    SET_GPR_U32(ctx, 31, 0x1CB58Cu);
    ctx->pc = 0x1CB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB584u;
    // 0x1cb588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB584u, 0x1CB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB58Cu;
label_1cb58c:
    // 0x1cb58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb590:
    // 0x1cb590: 0x3e00008  jr          $ra
label_1cb594:
    if (ctx->pc == 0x1CB594u) {
        ctx->pc = 0x1CB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB590u;
        // 0x1cb594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB598u;
        goto label_1cb598;
    }
    ctx->pc = 0x1CB590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB590u;
        // 0x1cb594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB598u;
label_1cb598:
    // 0x1cb598: 0x0  nop
    ctx->pc = 0x1cb598u;
    // NOP
label_1cb59c:
    // 0x1cb59c: 0x0  nop
    ctx->pc = 0x1cb59cu;
    // NOP
label_1cb5a0:
    // 0x1cb5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cb5a4:
    // 0x1cb5a4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_1cb5a8:
    // 0x1cb5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cb5ac:
    // 0x1cb5ac: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cb5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_1cb5b0:
    // 0x1cb5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb5b4:
    // 0x1cb5b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb5b8:
    // 0x1cb5b8: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1cb5b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1cb5bc:
    // 0x1cb5bc: 0x90860038  lbu         $a2, 0x38($a0)
    ctx->pc = 0x1cb5bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1cb5c0:
    // 0x1cb5c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb5c4:
    // 0x1cb5c4: 0x39490001  xori        $t1, $t2, 0x1
    ctx->pc = 0x1cb5c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
label_1cb5c8:
    // 0x1cb5c8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb5cc:
    // 0x1cb5cc: 0x94200  sll         $t0, $t1, 8
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1cb5d0:
    // 0x1cb5d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1cb5d4:
    // 0x1cb5d4: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1cb5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb5d8:
    // 0x1cb5d8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb5dc:
    // 0x1cb5dc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb5e0:
    // 0x1cb5e0: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x1cb5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb5e4:
    // 0x1cb5e4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1cb5e8:
    // 0x1cb5e8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1cb5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb5ec:
    // 0x1cb5ec: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1cb5f0:
    // 0x1cb5f0: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1cb5f4:
    // 0x1cb5f4: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_1cb5f8:
    if (ctx->pc == 0x1CB5F8u) {
        ctx->pc = 0x1CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5F4u;
        // 0x1cb5f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB5FCu;
        goto label_1cb5fc;
    }
    ctx->pc = 0x1CB5F4u;
    {
        const bool branch_taken_0x1cb5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5F4u;
        // 0x1cb5f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5f4) {
            ctx->pc = 0x1CB744u;
            { ctx->pc = 0x1cb744; return; }
        }
    }
    ctx->pc = 0x1CB5FCu;
label_1cb5fc:
    // 0x1cb5fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cb600:
    // 0x1cb600: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb604:
    // 0x1cb604: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_1cb608:
    if (ctx->pc == 0x1CB608u) {
        ctx->pc = 0x1CB60Cu;
        goto label_1cb60c;
    }
    ctx->pc = 0x1CB604u;
    {
        const bool branch_taken_0x1cb604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb604) {
            ctx->pc = 0x1CB744u;
            { ctx->pc = 0x1cb744; return; }
        }
    }
    ctx->pc = 0x1CB60Cu;
label_1cb60c:
    // 0x1cb60c: 0x9089003e  lbu         $t1, 0x3E($a0)
    ctx->pc = 0x1cb60cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
label_1cb610:
    // 0x1cb610: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cb610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1cb614:
    // 0x1cb614: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1cb618:
    // 0x1cb618: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1cb61c:
    // 0x1cb61c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1cb620:
    // 0x1cb620: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1cb624:
    // 0x1cb624: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1cb628:
    // 0x1cb628: 0x90aa003e  lbu         $t2, 0x3E($a1)
    ctx->pc = 0x1cb628u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
label_1cb62c:
    // 0x1cb62c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb630:
    // 0x1cb630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb634:
    // 0x1cb634: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1cb638:
    // 0x1cb638: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1cb63c:
    // 0x1cb63c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1cb63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb640:
    // 0x1cb640: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb644:
    // 0x1cb644: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x1cb644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_1cb648:
    // 0x1cb648: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x1cb648u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1cb64c:
    // 0x1cb64c: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb650:
    // 0x1cb650: 0x1463004  sllv        $a2, $a2, $t2
    ctx->pc = 0x1cb650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 10) & 0x1F));
label_1cb654:
    // 0x1cb654: 0x8e090234  lw          $t1, 0x234($s0)
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_1cb658:
    // 0x1cb658: 0x1263824  and         $a3, $t1, $a2
    ctx->pc = 0x1cb658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_1cb65c:
    // 0x1cb65c: 0x14e00039  bnez        $a3, . + 4 + (0x39 << 2)
label_1cb660:
    if (ctx->pc == 0x1CB660u) {
        ctx->pc = 0x1CB664u;
        goto label_1cb664;
    }
    ctx->pc = 0x1CB65Cu;
    {
        const bool branch_taken_0x1cb65c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb65c) {
            ctx->pc = 0x1CB744u;
            { ctx->pc = 0x1cb744; return; }
        }
    }
    ctx->pc = 0x1CB664u;
label_1cb664:
    // 0x1cb664: 0x92070222  lbu         $a3, 0x222($s0)
    ctx->pc = 0x1cb664u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_1cb668:
    // 0x1cb668: 0x14e00036  bnez        $a3, . + 4 + (0x36 << 2)
label_1cb66c:
    if (ctx->pc == 0x1CB66Cu) {
        ctx->pc = 0x1CB670u;
        goto label_1cb670;
    }
    ctx->pc = 0x1CB668u;
    {
        const bool branch_taken_0x1cb668 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb668) {
            ctx->pc = 0x1CB744u;
            { ctx->pc = 0x1cb744; return; }
        }
    }
    ctx->pc = 0x1CB670u;
label_1cb670:
    // 0x1cb670: 0x90a80034  lbu         $t0, 0x34($a1)
    ctx->pc = 0x1cb670u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
label_1cb674:
    // 0x1cb674: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cb674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1cb678:
    // 0x1cb678: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1cb67c:
    // 0x1cb67c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1cb680:
    // 0x1cb680: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb684:
    // 0x1cb684: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1cb684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1cb688:
    // 0x1cb688: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1cb688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb68c:
    // 0x1cb68c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1cb690:
    // 0x1cb690: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb694:
    // 0x1cb694: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1cb698:
    // 0x1cb698: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb69c:
    // 0x1cb69c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cb6a0:
    // 0x1cb6a0: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1cb6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cb6a4:
    // 0x1cb6a4: 0x92230222  lbu         $v1, 0x222($s1)
    ctx->pc = 0x1cb6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
label_1cb6a8:
    // 0x1cb6a8: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_1cb6ac:
    if (ctx->pc == 0x1CB6ACu) {
        ctx->pc = 0x1CB6B0u;
        { ctx->pc = 0x1cb6b0; return; }
    }
    ctx->pc = 0x1CB6A8u;
    {
        const bool branch_taken_0x1cb6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6a8) {
            ctx->pc = 0x1CB744u;
            { ctx->pc = 0x1cb744; return; }
        }
    }
    ctx->pc = 0x1CB6B0u;
    ctx->pc = 0x1cb6b0u;
    return;
}

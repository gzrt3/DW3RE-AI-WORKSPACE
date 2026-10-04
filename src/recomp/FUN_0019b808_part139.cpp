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


void FUN_0019b808_part139(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dee28u: goto label_1dee28;
        case 0x1dee2cu: goto label_1dee2c;
        case 0x1dee30u: goto label_1dee30;
        case 0x1dee34u: goto label_1dee34;
        case 0x1dee38u: goto label_1dee38;
        case 0x1dee3cu: goto label_1dee3c;
        case 0x1dee40u: goto label_1dee40;
        case 0x1dee44u: goto label_1dee44;
        case 0x1dee48u: goto label_1dee48;
        case 0x1dee4cu: goto label_1dee4c;
        case 0x1dee50u: goto label_1dee50;
        case 0x1dee54u: goto label_1dee54;
        case 0x1dee58u: goto label_1dee58;
        case 0x1dee5cu: goto label_1dee5c;
        case 0x1dee60u: goto label_1dee60;
        case 0x1dee64u: goto label_1dee64;
        case 0x1dee68u: goto label_1dee68;
        case 0x1dee6cu: goto label_1dee6c;
        case 0x1dee70u: goto label_1dee70;
        case 0x1dee74u: goto label_1dee74;
        case 0x1dee78u: goto label_1dee78;
        case 0x1dee7cu: goto label_1dee7c;
        case 0x1dee80u: goto label_1dee80;
        case 0x1dee84u: goto label_1dee84;
        case 0x1dee88u: goto label_1dee88;
        case 0x1dee8cu: goto label_1dee8c;
        case 0x1dee90u: goto label_1dee90;
        case 0x1dee94u: goto label_1dee94;
        case 0x1dee98u: goto label_1dee98;
        case 0x1dee9cu: goto label_1dee9c;
        case 0x1deea0u: goto label_1deea0;
        case 0x1deea4u: goto label_1deea4;
        case 0x1deea8u: goto label_1deea8;
        case 0x1deeacu: goto label_1deeac;
        case 0x1deeb0u: goto label_1deeb0;
        case 0x1deeb4u: goto label_1deeb4;
        case 0x1deeb8u: goto label_1deeb8;
        case 0x1deebcu: goto label_1deebc;
        case 0x1deec0u: goto label_1deec0;
        case 0x1deec4u: goto label_1deec4;
        case 0x1deec8u: goto label_1deec8;
        case 0x1deeccu: goto label_1deecc;
        case 0x1deed0u: goto label_1deed0;
        case 0x1deed4u: goto label_1deed4;
        case 0x1deed8u: goto label_1deed8;
        case 0x1deedcu: goto label_1deedc;
        case 0x1deee0u: goto label_1deee0;
        case 0x1deee4u: goto label_1deee4;
        case 0x1deee8u: goto label_1deee8;
        case 0x1deeecu: goto label_1deeec;
        case 0x1deef0u: goto label_1deef0;
        case 0x1deef4u: goto label_1deef4;
        case 0x1deef8u: goto label_1deef8;
        case 0x1deefcu: goto label_1deefc;
        case 0x1def00u: goto label_1def00;
        case 0x1def04u: goto label_1def04;
        case 0x1def08u: goto label_1def08;
        case 0x1def0cu: goto label_1def0c;
        case 0x1def10u: goto label_1def10;
        case 0x1def14u: goto label_1def14;
        case 0x1def18u: goto label_1def18;
        case 0x1def1cu: goto label_1def1c;
        case 0x1def20u: goto label_1def20;
        case 0x1def24u: goto label_1def24;
        case 0x1def28u: goto label_1def28;
        case 0x1def2cu: goto label_1def2c;
        case 0x1def30u: goto label_1def30;
        case 0x1def34u: goto label_1def34;
        case 0x1def38u: goto label_1def38;
        case 0x1def3cu: goto label_1def3c;
        case 0x1def40u: goto label_1def40;
        case 0x1def44u: goto label_1def44;
        case 0x1def48u: goto label_1def48;
        case 0x1def4cu: goto label_1def4c;
        case 0x1def50u: goto label_1def50;
        case 0x1def54u: goto label_1def54;
        case 0x1def58u: goto label_1def58;
        case 0x1def5cu: goto label_1def5c;
        case 0x1def60u: goto label_1def60;
        case 0x1def64u: goto label_1def64;
        case 0x1def68u: goto label_1def68;
        case 0x1def6cu: goto label_1def6c;
        case 0x1def70u: goto label_1def70;
        case 0x1def74u: goto label_1def74;
        case 0x1def78u: goto label_1def78;
        case 0x1def7cu: goto label_1def7c;
        case 0x1def80u: goto label_1def80;
        case 0x1def84u: goto label_1def84;
        case 0x1def88u: goto label_1def88;
        case 0x1def8cu: goto label_1def8c;
        case 0x1def90u: goto label_1def90;
        case 0x1def94u: goto label_1def94;
        case 0x1def98u: goto label_1def98;
        case 0x1def9cu: goto label_1def9c;
        case 0x1defa0u: goto label_1defa0;
        case 0x1defa4u: goto label_1defa4;
        case 0x1defa8u: goto label_1defa8;
        case 0x1defacu: goto label_1defac;
        case 0x1defb0u: goto label_1defb0;
        case 0x1defb4u: goto label_1defb4;
        case 0x1defb8u: goto label_1defb8;
        case 0x1defbcu: goto label_1defbc;
        case 0x1defc0u: goto label_1defc0;
        case 0x1defc4u: goto label_1defc4;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defccu: goto label_1defcc;
        case 0x1defd0u: goto label_1defd0;
        case 0x1defd4u: goto label_1defd4;
        case 0x1defd8u: goto label_1defd8;
        case 0x1defdcu: goto label_1defdc;
        case 0x1defe0u: goto label_1defe0;
        case 0x1defe4u: goto label_1defe4;
        case 0x1defe8u: goto label_1defe8;
        case 0x1defecu: goto label_1defec;
        case 0x1deff0u: goto label_1deff0;
        case 0x1deff4u: goto label_1deff4;
        case 0x1deff8u: goto label_1deff8;
        case 0x1deffcu: goto label_1deffc;
        case 0x1df000u: goto label_1df000;
        case 0x1df004u: goto label_1df004;
        case 0x1df008u: goto label_1df008;
        case 0x1df00cu: goto label_1df00c;
        case 0x1df010u: goto label_1df010;
        case 0x1df014u: goto label_1df014;
        case 0x1df018u: goto label_1df018;
        case 0x1df01cu: goto label_1df01c;
        case 0x1df020u: goto label_1df020;
        case 0x1df024u: goto label_1df024;
        case 0x1df028u: goto label_1df028;
        case 0x1df02cu: goto label_1df02c;
        case 0x1df030u: goto label_1df030;
        case 0x1df034u: goto label_1df034;
        case 0x1df038u: goto label_1df038;
        case 0x1df03cu: goto label_1df03c;
        case 0x1df040u: goto label_1df040;
        case 0x1df044u: goto label_1df044;
        case 0x1df048u: goto label_1df048;
        case 0x1df04cu: goto label_1df04c;
        case 0x1df050u: goto label_1df050;
        case 0x1df054u: goto label_1df054;
        case 0x1df058u: goto label_1df058;
        case 0x1df05cu: goto label_1df05c;
        case 0x1df060u: goto label_1df060;
        case 0x1df064u: goto label_1df064;
        case 0x1df068u: goto label_1df068;
        case 0x1df06cu: goto label_1df06c;
        case 0x1df070u: goto label_1df070;
        case 0x1df074u: goto label_1df074;
        case 0x1df078u: goto label_1df078;
        case 0x1df07cu: goto label_1df07c;
        case 0x1df080u: goto label_1df080;
        case 0x1df084u: goto label_1df084;
        case 0x1df088u: goto label_1df088;
        case 0x1df08cu: goto label_1df08c;
        case 0x1df090u: goto label_1df090;
        case 0x1df094u: goto label_1df094;
        case 0x1df098u: goto label_1df098;
        case 0x1df09cu: goto label_1df09c;
        case 0x1df0a0u: goto label_1df0a0;
        case 0x1df0a4u: goto label_1df0a4;
        case 0x1df0a8u: goto label_1df0a8;
        case 0x1df0acu: goto label_1df0ac;
        case 0x1df0b0u: goto label_1df0b0;
        case 0x1df0b4u: goto label_1df0b4;
        case 0x1df0b8u: goto label_1df0b8;
        case 0x1df0bcu: goto label_1df0bc;
        case 0x1df0c0u: goto label_1df0c0;
        case 0x1df0c4u: goto label_1df0c4;
        case 0x1df0c8u: goto label_1df0c8;
        case 0x1df0ccu: goto label_1df0cc;
        case 0x1df0d0u: goto label_1df0d0;
        case 0x1df0d4u: goto label_1df0d4;
        case 0x1df0d8u: goto label_1df0d8;
        case 0x1df0dcu: goto label_1df0dc;
        case 0x1df0e0u: goto label_1df0e0;
        case 0x1df0e4u: goto label_1df0e4;
        case 0x1df0e8u: goto label_1df0e8;
        case 0x1df0ecu: goto label_1df0ec;
        case 0x1df0f0u: goto label_1df0f0;
        case 0x1df0f4u: goto label_1df0f4;
        case 0x1df0f8u: goto label_1df0f8;
        case 0x1df0fcu: goto label_1df0fc;
        case 0x1df100u: goto label_1df100;
        case 0x1df104u: goto label_1df104;
        case 0x1df108u: goto label_1df108;
        case 0x1df10cu: goto label_1df10c;
        case 0x1df110u: goto label_1df110;
        case 0x1df114u: goto label_1df114;
        case 0x1df118u: goto label_1df118;
        case 0x1df11cu: goto label_1df11c;
        case 0x1df120u: goto label_1df120;
        case 0x1df124u: goto label_1df124;
        case 0x1df128u: goto label_1df128;
        case 0x1df12cu: goto label_1df12c;
        case 0x1df130u: goto label_1df130;
        case 0x1df134u: goto label_1df134;
        case 0x1df138u: goto label_1df138;
        case 0x1df13cu: goto label_1df13c;
        case 0x1df140u: goto label_1df140;
        case 0x1df144u: goto label_1df144;
        case 0x1df148u: goto label_1df148;
        case 0x1df14cu: goto label_1df14c;
        case 0x1df150u: goto label_1df150;
        case 0x1df154u: goto label_1df154;
        case 0x1df158u: goto label_1df158;
        case 0x1df15cu: goto label_1df15c;
        case 0x1df160u: goto label_1df160;
        case 0x1df164u: goto label_1df164;
        case 0x1df168u: goto label_1df168;
        case 0x1df16cu: goto label_1df16c;
        case 0x1df170u: goto label_1df170;
        case 0x1df174u: goto label_1df174;
        case 0x1df178u: goto label_1df178;
        case 0x1df17cu: goto label_1df17c;
        case 0x1df180u: goto label_1df180;
        case 0x1df184u: goto label_1df184;
        case 0x1df188u: goto label_1df188;
        case 0x1df18cu: goto label_1df18c;
        case 0x1df190u: goto label_1df190;
        case 0x1df194u: goto label_1df194;
        case 0x1df198u: goto label_1df198;
        case 0x1df19cu: goto label_1df19c;
        case 0x1df1a0u: goto label_1df1a0;
        case 0x1df1a4u: goto label_1df1a4;
        case 0x1df1a8u: goto label_1df1a8;
        case 0x1df1acu: goto label_1df1ac;
        case 0x1df1b0u: goto label_1df1b0;
        case 0x1df1b4u: goto label_1df1b4;
        case 0x1df1b8u: goto label_1df1b8;
        case 0x1df1bcu: goto label_1df1bc;
        case 0x1df1c0u: goto label_1df1c0;
        case 0x1df1c4u: goto label_1df1c4;
        case 0x1df1c8u: goto label_1df1c8;
        case 0x1df1ccu: goto label_1df1cc;
        case 0x1df1d0u: goto label_1df1d0;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1d8u: goto label_1df1d8;
        case 0x1df1dcu: goto label_1df1dc;
        case 0x1df1e0u: goto label_1df1e0;
        case 0x1df1e4u: goto label_1df1e4;
        case 0x1df1e8u: goto label_1df1e8;
        case 0x1df1ecu: goto label_1df1ec;
        case 0x1df1f0u: goto label_1df1f0;
        case 0x1df1f4u: goto label_1df1f4;
        case 0x1df1f8u: goto label_1df1f8;
        case 0x1df1fcu: goto label_1df1fc;
        case 0x1df200u: goto label_1df200;
        case 0x1df204u: goto label_1df204;
        case 0x1df208u: goto label_1df208;
        case 0x1df20cu: goto label_1df20c;
        case 0x1df210u: goto label_1df210;
        case 0x1df214u: goto label_1df214;
        case 0x1df218u: goto label_1df218;
        case 0x1df21cu: goto label_1df21c;
        case 0x1df220u: goto label_1df220;
        case 0x1df224u: goto label_1df224;
        case 0x1df228u: goto label_1df228;
        case 0x1df22cu: goto label_1df22c;
        case 0x1df230u: goto label_1df230;
        case 0x1df234u: goto label_1df234;
        case 0x1df238u: goto label_1df238;
        case 0x1df23cu: goto label_1df23c;
        case 0x1df240u: goto label_1df240;
        case 0x1df244u: goto label_1df244;
        case 0x1df248u: goto label_1df248;
        case 0x1df24cu: goto label_1df24c;
        case 0x1df250u: goto label_1df250;
        case 0x1df254u: goto label_1df254;
        case 0x1df258u: goto label_1df258;
        case 0x1df25cu: goto label_1df25c;
        case 0x1df260u: goto label_1df260;
        case 0x1df264u: goto label_1df264;
        case 0x1df268u: goto label_1df268;
        case 0x1df26cu: goto label_1df26c;
        case 0x1df270u: goto label_1df270;
        case 0x1df274u: goto label_1df274;
        case 0x1df278u: goto label_1df278;
        case 0x1df27cu: goto label_1df27c;
        case 0x1df280u: goto label_1df280;
        case 0x1df284u: goto label_1df284;
        case 0x1df288u: goto label_1df288;
        case 0x1df28cu: goto label_1df28c;
        case 0x1df290u: goto label_1df290;
        case 0x1df294u: goto label_1df294;
        case 0x1df298u: goto label_1df298;
        case 0x1df29cu: goto label_1df29c;
        case 0x1df2a0u: goto label_1df2a0;
        case 0x1df2a4u: goto label_1df2a4;
        case 0x1df2a8u: goto label_1df2a8;
        case 0x1df2acu: goto label_1df2ac;
        case 0x1df2b0u: goto label_1df2b0;
        case 0x1df2b4u: goto label_1df2b4;
        case 0x1df2b8u: goto label_1df2b8;
        case 0x1df2bcu: goto label_1df2bc;
        case 0x1df2c0u: goto label_1df2c0;
        case 0x1df2c4u: goto label_1df2c4;
        case 0x1df2c8u: goto label_1df2c8;
        case 0x1df2ccu: goto label_1df2cc;
        case 0x1df2d0u: goto label_1df2d0;
        case 0x1df2d4u: goto label_1df2d4;
        case 0x1df2d8u: goto label_1df2d8;
        case 0x1df2dcu: goto label_1df2dc;
        case 0x1df2e0u: goto label_1df2e0;
        case 0x1df2e4u: goto label_1df2e4;
        case 0x1df2e8u: goto label_1df2e8;
        case 0x1df2ecu: goto label_1df2ec;
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df2f4u: goto label_1df2f4;
        case 0x1df2f8u: goto label_1df2f8;
        case 0x1df2fcu: goto label_1df2fc;
        case 0x1df300u: goto label_1df300;
        case 0x1df304u: goto label_1df304;
        case 0x1df308u: goto label_1df308;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df310u: goto label_1df310;
        case 0x1df314u: goto label_1df314;
        case 0x1df318u: goto label_1df318;
        case 0x1df31cu: goto label_1df31c;
        case 0x1df320u: goto label_1df320;
        case 0x1df324u: goto label_1df324;
        case 0x1df328u: goto label_1df328;
        case 0x1df32cu: goto label_1df32c;
        case 0x1df330u: goto label_1df330;
        case 0x1df334u: goto label_1df334;
        case 0x1df338u: goto label_1df338;
        case 0x1df33cu: goto label_1df33c;
        case 0x1df340u: goto label_1df340;
        case 0x1df344u: goto label_1df344;
        case 0x1df348u: goto label_1df348;
        case 0x1df34cu: goto label_1df34c;
        case 0x1df350u: goto label_1df350;
        case 0x1df354u: goto label_1df354;
        case 0x1df358u: goto label_1df358;
        case 0x1df35cu: goto label_1df35c;
        case 0x1df360u: goto label_1df360;
        case 0x1df364u: goto label_1df364;
        case 0x1df368u: goto label_1df368;
        case 0x1df36cu: goto label_1df36c;
        case 0x1df370u: goto label_1df370;
        case 0x1df374u: goto label_1df374;
        case 0x1df378u: goto label_1df378;
        case 0x1df37cu: goto label_1df37c;
        case 0x1df380u: goto label_1df380;
        case 0x1df384u: goto label_1df384;
        case 0x1df388u: goto label_1df388;
        case 0x1df38cu: goto label_1df38c;
        case 0x1df390u: goto label_1df390;
        case 0x1df394u: goto label_1df394;
        case 0x1df398u: goto label_1df398;
        case 0x1df39cu: goto label_1df39c;
        case 0x1df3a0u: goto label_1df3a0;
        case 0x1df3a4u: goto label_1df3a4;
        case 0x1df3a8u: goto label_1df3a8;
        case 0x1df3acu: goto label_1df3ac;
        case 0x1df3b0u: goto label_1df3b0;
        case 0x1df3b4u: goto label_1df3b4;
        case 0x1df3b8u: goto label_1df3b8;
        case 0x1df3bcu: goto label_1df3bc;
        case 0x1df3c0u: goto label_1df3c0;
        case 0x1df3c4u: goto label_1df3c4;
        case 0x1df3c8u: goto label_1df3c8;
        case 0x1df3ccu: goto label_1df3cc;
        case 0x1df3d0u: goto label_1df3d0;
        case 0x1df3d4u: goto label_1df3d4;
        case 0x1df3d8u: goto label_1df3d8;
        case 0x1df3dcu: goto label_1df3dc;
        case 0x1df3e0u: goto label_1df3e0;
        case 0x1df3e4u: goto label_1df3e4;
        case 0x1df3e8u: goto label_1df3e8;
        case 0x1df3ecu: goto label_1df3ec;
        case 0x1df3f0u: goto label_1df3f0;
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df3f8u: goto label_1df3f8;
        case 0x1df3fcu: goto label_1df3fc;
        case 0x1df400u: goto label_1df400;
        case 0x1df404u: goto label_1df404;
        case 0x1df408u: goto label_1df408;
        case 0x1df40cu: goto label_1df40c;
        case 0x1df410u: goto label_1df410;
        case 0x1df414u: goto label_1df414;
        case 0x1df418u: goto label_1df418;
        case 0x1df41cu: goto label_1df41c;
        case 0x1df420u: goto label_1df420;
        case 0x1df424u: goto label_1df424;
        case 0x1df428u: goto label_1df428;
        case 0x1df42cu: goto label_1df42c;
        case 0x1df430u: goto label_1df430;
        case 0x1df434u: goto label_1df434;
        case 0x1df438u: goto label_1df438;
        case 0x1df43cu: goto label_1df43c;
        case 0x1df440u: goto label_1df440;
        case 0x1df444u: goto label_1df444;
        case 0x1df448u: goto label_1df448;
        case 0x1df44cu: goto label_1df44c;
        case 0x1df450u: goto label_1df450;
        case 0x1df454u: goto label_1df454;
        case 0x1df458u: goto label_1df458;
        case 0x1df45cu: goto label_1df45c;
        case 0x1df460u: goto label_1df460;
        case 0x1df464u: goto label_1df464;
        case 0x1df468u: goto label_1df468;
        case 0x1df46cu: goto label_1df46c;
        case 0x1df470u: goto label_1df470;
        case 0x1df474u: goto label_1df474;
        case 0x1df478u: goto label_1df478;
        case 0x1df47cu: goto label_1df47c;
        case 0x1df480u: goto label_1df480;
        case 0x1df484u: goto label_1df484;
        case 0x1df488u: goto label_1df488;
        case 0x1df48cu: goto label_1df48c;
        case 0x1df490u: goto label_1df490;
        case 0x1df494u: goto label_1df494;
        case 0x1df498u: goto label_1df498;
        case 0x1df49cu: goto label_1df49c;
        case 0x1df4a0u: goto label_1df4a0;
        case 0x1df4a4u: goto label_1df4a4;
        case 0x1df4a8u: goto label_1df4a8;
        case 0x1df4acu: goto label_1df4ac;
        case 0x1df4b0u: goto label_1df4b0;
        case 0x1df4b4u: goto label_1df4b4;
        case 0x1df4b8u: goto label_1df4b8;
        case 0x1df4bcu: goto label_1df4bc;
        case 0x1df4c0u: goto label_1df4c0;
        case 0x1df4c4u: goto label_1df4c4;
        case 0x1df4c8u: goto label_1df4c8;
        case 0x1df4ccu: goto label_1df4cc;
        case 0x1df4d0u: goto label_1df4d0;
        case 0x1df4d4u: goto label_1df4d4;
        case 0x1df4d8u: goto label_1df4d8;
        case 0x1df4dcu: goto label_1df4dc;
        case 0x1df4e0u: goto label_1df4e0;
        case 0x1df4e4u: goto label_1df4e4;
        case 0x1df4e8u: goto label_1df4e8;
        case 0x1df4ecu: goto label_1df4ec;
        case 0x1df4f0u: goto label_1df4f0;
        case 0x1df4f4u: goto label_1df4f4;
        case 0x1df4f8u: goto label_1df4f8;
        case 0x1df4fcu: goto label_1df4fc;
        case 0x1df500u: goto label_1df500;
        case 0x1df504u: goto label_1df504;
        case 0x1df508u: goto label_1df508;
        case 0x1df50cu: goto label_1df50c;
        case 0x1df510u: goto label_1df510;
        case 0x1df514u: goto label_1df514;
        case 0x1df518u: goto label_1df518;
        case 0x1df51cu: goto label_1df51c;
        case 0x1df520u: goto label_1df520;
        case 0x1df524u: goto label_1df524;
        case 0x1df528u: goto label_1df528;
        case 0x1df52cu: goto label_1df52c;
        case 0x1df530u: goto label_1df530;
        case 0x1df534u: goto label_1df534;
        case 0x1df538u: goto label_1df538;
        case 0x1df53cu: goto label_1df53c;
        case 0x1df540u: goto label_1df540;
        case 0x1df544u: goto label_1df544;
        case 0x1df548u: goto label_1df548;
        case 0x1df54cu: goto label_1df54c;
        case 0x1df550u: goto label_1df550;
        case 0x1df554u: goto label_1df554;
        case 0x1df558u: goto label_1df558;
        case 0x1df55cu: goto label_1df55c;
        case 0x1df560u: goto label_1df560;
        case 0x1df564u: goto label_1df564;
        case 0x1df568u: goto label_1df568;
        case 0x1df56cu: goto label_1df56c;
        case 0x1df570u: goto label_1df570;
        case 0x1df574u: goto label_1df574;
        case 0x1df578u: goto label_1df578;
        case 0x1df57cu: goto label_1df57c;
        case 0x1df580u: goto label_1df580;
        case 0x1df584u: goto label_1df584;
        case 0x1df588u: goto label_1df588;
        case 0x1df58cu: goto label_1df58c;
        case 0x1df590u: goto label_1df590;
        case 0x1df594u: goto label_1df594;
        case 0x1df598u: goto label_1df598;
        case 0x1df59cu: goto label_1df59c;
        case 0x1df5a0u: goto label_1df5a0;
        case 0x1df5a4u: goto label_1df5a4;
        case 0x1df5a8u: goto label_1df5a8;
        case 0x1df5acu: goto label_1df5ac;
        case 0x1df5b0u: goto label_1df5b0;
        case 0x1df5b4u: goto label_1df5b4;
        case 0x1df5b8u: goto label_1df5b8;
        case 0x1df5bcu: goto label_1df5bc;
        case 0x1df5c0u: goto label_1df5c0;
        case 0x1df5c4u: goto label_1df5c4;
        case 0x1df5c8u: goto label_1df5c8;
        case 0x1df5ccu: goto label_1df5cc;
        case 0x1df5d0u: goto label_1df5d0;
        case 0x1df5d4u: goto label_1df5d4;
        case 0x1df5d8u: goto label_1df5d8;
        case 0x1df5dcu: goto label_1df5dc;
        case 0x1df5e0u: goto label_1df5e0;
        case 0x1df5e4u: goto label_1df5e4;
        case 0x1df5e8u: goto label_1df5e8;
        case 0x1df5ecu: goto label_1df5ec;
        case 0x1df5f0u: goto label_1df5f0;
        case 0x1df5f4u: goto label_1df5f4;
        default: return;
    }

label_1dee28:
    // 0x1dee28: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1dee2c:
    // 0x1dee2c: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_1dee30:
    if (ctx->pc == 0x1DEE30u) {
        ctx->pc = 0x1DEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE2Cu;
        // 0x1dee30: 0x2492005a  addiu       $s2, $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE34u;
        goto label_1dee34;
    }
    ctx->pc = 0x1DEE2Cu;
    {
        const bool branch_taken_0x1dee2c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE2Cu;
        // 0x1dee30: 0x2492005a  addiu       $s2, $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee2c) {
            ctx->pc = 0x1DEE40u;
            goto label_1dee40;
        }
    }
    ctx->pc = 0x1DEE34u;
label_1dee34:
    // 0x1dee34: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1dee34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1dee38:
    // 0x1dee38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dee3c:
    if (ctx->pc == 0x1DEE3Cu) {
        ctx->pc = 0x1DEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE38u;
        // 0x1dee3c: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE40u;
        goto label_1dee40;
    }
    ctx->pc = 0x1DEE38u;
    {
        const bool branch_taken_0x1dee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE38u;
        // 0x1dee3c: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee38) {
            ctx->pc = 0x1DEE5Cu;
            goto label_1dee5c;
        }
    }
    ctx->pc = 0x1DEE40u;
label_1dee40:
    // 0x1dee40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dee44:
    // 0x1dee44: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
label_1dee48:
    if (ctx->pc == 0x1DEE48u) {
        ctx->pc = 0x1DEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE44u;
        // 0x1dee48: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE4Cu;
        goto label_1dee4c;
    }
    ctx->pc = 0x1DEE44u;
    {
        const bool branch_taken_0x1dee44 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE44u;
        // 0x1dee48: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee44) {
            ctx->pc = 0x1DEE60u;
            goto label_1dee60;
        }
    }
    ctx->pc = 0x1DEE4Cu;
label_1dee4c:
    // 0x1dee4c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1dee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1dee50:
    // 0x1dee50: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1dee54:
    // 0x1dee54: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1dee54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dee58:
    // 0x1dee58: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1dee58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1dee5c:
    // 0x1dee5c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1dee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1dee60:
    // 0x1dee60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dee60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dee64:
    // 0x1dee64: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1dee64u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1dee68:
    // 0x1dee68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dee68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dee6c:
    // 0x1dee6c: 0x0  nop
    ctx->pc = 0x1dee6cu;
    // NOP
label_1dee70:
    // 0x1dee70: 0x8810  mfhi        $s1
    ctx->pc = 0x1dee70u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1dee74:
    // 0x1dee74: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1dee74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1dee78:
    // 0x1dee78: 0x0  nop
    ctx->pc = 0x1dee78u;
    // NOP
label_1dee7c:
    // 0x1dee7c: 0x0  nop
    ctx->pc = 0x1dee7cu;
    // NOP
label_1dee80:
    // 0x1dee80: 0x9010  mfhi        $s2
    ctx->pc = 0x1dee80u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1dee84:
    // 0x1dee84: 0x10000068  b           . + 4 + (0x68 << 2)
label_1dee88:
    if (ctx->pc == 0x1DEE88u) {
        ctx->pc = 0x1DEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE84u;
        // 0x1dee88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEE8Cu;
        goto label_1dee8c;
    }
    ctx->pc = 0x1DEE84u;
    {
        const bool branch_taken_0x1dee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE84u;
        // 0x1dee88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee84) {
            ctx->pc = 0x1DF028u;
            goto label_1df028;
        }
    }
    ctx->pc = 0x1DEE8Cu;
label_1dee8c:
    // 0x1dee8c: 0x266001a  div         $zero, $s3, $a2
    ctx->pc = 0x1dee8cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1dee90:
    // 0x1dee90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1dee94:
    // 0x1dee94: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1dee94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1dee98:
    // 0x1dee98: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x1dee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1dee9c:
    // 0x1dee9c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1dee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_1deea0:
    // 0x1deea0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1deea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1deea4:
    // 0x1deea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1deea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1deea8:
    // 0x1deea8: 0x2812  mflo        $a1
    ctx->pc = 0x1deea8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1deeac:
    // 0x1deeac: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1deeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1deeb0:
    // 0x1deeb0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1deeb0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1deeb4:
    // 0x1deeb4: 0x0  nop
    ctx->pc = 0x1deeb4u;
    // NOP
label_1deeb8:
    // 0x1deeb8: 0x0  nop
    ctx->pc = 0x1deeb8u;
    // NOP
label_1deebc:
    // 0x1deebc: 0x1010  mfhi        $v0
    ctx->pc = 0x1deebcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1deec0:
    // 0x1deec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1deec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deec4:
    // 0x1deec4: 0x0  nop
    ctx->pc = 0x1deec4u;
    // NOP
label_1deec8:
    // 0x1deec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1deec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1deecc:
    // 0x1deecc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1deeccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1deed0:
    // 0x1deed0: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1deed0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
label_1deed4:
    // 0x1deed4: 0x0  nop
    ctx->pc = 0x1deed4u;
    // NOP
label_1deed8:
    // 0x1deed8: 0x0  nop
    ctx->pc = 0x1deed8u;
    // NOP
label_1deedc:
    // 0x1deedc: 0xc06d4c0  jal         func_1B5300
label_1deee0:
    if (ctx->pc == 0x1DEEE0u) {
        ctx->pc = 0x1DEEE4u;
        goto label_1deee4;
    }
    ctx->pc = 0x1DEEDCu;
    SET_GPR_U32(ctx, 31, 0x1DEEE4u);
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1DEEE4u;
label_1deee4:
    // 0x1deee4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1deee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1deee8:
    // 0x1deee8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1deee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1deeec:
    // 0x1deeec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1deeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1deef0:
    // 0x1deef0: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x1deef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1deef4:
    // 0x1deef4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1deef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1deef8:
    // 0x1deef8: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x1deef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1deefc:
    // 0x1deefc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1deefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1def00:
    // 0x1def00: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1def00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1def04:
    // 0x1def04: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1def04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_1def08:
    // 0x1def08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1def08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1def0c:
    // 0x1def0c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1def0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1def10:
    // 0x1def10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1def10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1def14:
    // 0x1def14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1def14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1def18:
    // 0x1def18: 0x24c301f4  addiu       $v1, $a2, 0x1F4
    ctx->pc = 0x1def18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 500));
label_1def1c:
    // 0x1def1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1def1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1def20:
    // 0x1def20: 0x8f828cf0  lw          $v0, -0x7310($gp)
    ctx->pc = 0x1def20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1def24:
    // 0x1def24: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x1def24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1def28:
    // 0x1def28: 0x0  nop
    ctx->pc = 0x1def28u;
    // NOP
label_1def2c:
    // 0x1def2c: 0x0  nop
    ctx->pc = 0x1def2cu;
    // NOP
label_1def30:
    // 0x1def30: 0x1012  mflo        $v0
    ctx->pc = 0x1def30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1def34:
    // 0x1def34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1def34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1def38:
    // 0x1def38: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1def38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1def3c:
    // 0x1def3c: 0x0  nop
    ctx->pc = 0x1def3cu;
    // NOP
label_1def40:
    // 0x1def40: 0x0  nop
    ctx->pc = 0x1def40u;
    // NOP
label_1def44:
    // 0x1def44: 0x1010  mfhi        $v0
    ctx->pc = 0x1def44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1def48:
    // 0x1def48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1def48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1def4c:
    // 0x1def4c: 0x0  nop
    ctx->pc = 0x1def4cu;
    // NOP
label_1def50:
    // 0x1def50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1def50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1def54:
    // 0x1def54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1def54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1def58:
    // 0x1def58: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1def58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1def5c:
    // 0x1def5c: 0x0  nop
    ctx->pc = 0x1def5cu;
    // NOP
label_1def60:
    // 0x1def60: 0x0  nop
    ctx->pc = 0x1def60u;
    // NOP
label_1def64:
    // 0x1def64: 0xc06d412  jal         func_1B5048
label_1def68:
    if (ctx->pc == 0x1DEF68u) {
        ctx->pc = 0x1DEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF64u;
        // 0x1def68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF6Cu;
        goto label_1def6c;
    }
    ctx->pc = 0x1DEF64u;
    SET_GPR_U32(ctx, 31, 0x1DEF6Cu);
    ctx->pc = 0x1DEF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF64u;
    // 0x1def68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1DEF6Cu;
label_1def6c:
    // 0x1def6c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1def6cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1def70:
    // 0x1def70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1def70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1def74:
    // 0x1def74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1def74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1def78:
    // 0x1def78: 0xc06d4c0  jal         func_1B5300
label_1def7c:
    if (ctx->pc == 0x1DEF7Cu) {
        ctx->pc = 0x1DEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF78u;
        // 0x1def7c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEF80u;
        goto label_1def80;
    }
    ctx->pc = 0x1DEF78u;
    SET_GPR_U32(ctx, 31, 0x1DEF80u);
    ctx->pc = 0x1DEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF78u;
    // 0x1def7c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1DEF80u;
label_1def80:
    // 0x1def80: 0xc7828210  lwc1        $f2, -0x7DF0($gp)
    ctx->pc = 0x1def80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1def84:
    // 0x1def84: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1def84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1def88:
    // 0x1def88: 0xc78181fc  lwc1        $f1, -0x7E04($gp)
    ctx->pc = 0x1def88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1def8c:
    // 0x1def8c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1def8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1def90:
    // 0x1def90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1def90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1def94:
    // 0x1def94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1def94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1def98:
    // 0x1def98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1def98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1def9c:
    // 0x1def9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1def9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1defa0:
    // 0x1defa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1defa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1defa4:
    // 0x1defa4: 0x4600a881  sub.s       $f2, $f21, $f0
    ctx->pc = 0x1defa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1defa8:
    // 0x1defa8: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1defa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1defac:
    // 0x1defac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1defacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1defb0:
    // 0x1defb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1defb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1defb4:
    // 0x1defb4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1defb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1defb8:
    // 0x1defb8: 0xc06d4c0  jal         func_1B5300
label_1defbc:
    if (ctx->pc == 0x1DEFBCu) {
        ctx->pc = 0x1DEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFB8u;
        // 0x1defbc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFC0u;
        goto label_1defc0;
    }
    ctx->pc = 0x1DEFB8u;
    SET_GPR_U32(ctx, 31, 0x1DEFC0u);
    ctx->pc = 0x1DEFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEFB8u;
    // 0x1defbc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1DEFC0u;
label_1defc0:
    // 0x1defc0: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1defc0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1defc4:
    // 0x1defc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1defc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1defc8:
    // 0x1defc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1defc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1defcc:
    // 0x1defcc: 0xc06d4c0  jal         func_1B5300
label_1defd0:
    if (ctx->pc == 0x1DEFD0u) {
        ctx->pc = 0x1DEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFCCu;
        // 0x1defd0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFD4u;
        goto label_1defd4;
    }
    ctx->pc = 0x1DEFCCu;
    SET_GPR_U32(ctx, 31, 0x1DEFD4u);
    ctx->pc = 0x1DEFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEFCCu;
    // 0x1defd0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1DEFD4u;
label_1defd4:
    // 0x1defd4: 0xc7828214  lwc1        $f2, -0x7DEC($gp)
    ctx->pc = 0x1defd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1defd8:
    // 0x1defd8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1defd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1defdc:
    // 0x1defdc: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1defdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1defe0:
    // 0x1defe0: 0x26730168  addiu       $s3, $s3, 0x168
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 360));
label_1defe4:
    // 0x1defe4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1defe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1defe8:
    // 0x1defe8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1defe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1defec:
    // 0x1defec: 0xc7818200  lwc1        $f1, -0x7E00($gp)
    ctx->pc = 0x1defecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1deff0:
    // 0x1deff0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1deff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1deff4:
    // 0x1deff4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1deff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1deff8:
    // 0x1deff8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1deff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1deffc:
    // 0x1deffc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1deffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1df000:
    // 0x1df000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1df004:
    // 0x1df004: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x1df004u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1df008:
    // 0x1df008: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1df008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1df00c:
    // 0x1df00c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1df00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1df010:
    // 0x1df010: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1df014:
    // 0x1df014: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1df014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1df018:
    // 0x1df018: 0x0  nop
    ctx->pc = 0x1df018u;
    // NOP
label_1df01c:
    // 0x1df01c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1df01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1df020:
    // 0x1df020: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1df020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1df024:
    // 0x1df024: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1df024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1df028:
    // 0x1df028: 0x8f868cf0  lw          $a2, -0x7310($gp)
    ctx->pc = 0x1df028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1df02c:
    // 0x1df02c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x1df02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1df030:
    // 0x1df030: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
label_1df034:
    if (ctx->pc == 0x1DF034u) {
        ctx->pc = 0x1DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF030u;
        // 0x1df034: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF038u;
        goto label_1df038;
    }
    ctx->pc = 0x1DF030u;
    {
        const bool branch_taken_0x1df030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF030u;
        // 0x1df034: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df030) {
            ctx->pc = 0x1DEE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee8c;
        }
    }
    ctx->pc = 0x1DF038u;
label_1df038:
    // 0x1df038: 0xc077ce4  jal         func_1DF390
label_1df03c:
    if (ctx->pc == 0x1DF03Cu) {
        ctx->pc = 0x1DF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF038u;
        // 0x1df03c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF040u;
        goto label_1df040;
    }
    ctx->pc = 0x1DF038u;
    SET_GPR_U32(ctx, 31, 0x1DF040u);
    ctx->pc = 0x1DF03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF038u;
    // 0x1df03c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF390u;
    goto label_1df390;
    ctx->pc = 0x1DF040u;
label_1df040:
    // 0x1df040: 0x8f8c8cf0  lw          $t4, -0x7310($gp)
    ctx->pc = 0x1df040u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1df044:
    // 0x1df044: 0xc082a  slt         $at, $zero, $t4
    ctx->pc = 0x1df044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1df048:
    // 0x1df048: 0x102000c4  beqz        $at, . + 4 + (0xC4 << 2)
label_1df04c:
    if (ctx->pc == 0x1DF04Cu) {
        ctx->pc = 0x1DF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF048u;
        // 0x1df04c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF050u;
        goto label_1df050;
    }
    ctx->pc = 0x1DF048u;
    {
        const bool branch_taken_0x1df048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF048u;
        // 0x1df04c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df048) {
            ctx->pc = 0x1DF35Cu;
            goto label_1df35c;
        }
    }
    ctx->pc = 0x1DF050u;
label_1df050:
    // 0x1df050: 0x29810009  slti        $at, $t4, 0x9
    ctx->pc = 0x1df050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
label_1df054:
    // 0x1df054: 0x1420009b  bnez        $at, . + 4 + (0x9B << 2)
label_1df058:
    if (ctx->pc == 0x1DF058u) {
        ctx->pc = 0x1DF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF054u;
        // 0x1df058: 0x2589fff8  addiu       $t1, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF05Cu;
        goto label_1df05c;
    }
    ctx->pc = 0x1DF054u;
    {
        const bool branch_taken_0x1df054 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF054u;
        // 0x1df058: 0x2589fff8  addiu       $t1, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df054) {
            ctx->pc = 0x1DF2C4u;
            goto label_1df2c4;
        }
    }
    ctx->pc = 0x1DF05Cu;
label_1df05c:
    // 0x1df05c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1df05cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df060:
    // 0x1df060: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1df060u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df064:
    // 0x1df064: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
label_1df068:
    // 0x1df068: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1df06c:
    // 0x1df06c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x1df06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1df070:
    // 0x1df070: 0x24e705a0  addiu       $a3, $a3, 0x5A0
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1440));
label_1df074:
    // 0x1df074: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1df078:
    // 0x1df078: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1df07c:
    // 0x1df07c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1df07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1df080:
    // 0x1df080: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1df080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1df084:
    // 0x1df084: 0x10a7021  addu        $t6, $t0, $t2
    ctx->pc = 0x1df084u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1df088:
    // 0x1df088: 0xeb6821  addu        $t5, $a3, $t3
    ctx->pc = 0x1df088u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1df08c:
    // 0x1df08c: 0x8dd20000  lw          $s2, 0x0($t6)
    ctx->pc = 0x1df08cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_1df090:
    // 0x1df090: 0x8a7821  addu        $t7, $a0, $t2
    ctx->pc = 0x1df090u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1df094:
    // 0x1df094: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1df098:
    // 0x1df098: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x1df098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_1df09c:
    // 0x1df09c: 0x209882a  slt         $s1, $s0, $t1
    ctx->pc = 0x1df09cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1df0a0:
    // 0x1df0a0: 0x256b0080  addiu       $t3, $t3, 0x80
    ctx->pc = 0x1df0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
label_1df0a4:
    // 0x1df0a4: 0xadb20000  sw          $s2, 0x0($t5)
    ctx->pc = 0x1df0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 18));
label_1df0a8:
    // 0x1df0a8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df0ac:
    // 0x1df0ac: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df0acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df0b0:
    // 0x1df0b0: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df0b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df0b4:
    // 0x1df0b4: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df0b8:
    // 0x1df0b8: 0xadb30004  sw          $s3, 0x4($t5)
    ctx->pc = 0x1df0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 19));
label_1df0bc:
    // 0x1df0bc: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df0c0:
    // 0x1df0c0: 0xadb20008  sw          $s2, 0x8($t5)
    ctx->pc = 0x1df0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 18));
label_1df0c4:
    // 0x1df0c4: 0x8df20000  lw          $s2, 0x0($t7)
    ctx->pc = 0x1df0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_1df0c8:
    // 0x1df0c8: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df0cc:
    // 0x1df0cc: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df0ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df0d0:
    // 0x1df0d0: 0x0  nop
    ctx->pc = 0x1df0d0u;
    // NOP
label_1df0d4:
    // 0x1df0d4: 0x9010  mfhi        $s2
    ctx->pc = 0x1df0d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df0d8:
    // 0x1df0d8: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df0d8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df0dc:
    // 0x1df0dc: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df0e0:
    // 0x1df0e0: 0xadb2000c  sw          $s2, 0xC($t5)
    ctx->pc = 0x1df0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 18));
label_1df0e4:
    // 0x1df0e4: 0x8dd20004  lw          $s2, 0x4($t6)
    ctx->pc = 0x1df0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_1df0e8:
    // 0x1df0e8: 0xadb20010  sw          $s2, 0x10($t5)
    ctx->pc = 0x1df0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 18));
label_1df0ec:
    // 0x1df0ec: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df0f0:
    // 0x1df0f0: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df0f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df0f4:
    // 0x1df0f4: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df0f8:
    // 0x1df0f8: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df0fc:
    // 0x1df0fc: 0xadb30014  sw          $s3, 0x14($t5)
    ctx->pc = 0x1df0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 19));
label_1df100:
    // 0x1df100: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df104:
    // 0x1df104: 0xadb20018  sw          $s2, 0x18($t5)
    ctx->pc = 0x1df104u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 18));
label_1df108:
    // 0x1df108: 0x8df20004  lw          $s2, 0x4($t7)
    ctx->pc = 0x1df108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_1df10c:
    // 0x1df10c: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df110:
    // 0x1df110: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df114:
    // 0x1df114: 0x0  nop
    ctx->pc = 0x1df114u;
    // NOP
label_1df118:
    // 0x1df118: 0x9010  mfhi        $s2
    ctx->pc = 0x1df118u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df11c:
    // 0x1df11c: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df11cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df120:
    // 0x1df120: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df124:
    // 0x1df124: 0xadb2001c  sw          $s2, 0x1C($t5)
    ctx->pc = 0x1df124u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 18));
label_1df128:
    // 0x1df128: 0x8dd20008  lw          $s2, 0x8($t6)
    ctx->pc = 0x1df128u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_1df12c:
    // 0x1df12c: 0xadb20020  sw          $s2, 0x20($t5)
    ctx->pc = 0x1df12cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 18));
label_1df130:
    // 0x1df130: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df130u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df134:
    // 0x1df134: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df138:
    // 0x1df138: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df138u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df13c:
    // 0x1df13c: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df140:
    // 0x1df140: 0xadb30024  sw          $s3, 0x24($t5)
    ctx->pc = 0x1df140u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 19));
label_1df144:
    // 0x1df144: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df144u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df148:
    // 0x1df148: 0xadb20028  sw          $s2, 0x28($t5)
    ctx->pc = 0x1df148u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 18));
label_1df14c:
    // 0x1df14c: 0x8df20008  lw          $s2, 0x8($t7)
    ctx->pc = 0x1df14cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_1df150:
    // 0x1df150: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df154:
    // 0x1df154: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df154u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df158:
    // 0x1df158: 0x0  nop
    ctx->pc = 0x1df158u;
    // NOP
label_1df15c:
    // 0x1df15c: 0x9010  mfhi        $s2
    ctx->pc = 0x1df15cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df160:
    // 0x1df160: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df164:
    // 0x1df164: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df168:
    // 0x1df168: 0xadb2002c  sw          $s2, 0x2C($t5)
    ctx->pc = 0x1df168u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 18));
label_1df16c:
    // 0x1df16c: 0x8dd2000c  lw          $s2, 0xC($t6)
    ctx->pc = 0x1df16cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
label_1df170:
    // 0x1df170: 0xadb20030  sw          $s2, 0x30($t5)
    ctx->pc = 0x1df170u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 18));
label_1df174:
    // 0x1df174: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df174u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df178:
    // 0x1df178: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df17c:
    // 0x1df17c: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df17cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df180:
    // 0x1df180: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df184:
    // 0x1df184: 0xadb30034  sw          $s3, 0x34($t5)
    ctx->pc = 0x1df184u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 19));
label_1df188:
    // 0x1df188: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df18c:
    // 0x1df18c: 0xadb20038  sw          $s2, 0x38($t5)
    ctx->pc = 0x1df18cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 18));
label_1df190:
    // 0x1df190: 0x8df2000c  lw          $s2, 0xC($t7)
    ctx->pc = 0x1df190u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
label_1df194:
    // 0x1df194: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df198:
    // 0x1df198: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df198u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df19c:
    // 0x1df19c: 0x0  nop
    ctx->pc = 0x1df19cu;
    // NOP
label_1df1a0:
    // 0x1df1a0: 0x9010  mfhi        $s2
    ctx->pc = 0x1df1a0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df1a4:
    // 0x1df1a4: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df1a4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df1a8:
    // 0x1df1a8: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df1ac:
    // 0x1df1ac: 0xadb2003c  sw          $s2, 0x3C($t5)
    ctx->pc = 0x1df1acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 18));
label_1df1b0:
    // 0x1df1b0: 0x8dd20010  lw          $s2, 0x10($t6)
    ctx->pc = 0x1df1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
label_1df1b4:
    // 0x1df1b4: 0xadb20040  sw          $s2, 0x40($t5)
    ctx->pc = 0x1df1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 18));
label_1df1b8:
    // 0x1df1b8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df1bc:
    // 0x1df1bc: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df1c0:
    // 0x1df1c0: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df1c4:
    // 0x1df1c4: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df1c8:
    // 0x1df1c8: 0xadb30044  sw          $s3, 0x44($t5)
    ctx->pc = 0x1df1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 19));
label_1df1cc:
    // 0x1df1cc: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df1d0:
    // 0x1df1d0: 0xadb20048  sw          $s2, 0x48($t5)
    ctx->pc = 0x1df1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 18));
label_1df1d4:
    // 0x1df1d4: 0x8df20010  lw          $s2, 0x10($t7)
    ctx->pc = 0x1df1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
label_1df1d8:
    // 0x1df1d8: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df1dc:
    // 0x1df1dc: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df1dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df1e0:
    // 0x1df1e0: 0x0  nop
    ctx->pc = 0x1df1e0u;
    // NOP
label_1df1e4:
    // 0x1df1e4: 0x9010  mfhi        $s2
    ctx->pc = 0x1df1e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df1e8:
    // 0x1df1e8: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df1e8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df1ec:
    // 0x1df1ec: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df1f0:
    // 0x1df1f0: 0xadb2004c  sw          $s2, 0x4C($t5)
    ctx->pc = 0x1df1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 18));
label_1df1f4:
    // 0x1df1f4: 0x8dd20014  lw          $s2, 0x14($t6)
    ctx->pc = 0x1df1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
label_1df1f8:
    // 0x1df1f8: 0xadb20050  sw          $s2, 0x50($t5)
    ctx->pc = 0x1df1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 18));
label_1df1fc:
    // 0x1df1fc: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df200:
    // 0x1df200: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df204:
    // 0x1df204: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df204u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df208:
    // 0x1df208: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df20c:
    // 0x1df20c: 0xadb30054  sw          $s3, 0x54($t5)
    ctx->pc = 0x1df20cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 19));
label_1df210:
    // 0x1df210: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df210u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df214:
    // 0x1df214: 0xadb20058  sw          $s2, 0x58($t5)
    ctx->pc = 0x1df214u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 18));
label_1df218:
    // 0x1df218: 0x8df20014  lw          $s2, 0x14($t7)
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
label_1df21c:
    // 0x1df21c: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df220:
    // 0x1df220: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df224:
    // 0x1df224: 0x0  nop
    ctx->pc = 0x1df224u;
    // NOP
label_1df228:
    // 0x1df228: 0x9010  mfhi        $s2
    ctx->pc = 0x1df228u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df22c:
    // 0x1df22c: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df230:
    // 0x1df230: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df234:
    // 0x1df234: 0xadb2005c  sw          $s2, 0x5C($t5)
    ctx->pc = 0x1df234u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 18));
label_1df238:
    // 0x1df238: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x1df238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
label_1df23c:
    // 0x1df23c: 0xadb20060  sw          $s2, 0x60($t5)
    ctx->pc = 0x1df23cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 18));
label_1df240:
    // 0x1df240: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1df244:
    // 0x1df244: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1df244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1df248:
    // 0x1df248: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1df248u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1df24c:
    // 0x1df24c: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1df24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1df250:
    // 0x1df250: 0xadb30064  sw          $s3, 0x64($t5)
    ctx->pc = 0x1df250u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 19));
label_1df254:
    // 0x1df254: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df258:
    // 0x1df258: 0xadb20068  sw          $s2, 0x68($t5)
    ctx->pc = 0x1df258u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 18));
label_1df25c:
    // 0x1df25c: 0x8df20018  lw          $s2, 0x18($t7)
    ctx->pc = 0x1df25cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_1df260:
    // 0x1df260: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1df260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df264:
    // 0x1df264: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1df268:
    // 0x1df268: 0x0  nop
    ctx->pc = 0x1df268u;
    // NOP
label_1df26c:
    // 0x1df26c: 0x9010  mfhi        $s2
    ctx->pc = 0x1df26cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1df270:
    // 0x1df270: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1df270u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1df274:
    // 0x1df274: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1df274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1df278:
    // 0x1df278: 0xadb2006c  sw          $s2, 0x6C($t5)
    ctx->pc = 0x1df278u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 108), GPR_U32(ctx, 18));
label_1df27c:
    // 0x1df27c: 0x8dce001c  lw          $t6, 0x1C($t6)
    ctx->pc = 0x1df27cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
label_1df280:
    // 0x1df280: 0xadae0070  sw          $t6, 0x70($t5)
    ctx->pc = 0x1df280u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 112), GPR_U32(ctx, 14));
label_1df284:
    // 0x1df284: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1df284u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_1df288:
    // 0x1df288: 0xce9021  addu        $s2, $a2, $t6
    ctx->pc = 0x1df288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_1df28c:
    // 0x1df28c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1df28cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1df290:
    // 0x1df290: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x1df290u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_1df294:
    // 0x1df294: 0xadb20074  sw          $s2, 0x74($t5)
    ctx->pc = 0x1df294u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 116), GPR_U32(ctx, 18));
label_1df298:
    // 0x1df298: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x1df298u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_1df29c:
    // 0x1df29c: 0xadae0078  sw          $t6, 0x78($t5)
    ctx->pc = 0x1df29cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 14));
label_1df2a0:
    // 0x1df2a0: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1df2a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
label_1df2a4:
    // 0x1df2a4: 0x6e0018  mult        $zero, $v1, $t6
    ctx->pc = 0x1df2a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df2a8:
    // 0x1df2a8: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x1df2a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_1df2ac:
    // 0x1df2ac: 0x0  nop
    ctx->pc = 0x1df2acu;
    // NOP
label_1df2b0:
    // 0x1df2b0: 0x7010  mfhi        $t6
    ctx->pc = 0x1df2b0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_1df2b4:
    // 0x1df2b4: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1df2b4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1df2b8:
    // 0x1df2b8: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1df2b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_1df2bc:
    // 0x1df2bc: 0x1620ff71  bnez        $s1, . + 4 + (-0x8F << 2)
label_1df2c0:
    if (ctx->pc == 0x1DF2C0u) {
        ctx->pc = 0x1DF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2BCu;
        // 0x1df2c0: 0xadae007c  sw          $t6, 0x7C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2C4u;
        goto label_1df2c4;
    }
    ctx->pc = 0x1DF2BCu;
    {
        const bool branch_taken_0x1df2bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2BCu;
        // 0x1df2c0: 0xadae007c  sw          $t6, 0x7C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2bc) {
            ctx->pc = 0x1DF084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df084;
        }
    }
    ctx->pc = 0x1DF2C4u;
label_1df2c4:
    // 0x1df2c4: 0x0  nop
    ctx->pc = 0x1df2c4u;
    // NOP
label_1df2c8:
    // 0x1df2c8: 0x3c0e004b  lui         $t6, 0x4B
    ctx->pc = 0x1df2c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)75 << 16));
label_1df2cc:
    // 0x1df2cc: 0x3c066666  lui         $a2, 0x6666
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_1df2d0:
    // 0x1df2d0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1df2d4:
    // 0x1df2d4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1df2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1df2d8:
    // 0x1df2d8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1df2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1df2dc:
    // 0x1df2dc: 0x25ce05a0  addiu       $t6, $t6, 0x5A0
    ctx->pc = 0x1df2dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1440));
label_1df2e0:
    // 0x1df2e0: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x1df2e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1df2e4:
    // 0x1df2e4: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1df2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1df2e8:
    // 0x1df2e8: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x1df2e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1df2ec:
    // 0x1df2ec: 0x10000017  b           . + 4 + (0x17 << 2)
label_1df2f0:
    if (ctx->pc == 0x1DF2F0u) {
        ctx->pc = 0x1DF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2ECu;
        // 0x1df2f0: 0x34c86667  ori         $t0, $a2, 0x6667 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF2F4u;
        goto label_1df2f4;
    }
    ctx->pc = 0x1DF2ECu;
    {
        const bool branch_taken_0x1df2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2ECu;
        // 0x1df2f0: 0x34c86667  ori         $t0, $a2, 0x6667 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2ec) {
            ctx->pc = 0x1DF34Cu;
            goto label_1df34c;
        }
    }
    ctx->pc = 0x1DF2F4u;
label_1df2f4:
    // 0x1df2f4: 0x1c57821  addu        $t7, $t6, $a1
    ctx->pc = 0x1df2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1df2f8:
    // 0x1df2f8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1df2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df2fc:
    // 0x1df2fc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1df2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1df300:
    // 0x1df300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1df300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1df304:
    // 0x1df304: 0xade70000  sw          $a3, 0x0($t7)
    ctx->pc = 0x1df304u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 7));
label_1df308:
    // 0x1df308: 0x1243021  addu        $a2, $t1, $a0
    ctx->pc = 0x1df308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1df30c:
    // 0x1df30c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1df30cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1df310:
    // 0x1df310: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1df310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1df314:
    // 0x1df314: 0x1a75821  addu        $t3, $t5, $a3
    ctx->pc = 0x1df314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_1df318:
    // 0x1df318: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1df318u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1df31c:
    // 0x1df31c: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x1df31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1df320:
    // 0x1df320: 0xadeb0004  sw          $t3, 0x4($t7)
    ctx->pc = 0x1df320u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 11));
label_1df324:
    // 0x1df324: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1df324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1df328:
    // 0x1df328: 0xade70008  sw          $a3, 0x8($t7)
    ctx->pc = 0x1df328u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 7));
label_1df32c:
    // 0x1df32c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1df32cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df330:
    // 0x1df330: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x1df330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df334:
    // 0x1df334: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x1df334u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1df338:
    // 0x1df338: 0x0  nop
    ctx->pc = 0x1df338u;
    // NOP
label_1df33c:
    // 0x1df33c: 0x3010  mfhi        $a2
    ctx->pc = 0x1df33cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1df340:
    // 0x1df340: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1df340u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1df344:
    // 0x1df344: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1df344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1df348:
    // 0x1df348: 0xade6000c  sw          $a2, 0xC($t7)
    ctx->pc = 0x1df348u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 6));
label_1df34c:
    // 0x1df34c: 0x0  nop
    ctx->pc = 0x1df34cu;
    // NOP
label_1df350:
    // 0x1df350: 0x20c302a  slt         $a2, $s0, $t4
    ctx->pc = 0x1df350u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1df354:
    // 0x1df354: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
label_1df358:
    if (ctx->pc == 0x1DF358u) {
        ctx->pc = 0x1DF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF354u;
        // 0x1df358: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF35Cu;
        goto label_1df35c;
    }
    ctx->pc = 0x1DF354u;
    {
        const bool branch_taken_0x1df354 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF354u;
        // 0x1df358: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df354) {
            ctx->pc = 0x1DF2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df2f4;
        }
    }
    ctx->pc = 0x1DF35Cu;
label_1df35c:
    // 0x1df35c: 0x0  nop
    ctx->pc = 0x1df35cu;
    // NOP
label_1df360:
    // 0x1df360: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1df360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1df364:
    // 0x1df364: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1df364u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1df368:
    // 0x1df368: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1df368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1df36c:
    // 0x1df36c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1df36cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1df370:
    // 0x1df370: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1df370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1df374:
    // 0x1df374: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1df374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1df378:
    // 0x1df378: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1df378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1df37c:
    // 0x1df37c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1df37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1df380:
    // 0x1df380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1df380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1df384:
    // 0x1df384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df388:
    // 0x1df388: 0x3e00008  jr          $ra
label_1df38c:
    if (ctx->pc == 0x1DF38Cu) {
        ctx->pc = 0x1DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF388u;
        // 0x1df38c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF390u;
        goto label_1df390;
    }
    ctx->pc = 0x1DF388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF388u;
        // 0x1df38c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF390u;
label_1df390:
    // 0x1df390: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x1df390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1df394:
    // 0x1df394: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1df394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1df398:
    // 0x1df398: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1df39c:
    if (ctx->pc == 0x1DF39Cu) {
        ctx->pc = 0x1DF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF398u;
        // 0x1df39c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF3A0u;
        goto label_1df3a0;
    }
    ctx->pc = 0x1DF398u;
    {
        const bool branch_taken_0x1df398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF398u;
        // 0x1df39c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df398) {
            ctx->pc = 0x1DF408u;
            goto label_1df408;
        }
    }
    ctx->pc = 0x1DF3A0u;
label_1df3a0:
    // 0x1df3a0: 0x24c9ffff  addiu       $t1, $a2, -0x1
    ctx->pc = 0x1df3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1df3a4:
    // 0x1df3a4: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x1df3a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1df3a8:
    // 0x1df3a8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1df3ac:
    if (ctx->pc == 0x1DF3ACu) {
        ctx->pc = 0x1DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3A8u;
        // 0x1df3ac: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF3B0u;
        goto label_1df3b0;
    }
    ctx->pc = 0x1DF3A8u;
    {
        const bool branch_taken_0x1df3a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3A8u;
        // 0x1df3ac: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3a8) {
            ctx->pc = 0x1DF3F8u;
            goto label_1df3f8;
        }
    }
    ctx->pc = 0x1DF3B0u;
label_1df3b0:
    // 0x1df3b0: 0xab5021  addu        $t2, $a1, $t3
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1df3b4:
    // 0x1df3b4: 0x8d4dfffc  lw          $t5, -0x4($t2)
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967292)));
label_1df3b8:
    // 0x1df3b8: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x1df3b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1df3bc:
    // 0x1df3bc: 0x18d182a  slt         $v1, $t4, $t5
    ctx->pc = 0x1df3bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_1df3c0:
    // 0x1df3c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1df3c4:
    if (ctx->pc == 0x1DF3C4u) {
        ctx->pc = 0x1DF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3C0u;
        // 0x1df3c4: 0x254efffc  addiu       $t6, $t2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF3C8u;
        goto label_1df3c8;
    }
    ctx->pc = 0x1DF3C0u;
    {
        const bool branch_taken_0x1df3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3C0u;
        // 0x1df3c4: 0x254efffc  addiu       $t6, $t2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3c0) {
            ctx->pc = 0x1DF3E4u;
            goto label_1df3e4;
        }
    }
    ctx->pc = 0x1DF3C8u;
label_1df3c8:
    // 0x1df3c8: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x1df3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
label_1df3cc:
    // 0x1df3cc: 0x8b6821  addu        $t5, $a0, $t3
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1df3d0:
    // 0x1df3d0: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x1df3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
label_1df3d4:
    // 0x1df3d4: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x1df3d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1df3d8:
    // 0x1df3d8: 0x8da3fffc  lw          $v1, -0x4($t5)
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294967292)));
label_1df3dc:
    // 0x1df3dc: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1df3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_1df3e0:
    // 0x1df3e0: 0xadaafffc  sw          $t2, -0x4($t5)
    ctx->pc = 0x1df3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294967292), GPR_U32(ctx, 10));
label_1df3e4:
    // 0x1df3e4: 0x0  nop
    ctx->pc = 0x1df3e4u;
    // NOP
label_1df3e8:
    // 0x1df3e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1df3ec:
    // 0x1df3ec: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x1df3ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1df3f0:
    // 0x1df3f0: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
label_1df3f4:
    if (ctx->pc == 0x1DF3F4u) {
        ctx->pc = 0x1DF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3F0u;
        // 0x1df3f4: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF3F8u;
        goto label_1df3f8;
    }
    ctx->pc = 0x1DF3F0u;
    {
        const bool branch_taken_0x1df3f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3F0u;
        // 0x1df3f4: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3f0) {
            ctx->pc = 0x1DF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df3b0;
        }
    }
    ctx->pc = 0x1DF3F8u;
label_1df3f8:
    // 0x1df3f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1df3fc:
    // 0x1df3fc: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x1df3fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1df400:
    // 0x1df400: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1df404:
    if (ctx->pc == 0x1DF404u) {
        ctx->pc = 0x1DF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF400u;
        // 0x1df404: 0x24c9ffff  addiu       $t1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF408u;
        goto label_1df408;
    }
    ctx->pc = 0x1DF400u;
    {
        const bool branch_taken_0x1df400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF400u;
        // 0x1df404: 0x24c9ffff  addiu       $t1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df400) {
            ctx->pc = 0x1DF3A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df3a4;
        }
    }
    ctx->pc = 0x1DF408u;
label_1df408:
    // 0x1df408: 0x3e00008  jr          $ra
label_1df40c:
    if (ctx->pc == 0x1DF40Cu) {
        ctx->pc = 0x1DF410u;
        goto label_1df410;
    }
    ctx->pc = 0x1DF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF410u;
label_1df410:
    // 0x1df410: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1df410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1df414:
    // 0x1df414: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1df414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1df418:
    // 0x1df418: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1df418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1df41c:
    // 0x1df41c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1df41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1df420:
    // 0x1df420: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1df420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df424:
    // 0x1df424: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1df424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1df428:
    // 0x1df428: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1df428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df42c:
    // 0x1df42c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1df42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1df430:
    // 0x1df430: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1df430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1df434:
    // 0x1df434: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1df434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1df438:
    // 0x1df438: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1df438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1df43c:
    // 0x1df43c: 0xaf808cc4  sw          $zero, -0x733C($gp)
    ctx->pc = 0x1df43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937796), GPR_U32(ctx, 0));
label_1df440:
    // 0x1df440: 0xaf808cc0  sw          $zero, -0x7340($gp)
    ctx->pc = 0x1df440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 0));
label_1df444:
    // 0x1df444: 0xaf808cbc  sw          $zero, -0x7344($gp)
    ctx->pc = 0x1df444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 0));
label_1df448:
    // 0x1df448: 0xaf848cb8  sw          $a0, -0x7348($gp)
    ctx->pc = 0x1df448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937784), GPR_U32(ctx, 4));
label_1df44c:
    // 0x1df44c: 0xaf848cb4  sw          $a0, -0x734C($gp)
    ctx->pc = 0x1df44cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 4));
label_1df450:
    // 0x1df450: 0xaf808cb0  sw          $zero, -0x7350($gp)
    ctx->pc = 0x1df450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
label_1df454:
    // 0x1df454: 0xaf848cac  sw          $a0, -0x7354($gp)
    ctx->pc = 0x1df454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937772), GPR_U32(ctx, 4));
label_1df458:
    // 0x1df458: 0xaf848ca8  sw          $a0, -0x7358($gp)
    ctx->pc = 0x1df458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), GPR_U32(ctx, 4));
label_1df45c:
    // 0x1df45c: 0x27828cc8  addiu       $v0, $gp, -0x7338
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937800));
label_1df460:
    // 0x1df460: 0x240500ee  addiu       $a1, $zero, 0xEE
    ctx->pc = 0x1df460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_1df464:
    // 0x1df464: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1df464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1df468:
    // 0x1df468: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1df468u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df46c:
    // 0x1df46c: 0xc05e234  jal         func_1788D0
label_1df470:
    if (ctx->pc == 0x1DF470u) {
        ctx->pc = 0x1DF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF46Cu;
        // 0x1df470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF474u;
        goto label_1df474;
    }
    ctx->pc = 0x1DF46Cu;
    SET_GPR_U32(ctx, 31, 0x1DF474u);
    ctx->pc = 0x1DF470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF46Cu;
    // 0x1df470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1DF46Cu, 0x1DF474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF474u;
label_1df474:
    // 0x1df474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1df474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df478:
    // 0x1df478: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1df478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df47c:
    // 0x1df47c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1df47cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df480:
    // 0x1df480: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1df484:
    // 0x1df484: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1df484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1df488:
    // 0x1df488: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x1df488u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1df48c:
    // 0x1df48c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1df490:
    // 0x1df490: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1df490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1df494:
    // 0x1df494: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1df494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1df498:
    // 0x1df498: 0x26460180  addiu       $a2, $s2, 0x180
    ctx->pc = 0x1df498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_1df49c:
    // 0x1df49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df4a0:
    // 0x1df4a0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1df4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1df4a4:
    // 0x1df4a4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1df4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1df4a8:
    // 0x1df4a8: 0x3249ffff  andi        $t1, $s2, 0xFFFF
    ctx->pc = 0x1df4a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1df4ac:
    // 0x1df4ac: 0xdc2504e0  ld          $a1, 0x4E0($at)
    ctx->pc = 0x1df4acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1248)));
label_1df4b0:
    // 0x1df4b0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1df4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1df4b4:
    // 0x1df4b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df4b8:
    // 0x1df4b8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1df4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1df4bc:
    // 0x1df4bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1df4bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df4c0:
    // 0x1df4c0: 0xc05df9c  jal         func_177E70
label_1df4c4:
    if (ctx->pc == 0x1DF4C4u) {
        ctx->pc = 0x1DF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4C0u;
        // 0x1df4c4: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF4C8u;
        goto label_1df4c8;
    }
    ctx->pc = 0x1DF4C0u;
    SET_GPR_U32(ctx, 31, 0x1DF4C8u);
    ctx->pc = 0x1DF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4C0u;
    // 0x1df4c4: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1DF4C0u, 0x1DF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4C8u;
label_1df4c8:
    // 0x1df4c8: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x1df4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1df4cc:
    // 0x1df4cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1df4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1df4d0:
    // 0x1df4d0: 0xa2860080  sb          $a2, 0x80($s4)
    ctx->pc = 0x1df4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 6));
label_1df4d4:
    // 0x1df4d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1df4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1df4d8:
    // 0x1df4d8: 0xa2820081  sb          $v0, 0x81($s4)
    ctx->pc = 0x1df4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 2));
label_1df4dc:
    // 0x1df4dc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1df4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1df4e0:
    // 0x1df4e0: 0xa2850082  sb          $a1, 0x82($s4)
    ctx->pc = 0x1df4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 5));
label_1df4e4:
    // 0x1df4e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1df4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1df4e8:
    // 0x1df4e8: 0xa2840083  sb          $a0, 0x83($s4)
    ctx->pc = 0x1df4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 4));
label_1df4ec:
    // 0x1df4ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1df4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1df4f0:
    // 0x1df4f0: 0xae830084  sw          $v1, 0x84($s4)
    ctx->pc = 0x1df4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
label_1df4f4:
    // 0x1df4f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1df4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1df4f8:
    // 0x1df4f8: 0xa2860098  sb          $a2, 0x98($s4)
    ctx->pc = 0x1df4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 6));
label_1df4fc:
    // 0x1df4fc: 0x267300d0  addiu       $s3, $s3, 0xD0
    ctx->pc = 0x1df4fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_1df500:
    // 0x1df500: 0xa2820099  sb          $v0, 0x99($s4)
    ctx->pc = 0x1df500u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 153), (uint8_t)GPR_U32(ctx, 2));
label_1df504:
    // 0x1df504: 0xa285009a  sb          $a1, 0x9A($s4)
    ctx->pc = 0x1df504u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 5));
label_1df508:
    // 0x1df508: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1df508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1df50c:
    // 0x1df50c: 0xa284009b  sb          $a0, 0x9B($s4)
    ctx->pc = 0x1df50cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 4));
label_1df510:
    // 0x1df510: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x1df510u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
label_1df514:
    // 0x1df514: 0xa28000b0  sb          $zero, 0xB0($s4)
    ctx->pc = 0x1df514u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 176), (uint8_t)GPR_U32(ctx, 0));
label_1df518:
    // 0x1df518: 0xa28000b1  sb          $zero, 0xB1($s4)
    ctx->pc = 0x1df518u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 177), (uint8_t)GPR_U32(ctx, 0));
label_1df51c:
    // 0x1df51c: 0xa28000b2  sb          $zero, 0xB2($s4)
    ctx->pc = 0x1df51cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 178), (uint8_t)GPR_U32(ctx, 0));
label_1df520:
    // 0x1df520: 0xa28400b3  sb          $a0, 0xB3($s4)
    ctx->pc = 0x1df520u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 179), (uint8_t)GPR_U32(ctx, 4));
label_1df524:
    // 0x1df524: 0xae8300b4  sw          $v1, 0xB4($s4)
    ctx->pc = 0x1df524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 3));
label_1df528:
    // 0x1df528: 0xa28000c8  sb          $zero, 0xC8($s4)
    ctx->pc = 0x1df528u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 200), (uint8_t)GPR_U32(ctx, 0));
label_1df52c:
    // 0x1df52c: 0xa28000c9  sb          $zero, 0xC9($s4)
    ctx->pc = 0x1df52cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 201), (uint8_t)GPR_U32(ctx, 0));
label_1df530:
    // 0x1df530: 0xa28000ca  sb          $zero, 0xCA($s4)
    ctx->pc = 0x1df530u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 202), (uint8_t)GPR_U32(ctx, 0));
label_1df534:
    // 0x1df534: 0xa28400cb  sb          $a0, 0xCB($s4)
    ctx->pc = 0x1df534u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 203), (uint8_t)GPR_U32(ctx, 4));
label_1df538:
    // 0x1df538: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1df53c:
    if (ctx->pc == 0x1DF53Cu) {
        ctx->pc = 0x1DF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF538u;
        // 0x1df53c: 0xae8300cc  sw          $v1, 0xCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF540u;
        goto label_1df540;
    }
    ctx->pc = 0x1DF538u;
    {
        const bool branch_taken_0x1df538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF538u;
        // 0x1df53c: 0xae8300cc  sw          $v1, 0xCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df538) {
            ctx->pc = 0x1DF480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF540u;
label_1df540:
    // 0x1df540: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1df540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1df544:
    // 0x1df544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1df548:
    // 0x1df548: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1df548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1df54c:
    // 0x1df54c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1df54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1df550:
    // 0x1df550: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1df550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1df554:
    // 0x1df554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df558:
    // 0x1df558: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1df558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1df55c:
    // 0x1df55c: 0x26240d10  addiu       $a0, $s1, 0xD10
    ctx->pc = 0x1df55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3344));
label_1df560:
    // 0x1df560: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1df560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1df564:
    // 0x1df564: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1df564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1df568:
    // 0x1df568: 0xdc2504a0  ld          $a1, 0x4A0($at)
    ctx->pc = 0x1df568u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1184)));
label_1df56c:
    // 0x1df56c: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x1df56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1df570:
    // 0x1df570: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x1df570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1df574:
    // 0x1df574: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1df574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df578:
    // 0x1df578: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1df578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df57c:
    // 0x1df57c: 0xc05de30  jal         func_1778C0
label_1df580:
    if (ctx->pc == 0x1DF580u) {
        ctx->pc = 0x1DF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF57Cu;
        // 0x1df580: 0x240b0170  addiu       $t3, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF584u;
        goto label_1df584;
    }
    ctx->pc = 0x1DF57Cu;
    SET_GPR_U32(ctx, 31, 0x1DF584u);
    ctx->pc = 0x1DF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF57Cu;
    // 0x1df580: 0x240b0170  addiu       $t3, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DF57Cu, 0x1DF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF584u;
label_1df584:
    // 0x1df584: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1df584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1df588:
    // 0x1df588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1df58c:
    // 0x1df58c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1df58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1df590:
    // 0x1df590: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1df590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1df594:
    // 0x1df594: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1df594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1df598:
    // 0x1df598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df59c:
    // 0x1df59c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1df59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1df5a0:
    // 0x1df5a0: 0x26240db0  addiu       $a0, $s1, 0xDB0
    ctx->pc = 0x1df5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3504));
label_1df5a4:
    // 0x1df5a4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1df5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1df5a8:
    // 0x1df5a8: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1df5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1df5ac:
    // 0x1df5ac: 0xdc2504a8  ld          $a1, 0x4A8($at)
    ctx->pc = 0x1df5acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1192)));
label_1df5b0:
    // 0x1df5b0: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x1df5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1df5b4:
    // 0x1df5b4: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1df5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1df5b8:
    // 0x1df5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1df5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df5bc:
    // 0x1df5bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1df5bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df5c0:
    // 0x1df5c0: 0xc05de30  jal         func_1778C0
label_1df5c4:
    if (ctx->pc == 0x1DF5C4u) {
        ctx->pc = 0x1DF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5C0u;
        // 0x1df5c4: 0x240b0170  addiu       $t3, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5C8u;
        goto label_1df5c8;
    }
    ctx->pc = 0x1DF5C0u;
    SET_GPR_U32(ctx, 31, 0x1DF5C8u);
    ctx->pc = 0x1DF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF5C0u;
    // 0x1df5c4: 0x240b0170  addiu       $t3, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DF5C0u, 0x1DF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF5C8u;
label_1df5c8:
    // 0x1df5c8: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1df5cc:
    // 0x1df5cc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1df5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1df5d0:
    // 0x1df5d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1df5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1df5d4:
    // 0x1df5d4: 0x26240e50  addiu       $a0, $s1, 0xE50
    ctx->pc = 0x1df5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3664));
label_1df5d8:
    // 0x1df5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df5dc:
    // 0x1df5dc: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1df5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1df5e0:
    // 0x1df5e0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1df5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1df5e4:
    // 0x1df5e4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1df5e8:
    // 0x1df5e8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1df5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1df5ec:
    // 0x1df5ec: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x1df5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1df5f0:
    // 0x1df5f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1df5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1df5f4:
    // 0x1df5f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1df5f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1df5f8u;
    return;
}

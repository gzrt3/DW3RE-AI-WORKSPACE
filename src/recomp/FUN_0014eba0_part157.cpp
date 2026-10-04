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


void FUN_0014eba0_part157(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19ae60u: goto label_19ae60;
        case 0x19ae64u: goto label_19ae64;
        case 0x19ae68u: goto label_19ae68;
        case 0x19ae6cu: goto label_19ae6c;
        case 0x19ae70u: goto label_19ae70;
        case 0x19ae74u: goto label_19ae74;
        case 0x19ae78u: goto label_19ae78;
        case 0x19ae7cu: goto label_19ae7c;
        case 0x19ae80u: goto label_19ae80;
        case 0x19ae84u: goto label_19ae84;
        case 0x19ae88u: goto label_19ae88;
        case 0x19ae8cu: goto label_19ae8c;
        case 0x19ae90u: goto label_19ae90;
        case 0x19ae94u: goto label_19ae94;
        case 0x19ae98u: goto label_19ae98;
        case 0x19ae9cu: goto label_19ae9c;
        case 0x19aea0u: goto label_19aea0;
        case 0x19aea4u: goto label_19aea4;
        case 0x19aea8u: goto label_19aea8;
        case 0x19aeacu: goto label_19aeac;
        case 0x19aeb0u: goto label_19aeb0;
        case 0x19aeb4u: goto label_19aeb4;
        case 0x19aeb8u: goto label_19aeb8;
        case 0x19aebcu: goto label_19aebc;
        case 0x19aec0u: goto label_19aec0;
        case 0x19aec4u: goto label_19aec4;
        case 0x19aec8u: goto label_19aec8;
        case 0x19aeccu: goto label_19aecc;
        case 0x19aed0u: goto label_19aed0;
        case 0x19aed4u: goto label_19aed4;
        case 0x19aed8u: goto label_19aed8;
        case 0x19aedcu: goto label_19aedc;
        case 0x19aee0u: goto label_19aee0;
        case 0x19aee4u: goto label_19aee4;
        case 0x19aee8u: goto label_19aee8;
        case 0x19aeecu: goto label_19aeec;
        case 0x19aef0u: goto label_19aef0;
        case 0x19aef4u: goto label_19aef4;
        case 0x19aef8u: goto label_19aef8;
        case 0x19aefcu: goto label_19aefc;
        case 0x19af00u: goto label_19af00;
        case 0x19af04u: goto label_19af04;
        case 0x19af08u: goto label_19af08;
        case 0x19af0cu: goto label_19af0c;
        case 0x19af10u: goto label_19af10;
        case 0x19af14u: goto label_19af14;
        case 0x19af18u: goto label_19af18;
        case 0x19af1cu: goto label_19af1c;
        case 0x19af20u: goto label_19af20;
        case 0x19af24u: goto label_19af24;
        case 0x19af28u: goto label_19af28;
        case 0x19af2cu: goto label_19af2c;
        case 0x19af30u: goto label_19af30;
        case 0x19af34u: goto label_19af34;
        case 0x19af38u: goto label_19af38;
        case 0x19af3cu: goto label_19af3c;
        case 0x19af40u: goto label_19af40;
        case 0x19af44u: goto label_19af44;
        case 0x19af48u: goto label_19af48;
        case 0x19af4cu: goto label_19af4c;
        case 0x19af50u: goto label_19af50;
        case 0x19af54u: goto label_19af54;
        case 0x19af58u: goto label_19af58;
        case 0x19af5cu: goto label_19af5c;
        case 0x19af60u: goto label_19af60;
        case 0x19af64u: goto label_19af64;
        case 0x19af68u: goto label_19af68;
        case 0x19af6cu: goto label_19af6c;
        case 0x19af70u: goto label_19af70;
        case 0x19af74u: goto label_19af74;
        case 0x19af78u: goto label_19af78;
        case 0x19af7cu: goto label_19af7c;
        case 0x19af80u: goto label_19af80;
        case 0x19af84u: goto label_19af84;
        case 0x19af88u: goto label_19af88;
        case 0x19af8cu: goto label_19af8c;
        case 0x19af90u: goto label_19af90;
        case 0x19af94u: goto label_19af94;
        case 0x19af98u: goto label_19af98;
        case 0x19af9cu: goto label_19af9c;
        case 0x19afa0u: goto label_19afa0;
        case 0x19afa4u: goto label_19afa4;
        case 0x19afa8u: goto label_19afa8;
        case 0x19afacu: goto label_19afac;
        case 0x19afb0u: goto label_19afb0;
        case 0x19afb4u: goto label_19afb4;
        case 0x19afb8u: goto label_19afb8;
        case 0x19afbcu: goto label_19afbc;
        case 0x19afc0u: goto label_19afc0;
        case 0x19afc4u: goto label_19afc4;
        case 0x19afc8u: goto label_19afc8;
        case 0x19afccu: goto label_19afcc;
        case 0x19afd0u: goto label_19afd0;
        case 0x19afd4u: goto label_19afd4;
        case 0x19afd8u: goto label_19afd8;
        case 0x19afdcu: goto label_19afdc;
        case 0x19afe0u: goto label_19afe0;
        case 0x19afe4u: goto label_19afe4;
        case 0x19afe8u: goto label_19afe8;
        case 0x19afecu: goto label_19afec;
        case 0x19aff0u: goto label_19aff0;
        case 0x19aff4u: goto label_19aff4;
        case 0x19aff8u: goto label_19aff8;
        case 0x19affcu: goto label_19affc;
        case 0x19b000u: goto label_19b000;
        case 0x19b004u: goto label_19b004;
        case 0x19b008u: goto label_19b008;
        case 0x19b00cu: goto label_19b00c;
        case 0x19b010u: goto label_19b010;
        case 0x19b014u: goto label_19b014;
        case 0x19b018u: goto label_19b018;
        case 0x19b01cu: goto label_19b01c;
        case 0x19b020u: goto label_19b020;
        case 0x19b024u: goto label_19b024;
        case 0x19b028u: goto label_19b028;
        case 0x19b02cu: goto label_19b02c;
        case 0x19b030u: goto label_19b030;
        case 0x19b034u: goto label_19b034;
        case 0x19b038u: goto label_19b038;
        case 0x19b03cu: goto label_19b03c;
        case 0x19b040u: goto label_19b040;
        case 0x19b044u: goto label_19b044;
        case 0x19b048u: goto label_19b048;
        case 0x19b04cu: goto label_19b04c;
        case 0x19b050u: goto label_19b050;
        case 0x19b054u: goto label_19b054;
        case 0x19b058u: goto label_19b058;
        case 0x19b05cu: goto label_19b05c;
        case 0x19b060u: goto label_19b060;
        case 0x19b064u: goto label_19b064;
        case 0x19b068u: goto label_19b068;
        case 0x19b06cu: goto label_19b06c;
        case 0x19b070u: goto label_19b070;
        case 0x19b074u: goto label_19b074;
        case 0x19b078u: goto label_19b078;
        case 0x19b07cu: goto label_19b07c;
        case 0x19b080u: goto label_19b080;
        case 0x19b084u: goto label_19b084;
        case 0x19b088u: goto label_19b088;
        case 0x19b08cu: goto label_19b08c;
        case 0x19b090u: goto label_19b090;
        case 0x19b094u: goto label_19b094;
        case 0x19b098u: goto label_19b098;
        case 0x19b09cu: goto label_19b09c;
        case 0x19b0a0u: goto label_19b0a0;
        case 0x19b0a4u: goto label_19b0a4;
        case 0x19b0a8u: goto label_19b0a8;
        case 0x19b0acu: goto label_19b0ac;
        case 0x19b0b0u: goto label_19b0b0;
        case 0x19b0b4u: goto label_19b0b4;
        case 0x19b0b8u: goto label_19b0b8;
        case 0x19b0bcu: goto label_19b0bc;
        case 0x19b0c0u: goto label_19b0c0;
        case 0x19b0c4u: goto label_19b0c4;
        case 0x19b0c8u: goto label_19b0c8;
        case 0x19b0ccu: goto label_19b0cc;
        case 0x19b0d0u: goto label_19b0d0;
        case 0x19b0d4u: goto label_19b0d4;
        case 0x19b0d8u: goto label_19b0d8;
        case 0x19b0dcu: goto label_19b0dc;
        case 0x19b0e0u: goto label_19b0e0;
        case 0x19b0e4u: goto label_19b0e4;
        case 0x19b0e8u: goto label_19b0e8;
        case 0x19b0ecu: goto label_19b0ec;
        case 0x19b0f0u: goto label_19b0f0;
        case 0x19b0f4u: goto label_19b0f4;
        case 0x19b0f8u: goto label_19b0f8;
        case 0x19b0fcu: goto label_19b0fc;
        case 0x19b100u: goto label_19b100;
        case 0x19b104u: goto label_19b104;
        case 0x19b108u: goto label_19b108;
        case 0x19b10cu: goto label_19b10c;
        case 0x19b110u: goto label_19b110;
        case 0x19b114u: goto label_19b114;
        case 0x19b118u: goto label_19b118;
        case 0x19b11cu: goto label_19b11c;
        case 0x19b120u: goto label_19b120;
        case 0x19b124u: goto label_19b124;
        case 0x19b128u: goto label_19b128;
        case 0x19b12cu: goto label_19b12c;
        case 0x19b130u: goto label_19b130;
        case 0x19b134u: goto label_19b134;
        case 0x19b138u: goto label_19b138;
        case 0x19b13cu: goto label_19b13c;
        case 0x19b140u: goto label_19b140;
        case 0x19b144u: goto label_19b144;
        case 0x19b148u: goto label_19b148;
        case 0x19b14cu: goto label_19b14c;
        case 0x19b150u: goto label_19b150;
        case 0x19b154u: goto label_19b154;
        case 0x19b158u: goto label_19b158;
        case 0x19b15cu: goto label_19b15c;
        case 0x19b160u: goto label_19b160;
        case 0x19b164u: goto label_19b164;
        case 0x19b168u: goto label_19b168;
        case 0x19b16cu: goto label_19b16c;
        case 0x19b170u: goto label_19b170;
        case 0x19b174u: goto label_19b174;
        case 0x19b178u: goto label_19b178;
        case 0x19b17cu: goto label_19b17c;
        case 0x19b180u: goto label_19b180;
        case 0x19b184u: goto label_19b184;
        case 0x19b188u: goto label_19b188;
        case 0x19b18cu: goto label_19b18c;
        case 0x19b190u: goto label_19b190;
        case 0x19b194u: goto label_19b194;
        case 0x19b198u: goto label_19b198;
        case 0x19b19cu: goto label_19b19c;
        case 0x19b1a0u: goto label_19b1a0;
        case 0x19b1a4u: goto label_19b1a4;
        case 0x19b1a8u: goto label_19b1a8;
        case 0x19b1acu: goto label_19b1ac;
        case 0x19b1b0u: goto label_19b1b0;
        case 0x19b1b4u: goto label_19b1b4;
        case 0x19b1b8u: goto label_19b1b8;
        case 0x19b1bcu: goto label_19b1bc;
        case 0x19b1c0u: goto label_19b1c0;
        case 0x19b1c4u: goto label_19b1c4;
        case 0x19b1c8u: goto label_19b1c8;
        case 0x19b1ccu: goto label_19b1cc;
        case 0x19b1d0u: goto label_19b1d0;
        case 0x19b1d4u: goto label_19b1d4;
        case 0x19b1d8u: goto label_19b1d8;
        case 0x19b1dcu: goto label_19b1dc;
        case 0x19b1e0u: goto label_19b1e0;
        case 0x19b1e4u: goto label_19b1e4;
        case 0x19b1e8u: goto label_19b1e8;
        case 0x19b1ecu: goto label_19b1ec;
        case 0x19b1f0u: goto label_19b1f0;
        case 0x19b1f4u: goto label_19b1f4;
        case 0x19b1f8u: goto label_19b1f8;
        case 0x19b1fcu: goto label_19b1fc;
        case 0x19b200u: goto label_19b200;
        case 0x19b204u: goto label_19b204;
        case 0x19b208u: goto label_19b208;
        case 0x19b20cu: goto label_19b20c;
        case 0x19b210u: goto label_19b210;
        case 0x19b214u: goto label_19b214;
        case 0x19b218u: goto label_19b218;
        case 0x19b21cu: goto label_19b21c;
        case 0x19b220u: goto label_19b220;
        case 0x19b224u: goto label_19b224;
        case 0x19b228u: goto label_19b228;
        case 0x19b22cu: goto label_19b22c;
        case 0x19b230u: goto label_19b230;
        case 0x19b234u: goto label_19b234;
        case 0x19b238u: goto label_19b238;
        case 0x19b23cu: goto label_19b23c;
        case 0x19b240u: goto label_19b240;
        case 0x19b244u: goto label_19b244;
        case 0x19b248u: goto label_19b248;
        case 0x19b24cu: goto label_19b24c;
        case 0x19b250u: goto label_19b250;
        case 0x19b254u: goto label_19b254;
        case 0x19b258u: goto label_19b258;
        case 0x19b25cu: goto label_19b25c;
        case 0x19b260u: goto label_19b260;
        case 0x19b264u: goto label_19b264;
        case 0x19b268u: goto label_19b268;
        case 0x19b26cu: goto label_19b26c;
        case 0x19b270u: goto label_19b270;
        case 0x19b274u: goto label_19b274;
        case 0x19b278u: goto label_19b278;
        case 0x19b27cu: goto label_19b27c;
        case 0x19b280u: goto label_19b280;
        case 0x19b284u: goto label_19b284;
        case 0x19b288u: goto label_19b288;
        case 0x19b28cu: goto label_19b28c;
        case 0x19b290u: goto label_19b290;
        case 0x19b294u: goto label_19b294;
        case 0x19b298u: goto label_19b298;
        case 0x19b29cu: goto label_19b29c;
        case 0x19b2a0u: goto label_19b2a0;
        case 0x19b2a4u: goto label_19b2a4;
        case 0x19b2a8u: goto label_19b2a8;
        case 0x19b2acu: goto label_19b2ac;
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2b4u: goto label_19b2b4;
        case 0x19b2b8u: goto label_19b2b8;
        case 0x19b2bcu: goto label_19b2bc;
        case 0x19b2c0u: goto label_19b2c0;
        case 0x19b2c4u: goto label_19b2c4;
        case 0x19b2c8u: goto label_19b2c8;
        case 0x19b2ccu: goto label_19b2cc;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2d4u: goto label_19b2d4;
        case 0x19b2d8u: goto label_19b2d8;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2e0u: goto label_19b2e0;
        case 0x19b2e4u: goto label_19b2e4;
        case 0x19b2e8u: goto label_19b2e8;
        case 0x19b2ecu: goto label_19b2ec;
        case 0x19b2f0u: goto label_19b2f0;
        case 0x19b2f4u: goto label_19b2f4;
        case 0x19b2f8u: goto label_19b2f8;
        case 0x19b2fcu: goto label_19b2fc;
        case 0x19b300u: goto label_19b300;
        case 0x19b304u: goto label_19b304;
        case 0x19b308u: goto label_19b308;
        case 0x19b30cu: goto label_19b30c;
        case 0x19b310u: goto label_19b310;
        case 0x19b314u: goto label_19b314;
        case 0x19b318u: goto label_19b318;
        case 0x19b31cu: goto label_19b31c;
        case 0x19b320u: goto label_19b320;
        case 0x19b324u: goto label_19b324;
        case 0x19b328u: goto label_19b328;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b330u: goto label_19b330;
        case 0x19b334u: goto label_19b334;
        case 0x19b338u: goto label_19b338;
        case 0x19b33cu: goto label_19b33c;
        case 0x19b340u: goto label_19b340;
        case 0x19b344u: goto label_19b344;
        case 0x19b348u: goto label_19b348;
        case 0x19b34cu: goto label_19b34c;
        case 0x19b350u: goto label_19b350;
        case 0x19b354u: goto label_19b354;
        case 0x19b358u: goto label_19b358;
        case 0x19b35cu: goto label_19b35c;
        case 0x19b360u: goto label_19b360;
        case 0x19b364u: goto label_19b364;
        case 0x19b368u: goto label_19b368;
        case 0x19b36cu: goto label_19b36c;
        case 0x19b370u: goto label_19b370;
        case 0x19b374u: goto label_19b374;
        case 0x19b378u: goto label_19b378;
        case 0x19b37cu: goto label_19b37c;
        case 0x19b380u: goto label_19b380;
        case 0x19b384u: goto label_19b384;
        case 0x19b388u: goto label_19b388;
        case 0x19b38cu: goto label_19b38c;
        case 0x19b390u: goto label_19b390;
        case 0x19b394u: goto label_19b394;
        case 0x19b398u: goto label_19b398;
        case 0x19b39cu: goto label_19b39c;
        case 0x19b3a0u: goto label_19b3a0;
        case 0x19b3a4u: goto label_19b3a4;
        case 0x19b3a8u: goto label_19b3a8;
        case 0x19b3acu: goto label_19b3ac;
        case 0x19b3b0u: goto label_19b3b0;
        case 0x19b3b4u: goto label_19b3b4;
        case 0x19b3b8u: goto label_19b3b8;
        case 0x19b3bcu: goto label_19b3bc;
        case 0x19b3c0u: goto label_19b3c0;
        case 0x19b3c4u: goto label_19b3c4;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b3ccu: goto label_19b3cc;
        case 0x19b3d0u: goto label_19b3d0;
        case 0x19b3d4u: goto label_19b3d4;
        case 0x19b3d8u: goto label_19b3d8;
        case 0x19b3dcu: goto label_19b3dc;
        case 0x19b3e0u: goto label_19b3e0;
        case 0x19b3e4u: goto label_19b3e4;
        case 0x19b3e8u: goto label_19b3e8;
        case 0x19b3ecu: goto label_19b3ec;
        case 0x19b3f0u: goto label_19b3f0;
        case 0x19b3f4u: goto label_19b3f4;
        case 0x19b3f8u: goto label_19b3f8;
        case 0x19b3fcu: goto label_19b3fc;
        case 0x19b400u: goto label_19b400;
        case 0x19b404u: goto label_19b404;
        case 0x19b408u: goto label_19b408;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b410u: goto label_19b410;
        case 0x19b414u: goto label_19b414;
        case 0x19b418u: goto label_19b418;
        case 0x19b41cu: goto label_19b41c;
        case 0x19b420u: goto label_19b420;
        case 0x19b424u: goto label_19b424;
        case 0x19b428u: goto label_19b428;
        case 0x19b42cu: goto label_19b42c;
        case 0x19b430u: goto label_19b430;
        case 0x19b434u: goto label_19b434;
        case 0x19b438u: goto label_19b438;
        case 0x19b43cu: goto label_19b43c;
        case 0x19b440u: goto label_19b440;
        case 0x19b444u: goto label_19b444;
        case 0x19b448u: goto label_19b448;
        case 0x19b44cu: goto label_19b44c;
        case 0x19b450u: goto label_19b450;
        case 0x19b454u: goto label_19b454;
        case 0x19b458u: goto label_19b458;
        case 0x19b45cu: goto label_19b45c;
        case 0x19b460u: goto label_19b460;
        case 0x19b464u: goto label_19b464;
        case 0x19b468u: goto label_19b468;
        case 0x19b46cu: goto label_19b46c;
        case 0x19b470u: goto label_19b470;
        case 0x19b474u: goto label_19b474;
        case 0x19b478u: goto label_19b478;
        case 0x19b47cu: goto label_19b47c;
        case 0x19b480u: goto label_19b480;
        case 0x19b484u: goto label_19b484;
        case 0x19b488u: goto label_19b488;
        case 0x19b48cu: goto label_19b48c;
        case 0x19b490u: goto label_19b490;
        case 0x19b494u: goto label_19b494;
        case 0x19b498u: goto label_19b498;
        case 0x19b49cu: goto label_19b49c;
        case 0x19b4a0u: goto label_19b4a0;
        case 0x19b4a4u: goto label_19b4a4;
        case 0x19b4a8u: goto label_19b4a8;
        case 0x19b4acu: goto label_19b4ac;
        case 0x19b4b0u: goto label_19b4b0;
        case 0x19b4b4u: goto label_19b4b4;
        case 0x19b4b8u: goto label_19b4b8;
        case 0x19b4bcu: goto label_19b4bc;
        case 0x19b4c0u: goto label_19b4c0;
        case 0x19b4c4u: goto label_19b4c4;
        case 0x19b4c8u: goto label_19b4c8;
        case 0x19b4ccu: goto label_19b4cc;
        case 0x19b4d0u: goto label_19b4d0;
        case 0x19b4d4u: goto label_19b4d4;
        case 0x19b4d8u: goto label_19b4d8;
        case 0x19b4dcu: goto label_19b4dc;
        case 0x19b4e0u: goto label_19b4e0;
        case 0x19b4e4u: goto label_19b4e4;
        case 0x19b4e8u: goto label_19b4e8;
        case 0x19b4ecu: goto label_19b4ec;
        case 0x19b4f0u: goto label_19b4f0;
        case 0x19b4f4u: goto label_19b4f4;
        case 0x19b4f8u: goto label_19b4f8;
        case 0x19b4fcu: goto label_19b4fc;
        case 0x19b500u: goto label_19b500;
        case 0x19b504u: goto label_19b504;
        case 0x19b508u: goto label_19b508;
        case 0x19b50cu: goto label_19b50c;
        case 0x19b510u: goto label_19b510;
        case 0x19b514u: goto label_19b514;
        case 0x19b518u: goto label_19b518;
        case 0x19b51cu: goto label_19b51c;
        case 0x19b520u: goto label_19b520;
        case 0x19b524u: goto label_19b524;
        case 0x19b528u: goto label_19b528;
        case 0x19b52cu: goto label_19b52c;
        case 0x19b530u: goto label_19b530;
        case 0x19b534u: goto label_19b534;
        case 0x19b538u: goto label_19b538;
        case 0x19b53cu: goto label_19b53c;
        case 0x19b540u: goto label_19b540;
        case 0x19b544u: goto label_19b544;
        case 0x19b548u: goto label_19b548;
        case 0x19b54cu: goto label_19b54c;
        case 0x19b550u: goto label_19b550;
        case 0x19b554u: goto label_19b554;
        case 0x19b558u: goto label_19b558;
        case 0x19b55cu: goto label_19b55c;
        case 0x19b560u: goto label_19b560;
        case 0x19b564u: goto label_19b564;
        case 0x19b568u: goto label_19b568;
        case 0x19b56cu: goto label_19b56c;
        case 0x19b570u: goto label_19b570;
        case 0x19b574u: goto label_19b574;
        case 0x19b578u: goto label_19b578;
        case 0x19b57cu: goto label_19b57c;
        case 0x19b580u: goto label_19b580;
        case 0x19b584u: goto label_19b584;
        case 0x19b588u: goto label_19b588;
        case 0x19b58cu: goto label_19b58c;
        case 0x19b590u: goto label_19b590;
        case 0x19b594u: goto label_19b594;
        case 0x19b598u: goto label_19b598;
        case 0x19b59cu: goto label_19b59c;
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5a4u: goto label_19b5a4;
        case 0x19b5a8u: goto label_19b5a8;
        case 0x19b5acu: goto label_19b5ac;
        case 0x19b5b0u: goto label_19b5b0;
        case 0x19b5b4u: goto label_19b5b4;
        case 0x19b5b8u: goto label_19b5b8;
        case 0x19b5bcu: goto label_19b5bc;
        case 0x19b5c0u: goto label_19b5c0;
        case 0x19b5c4u: goto label_19b5c4;
        case 0x19b5c8u: goto label_19b5c8;
        case 0x19b5ccu: goto label_19b5cc;
        case 0x19b5d0u: goto label_19b5d0;
        case 0x19b5d4u: goto label_19b5d4;
        case 0x19b5d8u: goto label_19b5d8;
        case 0x19b5dcu: goto label_19b5dc;
        case 0x19b5e0u: goto label_19b5e0;
        case 0x19b5e4u: goto label_19b5e4;
        case 0x19b5e8u: goto label_19b5e8;
        case 0x19b5ecu: goto label_19b5ec;
        case 0x19b5f0u: goto label_19b5f0;
        case 0x19b5f4u: goto label_19b5f4;
        case 0x19b5f8u: goto label_19b5f8;
        case 0x19b5fcu: goto label_19b5fc;
        case 0x19b600u: goto label_19b600;
        case 0x19b604u: goto label_19b604;
        case 0x19b608u: goto label_19b608;
        case 0x19b60cu: goto label_19b60c;
        case 0x19b610u: goto label_19b610;
        case 0x19b614u: goto label_19b614;
        case 0x19b618u: goto label_19b618;
        case 0x19b61cu: goto label_19b61c;
        case 0x19b620u: goto label_19b620;
        case 0x19b624u: goto label_19b624;
        case 0x19b628u: goto label_19b628;
        case 0x19b62cu: goto label_19b62c;
        default: return;
    }

label_19ae60:
    // 0x19ae60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ae64:
    // 0x19ae64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19ae68:
    // 0x19ae68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ae6c:
    // 0x19ae6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19ae70:
    if (ctx->pc == 0x19AE70u) {
        ctx->pc = 0x19AE74u;
        goto label_19ae74;
    }
    ctx->pc = 0x19AE6Cu;
    {
        const bool branch_taken_0x19ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae6c) {
            ctx->pc = 0x19AE98u;
            goto label_19ae98;
        }
    }
    ctx->pc = 0x19AE74u;
label_19ae74:
    // 0x19ae74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19ae78:
    // 0x19ae78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ae78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19ae7c:
    // 0x19ae7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ae7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ae80:
    // 0x19ae80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19ae84:
    // 0x19ae84: 0x0  nop
    ctx->pc = 0x19ae84u;
    // NOP
label_19ae88:
    // 0x19ae88: 0x0  nop
    ctx->pc = 0x19ae88u;
    // NOP
label_19ae8c:
    // 0x19ae8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ae90:
    if (ctx->pc == 0x19AE90u) {
        ctx->pc = 0x19AE94u;
        goto label_19ae94;
    }
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae78;
        }
    }
    ctx->pc = 0x19AE94u;
label_19ae94:
    // 0x19ae94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ae98:
    // 0x19ae98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ae9c:
    // 0x19ae9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19aea0:
    // 0x19aea0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19aea4:
    if (ctx->pc == 0x19AEA4u) {
        ctx->pc = 0x19AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA0u;
        // 0x19aea4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEA8u;
        goto label_19aea8;
    }
    ctx->pc = 0x19AEA0u;
    {
        const bool branch_taken_0x19aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA0u;
        // 0x19aea4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea0) {
            ctx->pc = 0x19AE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19ae50; return; }
        }
    }
    ctx->pc = 0x19AEA8u;
label_19aea8:
    // 0x19aea8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19aeac:
    // 0x19aeac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19aeb0:
    // 0x19aeb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19aeb4:
    // 0x19aeb4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19aeb8:
    if (ctx->pc == 0x19AEB8u) {
        ctx->pc = 0x19AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEB4u;
        // 0x19aeb8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEBCu;
        goto label_19aebc;
    }
    ctx->pc = 0x19AEB4u;
    {
        const bool branch_taken_0x19aeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aeb4) {
            ctx->pc = 0x19AEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AEB4u;
            // 0x19aeb8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AEBCu;
label_19aebc:
    // 0x19aebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aec0:
    // 0x19aec0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19aec4:
    // 0x19aec4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19aec8:
    // 0x19aec8: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_19aecc:
    // 0x19aecc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19aed0:
    // 0x19aed0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19aed4:
    // 0x19aed4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_19aed8:
    // 0x19aed8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19aed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19aedc:
    // 0x19aedc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19aee0:
    // 0x19aee0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19aee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19aee4:
    // 0x19aee4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_19aee8:
    // 0x19aee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19aee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19aeec:
    // 0x19aeec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19aef0:
    // 0x19aef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19aef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19aef4:
    // 0x19aef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19aef8:
    // 0x19aef8: 0x3e00008  jr          $ra
label_19aefc:
    if (ctx->pc == 0x19AEFCu) {
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF00u;
        goto label_19af00;
    }
    ctx->pc = 0x19AEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF00u;
label_19af00:
    // 0x19af00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19af00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19af04:
    // 0x19af04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19af08:
    // 0x19af08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19af0c:
    // 0x19af0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19af0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19af10:
    // 0x19af10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19af10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19af14:
    // 0x19af14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19af18:
    // 0x19af18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19af18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19af1c:
    // 0x19af1c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_19af20:
    if (ctx->pc == 0x19AF20u) {
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF1Cu;
        // 0x19af20: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF24u;
        goto label_19af24;
    }
    ctx->pc = 0x19AF1Cu;
    {
        const bool branch_taken_0x19af1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF1Cu;
        // 0x19af20: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af1c) {
            ctx->pc = 0x19AF34u;
            goto label_19af34;
        }
    }
    ctx->pc = 0x19AF24u;
label_19af24:
    // 0x19af24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af28:
    // 0x19af28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_19af2c:
    // 0x19af2c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19af30:
    if (ctx->pc == 0x19AF30u) {
        ctx->pc = 0x19AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF2Cu;
        // 0x19af30: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF34u;
        goto label_19af34;
    }
    ctx->pc = 0x19AF2Cu;
    {
        const bool branch_taken_0x19af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF2Cu;
        // 0x19af30: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af2c) {
            ctx->pc = 0x19AFACu;
            goto label_19afac;
        }
    }
    ctx->pc = 0x19AF34u;
label_19af34:
    // 0x19af34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af38:
    // 0x19af38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_19af3c:
    // 0x19af3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19af40:
    // 0x19af40: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_19af44:
    if (ctx->pc == 0x19AF44u) {
        ctx->pc = 0x19AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF40u;
        // 0x19af44: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF48u;
        goto label_19af48;
    }
    ctx->pc = 0x19AF40u;
    {
        const bool branch_taken_0x19af40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF40u;
        // 0x19af44: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af40) {
            ctx->pc = 0x19AFA8u;
            goto label_19afa8;
        }
    }
    ctx->pc = 0x19AF48u;
label_19af48:
    // 0x19af48: 0x3c12002d  lui         $s2, 0x2D
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
label_19af4c:
    // 0x19af4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19af4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19af50:
    // 0x19af50: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
label_19af54:
    if (ctx->pc == 0x19AF54u) {
        ctx->pc = 0x19AF58u;
        goto label_19af58;
    }
    ctx->pc = 0x19AF50u;
    {
        const bool branch_taken_0x19af50 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x19af50) {
            ctx->pc = 0x19AF98u;
            goto label_19af98;
        }
    }
    ctx->pc = 0x19AF58u;
label_19af58:
    // 0x19af58: 0xc08ee2e  jal         func_23B8B8
label_19af5c:
    if (ctx->pc == 0x19AF5Cu) {
        ctx->pc = 0x19AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF58u;
        // 0x19af5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF60u;
        goto label_19af60;
    }
    ctx->pc = 0x19AF58u;
    SET_GPR_U32(ctx, 31, 0x19AF60u);
    ctx->pc = 0x19AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF58u;
    // 0x19af5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19AF60u;
label_19af60:
    // 0x19af60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af64:
    // 0x19af64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19af68:
    // 0x19af68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19af6c:
    // 0x19af6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19af70:
    if (ctx->pc == 0x19AF70u) {
        ctx->pc = 0x19AF74u;
        goto label_19af74;
    }
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19AF98u;
            goto label_19af98;
        }
    }
    ctx->pc = 0x19AF74u;
label_19af74:
    // 0x19af74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19af78:
    // 0x19af78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19af7c:
    // 0x19af7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19af80:
    // 0x19af80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19af84:
    // 0x19af84: 0x0  nop
    ctx->pc = 0x19af84u;
    // NOP
label_19af88:
    // 0x19af88: 0x0  nop
    ctx->pc = 0x19af88u;
    // NOP
label_19af8c:
    // 0x19af8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19af90:
    if (ctx->pc == 0x19AF90u) {
        ctx->pc = 0x19AF94u;
        goto label_19af94;
    }
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af78;
        }
    }
    ctx->pc = 0x19AF94u;
label_19af94:
    // 0x19af94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19af98:
    // 0x19af98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af9c:
    // 0x19af9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19afa0:
    // 0x19afa0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19afa4:
    if (ctx->pc == 0x19AFA4u) {
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFA8u;
        goto label_19afa8;
    }
    ctx->pc = 0x19AFA0u;
    {
        const bool branch_taken_0x19afa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa0) {
            ctx->pc = 0x19AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af50;
        }
    }
    ctx->pc = 0x19AFA8u;
label_19afa8:
    // 0x19afa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19afa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19afac:
    // 0x19afac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19afb0:
    // 0x19afb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19afb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19afb4:
    // 0x19afb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19afb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19afb8:
    // 0x19afb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19afb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19afbc:
    // 0x19afbc: 0x3e00008  jr          $ra
label_19afc0:
    if (ctx->pc == 0x19AFC0u) {
        ctx->pc = 0x19AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFBCu;
        // 0x19afc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFC4u;
        goto label_19afc4;
    }
    ctx->pc = 0x19AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFBCu;
        // 0x19afc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AFC4u;
label_19afc4:
    // 0x19afc4: 0x0  nop
    ctx->pc = 0x19afc4u;
    // NOP
label_19afc8:
    // 0x19afc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19afcc:
    // 0x19afcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19afd0:
    // 0x19afd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19afd4:
    // 0x19afd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19afd8:
    // 0x19afd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19afd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19afdc:
    // 0x19afdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19afe0:
    // 0x19afe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19afe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19afe4:
    // 0x19afe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19afe8:
    // 0x19afe8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19afe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19afec:
    // 0x19afec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_19aff0:
    if (ctx->pc == 0x19AFF0u) {
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFF4u;
        goto label_19aff4;
    }
    ctx->pc = 0x19AFECu;
    {
        const bool branch_taken_0x19afec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afec) {
            ctx->pc = 0x19B000u;
            goto label_19b000;
        }
    }
    ctx->pc = 0x19AFF4u;
label_19aff4:
    // 0x19aff4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19aff8:
    // 0x19aff8: 0x10000020  b           . + 4 + (0x20 << 2)
label_19affc:
    if (ctx->pc == 0x19AFFCu) {
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B000u;
        goto label_19b000;
    }
    ctx->pc = 0x19AFF8u;
    {
        const bool branch_taken_0x19aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff8) {
            ctx->pc = 0x19B07Cu;
            goto label_19b07c;
        }
    }
    ctx->pc = 0x19B000u;
label_19b000:
    // 0x19b000: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19b004:
    // 0x19b004: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19b004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_19b008:
    // 0x19b008: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x19b008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_19b00c:
    // 0x19b00c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_19b010:
    if (ctx->pc == 0x19B010u) {
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B014u;
        goto label_19b014;
    }
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19B078u;
            goto label_19b078;
        }
    }
    ctx->pc = 0x19B014u;
label_19b014:
    // 0x19b014: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
label_19b018:
    // 0x19b018: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19b01c:
    // 0x19b01c: 0x0  nop
    ctx->pc = 0x19b01cu;
    // NOP
label_19b020:
    // 0x19b020: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
label_19b024:
    if (ctx->pc == 0x19B024u) {
        ctx->pc = 0x19B028u;
        goto label_19b028;
    }
    ctx->pc = 0x19B020u;
    {
        const bool branch_taken_0x19b020 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x19b020) {
            ctx->pc = 0x19B068u;
            goto label_19b068;
        }
    }
    ctx->pc = 0x19B028u;
label_19b028:
    // 0x19b028: 0xc08ee2e  jal         func_23B8B8
label_19b02c:
    if (ctx->pc == 0x19B02Cu) {
        ctx->pc = 0x19B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B028u;
        // 0x19b02c: 0x26649f90  addiu       $a0, $s3, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B030u;
        goto label_19b030;
    }
    ctx->pc = 0x19B028u;
    SET_GPR_U32(ctx, 31, 0x19B030u);
    ctx->pc = 0x19B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B028u;
    // 0x19b02c: 0x26649f90  addiu       $a0, $s3, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19B030u;
label_19b030:
    // 0x19b030: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19b034:
    // 0x19b034: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19b038:
    // 0x19b038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19b03c:
    // 0x19b03c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19b040:
    if (ctx->pc == 0x19B040u) {
        ctx->pc = 0x19B044u;
        goto label_19b044;
    }
    ctx->pc = 0x19B03Cu;
    {
        const bool branch_taken_0x19b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b03c) {
            ctx->pc = 0x19B068u;
            goto label_19b068;
        }
    }
    ctx->pc = 0x19B044u;
label_19b044:
    // 0x19b044: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19b048:
    // 0x19b048: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19b048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19b04c:
    // 0x19b04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b050:
    // 0x19b050: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19b054:
    // 0x19b054: 0x0  nop
    ctx->pc = 0x19b054u;
    // NOP
label_19b058:
    // 0x19b058: 0x0  nop
    ctx->pc = 0x19b058u;
    // NOP
label_19b05c:
    // 0x19b05c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19b060:
    if (ctx->pc == 0x19B060u) {
        ctx->pc = 0x19B064u;
        goto label_19b064;
    }
    ctx->pc = 0x19B05Cu;
    {
        const bool branch_taken_0x19b05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b05c) {
            ctx->pc = 0x19B048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b048;
        }
    }
    ctx->pc = 0x19B064u;
label_19b064:
    // 0x19b064: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19b064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19b068:
    // 0x19b068: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19b06c:
    // 0x19b06c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x19b06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_19b070:
    // 0x19b070: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19b074:
    if (ctx->pc == 0x19B074u) {
        ctx->pc = 0x19B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B070u;
        // 0x19b074: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B078u;
        goto label_19b078;
    }
    ctx->pc = 0x19B070u;
    {
        const bool branch_taken_0x19b070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B070u;
        // 0x19b074: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b070) {
            ctx->pc = 0x19B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b020;
        }
    }
    ctx->pc = 0x19B078u;
label_19b078:
    // 0x19b078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b07c:
    // 0x19b07c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19b080:
    // 0x19b080: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19b080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19b084:
    // 0x19b084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19b084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b088:
    // 0x19b088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b08c:
    // 0x19b08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b090:
    // 0x19b090: 0x3e00008  jr          $ra
label_19b094:
    if (ctx->pc == 0x19B094u) {
        ctx->pc = 0x19B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B090u;
        // 0x19b094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B098u;
        goto label_19b098;
    }
    ctx->pc = 0x19B090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B090u;
        // 0x19b094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B098u;
label_19b098:
    // 0x19b098: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19b09c:
    // 0x19b09c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19b09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b0a0:
    // 0x19b0a0: 0x3442f520  ori         $v0, $v0, 0xF520
    ctx->pc = 0x19b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
label_19b0a4:
    // 0x19b0a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b0a8:
    // 0x19b0a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19b0ac:
    if (ctx->pc == 0x19B0ACu) {
        ctx->pc = 0x19B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0A8u;
        // 0x19b0ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0B0u;
        goto label_19b0b0;
    }
    ctx->pc = 0x19B0A8u;
    {
        const bool branch_taken_0x19b0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0A8u;
        // 0x19b0ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0a8) {
            ctx->pc = 0x19B0BCu;
            goto label_19b0bc;
        }
    }
    ctx->pc = 0x19B0B0u;
label_19b0b0:
    // 0x19b0b0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x19b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_19b0b4:
    // 0x19b0b4: 0x3442f590  ori         $v0, $v0, 0xF590
    ctx->pc = 0x19b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
label_19b0b8:
    // 0x19b0b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19b0bc:
    // 0x19b0bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b0c0:
    // 0x19b0c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_19b0c4:
    // 0x19b0c4: 0x3463feff  ori         $v1, $v1, 0xFEFF
    ctx->pc = 0x19b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65279);
label_19b0c8:
    // 0x19b0c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19b0cc:
    // 0x19b0cc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x19b0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19b0d0:
    // 0x19b0d0: 0x3484f590  ori         $a0, $a0, 0xF590
    ctx->pc = 0x19b0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62864);
label_19b0d4:
    // 0x19b0d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_19b0d8:
    // 0x19b0d8: 0x3e00008  jr          $ra
label_19b0dc:
    if (ctx->pc == 0x19B0DCu) {
        ctx->pc = 0x19B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0D8u;
        // 0x19b0dc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0E0u;
        goto label_19b0e0;
    }
    ctx->pc = 0x19B0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0D8u;
        // 0x19b0dc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B0E0u;
label_19b0e0:
    // 0x19b0e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b0e4:
    // 0x19b0e4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x19b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_19b0e8:
    // 0x19b0e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_19b0ec:
    // 0x19b0ec: 0x3e00008  jr          $ra
label_19b0f0:
    if (ctx->pc == 0x19B0F0u) {
        ctx->pc = 0x19B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0ECu;
        // 0x19b0f0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0F4u;
        goto label_19b0f4;
    }
    ctx->pc = 0x19B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0ECu;
        // 0x19b0f0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B0F4u;
label_19b0f4:
    // 0x19b0f4: 0x0  nop
    ctx->pc = 0x19b0f4u;
    // NOP
label_19b0f8:
    // 0x19b0f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x19b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_19b0fc:
    // 0x19b0fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x19b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_19b100:
    // 0x19b100: 0x3e00008  jr          $ra
label_19b104:
    if (ctx->pc == 0x19B104u) {
        ctx->pc = 0x19B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B100u;
        // 0x19b104: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B108u;
        goto label_19b108;
    }
    ctx->pc = 0x19B100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B100u;
        // 0x19b104: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B108u;
label_19b108:
    // 0x19b108: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19b10c:
    // 0x19b10c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x19b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_19b110:
    // 0x19b110: 0x3e00008  jr          $ra
label_19b114:
    if (ctx->pc == 0x19B114u) {
        ctx->pc = 0x19B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B110u;
        // 0x19b114: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B118u;
        goto label_19b118;
    }
    ctx->pc = 0x19B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B110u;
        // 0x19b114: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B118u;
label_19b118:
    // 0x19b118: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19b118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b11c:
    // 0x19b11c: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x19b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
label_19b120:
    // 0x19b120: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19b124:
    if (ctx->pc == 0x19B124u) {
        ctx->pc = 0x19B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B120u;
        // 0x19b124: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B128u;
        goto label_19b128;
    }
    ctx->pc = 0x19B120u;
    {
        const bool branch_taken_0x19b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B120u;
        // 0x19b124: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b120) {
            ctx->pc = 0x19B144u;
            goto label_19b144;
        }
    }
    ctx->pc = 0x19B128u;
label_19b128:
    // 0x19b128: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19b128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19b12c:
    // 0x19b12c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19b130:
    // 0x19b130: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x19b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
label_19b134:
    // 0x19b134: 0x0  nop
    ctx->pc = 0x19b134u;
    // NOP
label_19b138:
    // 0x19b138: 0x0  nop
    ctx->pc = 0x19b138u;
    // NOP
label_19b13c:
    // 0x19b13c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19b140:
    if (ctx->pc == 0x19B140u) {
        ctx->pc = 0x19B144u;
        goto label_19b144;
    }
    ctx->pc = 0x19B13Cu;
    {
        const bool branch_taken_0x19b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b13c) {
            ctx->pc = 0x19B128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b128;
        }
    }
    ctx->pc = 0x19B144u;
label_19b144:
    // 0x19b144: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_19b148:
    if (ctx->pc == 0x19B148u) {
        ctx->pc = 0x19B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B144u;
        // 0x19b148: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B14Cu;
        goto label_19b14c;
    }
    ctx->pc = 0x19B144u;
    {
        const bool branch_taken_0x19b144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B144u;
        // 0x19b148: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b144) {
            ctx->pc = 0x19B160u;
            goto label_19b160;
        }
    }
    ctx->pc = 0x19B14Cu;
label_19b14c:
    // 0x19b14c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19b150:
    // 0x19b150: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_19b154:
    // 0x19b154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19b158:
    // 0x19b158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19b15c:
    // 0x19b15c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x19b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_19b160:
    // 0x19b160: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x19b160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_19b164:
    // 0x19b164: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19b164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b168:
    // 0x19b168: 0x3e00008  jr          $ra
label_19b16c:
    if (ctx->pc == 0x19B16Cu) {
        ctx->pc = 0x19B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B168u;
        // 0x19b16c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B170u;
        goto label_19b170;
    }
    ctx->pc = 0x19B168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B168u;
        // 0x19b16c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B170u;
label_19b170:
    // 0x19b170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19b174:
    // 0x19b174: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19b178:
    // 0x19b178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b17c:
    // 0x19b17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19b180:
    // 0x19b180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19b184:
    // 0x19b184: 0xc066c46  jal         func_19B118
label_19b188:
    if (ctx->pc == 0x19B188u) {
        ctx->pc = 0x19B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B184u;
        // 0x19b188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B18Cu;
        goto label_19b18c;
    }
    ctx->pc = 0x19B184u;
    SET_GPR_U32(ctx, 31, 0x19B18Cu);
    ctx->pc = 0x19B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B184u;
    // 0x19b188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    goto label_19b118;
    ctx->pc = 0x19B18Cu;
label_19b18c:
    // 0x19b18c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19b190:
    // 0x19b190: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19b194:
    // 0x19b194: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_19b198:
    // 0x19b198: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x19b198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_19b19c:
    // 0x19b19c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x19b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_19b1a0:
    // 0x19b1a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19b1a4:
    // 0x19b1a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19b1a8:
    // 0x19b1a8: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19b1ac:
    // 0x19b1ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b1b0:
    // 0x19b1b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19b1b4:
    // 0x19b1b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b1b8:
    // 0x19b1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b1bc:
    // 0x19b1bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_19b1c0:
    // 0x19b1c0: 0x3e00008  jr          $ra
label_19b1c4:
    if (ctx->pc == 0x19B1C4u) {
        ctx->pc = 0x19B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1C0u;
        // 0x19b1c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1C8u;
        goto label_19b1c8;
    }
    ctx->pc = 0x19B1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1C0u;
        // 0x19b1c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B1C8u;
label_19b1c8:
    // 0x19b1c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19b1cc:
    // 0x19b1cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19b1d0:
    // 0x19b1d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19b1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b1d4:
    // 0x19b1d4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_19b1d8:
    // 0x19b1d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19b1dc:
    // 0x19b1dc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x19b1dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19b1e0:
    // 0x19b1e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19b1e4:
    // 0x19b1e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x19b1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19b1e8:
    // 0x19b1e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19b1ec:
    // 0x19b1ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b1f0:
    // 0x19b1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19b1f4:
    // 0x19b1f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19b1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19b1f8:
    // 0x19b1f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_19b1fc:
    // 0x19b1fc: 0xc066c46  jal         func_19B118
label_19b200:
    if (ctx->pc == 0x19B200u) {
        ctx->pc = 0x19B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1FCu;
        // 0x19b200: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B204u;
        goto label_19b204;
    }
    ctx->pc = 0x19B1FCu;
    SET_GPR_U32(ctx, 31, 0x19B204u);
    ctx->pc = 0x19B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1FCu;
    // 0x19b200: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    goto label_19b118;
    ctx->pc = 0x19B204u;
label_19b204:
    // 0x19b204: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x19b204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_19b208:
    // 0x19b208: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19b20c:
    // 0x19b20c: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x19b20cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_19b210:
    // 0x19b210: 0x3c039fff  lui         $v1, 0x9FFF
    ctx->pc = 0x19b210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40959 << 16));
label_19b214:
    // 0x19b214: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x19b214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_19b218:
    // 0x19b218: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19b218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19b21c:
    // 0x19b21c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x19b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_19b220:
    // 0x19b220: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x19b220u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_19b224:
    // 0x19b224: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19b228:
    // 0x19b228: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19b228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19b22c:
    // 0x19b22c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x19b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19b230:
    // 0x19b230: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19b230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_19b234:
    // 0x19b234: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19b234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_19b238:
    // 0x19b238: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x19b238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
label_19b23c:
    // 0x19b23c: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x19b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
label_19b240:
    // 0x19b240: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19b240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19b244:
    // 0x19b244: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19b244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19b248:
    // 0x19b248: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19b248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19b24c:
    // 0x19b24c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19b24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b250:
    // 0x19b250: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b254:
    // 0x19b254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b258:
    // 0x19b258: 0x3e00008  jr          $ra
label_19b25c:
    if (ctx->pc == 0x19B25Cu) {
        ctx->pc = 0x19B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B258u;
        // 0x19b25c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B260u;
        goto label_19b260;
    }
    ctx->pc = 0x19B258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B258u;
        // 0x19b25c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B260u;
label_19b260:
    // 0x19b260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19b264:
    // 0x19b264: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19b268:
    // 0x19b268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b26c:
    // 0x19b26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19b270:
    // 0x19b270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19b274:
    // 0x19b274: 0xc066c46  jal         func_19B118
label_19b278:
    if (ctx->pc == 0x19B278u) {
        ctx->pc = 0x19B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B274u;
        // 0x19b278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B27Cu;
        goto label_19b27c;
    }
    ctx->pc = 0x19B274u;
    SET_GPR_U32(ctx, 31, 0x19B27Cu);
    ctx->pc = 0x19B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B274u;
    // 0x19b278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    goto label_19b118;
    ctx->pc = 0x19B27Cu;
label_19b27c:
    // 0x19b27c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19b280:
    // 0x19b280: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x19b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_19b284:
    // 0x19b284: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x19b284u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_19b288:
    // 0x19b288: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x19b288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_19b28c:
    // 0x19b28c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x19b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_19b290:
    // 0x19b290: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19b294:
    // 0x19b294: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19b294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19b298:
    // 0x19b298: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19b29c:
    // 0x19b29c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b2a0:
    // 0x19b2a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19b2a4:
    // 0x19b2a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b2a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b2a8:
    // 0x19b2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b2ac:
    // 0x19b2ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_19b2b0:
    // 0x19b2b0: 0x3e00008  jr          $ra
label_19b2b4:
    if (ctx->pc == 0x19B2B4u) {
        ctx->pc = 0x19B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B0u;
        // 0x19b2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2B8u;
        goto label_19b2b8;
    }
    ctx->pc = 0x19B2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B0u;
        // 0x19b2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B2B8u;
label_19b2b8:
    // 0x19b2b8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x19b2b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b2bc:
    // 0x19b2bc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_19b2c0:
    // 0x19b2c0: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_19b2c4:
    // 0x19b2c4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x19b2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_19b2c8:
    // 0x19b2c8: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x19b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_19b2cc:
    // 0x19b2cc: 0x62082  srl         $a0, $a2, 2
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_19b2d0:
    // 0x19b2d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19b2d4:
    // 0x19b2d4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x19b2d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_19b2d8:
    // 0x19b2d8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_19b2dc:
    // 0x19b2dc: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_19b2e0:
    // 0x19b2e0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x19b2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_19b2e4:
    // 0x19b2e4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x19b2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_19b2e8:
    // 0x19b2e8: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x19b2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_19b2ec:
    // 0x19b2ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19b2f0:
    // 0x19b2f0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_19b2f4:
    // 0x19b2f4: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x19b2f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19b2f8:
    // 0x19b2f8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x19b2f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19b2fc:
    // 0x19b2fc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x19b2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_19b300:
    // 0x19b300: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x19b300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_19b304:
    // 0x19b304: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19b308:
    // 0x19b308: 0x25250004  addiu       $a1, $t1, 0x4
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_19b30c:
    // 0x19b30c: 0xe7580b  movn        $t3, $a3, $a3
    ctx->pc = 0x19b30cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 7));
label_19b310:
    // 0x19b310: 0x108600b  movn        $t4, $t0, $t0
    ctx->pc = 0x19b310u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 8));
label_19b314:
    // 0x19b314: 0x445018  mult        $t2, $v0, $a0
    ctx->pc = 0x19b314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_19b318:
    // 0x19b318: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x19b318u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_19b31c:
    // 0x19b31c: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x19b31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_19b320:
    // 0x19b320: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x19b320u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
label_19b324:
    // 0x19b324: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19b328:
    if (ctx->pc == 0x19B328u) {
        ctx->pc = 0x19B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B324u;
        // 0x19b328: 0xada9000c  sw          $t1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B32Cu;
        goto label_19b32c;
    }
    ctx->pc = 0x19B324u;
    {
        const bool branch_taken_0x19b324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B324u;
        // 0x19b328: 0xada9000c  sw          $t1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b324) {
            ctx->pc = 0x19B334u;
            goto label_19b334;
        }
    }
    ctx->pc = 0x19B32Cu;
label_19b32c:
    // 0x19b32c: 0x10000003  b           . + 4 + (0x3 << 2)
label_19b330:
    if (ctx->pc == 0x19B330u) {
        ctx->pc = 0x19B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B32Cu;
        // 0x19b330: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B334u;
        goto label_19b334;
    }
    ctx->pc = 0x19B32Cu;
    {
        const bool branch_taken_0x19b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B32Cu;
        // 0x19b330: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b32c) {
            ctx->pc = 0x19B33Cu;
            goto label_19b33c;
        }
    }
    ctx->pc = 0x19B334u;
label_19b334:
    // 0x19b334: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x19b334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_19b338:
    // 0x19b338: 0xc1400  sll         $v0, $t4, 16
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_19b33c:
    // 0x19b33c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x19b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_19b340:
    // 0x19b340: 0x3e00008  jr          $ra
label_19b344:
    if (ctx->pc == 0x19B344u) {
        ctx->pc = 0x19B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B340u;
        // 0x19b344: 0xada20010  sw          $v0, 0x10($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B348u;
        goto label_19b348;
    }
    ctx->pc = 0x19B340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B340u;
        // 0x19b344: 0xada20010  sw          $v0, 0x10($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B348u;
label_19b348:
    // 0x19b348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b34c:
    // 0x19b34c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_19b350:
    // 0x19b350: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19b354:
    // 0x19b354: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_19b358:
    // 0x19b358: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19b35c:
    // 0x19b35c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x19b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19b360:
    // 0x19b360: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x19b360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_19b364:
    // 0x19b364: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x19b364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_19b368:
    // 0x19b368: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19b368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_19b36c:
    // 0x19b36c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19b36cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19b370:
    // 0x19b370: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19b374:
    // 0x19b374: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_19b378:
    if (ctx->pc == 0x19B378u) {
        ctx->pc = 0x19B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B374u;
        // 0x19b378: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B37Cu;
        goto label_19b37c;
    }
    ctx->pc = 0x19B374u;
    {
        const bool branch_taken_0x19b374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b374) {
            ctx->pc = 0x19B378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B374u;
            // 0x19b378: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B37Cu;
            goto label_19b37c;
        }
    }
    ctx->pc = 0x19B37Cu;
label_19b37c:
    // 0x19b37c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19b380:
    // 0x19b380: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_19b384:
    // 0x19b384: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x19b384u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19b388:
    // 0x19b388: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x19b388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_19b38c:
    // 0x19b38c: 0x1012  mflo        $v0
    ctx->pc = 0x19b38cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_19b390:
    // 0x19b390: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x19b390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_19b394:
    // 0x19b394: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19b398:
    // 0x19b398: 0x3e00008  jr          $ra
label_19b39c:
    if (ctx->pc == 0x19B39Cu) {
        ctx->pc = 0x19B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B398u;
        // 0x19b39c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3A0u;
        goto label_19b3a0;
    }
    ctx->pc = 0x19B398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B398u;
        // 0x19b39c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B3A0u;
label_19b3a0:
    // 0x19b3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19b3a4:
    // 0x19b3a4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19b3a8:
    // 0x19b3a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19b3ac:
    // 0x19b3ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19b3b0:
    // 0x19b3b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b3b4:
    // 0x19b3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b3b8:
    // 0x19b3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19b3bc:
    // 0x19b3bc: 0xc066d10  jal         func_19B440
label_19b3c0:
    if (ctx->pc == 0x19B3C0u) {
        ctx->pc = 0x19B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3BCu;
        // 0x19b3c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3C4u;
        goto label_19b3c4;
    }
    ctx->pc = 0x19B3BCu;
    SET_GPR_U32(ctx, 31, 0x19B3C4u);
    ctx->pc = 0x19B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3BCu;
    // 0x19b3c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    goto label_19b440;
    ctx->pc = 0x19B3C4u;
label_19b3c4:
    // 0x19b3c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b3c8:
    // 0x19b3c8: 0x3c02d000  lui         $v0, 0xD000
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53248 << 16));
label_19b3cc:
    // 0x19b3cc: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x19b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_19b3d0:
    // 0x19b3d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b3d4:
    // 0x19b3d4: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19b3d8:
    // 0x19b3d8: 0x51200b  movn        $a0, $v0, $s1
    ctx->pc = 0x19b3d8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_19b3dc:
    // 0x19b3dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19b3e0:
    // 0x19b3e0: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x19b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
label_19b3e4:
    // 0x19b3e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19b3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b3e8:
    // 0x19b3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b3ec:
    // 0x19b3ec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x19b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_19b3f0:
    // 0x19b3f0: 0x3e00008  jr          $ra
label_19b3f4:
    if (ctx->pc == 0x19B3F4u) {
        ctx->pc = 0x19B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3F0u;
        // 0x19b3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3F8u;
        goto label_19b3f8;
    }
    ctx->pc = 0x19B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3F0u;
        // 0x19b3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B3F8u;
label_19b3f8:
    // 0x19b3f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b3fc:
    // 0x19b3fc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19b400:
    // 0x19b400: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x19b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_19b404:
    // 0x19b404: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x19b404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_19b408:
    // 0x19b408: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19b408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19b40c:
    // 0x19b40c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b410:
    // 0x19b410: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x19b410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_19b414:
    // 0x19b414: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_19b418:
    // 0x19b418: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19b41c:
    // 0x19b41c: 0x3e00008  jr          $ra
label_19b420:
    if (ctx->pc == 0x19B420u) {
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B424u;
        goto label_19b424;
    }
    ctx->pc = 0x19B41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B424u;
label_19b424:
    // 0x19b424: 0x0  nop
    ctx->pc = 0x19b424u;
    // NOP
label_19b428:
    // 0x19b428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b42c:
    // 0x19b42c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19b430:
    // 0x19b430: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19b434:
    // 0x19b434: 0x3e00008  jr          $ra
label_19b438:
    if (ctx->pc == 0x19B438u) {
        ctx->pc = 0x19B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B434u;
        // 0x19b438: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B43Cu;
        goto label_19b43c;
    }
    ctx->pc = 0x19B434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B434u;
        // 0x19b438: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B43Cu;
label_19b43c:
    // 0x19b43c: 0x0  nop
    ctx->pc = 0x19b43cu;
    // NOP
label_19b440:
    // 0x19b440: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_19b444:
    // 0x19b444: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19b448:
    // 0x19b448: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x19b448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_19b44c:
    // 0x19b44c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19b450:
    // 0x19b450: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19b450u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19b454:
    // 0x19b454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19b458:
    // 0x19b458: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b45c:
    // 0x19b45c: 0x623806  srlv        $a3, $v0, $v1
    ctx->pc = 0x19b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_19b460:
    // 0x19b460: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x19b460u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
label_19b464:
    // 0x19b464: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_19b468:
    // 0x19b468: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x19b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_19b46c:
    // 0x19b46c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_19b470:
    // 0x19b470: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x19b470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_19b474:
    // 0x19b474: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_19b478:
    if (ctx->pc == 0x19B478u) {
        ctx->pc = 0x19B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B474u;
        // 0x19b478: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B47Cu;
        goto label_19b47c;
    }
    ctx->pc = 0x19B474u;
    {
        const bool branch_taken_0x19b474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B474u;
        // 0x19b478: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b474) {
            ctx->pc = 0x19B480u;
            goto label_19b480;
        }
    }
    ctx->pc = 0x19B47Cu;
label_19b47c:
    // 0x19b47c: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19b480:
    // 0x19b480: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x19b480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_19b484:
    // 0x19b484: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19b488:
    if (ctx->pc == 0x19B488u) {
        ctx->pc = 0x19B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B484u;
        // 0x19b488: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B48Cu;
        goto label_19b48c;
    }
    ctx->pc = 0x19B484u;
    {
        const bool branch_taken_0x19b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B484u;
        // 0x19b488: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b484) {
            ctx->pc = 0x19B4B4u;
            goto label_19b4b4;
        }
    }
    ctx->pc = 0x19B48Cu;
label_19b48c:
    // 0x19b48c: 0x10000005  b           . + 4 + (0x5 << 2)
label_19b490:
    if (ctx->pc == 0x19B490u) {
        ctx->pc = 0x19B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B48Cu;
        // 0x19b490: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B494u;
        goto label_19b494;
    }
    ctx->pc = 0x19B48Cu;
    {
        const bool branch_taken_0x19b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B48Cu;
        // 0x19b490: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b48c) {
            ctx->pc = 0x19B4A4u;
            goto label_19b4a4;
        }
    }
    ctx->pc = 0x19B494u;
label_19b494:
    // 0x19b494: 0x0  nop
    ctx->pc = 0x19b494u;
    // NOP
label_19b498:
    // 0x19b498: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19b498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19b49c:
    // 0x19b49c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19b4a0:
    // 0x19b4a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19b4a4:
    // 0x19b4a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19b4a8:
    // 0x19b4a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x19b4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_19b4ac:
    // 0x19b4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19b4b0:
    if (ctx->pc == 0x19B4B0u) {
        ctx->pc = 0x19B4B4u;
        goto label_19b4b4;
    }
    ctx->pc = 0x19B4ACu;
    {
        const bool branch_taken_0x19b4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b4ac) {
            ctx->pc = 0x19B498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b498;
        }
    }
    ctx->pc = 0x19B4B4u;
label_19b4b4:
    // 0x19b4b4: 0x3e00008  jr          $ra
label_19b4b8:
    if (ctx->pc == 0x19B4B8u) {
        ctx->pc = 0x19B4BCu;
        goto label_19b4bc;
    }
    ctx->pc = 0x19B4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4BCu;
label_19b4bc:
    // 0x19b4bc: 0x0  nop
    ctx->pc = 0x19b4bcu;
    // NOP
label_19b4c0:
    // 0x19b4c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b4c4:
    // 0x19b4c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19b4c8:
    // 0x19b4c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19b4cc:
    // 0x19b4cc: 0x3e00008  jr          $ra
label_19b4d0:
    if (ctx->pc == 0x19B4D0u) {
        ctx->pc = 0x19B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4CCu;
        // 0x19b4d0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4D4u;
        goto label_19b4d4;
    }
    ctx->pc = 0x19B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4CCu;
        // 0x19b4d0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4D4u;
label_19b4d4:
    // 0x19b4d4: 0x0  nop
    ctx->pc = 0x19b4d4u;
    // NOP
label_19b4d8:
    // 0x19b4d8: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_19b4dc:
    if (ctx->pc == 0x19B4DCu) {
        ctx->pc = 0x19B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D8u;
        // 0x19b4dc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4E0u;
        goto label_19b4e0;
    }
    ctx->pc = 0x19B4D8u;
    {
        const bool branch_taken_0x19b4d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D8u;
        // 0x19b4dc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4d8) {
            ctx->pc = 0x19B510u;
            goto label_19b510;
        }
    }
    ctx->pc = 0x19B4E0u;
label_19b4e0:
    // 0x19b4e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x19b4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_19b4e4:
    // 0x19b4e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b4e8:
    // 0x19b4e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19b4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_19b4ec:
    // 0x19b4ec: 0x0  nop
    ctx->pc = 0x19b4ecu;
    // NOP
label_19b4f0:
    // 0x19b4f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b4f4:
    // 0x19b4f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_19b4f8:
    // 0x19b4f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19b4fc:
    // 0x19b4fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19b500:
    // 0x19b500: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_19b504:
    // 0x19b504: 0x14e6fffa  bne         $a3, $a2, . + 4 + (-0x6 << 2)
label_19b508:
    if (ctx->pc == 0x19B508u) {
        ctx->pc = 0x19B50Cu;
        goto label_19b50c;
    }
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4f0;
        }
    }
    ctx->pc = 0x19B50Cu;
label_19b50c:
    // 0x19b50c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19b510:
    // 0x19b510: 0x3e00008  jr          $ra
label_19b514:
    if (ctx->pc == 0x19B514u) {
        ctx->pc = 0x19B518u;
        goto label_19b518;
    }
    ctx->pc = 0x19B510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B518u;
label_19b518:
    // 0x19b518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b51c:
    // 0x19b51c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19b520:
    // 0x19b520: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19b524:
    // 0x19b524: 0x3e00008  jr          $ra
label_19b528:
    if (ctx->pc == 0x19B528u) {
        ctx->pc = 0x19B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B524u;
        // 0x19b528: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B52Cu;
        goto label_19b52c;
    }
    ctx->pc = 0x19B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B524u;
        // 0x19b528: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B52Cu;
label_19b52c:
    // 0x19b52c: 0x0  nop
    ctx->pc = 0x19b52cu;
    // NOP
label_19b530:
    // 0x19b530: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_19b534:
    if (ctx->pc == 0x19B534u) {
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B538u;
        goto label_19b538;
    }
    ctx->pc = 0x19B530u;
    {
        const bool branch_taken_0x19b530 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b530) {
            ctx->pc = 0x19B568u;
            goto label_19b568;
        }
    }
    ctx->pc = 0x19B538u;
label_19b538:
    // 0x19b538: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x19b538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_19b53c:
    // 0x19b53c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b540:
    // 0x19b540: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19b540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_19b544:
    // 0x19b544: 0x0  nop
    ctx->pc = 0x19b544u;
    // NOP
label_19b548:
    // 0x19b548: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b54c:
    // 0x19b54c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19b54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_19b550:
    // 0x19b550: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19b554:
    // 0x19b554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19b554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19b558:
    // 0x19b558: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_19b55c:
    // 0x19b55c: 0x14e6fffa  bne         $a3, $a2, . + 4 + (-0x6 << 2)
label_19b560:
    if (ctx->pc == 0x19B560u) {
        ctx->pc = 0x19B564u;
        goto label_19b564;
    }
    ctx->pc = 0x19B55Cu;
    {
        const bool branch_taken_0x19b55c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x19b55c) {
            ctx->pc = 0x19B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b548;
        }
    }
    ctx->pc = 0x19B564u;
label_19b564:
    // 0x19b564: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19b568:
    // 0x19b568: 0x3e00008  jr          $ra
label_19b56c:
    if (ctx->pc == 0x19B56Cu) {
        ctx->pc = 0x19B570u;
        goto label_19b570;
    }
    ctx->pc = 0x19B568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B570u;
label_19b570:
    // 0x19b570: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x19b570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b574:
    // 0x19b574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b578:
    // 0x19b578: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_19b57c:
    if (ctx->pc == 0x19B57Cu) {
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x24c8ffff  addiu       $t0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B580u;
        goto label_19b580;
    }
    ctx->pc = 0x19B578u;
    {
        const bool branch_taken_0x19b578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x24c8ffff  addiu       $t0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b578) {
            ctx->pc = 0x19B5DCu;
            goto label_19b5dc;
        }
    }
    ctx->pc = 0x19B580u;
label_19b580:
    // 0x19b580: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_19b584:
    // 0x19b584: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x19b584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_19b588:
    // 0x19b588: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x19b588u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_19b58c:
    // 0x19b58c: 0x0  nop
    ctx->pc = 0x19b58cu;
    // NOP
label_19b590:
    // 0x19b590: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_19b594:
    // 0x19b594: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_19b598:
    // 0x19b598: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x19b598u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_19b59c:
    // 0x19b59c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x19b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_19b5a0:
    // 0x19b5a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19b5a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19b5a4:
    // 0x19b5a4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_19b5a8:
    // 0x19b5a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_19b5ac:
    // 0x19b5ac: 0x4283f  dsra32      $a1, $a0, 0
    ctx->pc = 0x19b5acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 0));
label_19b5b0:
    // 0x19b5b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_19b5b4:
    // 0x19b5b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19b5b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19b5b8:
    // 0x19b5b8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19b5bc:
    // 0x19b5bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19b5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19b5c0:
    // 0x19b5c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19b5c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_19b5c4:
    // 0x19b5c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19b5c8:
    // 0x19b5c8: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19b5cc:
    // 0x19b5cc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x19b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_19b5d0:
    // 0x19b5d0: 0x1509ffef  bne         $t0, $t1, . + 4 + (-0x11 << 2)
label_19b5d4:
    if (ctx->pc == 0x19B5D4u) {
        ctx->pc = 0x19B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5D0u;
        // 0x19b5d4: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5D8u;
        goto label_19b5d8;
    }
    ctx->pc = 0x19B5D0u;
    {
        const bool branch_taken_0x19b5d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5D0u;
        // 0x19b5d4: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5d0) {
            ctx->pc = 0x19B590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b590;
        }
    }
    ctx->pc = 0x19B5D8u;
label_19b5d8:
    // 0x19b5d8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x19b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
label_19b5dc:
    // 0x19b5dc: 0x3e00008  jr          $ra
label_19b5e0:
    if (ctx->pc == 0x19B5E0u) {
        ctx->pc = 0x19B5E4u;
        goto label_19b5e4;
    }
    ctx->pc = 0x19B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B5E4u;
label_19b5e4:
    // 0x19b5e4: 0x0  nop
    ctx->pc = 0x19b5e4u;
    // NOP
label_19b5e8:
    // 0x19b5e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b5e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b5ec:
    // 0x19b5ec: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19b5ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19b5f0:
    // 0x19b5f0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19b5f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19b5f4:
    // 0x19b5f4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19b5f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19b5f8:
    // 0x19b5f8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19b5f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19b5fc:
    // 0x19b5fc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19b5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19b600:
    // 0x19b600: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19b600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19b604:
    // 0x19b604: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19b604u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19b608:
    // 0x19b608: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x19b608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_19b60c:
    // 0x19b60c: 0x3e00008  jr          $ra
label_19b610:
    if (ctx->pc == 0x19B610u) {
        ctx->pc = 0x19B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B60Cu;
        // 0x19b610: 0xf8890000  sqc2        $vf9, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B614u;
        goto label_19b614;
    }
    ctx->pc = 0x19B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B60Cu;
        // 0x19b610: 0xf8890000  sqc2        $vf9, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B614u;
label_19b614:
    // 0x19b614: 0x0  nop
    ctx->pc = 0x19b614u;
    // NOP
label_19b618:
    // 0x19b618: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19b618u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19b61c:
    // 0x19b61c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19b61cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19b620:
    // 0x19b620: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19b620u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_19b624:
    // 0x19b624: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19b624u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_19b628:
    // 0x19b628: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19b62c:
    // 0x19b62c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19b62cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x19b630u;
    return;
}

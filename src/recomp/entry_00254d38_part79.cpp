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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part79(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        case 0x27b058u: goto label_27b058;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b060u: goto label_27b060;
        case 0x27b064u: goto label_27b064;
        case 0x27b068u: goto label_27b068;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b070u: goto label_27b070;
        case 0x27b074u: goto label_27b074;
        case 0x27b078u: goto label_27b078;
        case 0x27b07cu: goto label_27b07c;
        case 0x27b080u: goto label_27b080;
        case 0x27b084u: goto label_27b084;
        case 0x27b088u: goto label_27b088;
        case 0x27b08cu: goto label_27b08c;
        case 0x27b090u: goto label_27b090;
        case 0x27b094u: goto label_27b094;
        case 0x27b098u: goto label_27b098;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a0u: goto label_27b0a0;
        case 0x27b0a4u: goto label_27b0a4;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0acu: goto label_27b0ac;
        case 0x27b0b0u: goto label_27b0b0;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b0bcu: goto label_27b0bc;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0c4u: goto label_27b0c4;
        case 0x27b0c8u: goto label_27b0c8;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d0u: goto label_27b0d0;
        case 0x27b0d4u: goto label_27b0d4;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0dcu: goto label_27b0dc;
        case 0x27b0e0u: goto label_27b0e0;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b0ecu: goto label_27b0ec;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0f4u: goto label_27b0f4;
        case 0x27b0f8u: goto label_27b0f8;
        case 0x27b0fcu: goto label_27b0fc;
        case 0x27b100u: goto label_27b100;
        case 0x27b104u: goto label_27b104;
        case 0x27b108u: goto label_27b108;
        case 0x27b10cu: goto label_27b10c;
        case 0x27b110u: goto label_27b110;
        case 0x27b114u: goto label_27b114;
        case 0x27b118u: goto label_27b118;
        case 0x27b11cu: goto label_27b11c;
        case 0x27b120u: goto label_27b120;
        case 0x27b124u: goto label_27b124;
        case 0x27b128u: goto label_27b128;
        case 0x27b12cu: goto label_27b12c;
        case 0x27b130u: goto label_27b130;
        case 0x27b134u: goto label_27b134;
        case 0x27b138u: goto label_27b138;
        case 0x27b13cu: goto label_27b13c;
        case 0x27b140u: goto label_27b140;
        case 0x27b144u: goto label_27b144;
        case 0x27b148u: goto label_27b148;
        case 0x27b14cu: goto label_27b14c;
        case 0x27b150u: goto label_27b150;
        case 0x27b154u: goto label_27b154;
        case 0x27b158u: goto label_27b158;
        case 0x27b15cu: goto label_27b15c;
        case 0x27b160u: goto label_27b160;
        case 0x27b164u: goto label_27b164;
        case 0x27b168u: goto label_27b168;
        case 0x27b16cu: goto label_27b16c;
        case 0x27b170u: goto label_27b170;
        case 0x27b174u: goto label_27b174;
        case 0x27b178u: goto label_27b178;
        case 0x27b17cu: goto label_27b17c;
        case 0x27b180u: goto label_27b180;
        case 0x27b184u: goto label_27b184;
        case 0x27b188u: goto label_27b188;
        case 0x27b18cu: goto label_27b18c;
        case 0x27b190u: goto label_27b190;
        case 0x27b194u: goto label_27b194;
        case 0x27b198u: goto label_27b198;
        case 0x27b19cu: goto label_27b19c;
        case 0x27b1a0u: goto label_27b1a0;
        case 0x27b1a4u: goto label_27b1a4;
        case 0x27b1a8u: goto label_27b1a8;
        case 0x27b1acu: goto label_27b1ac;
        case 0x27b1b0u: goto label_27b1b0;
        case 0x27b1b4u: goto label_27b1b4;
        case 0x27b1b8u: goto label_27b1b8;
        case 0x27b1bcu: goto label_27b1bc;
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1c4u: goto label_27b1c4;
        case 0x27b1c8u: goto label_27b1c8;
        case 0x27b1ccu: goto label_27b1cc;
        case 0x27b1d0u: goto label_27b1d0;
        case 0x27b1d4u: goto label_27b1d4;
        case 0x27b1d8u: goto label_27b1d8;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b1e4u: goto label_27b1e4;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b1ecu: goto label_27b1ec;
        case 0x27b1f0u: goto label_27b1f0;
        case 0x27b1f4u: goto label_27b1f4;
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b1fcu: goto label_27b1fc;
        case 0x27b200u: goto label_27b200;
        case 0x27b204u: goto label_27b204;
        case 0x27b208u: goto label_27b208;
        case 0x27b20cu: goto label_27b20c;
        case 0x27b210u: goto label_27b210;
        case 0x27b214u: goto label_27b214;
        case 0x27b218u: goto label_27b218;
        case 0x27b21cu: goto label_27b21c;
        case 0x27b220u: goto label_27b220;
        case 0x27b224u: goto label_27b224;
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        case 0x27b330u: goto label_27b330;
        case 0x27b334u: goto label_27b334;
        case 0x27b338u: goto label_27b338;
        case 0x27b33cu: goto label_27b33c;
        case 0x27b340u: goto label_27b340;
        case 0x27b344u: goto label_27b344;
        case 0x27b348u: goto label_27b348;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b350u: goto label_27b350;
        case 0x27b354u: goto label_27b354;
        case 0x27b358u: goto label_27b358;
        case 0x27b35cu: goto label_27b35c;
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        default: return;
    }

label_27ae98:
    // 0x27ae98: 0x0  nop
    ctx->pc = 0x27ae98u;
    // NOP
label_27ae9c:
    // 0x27ae9c: 0x0  nop
    ctx->pc = 0x27ae9cu;
    // NOP
label_27aea0:
    // 0x27aea0: 0x11c11  .word       0x00011C11                   # mthi        $zero # 00011C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aea0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27aea4:
    // 0x27aea4: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x27aea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aea8:
    // 0x27aea8: 0x0  nop
    ctx->pc = 0x27aea8u;
    // NOP
label_27aeac:
    // 0x27aeac: 0x0  nop
    ctx->pc = 0x27aeacu;
    // NOP
label_27aeb0:
    // 0x27aeb0: 0x11c20  .word       0x00011C20                   # add         $v1, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aeb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27aeb4:
    // 0x27aeb4: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aeb4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27aeb8:
    // 0x27aeb8: 0x0  nop
    ctx->pc = 0x27aeb8u;
    // NOP
label_27aebc:
    // 0x27aebc: 0x0  nop
    ctx->pc = 0x27aebcu;
    // NOP
label_27aec0:
    // 0x27aec0: 0x11c33  tltu        $zero, $at, 112
    ctx->pc = 0x27aec0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27aec4:
    // 0x27aec4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aec4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27aec8:
    // 0x27aec8: 0x0  nop
    ctx->pc = 0x27aec8u;
    // NOP
label_27aecc:
    // 0x27aecc: 0x0  nop
    ctx->pc = 0x27aeccu;
    // NOP
label_27aed0:
    // 0x27aed0: 0x11c45  .word       0x00011C45                   # INVALID     $zero, $at, 0x1C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27AED0 raw=0x00011C45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27aed4:
    // 0x27aed4: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27aed8:
    // 0x27aed8: 0x0  nop
    ctx->pc = 0x27aed8u;
    // NOP
label_27aedc:
    // 0x27aedc: 0x0  nop
    ctx->pc = 0x27aedcu;
    // NOP
label_27aee0:
    // 0x27aee0: 0x11c59  .word       0x00011C59                   # multu       $zero, $at # 00001C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aee0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27aee4:
    // 0x27aee4: 0x9330  tge         $zero, $zero, 588
    ctx->pc = 0x27aee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aee8:
    // 0x27aee8: 0x0  nop
    ctx->pc = 0x27aee8u;
    // NOP
label_27aeec:
    // 0x27aeec: 0x0  nop
    ctx->pc = 0x27aeecu;
    // NOP
label_27aef0:
    // 0x27aef0: 0x11c6c  .word       0x00011C6C                   # dadd        $v1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27aef4:
    // 0x27aef4: 0x95a0  .word       0x000095A0                   # add         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27aef8:
    // 0x27aef8: 0x0  nop
    ctx->pc = 0x27aef8u;
    // NOP
label_27aefc:
    // 0x27aefc: 0x0  nop
    ctx->pc = 0x27aefcu;
    // NOP
label_27af00:
    // 0x27af00: 0x11c7f  dsra32      $v1, $at, 17
    ctx->pc = 0x27af00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 17));
label_27af04:
    // 0x27af04: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x27af04u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27af08:
    // 0x27af08: 0x0  nop
    ctx->pc = 0x27af08u;
    // NOP
label_27af0c:
    // 0x27af0c: 0x0  nop
    ctx->pc = 0x27af0cu;
    // NOP
label_27af10:
    // 0x27af10: 0x11c98  .word       0x00011C98                   # mult        $v1, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27af10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27af14:
    // 0x27af14: 0xb450  .word       0x0000B450                   # mfhi        $s6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af14u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27af18:
    // 0x27af18: 0x0  nop
    ctx->pc = 0x27af18u;
    // NOP
label_27af1c:
    // 0x27af1c: 0x0  nop
    ctx->pc = 0x27af1cu;
    // NOP
label_27af20:
    // 0x27af20: 0x11caf  .word       0x00011CAF                   # dsubu       $v1, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27af24:
    // 0x27af24: 0x77f0  tge         $zero, $zero, 479
    ctx->pc = 0x27af24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27af28:
    // 0x27af28: 0x0  nop
    ctx->pc = 0x27af28u;
    // NOP
label_27af2c:
    // 0x27af2c: 0x0  nop
    ctx->pc = 0x27af2cu;
    // NOP
label_27af30:
    // 0x27af30: 0x11cbe  dsrl32      $v1, $at, 18
    ctx->pc = 0x27af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 18));
label_27af34:
    // 0x27af34: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27af38:
    // 0x27af38: 0x0  nop
    ctx->pc = 0x27af38u;
    // NOP
label_27af3c:
    // 0x27af3c: 0x0  nop
    ctx->pc = 0x27af3cu;
    // NOP
label_27af40:
    // 0x27af40: 0x11ccf  .word       0x00011CCF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27af44:
    // 0x27af44: 0xbeb0  tge         $zero, $zero, 762
    ctx->pc = 0x27af44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27af48:
    // 0x27af48: 0x0  nop
    ctx->pc = 0x27af48u;
    // NOP
label_27af4c:
    // 0x27af4c: 0x0  nop
    ctx->pc = 0x27af4cu;
    // NOP
label_27af50:
    // 0x27af50: 0x11ce7  .word       0x00011CE7                   # nor         $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af50u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27af54:
    // 0x27af54: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27af58:
    // 0x27af58: 0x0  nop
    ctx->pc = 0x27af58u;
    // NOP
label_27af5c:
    // 0x27af5c: 0x0  nop
    ctx->pc = 0x27af5cu;
    // NOP
label_27af60:
    // 0x27af60: 0x11cf6  tne         $zero, $at, 115
    ctx->pc = 0x27af60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27af64:
    // 0x27af64: 0xa260  .word       0x0000A260                   # add         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27af68:
    // 0x27af68: 0x0  nop
    ctx->pc = 0x27af68u;
    // NOP
label_27af6c:
    // 0x27af6c: 0x0  nop
    ctx->pc = 0x27af6cu;
    // NOP
label_27af70:
    // 0x27af70: 0x11d0b  .word       0x00011D0B                   # movn        $v1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af70u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27af74:
    // 0x27af74: 0xada0  .word       0x0000ADA0                   # add         $s5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27af78:
    // 0x27af78: 0x0  nop
    ctx->pc = 0x27af78u;
    // NOP
label_27af7c:
    // 0x27af7c: 0x0  nop
    ctx->pc = 0x27af7cu;
    // NOP
label_27af80:
    // 0x27af80: 0x11d21  .word       0x00011D21                   # addu        $v1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27af84:
    // 0x27af84: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27af88:
    // 0x27af88: 0x0  nop
    ctx->pc = 0x27af88u;
    // NOP
label_27af8c:
    // 0x27af8c: 0x0  nop
    ctx->pc = 0x27af8cu;
    // NOP
label_27af90:
    // 0x27af90: 0x11d33  tltu        $zero, $at, 116
    ctx->pc = 0x27af90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27af94:
    // 0x27af94: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x27af94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27af98:
    // 0x27af98: 0x0  nop
    ctx->pc = 0x27af98u;
    // NOP
label_27af9c:
    // 0x27af9c: 0x0  nop
    ctx->pc = 0x27af9cu;
    // NOP
label_27afa0:
    // 0x27afa0: 0x11d41  .word       0x00011D41                   # INVALID     $zero, $at, 0x1D41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27AFA0 raw=0x00011D41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27afa4:
    // 0x27afa4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27afa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27afa8:
    // 0x27afa8: 0x0  nop
    ctx->pc = 0x27afa8u;
    // NOP
label_27afac:
    // 0x27afac: 0x0  nop
    ctx->pc = 0x27afacu;
    // NOP
label_27afb0:
    // 0x27afb0: 0x11d4f  .word       0x00011D4F                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27afb4:
    // 0x27afb4: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27afb8:
    // 0x27afb8: 0x0  nop
    ctx->pc = 0x27afb8u;
    // NOP
label_27afbc:
    // 0x27afbc: 0x0  nop
    ctx->pc = 0x27afbcu;
    // NOP
label_27afc0:
    // 0x27afc0: 0x11d5e  .word       0x00011D5E                   # ddiv        $v1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27AFC0 raw=0x00011D5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27afc4:
    // 0x27afc4: 0x7fb0  tge         $zero, $zero, 510
    ctx->pc = 0x27afc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27afc8:
    // 0x27afc8: 0x0  nop
    ctx->pc = 0x27afc8u;
    // NOP
label_27afcc:
    // 0x27afcc: 0x0  nop
    ctx->pc = 0x27afccu;
    // NOP
label_27afd0:
    // 0x27afd0: 0x11d6e  .word       0x00011D6E                   # dsub        $v1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27afd4:
    // 0x27afd4: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27afd8:
    // 0x27afd8: 0x0  nop
    ctx->pc = 0x27afd8u;
    // NOP
label_27afdc:
    // 0x27afdc: 0x0  nop
    ctx->pc = 0x27afdcu;
    // NOP
label_27afe0:
    // 0x27afe0: 0x11d7c  dsll32      $v1, $at, 21
    ctx->pc = 0x27afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 21));
label_27afe4:
    // 0x27afe4: 0x3360  .word       0x00003360                   # add         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27afe8:
    // 0x27afe8: 0x0  nop
    ctx->pc = 0x27afe8u;
    // NOP
label_27afec:
    // 0x27afec: 0x0  nop
    ctx->pc = 0x27afecu;
    // NOP
label_27aff0:
    // 0x27aff0: 0x11d83  sra         $v1, $at, 22
    ctx->pc = 0x27aff0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), 22));
label_27aff4:
    // 0x27aff4: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x27aff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aff8:
    // 0x27aff8: 0x0  nop
    ctx->pc = 0x27aff8u;
    // NOP
label_27affc:
    // 0x27affc: 0x0  nop
    ctx->pc = 0x27affcu;
    // NOP
label_27b000:
    // 0x27b000: 0x11d92  .word       0x00011D92                   # mflo        $v1 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b000u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_27b004:
    // 0x27b004: 0x4420  .word       0x00004420                   # add         $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27b008:
    // 0x27b008: 0x0  nop
    ctx->pc = 0x27b008u;
    // NOP
label_27b00c:
    // 0x27b00c: 0x0  nop
    ctx->pc = 0x27b00cu;
    // NOP
label_27b010:
    // 0x27b010: 0x11d9b  .word       0x00011D9B                   # divu        $v1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b010u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27b014:
    // 0x27b014: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b014u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27b018:
    // 0x27b018: 0x0  nop
    ctx->pc = 0x27b018u;
    // NOP
label_27b01c:
    // 0x27b01c: 0x0  nop
    ctx->pc = 0x27b01cu;
    // NOP
label_27b020:
    // 0x27b020: 0x11da3  .word       0x00011DA3                   # negu        $v1, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b024:
    // 0x27b024: 0x47c0  sll         $t0, $zero, 31
    ctx->pc = 0x27b024u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27b028:
    // 0x27b028: 0x0  nop
    ctx->pc = 0x27b028u;
    // NOP
label_27b02c:
    // 0x27b02c: 0x0  nop
    ctx->pc = 0x27b02cu;
    // NOP
label_27b030:
    // 0x27b030: 0x11dac  .word       0x00011DAC                   # dadd        $v1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b030u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27b034:
    // 0x27b034: 0x4e00  sll         $t1, $zero, 24
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27b038:
    // 0x27b038: 0x0  nop
    ctx->pc = 0x27b038u;
    // NOP
label_27b03c:
    // 0x27b03c: 0x0  nop
    ctx->pc = 0x27b03cu;
    // NOP
label_27b040:
    // 0x27b040: 0x11db6  tne         $zero, $at, 118
    ctx->pc = 0x27b040u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b044:
    // 0x27b044: 0x3090  .word       0x00003090                   # mfhi        $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b044u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27b048:
    // 0x27b048: 0x0  nop
    ctx->pc = 0x27b048u;
    // NOP
label_27b04c:
    // 0x27b04c: 0x0  nop
    ctx->pc = 0x27b04cu;
    // NOP
label_27b050:
    // 0x27b050: 0x11dbd  .word       0x00011DBD                   # INVALID     $zero, $at, 0x1DBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B050 raw=0x00011DBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b054:
    // 0x27b054: 0x6c30  tge         $zero, $zero, 432
    ctx->pc = 0x27b054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b058:
    // 0x27b058: 0x0  nop
    ctx->pc = 0x27b058u;
    // NOP
label_27b05c:
    // 0x27b05c: 0x0  nop
    ctx->pc = 0x27b05cu;
    // NOP
label_27b060:
    // 0x27b060: 0x11dcb  .word       0x00011DCB                   # movn        $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b060u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b064:
    // 0x27b064: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x27b064u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27b068:
    // 0x27b068: 0x0  nop
    ctx->pc = 0x27b068u;
    // NOP
label_27b06c:
    // 0x27b06c: 0x0  nop
    ctx->pc = 0x27b06cu;
    // NOP
label_27b070:
    // 0x27b070: 0x11dd9  .word       0x00011DD9                   # multu       $zero, $at # 00001DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b070u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27b074:
    // 0x27b074: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b074u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27b078:
    // 0x27b078: 0x0  nop
    ctx->pc = 0x27b078u;
    // NOP
label_27b07c:
    // 0x27b07c: 0x0  nop
    ctx->pc = 0x27b07cu;
    // NOP
label_27b080:
    // 0x27b080: 0x11deb  .word       0x00011DEB                   # sltu        $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27b084:
    // 0x27b084: 0x7870  tge         $zero, $zero, 481
    ctx->pc = 0x27b084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b088:
    // 0x27b088: 0x0  nop
    ctx->pc = 0x27b088u;
    // NOP
label_27b08c:
    // 0x27b08c: 0x0  nop
    ctx->pc = 0x27b08cu;
    // NOP
label_27b090:
    // 0x27b090: 0x11dfb  dsra        $v1, $at, 23
    ctx->pc = 0x27b090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> 23);
label_27b094:
    // 0x27b094: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b094u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27b098:
    // 0x27b098: 0x0  nop
    ctx->pc = 0x27b098u;
    // NOP
label_27b09c:
    // 0x27b09c: 0x0  nop
    ctx->pc = 0x27b09cu;
    // NOP
label_27b0a0:
    // 0x27b0a0: 0x11e03  sra         $v1, $at, 24
    ctx->pc = 0x27b0a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), 24));
label_27b0a4:
    // 0x27b0a4: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27b0a8:
    // 0x27b0a8: 0x0  nop
    ctx->pc = 0x27b0a8u;
    // NOP
label_27b0ac:
    // 0x27b0ac: 0x0  nop
    ctx->pc = 0x27b0acu;
    // NOP
label_27b0b0:
    // 0x27b0b0: 0x11e0a  .word       0x00011E0A                   # movz        $v1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b0b4:
    // 0x27b0b4: 0x3450  .word       0x00003450                   # mfhi        $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27b0b8:
    // 0x27b0b8: 0x0  nop
    ctx->pc = 0x27b0b8u;
    // NOP
label_27b0bc:
    // 0x27b0bc: 0x0  nop
    ctx->pc = 0x27b0bcu;
    // NOP
label_27b0c0:
    // 0x27b0c0: 0x11e11  .word       0x00011E11                   # mthi        $zero # 00011E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b0c4:
    // 0x27b0c4: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27b0c8:
    // 0x27b0c8: 0x0  nop
    ctx->pc = 0x27b0c8u;
    // NOP
label_27b0cc:
    // 0x27b0cc: 0x0  nop
    ctx->pc = 0x27b0ccu;
    // NOP
label_27b0d0:
    // 0x27b0d0: 0x11e1a  .word       0x00011E1A                   # div         $v1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0d0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27b0d4:
    // 0x27b0d4: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x27b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_27b0d8:
    // 0x27b0d8: 0x0  nop
    ctx->pc = 0x27b0d8u;
    // NOP
label_27b0dc:
    // 0x27b0dc: 0x0  nop
    ctx->pc = 0x27b0dcu;
    // NOP
label_27b0e0:
    // 0x27b0e0: 0x11e23  .word       0x00011E23                   # negu        $v1, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b0e4:
    // 0x27b0e4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27b0e8:
    // 0x27b0e8: 0x0  nop
    ctx->pc = 0x27b0e8u;
    // NOP
label_27b0ec:
    // 0x27b0ec: 0x0  nop
    ctx->pc = 0x27b0ecu;
    // NOP
label_27b0f0:
    // 0x27b0f0: 0x11e31  tgeu        $zero, $at, 120
    ctx->pc = 0x27b0f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b0f4:
    // 0x27b0f4: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x27b0f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27b0f8:
    // 0x27b0f8: 0x0  nop
    ctx->pc = 0x27b0f8u;
    // NOP
label_27b0fc:
    // 0x27b0fc: 0x0  nop
    ctx->pc = 0x27b0fcu;
    // NOP
label_27b100:
    // 0x27b100: 0x11e3f  dsra32      $v1, $at, 24
    ctx->pc = 0x27b100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 24));
label_27b104:
    // 0x27b104: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b104u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27b108:
    // 0x27b108: 0x0  nop
    ctx->pc = 0x27b108u;
    // NOP
label_27b10c:
    // 0x27b10c: 0x0  nop
    ctx->pc = 0x27b10cu;
    // NOP
label_27b110:
    // 0x27b110: 0x11e48  .word       0x00011E48                   # jr          $zero # 00011E40 <InstrIdType: CPU_SPECIAL>
label_27b114:
    if (ctx->pc == 0x27B114u) {
        ctx->pc = 0x27B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B110u;
        // 0x27b114: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B118u;
        goto label_27b118;
    }
    ctx->pc = 0x27B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B110u;
        // 0x27b114: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27B118u;
label_27b118:
    // 0x27b118: 0x0  nop
    ctx->pc = 0x27b118u;
    // NOP
label_27b11c:
    // 0x27b11c: 0x0  nop
    ctx->pc = 0x27b11cu;
    // NOP
label_27b120:
    // 0x27b120: 0x11e4c  .word       0x00011E4C                   # syscall     121 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b120u;
    ctx->pc = 0x27B124u;
runtime->handleSyscall(rdram, ctx, 0x479u);
label_27b124:
    // 0x27b124: 0xb8d0  .word       0x0000B8D0                   # mfhi        $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b124u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27b128:
    // 0x27b128: 0x0  nop
    ctx->pc = 0x27b128u;
    // NOP
label_27b12c:
    // 0x27b12c: 0x0  nop
    ctx->pc = 0x27b12cu;
    // NOP
label_27b130:
    // 0x27b130: 0x11e64  .word       0x00011E64                   # and         $v1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b134:
    // 0x27b134: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b134u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27b138:
    // 0x27b138: 0x0  nop
    ctx->pc = 0x27b138u;
    // NOP
label_27b13c:
    // 0x27b13c: 0x0  nop
    ctx->pc = 0x27b13cu;
    // NOP
label_27b140:
    // 0x27b140: 0x11e6e  .word       0x00011E6E                   # dsub        $v1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b140u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27b144:
    // 0x27b144: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b144u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b148:
    // 0x27b148: 0x0  nop
    ctx->pc = 0x27b148u;
    // NOP
label_27b14c:
    // 0x27b14c: 0x0  nop
    ctx->pc = 0x27b14cu;
    // NOP
label_27b150:
    // 0x27b150: 0x11e7c  dsll32      $v1, $at, 25
    ctx->pc = 0x27b150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 25));
label_27b154:
    // 0x27b154: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b154u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27b158:
    // 0x27b158: 0x0  nop
    ctx->pc = 0x27b158u;
    // NOP
label_27b15c:
    // 0x27b15c: 0x0  nop
    ctx->pc = 0x27b15cu;
    // NOP
label_27b160:
    // 0x27b160: 0x11e8e  .word       0x00011E8E                   # INVALID     $zero, $at, 0x1E8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B160 raw=0x00011E8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b164:
    // 0x27b164: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27b168:
    // 0x27b168: 0x0  nop
    ctx->pc = 0x27b168u;
    // NOP
label_27b16c:
    // 0x27b16c: 0x0  nop
    ctx->pc = 0x27b16cu;
    // NOP
label_27b170:
    // 0x27b170: 0x11e98  .word       0x00011E98                   # mult        $v1, $zero, $at # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27b174:
    // 0x27b174: 0x5350  .word       0x00005350                   # mfhi        $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b174u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27b178:
    // 0x27b178: 0x0  nop
    ctx->pc = 0x27b178u;
    // NOP
label_27b17c:
    // 0x27b17c: 0x0  nop
    ctx->pc = 0x27b17cu;
    // NOP
label_27b180:
    // 0x27b180: 0x11ea3  .word       0x00011EA3                   # negu        $v1, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b184:
    // 0x27b184: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b188:
    // 0x27b188: 0x0  nop
    ctx->pc = 0x27b188u;
    // NOP
label_27b18c:
    // 0x27b18c: 0x0  nop
    ctx->pc = 0x27b18cu;
    // NOP
label_27b190:
    // 0x27b190: 0x11eb5  .word       0x00011EB5                   # INVALID     $zero, $at, 0x1EB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B190 raw=0x00011EB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b194:
    // 0x27b194: 0xc930  tge         $zero, $zero, 804
    ctx->pc = 0x27b194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b198:
    // 0x27b198: 0x0  nop
    ctx->pc = 0x27b198u;
    // NOP
label_27b19c:
    // 0x27b19c: 0x0  nop
    ctx->pc = 0x27b19cu;
    // NOP
label_27b1a0:
    // 0x27b1a0: 0x11ecf  .word       0x00011ECF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b1a4:
    // 0x27b1a4: 0x6d60  .word       0x00006D60                   # add         $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27b1a8:
    // 0x27b1a8: 0x0  nop
    ctx->pc = 0x27b1a8u;
    // NOP
label_27b1ac:
    // 0x27b1ac: 0x0  nop
    ctx->pc = 0x27b1acu;
    // NOP
label_27b1b0:
    // 0x27b1b0: 0x11edd  .word       0x00011EDD                   # dmultu      $zero, $at # 00001EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27B1B0 raw=0x00011EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b1b4:
    // 0x27b1b4: 0x56e0  .word       0x000056E0                   # add         $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27b1b8:
    // 0x27b1b8: 0x0  nop
    ctx->pc = 0x27b1b8u;
    // NOP
label_27b1bc:
    // 0x27b1bc: 0x0  nop
    ctx->pc = 0x27b1bcu;
    // NOP
label_27b1c0:
    // 0x27b1c0: 0x11ee8  .word       0x00011EE8                   # mfsa        $v1 # 000106C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b1c0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_27b1c4:
    // 0x27b1c4: 0x7230  tge         $zero, $zero, 456
    ctx->pc = 0x27b1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1c8:
    // 0x27b1c8: 0x0  nop
    ctx->pc = 0x27b1c8u;
    // NOP
label_27b1cc:
    // 0x27b1cc: 0x0  nop
    ctx->pc = 0x27b1ccu;
    // NOP
label_27b1d0:
    // 0x27b1d0: 0x11ef7  .word       0x00011EF7                   # INVALID     $zero, $at, 0x1EF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27B1D0 raw=0x00011EF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b1d4:
    // 0x27b1d4: 0x7cf0  tge         $zero, $zero, 499
    ctx->pc = 0x27b1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1d8:
    // 0x27b1d8: 0x0  nop
    ctx->pc = 0x27b1d8u;
    // NOP
label_27b1dc:
    // 0x27b1dc: 0x0  nop
    ctx->pc = 0x27b1dcu;
    // NOP
label_27b1e0:
    // 0x27b1e0: 0x11f07  .word       0x00011F07                   # srav        $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b1e4:
    // 0x27b1e4: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x27b1e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1e8:
    // 0x27b1e8: 0x0  nop
    ctx->pc = 0x27b1e8u;
    // NOP
label_27b1ec:
    // 0x27b1ec: 0x0  nop
    ctx->pc = 0x27b1ecu;
    // NOP
label_27b1f0:
    // 0x27b1f0: 0x11f15  .word       0x00011F15                   # INVALID     $zero, $at, 0x1F15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27B1F0 raw=0x00011F15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b1f4:
    // 0x27b1f4: 0x3df0  tge         $zero, $zero, 247
    ctx->pc = 0x27b1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1f8:
    // 0x27b1f8: 0x0  nop
    ctx->pc = 0x27b1f8u;
    // NOP
label_27b1fc:
    // 0x27b1fc: 0x0  nop
    ctx->pc = 0x27b1fcu;
    // NOP
label_27b200:
    // 0x27b200: 0x11f1d  .word       0x00011F1D                   # dmultu      $zero, $at # 00001F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27B200 raw=0x00011F1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b204:
    // 0x27b204: 0x48a0  .word       0x000048A0                   # add         $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27b208:
    // 0x27b208: 0x0  nop
    ctx->pc = 0x27b208u;
    // NOP
label_27b20c:
    // 0x27b20c: 0x0  nop
    ctx->pc = 0x27b20cu;
    // NOP
label_27b210:
    // 0x27b210: 0x11f27  .word       0x00011F27                   # nor         $v1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27b214:
    // 0x27b214: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x27b214u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27b218:
    // 0x27b218: 0x0  nop
    ctx->pc = 0x27b218u;
    // NOP
label_27b21c:
    // 0x27b21c: 0x0  nop
    ctx->pc = 0x27b21cu;
    // NOP
label_27b220:
    // 0x27b220: 0x11f36  tne         $zero, $at, 124
    ctx->pc = 0x27b220u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b224:
    // 0x27b224: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b224u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27b228:
    // 0x27b228: 0x0  nop
    ctx->pc = 0x27b228u;
    // NOP
label_27b22c:
    // 0x27b22c: 0x0  nop
    ctx->pc = 0x27b22cu;
    // NOP
label_27b230:
    // 0x27b230: 0x11f3e  dsrl32      $v1, $at, 28
    ctx->pc = 0x27b230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 28));
label_27b234:
    // 0x27b234: 0x8bf0  tge         $zero, $zero, 559
    ctx->pc = 0x27b234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b238:
    // 0x27b238: 0x0  nop
    ctx->pc = 0x27b238u;
    // NOP
label_27b23c:
    // 0x27b23c: 0x0  nop
    ctx->pc = 0x27b23cu;
    // NOP
label_27b240:
    // 0x27b240: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b240u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27b244:
    // 0x27b244: 0xe390  .word       0x0000E390                   # mfhi        $gp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b244u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27b248:
    // 0x27b248: 0x0  nop
    ctx->pc = 0x27b248u;
    // NOP
label_27b24c:
    // 0x27b24c: 0x0  nop
    ctx->pc = 0x27b24cu;
    // NOP
label_27b250:
    // 0x27b250: 0x11f6d  .word       0x00011F6D                   # daddu       $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27b254:
    // 0x27b254: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b254u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27b258:
    // 0x27b258: 0x0  nop
    ctx->pc = 0x27b258u;
    // NOP
label_27b25c:
    // 0x27b25c: 0x0  nop
    ctx->pc = 0x27b25cu;
    // NOP
label_27b260:
    // 0x27b260: 0x11f7d  .word       0x00011F7D                   # INVALID     $zero, $at, 0x1F7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B260 raw=0x00011F7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b264:
    // 0x27b264: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b268:
    // 0x27b268: 0x0  nop
    ctx->pc = 0x27b268u;
    // NOP
label_27b26c:
    // 0x27b26c: 0x0  nop
    ctx->pc = 0x27b26cu;
    // NOP
label_27b270:
    // 0x27b270: 0x11f8a  .word       0x00011F8A                   # movz        $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b270u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b274:
    // 0x27b274: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27b278:
    // 0x27b278: 0x0  nop
    ctx->pc = 0x27b278u;
    // NOP
label_27b27c:
    // 0x27b27c: 0x0  nop
    ctx->pc = 0x27b27cu;
    // NOP
label_27b280:
    // 0x27b280: 0x11f96  .word       0x00011F96                   # dsrlv       $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b284:
    // 0x27b284: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x27b284u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27b288:
    // 0x27b288: 0x0  nop
    ctx->pc = 0x27b288u;
    // NOP
label_27b28c:
    // 0x27b28c: 0x0  nop
    ctx->pc = 0x27b28cu;
    // NOP
label_27b290:
    // 0x27b290: 0x11fa6  .word       0x00011FA6                   # xor         $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27b294:
    // 0x27b294: 0x8b40  sll         $s1, $zero, 13
    ctx->pc = 0x27b294u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27b298:
    // 0x27b298: 0x0  nop
    ctx->pc = 0x27b298u;
    // NOP
label_27b29c:
    // 0x27b29c: 0x0  nop
    ctx->pc = 0x27b29cu;
    // NOP
label_27b2a0:
    // 0x27b2a0: 0x11fb8  dsll        $v1, $at, 30
    ctx->pc = 0x27b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << 30);
label_27b2a4:
    // 0x27b2a4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2a4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27b2a8:
    // 0x27b2a8: 0x0  nop
    ctx->pc = 0x27b2a8u;
    // NOP
label_27b2ac:
    // 0x27b2ac: 0x0  nop
    ctx->pc = 0x27b2acu;
    // NOP
label_27b2b0:
    // 0x27b2b0: 0x11fcf  .word       0x00011FCF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b2b4:
    // 0x27b2b4: 0x7740  sll         $t6, $zero, 29
    ctx->pc = 0x27b2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27b2b8:
    // 0x27b2b8: 0x0  nop
    ctx->pc = 0x27b2b8u;
    // NOP
label_27b2bc:
    // 0x27b2bc: 0x0  nop
    ctx->pc = 0x27b2bcu;
    // NOP
label_27b2c0:
    // 0x27b2c0: 0x11fde  .word       0x00011FDE                   # ddiv        $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27B2C0 raw=0x00011FDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b2c4:
    // 0x27b2c4: 0xaa70  tge         $zero, $zero, 681
    ctx->pc = 0x27b2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b2c8:
    // 0x27b2c8: 0x0  nop
    ctx->pc = 0x27b2c8u;
    // NOP
label_27b2cc:
    // 0x27b2cc: 0x0  nop
    ctx->pc = 0x27b2ccu;
    // NOP
label_27b2d0:
    // 0x27b2d0: 0x11ff4  teq         $zero, $at, 127
    ctx->pc = 0x27b2d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b2d4:
    // 0x27b2d4: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x27b2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27b2d8:
    // 0x27b2d8: 0x0  nop
    ctx->pc = 0x27b2d8u;
    // NOP
label_27b2dc:
    // 0x27b2dc: 0x0  nop
    ctx->pc = 0x27b2dcu;
    // NOP
label_27b2e0:
    // 0x27b2e0: 0x11ffe  dsrl32      $v1, $at, 31
    ctx->pc = 0x27b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 31));
label_27b2e4:
    // 0x27b2e4: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x27b2e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27b2e8:
    // 0x27b2e8: 0x0  nop
    ctx->pc = 0x27b2e8u;
    // NOP
label_27b2ec:
    // 0x27b2ec: 0x0  nop
    ctx->pc = 0x27b2ecu;
    // NOP
label_27b2f0:
    // 0x27b2f0: 0x1200c  .word       0x0001200C                   # syscall     128 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2f0u;
    ctx->pc = 0x27B2F4u;
runtime->handleSyscall(rdram, ctx, 0x480u);
label_27b2f4:
    // 0x27b2f4: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x27b2f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27b2f8:
    // 0x27b2f8: 0x0  nop
    ctx->pc = 0x27b2f8u;
    // NOP
label_27b2fc:
    // 0x27b2fc: 0x0  nop
    ctx->pc = 0x27b2fcu;
    // NOP
label_27b300:
    // 0x27b300: 0x12019  .word       0x00012019                   # multu       $zero, $at # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b300u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b304:
    // 0x27b304: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b304u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b308:
    // 0x27b308: 0x0  nop
    ctx->pc = 0x27b308u;
    // NOP
label_27b30c:
    // 0x27b30c: 0x0  nop
    ctx->pc = 0x27b30cu;
    // NOP
label_27b310:
    // 0x27b310: 0x12027  nor         $a0, $zero, $at
    ctx->pc = 0x27b310u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27b314:
    // 0x27b314: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x27b314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b318:
    // 0x27b318: 0x0  nop
    ctx->pc = 0x27b318u;
    // NOP
label_27b31c:
    // 0x27b31c: 0x0  nop
    ctx->pc = 0x27b31cu;
    // NOP
label_27b320:
    // 0x27b320: 0x12037  .word       0x00012037                   # INVALID     $zero, $at, 0x2037 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27B320 raw=0x00012037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b324:
    // 0x27b324: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b328:
    // 0x27b328: 0x0  nop
    ctx->pc = 0x27b328u;
    // NOP
label_27b32c:
    // 0x27b32c: 0x0  nop
    ctx->pc = 0x27b32cu;
    // NOP
label_27b330:
    // 0x27b330: 0x12044  .word       0x00012044                   # sllv        $a0, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b334:
    // 0x27b334: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x27b334u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27b338:
    // 0x27b338: 0x0  nop
    ctx->pc = 0x27b338u;
    // NOP
label_27b33c:
    // 0x27b33c: 0x0  nop
    ctx->pc = 0x27b33cu;
    // NOP
label_27b340:
    // 0x27b340: 0x12058  .word       0x00012058                   # mult        $a0, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b344:
    // 0x27b344: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b344u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27b348:
    // 0x27b348: 0x0  nop
    ctx->pc = 0x27b348u;
    // NOP
label_27b34c:
    // 0x27b34c: 0x0  nop
    ctx->pc = 0x27b34cu;
    // NOP
label_27b350:
    // 0x27b350: 0x12062  .word       0x00012062                   # neg         $a0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b350u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_27b354:
    // 0x27b354: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x27b354u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27b358:
    // 0x27b358: 0x0  nop
    ctx->pc = 0x27b358u;
    // NOP
label_27b35c:
    // 0x27b35c: 0x0  nop
    ctx->pc = 0x27b35cu;
    // NOP
label_27b360:
    // 0x27b360: 0x12075  .word       0x00012075                   # INVALID     $zero, $at, 0x2075 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B360 raw=0x00012075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b364:
    // 0x27b364: 0x6b10  .word       0x00006B10                   # mfhi        $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b364u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b368:
    // 0x27b368: 0x0  nop
    ctx->pc = 0x27b368u;
    // NOP
label_27b36c:
    // 0x27b36c: 0x0  nop
    ctx->pc = 0x27b36cu;
    // NOP
label_27b370:
    // 0x27b370: 0x12083  sra         $a0, $at, 2
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 2));
label_27b374:
    // 0x27b374: 0xa580  sll         $s4, $zero, 22
    ctx->pc = 0x27b374u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27b378:
    // 0x27b378: 0x0  nop
    ctx->pc = 0x27b378u;
    // NOP
label_27b37c:
    // 0x27b37c: 0x0  nop
    ctx->pc = 0x27b37cu;
    // NOP
label_27b380:
    // 0x27b380: 0x12098  .word       0x00012098                   # mult        $a0, $zero, $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b384:
    // 0x27b384: 0x6650  .word       0x00006650                   # mfhi        $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b384u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27b388:
    // 0x27b388: 0x0  nop
    ctx->pc = 0x27b388u;
    // NOP
label_27b38c:
    // 0x27b38c: 0x0  nop
    ctx->pc = 0x27b38cu;
    // NOP
label_27b390:
    // 0x27b390: 0x120a5  .word       0x000120A5                   # or          $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b394:
    // 0x27b394: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27b398:
    // 0x27b398: 0x0  nop
    ctx->pc = 0x27b398u;
    // NOP
label_27b39c:
    // 0x27b39c: 0x0  nop
    ctx->pc = 0x27b39cu;
    // NOP
label_27b3a0:
    // 0x27b3a0: 0x120b6  tne         $zero, $at, 130
    ctx->pc = 0x27b3a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b3a4:
    // 0x27b3a4: 0x43e0  .word       0x000043E0                   # add         $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27b3a8:
    // 0x27b3a8: 0x0  nop
    ctx->pc = 0x27b3a8u;
    // NOP
label_27b3ac:
    // 0x27b3ac: 0x0  nop
    ctx->pc = 0x27b3acu;
    // NOP
label_27b3b0:
    // 0x27b3b0: 0x120bf  dsra32      $a0, $at, 2
    ctx->pc = 0x27b3b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 2));
label_27b3b4:
    // 0x27b3b4: 0xab20  .word       0x0000AB20                   # add         $s5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b3b8:
    // 0x27b3b8: 0x0  nop
    ctx->pc = 0x27b3b8u;
    // NOP
label_27b3bc:
    // 0x27b3bc: 0x0  nop
    ctx->pc = 0x27b3bcu;
    // NOP
label_27b3c0:
    // 0x27b3c0: 0x120d5  .word       0x000120D5                   # INVALID     $zero, $at, 0x20D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27B3C0 raw=0x000120D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b3c4:
    // 0x27b3c4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27b3c8:
    // 0x27b3c8: 0x0  nop
    ctx->pc = 0x27b3c8u;
    // NOP
label_27b3cc:
    // 0x27b3cc: 0x0  nop
    ctx->pc = 0x27b3ccu;
    // NOP
label_27b3d0:
    // 0x27b3d0: 0x120e0  .word       0x000120E0                   # add         $a0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27b3d4:
    // 0x27b3d4: 0x6f40  sll         $t5, $zero, 29
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27b3d8:
    // 0x27b3d8: 0x0  nop
    ctx->pc = 0x27b3d8u;
    // NOP
label_27b3dc:
    // 0x27b3dc: 0x0  nop
    ctx->pc = 0x27b3dcu;
    // NOP
label_27b3e0:
    // 0x27b3e0: 0x120ee  .word       0x000120EE                   # dsub        $a0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b3e4:
    // 0x27b3e4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x27b3e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27b3e8:
    // 0x27b3e8: 0x0  nop
    ctx->pc = 0x27b3e8u;
    // NOP
label_27b3ec:
    // 0x27b3ec: 0x0  nop
    ctx->pc = 0x27b3ecu;
    // NOP
label_27b3f0:
    // 0x27b3f0: 0x120fa  dsrl        $a0, $at, 3
    ctx->pc = 0x27b3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 3);
label_27b3f4:
    // 0x27b3f4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b3f8:
    // 0x27b3f8: 0x0  nop
    ctx->pc = 0x27b3f8u;
    // NOP
label_27b3fc:
    // 0x27b3fc: 0x0  nop
    ctx->pc = 0x27b3fcu;
    // NOP
label_27b400:
    // 0x27b400: 0x1210c  .word       0x0001210C                   # syscall     132 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b400u;
    ctx->pc = 0x27B404u;
runtime->handleSyscall(rdram, ctx, 0x484u);
label_27b404:
    // 0x27b404: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b404u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27b408:
    // 0x27b408: 0x0  nop
    ctx->pc = 0x27b408u;
    // NOP
label_27b40c:
    // 0x27b40c: 0x0  nop
    ctx->pc = 0x27b40cu;
    // NOP
label_27b410:
    // 0x27b410: 0x12118  .word       0x00012118                   # mult        $a0, $zero, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b414:
    // 0x27b414: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x27b414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b418:
    // 0x27b418: 0x0  nop
    ctx->pc = 0x27b418u;
    // NOP
label_27b41c:
    // 0x27b41c: 0x0  nop
    ctx->pc = 0x27b41cu;
    // NOP
label_27b420:
    // 0x27b420: 0x1212c  .word       0x0001212C                   # dadd        $a0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b424:
    // 0x27b424: 0x93b0  tge         $zero, $zero, 590
    ctx->pc = 0x27b424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b428:
    // 0x27b428: 0x0  nop
    ctx->pc = 0x27b428u;
    // NOP
label_27b42c:
    // 0x27b42c: 0x0  nop
    ctx->pc = 0x27b42cu;
    // NOP
label_27b430:
    // 0x27b430: 0x1213f  dsra32      $a0, $at, 4
    ctx->pc = 0x27b430u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 4));
label_27b434:
    // 0x27b434: 0x8fc0  sll         $s1, $zero, 31
    ctx->pc = 0x27b434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27b438:
    // 0x27b438: 0x0  nop
    ctx->pc = 0x27b438u;
    // NOP
label_27b43c:
    // 0x27b43c: 0x0  nop
    ctx->pc = 0x27b43cu;
    // NOP
label_27b440:
    // 0x27b440: 0x12151  .word       0x00012151                   # mthi        $zero # 00012140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b440u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b444:
    // 0x27b444: 0x8b20  .word       0x00008B20                   # add         $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b448:
    // 0x27b448: 0x0  nop
    ctx->pc = 0x27b448u;
    // NOP
label_27b44c:
    // 0x27b44c: 0x0  nop
    ctx->pc = 0x27b44cu;
    // NOP
label_27b450:
    // 0x27b450: 0x12163  .word       0x00012163                   # negu        $a0, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b454:
    // 0x27b454: 0x7bb0  tge         $zero, $zero, 494
    ctx->pc = 0x27b454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b458:
    // 0x27b458: 0x0  nop
    ctx->pc = 0x27b458u;
    // NOP
label_27b45c:
    // 0x27b45c: 0x0  nop
    ctx->pc = 0x27b45cu;
    // NOP
label_27b460:
    // 0x27b460: 0x12173  tltu        $zero, $at, 133
    ctx->pc = 0x27b460u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b464:
    // 0x27b464: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b464u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27b468:
    // 0x27b468: 0x0  nop
    ctx->pc = 0x27b468u;
    // NOP
label_27b46c:
    // 0x27b46c: 0x0  nop
    ctx->pc = 0x27b46cu;
    // NOP
label_27b470:
    // 0x27b470: 0x12185  .word       0x00012185                   # INVALID     $zero, $at, 0x2185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27B470 raw=0x00012185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b474:
    // 0x27b474: 0xa290  .word       0x0000A290                   # mfhi        $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b474u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b478:
    // 0x27b478: 0x0  nop
    ctx->pc = 0x27b478u;
    // NOP
label_27b47c:
    // 0x27b47c: 0x0  nop
    ctx->pc = 0x27b47cu;
    // NOP
label_27b480:
    // 0x27b480: 0x1219a  .word       0x0001219A                   # div         $a0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b480u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27b484:
    // 0x27b484: 0x9580  sll         $s2, $zero, 22
    ctx->pc = 0x27b484u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27b488:
    // 0x27b488: 0x0  nop
    ctx->pc = 0x27b488u;
    // NOP
label_27b48c:
    // 0x27b48c: 0x0  nop
    ctx->pc = 0x27b48cu;
    // NOP
label_27b490:
    // 0x27b490: 0x121ad  .word       0x000121AD                   # daddu       $a0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27b494:
    // 0x27b494: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x27b494u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27b498:
    // 0x27b498: 0x0  nop
    ctx->pc = 0x27b498u;
    // NOP
label_27b49c:
    // 0x27b49c: 0x0  nop
    ctx->pc = 0x27b49cu;
    // NOP
label_27b4a0:
    // 0x27b4a0: 0x121c3  sra         $a0, $at, 7
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 7));
label_27b4a4:
    // 0x27b4a4: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x27b4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27b4a8:
    // 0x27b4a8: 0x0  nop
    ctx->pc = 0x27b4a8u;
    // NOP
label_27b4ac:
    // 0x27b4ac: 0x0  nop
    ctx->pc = 0x27b4acu;
    // NOP
label_27b4b0:
    // 0x27b4b0: 0x121d6  .word       0x000121D6                   # dsrlv       $a0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b4b4:
    // 0x27b4b4: 0x8aa0  .word       0x00008AA0                   # add         $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b4b8:
    // 0x27b4b8: 0x0  nop
    ctx->pc = 0x27b4b8u;
    // NOP
label_27b4bc:
    // 0x27b4bc: 0x0  nop
    ctx->pc = 0x27b4bcu;
    // NOP
label_27b4c0:
    // 0x27b4c0: 0x121e8  .word       0x000121E8                   # mfsa        $a0 # 000101C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b4c0u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_27b4c4:
    // 0x27b4c4: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x27b4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b4c8:
    // 0x27b4c8: 0x0  nop
    ctx->pc = 0x27b4c8u;
    // NOP
label_27b4cc:
    // 0x27b4cc: 0x0  nop
    ctx->pc = 0x27b4ccu;
    // NOP
label_27b4d0:
    // 0x27b4d0: 0x121f8  dsll        $a0, $at, 7
    ctx->pc = 0x27b4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 7);
label_27b4d4:
    // 0x27b4d4: 0x8cb0  tge         $zero, $zero, 562
    ctx->pc = 0x27b4d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b4d8:
    // 0x27b4d8: 0x0  nop
    ctx->pc = 0x27b4d8u;
    // NOP
label_27b4dc:
    // 0x27b4dc: 0x0  nop
    ctx->pc = 0x27b4dcu;
    // NOP
label_27b4e0:
    // 0x27b4e0: 0x1220a  .word       0x0001220A                   # movz        $a0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4e0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_27b4e4:
    // 0x27b4e4: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b4e8:
    // 0x27b4e8: 0x0  nop
    ctx->pc = 0x27b4e8u;
    // NOP
label_27b4ec:
    // 0x27b4ec: 0x0  nop
    ctx->pc = 0x27b4ecu;
    // NOP
label_27b4f0:
    // 0x27b4f0: 0x12217  .word       0x00012217                   # dsrav       $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b4f4:
    // 0x27b4f4: 0x6810  mfhi        $t5
    ctx->pc = 0x27b4f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b4f8:
    // 0x27b4f8: 0x0  nop
    ctx->pc = 0x27b4f8u;
    // NOP
label_27b4fc:
    // 0x27b4fc: 0x0  nop
    ctx->pc = 0x27b4fcu;
    // NOP
label_27b500:
    // 0x27b500: 0x12225  .word       0x00012225                   # or          $a0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b504:
    // 0x27b504: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b504u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27b508:
    // 0x27b508: 0x0  nop
    ctx->pc = 0x27b508u;
    // NOP
label_27b50c:
    // 0x27b50c: 0x0  nop
    ctx->pc = 0x27b50cu;
    // NOP
label_27b510:
    // 0x27b510: 0x12235  .word       0x00012235                   # INVALID     $zero, $at, 0x2235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B510 raw=0x00012235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b514:
    // 0x27b514: 0xc8f0  tge         $zero, $zero, 803
    ctx->pc = 0x27b514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b518:
    // 0x27b518: 0x0  nop
    ctx->pc = 0x27b518u;
    // NOP
label_27b51c:
    // 0x27b51c: 0x0  nop
    ctx->pc = 0x27b51cu;
    // NOP
label_27b520:
    // 0x27b520: 0x1224f  .word       0x0001224F                   # sync # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b524:
    // 0x27b524: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b524u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b528:
    // 0x27b528: 0x0  nop
    ctx->pc = 0x27b528u;
    // NOP
label_27b52c:
    // 0x27b52c: 0x0  nop
    ctx->pc = 0x27b52cu;
    // NOP
label_27b530:
    // 0x27b530: 0x12265  .word       0x00012265                   # or          $a0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b534:
    // 0x27b534: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b534u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b538:
    // 0x27b538: 0x0  nop
    ctx->pc = 0x27b538u;
    // NOP
label_27b53c:
    // 0x27b53c: 0x0  nop
    ctx->pc = 0x27b53cu;
    // NOP
label_27b540:
    // 0x27b540: 0x1227b  dsra        $a0, $at, 9
    ctx->pc = 0x27b540u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 9);
label_27b544:
    // 0x27b544: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b548:
    // 0x27b548: 0x0  nop
    ctx->pc = 0x27b548u;
    // NOP
label_27b54c:
    // 0x27b54c: 0x0  nop
    ctx->pc = 0x27b54cu;
    // NOP
label_27b550:
    // 0x27b550: 0x12291  .word       0x00012291                   # mthi        $zero # 00012280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b550u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b554:
    // 0x27b554: 0xc840  sll         $t9, $zero, 1
    ctx->pc = 0x27b554u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27b558:
    // 0x27b558: 0x0  nop
    ctx->pc = 0x27b558u;
    // NOP
label_27b55c:
    // 0x27b55c: 0x0  nop
    ctx->pc = 0x27b55cu;
    // NOP
label_27b560:
    // 0x27b560: 0x122ab  .word       0x000122AB                   # sltu        $a0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b560u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27b564:
    // 0x27b564: 0xaf10  .word       0x0000AF10                   # mfhi        $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b564u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b568:
    // 0x27b568: 0x0  nop
    ctx->pc = 0x27b568u;
    // NOP
label_27b56c:
    // 0x27b56c: 0x0  nop
    ctx->pc = 0x27b56cu;
    // NOP
label_27b570:
    // 0x27b570: 0x122c1  .word       0x000122C1                   # INVALID     $zero, $at, 0x22C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27B570 raw=0x000122C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b574:
    // 0x27b574: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b574u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27b578:
    // 0x27b578: 0x0  nop
    ctx->pc = 0x27b578u;
    // NOP
label_27b57c:
    // 0x27b57c: 0x0  nop
    ctx->pc = 0x27b57cu;
    // NOP
label_27b580:
    // 0x27b580: 0x122d2  .word       0x000122D2                   # mflo        $a0 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b580u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_27b584:
    // 0x27b584: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b584u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27b588:
    // 0x27b588: 0x0  nop
    ctx->pc = 0x27b588u;
    // NOP
label_27b58c:
    // 0x27b58c: 0x0  nop
    ctx->pc = 0x27b58cu;
    // NOP
label_27b590:
    // 0x27b590: 0x122e6  .word       0x000122E6                   # xor         $a0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27b594:
    // 0x27b594: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x27b594u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27b598:
    // 0x27b598: 0x0  nop
    ctx->pc = 0x27b598u;
    // NOP
label_27b59c:
    // 0x27b59c: 0x0  nop
    ctx->pc = 0x27b59cu;
    // NOP
label_27b5a0:
    // 0x27b5a0: 0x122fa  dsrl        $a0, $at, 11
    ctx->pc = 0x27b5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 11);
label_27b5a4:
    // 0x27b5a4: 0xb780  sll         $s6, $zero, 30
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27b5a8:
    // 0x27b5a8: 0x0  nop
    ctx->pc = 0x27b5a8u;
    // NOP
label_27b5ac:
    // 0x27b5ac: 0x0  nop
    ctx->pc = 0x27b5acu;
    // NOP
label_27b5b0:
    // 0x27b5b0: 0x12311  .word       0x00012311                   # mthi        $zero # 00012300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b5b4:
    // 0x27b5b4: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27b5b8:
    // 0x27b5b8: 0x0  nop
    ctx->pc = 0x27b5b8u;
    // NOP
label_27b5bc:
    // 0x27b5bc: 0x0  nop
    ctx->pc = 0x27b5bcu;
    // NOP
label_27b5c0:
    // 0x27b5c0: 0x12325  .word       0x00012325                   # or          $a0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b5c4:
    // 0x27b5c4: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27b5c8:
    // 0x27b5c8: 0x0  nop
    ctx->pc = 0x27b5c8u;
    // NOP
label_27b5cc:
    // 0x27b5cc: 0x0  nop
    ctx->pc = 0x27b5ccu;
    // NOP
label_27b5d0:
    // 0x27b5d0: 0x1233b  dsra        $a0, $at, 12
    ctx->pc = 0x27b5d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 12);
label_27b5d4:
    // 0x27b5d4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x27b5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27b5d8:
    // 0x27b5d8: 0x0  nop
    ctx->pc = 0x27b5d8u;
    // NOP
label_27b5dc:
    // 0x27b5dc: 0x0  nop
    ctx->pc = 0x27b5dcu;
    // NOP
label_27b5e0:
    // 0x27b5e0: 0x1234e  .word       0x0001234E                   # INVALID     $zero, $at, 0x234E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B5E0 raw=0x0001234E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b5e4:
    // 0x27b5e4: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27b5e8:
    // 0x27b5e8: 0x0  nop
    ctx->pc = 0x27b5e8u;
    // NOP
label_27b5ec:
    // 0x27b5ec: 0x0  nop
    ctx->pc = 0x27b5ecu;
    // NOP
label_27b5f0:
    // 0x27b5f0: 0x12365  .word       0x00012365                   # or          $a0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b5f4:
    // 0x27b5f4: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5f4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b5f8:
    // 0x27b5f8: 0x0  nop
    ctx->pc = 0x27b5f8u;
    // NOP
label_27b5fc:
    // 0x27b5fc: 0x0  nop
    ctx->pc = 0x27b5fcu;
    // NOP
label_27b600:
    // 0x27b600: 0x1237a  dsrl        $a0, $at, 13
    ctx->pc = 0x27b600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 13);
label_27b604:
    // 0x27b604: 0xb340  sll         $s6, $zero, 13
    ctx->pc = 0x27b604u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27b608:
    // 0x27b608: 0x0  nop
    ctx->pc = 0x27b608u;
    // NOP
label_27b60c:
    // 0x27b60c: 0x0  nop
    ctx->pc = 0x27b60cu;
    // NOP
label_27b610:
    // 0x27b610: 0x12391  .word       0x00012391                   # mthi        $zero # 00012380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b610u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b614:
    // 0x27b614: 0xd250  .word       0x0000D250                   # mfhi        $k0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b614u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_27b618:
    // 0x27b618: 0x0  nop
    ctx->pc = 0x27b618u;
    // NOP
label_27b61c:
    // 0x27b61c: 0x0  nop
    ctx->pc = 0x27b61cu;
    // NOP
label_27b620:
    // 0x27b620: 0x123ac  .word       0x000123AC                   # dadd        $a0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b620u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b624:
    // 0x27b624: 0xa830  tge         $zero, $zero, 672
    ctx->pc = 0x27b624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b628:
    // 0x27b628: 0x0  nop
    ctx->pc = 0x27b628u;
    // NOP
label_27b62c:
    // 0x27b62c: 0x0  nop
    ctx->pc = 0x27b62cu;
    // NOP
label_27b630:
    // 0x27b630: 0x123c2  srl         $a0, $at, 15
    ctx->pc = 0x27b630u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_27b634:
    // 0x27b634: 0xaf90  .word       0x0000AF90                   # mfhi        $s5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b634u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b638:
    // 0x27b638: 0x0  nop
    ctx->pc = 0x27b638u;
    // NOP
label_27b63c:
    // 0x27b63c: 0x0  nop
    ctx->pc = 0x27b63cu;
    // NOP
label_27b640:
    // 0x27b640: 0x123d8  .word       0x000123D8                   # mult        $a0, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b644:
    // 0x27b644: 0xd830  tge         $zero, $zero, 864
    ctx->pc = 0x27b644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b648:
    // 0x27b648: 0x0  nop
    ctx->pc = 0x27b648u;
    // NOP
label_27b64c:
    // 0x27b64c: 0x0  nop
    ctx->pc = 0x27b64cu;
    // NOP
label_27b650:
    // 0x27b650: 0x123f4  teq         $zero, $at, 143
    ctx->pc = 0x27b650u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b654:
    // 0x27b654: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27b658:
    // 0x27b658: 0x0  nop
    ctx->pc = 0x27b658u;
    // NOP
label_27b65c:
    // 0x27b65c: 0x0  nop
    ctx->pc = 0x27b65cu;
    // NOP
label_27b660:
    // 0x27b660: 0x12405  .word       0x00012405                   # INVALID     $zero, $at, 0x2405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27B660 raw=0x00012405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b664:
    // 0x27b664: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b664u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    ctx->pc = 0x27b668u;
    return;
}

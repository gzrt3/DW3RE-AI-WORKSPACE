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


void FUN_0014eba0_part26(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15aef0u: goto label_15aef0;
        case 0x15aef4u: goto label_15aef4;
        case 0x15aef8u: goto label_15aef8;
        case 0x15aefcu: goto label_15aefc;
        case 0x15af00u: goto label_15af00;
        case 0x15af04u: goto label_15af04;
        case 0x15af08u: goto label_15af08;
        case 0x15af0cu: goto label_15af0c;
        case 0x15af10u: goto label_15af10;
        case 0x15af14u: goto label_15af14;
        case 0x15af18u: goto label_15af18;
        case 0x15af1cu: goto label_15af1c;
        case 0x15af20u: goto label_15af20;
        case 0x15af24u: goto label_15af24;
        case 0x15af28u: goto label_15af28;
        case 0x15af2cu: goto label_15af2c;
        case 0x15af30u: goto label_15af30;
        case 0x15af34u: goto label_15af34;
        case 0x15af38u: goto label_15af38;
        case 0x15af3cu: goto label_15af3c;
        case 0x15af40u: goto label_15af40;
        case 0x15af44u: goto label_15af44;
        case 0x15af48u: goto label_15af48;
        case 0x15af4cu: goto label_15af4c;
        case 0x15af50u: goto label_15af50;
        case 0x15af54u: goto label_15af54;
        case 0x15af58u: goto label_15af58;
        case 0x15af5cu: goto label_15af5c;
        case 0x15af60u: goto label_15af60;
        case 0x15af64u: goto label_15af64;
        case 0x15af68u: goto label_15af68;
        case 0x15af6cu: goto label_15af6c;
        case 0x15af70u: goto label_15af70;
        case 0x15af74u: goto label_15af74;
        case 0x15af78u: goto label_15af78;
        case 0x15af7cu: goto label_15af7c;
        case 0x15af80u: goto label_15af80;
        case 0x15af84u: goto label_15af84;
        case 0x15af88u: goto label_15af88;
        case 0x15af8cu: goto label_15af8c;
        case 0x15af90u: goto label_15af90;
        case 0x15af94u: goto label_15af94;
        case 0x15af98u: goto label_15af98;
        case 0x15af9cu: goto label_15af9c;
        case 0x15afa0u: goto label_15afa0;
        case 0x15afa4u: goto label_15afa4;
        case 0x15afa8u: goto label_15afa8;
        case 0x15afacu: goto label_15afac;
        case 0x15afb0u: goto label_15afb0;
        case 0x15afb4u: goto label_15afb4;
        case 0x15afb8u: goto label_15afb8;
        case 0x15afbcu: goto label_15afbc;
        case 0x15afc0u: goto label_15afc0;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afc8u: goto label_15afc8;
        case 0x15afccu: goto label_15afcc;
        case 0x15afd0u: goto label_15afd0;
        case 0x15afd4u: goto label_15afd4;
        case 0x15afd8u: goto label_15afd8;
        case 0x15afdcu: goto label_15afdc;
        case 0x15afe0u: goto label_15afe0;
        case 0x15afe4u: goto label_15afe4;
        case 0x15afe8u: goto label_15afe8;
        case 0x15afecu: goto label_15afec;
        case 0x15aff0u: goto label_15aff0;
        case 0x15aff4u: goto label_15aff4;
        case 0x15aff8u: goto label_15aff8;
        case 0x15affcu: goto label_15affc;
        case 0x15b000u: goto label_15b000;
        case 0x15b004u: goto label_15b004;
        case 0x15b008u: goto label_15b008;
        case 0x15b00cu: goto label_15b00c;
        case 0x15b010u: goto label_15b010;
        case 0x15b014u: goto label_15b014;
        case 0x15b018u: goto label_15b018;
        case 0x15b01cu: goto label_15b01c;
        case 0x15b020u: goto label_15b020;
        case 0x15b024u: goto label_15b024;
        case 0x15b028u: goto label_15b028;
        case 0x15b02cu: goto label_15b02c;
        case 0x15b030u: goto label_15b030;
        case 0x15b034u: goto label_15b034;
        case 0x15b038u: goto label_15b038;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b040u: goto label_15b040;
        case 0x15b044u: goto label_15b044;
        case 0x15b048u: goto label_15b048;
        case 0x15b04cu: goto label_15b04c;
        case 0x15b050u: goto label_15b050;
        case 0x15b054u: goto label_15b054;
        case 0x15b058u: goto label_15b058;
        case 0x15b05cu: goto label_15b05c;
        case 0x15b060u: goto label_15b060;
        case 0x15b064u: goto label_15b064;
        case 0x15b068u: goto label_15b068;
        case 0x15b06cu: goto label_15b06c;
        case 0x15b070u: goto label_15b070;
        case 0x15b074u: goto label_15b074;
        case 0x15b078u: goto label_15b078;
        case 0x15b07cu: goto label_15b07c;
        case 0x15b080u: goto label_15b080;
        case 0x15b084u: goto label_15b084;
        case 0x15b088u: goto label_15b088;
        case 0x15b08cu: goto label_15b08c;
        case 0x15b090u: goto label_15b090;
        case 0x15b094u: goto label_15b094;
        case 0x15b098u: goto label_15b098;
        case 0x15b09cu: goto label_15b09c;
        case 0x15b0a0u: goto label_15b0a0;
        case 0x15b0a4u: goto label_15b0a4;
        case 0x15b0a8u: goto label_15b0a8;
        case 0x15b0acu: goto label_15b0ac;
        case 0x15b0b0u: goto label_15b0b0;
        case 0x15b0b4u: goto label_15b0b4;
        case 0x15b0b8u: goto label_15b0b8;
        case 0x15b0bcu: goto label_15b0bc;
        case 0x15b0c0u: goto label_15b0c0;
        case 0x15b0c4u: goto label_15b0c4;
        case 0x15b0c8u: goto label_15b0c8;
        case 0x15b0ccu: goto label_15b0cc;
        case 0x15b0d0u: goto label_15b0d0;
        case 0x15b0d4u: goto label_15b0d4;
        case 0x15b0d8u: goto label_15b0d8;
        case 0x15b0dcu: goto label_15b0dc;
        case 0x15b0e0u: goto label_15b0e0;
        case 0x15b0e4u: goto label_15b0e4;
        case 0x15b0e8u: goto label_15b0e8;
        case 0x15b0ecu: goto label_15b0ec;
        case 0x15b0f0u: goto label_15b0f0;
        case 0x15b0f4u: goto label_15b0f4;
        case 0x15b0f8u: goto label_15b0f8;
        case 0x15b0fcu: goto label_15b0fc;
        case 0x15b100u: goto label_15b100;
        case 0x15b104u: goto label_15b104;
        case 0x15b108u: goto label_15b108;
        case 0x15b10cu: goto label_15b10c;
        case 0x15b110u: goto label_15b110;
        case 0x15b114u: goto label_15b114;
        case 0x15b118u: goto label_15b118;
        case 0x15b11cu: goto label_15b11c;
        case 0x15b120u: goto label_15b120;
        case 0x15b124u: goto label_15b124;
        case 0x15b128u: goto label_15b128;
        case 0x15b12cu: goto label_15b12c;
        case 0x15b130u: goto label_15b130;
        case 0x15b134u: goto label_15b134;
        case 0x15b138u: goto label_15b138;
        case 0x15b13cu: goto label_15b13c;
        case 0x15b140u: goto label_15b140;
        case 0x15b144u: goto label_15b144;
        case 0x15b148u: goto label_15b148;
        case 0x15b14cu: goto label_15b14c;
        case 0x15b150u: goto label_15b150;
        case 0x15b154u: goto label_15b154;
        case 0x15b158u: goto label_15b158;
        case 0x15b15cu: goto label_15b15c;
        case 0x15b160u: goto label_15b160;
        case 0x15b164u: goto label_15b164;
        case 0x15b168u: goto label_15b168;
        case 0x15b16cu: goto label_15b16c;
        case 0x15b170u: goto label_15b170;
        case 0x15b174u: goto label_15b174;
        case 0x15b178u: goto label_15b178;
        case 0x15b17cu: goto label_15b17c;
        case 0x15b180u: goto label_15b180;
        case 0x15b184u: goto label_15b184;
        case 0x15b188u: goto label_15b188;
        case 0x15b18cu: goto label_15b18c;
        case 0x15b190u: goto label_15b190;
        case 0x15b194u: goto label_15b194;
        case 0x15b198u: goto label_15b198;
        case 0x15b19cu: goto label_15b19c;
        case 0x15b1a0u: goto label_15b1a0;
        case 0x15b1a4u: goto label_15b1a4;
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b1b0u: goto label_15b1b0;
        case 0x15b1b4u: goto label_15b1b4;
        case 0x15b1b8u: goto label_15b1b8;
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1c0u: goto label_15b1c0;
        case 0x15b1c4u: goto label_15b1c4;
        case 0x15b1c8u: goto label_15b1c8;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b1d0u: goto label_15b1d0;
        case 0x15b1d4u: goto label_15b1d4;
        case 0x15b1d8u: goto label_15b1d8;
        case 0x15b1dcu: goto label_15b1dc;
        case 0x15b1e0u: goto label_15b1e0;
        case 0x15b1e4u: goto label_15b1e4;
        case 0x15b1e8u: goto label_15b1e8;
        case 0x15b1ecu: goto label_15b1ec;
        case 0x15b1f0u: goto label_15b1f0;
        case 0x15b1f4u: goto label_15b1f4;
        case 0x15b1f8u: goto label_15b1f8;
        case 0x15b1fcu: goto label_15b1fc;
        case 0x15b200u: goto label_15b200;
        case 0x15b204u: goto label_15b204;
        case 0x15b208u: goto label_15b208;
        case 0x15b20cu: goto label_15b20c;
        case 0x15b210u: goto label_15b210;
        case 0x15b214u: goto label_15b214;
        case 0x15b218u: goto label_15b218;
        case 0x15b21cu: goto label_15b21c;
        case 0x15b220u: goto label_15b220;
        case 0x15b224u: goto label_15b224;
        case 0x15b228u: goto label_15b228;
        case 0x15b22cu: goto label_15b22c;
        case 0x15b230u: goto label_15b230;
        case 0x15b234u: goto label_15b234;
        case 0x15b238u: goto label_15b238;
        case 0x15b23cu: goto label_15b23c;
        case 0x15b240u: goto label_15b240;
        case 0x15b244u: goto label_15b244;
        case 0x15b248u: goto label_15b248;
        case 0x15b24cu: goto label_15b24c;
        case 0x15b250u: goto label_15b250;
        case 0x15b254u: goto label_15b254;
        case 0x15b258u: goto label_15b258;
        case 0x15b25cu: goto label_15b25c;
        case 0x15b260u: goto label_15b260;
        case 0x15b264u: goto label_15b264;
        case 0x15b268u: goto label_15b268;
        case 0x15b26cu: goto label_15b26c;
        case 0x15b270u: goto label_15b270;
        case 0x15b274u: goto label_15b274;
        case 0x15b278u: goto label_15b278;
        case 0x15b27cu: goto label_15b27c;
        case 0x15b280u: goto label_15b280;
        case 0x15b284u: goto label_15b284;
        case 0x15b288u: goto label_15b288;
        case 0x15b28cu: goto label_15b28c;
        case 0x15b290u: goto label_15b290;
        case 0x15b294u: goto label_15b294;
        case 0x15b298u: goto label_15b298;
        case 0x15b29cu: goto label_15b29c;
        case 0x15b2a0u: goto label_15b2a0;
        case 0x15b2a4u: goto label_15b2a4;
        case 0x15b2a8u: goto label_15b2a8;
        case 0x15b2acu: goto label_15b2ac;
        case 0x15b2b0u: goto label_15b2b0;
        case 0x15b2b4u: goto label_15b2b4;
        case 0x15b2b8u: goto label_15b2b8;
        case 0x15b2bcu: goto label_15b2bc;
        case 0x15b2c0u: goto label_15b2c0;
        case 0x15b2c4u: goto label_15b2c4;
        case 0x15b2c8u: goto label_15b2c8;
        case 0x15b2ccu: goto label_15b2cc;
        case 0x15b2d0u: goto label_15b2d0;
        case 0x15b2d4u: goto label_15b2d4;
        case 0x15b2d8u: goto label_15b2d8;
        case 0x15b2dcu: goto label_15b2dc;
        case 0x15b2e0u: goto label_15b2e0;
        case 0x15b2e4u: goto label_15b2e4;
        case 0x15b2e8u: goto label_15b2e8;
        case 0x15b2ecu: goto label_15b2ec;
        case 0x15b2f0u: goto label_15b2f0;
        case 0x15b2f4u: goto label_15b2f4;
        case 0x15b2f8u: goto label_15b2f8;
        case 0x15b2fcu: goto label_15b2fc;
        case 0x15b300u: goto label_15b300;
        case 0x15b304u: goto label_15b304;
        case 0x15b308u: goto label_15b308;
        case 0x15b30cu: goto label_15b30c;
        case 0x15b310u: goto label_15b310;
        case 0x15b314u: goto label_15b314;
        case 0x15b318u: goto label_15b318;
        case 0x15b31cu: goto label_15b31c;
        case 0x15b320u: goto label_15b320;
        case 0x15b324u: goto label_15b324;
        case 0x15b328u: goto label_15b328;
        case 0x15b32cu: goto label_15b32c;
        case 0x15b330u: goto label_15b330;
        case 0x15b334u: goto label_15b334;
        case 0x15b338u: goto label_15b338;
        case 0x15b33cu: goto label_15b33c;
        case 0x15b340u: goto label_15b340;
        case 0x15b344u: goto label_15b344;
        case 0x15b348u: goto label_15b348;
        case 0x15b34cu: goto label_15b34c;
        case 0x15b350u: goto label_15b350;
        case 0x15b354u: goto label_15b354;
        case 0x15b358u: goto label_15b358;
        case 0x15b35cu: goto label_15b35c;
        case 0x15b360u: goto label_15b360;
        case 0x15b364u: goto label_15b364;
        case 0x15b368u: goto label_15b368;
        case 0x15b36cu: goto label_15b36c;
        case 0x15b370u: goto label_15b370;
        case 0x15b374u: goto label_15b374;
        case 0x15b378u: goto label_15b378;
        case 0x15b37cu: goto label_15b37c;
        case 0x15b380u: goto label_15b380;
        case 0x15b384u: goto label_15b384;
        case 0x15b388u: goto label_15b388;
        case 0x15b38cu: goto label_15b38c;
        case 0x15b390u: goto label_15b390;
        case 0x15b394u: goto label_15b394;
        case 0x15b398u: goto label_15b398;
        case 0x15b39cu: goto label_15b39c;
        case 0x15b3a0u: goto label_15b3a0;
        case 0x15b3a4u: goto label_15b3a4;
        case 0x15b3a8u: goto label_15b3a8;
        case 0x15b3acu: goto label_15b3ac;
        case 0x15b3b0u: goto label_15b3b0;
        case 0x15b3b4u: goto label_15b3b4;
        case 0x15b3b8u: goto label_15b3b8;
        case 0x15b3bcu: goto label_15b3bc;
        case 0x15b3c0u: goto label_15b3c0;
        case 0x15b3c4u: goto label_15b3c4;
        case 0x15b3c8u: goto label_15b3c8;
        case 0x15b3ccu: goto label_15b3cc;
        case 0x15b3d0u: goto label_15b3d0;
        case 0x15b3d4u: goto label_15b3d4;
        case 0x15b3d8u: goto label_15b3d8;
        case 0x15b3dcu: goto label_15b3dc;
        case 0x15b3e0u: goto label_15b3e0;
        case 0x15b3e4u: goto label_15b3e4;
        case 0x15b3e8u: goto label_15b3e8;
        case 0x15b3ecu: goto label_15b3ec;
        case 0x15b3f0u: goto label_15b3f0;
        case 0x15b3f4u: goto label_15b3f4;
        case 0x15b3f8u: goto label_15b3f8;
        case 0x15b3fcu: goto label_15b3fc;
        case 0x15b400u: goto label_15b400;
        case 0x15b404u: goto label_15b404;
        case 0x15b408u: goto label_15b408;
        case 0x15b40cu: goto label_15b40c;
        case 0x15b410u: goto label_15b410;
        case 0x15b414u: goto label_15b414;
        case 0x15b418u: goto label_15b418;
        case 0x15b41cu: goto label_15b41c;
        case 0x15b420u: goto label_15b420;
        case 0x15b424u: goto label_15b424;
        case 0x15b428u: goto label_15b428;
        case 0x15b42cu: goto label_15b42c;
        case 0x15b430u: goto label_15b430;
        case 0x15b434u: goto label_15b434;
        case 0x15b438u: goto label_15b438;
        case 0x15b43cu: goto label_15b43c;
        case 0x15b440u: goto label_15b440;
        case 0x15b444u: goto label_15b444;
        case 0x15b448u: goto label_15b448;
        case 0x15b44cu: goto label_15b44c;
        case 0x15b450u: goto label_15b450;
        case 0x15b454u: goto label_15b454;
        case 0x15b458u: goto label_15b458;
        case 0x15b45cu: goto label_15b45c;
        case 0x15b460u: goto label_15b460;
        case 0x15b464u: goto label_15b464;
        case 0x15b468u: goto label_15b468;
        case 0x15b46cu: goto label_15b46c;
        case 0x15b470u: goto label_15b470;
        case 0x15b474u: goto label_15b474;
        case 0x15b478u: goto label_15b478;
        case 0x15b47cu: goto label_15b47c;
        case 0x15b480u: goto label_15b480;
        case 0x15b484u: goto label_15b484;
        case 0x15b488u: goto label_15b488;
        case 0x15b48cu: goto label_15b48c;
        case 0x15b490u: goto label_15b490;
        case 0x15b494u: goto label_15b494;
        case 0x15b498u: goto label_15b498;
        case 0x15b49cu: goto label_15b49c;
        case 0x15b4a0u: goto label_15b4a0;
        case 0x15b4a4u: goto label_15b4a4;
        case 0x15b4a8u: goto label_15b4a8;
        case 0x15b4acu: goto label_15b4ac;
        case 0x15b4b0u: goto label_15b4b0;
        case 0x15b4b4u: goto label_15b4b4;
        case 0x15b4b8u: goto label_15b4b8;
        case 0x15b4bcu: goto label_15b4bc;
        case 0x15b4c0u: goto label_15b4c0;
        case 0x15b4c4u: goto label_15b4c4;
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b4ccu: goto label_15b4cc;
        case 0x15b4d0u: goto label_15b4d0;
        case 0x15b4d4u: goto label_15b4d4;
        case 0x15b4d8u: goto label_15b4d8;
        case 0x15b4dcu: goto label_15b4dc;
        case 0x15b4e0u: goto label_15b4e0;
        case 0x15b4e4u: goto label_15b4e4;
        case 0x15b4e8u: goto label_15b4e8;
        case 0x15b4ecu: goto label_15b4ec;
        case 0x15b4f0u: goto label_15b4f0;
        case 0x15b4f4u: goto label_15b4f4;
        case 0x15b4f8u: goto label_15b4f8;
        case 0x15b4fcu: goto label_15b4fc;
        case 0x15b500u: goto label_15b500;
        case 0x15b504u: goto label_15b504;
        case 0x15b508u: goto label_15b508;
        case 0x15b50cu: goto label_15b50c;
        case 0x15b510u: goto label_15b510;
        case 0x15b514u: goto label_15b514;
        case 0x15b518u: goto label_15b518;
        case 0x15b51cu: goto label_15b51c;
        case 0x15b520u: goto label_15b520;
        case 0x15b524u: goto label_15b524;
        case 0x15b528u: goto label_15b528;
        case 0x15b52cu: goto label_15b52c;
        case 0x15b530u: goto label_15b530;
        case 0x15b534u: goto label_15b534;
        case 0x15b538u: goto label_15b538;
        case 0x15b53cu: goto label_15b53c;
        case 0x15b540u: goto label_15b540;
        case 0x15b544u: goto label_15b544;
        case 0x15b548u: goto label_15b548;
        case 0x15b54cu: goto label_15b54c;
        case 0x15b550u: goto label_15b550;
        case 0x15b554u: goto label_15b554;
        case 0x15b558u: goto label_15b558;
        case 0x15b55cu: goto label_15b55c;
        case 0x15b560u: goto label_15b560;
        case 0x15b564u: goto label_15b564;
        case 0x15b568u: goto label_15b568;
        case 0x15b56cu: goto label_15b56c;
        case 0x15b570u: goto label_15b570;
        case 0x15b574u: goto label_15b574;
        case 0x15b578u: goto label_15b578;
        case 0x15b57cu: goto label_15b57c;
        case 0x15b580u: goto label_15b580;
        case 0x15b584u: goto label_15b584;
        case 0x15b588u: goto label_15b588;
        case 0x15b58cu: goto label_15b58c;
        case 0x15b590u: goto label_15b590;
        case 0x15b594u: goto label_15b594;
        case 0x15b598u: goto label_15b598;
        case 0x15b59cu: goto label_15b59c;
        case 0x15b5a0u: goto label_15b5a0;
        case 0x15b5a4u: goto label_15b5a4;
        case 0x15b5a8u: goto label_15b5a8;
        case 0x15b5acu: goto label_15b5ac;
        case 0x15b5b0u: goto label_15b5b0;
        case 0x15b5b4u: goto label_15b5b4;
        case 0x15b5b8u: goto label_15b5b8;
        case 0x15b5bcu: goto label_15b5bc;
        case 0x15b5c0u: goto label_15b5c0;
        case 0x15b5c4u: goto label_15b5c4;
        case 0x15b5c8u: goto label_15b5c8;
        case 0x15b5ccu: goto label_15b5cc;
        case 0x15b5d0u: goto label_15b5d0;
        case 0x15b5d4u: goto label_15b5d4;
        case 0x15b5d8u: goto label_15b5d8;
        case 0x15b5dcu: goto label_15b5dc;
        case 0x15b5e0u: goto label_15b5e0;
        case 0x15b5e4u: goto label_15b5e4;
        case 0x15b5e8u: goto label_15b5e8;
        case 0x15b5ecu: goto label_15b5ec;
        case 0x15b5f0u: goto label_15b5f0;
        case 0x15b5f4u: goto label_15b5f4;
        case 0x15b5f8u: goto label_15b5f8;
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b600u: goto label_15b600;
        case 0x15b604u: goto label_15b604;
        case 0x15b608u: goto label_15b608;
        case 0x15b60cu: goto label_15b60c;
        case 0x15b610u: goto label_15b610;
        case 0x15b614u: goto label_15b614;
        case 0x15b618u: goto label_15b618;
        case 0x15b61cu: goto label_15b61c;
        case 0x15b620u: goto label_15b620;
        case 0x15b624u: goto label_15b624;
        case 0x15b628u: goto label_15b628;
        case 0x15b62cu: goto label_15b62c;
        case 0x15b630u: goto label_15b630;
        case 0x15b634u: goto label_15b634;
        case 0x15b638u: goto label_15b638;
        case 0x15b63cu: goto label_15b63c;
        case 0x15b640u: goto label_15b640;
        case 0x15b644u: goto label_15b644;
        case 0x15b648u: goto label_15b648;
        case 0x15b64cu: goto label_15b64c;
        case 0x15b650u: goto label_15b650;
        case 0x15b654u: goto label_15b654;
        case 0x15b658u: goto label_15b658;
        case 0x15b65cu: goto label_15b65c;
        case 0x15b660u: goto label_15b660;
        case 0x15b664u: goto label_15b664;
        case 0x15b668u: goto label_15b668;
        case 0x15b66cu: goto label_15b66c;
        case 0x15b670u: goto label_15b670;
        case 0x15b674u: goto label_15b674;
        case 0x15b678u: goto label_15b678;
        case 0x15b67cu: goto label_15b67c;
        case 0x15b680u: goto label_15b680;
        case 0x15b684u: goto label_15b684;
        case 0x15b688u: goto label_15b688;
        case 0x15b68cu: goto label_15b68c;
        case 0x15b690u: goto label_15b690;
        case 0x15b694u: goto label_15b694;
        case 0x15b698u: goto label_15b698;
        case 0x15b69cu: goto label_15b69c;
        case 0x15b6a0u: goto label_15b6a0;
        case 0x15b6a4u: goto label_15b6a4;
        case 0x15b6a8u: goto label_15b6a8;
        case 0x15b6acu: goto label_15b6ac;
        case 0x15b6b0u: goto label_15b6b0;
        case 0x15b6b4u: goto label_15b6b4;
        case 0x15b6b8u: goto label_15b6b8;
        case 0x15b6bcu: goto label_15b6bc;
        default: return;
    }

label_15aef0:
    // 0x15aef0: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_15aef4:
    if (ctx->pc == 0x15AEF4u) {
        ctx->pc = 0x15AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF0u;
        // 0x15aef4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEF8u;
        goto label_15aef8;
    }
    ctx->pc = 0x15AEF0u;
    {
        const bool branch_taken_0x15aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF0u;
        // 0x15aef4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEF8u;
label_15aef8:
    // 0x15aef8: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_15aefc:
    if (ctx->pc == 0x15AEFCu) {
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF00u;
        goto label_15af00;
    }
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF00u;
label_15af00:
    // 0x15af00: 0x100001e5  b           . + 4 + (0x1E5 << 2)
label_15af04:
    if (ctx->pc == 0x15AF04u) {
        ctx->pc = 0x15AF08u;
        goto label_15af08;
    }
    ctx->pc = 0x15AF00u;
    {
        const bool branch_taken_0x15af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af00) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF08u;
label_15af08:
    // 0x15af08: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_15af0c:
    if (ctx->pc == 0x15AF0Cu) {
        ctx->pc = 0x15AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF08u;
        // 0x15af0c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF10u;
        goto label_15af10;
    }
    ctx->pc = 0x15AF08u;
    {
        const bool branch_taken_0x15af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF08u;
        // 0x15af0c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af08) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF10u;
label_15af10:
    // 0x15af10: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_15af14:
    if (ctx->pc == 0x15AF14u) {
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF18u;
        goto label_15af18;
    }
    ctx->pc = 0x15AF10u;
    {
        const bool branch_taken_0x15af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af10) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF18u;
label_15af18:
    // 0x15af18: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15af18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15af1c:
    // 0x15af1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15af1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15af20:
    // 0x15af20: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15af24:
    // 0x15af24: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x15af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_15af28:
    // 0x15af28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15af2c:
    // 0x15af2c: 0x0  nop
    ctx->pc = 0x15af2cu;
    // NOP
label_15af30:
    // 0x15af30: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15af30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15af34:
    // 0x15af34: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15af38:
    if (ctx->pc == 0x15AF38u) {
        ctx->pc = 0x15AF3Cu;
        goto label_15af3c;
    }
    ctx->pc = 0x15AF34u;
    {
        const bool branch_taken_0x15af34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af34) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF3Cu;
label_15af3c:
    // 0x15af3c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15af3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15af40:
    // 0x15af40: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15af44:
    // 0x15af44: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15af48:
    if (ctx->pc == 0x15AF48u) {
        ctx->pc = 0x15AF4Cu;
        goto label_15af4c;
    }
    ctx->pc = 0x15AF44u;
    {
        const bool branch_taken_0x15af44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15af44) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF4Cu;
label_15af4c:
    // 0x15af4c: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15af4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15af50:
    // 0x15af50: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15af54:
    if (ctx->pc == 0x15AF54u) {
        ctx->pc = 0x15AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF50u;
        // 0x15af54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF58u;
        goto label_15af58;
    }
    ctx->pc = 0x15AF50u;
    {
        const bool branch_taken_0x15af50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF50u;
        // 0x15af54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af50) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF58u;
label_15af58:
    // 0x15af58: 0x1000000a  b           . + 4 + (0xA << 2)
label_15af5c:
    if (ctx->pc == 0x15AF5Cu) {
        ctx->pc = 0x15AF60u;
        goto label_15af60;
    }
    ctx->pc = 0x15AF58u;
    {
        const bool branch_taken_0x15af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af58) {
            ctx->pc = 0x15AF84u;
            goto label_15af84;
        }
    }
    ctx->pc = 0x15AF60u;
label_15af60:
    // 0x15af60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15af64:
    // 0x15af64: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15af64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15af68:
    // 0x15af68: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15af6c:
    if (ctx->pc == 0x15AF6Cu) {
        ctx->pc = 0x15AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF68u;
        // 0x15af6c: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF70u;
        goto label_15af70;
    }
    ctx->pc = 0x15AF68u;
    {
        const bool branch_taken_0x15af68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF68u;
        // 0x15af6c: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af68) {
            ctx->pc = 0x15AF2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15af2c;
        }
    }
    ctx->pc = 0x15AF70u;
label_15af70:
    // 0x15af70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15af74:
    // 0x15af74: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15af74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15af78:
    // 0x15af78: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15af7c:
    if (ctx->pc == 0x15AF7Cu) {
        ctx->pc = 0x15AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF78u;
        // 0x15af7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF80u;
        goto label_15af80;
    }
    ctx->pc = 0x15AF78u;
    {
        const bool branch_taken_0x15af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF78u;
        // 0x15af7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af78) {
            ctx->pc = 0x15AF2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15af2c;
        }
    }
    ctx->pc = 0x15AF80u;
label_15af80:
    // 0x15af80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15af80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15af84:
    // 0x15af84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15af88:
    if (ctx->pc == 0x15AF88u) {
        ctx->pc = 0x15AF8Cu;
        goto label_15af8c;
    }
    ctx->pc = 0x15AF84u;
    {
        const bool branch_taken_0x15af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af84) {
            ctx->pc = 0x15AF94u;
            goto label_15af94;
        }
    }
    ctx->pc = 0x15AF8Cu;
label_15af8c:
    // 0x15af8c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_15af90:
    if (ctx->pc == 0x15AF90u) {
        ctx->pc = 0x15AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF8Cu;
        // 0x15af90: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF94u;
        goto label_15af94;
    }
    ctx->pc = 0x15AF8Cu;
    {
        const bool branch_taken_0x15af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF8Cu;
        // 0x15af90: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af8c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF94u;
label_15af94:
    // 0x15af94: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_15af98:
    if (ctx->pc == 0x15AF98u) {
        ctx->pc = 0x15AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF94u;
        // 0x15af98: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF9Cu;
        goto label_15af9c;
    }
    ctx->pc = 0x15AF94u;
    {
        const bool branch_taken_0x15af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF94u;
        // 0x15af98: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af94) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF9Cu;
label_15af9c:
    // 0x15af9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15afa0:
    // 0x15afa0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15afa4:
    // 0x15afa4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15afa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15afa8:
    // 0x15afa8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15afac:
    if (ctx->pc == 0x15AFACu) {
        ctx->pc = 0x15AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA8u;
        // 0x15afac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFB0u;
        goto label_15afb0;
    }
    ctx->pc = 0x15AFA8u;
    {
        const bool branch_taken_0x15afa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA8u;
        // 0x15afac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afa8) {
            ctx->pc = 0x15AFB8u;
            goto label_15afb8;
        }
    }
    ctx->pc = 0x15AFB0u;
label_15afb0:
    // 0x15afb0: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_15afb4:
    if (ctx->pc == 0x15AFB4u) {
        ctx->pc = 0x15AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFB0u;
        // 0x15afb4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFB8u;
        goto label_15afb8;
    }
    ctx->pc = 0x15AFB0u;
    {
        const bool branch_taken_0x15afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFB0u;
        // 0x15afb4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afb0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFB8u;
label_15afb8:
    // 0x15afb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15afbc:
    if (ctx->pc == 0x15AFBCu) {
        ctx->pc = 0x15AFC0u;
        goto label_15afc0;
    }
    ctx->pc = 0x15AFB8u;
    {
        const bool branch_taken_0x15afb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15afb8) {
            ctx->pc = 0x15AFC8u;
            goto label_15afc8;
        }
    }
    ctx->pc = 0x15AFC0u;
label_15afc0:
    // 0x15afc0: 0x100001b5  b           . + 4 + (0x1B5 << 2)
label_15afc4:
    if (ctx->pc == 0x15AFC4u) {
        ctx->pc = 0x15AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC0u;
        // 0x15afc4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFC8u;
        goto label_15afc8;
    }
    ctx->pc = 0x15AFC0u;
    {
        const bool branch_taken_0x15afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC0u;
        // 0x15afc4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afc0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFC8u;
label_15afc8:
    // 0x15afc8: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_15afcc:
    if (ctx->pc == 0x15AFCCu) {
        ctx->pc = 0x15AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC8u;
        // 0x15afcc: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFD0u;
        goto label_15afd0;
    }
    ctx->pc = 0x15AFC8u;
    {
        const bool branch_taken_0x15afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC8u;
        // 0x15afcc: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afc8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFD0u;
label_15afd0:
    // 0x15afd0: 0x100001b1  b           . + 4 + (0x1B1 << 2)
label_15afd4:
    if (ctx->pc == 0x15AFD4u) {
        ctx->pc = 0x15AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD0u;
        // 0x15afd4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFD8u;
        goto label_15afd8;
    }
    ctx->pc = 0x15AFD0u;
    {
        const bool branch_taken_0x15afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD0u;
        // 0x15afd4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afd0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFD8u;
label_15afd8:
    // 0x15afd8: 0x100001af  b           . + 4 + (0x1AF << 2)
label_15afdc:
    if (ctx->pc == 0x15AFDCu) {
        ctx->pc = 0x15AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD8u;
        // 0x15afdc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFE0u;
        goto label_15afe0;
    }
    ctx->pc = 0x15AFD8u;
    {
        const bool branch_taken_0x15afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD8u;
        // 0x15afdc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afd8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFE0u;
label_15afe0:
    // 0x15afe0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15afe4:
    // 0x15afe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15afe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15afe8:
    // 0x15afe8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15afec:
    // 0x15afec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15afecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15aff0:
    // 0x15aff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aff4:
    // 0x15aff4: 0x0  nop
    ctx->pc = 0x15aff4u;
    // NOP
label_15aff8:
    // 0x15aff8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15aff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15affc:
    // 0x15affc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b000:
    if (ctx->pc == 0x15B000u) {
        ctx->pc = 0x15B004u;
        goto label_15b004;
    }
    ctx->pc = 0x15AFFCu;
    {
        const bool branch_taken_0x15affc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15affc) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B004u;
label_15b004:
    // 0x15b004: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b008:
    // 0x15b008: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b00c:
    // 0x15b00c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b010:
    if (ctx->pc == 0x15B010u) {
        ctx->pc = 0x15B014u;
        goto label_15b014;
    }
    ctx->pc = 0x15B00Cu;
    {
        const bool branch_taken_0x15b00c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b00c) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B014u;
label_15b014:
    // 0x15b014: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b018:
    // 0x15b018: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b01c:
    if (ctx->pc == 0x15B01Cu) {
        ctx->pc = 0x15B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B018u;
        // 0x15b01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B020u;
        goto label_15b020;
    }
    ctx->pc = 0x15B018u;
    {
        const bool branch_taken_0x15b018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B018u;
        // 0x15b01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b018) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B020u;
label_15b020:
    // 0x15b020: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b024:
    if (ctx->pc == 0x15B024u) {
        ctx->pc = 0x15B028u;
        goto label_15b028;
    }
    ctx->pc = 0x15B020u;
    {
        const bool branch_taken_0x15b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b020) {
            ctx->pc = 0x15B04Cu;
            goto label_15b04c;
        }
    }
    ctx->pc = 0x15B028u;
label_15b028:
    // 0x15b028: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b02c:
    // 0x15b02c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b030:
    // 0x15b030: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b034:
    if (ctx->pc == 0x15B034u) {
        ctx->pc = 0x15B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B030u;
        // 0x15b034: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B038u;
        goto label_15b038;
    }
    ctx->pc = 0x15B030u;
    {
        const bool branch_taken_0x15b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B030u;
        // 0x15b034: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b030) {
            ctx->pc = 0x15AFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aff4;
        }
    }
    ctx->pc = 0x15B038u;
label_15b038:
    // 0x15b038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b03c:
    // 0x15b03c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b040:
    // 0x15b040: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b044:
    if (ctx->pc == 0x15B044u) {
        ctx->pc = 0x15B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B040u;
        // 0x15b044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B048u;
        goto label_15b048;
    }
    ctx->pc = 0x15B040u;
    {
        const bool branch_taken_0x15b040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B040u;
        // 0x15b044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b040) {
            ctx->pc = 0x15AFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aff4;
        }
    }
    ctx->pc = 0x15B048u;
label_15b048:
    // 0x15b048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b04c:
    // 0x15b04c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_15b050:
    if (ctx->pc == 0x15B050u) {
        ctx->pc = 0x15B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B04Cu;
        // 0x15b050: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B054u;
        goto label_15b054;
    }
    ctx->pc = 0x15B04Cu;
    {
        const bool branch_taken_0x15b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B04Cu;
        // 0x15b050: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b04c) {
            ctx->pc = 0x15B1C4u;
            goto label_15b1c4;
        }
    }
    ctx->pc = 0x15B054u;
label_15b054:
    // 0x15b054: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b058:
    // 0x15b058: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b05c:
    // 0x15b05c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b060:
    // 0x15b060: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15b064:
    // 0x15b064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b068:
    // 0x15b068: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b06c:
    // 0x15b06c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b070:
    if (ctx->pc == 0x15B070u) {
        ctx->pc = 0x15B074u;
        goto label_15b074;
    }
    ctx->pc = 0x15B06Cu;
    {
        const bool branch_taken_0x15b06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b06c) {
            ctx->pc = 0x15B098u;
            goto label_15b098;
        }
    }
    ctx->pc = 0x15B074u;
label_15b074:
    // 0x15b074: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b078:
    // 0x15b078: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b07c:
    // 0x15b07c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b080:
    if (ctx->pc == 0x15B080u) {
        ctx->pc = 0x15B084u;
        goto label_15b084;
    }
    ctx->pc = 0x15B07Cu;
    {
        const bool branch_taken_0x15b07c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b07c) {
            ctx->pc = 0x15B098u;
            goto label_15b098;
        }
    }
    ctx->pc = 0x15B084u;
label_15b084:
    // 0x15b084: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b088:
    // 0x15b088: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b08c:
    if (ctx->pc == 0x15B08Cu) {
        ctx->pc = 0x15B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B088u;
        // 0x15b08c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B090u;
        goto label_15b090;
    }
    ctx->pc = 0x15B088u;
    {
        const bool branch_taken_0x15b088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B088u;
        // 0x15b08c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b088) {
            ctx->pc = 0x15B098u;
            goto label_15b098;
        }
    }
    ctx->pc = 0x15B090u;
label_15b090:
    // 0x15b090: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b094:
    if (ctx->pc == 0x15B094u) {
        ctx->pc = 0x15B098u;
        goto label_15b098;
    }
    ctx->pc = 0x15B090u;
    {
        const bool branch_taken_0x15b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b090) {
            ctx->pc = 0x15B0BCu;
            goto label_15b0bc;
        }
    }
    ctx->pc = 0x15B098u;
label_15b098:
    // 0x15b098: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b09c:
    // 0x15b09c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b0a0:
    // 0x15b0a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b0a4:
    if (ctx->pc == 0x15B0A4u) {
        ctx->pc = 0x15B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0A0u;
        // 0x15b0a4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0A8u;
        goto label_15b0a8;
    }
    ctx->pc = 0x15B0A0u;
    {
        const bool branch_taken_0x15b0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0A0u;
        // 0x15b0a4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0a0) {
            ctx->pc = 0x15B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b068;
        }
    }
    ctx->pc = 0x15B0A8u;
label_15b0a8:
    // 0x15b0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b0ac:
    // 0x15b0ac: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b0b0:
    // 0x15b0b0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b0b4:
    if (ctx->pc == 0x15B0B4u) {
        ctx->pc = 0x15B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0B0u;
        // 0x15b0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0B8u;
        goto label_15b0b8;
    }
    ctx->pc = 0x15B0B0u;
    {
        const bool branch_taken_0x15b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0B0u;
        // 0x15b0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0b0) {
            ctx->pc = 0x15B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b068;
        }
    }
    ctx->pc = 0x15B0B8u;
label_15b0b8:
    // 0x15b0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b0bc:
    // 0x15b0bc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15b0c0:
    if (ctx->pc == 0x15B0C0u) {
        ctx->pc = 0x15B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0BCu;
        // 0x15b0c0: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0C4u;
        goto label_15b0c4;
    }
    ctx->pc = 0x15B0BCu;
    {
        const bool branch_taken_0x15b0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0BCu;
        // 0x15b0c0: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0bc) {
            ctx->pc = 0x15B144u;
            goto label_15b144;
        }
    }
    ctx->pc = 0x15B0C4u;
label_15b0c4:
    // 0x15b0c4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b0c8:
    // 0x15b0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b0cc:
    // 0x15b0cc: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b0d0:
    // 0x15b0d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15b0d4:
    // 0x15b0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b0d8:
    // 0x15b0d8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b0d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b0dc:
    // 0x15b0dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b0e0:
    if (ctx->pc == 0x15B0E0u) {
        ctx->pc = 0x15B0E4u;
        goto label_15b0e4;
    }
    ctx->pc = 0x15B0DCu;
    {
        const bool branch_taken_0x15b0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0dc) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0E4u;
label_15b0e4:
    // 0x15b0e4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b0e8:
    // 0x15b0e8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b0ec:
    // 0x15b0ec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b0f0:
    if (ctx->pc == 0x15B0F0u) {
        ctx->pc = 0x15B0F4u;
        goto label_15b0f4;
    }
    ctx->pc = 0x15B0ECu;
    {
        const bool branch_taken_0x15b0ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b0ec) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0F4u;
label_15b0f4:
    // 0x15b0f4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b0f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b0f8:
    // 0x15b0f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b0fc:
    if (ctx->pc == 0x15B0FCu) {
        ctx->pc = 0x15B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F8u;
        // 0x15b0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B100u;
        goto label_15b100;
    }
    ctx->pc = 0x15B0F8u;
    {
        const bool branch_taken_0x15b0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F8u;
        // 0x15b0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0f8) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B100u;
label_15b100:
    // 0x15b100: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b104:
    if (ctx->pc == 0x15B104u) {
        ctx->pc = 0x15B108u;
        goto label_15b108;
    }
    ctx->pc = 0x15B100u;
    {
        const bool branch_taken_0x15b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b100) {
            ctx->pc = 0x15B12Cu;
            goto label_15b12c;
        }
    }
    ctx->pc = 0x15B108u;
label_15b108:
    // 0x15b108: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b10c:
    // 0x15b10c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b110:
    // 0x15b110: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b114:
    if (ctx->pc == 0x15B114u) {
        ctx->pc = 0x15B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B110u;
        // 0x15b114: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B118u;
        goto label_15b118;
    }
    ctx->pc = 0x15B110u;
    {
        const bool branch_taken_0x15b110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B110u;
        // 0x15b114: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b110) {
            ctx->pc = 0x15B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b0d8;
        }
    }
    ctx->pc = 0x15B118u;
label_15b118:
    // 0x15b118: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b11c:
    // 0x15b11c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b120:
    // 0x15b120: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b124:
    if (ctx->pc == 0x15B124u) {
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B128u;
        goto label_15b128;
    }
    ctx->pc = 0x15B120u;
    {
        const bool branch_taken_0x15b120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b120) {
            ctx->pc = 0x15B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b0d8;
        }
    }
    ctx->pc = 0x15B128u;
label_15b128:
    // 0x15b128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b12c:
    // 0x15b12c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b130:
    if (ctx->pc == 0x15B130u) {
        ctx->pc = 0x15B134u;
        goto label_15b134;
    }
    ctx->pc = 0x15B12Cu;
    {
        const bool branch_taken_0x15b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b12c) {
            ctx->pc = 0x15B13Cu;
            goto label_15b13c;
        }
    }
    ctx->pc = 0x15B134u;
label_15b134:
    // 0x15b134: 0x10000158  b           . + 4 + (0x158 << 2)
label_15b138:
    if (ctx->pc == 0x15B138u) {
        ctx->pc = 0x15B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B134u;
        // 0x15b138: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B13Cu;
        goto label_15b13c;
    }
    ctx->pc = 0x15B134u;
    {
        const bool branch_taken_0x15b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B134u;
        // 0x15b138: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b134) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B13Cu;
label_15b13c:
    // 0x15b13c: 0x10000156  b           . + 4 + (0x156 << 2)
label_15b140:
    if (ctx->pc == 0x15B140u) {
        ctx->pc = 0x15B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B13Cu;
        // 0x15b140: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B144u;
        goto label_15b144;
    }
    ctx->pc = 0x15B13Cu;
    {
        const bool branch_taken_0x15b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B13Cu;
        // 0x15b140: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b13c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B144u;
label_15b144:
    // 0x15b144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b148:
    // 0x15b148: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b14c:
    // 0x15b14c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15b150:
    // 0x15b150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b154:
    // 0x15b154: 0x0  nop
    ctx->pc = 0x15b154u;
    // NOP
label_15b158:
    // 0x15b158: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b15c:
    // 0x15b15c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b160:
    if (ctx->pc == 0x15B160u) {
        ctx->pc = 0x15B164u;
        goto label_15b164;
    }
    ctx->pc = 0x15B15Cu;
    {
        const bool branch_taken_0x15b15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b15c) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B164u;
label_15b164:
    // 0x15b164: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b168:
    // 0x15b168: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b16c:
    // 0x15b16c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b170:
    if (ctx->pc == 0x15B170u) {
        ctx->pc = 0x15B174u;
        goto label_15b174;
    }
    ctx->pc = 0x15B16Cu;
    {
        const bool branch_taken_0x15b16c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b16c) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B174u;
label_15b174:
    // 0x15b174: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b178:
    // 0x15b178: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b17c:
    if (ctx->pc == 0x15B17Cu) {
        ctx->pc = 0x15B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B178u;
        // 0x15b17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B180u;
        goto label_15b180;
    }
    ctx->pc = 0x15B178u;
    {
        const bool branch_taken_0x15b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B178u;
        // 0x15b17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b178) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B180u;
label_15b180:
    // 0x15b180: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b184:
    if (ctx->pc == 0x15B184u) {
        ctx->pc = 0x15B188u;
        goto label_15b188;
    }
    ctx->pc = 0x15B180u;
    {
        const bool branch_taken_0x15b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b180) {
            ctx->pc = 0x15B1ACu;
            goto label_15b1ac;
        }
    }
    ctx->pc = 0x15B188u;
label_15b188:
    // 0x15b188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b18c:
    // 0x15b18c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b190:
    // 0x15b190: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b194:
    if (ctx->pc == 0x15B194u) {
        ctx->pc = 0x15B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B190u;
        // 0x15b194: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B198u;
        goto label_15b198;
    }
    ctx->pc = 0x15B190u;
    {
        const bool branch_taken_0x15b190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B190u;
        // 0x15b194: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b190) {
            ctx->pc = 0x15B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b154;
        }
    }
    ctx->pc = 0x15B198u;
label_15b198:
    // 0x15b198: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b19c:
    // 0x15b19c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b1a0:
    // 0x15b1a0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b1a4:
    if (ctx->pc == 0x15B1A4u) {
        ctx->pc = 0x15B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1A0u;
        // 0x15b1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1A8u;
        goto label_15b1a8;
    }
    ctx->pc = 0x15B1A0u;
    {
        const bool branch_taken_0x15b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1A0u;
        // 0x15b1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1a0) {
            ctx->pc = 0x15B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b154;
        }
    }
    ctx->pc = 0x15B1A8u;
label_15b1a8:
    // 0x15b1a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1ac:
    // 0x15b1ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b1b0:
    if (ctx->pc == 0x15B1B0u) {
        ctx->pc = 0x15B1B4u;
        goto label_15b1b4;
    }
    ctx->pc = 0x15B1ACu;
    {
        const bool branch_taken_0x15b1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1ac) {
            ctx->pc = 0x15B1BCu;
            goto label_15b1bc;
        }
    }
    ctx->pc = 0x15B1B4u;
label_15b1b4:
    // 0x15b1b4: 0x10000138  b           . + 4 + (0x138 << 2)
label_15b1b8:
    if (ctx->pc == 0x15B1B8u) {
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1BCu;
        goto label_15b1bc;
    }
    ctx->pc = 0x15B1B4u;
    {
        const bool branch_taken_0x15b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1b4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x10000136  b           . + 4 + (0x136 << 2)
label_15b1c0:
    if (ctx->pc == 0x15B1C0u) {
        ctx->pc = 0x15B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1BCu;
        // 0x15b1c0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1C4u;
        goto label_15b1c4;
    }
    ctx->pc = 0x15B1BCu;
    {
        const bool branch_taken_0x15b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1BCu;
        // 0x15b1c0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1bc) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B1C4u;
label_15b1c4:
    // 0x15b1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1c8:
    // 0x15b1c8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b1cc:
    // 0x15b1cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15b1d0:
    // 0x15b1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1d4:
    // 0x15b1d4: 0x0  nop
    ctx->pc = 0x15b1d4u;
    // NOP
label_15b1d8:
    // 0x15b1d8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b1d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b1dc:
    // 0x15b1dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b1e0:
    if (ctx->pc == 0x15B1E0u) {
        ctx->pc = 0x15B1E4u;
        goto label_15b1e4;
    }
    ctx->pc = 0x15B1DCu;
    {
        const bool branch_taken_0x15b1dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1dc) {
            ctx->pc = 0x15B208u;
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B1E4u;
label_15b1e4:
    // 0x15b1e4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b1e8:
    // 0x15b1e8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b1ec:
    // 0x15b1ec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b1f0:
    if (ctx->pc == 0x15B1F0u) {
        ctx->pc = 0x15B1F4u;
        goto label_15b1f4;
    }
    ctx->pc = 0x15B1ECu;
    {
        const bool branch_taken_0x15b1ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b1ec) {
            ctx->pc = 0x15B208u;
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B1F4u;
label_15b1f4:
    // 0x15b1f4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b1f8:
    // 0x15b1f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b1fc:
    if (ctx->pc == 0x15B1FCu) {
        ctx->pc = 0x15B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1F8u;
        // 0x15b1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B200u;
        goto label_15b200;
    }
    ctx->pc = 0x15B1F8u;
    {
        const bool branch_taken_0x15b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1F8u;
        // 0x15b1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1f8) {
            ctx->pc = 0x15B208u;
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B200u;
label_15b200:
    // 0x15b200: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b204:
    if (ctx->pc == 0x15B204u) {
        ctx->pc = 0x15B208u;
        goto label_15b208;
    }
    ctx->pc = 0x15B200u;
    {
        const bool branch_taken_0x15b200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b200) {
            ctx->pc = 0x15B22Cu;
            goto label_15b22c;
        }
    }
    ctx->pc = 0x15B208u;
label_15b208:
    // 0x15b208: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b20c:
    // 0x15b20c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b210:
    // 0x15b210: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b214:
    if (ctx->pc == 0x15B214u) {
        ctx->pc = 0x15B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B210u;
        // 0x15b214: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B218u;
        goto label_15b218;
    }
    ctx->pc = 0x15B210u;
    {
        const bool branch_taken_0x15b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B210u;
        // 0x15b214: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b210) {
            ctx->pc = 0x15B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b1d4;
        }
    }
    ctx->pc = 0x15B218u;
label_15b218:
    // 0x15b218: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b21c:
    // 0x15b21c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b220:
    // 0x15b220: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b224:
    if (ctx->pc == 0x15B224u) {
        ctx->pc = 0x15B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B220u;
        // 0x15b224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B228u;
        goto label_15b228;
    }
    ctx->pc = 0x15B220u;
    {
        const bool branch_taken_0x15b220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B220u;
        // 0x15b224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b220) {
            ctx->pc = 0x15B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b1d4;
        }
    }
    ctx->pc = 0x15B228u;
label_15b228:
    // 0x15b228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b22c:
    // 0x15b22c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15b230:
    if (ctx->pc == 0x15B230u) {
        ctx->pc = 0x15B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B22Cu;
        // 0x15b230: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B234u;
        goto label_15b234;
    }
    ctx->pc = 0x15B22Cu;
    {
        const bool branch_taken_0x15b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B22Cu;
        // 0x15b230: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b22c) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B234u;
label_15b234:
    // 0x15b234: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b238:
    // 0x15b238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b23c:
    // 0x15b23c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b240:
    // 0x15b240: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15b244:
    // 0x15b244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b248:
    // 0x15b248: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b24c:
    // 0x15b24c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b250:
    if (ctx->pc == 0x15B250u) {
        ctx->pc = 0x15B254u;
        goto label_15b254;
    }
    ctx->pc = 0x15B24Cu;
    {
        const bool branch_taken_0x15b24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b24c) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B254u;
label_15b254:
    // 0x15b254: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b258:
    // 0x15b258: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b25c:
    // 0x15b25c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b260:
    if (ctx->pc == 0x15B260u) {
        ctx->pc = 0x15B264u;
        goto label_15b264;
    }
    ctx->pc = 0x15B25Cu;
    {
        const bool branch_taken_0x15b25c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b25c) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B264u;
label_15b264:
    // 0x15b264: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b268:
    // 0x15b268: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b26c:
    if (ctx->pc == 0x15B26Cu) {
        ctx->pc = 0x15B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B268u;
        // 0x15b26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B270u;
        goto label_15b270;
    }
    ctx->pc = 0x15B268u;
    {
        const bool branch_taken_0x15b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B268u;
        // 0x15b26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b268) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B270u;
label_15b270:
    // 0x15b270: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b274:
    if (ctx->pc == 0x15B274u) {
        ctx->pc = 0x15B278u;
        goto label_15b278;
    }
    ctx->pc = 0x15B270u;
    {
        const bool branch_taken_0x15b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b270) {
            ctx->pc = 0x15B29Cu;
            goto label_15b29c;
        }
    }
    ctx->pc = 0x15B278u;
label_15b278:
    // 0x15b278: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b27c:
    // 0x15b27c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b280:
    // 0x15b280: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b284:
    if (ctx->pc == 0x15B284u) {
        ctx->pc = 0x15B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B280u;
        // 0x15b284: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B288u;
        goto label_15b288;
    }
    ctx->pc = 0x15B280u;
    {
        const bool branch_taken_0x15b280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B280u;
        // 0x15b284: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b280) {
            ctx->pc = 0x15B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B288u;
label_15b288:
    // 0x15b288: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b28c:
    // 0x15b28c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b290:
    // 0x15b290: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b294:
    if (ctx->pc == 0x15B294u) {
        ctx->pc = 0x15B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B290u;
        // 0x15b294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B298u;
        goto label_15b298;
    }
    ctx->pc = 0x15B290u;
    {
        const bool branch_taken_0x15b290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B290u;
        // 0x15b294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b290) {
            ctx->pc = 0x15B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B298u;
label_15b298:
    // 0x15b298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b29c:
    // 0x15b29c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b2a0:
    if (ctx->pc == 0x15B2A0u) {
        ctx->pc = 0x15B2A4u;
        goto label_15b2a4;
    }
    ctx->pc = 0x15B29Cu;
    {
        const bool branch_taken_0x15b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b29c) {
            ctx->pc = 0x15B2ACu;
            goto label_15b2ac;
        }
    }
    ctx->pc = 0x15B2A4u;
label_15b2a4:
    // 0x15b2a4: 0x100000fc  b           . + 4 + (0xFC << 2)
label_15b2a8:
    if (ctx->pc == 0x15B2A8u) {
        ctx->pc = 0x15B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2A4u;
        // 0x15b2a8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2ACu;
        goto label_15b2ac;
    }
    ctx->pc = 0x15B2A4u;
    {
        const bool branch_taken_0x15b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2A4u;
        // 0x15b2a8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2a4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B2ACu;
label_15b2ac:
    // 0x15b2ac: 0x100000fa  b           . + 4 + (0xFA << 2)
label_15b2b0:
    if (ctx->pc == 0x15B2B0u) {
        ctx->pc = 0x15B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2ACu;
        // 0x15b2b0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2B4u;
        goto label_15b2b4;
    }
    ctx->pc = 0x15B2ACu;
    {
        const bool branch_taken_0x15b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2ACu;
        // 0x15b2b0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2ac) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B2B4u;
label_15b2b4:
    // 0x15b2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b2b8:
    // 0x15b2b8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b2bc:
    // 0x15b2bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15b2c0:
    // 0x15b2c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b2c4:
    // 0x15b2c4: 0x0  nop
    ctx->pc = 0x15b2c4u;
    // NOP
label_15b2c8:
    // 0x15b2c8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b2cc:
    // 0x15b2cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b2d0:
    if (ctx->pc == 0x15B2D0u) {
        ctx->pc = 0x15B2D4u;
        goto label_15b2d4;
    }
    ctx->pc = 0x15B2CCu;
    {
        const bool branch_taken_0x15b2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2cc) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2D4u;
label_15b2d4:
    // 0x15b2d4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b2d8:
    // 0x15b2d8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b2dc:
    // 0x15b2dc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b2e0:
    if (ctx->pc == 0x15B2E0u) {
        ctx->pc = 0x15B2E4u;
        goto label_15b2e4;
    }
    ctx->pc = 0x15B2DCu;
    {
        const bool branch_taken_0x15b2dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b2dc) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2E4u;
label_15b2e4:
    // 0x15b2e4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b2e8:
    // 0x15b2e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b2ec:
    if (ctx->pc == 0x15B2ECu) {
        ctx->pc = 0x15B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2E8u;
        // 0x15b2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2F0u;
        goto label_15b2f0;
    }
    ctx->pc = 0x15B2E8u;
    {
        const bool branch_taken_0x15b2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2E8u;
        // 0x15b2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2e8) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2F0u;
label_15b2f0:
    // 0x15b2f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b2f4:
    if (ctx->pc == 0x15B2F4u) {
        ctx->pc = 0x15B2F8u;
        goto label_15b2f8;
    }
    ctx->pc = 0x15B2F0u;
    {
        const bool branch_taken_0x15b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2f0) {
            ctx->pc = 0x15B31Cu;
            goto label_15b31c;
        }
    }
    ctx->pc = 0x15B2F8u;
label_15b2f8:
    // 0x15b2f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b2fc:
    // 0x15b2fc: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b300:
    // 0x15b300: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b304:
    if (ctx->pc == 0x15B304u) {
        ctx->pc = 0x15B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B300u;
        // 0x15b304: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B308u;
        goto label_15b308;
    }
    ctx->pc = 0x15B300u;
    {
        const bool branch_taken_0x15b300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B300u;
        // 0x15b304: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b300) {
            ctx->pc = 0x15B2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b2c4;
        }
    }
    ctx->pc = 0x15B308u;
label_15b308:
    // 0x15b308: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b30c:
    // 0x15b30c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b310:
    // 0x15b310: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b314:
    if (ctx->pc == 0x15B314u) {
        ctx->pc = 0x15B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B310u;
        // 0x15b314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B318u;
        goto label_15b318;
    }
    ctx->pc = 0x15B310u;
    {
        const bool branch_taken_0x15b310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B310u;
        // 0x15b314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b310) {
            ctx->pc = 0x15B2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b2c4;
        }
    }
    ctx->pc = 0x15B318u;
label_15b318:
    // 0x15b318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b31c:
    // 0x15b31c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b320:
    if (ctx->pc == 0x15B320u) {
        ctx->pc = 0x15B324u;
        goto label_15b324;
    }
    ctx->pc = 0x15B31Cu;
    {
        const bool branch_taken_0x15b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b31c) {
            ctx->pc = 0x15B32Cu;
            goto label_15b32c;
        }
    }
    ctx->pc = 0x15B324u;
label_15b324:
    // 0x15b324: 0x100000dc  b           . + 4 + (0xDC << 2)
label_15b328:
    if (ctx->pc == 0x15B328u) {
        ctx->pc = 0x15B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B324u;
        // 0x15b328: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B32Cu;
        goto label_15b32c;
    }
    ctx->pc = 0x15B324u;
    {
        const bool branch_taken_0x15b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B324u;
        // 0x15b328: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b324) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B32Cu;
label_15b32c:
    // 0x15b32c: 0x100000da  b           . + 4 + (0xDA << 2)
label_15b330:
    if (ctx->pc == 0x15B330u) {
        ctx->pc = 0x15B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B32Cu;
        // 0x15b330: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B334u;
        goto label_15b334;
    }
    ctx->pc = 0x15B32Cu;
    {
        const bool branch_taken_0x15b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B32Cu;
        // 0x15b330: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b32c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B334u;
label_15b334:
    // 0x15b334: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b338:
    // 0x15b338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b33c:
    // 0x15b33c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b340:
    // 0x15b340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b344:
    // 0x15b344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b348:
    // 0x15b348: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b34c:
    // 0x15b34c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b350:
    if (ctx->pc == 0x15B350u) {
        ctx->pc = 0x15B354u;
        goto label_15b354;
    }
    ctx->pc = 0x15B34Cu;
    {
        const bool branch_taken_0x15b34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b34c) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B354u;
label_15b354:
    // 0x15b354: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b358:
    // 0x15b358: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b35c:
    // 0x15b35c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b360:
    if (ctx->pc == 0x15B360u) {
        ctx->pc = 0x15B364u;
        goto label_15b364;
    }
    ctx->pc = 0x15B35Cu;
    {
        const bool branch_taken_0x15b35c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b35c) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B364u;
label_15b364:
    // 0x15b364: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b368:
    // 0x15b368: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b36c:
    if (ctx->pc == 0x15B36Cu) {
        ctx->pc = 0x15B370u;
        goto label_15b370;
    }
    ctx->pc = 0x15B368u;
    {
        const bool branch_taken_0x15b368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b368) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B370u;
label_15b370:
    // 0x15b370: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b374:
    if (ctx->pc == 0x15B374u) {
        ctx->pc = 0x15B378u;
        goto label_15b378;
    }
    ctx->pc = 0x15B370u;
    {
        const bool branch_taken_0x15b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b370) {
            ctx->pc = 0x15B39Cu;
            goto label_15b39c;
        }
    }
    ctx->pc = 0x15B378u;
label_15b378:
    // 0x15b378: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b37c:
    // 0x15b37c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b380:
    // 0x15b380: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b384:
    if (ctx->pc == 0x15B384u) {
        ctx->pc = 0x15B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B380u;
        // 0x15b384: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B388u;
        goto label_15b388;
    }
    ctx->pc = 0x15B380u;
    {
        const bool branch_taken_0x15b380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B380u;
        // 0x15b384: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b380) {
            ctx->pc = 0x15B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b348;
        }
    }
    ctx->pc = 0x15B388u;
label_15b388:
    // 0x15b388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b38c:
    // 0x15b38c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b390:
    // 0x15b390: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b394:
    if (ctx->pc == 0x15B394u) {
        ctx->pc = 0x15B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B390u;
        // 0x15b394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B398u;
        goto label_15b398;
    }
    ctx->pc = 0x15B390u;
    {
        const bool branch_taken_0x15b390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B390u;
        // 0x15b394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b390) {
            ctx->pc = 0x15B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b348;
        }
    }
    ctx->pc = 0x15B398u;
label_15b398:
    // 0x15b398: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15b398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b39c:
    // 0x15b39c: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_15b3a0:
    if (ctx->pc == 0x15B3A0u) {
        ctx->pc = 0x15B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B39Cu;
        // 0x15b3a0: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3A4u;
        goto label_15b3a4;
    }
    ctx->pc = 0x15B39Cu;
    {
        const bool branch_taken_0x15b39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B39Cu;
        // 0x15b3a0: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b39c) {
            ctx->pc = 0x15B514u;
            goto label_15b514;
        }
    }
    ctx->pc = 0x15B3A4u;
label_15b3a4:
    // 0x15b3a4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b3a8:
    // 0x15b3a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b3ac:
    // 0x15b3ac: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b3b0:
    // 0x15b3b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15b3b4:
    // 0x15b3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b3b8:
    // 0x15b3b8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b3b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b3bc:
    // 0x15b3bc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b3c0:
    if (ctx->pc == 0x15B3C0u) {
        ctx->pc = 0x15B3C4u;
        goto label_15b3c4;
    }
    ctx->pc = 0x15B3BCu;
    {
        const bool branch_taken_0x15b3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b3bc) {
            ctx->pc = 0x15B3E8u;
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B3C4u;
label_15b3c4:
    // 0x15b3c4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b3c8:
    // 0x15b3c8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b3cc:
    // 0x15b3cc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b3d0:
    if (ctx->pc == 0x15B3D0u) {
        ctx->pc = 0x15B3D4u;
        goto label_15b3d4;
    }
    ctx->pc = 0x15B3CCu;
    {
        const bool branch_taken_0x15b3cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b3cc) {
            ctx->pc = 0x15B3E8u;
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B3D4u;
label_15b3d4:
    // 0x15b3d4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b3d8:
    // 0x15b3d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b3dc:
    if (ctx->pc == 0x15B3DCu) {
        ctx->pc = 0x15B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3D8u;
        // 0x15b3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3E0u;
        goto label_15b3e0;
    }
    ctx->pc = 0x15B3D8u;
    {
        const bool branch_taken_0x15b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3D8u;
        // 0x15b3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3d8) {
            ctx->pc = 0x15B3E8u;
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B3E0u;
label_15b3e0:
    // 0x15b3e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b3e4:
    if (ctx->pc == 0x15B3E4u) {
        ctx->pc = 0x15B3E8u;
        goto label_15b3e8;
    }
    ctx->pc = 0x15B3E0u;
    {
        const bool branch_taken_0x15b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b3e0) {
            ctx->pc = 0x15B40Cu;
            goto label_15b40c;
        }
    }
    ctx->pc = 0x15B3E8u;
label_15b3e8:
    // 0x15b3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b3ec:
    // 0x15b3ec: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b3f0:
    // 0x15b3f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b3f4:
    if (ctx->pc == 0x15B3F4u) {
        ctx->pc = 0x15B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3F0u;
        // 0x15b3f4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3F8u;
        goto label_15b3f8;
    }
    ctx->pc = 0x15B3F0u;
    {
        const bool branch_taken_0x15b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3F0u;
        // 0x15b3f4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3f0) {
            ctx->pc = 0x15B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b3b8;
        }
    }
    ctx->pc = 0x15B3F8u;
label_15b3f8:
    // 0x15b3f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b3fc:
    // 0x15b3fc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b400:
    // 0x15b400: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b404:
    if (ctx->pc == 0x15B404u) {
        ctx->pc = 0x15B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B400u;
        // 0x15b404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B408u;
        goto label_15b408;
    }
    ctx->pc = 0x15B400u;
    {
        const bool branch_taken_0x15b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B400u;
        // 0x15b404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b400) {
            ctx->pc = 0x15B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b3b8;
        }
    }
    ctx->pc = 0x15B408u;
label_15b408:
    // 0x15b408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b40c:
    // 0x15b40c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15b410:
    if (ctx->pc == 0x15B410u) {
        ctx->pc = 0x15B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B40Cu;
        // 0x15b410: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B414u;
        goto label_15b414;
    }
    ctx->pc = 0x15B40Cu;
    {
        const bool branch_taken_0x15b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B40Cu;
        // 0x15b410: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b40c) {
            ctx->pc = 0x15B494u;
            goto label_15b494;
        }
    }
    ctx->pc = 0x15B414u;
label_15b414:
    // 0x15b414: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b418:
    // 0x15b418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b41c:
    // 0x15b41c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b420:
    // 0x15b420: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15b424:
    // 0x15b424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b428:
    // 0x15b428: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b42c:
    // 0x15b42c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b430:
    if (ctx->pc == 0x15B430u) {
        ctx->pc = 0x15B434u;
        goto label_15b434;
    }
    ctx->pc = 0x15B42Cu;
    {
        const bool branch_taken_0x15b42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b42c) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B434u;
label_15b434:
    // 0x15b434: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b438:
    // 0x15b438: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b43c:
    // 0x15b43c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b440:
    if (ctx->pc == 0x15B440u) {
        ctx->pc = 0x15B444u;
        goto label_15b444;
    }
    ctx->pc = 0x15B43Cu;
    {
        const bool branch_taken_0x15b43c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b43c) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B444u;
label_15b444:
    // 0x15b444: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b448:
    // 0x15b448: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b44c:
    if (ctx->pc == 0x15B44Cu) {
        ctx->pc = 0x15B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B448u;
        // 0x15b44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B450u;
        goto label_15b450;
    }
    ctx->pc = 0x15B448u;
    {
        const bool branch_taken_0x15b448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B448u;
        // 0x15b44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b448) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B450u;
label_15b450:
    // 0x15b450: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b454:
    if (ctx->pc == 0x15B454u) {
        ctx->pc = 0x15B458u;
        goto label_15b458;
    }
    ctx->pc = 0x15B450u;
    {
        const bool branch_taken_0x15b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b450) {
            ctx->pc = 0x15B47Cu;
            goto label_15b47c;
        }
    }
    ctx->pc = 0x15B458u;
label_15b458:
    // 0x15b458: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b45c:
    // 0x15b45c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b460:
    // 0x15b460: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b464:
    if (ctx->pc == 0x15B464u) {
        ctx->pc = 0x15B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B460u;
        // 0x15b464: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B468u;
        goto label_15b468;
    }
    ctx->pc = 0x15B460u;
    {
        const bool branch_taken_0x15b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B460u;
        // 0x15b464: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b460) {
            ctx->pc = 0x15B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b428;
        }
    }
    ctx->pc = 0x15B468u;
label_15b468:
    // 0x15b468: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b46c:
    // 0x15b46c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b470:
    // 0x15b470: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b474:
    if (ctx->pc == 0x15B474u) {
        ctx->pc = 0x15B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B470u;
        // 0x15b474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B478u;
        goto label_15b478;
    }
    ctx->pc = 0x15B470u;
    {
        const bool branch_taken_0x15b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B470u;
        // 0x15b474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b470) {
            ctx->pc = 0x15B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b428;
        }
    }
    ctx->pc = 0x15B478u;
label_15b478:
    // 0x15b478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b47c:
    // 0x15b47c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b480:
    if (ctx->pc == 0x15B480u) {
        ctx->pc = 0x15B484u;
        goto label_15b484;
    }
    ctx->pc = 0x15B47Cu;
    {
        const bool branch_taken_0x15b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b47c) {
            ctx->pc = 0x15B48Cu;
            goto label_15b48c;
        }
    }
    ctx->pc = 0x15B484u;
label_15b484:
    // 0x15b484: 0x10000084  b           . + 4 + (0x84 << 2)
label_15b488:
    if (ctx->pc == 0x15B488u) {
        ctx->pc = 0x15B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B484u;
        // 0x15b488: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B48Cu;
        goto label_15b48c;
    }
    ctx->pc = 0x15B484u;
    {
        const bool branch_taken_0x15b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B484u;
        // 0x15b488: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b484) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B48Cu;
label_15b48c:
    // 0x15b48c: 0x10000082  b           . + 4 + (0x82 << 2)
label_15b490:
    if (ctx->pc == 0x15B490u) {
        ctx->pc = 0x15B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B48Cu;
        // 0x15b490: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B494u;
        goto label_15b494;
    }
    ctx->pc = 0x15B48Cu;
    {
        const bool branch_taken_0x15b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B48Cu;
        // 0x15b490: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b48c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B494u;
label_15b494:
    // 0x15b494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b498:
    // 0x15b498: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b49c:
    // 0x15b49c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15b4a0:
    // 0x15b4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b4a4:
    // 0x15b4a4: 0x0  nop
    ctx->pc = 0x15b4a4u;
    // NOP
label_15b4a8:
    // 0x15b4a8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b4ac:
    // 0x15b4ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b4b0:
    if (ctx->pc == 0x15B4B0u) {
        ctx->pc = 0x15B4B4u;
        goto label_15b4b4;
    }
    ctx->pc = 0x15B4ACu;
    {
        const bool branch_taken_0x15b4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4ac) {
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4B4u;
label_15b4b4:
    // 0x15b4b4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b4b8:
    // 0x15b4b8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b4bc:
    // 0x15b4bc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b4c0:
    if (ctx->pc == 0x15B4C0u) {
        ctx->pc = 0x15B4C4u;
        goto label_15b4c4;
    }
    ctx->pc = 0x15B4BCu;
    {
        const bool branch_taken_0x15b4bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b4bc) {
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4C4u;
label_15b4c4:
    // 0x15b4c4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b4c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b4c8:
    // 0x15b4c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b4cc:
    if (ctx->pc == 0x15B4CCu) {
        ctx->pc = 0x15B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C8u;
        // 0x15b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4D0u;
        goto label_15b4d0;
    }
    ctx->pc = 0x15B4C8u;
    {
        const bool branch_taken_0x15b4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C8u;
        // 0x15b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4c8) {
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4D0u;
label_15b4d0:
    // 0x15b4d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b4d4:
    if (ctx->pc == 0x15B4D4u) {
        ctx->pc = 0x15B4D8u;
        goto label_15b4d8;
    }
    ctx->pc = 0x15B4D0u;
    {
        const bool branch_taken_0x15b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4d0) {
            ctx->pc = 0x15B4FCu;
            goto label_15b4fc;
        }
    }
    ctx->pc = 0x15B4D8u;
label_15b4d8:
    // 0x15b4d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b4dc:
    // 0x15b4dc: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b4e0:
    // 0x15b4e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b4e4:
    if (ctx->pc == 0x15B4E4u) {
        ctx->pc = 0x15B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E0u;
        // 0x15b4e4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4E8u;
        goto label_15b4e8;
    }
    ctx->pc = 0x15B4E0u;
    {
        const bool branch_taken_0x15b4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E0u;
        // 0x15b4e4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4e0) {
            ctx->pc = 0x15B4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4a4;
        }
    }
    ctx->pc = 0x15B4E8u;
label_15b4e8:
    // 0x15b4e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b4ec:
    // 0x15b4ec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b4f0:
    // 0x15b4f0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b4f4:
    if (ctx->pc == 0x15B4F4u) {
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4F8u;
        goto label_15b4f8;
    }
    ctx->pc = 0x15B4F0u;
    {
        const bool branch_taken_0x15b4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4f0) {
            ctx->pc = 0x15B4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4a4;
        }
    }
    ctx->pc = 0x15B4F8u;
label_15b4f8:
    // 0x15b4f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b4fc:
    // 0x15b4fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b500:
    if (ctx->pc == 0x15B500u) {
        ctx->pc = 0x15B504u;
        goto label_15b504;
    }
    ctx->pc = 0x15B4FCu;
    {
        const bool branch_taken_0x15b4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4fc) {
            ctx->pc = 0x15B50Cu;
            goto label_15b50c;
        }
    }
    ctx->pc = 0x15B504u;
label_15b504:
    // 0x15b504: 0x10000064  b           . + 4 + (0x64 << 2)
label_15b508:
    if (ctx->pc == 0x15B508u) {
        ctx->pc = 0x15B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B504u;
        // 0x15b508: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B50Cu;
        goto label_15b50c;
    }
    ctx->pc = 0x15B504u;
    {
        const bool branch_taken_0x15b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B504u;
        // 0x15b508: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b504) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B50Cu;
label_15b50c:
    // 0x15b50c: 0x10000062  b           . + 4 + (0x62 << 2)
label_15b510:
    if (ctx->pc == 0x15B510u) {
        ctx->pc = 0x15B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B50Cu;
        // 0x15b510: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B514u;
        goto label_15b514;
    }
    ctx->pc = 0x15B50Cu;
    {
        const bool branch_taken_0x15b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B50Cu;
        // 0x15b510: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b50c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B514u;
label_15b514:
    // 0x15b514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b518:
    // 0x15b518: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b51c:
    // 0x15b51c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15b520:
    // 0x15b520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b524:
    // 0x15b524: 0x0  nop
    ctx->pc = 0x15b524u;
    // NOP
label_15b528:
    // 0x15b528: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b52c:
    // 0x15b52c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b530:
    if (ctx->pc == 0x15B530u) {
        ctx->pc = 0x15B534u;
        goto label_15b534;
    }
    ctx->pc = 0x15B52Cu;
    {
        const bool branch_taken_0x15b52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b52c) {
            ctx->pc = 0x15B558u;
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B534u;
label_15b534:
    // 0x15b534: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b538:
    // 0x15b538: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b53c:
    // 0x15b53c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b540:
    if (ctx->pc == 0x15B540u) {
        ctx->pc = 0x15B544u;
        goto label_15b544;
    }
    ctx->pc = 0x15B53Cu;
    {
        const bool branch_taken_0x15b53c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b53c) {
            ctx->pc = 0x15B558u;
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B544u;
label_15b544:
    // 0x15b544: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b548:
    // 0x15b548: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b54c:
    if (ctx->pc == 0x15B54Cu) {
        ctx->pc = 0x15B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B548u;
        // 0x15b54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B550u;
        goto label_15b550;
    }
    ctx->pc = 0x15B548u;
    {
        const bool branch_taken_0x15b548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B548u;
        // 0x15b54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b548) {
            ctx->pc = 0x15B558u;
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B550u;
label_15b550:
    // 0x15b550: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b554:
    if (ctx->pc == 0x15B554u) {
        ctx->pc = 0x15B558u;
        goto label_15b558;
    }
    ctx->pc = 0x15B550u;
    {
        const bool branch_taken_0x15b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b550) {
            ctx->pc = 0x15B57Cu;
            goto label_15b57c;
        }
    }
    ctx->pc = 0x15B558u;
label_15b558:
    // 0x15b558: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b55c:
    // 0x15b55c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b560:
    // 0x15b560: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b564:
    if (ctx->pc == 0x15B564u) {
        ctx->pc = 0x15B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B560u;
        // 0x15b564: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B568u;
        goto label_15b568;
    }
    ctx->pc = 0x15B560u;
    {
        const bool branch_taken_0x15b560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B560u;
        // 0x15b564: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b560) {
            ctx->pc = 0x15B524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b524;
        }
    }
    ctx->pc = 0x15B568u;
label_15b568:
    // 0x15b568: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b56c:
    // 0x15b56c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b570:
    // 0x15b570: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b574:
    if (ctx->pc == 0x15B574u) {
        ctx->pc = 0x15B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B570u;
        // 0x15b574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B578u;
        goto label_15b578;
    }
    ctx->pc = 0x15B570u;
    {
        const bool branch_taken_0x15b570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B570u;
        // 0x15b574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b570) {
            ctx->pc = 0x15B524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b524;
        }
    }
    ctx->pc = 0x15B578u;
label_15b578:
    // 0x15b578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b57c:
    // 0x15b57c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15b580:
    if (ctx->pc == 0x15B580u) {
        ctx->pc = 0x15B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B57Cu;
        // 0x15b580: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B584u;
        goto label_15b584;
    }
    ctx->pc = 0x15B57Cu;
    {
        const bool branch_taken_0x15b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B57Cu;
        // 0x15b580: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b57c) {
            ctx->pc = 0x15B604u;
            goto label_15b604;
        }
    }
    ctx->pc = 0x15B584u;
label_15b584:
    // 0x15b584: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_15b588:
    // 0x15b588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b58c:
    // 0x15b58c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b590:
    // 0x15b590: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15b594:
    // 0x15b594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b598:
    // 0x15b598: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b59c:
    // 0x15b59c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b5a0:
    if (ctx->pc == 0x15B5A0u) {
        ctx->pc = 0x15B5A4u;
        goto label_15b5a4;
    }
    ctx->pc = 0x15B59Cu;
    {
        const bool branch_taken_0x15b59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b59c) {
            ctx->pc = 0x15B5C8u;
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5A4u;
label_15b5a4:
    // 0x15b5a4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b5a8:
    // 0x15b5a8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b5ac:
    // 0x15b5ac: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b5b0:
    if (ctx->pc == 0x15B5B0u) {
        ctx->pc = 0x15B5B4u;
        goto label_15b5b4;
    }
    ctx->pc = 0x15B5ACu;
    {
        const bool branch_taken_0x15b5ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b5ac) {
            ctx->pc = 0x15B5C8u;
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5B4u;
label_15b5b4:
    // 0x15b5b4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b5b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b5b8:
    // 0x15b5b8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b5bc:
    if (ctx->pc == 0x15B5BCu) {
        ctx->pc = 0x15B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5B8u;
        // 0x15b5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5C0u;
        goto label_15b5c0;
    }
    ctx->pc = 0x15B5B8u;
    {
        const bool branch_taken_0x15b5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5B8u;
        // 0x15b5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5b8) {
            ctx->pc = 0x15B5C8u;
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5C0u;
label_15b5c0:
    // 0x15b5c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b5c4:
    if (ctx->pc == 0x15B5C4u) {
        ctx->pc = 0x15B5C8u;
        goto label_15b5c8;
    }
    ctx->pc = 0x15B5C0u;
    {
        const bool branch_taken_0x15b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5c0) {
            ctx->pc = 0x15B5ECu;
            goto label_15b5ec;
        }
    }
    ctx->pc = 0x15B5C8u;
label_15b5c8:
    // 0x15b5c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b5cc:
    // 0x15b5cc: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b5d0:
    // 0x15b5d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15b5d4:
    if (ctx->pc == 0x15B5D4u) {
        ctx->pc = 0x15B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5D0u;
        // 0x15b5d4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5D8u;
        goto label_15b5d8;
    }
    ctx->pc = 0x15B5D0u;
    {
        const bool branch_taken_0x15b5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5D0u;
        // 0x15b5d4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5d0) {
            ctx->pc = 0x15B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b598;
        }
    }
    ctx->pc = 0x15B5D8u;
label_15b5d8:
    // 0x15b5d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b5dc:
    // 0x15b5dc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b5e0:
    // 0x15b5e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15b5e4:
    if (ctx->pc == 0x15B5E4u) {
        ctx->pc = 0x15B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E0u;
        // 0x15b5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5E8u;
        goto label_15b5e8;
    }
    ctx->pc = 0x15B5E0u;
    {
        const bool branch_taken_0x15b5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E0u;
        // 0x15b5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5e0) {
            ctx->pc = 0x15B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b598;
        }
    }
    ctx->pc = 0x15B5E8u;
label_15b5e8:
    // 0x15b5e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b5ec:
    // 0x15b5ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b5f0:
    if (ctx->pc == 0x15B5F0u) {
        ctx->pc = 0x15B5F4u;
        goto label_15b5f4;
    }
    ctx->pc = 0x15B5ECu;
    {
        const bool branch_taken_0x15b5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5ec) {
            ctx->pc = 0x15B5FCu;
            goto label_15b5fc;
        }
    }
    ctx->pc = 0x15B5F4u;
label_15b5f4:
    // 0x15b5f4: 0x10000028  b           . + 4 + (0x28 << 2)
label_15b5f8:
    if (ctx->pc == 0x15B5F8u) {
        ctx->pc = 0x15B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5F4u;
        // 0x15b5f8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5FCu;
        goto label_15b5fc;
    }
    ctx->pc = 0x15B5F4u;
    {
        const bool branch_taken_0x15b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5F4u;
        // 0x15b5f8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5f4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B5FCu;
label_15b5fc:
    // 0x15b5fc: 0x10000026  b           . + 4 + (0x26 << 2)
label_15b600:
    if (ctx->pc == 0x15B600u) {
        ctx->pc = 0x15B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5FCu;
        // 0x15b600: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B604u;
        goto label_15b604;
    }
    ctx->pc = 0x15B5FCu;
    {
        const bool branch_taken_0x15b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5FCu;
        // 0x15b600: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5fc) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B604u;
label_15b604:
    // 0x15b604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b608:
    // 0x15b608: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15b60c:
    // 0x15b60c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15b610:
    // 0x15b610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b614:
    // 0x15b614: 0x0  nop
    ctx->pc = 0x15b614u;
    // NOP
label_15b618:
    // 0x15b618: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_15b61c:
    // 0x15b61c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15b620:
    if (ctx->pc == 0x15B620u) {
        ctx->pc = 0x15B624u;
        goto label_15b624;
    }
    ctx->pc = 0x15B61Cu;
    {
        const bool branch_taken_0x15b61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b61c) {
            ctx->pc = 0x15B648u;
            goto label_15b648;
        }
    }
    ctx->pc = 0x15B624u;
label_15b624:
    // 0x15b624: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15b628:
    // 0x15b628: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15b62c:
    // 0x15b62c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_15b630:
    if (ctx->pc == 0x15B630u) {
        ctx->pc = 0x15B634u;
        goto label_15b634;
    }
    ctx->pc = 0x15B62Cu;
    {
        const bool branch_taken_0x15b62c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b62c) {
            ctx->pc = 0x15B648u;
            goto label_15b648;
        }
    }
    ctx->pc = 0x15B634u;
label_15b634:
    // 0x15b634: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15b638:
    // 0x15b638: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_15b63c:
    if (ctx->pc == 0x15B63Cu) {
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B640u;
        goto label_15b640;
    }
    ctx->pc = 0x15B638u;
    {
        const bool branch_taken_0x15b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b638) {
            ctx->pc = 0x15B648u;
            goto label_15b648;
        }
    }
    ctx->pc = 0x15B640u;
label_15b640:
    // 0x15b640: 0x1000000a  b           . + 4 + (0xA << 2)
label_15b644:
    if (ctx->pc == 0x15B644u) {
        ctx->pc = 0x15B648u;
        goto label_15b648;
    }
    ctx->pc = 0x15B640u;
    {
        const bool branch_taken_0x15b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b640) {
            ctx->pc = 0x15B66Cu;
            goto label_15b66c;
        }
    }
    ctx->pc = 0x15B648u;
label_15b648:
    // 0x15b648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b64c:
    // 0x15b64c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
label_15b650:
    // 0x15b650: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15b654:
    if (ctx->pc == 0x15B654u) {
        ctx->pc = 0x15B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B650u;
        // 0x15b654: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B658u;
        goto label_15b658;
    }
    ctx->pc = 0x15B650u;
    {
        const bool branch_taken_0x15b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B650u;
        // 0x15b654: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b650) {
            ctx->pc = 0x15B614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b614;
        }
    }
    ctx->pc = 0x15B658u;
label_15b658:
    // 0x15b658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b65c:
    // 0x15b65c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_15b660:
    // 0x15b660: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15b664:
    if (ctx->pc == 0x15B664u) {
        ctx->pc = 0x15B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B660u;
        // 0x15b664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B668u;
        goto label_15b668;
    }
    ctx->pc = 0x15B660u;
    {
        const bool branch_taken_0x15b660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B660u;
        // 0x15b664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b660) {
            ctx->pc = 0x15B614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b614;
        }
    }
    ctx->pc = 0x15B668u;
label_15b668:
    // 0x15b668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b66c:
    // 0x15b66c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15b670:
    if (ctx->pc == 0x15B670u) {
        ctx->pc = 0x15B674u;
        goto label_15b674;
    }
    ctx->pc = 0x15B66Cu;
    {
        const bool branch_taken_0x15b66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b66c) {
            ctx->pc = 0x15B67Cu;
            goto label_15b67c;
        }
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x10000008  b           . + 4 + (0x8 << 2)
label_15b678:
    if (ctx->pc == 0x15B678u) {
        ctx->pc = 0x15B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B674u;
        // 0x15b678: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B67Cu;
        goto label_15b67c;
    }
    ctx->pc = 0x15B674u;
    {
        const bool branch_taken_0x15b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B674u;
        // 0x15b678: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b674) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B67Cu;
label_15b67c:
    // 0x15b67c: 0x10000006  b           . + 4 + (0x6 << 2)
label_15b680:
    if (ctx->pc == 0x15B680u) {
        ctx->pc = 0x15B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B67Cu;
        // 0x15b680: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B684u;
        goto label_15b684;
    }
    ctx->pc = 0x15B67Cu;
    {
        const bool branch_taken_0x15b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B67Cu;
        // 0x15b680: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b67c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B684u;
label_15b684:
    // 0x15b684: 0x10000004  b           . + 4 + (0x4 << 2)
label_15b688:
    if (ctx->pc == 0x15B688u) {
        ctx->pc = 0x15B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B684u;
        // 0x15b688: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B68Cu;
        goto label_15b68c;
    }
    ctx->pc = 0x15B684u;
    {
        const bool branch_taken_0x15b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B684u;
        // 0x15b688: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b684) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B68Cu;
label_15b68c:
    // 0x15b68c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15b690:
    if (ctx->pc == 0x15B690u) {
        ctx->pc = 0x15B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B68Cu;
        // 0x15b690: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B694u;
        goto label_15b694;
    }
    ctx->pc = 0x15B68Cu;
    {
        const bool branch_taken_0x15b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B68Cu;
        // 0x15b690: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b68c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B694u;
label_15b694:
    // 0x15b694: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x15b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_15b698:
    // 0x15b698: 0x3e00008  jr          $ra
label_15b69c:
    if (ctx->pc == 0x15B69Cu) {
        ctx->pc = 0x15B6A0u;
        goto label_15b6a0;
    }
    ctx->pc = 0x15B698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B6A0u;
label_15b6a0:
    // 0x15b6a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_15b6a4:
    // 0x15b6a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15b6a8:
    // 0x15b6a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15b6ac:
    // 0x15b6ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b6b0:
    // 0x15b6b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15b6b4:
    // 0x15b6b4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15b6b8:
    // 0x15b6b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15b6bc:
    // 0x15b6bc: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    ctx->pc = 0x15b6c0u;
    return;
}

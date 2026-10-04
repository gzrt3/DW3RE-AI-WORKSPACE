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


void FUN_0017d410_part324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21af80u: goto label_21af80;
        case 0x21af84u: goto label_21af84;
        case 0x21af88u: goto label_21af88;
        case 0x21af8cu: goto label_21af8c;
        case 0x21af90u: goto label_21af90;
        case 0x21af94u: goto label_21af94;
        case 0x21af98u: goto label_21af98;
        case 0x21af9cu: goto label_21af9c;
        case 0x21afa0u: goto label_21afa0;
        case 0x21afa4u: goto label_21afa4;
        case 0x21afa8u: goto label_21afa8;
        case 0x21afacu: goto label_21afac;
        case 0x21afb0u: goto label_21afb0;
        case 0x21afb4u: goto label_21afb4;
        case 0x21afb8u: goto label_21afb8;
        case 0x21afbcu: goto label_21afbc;
        case 0x21afc0u: goto label_21afc0;
        case 0x21afc4u: goto label_21afc4;
        case 0x21afc8u: goto label_21afc8;
        case 0x21afccu: goto label_21afcc;
        case 0x21afd0u: goto label_21afd0;
        case 0x21afd4u: goto label_21afd4;
        case 0x21afd8u: goto label_21afd8;
        case 0x21afdcu: goto label_21afdc;
        case 0x21afe0u: goto label_21afe0;
        case 0x21afe4u: goto label_21afe4;
        case 0x21afe8u: goto label_21afe8;
        case 0x21afecu: goto label_21afec;
        case 0x21aff0u: goto label_21aff0;
        case 0x21aff4u: goto label_21aff4;
        case 0x21aff8u: goto label_21aff8;
        case 0x21affcu: goto label_21affc;
        case 0x21b000u: goto label_21b000;
        case 0x21b004u: goto label_21b004;
        case 0x21b008u: goto label_21b008;
        case 0x21b00cu: goto label_21b00c;
        case 0x21b010u: goto label_21b010;
        case 0x21b014u: goto label_21b014;
        case 0x21b018u: goto label_21b018;
        case 0x21b01cu: goto label_21b01c;
        case 0x21b020u: goto label_21b020;
        case 0x21b024u: goto label_21b024;
        case 0x21b028u: goto label_21b028;
        case 0x21b02cu: goto label_21b02c;
        case 0x21b030u: goto label_21b030;
        case 0x21b034u: goto label_21b034;
        case 0x21b038u: goto label_21b038;
        case 0x21b03cu: goto label_21b03c;
        case 0x21b040u: goto label_21b040;
        case 0x21b044u: goto label_21b044;
        case 0x21b048u: goto label_21b048;
        case 0x21b04cu: goto label_21b04c;
        case 0x21b050u: goto label_21b050;
        case 0x21b054u: goto label_21b054;
        case 0x21b058u: goto label_21b058;
        case 0x21b05cu: goto label_21b05c;
        case 0x21b060u: goto label_21b060;
        case 0x21b064u: goto label_21b064;
        case 0x21b068u: goto label_21b068;
        case 0x21b06cu: goto label_21b06c;
        case 0x21b070u: goto label_21b070;
        case 0x21b074u: goto label_21b074;
        case 0x21b078u: goto label_21b078;
        case 0x21b07cu: goto label_21b07c;
        case 0x21b080u: goto label_21b080;
        case 0x21b084u: goto label_21b084;
        case 0x21b088u: goto label_21b088;
        case 0x21b08cu: goto label_21b08c;
        case 0x21b090u: goto label_21b090;
        case 0x21b094u: goto label_21b094;
        case 0x21b098u: goto label_21b098;
        case 0x21b09cu: goto label_21b09c;
        case 0x21b0a0u: goto label_21b0a0;
        case 0x21b0a4u: goto label_21b0a4;
        case 0x21b0a8u: goto label_21b0a8;
        case 0x21b0acu: goto label_21b0ac;
        case 0x21b0b0u: goto label_21b0b0;
        case 0x21b0b4u: goto label_21b0b4;
        case 0x21b0b8u: goto label_21b0b8;
        case 0x21b0bcu: goto label_21b0bc;
        case 0x21b0c0u: goto label_21b0c0;
        case 0x21b0c4u: goto label_21b0c4;
        case 0x21b0c8u: goto label_21b0c8;
        case 0x21b0ccu: goto label_21b0cc;
        case 0x21b0d0u: goto label_21b0d0;
        case 0x21b0d4u: goto label_21b0d4;
        case 0x21b0d8u: goto label_21b0d8;
        case 0x21b0dcu: goto label_21b0dc;
        case 0x21b0e0u: goto label_21b0e0;
        case 0x21b0e4u: goto label_21b0e4;
        case 0x21b0e8u: goto label_21b0e8;
        case 0x21b0ecu: goto label_21b0ec;
        case 0x21b0f0u: goto label_21b0f0;
        case 0x21b0f4u: goto label_21b0f4;
        case 0x21b0f8u: goto label_21b0f8;
        case 0x21b0fcu: goto label_21b0fc;
        case 0x21b100u: goto label_21b100;
        case 0x21b104u: goto label_21b104;
        case 0x21b108u: goto label_21b108;
        case 0x21b10cu: goto label_21b10c;
        case 0x21b110u: goto label_21b110;
        case 0x21b114u: goto label_21b114;
        case 0x21b118u: goto label_21b118;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b120u: goto label_21b120;
        case 0x21b124u: goto label_21b124;
        case 0x21b128u: goto label_21b128;
        case 0x21b12cu: goto label_21b12c;
        case 0x21b130u: goto label_21b130;
        case 0x21b134u: goto label_21b134;
        case 0x21b138u: goto label_21b138;
        case 0x21b13cu: goto label_21b13c;
        case 0x21b140u: goto label_21b140;
        case 0x21b144u: goto label_21b144;
        case 0x21b148u: goto label_21b148;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b150u: goto label_21b150;
        case 0x21b154u: goto label_21b154;
        case 0x21b158u: goto label_21b158;
        case 0x21b15cu: goto label_21b15c;
        case 0x21b160u: goto label_21b160;
        case 0x21b164u: goto label_21b164;
        case 0x21b168u: goto label_21b168;
        case 0x21b16cu: goto label_21b16c;
        case 0x21b170u: goto label_21b170;
        case 0x21b174u: goto label_21b174;
        case 0x21b178u: goto label_21b178;
        case 0x21b17cu: goto label_21b17c;
        case 0x21b180u: goto label_21b180;
        case 0x21b184u: goto label_21b184;
        case 0x21b188u: goto label_21b188;
        case 0x21b18cu: goto label_21b18c;
        case 0x21b190u: goto label_21b190;
        case 0x21b194u: goto label_21b194;
        case 0x21b198u: goto label_21b198;
        case 0x21b19cu: goto label_21b19c;
        case 0x21b1a0u: goto label_21b1a0;
        case 0x21b1a4u: goto label_21b1a4;
        case 0x21b1a8u: goto label_21b1a8;
        case 0x21b1acu: goto label_21b1ac;
        case 0x21b1b0u: goto label_21b1b0;
        case 0x21b1b4u: goto label_21b1b4;
        case 0x21b1b8u: goto label_21b1b8;
        case 0x21b1bcu: goto label_21b1bc;
        case 0x21b1c0u: goto label_21b1c0;
        case 0x21b1c4u: goto label_21b1c4;
        case 0x21b1c8u: goto label_21b1c8;
        case 0x21b1ccu: goto label_21b1cc;
        case 0x21b1d0u: goto label_21b1d0;
        case 0x21b1d4u: goto label_21b1d4;
        case 0x21b1d8u: goto label_21b1d8;
        case 0x21b1dcu: goto label_21b1dc;
        case 0x21b1e0u: goto label_21b1e0;
        case 0x21b1e4u: goto label_21b1e4;
        case 0x21b1e8u: goto label_21b1e8;
        case 0x21b1ecu: goto label_21b1ec;
        case 0x21b1f0u: goto label_21b1f0;
        case 0x21b1f4u: goto label_21b1f4;
        case 0x21b1f8u: goto label_21b1f8;
        case 0x21b1fcu: goto label_21b1fc;
        case 0x21b200u: goto label_21b200;
        case 0x21b204u: goto label_21b204;
        case 0x21b208u: goto label_21b208;
        case 0x21b20cu: goto label_21b20c;
        case 0x21b210u: goto label_21b210;
        case 0x21b214u: goto label_21b214;
        case 0x21b218u: goto label_21b218;
        case 0x21b21cu: goto label_21b21c;
        case 0x21b220u: goto label_21b220;
        case 0x21b224u: goto label_21b224;
        case 0x21b228u: goto label_21b228;
        case 0x21b22cu: goto label_21b22c;
        case 0x21b230u: goto label_21b230;
        case 0x21b234u: goto label_21b234;
        case 0x21b238u: goto label_21b238;
        case 0x21b23cu: goto label_21b23c;
        case 0x21b240u: goto label_21b240;
        case 0x21b244u: goto label_21b244;
        case 0x21b248u: goto label_21b248;
        case 0x21b24cu: goto label_21b24c;
        case 0x21b250u: goto label_21b250;
        case 0x21b254u: goto label_21b254;
        case 0x21b258u: goto label_21b258;
        case 0x21b25cu: goto label_21b25c;
        case 0x21b260u: goto label_21b260;
        case 0x21b264u: goto label_21b264;
        case 0x21b268u: goto label_21b268;
        case 0x21b26cu: goto label_21b26c;
        case 0x21b270u: goto label_21b270;
        case 0x21b274u: goto label_21b274;
        case 0x21b278u: goto label_21b278;
        case 0x21b27cu: goto label_21b27c;
        case 0x21b280u: goto label_21b280;
        case 0x21b284u: goto label_21b284;
        case 0x21b288u: goto label_21b288;
        case 0x21b28cu: goto label_21b28c;
        case 0x21b290u: goto label_21b290;
        case 0x21b294u: goto label_21b294;
        case 0x21b298u: goto label_21b298;
        case 0x21b29cu: goto label_21b29c;
        case 0x21b2a0u: goto label_21b2a0;
        case 0x21b2a4u: goto label_21b2a4;
        case 0x21b2a8u: goto label_21b2a8;
        case 0x21b2acu: goto label_21b2ac;
        case 0x21b2b0u: goto label_21b2b0;
        case 0x21b2b4u: goto label_21b2b4;
        case 0x21b2b8u: goto label_21b2b8;
        case 0x21b2bcu: goto label_21b2bc;
        case 0x21b2c0u: goto label_21b2c0;
        case 0x21b2c4u: goto label_21b2c4;
        case 0x21b2c8u: goto label_21b2c8;
        case 0x21b2ccu: goto label_21b2cc;
        case 0x21b2d0u: goto label_21b2d0;
        case 0x21b2d4u: goto label_21b2d4;
        case 0x21b2d8u: goto label_21b2d8;
        case 0x21b2dcu: goto label_21b2dc;
        case 0x21b2e0u: goto label_21b2e0;
        case 0x21b2e4u: goto label_21b2e4;
        case 0x21b2e8u: goto label_21b2e8;
        case 0x21b2ecu: goto label_21b2ec;
        case 0x21b2f0u: goto label_21b2f0;
        case 0x21b2f4u: goto label_21b2f4;
        case 0x21b2f8u: goto label_21b2f8;
        case 0x21b2fcu: goto label_21b2fc;
        case 0x21b300u: goto label_21b300;
        case 0x21b304u: goto label_21b304;
        case 0x21b308u: goto label_21b308;
        case 0x21b30cu: goto label_21b30c;
        case 0x21b310u: goto label_21b310;
        case 0x21b314u: goto label_21b314;
        case 0x21b318u: goto label_21b318;
        case 0x21b31cu: goto label_21b31c;
        case 0x21b320u: goto label_21b320;
        case 0x21b324u: goto label_21b324;
        case 0x21b328u: goto label_21b328;
        case 0x21b32cu: goto label_21b32c;
        case 0x21b330u: goto label_21b330;
        case 0x21b334u: goto label_21b334;
        case 0x21b338u: goto label_21b338;
        case 0x21b33cu: goto label_21b33c;
        case 0x21b340u: goto label_21b340;
        case 0x21b344u: goto label_21b344;
        case 0x21b348u: goto label_21b348;
        case 0x21b34cu: goto label_21b34c;
        case 0x21b350u: goto label_21b350;
        case 0x21b354u: goto label_21b354;
        case 0x21b358u: goto label_21b358;
        case 0x21b35cu: goto label_21b35c;
        case 0x21b360u: goto label_21b360;
        case 0x21b364u: goto label_21b364;
        case 0x21b368u: goto label_21b368;
        case 0x21b36cu: goto label_21b36c;
        case 0x21b370u: goto label_21b370;
        case 0x21b374u: goto label_21b374;
        case 0x21b378u: goto label_21b378;
        case 0x21b37cu: goto label_21b37c;
        case 0x21b380u: goto label_21b380;
        case 0x21b384u: goto label_21b384;
        case 0x21b388u: goto label_21b388;
        case 0x21b38cu: goto label_21b38c;
        case 0x21b390u: goto label_21b390;
        case 0x21b394u: goto label_21b394;
        case 0x21b398u: goto label_21b398;
        case 0x21b39cu: goto label_21b39c;
        case 0x21b3a0u: goto label_21b3a0;
        case 0x21b3a4u: goto label_21b3a4;
        case 0x21b3a8u: goto label_21b3a8;
        case 0x21b3acu: goto label_21b3ac;
        case 0x21b3b0u: goto label_21b3b0;
        case 0x21b3b4u: goto label_21b3b4;
        case 0x21b3b8u: goto label_21b3b8;
        case 0x21b3bcu: goto label_21b3bc;
        case 0x21b3c0u: goto label_21b3c0;
        case 0x21b3c4u: goto label_21b3c4;
        case 0x21b3c8u: goto label_21b3c8;
        case 0x21b3ccu: goto label_21b3cc;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b3d4u: goto label_21b3d4;
        case 0x21b3d8u: goto label_21b3d8;
        case 0x21b3dcu: goto label_21b3dc;
        case 0x21b3e0u: goto label_21b3e0;
        case 0x21b3e4u: goto label_21b3e4;
        case 0x21b3e8u: goto label_21b3e8;
        case 0x21b3ecu: goto label_21b3ec;
        case 0x21b3f0u: goto label_21b3f0;
        case 0x21b3f4u: goto label_21b3f4;
        case 0x21b3f8u: goto label_21b3f8;
        case 0x21b3fcu: goto label_21b3fc;
        case 0x21b400u: goto label_21b400;
        case 0x21b404u: goto label_21b404;
        case 0x21b408u: goto label_21b408;
        case 0x21b40cu: goto label_21b40c;
        case 0x21b410u: goto label_21b410;
        case 0x21b414u: goto label_21b414;
        case 0x21b418u: goto label_21b418;
        case 0x21b41cu: goto label_21b41c;
        case 0x21b420u: goto label_21b420;
        case 0x21b424u: goto label_21b424;
        case 0x21b428u: goto label_21b428;
        case 0x21b42cu: goto label_21b42c;
        case 0x21b430u: goto label_21b430;
        case 0x21b434u: goto label_21b434;
        case 0x21b438u: goto label_21b438;
        case 0x21b43cu: goto label_21b43c;
        case 0x21b440u: goto label_21b440;
        case 0x21b444u: goto label_21b444;
        case 0x21b448u: goto label_21b448;
        case 0x21b44cu: goto label_21b44c;
        case 0x21b450u: goto label_21b450;
        case 0x21b454u: goto label_21b454;
        case 0x21b458u: goto label_21b458;
        case 0x21b45cu: goto label_21b45c;
        case 0x21b460u: goto label_21b460;
        case 0x21b464u: goto label_21b464;
        case 0x21b468u: goto label_21b468;
        case 0x21b46cu: goto label_21b46c;
        case 0x21b470u: goto label_21b470;
        case 0x21b474u: goto label_21b474;
        case 0x21b478u: goto label_21b478;
        case 0x21b47cu: goto label_21b47c;
        case 0x21b480u: goto label_21b480;
        case 0x21b484u: goto label_21b484;
        case 0x21b488u: goto label_21b488;
        case 0x21b48cu: goto label_21b48c;
        case 0x21b490u: goto label_21b490;
        case 0x21b494u: goto label_21b494;
        case 0x21b498u: goto label_21b498;
        case 0x21b49cu: goto label_21b49c;
        case 0x21b4a0u: goto label_21b4a0;
        case 0x21b4a4u: goto label_21b4a4;
        case 0x21b4a8u: goto label_21b4a8;
        case 0x21b4acu: goto label_21b4ac;
        case 0x21b4b0u: goto label_21b4b0;
        case 0x21b4b4u: goto label_21b4b4;
        case 0x21b4b8u: goto label_21b4b8;
        case 0x21b4bcu: goto label_21b4bc;
        case 0x21b4c0u: goto label_21b4c0;
        case 0x21b4c4u: goto label_21b4c4;
        case 0x21b4c8u: goto label_21b4c8;
        case 0x21b4ccu: goto label_21b4cc;
        case 0x21b4d0u: goto label_21b4d0;
        case 0x21b4d4u: goto label_21b4d4;
        case 0x21b4d8u: goto label_21b4d8;
        case 0x21b4dcu: goto label_21b4dc;
        case 0x21b4e0u: goto label_21b4e0;
        case 0x21b4e4u: goto label_21b4e4;
        case 0x21b4e8u: goto label_21b4e8;
        case 0x21b4ecu: goto label_21b4ec;
        case 0x21b4f0u: goto label_21b4f0;
        case 0x21b4f4u: goto label_21b4f4;
        case 0x21b4f8u: goto label_21b4f8;
        case 0x21b4fcu: goto label_21b4fc;
        case 0x21b500u: goto label_21b500;
        case 0x21b504u: goto label_21b504;
        case 0x21b508u: goto label_21b508;
        case 0x21b50cu: goto label_21b50c;
        case 0x21b510u: goto label_21b510;
        case 0x21b514u: goto label_21b514;
        case 0x21b518u: goto label_21b518;
        case 0x21b51cu: goto label_21b51c;
        case 0x21b520u: goto label_21b520;
        case 0x21b524u: goto label_21b524;
        case 0x21b528u: goto label_21b528;
        case 0x21b52cu: goto label_21b52c;
        case 0x21b530u: goto label_21b530;
        case 0x21b534u: goto label_21b534;
        case 0x21b538u: goto label_21b538;
        case 0x21b53cu: goto label_21b53c;
        case 0x21b540u: goto label_21b540;
        case 0x21b544u: goto label_21b544;
        case 0x21b548u: goto label_21b548;
        case 0x21b54cu: goto label_21b54c;
        case 0x21b550u: goto label_21b550;
        case 0x21b554u: goto label_21b554;
        case 0x21b558u: goto label_21b558;
        case 0x21b55cu: goto label_21b55c;
        case 0x21b560u: goto label_21b560;
        case 0x21b564u: goto label_21b564;
        case 0x21b568u: goto label_21b568;
        case 0x21b56cu: goto label_21b56c;
        case 0x21b570u: goto label_21b570;
        case 0x21b574u: goto label_21b574;
        case 0x21b578u: goto label_21b578;
        case 0x21b57cu: goto label_21b57c;
        case 0x21b580u: goto label_21b580;
        case 0x21b584u: goto label_21b584;
        case 0x21b588u: goto label_21b588;
        case 0x21b58cu: goto label_21b58c;
        case 0x21b590u: goto label_21b590;
        case 0x21b594u: goto label_21b594;
        case 0x21b598u: goto label_21b598;
        case 0x21b59cu: goto label_21b59c;
        case 0x21b5a0u: goto label_21b5a0;
        case 0x21b5a4u: goto label_21b5a4;
        case 0x21b5a8u: goto label_21b5a8;
        case 0x21b5acu: goto label_21b5ac;
        case 0x21b5b0u: goto label_21b5b0;
        case 0x21b5b4u: goto label_21b5b4;
        case 0x21b5b8u: goto label_21b5b8;
        case 0x21b5bcu: goto label_21b5bc;
        case 0x21b5c0u: goto label_21b5c0;
        case 0x21b5c4u: goto label_21b5c4;
        case 0x21b5c8u: goto label_21b5c8;
        case 0x21b5ccu: goto label_21b5cc;
        case 0x21b5d0u: goto label_21b5d0;
        case 0x21b5d4u: goto label_21b5d4;
        case 0x21b5d8u: goto label_21b5d8;
        case 0x21b5dcu: goto label_21b5dc;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b5e4u: goto label_21b5e4;
        case 0x21b5e8u: goto label_21b5e8;
        case 0x21b5ecu: goto label_21b5ec;
        case 0x21b5f0u: goto label_21b5f0;
        case 0x21b5f4u: goto label_21b5f4;
        case 0x21b5f8u: goto label_21b5f8;
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b600u: goto label_21b600;
        case 0x21b604u: goto label_21b604;
        case 0x21b608u: goto label_21b608;
        case 0x21b60cu: goto label_21b60c;
        case 0x21b610u: goto label_21b610;
        case 0x21b614u: goto label_21b614;
        case 0x21b618u: goto label_21b618;
        case 0x21b61cu: goto label_21b61c;
        case 0x21b620u: goto label_21b620;
        case 0x21b624u: goto label_21b624;
        case 0x21b628u: goto label_21b628;
        case 0x21b62cu: goto label_21b62c;
        case 0x21b630u: goto label_21b630;
        case 0x21b634u: goto label_21b634;
        case 0x21b638u: goto label_21b638;
        case 0x21b63cu: goto label_21b63c;
        case 0x21b640u: goto label_21b640;
        case 0x21b644u: goto label_21b644;
        case 0x21b648u: goto label_21b648;
        case 0x21b64cu: goto label_21b64c;
        case 0x21b650u: goto label_21b650;
        case 0x21b654u: goto label_21b654;
        case 0x21b658u: goto label_21b658;
        case 0x21b65cu: goto label_21b65c;
        case 0x21b660u: goto label_21b660;
        case 0x21b664u: goto label_21b664;
        case 0x21b668u: goto label_21b668;
        case 0x21b66cu: goto label_21b66c;
        case 0x21b670u: goto label_21b670;
        case 0x21b674u: goto label_21b674;
        case 0x21b678u: goto label_21b678;
        case 0x21b67cu: goto label_21b67c;
        case 0x21b680u: goto label_21b680;
        case 0x21b684u: goto label_21b684;
        case 0x21b688u: goto label_21b688;
        case 0x21b68cu: goto label_21b68c;
        case 0x21b690u: goto label_21b690;
        case 0x21b694u: goto label_21b694;
        case 0x21b698u: goto label_21b698;
        case 0x21b69cu: goto label_21b69c;
        case 0x21b6a0u: goto label_21b6a0;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6a8u: goto label_21b6a8;
        case 0x21b6acu: goto label_21b6ac;
        case 0x21b6b0u: goto label_21b6b0;
        case 0x21b6b4u: goto label_21b6b4;
        case 0x21b6b8u: goto label_21b6b8;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6c0u: goto label_21b6c0;
        case 0x21b6c4u: goto label_21b6c4;
        case 0x21b6c8u: goto label_21b6c8;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6d0u: goto label_21b6d0;
        case 0x21b6d4u: goto label_21b6d4;
        case 0x21b6d8u: goto label_21b6d8;
        case 0x21b6dcu: goto label_21b6dc;
        case 0x21b6e0u: goto label_21b6e0;
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b6e8u: goto label_21b6e8;
        case 0x21b6ecu: goto label_21b6ec;
        case 0x21b6f0u: goto label_21b6f0;
        case 0x21b6f4u: goto label_21b6f4;
        case 0x21b6f8u: goto label_21b6f8;
        case 0x21b6fcu: goto label_21b6fc;
        case 0x21b700u: goto label_21b700;
        case 0x21b704u: goto label_21b704;
        case 0x21b708u: goto label_21b708;
        case 0x21b70cu: goto label_21b70c;
        case 0x21b710u: goto label_21b710;
        case 0x21b714u: goto label_21b714;
        case 0x21b718u: goto label_21b718;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b720u: goto label_21b720;
        case 0x21b724u: goto label_21b724;
        case 0x21b728u: goto label_21b728;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b730u: goto label_21b730;
        case 0x21b734u: goto label_21b734;
        case 0x21b738u: goto label_21b738;
        case 0x21b73cu: goto label_21b73c;
        case 0x21b740u: goto label_21b740;
        case 0x21b744u: goto label_21b744;
        case 0x21b748u: goto label_21b748;
        case 0x21b74cu: goto label_21b74c;
        default: return;
    }

label_21af80:
    // 0x21af80: 0xc078030  jal         func_1E00C0
label_21af84:
    if (ctx->pc == 0x21AF84u) {
        ctx->pc = 0x21AF88u;
        goto label_21af88;
    }
    ctx->pc = 0x21AF80u;
    SET_GPR_U32(ctx, 31, 0x21AF88u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x21AF88u;
label_21af88:
    // 0x21af88: 0xc04e168  jal         func_1385A0
label_21af8c:
    if (ctx->pc == 0x21AF8Cu) {
        ctx->pc = 0x21AF90u;
        goto label_21af90;
    }
    ctx->pc = 0x21AF88u;
    SET_GPR_U32(ctx, 31, 0x21AF90u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21AF88u, 0x21AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF90u;
label_21af90:
    // 0x21af90: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21af90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_21af94:
    // 0x21af94: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21af98:
    // 0x21af98: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21af98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_21af9c:
    // 0x21af9c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21afa0:
    // 0x21afa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21afa4:
    // 0x21afa4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_21afa8:
    // 0x21afa8: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21afa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21afac:
    // 0x21afac: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21afb0:
    // 0x21afb0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21afb4:
    // 0x21afb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21afb8:
    // 0x21afb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21afbc:
    // 0x21afbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21afc0:
    // 0x21afc0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
label_21afc4:
    if (ctx->pc == 0x21AFC4u) {
        ctx->pc = 0x21AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFC0u;
        // 0x21afc4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AFC8u;
        goto label_21afc8;
    }
    ctx->pc = 0x21AFC0u;
    {
        const bool branch_taken_0x21afc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFC0u;
        // 0x21afc4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afc0) {
            ctx->pc = 0x21AFD4u;
            goto label_21afd4;
        }
    }
    ctx->pc = 0x21AFC8u;
label_21afc8:
    // 0x21afc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21afcc:
    // 0x21afcc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_21afd0:
    if (ctx->pc == 0x21AFD0u) {
        ctx->pc = 0x21AFD4u;
        goto label_21afd4;
    }
    ctx->pc = 0x21AFCCu;
    {
        const bool branch_taken_0x21afcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21afcc) {
            ctx->pc = 0x21AFE0u;
            goto label_21afe0;
        }
    }
    ctx->pc = 0x21AFD4u;
label_21afd4:
    // 0x21afd4: 0x0  nop
    ctx->pc = 0x21afd4u;
    // NOP
label_21afd8:
    // 0x21afd8: 0x1000000e  b           . + 4 + (0xE << 2)
label_21afdc:
    if (ctx->pc == 0x21AFDCu) {
        ctx->pc = 0x21AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFD8u;
        // 0x21afdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AFE0u;
        goto label_21afe0;
    }
    ctx->pc = 0x21AFD8u;
    {
        const bool branch_taken_0x21afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFD8u;
        // 0x21afdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afd8) {
            ctx->pc = 0x21B014u;
            goto label_21b014;
        }
    }
    ctx->pc = 0x21AFE0u;
label_21afe0:
    // 0x21afe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21afe4:
    // 0x21afe4: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
label_21afe8:
    if (ctx->pc == 0x21AFE8u) {
        ctx->pc = 0x21AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFE4u;
        // 0x21afe8: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AFECu;
        goto label_21afec;
    }
    ctx->pc = 0x21AFE4u;
    {
        const bool branch_taken_0x21afe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFE4u;
        // 0x21afe8: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afe4) {
            ctx->pc = 0x21B014u;
            goto label_21b014;
        }
    }
    ctx->pc = 0x21AFECu;
label_21afec:
    // 0x21afec: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_21aff0:
    if (ctx->pc == 0x21AFF0u) {
        ctx->pc = 0x21AFF4u;
        goto label_21aff4;
    }
    ctx->pc = 0x21AFECu;
    {
        const bool branch_taken_0x21afec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21afec) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AFF4u;
label_21aff4:
    // 0x21aff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21aff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21aff8:
    // 0x21aff8: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937832)));
label_21affc:
    // 0x21affc: 0x10000005  b           . + 4 + (0x5 << 2)
label_21b000:
    if (ctx->pc == 0x21B000u) {
        ctx->pc = 0x21B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFFCu;
        // 0x21b000: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B004u;
        goto label_21b004;
    }
    ctx->pc = 0x21AFFCu;
    {
        const bool branch_taken_0x21affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFFCu;
        // 0x21b000: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21affc) {
            ctx->pc = 0x21B014u;
            goto label_21b014;
        }
    }
    ctx->pc = 0x21B004u;
label_21b004:
    // 0x21b004: 0x0  nop
    ctx->pc = 0x21b004u;
    // NOP
label_21b008:
    // 0x21b008: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b00c:
    // 0x21b00c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21b00cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937840)));
label_21b010:
    // 0x21b010: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21b010u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21b014:
    // 0x21b014: 0x0  nop
    ctx->pc = 0x21b014u;
    // NOP
label_21b018:
    // 0x21b018: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21b018u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
label_21b01c:
    // 0x21b01c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21b020:
    // 0x21b020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b024:
    // 0x21b024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b028:
    // 0x21b028: 0xc066c72  jal         func_19B1C8
label_21b02c:
    if (ctx->pc == 0x21B02Cu) {
        ctx->pc = 0x21B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B028u;
        // 0x21b02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B030u;
        goto label_21b030;
    }
    ctx->pc = 0x21B028u;
    SET_GPR_U32(ctx, 31, 0x21B030u);
    ctx->pc = 0x21B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B028u;
    // 0x21b02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21B030u;
label_21b030:
    // 0x21b030: 0xc086ea0  jal         func_21BA80
label_21b034:
    if (ctx->pc == 0x21B034u) {
        ctx->pc = 0x21B038u;
        goto label_21b038;
    }
    ctx->pc = 0x21B030u;
    SET_GPR_U32(ctx, 31, 0x21B038u);
    ctx->pc = 0x21BA80u;
    { ctx->pc = 0x21ba80; return; }
    ctx->pc = 0x21B038u;
label_21b038:
    // 0x21b038: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21b03c:
    // 0x21b03c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_21b040:
    if (ctx->pc == 0x21B040u) {
        ctx->pc = 0x21B044u;
        goto label_21b044;
    }
    ctx->pc = 0x21B03Cu;
    {
        const bool branch_taken_0x21b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b03c) {
            ctx->pc = 0x21B0D8u;
            goto label_21b0d8;
        }
    }
    ctx->pc = 0x21B044u;
label_21b044:
    // 0x21b044: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21b048:
    // 0x21b048: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_21b04c:
    // 0x21b04c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21b050:
    // 0x21b050: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21b054:
    // 0x21b054: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_21b058:
    // 0x21b058: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21b05c:
    // 0x21b05c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_21b060:
    // 0x21b060: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21b064:
    // 0x21b064: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21b068:
    // 0x21b068: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21b06c:
    // 0x21b06c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21b070:
    // 0x21b070: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b074:
    // 0x21b074: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_21b078:
    // 0x21b078: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
label_21b07c:
    // 0x21b07c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21b080:
    // 0x21b080: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b084:
    // 0x21b084: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21b088:
    // 0x21b088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b08c:
    // 0x21b08c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21b090:
    // 0x21b090: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21b094:
    // 0x21b094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b098:
    // 0x21b098: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
label_21b09c:
    // 0x21b09c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21b0a0:
    // 0x21b0a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21b0a4:
    // 0x21b0a4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21b0a8:
    // 0x21b0a8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21b0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
label_21b0ac:
    // 0x21b0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b0b0:
    // 0x21b0b0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21b0b4:
    // 0x21b0b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21b0b8:
    // 0x21b0b8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21b0bc:
    // 0x21b0bc: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21b0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
label_21b0c0:
    // 0x21b0c0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21b0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
label_21b0c4:
    // 0x21b0c4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21b0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
label_21b0c8:
    // 0x21b0c8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21b0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
label_21b0cc:
    // 0x21b0cc: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21b0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
label_21b0d0:
    // 0x21b0d0: 0xc066c72  jal         func_19B1C8
label_21b0d4:
    if (ctx->pc == 0x21B0D4u) {
        ctx->pc = 0x21B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0D0u;
        // 0x21b0d4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0D8u;
        goto label_21b0d8;
    }
    ctx->pc = 0x21B0D0u;
    SET_GPR_U32(ctx, 31, 0x21B0D8u);
    ctx->pc = 0x21B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0D0u;
    // 0x21b0d4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21B0D8u;
label_21b0d8:
    // 0x21b0d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21b0dc:
    // 0x21b0dc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21b0e0:
    // 0x21b0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21b0e4:
    // 0x21b0e4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21b0e8:
    // 0x21b0e8: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21b0ec:
    // 0x21b0ec: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b0f0:
    // 0x21b0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b0f4:
    // 0x21b0f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b0f8:
    // 0x21b0f8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21b0fc:
    // 0x21b0fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21b100:
    // 0x21b100: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21b104:
    // 0x21b104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21b108:
    // 0x21b108: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b10c:
    // 0x21b10c: 0xc066c72  jal         func_19B1C8
label_21b110:
    if (ctx->pc == 0x21B110u) {
        ctx->pc = 0x21B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B10Cu;
        // 0x21b110: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B114u;
        goto label_21b114;
    }
    ctx->pc = 0x21B10Cu;
    SET_GPR_U32(ctx, 31, 0x21B114u);
    ctx->pc = 0x21B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B10Cu;
    // 0x21b110: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21B114u;
label_21b114:
    // 0x21b114: 0xc077fc4  jal         func_1DFF10
label_21b118:
    if (ctx->pc == 0x21B118u) {
        ctx->pc = 0x21B11Cu;
        goto label_21b11c;
    }
    ctx->pc = 0x21B114u;
    SET_GPR_U32(ctx, 31, 0x21B11Cu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x21B11Cu;
label_21b11c:
    // 0x21b11c: 0xc04e120  jal         func_138480
label_21b120:
    if (ctx->pc == 0x21B120u) {
        ctx->pc = 0x21B124u;
        goto label_21b124;
    }
    ctx->pc = 0x21B11Cu;
    SET_GPR_U32(ctx, 31, 0x21B124u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21B11Cu, 0x21B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B124u;
label_21b124:
    // 0x21b124: 0xc05b578  jal         func_16D5E0
label_21b128:
    if (ctx->pc == 0x21B128u) {
        ctx->pc = 0x21B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B124u;
        // 0x21b128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B12Cu;
        goto label_21b12c;
    }
    ctx->pc = 0x21B124u;
    SET_GPR_U32(ctx, 31, 0x21B12Cu);
    ctx->pc = 0x21B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B124u;
    // 0x21b128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21B124u, 0x21B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B12Cu;
label_21b12c:
    // 0x21b12c: 0xc060258  jal         func_180960
label_21b130:
    if (ctx->pc == 0x21B130u) {
        ctx->pc = 0x21B134u;
        goto label_21b134;
    }
    ctx->pc = 0x21B12Cu;
    SET_GPR_U32(ctx, 31, 0x21B134u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x21B134u;
label_21b134:
    // 0x21b134: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_21b138:
    // 0x21b138: 0x1040fe52  beqz        $v0, . + 4 + (-0x1AE << 2)
label_21b13c:
    if (ctx->pc == 0x21B13Cu) {
        ctx->pc = 0x21B140u;
        goto label_21b140;
    }
    ctx->pc = 0x21B138u;
    {
        const bool branch_taken_0x21b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b138) {
            ctx->pc = 0x21AA84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21aa84; return; }
        }
    }
    ctx->pc = 0x21B140u;
label_21b140:
    // 0x21b140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b144:
    // 0x21b144: 0x1000fe4f  b           . + 4 + (-0x1B1 << 2)
label_21b148:
    if (ctx->pc == 0x21B148u) {
        ctx->pc = 0x21B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B144u;
        // 0x21b148: 0xaf8292c0  sw          $v0, -0x6D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B14Cu;
        goto label_21b14c;
    }
    ctx->pc = 0x21B144u;
    {
        const bool branch_taken_0x21b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B144u;
        // 0x21b148: 0xaf8292c0  sw          $v0, -0x6D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b144) {
            ctx->pc = 0x21AA84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21aa84; return; }
        }
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0x0  nop
    ctx->pc = 0x21b14cu;
    // NOP
label_21b150:
    // 0x21b150: 0xc078078  jal         func_1E01E0
label_21b154:
    if (ctx->pc == 0x21B154u) {
        ctx->pc = 0x21B158u;
        goto label_21b158;
    }
    ctx->pc = 0x21B150u;
    SET_GPR_U32(ctx, 31, 0x21B158u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x21B158u;
label_21b158:
    // 0x21b158: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21b15c:
    // 0x21b15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b160:
    // 0x21b160: 0xc04e188  jal         func_138620
label_21b164:
    if (ctx->pc == 0x21B164u) {
        ctx->pc = 0x21B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B160u;
        // 0x21b164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B168u;
        goto label_21b168;
    }
    ctx->pc = 0x21B160u;
    SET_GPR_U32(ctx, 31, 0x21B168u);
    ctx->pc = 0x21B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B160u;
    // 0x21b164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x21B160u, 0x21B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B168u;
label_21b168:
    // 0x21b168: 0xc04e198  jal         func_138660
label_21b16c:
    if (ctx->pc == 0x21B16Cu) {
        ctx->pc = 0x21B170u;
        goto label_21b170;
    }
    ctx->pc = 0x21B168u;
    SET_GPR_U32(ctx, 31, 0x21B170u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21B168u, 0x21B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B170u;
label_21b170:
    // 0x21b170: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
label_21b174:
    if (ctx->pc == 0x21B174u) {
        ctx->pc = 0x21B178u;
        goto label_21b178;
    }
    ctx->pc = 0x21B170u;
    {
        const bool branch_taken_0x21b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b170) {
            ctx->pc = 0x21B450u;
            goto label_21b450;
        }
    }
    ctx->pc = 0x21B178u;
label_21b178:
    // 0x21b178: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21b178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21b17c:
    // 0x21b17c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21b180:
    // 0x21b180: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_21b184:
    if (ctx->pc == 0x21B184u) {
        ctx->pc = 0x21B188u;
        goto label_21b188;
    }
    ctx->pc = 0x21B180u;
    {
        const bool branch_taken_0x21b180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21b180) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21B188u;
label_21b188:
    // 0x21b188: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
label_21b18c:
    // 0x21b18c: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21b18cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21b190:
    // 0x21b190: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21b194:
    if (ctx->pc == 0x21B194u) {
        ctx->pc = 0x21B198u;
        goto label_21b198;
    }
    ctx->pc = 0x21B190u;
    {
        const bool branch_taken_0x21b190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b190) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21B198u;
label_21b198:
    // 0x21b198: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21b19c:
    // 0x21b19c: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21b19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21b1a0:
    // 0x21b1a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21b1a4:
    if (ctx->pc == 0x21B1A4u) {
        ctx->pc = 0x21B1A8u;
        goto label_21b1a8;
    }
    ctx->pc = 0x21B1A0u;
    {
        const bool branch_taken_0x21b1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1a0) {
            ctx->pc = 0x21B1B0u;
            goto label_21b1b0;
        }
    }
    ctx->pc = 0x21B1A8u;
label_21b1a8:
    // 0x21b1a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_21b1ac:
    if (ctx->pc == 0x21B1ACu) {
        ctx->pc = 0x21B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1A8u;
        // 0x21b1ac: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B1B0u;
        goto label_21b1b0;
    }
    ctx->pc = 0x21B1A8u;
    {
        const bool branch_taken_0x21b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1A8u;
        // 0x21b1ac: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1a8) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21B1B0u;
label_21b1b0:
    // 0x21b1b0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21b1b4:
    // 0x21b1b4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21b1b8:
    // 0x21b1b8: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
label_21b1bc:
    // 0x21b1bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_21b1c0:
    if (ctx->pc == 0x21B1C0u) {
        ctx->pc = 0x21B1C4u;
        goto label_21b1c4;
    }
    ctx->pc = 0x21B1BCu;
    {
        const bool branch_taken_0x21b1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1bc) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B1C4u;
label_21b1c4:
    // 0x21b1c4: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
label_21b1c8:
    // 0x21b1c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21b1cc:
    // 0x21b1cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_21b1d0:
    if (ctx->pc == 0x21B1D0u) {
        ctx->pc = 0x21B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1CCu;
        // 0x21b1d0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B1D4u;
        goto label_21b1d4;
    }
    ctx->pc = 0x21B1CCu;
    {
        const bool branch_taken_0x21b1cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1CCu;
        // 0x21b1d0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1cc) {
            ctx->pc = 0x21B1E0u;
            goto label_21b1e0;
        }
    }
    ctx->pc = 0x21B1D4u;
label_21b1d4:
    // 0x21b1d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b1d8:
    if (ctx->pc == 0x21B1D8u) {
        ctx->pc = 0x21B1DCu;
        goto label_21b1dc;
    }
    ctx->pc = 0x21B1D4u;
    {
        const bool branch_taken_0x21b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1d4) {
            ctx->pc = 0x21B1E0u;
            goto label_21b1e0;
        }
    }
    ctx->pc = 0x21B1DCu;
label_21b1dc:
    // 0x21b1dc: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21b1e0:
    // 0x21b1e0: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
label_21b1e4:
    // 0x21b1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b1e8:
    // 0x21b1e8: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_21b1ec:
    if (ctx->pc == 0x21B1ECu) {
        ctx->pc = 0x21B1F0u;
        goto label_21b1f0;
    }
    ctx->pc = 0x21B1E8u;
    {
        const bool branch_taken_0x21b1e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b1e8) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B1F0u;
label_21b1f0:
    // 0x21b1f0: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21b1f4:
    // 0x21b1f4: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b1f8:
    // 0x21b1f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21b1fc:
    // 0x21b1fc: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
label_21b200:
    // 0x21b200: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21b200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21b204:
    // 0x21b204: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21b208:
    // 0x21b208: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21b208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21b20c:
    // 0x21b20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21b210:
    // 0x21b210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21b214:
    // 0x21b214: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_21b218:
    // 0x21b218: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21b218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21b21c:
    // 0x21b21c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21b220:
    if (ctx->pc == 0x21B220u) {
        ctx->pc = 0x21B224u;
        goto label_21b224;
    }
    ctx->pc = 0x21B21Cu;
    {
        const bool branch_taken_0x21b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b21c) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B224u;
label_21b224:
    // 0x21b224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b228:
    // 0x21b228: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21b228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21b22c:
    // 0x21b22c: 0x0  nop
    ctx->pc = 0x21b22cu;
    // NOP
label_21b230:
    // 0x21b230: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21b234:
    // 0x21b234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b238:
    // 0x21b238: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_21b23c:
    if (ctx->pc == 0x21B23Cu) {
        ctx->pc = 0x21B240u;
        goto label_21b240;
    }
    ctx->pc = 0x21B238u;
    {
        const bool branch_taken_0x21b238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b238) {
            ctx->pc = 0x21B278u;
            goto label_21b278;
        }
    }
    ctx->pc = 0x21B240u;
label_21b240:
    // 0x21b240: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21b244:
    // 0x21b244: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21b248:
    // 0x21b248: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21b248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21b24c:
    // 0x21b24c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21b250:
    if (ctx->pc == 0x21B250u) {
        ctx->pc = 0x21B254u;
        goto label_21b254;
    }
    ctx->pc = 0x21B24Cu;
    {
        const bool branch_taken_0x21b24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b24c) {
            ctx->pc = 0x21B25Cu;
            goto label_21b25c;
        }
    }
    ctx->pc = 0x21B254u;
label_21b254:
    // 0x21b254: 0x10000003  b           . + 4 + (0x3 << 2)
label_21b258:
    if (ctx->pc == 0x21B258u) {
        ctx->pc = 0x21B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B254u;
        // 0x21b258: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B25Cu;
        goto label_21b25c;
    }
    ctx->pc = 0x21B254u;
    {
        const bool branch_taken_0x21b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B254u;
        // 0x21b258: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b254) {
            ctx->pc = 0x21B264u;
            goto label_21b264;
        }
    }
    ctx->pc = 0x21B25Cu;
label_21b25c:
    // 0x21b25c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_21b260:
    // 0x21b260: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21b260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21b264:
    // 0x21b264: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21b264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21b268:
    // 0x21b268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21b26c:
    if (ctx->pc == 0x21B26Cu) {
        ctx->pc = 0x21B270u;
        goto label_21b270;
    }
    ctx->pc = 0x21B268u;
    {
        const bool branch_taken_0x21b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b268) {
            ctx->pc = 0x21B278u;
            goto label_21b278;
        }
    }
    ctx->pc = 0x21B270u;
label_21b270:
    // 0x21b270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b274:
    // 0x21b274: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21b278:
    // 0x21b278: 0xc078030  jal         func_1E00C0
label_21b27c:
    if (ctx->pc == 0x21B27Cu) {
        ctx->pc = 0x21B280u;
        goto label_21b280;
    }
    ctx->pc = 0x21B278u;
    SET_GPR_U32(ctx, 31, 0x21B280u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x21B280u;
label_21b280:
    // 0x21b280: 0xc04e168  jal         func_1385A0
label_21b284:
    if (ctx->pc == 0x21B284u) {
        ctx->pc = 0x21B288u;
        goto label_21b288;
    }
    ctx->pc = 0x21B280u;
    SET_GPR_U32(ctx, 31, 0x21B288u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21B280u, 0x21B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B288u;
label_21b288:
    // 0x21b288: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_21b28c:
    // 0x21b28c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21b290:
    // 0x21b290: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_21b294:
    // 0x21b294: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21b298:
    // 0x21b298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21b298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21b29c:
    // 0x21b29c: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_21b2a0:
    // 0x21b2a0: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21b2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21b2a4:
    // 0x21b2a4: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b2a8:
    // 0x21b2a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21b2ac:
    // 0x21b2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21b2b0:
    // 0x21b2b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21b2b4:
    // 0x21b2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21b2b8:
    // 0x21b2b8: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
label_21b2bc:
    if (ctx->pc == 0x21B2BCu) {
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2C0u;
        goto label_21b2c0;
    }
    ctx->pc = 0x21B2B8u;
    {
        const bool branch_taken_0x21b2b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b8) {
            ctx->pc = 0x21B2CCu;
            goto label_21b2cc;
        }
    }
    ctx->pc = 0x21B2C0u;
label_21b2c0:
    // 0x21b2c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21b2c4:
    // 0x21b2c4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_21b2c8:
    if (ctx->pc == 0x21B2C8u) {
        ctx->pc = 0x21B2CCu;
        goto label_21b2cc;
    }
    ctx->pc = 0x21B2C4u;
    {
        const bool branch_taken_0x21b2c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b2c4) {
            ctx->pc = 0x21B2D8u;
            goto label_21b2d8;
        }
    }
    ctx->pc = 0x21B2CCu;
label_21b2cc:
    // 0x21b2cc: 0x0  nop
    ctx->pc = 0x21b2ccu;
    // NOP
label_21b2d0:
    // 0x21b2d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_21b2d4:
    if (ctx->pc == 0x21B2D4u) {
        ctx->pc = 0x21B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2D0u;
        // 0x21b2d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2D8u;
        goto label_21b2d8;
    }
    ctx->pc = 0x21B2D0u;
    {
        const bool branch_taken_0x21b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2D0u;
        // 0x21b2d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2d0) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2D8u;
label_21b2d8:
    // 0x21b2d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b2dc:
    // 0x21b2dc: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
label_21b2e0:
    if (ctx->pc == 0x21B2E0u) {
        ctx->pc = 0x21B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2DCu;
        // 0x21b2e0: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2E4u;
        goto label_21b2e4;
    }
    ctx->pc = 0x21B2DCu;
    {
        const bool branch_taken_0x21b2dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2DCu;
        // 0x21b2e0: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2dc) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2E4u;
label_21b2e4:
    // 0x21b2e4: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_21b2e8:
    if (ctx->pc == 0x21B2E8u) {
        ctx->pc = 0x21B2ECu;
        goto label_21b2ec;
    }
    ctx->pc = 0x21B2E4u;
    {
        const bool branch_taken_0x21b2e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b2e4) {
            ctx->pc = 0x21B2FCu;
            goto label_21b2fc;
        }
    }
    ctx->pc = 0x21B2ECu;
label_21b2ec:
    // 0x21b2ec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b2f0:
    // 0x21b2f0: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21b2f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937832)));
label_21b2f4:
    // 0x21b2f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_21b2f8:
    if (ctx->pc == 0x21B2F8u) {
        ctx->pc = 0x21B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F4u;
        // 0x21b2f8: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2FCu;
        goto label_21b2fc;
    }
    ctx->pc = 0x21B2F4u;
    {
        const bool branch_taken_0x21b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F4u;
        // 0x21b2f8: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2f4) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2FCu;
label_21b2fc:
    // 0x21b2fc: 0x0  nop
    ctx->pc = 0x21b2fcu;
    // NOP
label_21b300:
    // 0x21b300: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b304:
    // 0x21b304: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21b304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937840)));
label_21b308:
    // 0x21b308: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21b308u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21b30c:
    // 0x21b30c: 0x0  nop
    ctx->pc = 0x21b30cu;
    // NOP
label_21b310:
    // 0x21b310: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21b310u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
label_21b314:
    // 0x21b314: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21b314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21b318:
    // 0x21b318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b31c:
    // 0x21b31c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b320:
    // 0x21b320: 0xc066c72  jal         func_19B1C8
label_21b324:
    if (ctx->pc == 0x21B324u) {
        ctx->pc = 0x21B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B320u;
        // 0x21b324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B328u;
        goto label_21b328;
    }
    ctx->pc = 0x21B320u;
    SET_GPR_U32(ctx, 31, 0x21B328u);
    ctx->pc = 0x21B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B320u;
    // 0x21b324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21B328u;
label_21b328:
    // 0x21b328: 0xc086ea0  jal         func_21BA80
label_21b32c:
    if (ctx->pc == 0x21B32Cu) {
        ctx->pc = 0x21B330u;
        goto label_21b330;
    }
    ctx->pc = 0x21B328u;
    SET_GPR_U32(ctx, 31, 0x21B330u);
    ctx->pc = 0x21BA80u;
    { ctx->pc = 0x21ba80; return; }
    ctx->pc = 0x21B330u;
label_21b330:
    // 0x21b330: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21b334:
    // 0x21b334: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_21b338:
    if (ctx->pc == 0x21B338u) {
        ctx->pc = 0x21B33Cu;
        goto label_21b33c;
    }
    ctx->pc = 0x21B334u;
    {
        const bool branch_taken_0x21b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b334) {
            ctx->pc = 0x21B3D0u;
            goto label_21b3d0;
        }
    }
    ctx->pc = 0x21B33Cu;
label_21b33c:
    // 0x21b33c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21b340:
    // 0x21b340: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_21b344:
    // 0x21b344: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21b348:
    // 0x21b348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21b34c:
    // 0x21b34c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_21b350:
    // 0x21b350: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21b354:
    // 0x21b354: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21b354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_21b358:
    // 0x21b358: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21b35c:
    // 0x21b35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21b360:
    // 0x21b360: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21b364:
    // 0x21b364: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21b368:
    // 0x21b368: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b36c:
    // 0x21b36c: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21b36cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_21b370:
    // 0x21b370: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21b370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
label_21b374:
    // 0x21b374: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21b378:
    // 0x21b378: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b37c:
    // 0x21b37c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21b380:
    // 0x21b380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b384:
    // 0x21b384: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21b388:
    // 0x21b388: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21b388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21b38c:
    // 0x21b38c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b390:
    // 0x21b390: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
label_21b394:
    // 0x21b394: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21b398:
    // 0x21b398: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21b39c:
    // 0x21b39c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21b3a0:
    // 0x21b3a0: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21b3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
label_21b3a4:
    // 0x21b3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b3a8:
    // 0x21b3a8: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21b3ac:
    // 0x21b3ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21b3b0:
    // 0x21b3b0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21b3b4:
    // 0x21b3b4: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21b3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
label_21b3b8:
    // 0x21b3b8: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21b3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
label_21b3bc:
    // 0x21b3bc: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21b3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
label_21b3c0:
    // 0x21b3c0: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21b3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
label_21b3c4:
    // 0x21b3c4: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21b3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
label_21b3c8:
    // 0x21b3c8: 0xc066c72  jal         func_19B1C8
label_21b3cc:
    if (ctx->pc == 0x21B3CCu) {
        ctx->pc = 0x21B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3C8u;
        // 0x21b3cc: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3D0u;
        goto label_21b3d0;
    }
    ctx->pc = 0x21B3C8u;
    SET_GPR_U32(ctx, 31, 0x21B3D0u);
    ctx->pc = 0x21B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3C8u;
    // 0x21b3cc: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21B3D0u;
label_21b3d0:
    // 0x21b3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21b3d4:
    // 0x21b3d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21b3d8:
    // 0x21b3d8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21b3dc:
    // 0x21b3dc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21b3e0:
    // 0x21b3e0: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21b3e4:
    // 0x21b3e4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b3e8:
    // 0x21b3e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b3ec:
    // 0x21b3ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b3f0:
    // 0x21b3f0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21b3f4:
    // 0x21b3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21b3f8:
    // 0x21b3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21b3fc:
    // 0x21b3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21b400:
    // 0x21b400: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21b400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b404:
    // 0x21b404: 0xc066c72  jal         func_19B1C8
label_21b408:
    if (ctx->pc == 0x21B408u) {
        ctx->pc = 0x21B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B404u;
        // 0x21b408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B40Cu;
        goto label_21b40c;
    }
    ctx->pc = 0x21B404u;
    SET_GPR_U32(ctx, 31, 0x21B40Cu);
    ctx->pc = 0x21B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B404u;
    // 0x21b408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21B40Cu;
label_21b40c:
    // 0x21b40c: 0xc077fc4  jal         func_1DFF10
label_21b410:
    if (ctx->pc == 0x21B410u) {
        ctx->pc = 0x21B414u;
        goto label_21b414;
    }
    ctx->pc = 0x21B40Cu;
    SET_GPR_U32(ctx, 31, 0x21B414u);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x21B414u;
label_21b414:
    // 0x21b414: 0xc04e120  jal         func_138480
label_21b418:
    if (ctx->pc == 0x21B418u) {
        ctx->pc = 0x21B41Cu;
        goto label_21b41c;
    }
    ctx->pc = 0x21B414u;
    SET_GPR_U32(ctx, 31, 0x21B41Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21B414u, 0x21B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B41Cu;
label_21b41c:
    // 0x21b41c: 0xc05b578  jal         func_16D5E0
label_21b420:
    if (ctx->pc == 0x21B420u) {
        ctx->pc = 0x21B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B41Cu;
        // 0x21b420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B424u;
        goto label_21b424;
    }
    ctx->pc = 0x21B41Cu;
    SET_GPR_U32(ctx, 31, 0x21B424u);
    ctx->pc = 0x21B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B41Cu;
    // 0x21b420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21B41Cu, 0x21B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B424u;
label_21b424:
    // 0x21b424: 0xc060258  jal         func_180960
label_21b428:
    if (ctx->pc == 0x21B428u) {
        ctx->pc = 0x21B42Cu;
        goto label_21b42c;
    }
    ctx->pc = 0x21B424u;
    SET_GPR_U32(ctx, 31, 0x21B42Cu);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x21B42Cu;
label_21b42c:
    // 0x21b42c: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_21b430:
    // 0x21b430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b434:
    if (ctx->pc == 0x21B434u) {
        ctx->pc = 0x21B438u;
        goto label_21b438;
    }
    ctx->pc = 0x21B430u;
    {
        const bool branch_taken_0x21b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b430) {
            ctx->pc = 0x21B440u;
            goto label_21b440;
        }
    }
    ctx->pc = 0x21B438u;
label_21b438:
    // 0x21b438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b43c:
    // 0x21b43c: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21b440:
    // 0x21b440: 0xc04e198  jal         func_138660
label_21b444:
    if (ctx->pc == 0x21B444u) {
        ctx->pc = 0x21B448u;
        goto label_21b448;
    }
    ctx->pc = 0x21B440u;
    SET_GPR_U32(ctx, 31, 0x21B448u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21B440u, 0x21B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B448u;
label_21b448:
    // 0x21b448: 0x1040ff4b  beqz        $v0, . + 4 + (-0xB5 << 2)
label_21b44c:
    if (ctx->pc == 0x21B44Cu) {
        ctx->pc = 0x21B450u;
        goto label_21b450;
    }
    ctx->pc = 0x21B448u;
    {
        const bool branch_taken_0x21b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b448) {
            ctx->pc = 0x21B178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b178;
        }
    }
    ctx->pc = 0x21B450u;
label_21b450:
    // 0x21b450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b454:
    // 0x21b454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b458:
    // 0x21b458: 0x3e00008  jr          $ra
label_21b45c:
    if (ctx->pc == 0x21B45Cu) {
        ctx->pc = 0x21B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B458u;
        // 0x21b45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B460u;
        goto label_21b460;
    }
    ctx->pc = 0x21B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B458u;
        // 0x21b45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B460u;
label_21b460:
    // 0x21b460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_21b464:
    // 0x21b464: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_21b468:
    // 0x21b468: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_21b46c:
    // 0x21b46c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b470:
    // 0x21b470: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x21b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_21b474:
    // 0x21b474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b478:
    // 0x21b478: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_21b47c:
    // 0x21b47c: 0x24e78c30  addiu       $a3, $a3, -0x73D0
    ctx->pc = 0x21b47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937648));
label_21b480:
    // 0x21b480: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x21b480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_21b484:
    // 0x21b484: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21b484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b488:
    // 0x21b488: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x21b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_21b48c:
    // 0x21b48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b490:
    // 0x21b490: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x21b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_21b494:
    // 0x21b494: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21b498:
    // 0x21b498: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_21b49c:
    // 0x21b49c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21b4a0:
    // 0x21b4a0: 0x8f8492b8  lw          $a0, -0x6D48($gp)
    ctx->pc = 0x21b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b4a4:
    // 0x21b4a4: 0xaf839278  sw          $v1, -0x6D88($gp)
    ctx->pc = 0x21b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
label_21b4a8:
    // 0x21b4a8: 0xaf809288  sw          $zero, -0x6D78($gp)
    ctx->pc = 0x21b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 0));
label_21b4ac:
    // 0x21b4ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21b4acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b4b0:
    // 0x21b4b0: 0xaf809280  sw          $zero, -0x6D80($gp)
    ctx->pc = 0x21b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 0));
label_21b4b4:
    // 0x21b4b4: 0xaf809284  sw          $zero, -0x6D7C($gp)
    ctx->pc = 0x21b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 0));
label_21b4b8:
    // 0x21b4b8: 0x10000035  b           . + 4 + (0x35 << 2)
label_21b4bc:
    if (ctx->pc == 0x21B4BCu) {
        ctx->pc = 0x21B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4B8u;
        // 0x21b4bc: 0xaf84927c  sw          $a0, -0x6D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4C0u;
        goto label_21b4c0;
    }
    ctx->pc = 0x21B4B8u;
    {
        const bool branch_taken_0x21b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4B8u;
        // 0x21b4bc: 0xaf84927c  sw          $a0, -0x6D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4b8) {
            ctx->pc = 0x21B590u;
            goto label_21b590;
        }
    }
    ctx->pc = 0x21B4C0u;
label_21b4c0:
    // 0x21b4c0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x21b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_21b4c4:
    // 0x21b4c4: 0x8f8492b8  lw          $a0, -0x6D48($gp)
    ctx->pc = 0x21b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b4c8:
    // 0x21b4c8: 0x14860010  bne         $a0, $a2, . + 4 + (0x10 << 2)
label_21b4cc:
    if (ctx->pc == 0x21B4CCu) {
        ctx->pc = 0x21B4D0u;
        goto label_21b4d0;
    }
    ctx->pc = 0x21B4C8u;
    {
        const bool branch_taken_0x21b4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x21b4c8) {
            ctx->pc = 0x21B50Cu;
            goto label_21b50c;
        }
    }
    ctx->pc = 0x21B4D0u;
label_21b4d0:
    // 0x21b4d0: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
label_21b4d4:
    if (ctx->pc == 0x21B4D4u) {
        ctx->pc = 0x21B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D0u;
        // 0x21b4d4: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4D8u;
        goto label_21b4d8;
    }
    ctx->pc = 0x21B4D0u;
    {
        const bool branch_taken_0x21b4d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D0u;
        // 0x21b4d4: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4d0) {
            ctx->pc = 0x21B4F0u;
            goto label_21b4f0;
        }
    }
    ctx->pc = 0x21B4D8u;
label_21b4d8:
    // 0x21b4d8: 0x8c24caf4  lw          $a0, -0x350C($at)
    ctx->pc = 0x21b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953716)));
label_21b4dc:
    // 0x21b4dc: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x21b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_21b4e0:
    // 0x21b4e0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b4e4:
    // 0x21b4e4: 0x8c24caf8  lw          $a0, -0x3508($at)
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953720)));
label_21b4e8:
    // 0x21b4e8: 0x10000027  b           . + 4 + (0x27 << 2)
label_21b4ec:
    if (ctx->pc == 0x21B4ECu) {
        ctx->pc = 0x21B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4E8u;
        // 0x21b4ec: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4F0u;
        goto label_21b4f0;
    }
    ctx->pc = 0x21B4E8u;
    {
        const bool branch_taken_0x21b4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4E8u;
        // 0x21b4ec: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4e8) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B4F0u;
label_21b4f0:
    // 0x21b4f0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b4f4:
    // 0x21b4f4: 0x8c24cb44  lw          $a0, -0x34BC($at)
    ctx->pc = 0x21b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
label_21b4f8:
    // 0x21b4f8: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x21b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_21b4fc:
    // 0x21b4fc: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b500:
    // 0x21b500: 0x8c24cb48  lw          $a0, -0x34B8($at)
    ctx->pc = 0x21b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953800)));
label_21b504:
    // 0x21b504: 0x10000020  b           . + 4 + (0x20 << 2)
label_21b508:
    if (ctx->pc == 0x21B508u) {
        ctx->pc = 0x21B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B504u;
        // 0x21b508: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B50Cu;
        goto label_21b50c;
    }
    ctx->pc = 0x21B504u;
    {
        const bool branch_taken_0x21b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B504u;
        // 0x21b508: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b504) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B50Cu;
label_21b50c:
    // 0x21b50c: 0x0  nop
    ctx->pc = 0x21b50cu;
    // NOP
label_21b510:
    // 0x21b510: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
label_21b514:
    if (ctx->pc == 0x21B514u) {
        ctx->pc = 0x21B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B510u;
        // 0x21b514: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B518u;
        goto label_21b518;
    }
    ctx->pc = 0x21B510u;
    {
        const bool branch_taken_0x21b510 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B510u;
        // 0x21b514: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b510) {
            ctx->pc = 0x21B530u;
            goto label_21b530;
        }
    }
    ctx->pc = 0x21B518u;
label_21b518:
    // 0x21b518: 0x8c24cb94  lw          $a0, -0x346C($at)
    ctx->pc = 0x21b518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953876)));
label_21b51c:
    // 0x21b51c: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x21b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_21b520:
    // 0x21b520: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b524:
    // 0x21b524: 0x8c24cb98  lw          $a0, -0x3468($at)
    ctx->pc = 0x21b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953880)));
label_21b528:
    // 0x21b528: 0x10000017  b           . + 4 + (0x17 << 2)
label_21b52c:
    if (ctx->pc == 0x21B52Cu) {
        ctx->pc = 0x21B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B528u;
        // 0x21b52c: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B530u;
        goto label_21b530;
    }
    ctx->pc = 0x21B528u;
    {
        const bool branch_taken_0x21b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B528u;
        // 0x21b52c: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b528) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B530u;
label_21b530:
    // 0x21b530: 0x15050007  bne         $t0, $a1, . + 4 + (0x7 << 2)
label_21b534:
    if (ctx->pc == 0x21B534u) {
        ctx->pc = 0x21B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B530u;
        // 0x21b534: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B538u;
        goto label_21b538;
    }
    ctx->pc = 0x21B530u;
    {
        const bool branch_taken_0x21b530 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x21B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B530u;
        // 0x21b534: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b530) {
            ctx->pc = 0x21B550u;
            goto label_21b550;
        }
    }
    ctx->pc = 0x21B538u;
label_21b538:
    // 0x21b538: 0x8c24cbe4  lw          $a0, -0x341C($at)
    ctx->pc = 0x21b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953956)));
label_21b53c:
    // 0x21b53c: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x21b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_21b540:
    // 0x21b540: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b544:
    // 0x21b544: 0x8c24cbe8  lw          $a0, -0x3418($at)
    ctx->pc = 0x21b544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953960)));
label_21b548:
    // 0x21b548: 0x1000000f  b           . + 4 + (0xF << 2)
label_21b54c:
    if (ctx->pc == 0x21B54Cu) {
        ctx->pc = 0x21B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B548u;
        // 0x21b54c: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B550u;
        goto label_21b550;
    }
    ctx->pc = 0x21B548u;
    {
        const bool branch_taken_0x21b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B548u;
        // 0x21b54c: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b548) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B550u;
label_21b550:
    // 0x21b550: 0x15060007  bne         $t0, $a2, . + 4 + (0x7 << 2)
label_21b554:
    if (ctx->pc == 0x21B554u) {
        ctx->pc = 0x21B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B550u;
        // 0x21b554: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B558u;
        goto label_21b558;
    }
    ctx->pc = 0x21B550u;
    {
        const bool branch_taken_0x21b550 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x21B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B550u;
        // 0x21b554: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b550) {
            ctx->pc = 0x21B570u;
            goto label_21b570;
        }
    }
    ctx->pc = 0x21B558u;
label_21b558:
    // 0x21b558: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x21b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_21b55c:
    // 0x21b55c: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x21b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_21b560:
    // 0x21b560: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b564:
    // 0x21b564: 0x8c24cc38  lw          $a0, -0x33C8($at)
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954040)));
label_21b568:
    // 0x21b568: 0x10000007  b           . + 4 + (0x7 << 2)
label_21b56c:
    if (ctx->pc == 0x21B56Cu) {
        ctx->pc = 0x21B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B568u;
        // 0x21b56c: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B570u;
        goto label_21b570;
    }
    ctx->pc = 0x21B568u;
    {
        const bool branch_taken_0x21b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B568u;
        // 0x21b56c: 0xad240008  sw          $a0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b568) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B570u;
label_21b570:
    // 0x21b570: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b574:
    // 0x21b574: 0x8c24cc84  lw          $a0, -0x337C($at)
    ctx->pc = 0x21b574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954116)));
label_21b578:
    // 0x21b578: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x21b578u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_21b57c:
    // 0x21b57c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21b57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_21b580:
    // 0x21b580: 0x8c24cc88  lw          $a0, -0x3378($at)
    ctx->pc = 0x21b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954120)));
label_21b584:
    // 0x21b584: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x21b584u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
label_21b588:
    // 0x21b588: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_21b58c:
    // 0x21b58c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21b58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_21b590:
    // 0x21b590: 0x8f8492b8  lw          $a0, -0x6D48($gp)
    ctx->pc = 0x21b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b594:
    // 0x21b594: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x21b594u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21b598:
    // 0x21b598: 0x1480ffc9  bnez        $a0, . + 4 + (-0x37 << 2)
label_21b59c:
    if (ctx->pc == 0x21B59Cu) {
        ctx->pc = 0x21B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B598u;
        // 0x21b59c: 0xe34821  addu        $t1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5A0u;
        goto label_21b5a0;
    }
    ctx->pc = 0x21B598u;
    {
        const bool branch_taken_0x21b598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B598u;
        // 0x21b59c: 0xe34821  addu        $t1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b598) {
            ctx->pc = 0x21B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b4c0;
        }
    }
    ctx->pc = 0x21B5A0u;
label_21b5a0:
    // 0x21b5a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21b5a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5a4:
    // 0x21b5a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21b5a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5a8:
    // 0x21b5a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21b5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5ac:
    // 0x21b5ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21b5acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5b0:
    // 0x21b5b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5b4:
    // 0x21b5b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21b5b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b5b8:
    // 0x21b5b8: 0x1000011d  b           . + 4 + (0x11D << 2)
label_21b5bc:
    if (ctx->pc == 0x21B5BCu) {
        ctx->pc = 0x21B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5B8u;
        // 0x21b5bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5C0u;
        goto label_21b5c0;
    }
    ctx->pc = 0x21B5B8u;
    {
        const bool branch_taken_0x21b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5B8u;
        // 0x21b5bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5b8) {
            ctx->pc = 0x21BA30u;
            { ctx->pc = 0x21ba30; return; }
        }
    }
    ctx->pc = 0x21B5C0u;
label_21b5c0:
    // 0x21b5c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21b5c4:
    // 0x21b5c4: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x21b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_21b5c8:
    // 0x21b5c8: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x21b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_21b5cc:
    // 0x21b5cc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_21b5d0:
    // 0x21b5d0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21b5d4:
    // 0x21b5d4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21b5d8:
    // 0x21b5d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21b5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b5dc:
    // 0x21b5dc: 0xc05e234  jal         func_1788D0
label_21b5e0:
    if (ctx->pc == 0x21B5E0u) {
        ctx->pc = 0x21B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5DCu;
        // 0x21b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5E4u;
        goto label_21b5e4;
    }
    ctx->pc = 0x21B5DCu;
    SET_GPR_U32(ctx, 31, 0x21B5E4u);
    ctx->pc = 0x21B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5DCu;
    // 0x21b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x21B5DCu, 0x21B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5E4u;
label_21b5e4:
    // 0x21b5e4: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21b5e8:
    // 0x21b5e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b5ec:
    // 0x21b5ec: 0x14450067  bne         $v0, $a1, . + 4 + (0x67 << 2)
label_21b5f0:
    if (ctx->pc == 0x21B5F0u) {
        ctx->pc = 0x21B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5ECu;
        // 0x21b5f0: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B5F4u;
        goto label_21b5f4;
    }
    ctx->pc = 0x21B5ECu;
    {
        const bool branch_taken_0x21b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x21B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5ECu;
        // 0x21b5f0: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5ec) {
            ctx->pc = 0x21B78Cu;
            { ctx->pc = 0x21b78c; return; }
        }
    }
    ctx->pc = 0x21B5F4u;
label_21b5f4:
    // 0x21b5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b5f8:
    // 0x21b5f8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_21b5fc:
    // 0x21b5fc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b600:
    // 0x21b600: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x21b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_21b604:
    // 0x21b604: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x21b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_21b608:
    // 0x21b608: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b60c:
    // 0x21b60c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b610:
    // 0x21b610: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b614:
    // 0x21b614: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b618:
    // 0x21b618: 0xdc258ca8  ld          $a1, -0x7358($at)
    ctx->pc = 0x21b618u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937768)));
label_21b61c:
    // 0x21b61c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b620:
    // 0x21b620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b624:
    // 0x21b624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b628:
    // 0x21b628: 0xc05de30  jal         func_1778C0
label_21b62c:
    if (ctx->pc == 0x21B62Cu) {
        ctx->pc = 0x21B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B628u;
        // 0x21b62c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B630u;
        goto label_21b630;
    }
    ctx->pc = 0x21B628u;
    SET_GPR_U32(ctx, 31, 0x21B630u);
    ctx->pc = 0x21B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B628u;
    // 0x21b62c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B628u, 0x21B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B630u;
label_21b630:
    // 0x21b630: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b634:
    // 0x21b634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b638:
    // 0x21b638: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b63c:
    // 0x21b63c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b640:
    // 0x21b640: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b644:
    // 0x21b644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b648:
    // 0x21b648: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b64c:
    // 0x21b64c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x21b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_21b650:
    // 0x21b650: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b654:
    // 0x21b654: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b658:
    // 0x21b658: 0xdc258ca8  ld          $a1, -0x7358($at)
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937768)));
label_21b65c:
    // 0x21b65c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b660:
    // 0x21b660: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b664:
    // 0x21b664: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x21b664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21b668:
    // 0x21b668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b66c:
    // 0x21b66c: 0xc05de30  jal         func_1778C0
label_21b670:
    if (ctx->pc == 0x21B670u) {
        ctx->pc = 0x21B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B66Cu;
        // 0x21b670: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B674u;
        goto label_21b674;
    }
    ctx->pc = 0x21B66Cu;
    SET_GPR_U32(ctx, 31, 0x21B674u);
    ctx->pc = 0x21B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B66Cu;
    // 0x21b670: 0x240b0030  addiu       $t3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B66Cu, 0x21B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B674u;
label_21b674:
    // 0x21b674: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_21b678:
    // 0x21b678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b67c:
    // 0x21b67c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b680:
    // 0x21b680: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b684:
    // 0x21b684: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b688:
    // 0x21b688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b68c:
    // 0x21b68c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b690:
    // 0x21b690: 0x324affff  andi        $t2, $s2, 0xFFFF
    ctx->pc = 0x21b690u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_21b694:
    // 0x21b694: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b698:
    // 0x21b698: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x21b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_21b69c:
    // 0x21b69c: 0xdc258cc8  ld          $a1, -0x7338($at)
    ctx->pc = 0x21b69cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937800)));
label_21b6a0:
    // 0x21b6a0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b6a4:
    // 0x21b6a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b6a8:
    // 0x21b6a8: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b6ac:
    // 0x21b6ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b6acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b6b0:
    // 0x21b6b0: 0xc05de30  jal         func_1778C0
label_21b6b4:
    if (ctx->pc == 0x21B6B4u) {
        ctx->pc = 0x21B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6B0u;
        // 0x21b6b4: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6B8u;
        goto label_21b6b8;
    }
    ctx->pc = 0x21B6B0u;
    SET_GPR_U32(ctx, 31, 0x21B6B8u);
    ctx->pc = 0x21B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6B0u;
    // 0x21b6b4: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B6B0u, 0x21B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6B8u;
label_21b6b8:
    // 0x21b6b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21b6bc:
    // 0x21b6bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b6c0:
    // 0x21b6c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b6c4:
    // 0x21b6c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b6c8:
    // 0x21b6c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b6cc:
    // 0x21b6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b6d0:
    // 0x21b6d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b6d4:
    // 0x21b6d4: 0x326affff  andi        $t2, $s3, 0xFFFF
    ctx->pc = 0x21b6d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_21b6d8:
    // 0x21b6d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b6dc:
    // 0x21b6dc: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_21b6e0:
    // 0x21b6e0: 0xdc258cd8  ld          $a1, -0x7328($at)
    ctx->pc = 0x21b6e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937816)));
label_21b6e4:
    // 0x21b6e4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b6e8:
    // 0x21b6e8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b6ec:
    // 0x21b6ec: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b6f0:
    // 0x21b6f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b6f4:
    // 0x21b6f4: 0xc05de30  jal         func_1778C0
label_21b6f8:
    if (ctx->pc == 0x21B6F8u) {
        ctx->pc = 0x21B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F4u;
        // 0x21b6f8: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6FCu;
        goto label_21b6fc;
    }
    ctx->pc = 0x21B6F4u;
    SET_GPR_U32(ctx, 31, 0x21B6FCu);
    ctx->pc = 0x21B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6F4u;
    // 0x21b6f8: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B6F4u, 0x21B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6FCu;
label_21b6fc:
    // 0x21b6fc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b700:
    // 0x21b700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b704:
    // 0x21b704: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b708:
    // 0x21b708: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21b70c:
    // 0x21b70c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21b710:
    // 0x21b710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b714:
    // 0x21b714: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21b718:
    // 0x21b718: 0x26240860  addiu       $a0, $s1, 0x860
    ctx->pc = 0x21b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2144));
label_21b71c:
    // 0x21b71c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21b720:
    // 0x21b720: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21b724:
    // 0x21b724: 0xdc258cb0  ld          $a1, -0x7350($at)
    ctx->pc = 0x21b724u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937776)));
label_21b728:
    // 0x21b728: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x21b728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21b72c:
    // 0x21b72c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x21b72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_21b730:
    // 0x21b730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b734:
    // 0x21b734: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b738:
    // 0x21b738: 0xc05de30  jal         func_1778C0
label_21b73c:
    if (ctx->pc == 0x21B73Cu) {
        ctx->pc = 0x21B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B738u;
        // 0x21b73c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B740u;
        goto label_21b740;
    }
    ctx->pc = 0x21B738u;
    SET_GPR_U32(ctx, 31, 0x21B740u);
    ctx->pc = 0x21B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B738u;
    // 0x21b73c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21B738u, 0x21B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B740u;
label_21b740:
    // 0x21b740: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21b744:
    // 0x21b744: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b748:
    // 0x21b748: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21b74c:
    // 0x21b74c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    ctx->pc = 0x21b750u;
    return;
}

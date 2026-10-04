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


void FUN_0014eba0_part194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1acf70u: goto label_1acf70;
        case 0x1acf74u: goto label_1acf74;
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf7cu: goto label_1acf7c;
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf84u: goto label_1acf84;
        case 0x1acf88u: goto label_1acf88;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acf90u: goto label_1acf90;
        case 0x1acf94u: goto label_1acf94;
        case 0x1acf98u: goto label_1acf98;
        case 0x1acf9cu: goto label_1acf9c;
        case 0x1acfa0u: goto label_1acfa0;
        case 0x1acfa4u: goto label_1acfa4;
        case 0x1acfa8u: goto label_1acfa8;
        case 0x1acfacu: goto label_1acfac;
        case 0x1acfb0u: goto label_1acfb0;
        case 0x1acfb4u: goto label_1acfb4;
        case 0x1acfb8u: goto label_1acfb8;
        case 0x1acfbcu: goto label_1acfbc;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfc8u: goto label_1acfc8;
        case 0x1acfccu: goto label_1acfcc;
        case 0x1acfd0u: goto label_1acfd0;
        case 0x1acfd4u: goto label_1acfd4;
        case 0x1acfd8u: goto label_1acfd8;
        case 0x1acfdcu: goto label_1acfdc;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acfe4u: goto label_1acfe4;
        case 0x1acfe8u: goto label_1acfe8;
        case 0x1acfecu: goto label_1acfec;
        case 0x1acff0u: goto label_1acff0;
        case 0x1acff4u: goto label_1acff4;
        case 0x1acff8u: goto label_1acff8;
        case 0x1acffcu: goto label_1acffc;
        case 0x1ad000u: goto label_1ad000;
        case 0x1ad004u: goto label_1ad004;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad00cu: goto label_1ad00c;
        case 0x1ad010u: goto label_1ad010;
        case 0x1ad014u: goto label_1ad014;
        case 0x1ad018u: goto label_1ad018;
        case 0x1ad01cu: goto label_1ad01c;
        case 0x1ad020u: goto label_1ad020;
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad028u: goto label_1ad028;
        case 0x1ad02cu: goto label_1ad02c;
        case 0x1ad030u: goto label_1ad030;
        case 0x1ad034u: goto label_1ad034;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad03cu: goto label_1ad03c;
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad044u: goto label_1ad044;
        case 0x1ad048u: goto label_1ad048;
        case 0x1ad04cu: goto label_1ad04c;
        case 0x1ad050u: goto label_1ad050;
        case 0x1ad054u: goto label_1ad054;
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad060u: goto label_1ad060;
        case 0x1ad064u: goto label_1ad064;
        case 0x1ad068u: goto label_1ad068;
        case 0x1ad06cu: goto label_1ad06c;
        case 0x1ad070u: goto label_1ad070;
        case 0x1ad074u: goto label_1ad074;
        case 0x1ad078u: goto label_1ad078;
        case 0x1ad07cu: goto label_1ad07c;
        case 0x1ad080u: goto label_1ad080;
        case 0x1ad084u: goto label_1ad084;
        case 0x1ad088u: goto label_1ad088;
        case 0x1ad08cu: goto label_1ad08c;
        case 0x1ad090u: goto label_1ad090;
        case 0x1ad094u: goto label_1ad094;
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0a0u: goto label_1ad0a0;
        case 0x1ad0a4u: goto label_1ad0a4;
        case 0x1ad0a8u: goto label_1ad0a8;
        case 0x1ad0acu: goto label_1ad0ac;
        case 0x1ad0b0u: goto label_1ad0b0;
        case 0x1ad0b4u: goto label_1ad0b4;
        case 0x1ad0b8u: goto label_1ad0b8;
        case 0x1ad0bcu: goto label_1ad0bc;
        case 0x1ad0c0u: goto label_1ad0c0;
        case 0x1ad0c4u: goto label_1ad0c4;
        case 0x1ad0c8u: goto label_1ad0c8;
        case 0x1ad0ccu: goto label_1ad0cc;
        case 0x1ad0d0u: goto label_1ad0d0;
        case 0x1ad0d4u: goto label_1ad0d4;
        case 0x1ad0d8u: goto label_1ad0d8;
        case 0x1ad0dcu: goto label_1ad0dc;
        case 0x1ad0e0u: goto label_1ad0e0;
        case 0x1ad0e4u: goto label_1ad0e4;
        case 0x1ad0e8u: goto label_1ad0e8;
        case 0x1ad0ecu: goto label_1ad0ec;
        case 0x1ad0f0u: goto label_1ad0f0;
        case 0x1ad0f4u: goto label_1ad0f4;
        case 0x1ad0f8u: goto label_1ad0f8;
        case 0x1ad0fcu: goto label_1ad0fc;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad104u: goto label_1ad104;
        case 0x1ad108u: goto label_1ad108;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad110u: goto label_1ad110;
        case 0x1ad114u: goto label_1ad114;
        case 0x1ad118u: goto label_1ad118;
        case 0x1ad11cu: goto label_1ad11c;
        case 0x1ad120u: goto label_1ad120;
        case 0x1ad124u: goto label_1ad124;
        case 0x1ad128u: goto label_1ad128;
        case 0x1ad12cu: goto label_1ad12c;
        case 0x1ad130u: goto label_1ad130;
        case 0x1ad134u: goto label_1ad134;
        case 0x1ad138u: goto label_1ad138;
        case 0x1ad13cu: goto label_1ad13c;
        case 0x1ad140u: goto label_1ad140;
        case 0x1ad144u: goto label_1ad144;
        case 0x1ad148u: goto label_1ad148;
        case 0x1ad14cu: goto label_1ad14c;
        case 0x1ad150u: goto label_1ad150;
        case 0x1ad154u: goto label_1ad154;
        case 0x1ad158u: goto label_1ad158;
        case 0x1ad15cu: goto label_1ad15c;
        case 0x1ad160u: goto label_1ad160;
        case 0x1ad164u: goto label_1ad164;
        case 0x1ad168u: goto label_1ad168;
        case 0x1ad16cu: goto label_1ad16c;
        case 0x1ad170u: goto label_1ad170;
        case 0x1ad174u: goto label_1ad174;
        case 0x1ad178u: goto label_1ad178;
        case 0x1ad17cu: goto label_1ad17c;
        case 0x1ad180u: goto label_1ad180;
        case 0x1ad184u: goto label_1ad184;
        case 0x1ad188u: goto label_1ad188;
        case 0x1ad18cu: goto label_1ad18c;
        case 0x1ad190u: goto label_1ad190;
        case 0x1ad194u: goto label_1ad194;
        case 0x1ad198u: goto label_1ad198;
        case 0x1ad19cu: goto label_1ad19c;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1a4u: goto label_1ad1a4;
        case 0x1ad1a8u: goto label_1ad1a8;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1b0u: goto label_1ad1b0;
        case 0x1ad1b4u: goto label_1ad1b4;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1bcu: goto label_1ad1bc;
        case 0x1ad1c0u: goto label_1ad1c0;
        case 0x1ad1c4u: goto label_1ad1c4;
        case 0x1ad1c8u: goto label_1ad1c8;
        case 0x1ad1ccu: goto label_1ad1cc;
        case 0x1ad1d0u: goto label_1ad1d0;
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad1dcu: goto label_1ad1dc;
        case 0x1ad1e0u: goto label_1ad1e0;
        case 0x1ad1e4u: goto label_1ad1e4;
        case 0x1ad1e8u: goto label_1ad1e8;
        case 0x1ad1ecu: goto label_1ad1ec;
        case 0x1ad1f0u: goto label_1ad1f0;
        case 0x1ad1f4u: goto label_1ad1f4;
        case 0x1ad1f8u: goto label_1ad1f8;
        case 0x1ad1fcu: goto label_1ad1fc;
        case 0x1ad200u: goto label_1ad200;
        case 0x1ad204u: goto label_1ad204;
        case 0x1ad208u: goto label_1ad208;
        case 0x1ad20cu: goto label_1ad20c;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad214u: goto label_1ad214;
        case 0x1ad218u: goto label_1ad218;
        case 0x1ad21cu: goto label_1ad21c;
        case 0x1ad220u: goto label_1ad220;
        case 0x1ad224u: goto label_1ad224;
        case 0x1ad228u: goto label_1ad228;
        case 0x1ad22cu: goto label_1ad22c;
        case 0x1ad230u: goto label_1ad230;
        case 0x1ad234u: goto label_1ad234;
        case 0x1ad238u: goto label_1ad238;
        case 0x1ad23cu: goto label_1ad23c;
        case 0x1ad240u: goto label_1ad240;
        case 0x1ad244u: goto label_1ad244;
        case 0x1ad248u: goto label_1ad248;
        case 0x1ad24cu: goto label_1ad24c;
        case 0x1ad250u: goto label_1ad250;
        case 0x1ad254u: goto label_1ad254;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad25cu: goto label_1ad25c;
        case 0x1ad260u: goto label_1ad260;
        case 0x1ad264u: goto label_1ad264;
        case 0x1ad268u: goto label_1ad268;
        case 0x1ad26cu: goto label_1ad26c;
        case 0x1ad270u: goto label_1ad270;
        case 0x1ad274u: goto label_1ad274;
        case 0x1ad278u: goto label_1ad278;
        case 0x1ad27cu: goto label_1ad27c;
        case 0x1ad280u: goto label_1ad280;
        case 0x1ad284u: goto label_1ad284;
        case 0x1ad288u: goto label_1ad288;
        case 0x1ad28cu: goto label_1ad28c;
        case 0x1ad290u: goto label_1ad290;
        case 0x1ad294u: goto label_1ad294;
        case 0x1ad298u: goto label_1ad298;
        case 0x1ad29cu: goto label_1ad29c;
        case 0x1ad2a0u: goto label_1ad2a0;
        case 0x1ad2a4u: goto label_1ad2a4;
        case 0x1ad2a8u: goto label_1ad2a8;
        case 0x1ad2acu: goto label_1ad2ac;
        case 0x1ad2b0u: goto label_1ad2b0;
        case 0x1ad2b4u: goto label_1ad2b4;
        case 0x1ad2b8u: goto label_1ad2b8;
        case 0x1ad2bcu: goto label_1ad2bc;
        case 0x1ad2c0u: goto label_1ad2c0;
        case 0x1ad2c4u: goto label_1ad2c4;
        case 0x1ad2c8u: goto label_1ad2c8;
        case 0x1ad2ccu: goto label_1ad2cc;
        case 0x1ad2d0u: goto label_1ad2d0;
        case 0x1ad2d4u: goto label_1ad2d4;
        case 0x1ad2d8u: goto label_1ad2d8;
        case 0x1ad2dcu: goto label_1ad2dc;
        case 0x1ad2e0u: goto label_1ad2e0;
        case 0x1ad2e4u: goto label_1ad2e4;
        case 0x1ad2e8u: goto label_1ad2e8;
        case 0x1ad2ecu: goto label_1ad2ec;
        case 0x1ad2f0u: goto label_1ad2f0;
        case 0x1ad2f4u: goto label_1ad2f4;
        case 0x1ad2f8u: goto label_1ad2f8;
        case 0x1ad2fcu: goto label_1ad2fc;
        case 0x1ad300u: goto label_1ad300;
        case 0x1ad304u: goto label_1ad304;
        case 0x1ad308u: goto label_1ad308;
        case 0x1ad30cu: goto label_1ad30c;
        case 0x1ad310u: goto label_1ad310;
        case 0x1ad314u: goto label_1ad314;
        case 0x1ad318u: goto label_1ad318;
        case 0x1ad31cu: goto label_1ad31c;
        case 0x1ad320u: goto label_1ad320;
        case 0x1ad324u: goto label_1ad324;
        case 0x1ad328u: goto label_1ad328;
        case 0x1ad32cu: goto label_1ad32c;
        case 0x1ad330u: goto label_1ad330;
        case 0x1ad334u: goto label_1ad334;
        case 0x1ad338u: goto label_1ad338;
        case 0x1ad33cu: goto label_1ad33c;
        case 0x1ad340u: goto label_1ad340;
        case 0x1ad344u: goto label_1ad344;
        case 0x1ad348u: goto label_1ad348;
        case 0x1ad34cu: goto label_1ad34c;
        case 0x1ad350u: goto label_1ad350;
        case 0x1ad354u: goto label_1ad354;
        case 0x1ad358u: goto label_1ad358;
        case 0x1ad35cu: goto label_1ad35c;
        case 0x1ad360u: goto label_1ad360;
        case 0x1ad364u: goto label_1ad364;
        case 0x1ad368u: goto label_1ad368;
        case 0x1ad36cu: goto label_1ad36c;
        case 0x1ad370u: goto label_1ad370;
        case 0x1ad374u: goto label_1ad374;
        case 0x1ad378u: goto label_1ad378;
        case 0x1ad37cu: goto label_1ad37c;
        case 0x1ad380u: goto label_1ad380;
        case 0x1ad384u: goto label_1ad384;
        case 0x1ad388u: goto label_1ad388;
        case 0x1ad38cu: goto label_1ad38c;
        case 0x1ad390u: goto label_1ad390;
        case 0x1ad394u: goto label_1ad394;
        case 0x1ad398u: goto label_1ad398;
        case 0x1ad39cu: goto label_1ad39c;
        case 0x1ad3a0u: goto label_1ad3a0;
        case 0x1ad3a4u: goto label_1ad3a4;
        case 0x1ad3a8u: goto label_1ad3a8;
        case 0x1ad3acu: goto label_1ad3ac;
        case 0x1ad3b0u: goto label_1ad3b0;
        case 0x1ad3b4u: goto label_1ad3b4;
        case 0x1ad3b8u: goto label_1ad3b8;
        case 0x1ad3bcu: goto label_1ad3bc;
        case 0x1ad3c0u: goto label_1ad3c0;
        case 0x1ad3c4u: goto label_1ad3c4;
        case 0x1ad3c8u: goto label_1ad3c8;
        case 0x1ad3ccu: goto label_1ad3cc;
        case 0x1ad3d0u: goto label_1ad3d0;
        case 0x1ad3d4u: goto label_1ad3d4;
        case 0x1ad3d8u: goto label_1ad3d8;
        case 0x1ad3dcu: goto label_1ad3dc;
        case 0x1ad3e0u: goto label_1ad3e0;
        case 0x1ad3e4u: goto label_1ad3e4;
        case 0x1ad3e8u: goto label_1ad3e8;
        case 0x1ad3ecu: goto label_1ad3ec;
        case 0x1ad3f0u: goto label_1ad3f0;
        case 0x1ad3f4u: goto label_1ad3f4;
        case 0x1ad3f8u: goto label_1ad3f8;
        case 0x1ad3fcu: goto label_1ad3fc;
        case 0x1ad400u: goto label_1ad400;
        case 0x1ad404u: goto label_1ad404;
        case 0x1ad408u: goto label_1ad408;
        case 0x1ad40cu: goto label_1ad40c;
        case 0x1ad410u: goto label_1ad410;
        case 0x1ad414u: goto label_1ad414;
        case 0x1ad418u: goto label_1ad418;
        case 0x1ad41cu: goto label_1ad41c;
        case 0x1ad420u: goto label_1ad420;
        case 0x1ad424u: goto label_1ad424;
        case 0x1ad428u: goto label_1ad428;
        case 0x1ad42cu: goto label_1ad42c;
        case 0x1ad430u: goto label_1ad430;
        case 0x1ad434u: goto label_1ad434;
        case 0x1ad438u: goto label_1ad438;
        case 0x1ad43cu: goto label_1ad43c;
        case 0x1ad440u: goto label_1ad440;
        case 0x1ad444u: goto label_1ad444;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad44cu: goto label_1ad44c;
        case 0x1ad450u: goto label_1ad450;
        case 0x1ad454u: goto label_1ad454;
        case 0x1ad458u: goto label_1ad458;
        case 0x1ad45cu: goto label_1ad45c;
        case 0x1ad460u: goto label_1ad460;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad468u: goto label_1ad468;
        case 0x1ad46cu: goto label_1ad46c;
        case 0x1ad470u: goto label_1ad470;
        case 0x1ad474u: goto label_1ad474;
        case 0x1ad478u: goto label_1ad478;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad480u: goto label_1ad480;
        case 0x1ad484u: goto label_1ad484;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad48cu: goto label_1ad48c;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad494u: goto label_1ad494;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4a0u: goto label_1ad4a0;
        case 0x1ad4a4u: goto label_1ad4a4;
        case 0x1ad4a8u: goto label_1ad4a8;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4b0u: goto label_1ad4b0;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4b8u: goto label_1ad4b8;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4c4u: goto label_1ad4c4;
        case 0x1ad4c8u: goto label_1ad4c8;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4d4u: goto label_1ad4d4;
        case 0x1ad4d8u: goto label_1ad4d8;
        case 0x1ad4dcu: goto label_1ad4dc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4e8u: goto label_1ad4e8;
        case 0x1ad4ecu: goto label_1ad4ec;
        case 0x1ad4f0u: goto label_1ad4f0;
        case 0x1ad4f4u: goto label_1ad4f4;
        case 0x1ad4f8u: goto label_1ad4f8;
        case 0x1ad4fcu: goto label_1ad4fc;
        case 0x1ad500u: goto label_1ad500;
        case 0x1ad504u: goto label_1ad504;
        case 0x1ad508u: goto label_1ad508;
        case 0x1ad50cu: goto label_1ad50c;
        case 0x1ad510u: goto label_1ad510;
        case 0x1ad514u: goto label_1ad514;
        case 0x1ad518u: goto label_1ad518;
        case 0x1ad51cu: goto label_1ad51c;
        case 0x1ad520u: goto label_1ad520;
        case 0x1ad524u: goto label_1ad524;
        case 0x1ad528u: goto label_1ad528;
        case 0x1ad52cu: goto label_1ad52c;
        case 0x1ad530u: goto label_1ad530;
        case 0x1ad534u: goto label_1ad534;
        case 0x1ad538u: goto label_1ad538;
        case 0x1ad53cu: goto label_1ad53c;
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad544u: goto label_1ad544;
        case 0x1ad548u: goto label_1ad548;
        case 0x1ad54cu: goto label_1ad54c;
        case 0x1ad550u: goto label_1ad550;
        case 0x1ad554u: goto label_1ad554;
        case 0x1ad558u: goto label_1ad558;
        case 0x1ad55cu: goto label_1ad55c;
        case 0x1ad560u: goto label_1ad560;
        case 0x1ad564u: goto label_1ad564;
        case 0x1ad568u: goto label_1ad568;
        case 0x1ad56cu: goto label_1ad56c;
        case 0x1ad570u: goto label_1ad570;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad578u: goto label_1ad578;
        case 0x1ad57cu: goto label_1ad57c;
        case 0x1ad580u: goto label_1ad580;
        case 0x1ad584u: goto label_1ad584;
        case 0x1ad588u: goto label_1ad588;
        case 0x1ad58cu: goto label_1ad58c;
        case 0x1ad590u: goto label_1ad590;
        case 0x1ad594u: goto label_1ad594;
        case 0x1ad598u: goto label_1ad598;
        case 0x1ad59cu: goto label_1ad59c;
        case 0x1ad5a0u: goto label_1ad5a0;
        case 0x1ad5a4u: goto label_1ad5a4;
        case 0x1ad5a8u: goto label_1ad5a8;
        case 0x1ad5acu: goto label_1ad5ac;
        case 0x1ad5b0u: goto label_1ad5b0;
        case 0x1ad5b4u: goto label_1ad5b4;
        case 0x1ad5b8u: goto label_1ad5b8;
        case 0x1ad5bcu: goto label_1ad5bc;
        case 0x1ad5c0u: goto label_1ad5c0;
        case 0x1ad5c4u: goto label_1ad5c4;
        case 0x1ad5c8u: goto label_1ad5c8;
        case 0x1ad5ccu: goto label_1ad5cc;
        case 0x1ad5d0u: goto label_1ad5d0;
        case 0x1ad5d4u: goto label_1ad5d4;
        case 0x1ad5d8u: goto label_1ad5d8;
        case 0x1ad5dcu: goto label_1ad5dc;
        case 0x1ad5e0u: goto label_1ad5e0;
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad5e8u: goto label_1ad5e8;
        case 0x1ad5ecu: goto label_1ad5ec;
        case 0x1ad5f0u: goto label_1ad5f0;
        case 0x1ad5f4u: goto label_1ad5f4;
        case 0x1ad5f8u: goto label_1ad5f8;
        case 0x1ad5fcu: goto label_1ad5fc;
        case 0x1ad600u: goto label_1ad600;
        case 0x1ad604u: goto label_1ad604;
        case 0x1ad608u: goto label_1ad608;
        case 0x1ad60cu: goto label_1ad60c;
        case 0x1ad610u: goto label_1ad610;
        case 0x1ad614u: goto label_1ad614;
        case 0x1ad618u: goto label_1ad618;
        case 0x1ad61cu: goto label_1ad61c;
        case 0x1ad620u: goto label_1ad620;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad628u: goto label_1ad628;
        case 0x1ad62cu: goto label_1ad62c;
        case 0x1ad630u: goto label_1ad630;
        case 0x1ad634u: goto label_1ad634;
        case 0x1ad638u: goto label_1ad638;
        case 0x1ad63cu: goto label_1ad63c;
        case 0x1ad640u: goto label_1ad640;
        case 0x1ad644u: goto label_1ad644;
        case 0x1ad648u: goto label_1ad648;
        case 0x1ad64cu: goto label_1ad64c;
        case 0x1ad650u: goto label_1ad650;
        case 0x1ad654u: goto label_1ad654;
        case 0x1ad658u: goto label_1ad658;
        case 0x1ad65cu: goto label_1ad65c;
        case 0x1ad660u: goto label_1ad660;
        case 0x1ad664u: goto label_1ad664;
        case 0x1ad668u: goto label_1ad668;
        case 0x1ad66cu: goto label_1ad66c;
        case 0x1ad670u: goto label_1ad670;
        case 0x1ad674u: goto label_1ad674;
        case 0x1ad678u: goto label_1ad678;
        case 0x1ad67cu: goto label_1ad67c;
        case 0x1ad680u: goto label_1ad680;
        case 0x1ad684u: goto label_1ad684;
        case 0x1ad688u: goto label_1ad688;
        case 0x1ad68cu: goto label_1ad68c;
        case 0x1ad690u: goto label_1ad690;
        case 0x1ad694u: goto label_1ad694;
        case 0x1ad698u: goto label_1ad698;
        case 0x1ad69cu: goto label_1ad69c;
        case 0x1ad6a0u: goto label_1ad6a0;
        case 0x1ad6a4u: goto label_1ad6a4;
        case 0x1ad6a8u: goto label_1ad6a8;
        case 0x1ad6acu: goto label_1ad6ac;
        case 0x1ad6b0u: goto label_1ad6b0;
        case 0x1ad6b4u: goto label_1ad6b4;
        case 0x1ad6b8u: goto label_1ad6b8;
        case 0x1ad6bcu: goto label_1ad6bc;
        case 0x1ad6c0u: goto label_1ad6c0;
        case 0x1ad6c4u: goto label_1ad6c4;
        case 0x1ad6c8u: goto label_1ad6c8;
        case 0x1ad6ccu: goto label_1ad6cc;
        case 0x1ad6d0u: goto label_1ad6d0;
        case 0x1ad6d4u: goto label_1ad6d4;
        case 0x1ad6d8u: goto label_1ad6d8;
        case 0x1ad6dcu: goto label_1ad6dc;
        case 0x1ad6e0u: goto label_1ad6e0;
        case 0x1ad6e4u: goto label_1ad6e4;
        case 0x1ad6e8u: goto label_1ad6e8;
        case 0x1ad6ecu: goto label_1ad6ec;
        case 0x1ad6f0u: goto label_1ad6f0;
        case 0x1ad6f4u: goto label_1ad6f4;
        case 0x1ad6f8u: goto label_1ad6f8;
        case 0x1ad6fcu: goto label_1ad6fc;
        case 0x1ad700u: goto label_1ad700;
        case 0x1ad704u: goto label_1ad704;
        case 0x1ad708u: goto label_1ad708;
        case 0x1ad70cu: goto label_1ad70c;
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad714u: goto label_1ad714;
        case 0x1ad718u: goto label_1ad718;
        case 0x1ad71cu: goto label_1ad71c;
        case 0x1ad720u: goto label_1ad720;
        case 0x1ad724u: goto label_1ad724;
        case 0x1ad728u: goto label_1ad728;
        case 0x1ad72cu: goto label_1ad72c;
        case 0x1ad730u: goto label_1ad730;
        case 0x1ad734u: goto label_1ad734;
        case 0x1ad738u: goto label_1ad738;
        case 0x1ad73cu: goto label_1ad73c;
        default: return;
    }

label_1acf70:
    // 0x1acf70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acf74:
    // 0x1acf74: 0x0  nop
    ctx->pc = 0x1acf74u;
    // NOP
label_1acf78:
    // 0x1acf78: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1acf7c:
    // 0x1acf7c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acf80:
    // 0x1acf80: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acf84:
    // 0x1acf84: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1acf88:
    // 0x1acf88: 0xc06b382  jal         func_1ACE08
label_1acf8c:
    if (ctx->pc == 0x1ACF8Cu) {
        ctx->pc = 0x1ACF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF88u;
        // 0x1acf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF90u;
        goto label_1acf90;
    }
    ctx->pc = 0x1ACF88u;
    SET_GPR_U32(ctx, 31, 0x1ACF90u);
    ctx->pc = 0x1ACF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF88u;
    // 0x1acf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    { ctx->pc = 0x1ace08; return; }
    ctx->pc = 0x1ACF90u;
label_1acf90:
    // 0x1acf90: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1acf94:
    // 0x1acf94: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1acf98:
    // 0x1acf98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1acf9c:
    if (ctx->pc == 0x1ACF9Cu) {
        ctx->pc = 0x1ACF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF98u;
        // 0x1acf9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFA0u;
        goto label_1acfa0;
    }
    ctx->pc = 0x1ACF98u;
    {
        const bool branch_taken_0x1acf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acf98) {
            ctx->pc = 0x1ACF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF98u;
            // 0x1acf9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acf78;
        }
    }
    ctx->pc = 0x1ACFA0u;
label_1acfa0:
    // 0x1acfa0: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
label_1acfa4:
    // 0x1acfa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acfa8:
    // 0x1acfa8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1acfac:
    // 0x1acfac: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1acfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1acfb0:
    // 0x1acfb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1acfb4:
    if (ctx->pc == 0x1ACFB4u) {
        ctx->pc = 0x1ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB0u;
        // 0x1acfb4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFB8u;
        goto label_1acfb8;
    }
    ctx->pc = 0x1ACFB0u;
    {
        const bool branch_taken_0x1acfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB0u;
        // 0x1acfb4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfb0) {
            ctx->pc = 0x1ACFD0u;
            goto label_1acfd0;
        }
    }
    ctx->pc = 0x1ACFB8u;
label_1acfb8:
    // 0x1acfb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1acfbc:
    // 0x1acfbc: 0xc069a22  jal         func_1A6888
label_1acfc0:
    if (ctx->pc == 0x1ACFC0u) {
        ctx->pc = 0x1ACFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFBCu;
        // 0x1acfc0: 0x2484a7c0  addiu       $a0, $a0, -0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFC4u;
        goto label_1acfc4;
    }
    ctx->pc = 0x1ACFBCu;
    SET_GPR_U32(ctx, 31, 0x1ACFC4u);
    ctx->pc = 0x1ACFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFBCu;
    // 0x1acfc0: 0x2484a7c0  addiu       $a0, $a0, -0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1ACFC4u;
label_1acfc4:
    // 0x1acfc4: 0xc06b6b4  jal         func_1ADAD0
label_1acfc8:
    if (ctx->pc == 0x1ACFC8u) {
        ctx->pc = 0x1ACFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFC4u;
        // 0x1acfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFCCu;
        goto label_1acfcc;
    }
    ctx->pc = 0x1ACFC4u;
    SET_GPR_U32(ctx, 31, 0x1ACFCCu);
    ctx->pc = 0x1ACFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFC4u;
    // 0x1acfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    { ctx->pc = 0x1adad0; return; }
    ctx->pc = 0x1ACFCCu;
label_1acfcc:
    // 0x1acfcc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1acfd0:
    // 0x1acfd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1acfd4:
    if (ctx->pc == 0x1ACFD4u) {
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFD8u;
        goto label_1acfd8;
    }
    ctx->pc = 0x1ACFD0u;
    {
        const bool branch_taken_0x1acfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd0) {
            ctx->pc = 0x1AD008u;
            goto label_1ad008;
        }
    }
    ctx->pc = 0x1ACFD8u;
label_1acfd8:
    // 0x1acfd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acfdc:
    // 0x1acfdc: 0x0  nop
    ctx->pc = 0x1acfdcu;
    // NOP
label_1acfe0:
    // 0x1acfe0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1acfe4:
    // 0x1acfe4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acfe8:
    // 0x1acfe8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acfec:
    // 0x1acfec: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acfecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1acff0:
    // 0x1acff0: 0xc06b382  jal         func_1ACE08
label_1acff4:
    if (ctx->pc == 0x1ACFF4u) {
        ctx->pc = 0x1ACFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFF0u;
        // 0x1acff4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFF8u;
        goto label_1acff8;
    }
    ctx->pc = 0x1ACFF0u;
    SET_GPR_U32(ctx, 31, 0x1ACFF8u);
    ctx->pc = 0x1ACFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFF0u;
    // 0x1acff4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    { ctx->pc = 0x1ace08; return; }
    ctx->pc = 0x1ACFF8u;
label_1acff8:
    // 0x1acff8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1acffc:
    // 0x1acffc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1ad000:
    // 0x1ad000: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1ad004:
    if (ctx->pc == 0x1AD004u) {
        ctx->pc = 0x1AD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD000u;
        // 0x1ad004: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD008u;
        goto label_1ad008;
    }
    ctx->pc = 0x1AD000u;
    {
        const bool branch_taken_0x1ad000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad000) {
            ctx->pc = 0x1AD004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD000u;
            // 0x1ad004: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1AD008u;
label_1ad008:
    // 0x1ad008: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
label_1ad00c:
    // 0x1ad00c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1ad00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_1ad010:
    // 0x1ad010: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1ad010u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_1ad014:
    // 0x1ad014: 0x40f  sync.p
    ctx->pc = 0x1ad014u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad018:
    // 0x1ad018: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ad01c:
    // 0x1ad01c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_1ad020:
    if (ctx->pc == 0x1AD020u) {
        ctx->pc = 0x1AD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD01Cu;
        // 0x1ad020: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD024u;
        goto label_1ad024;
    }
    ctx->pc = 0x1AD01Cu;
    {
        const bool branch_taken_0x1ad01c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ad01c) {
            ctx->pc = 0x1AD020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD01Cu;
            // 0x1ad020: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD084u;
            goto label_1ad084;
        }
    }
    ctx->pc = 0x1AD024u;
label_1ad024:
    // 0x1ad024: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1ad028:
    // 0x1ad028: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1ad028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1ad02c:
    // 0x1ad02c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ad030:
    if (ctx->pc == 0x1AD030u) {
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD034u;
        goto label_1ad034;
    }
    ctx->pc = 0x1AD02Cu;
    {
        const bool branch_taken_0x1ad02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad02c) {
            ctx->pc = 0x1AD04Cu;
            goto label_1ad04c;
        }
    }
    ctx->pc = 0x1AD034u;
label_1ad034:
    // 0x1ad034: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ad038:
    // 0x1ad038: 0xc069a22  jal         func_1A6888
label_1ad03c:
    if (ctx->pc == 0x1AD03Cu) {
        ctx->pc = 0x1AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD038u;
        // 0x1ad03c: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD040u;
        goto label_1ad040;
    }
    ctx->pc = 0x1AD038u;
    SET_GPR_U32(ctx, 31, 0x1AD040u);
    ctx->pc = 0x1AD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD038u;
    // 0x1ad03c: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1AD040u;
label_1ad040:
    // 0x1ad040: 0xc06b6b4  jal         func_1ADAD0
label_1ad044:
    if (ctx->pc == 0x1AD044u) {
        ctx->pc = 0x1AD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD040u;
        // 0x1ad044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD048u;
        goto label_1ad048;
    }
    ctx->pc = 0x1AD040u;
    SET_GPR_U32(ctx, 31, 0x1AD048u);
    ctx->pc = 0x1AD044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD040u;
    // 0x1ad044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    { ctx->pc = 0x1adad0; return; }
    ctx->pc = 0x1AD048u;
label_1ad048:
    // 0x1ad048: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1ad04c:
    // 0x1ad04c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ad050:
    if (ctx->pc == 0x1AD050u) {
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD04Cu;
        // 0x1ad050: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD054u;
        goto label_1ad054;
    }
    ctx->pc = 0x1AD04Cu;
    {
        const bool branch_taken_0x1ad04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD04Cu;
        // 0x1ad050: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad04c) {
            ctx->pc = 0x1AD080u;
            goto label_1ad080;
        }
    }
    ctx->pc = 0x1AD054u;
label_1ad054:
    // 0x1ad054: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad058:
    // 0x1ad058: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1ad058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad05c:
    // 0x1ad05c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ad060:
    // 0x1ad060: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ad064:
    // 0x1ad064: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1ad064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ad068:
    // 0x1ad068: 0xc06b382  jal         func_1ACE08
label_1ad06c:
    if (ctx->pc == 0x1AD06Cu) {
        ctx->pc = 0x1AD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD068u;
        // 0x1ad06c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD070u;
        goto label_1ad070;
    }
    ctx->pc = 0x1AD068u;
    SET_GPR_U32(ctx, 31, 0x1AD070u);
    ctx->pc = 0x1AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD068u;
    // 0x1ad06c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    { ctx->pc = 0x1ace08; return; }
    ctx->pc = 0x1AD070u;
label_1ad070:
    // 0x1ad070: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1ad074:
    // 0x1ad074: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1ad078:
    // 0x1ad078: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1ad07c:
    if (ctx->pc == 0x1AD07Cu) {
        ctx->pc = 0x1AD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD078u;
        // 0x1ad07c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD080u;
        goto label_1ad080;
    }
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD078u;
            // 0x1ad07c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad058;
        }
    }
    ctx->pc = 0x1AD080u;
label_1ad080:
    // 0x1ad080: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1ad080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad084:
    // 0x1ad084: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_1ad088:
    // 0x1ad088: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1ad08c:
    if (ctx->pc == 0x1AD08Cu) {
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD088u;
        // 0x1ad08c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD090u;
        goto label_1ad090;
    }
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD088u;
        // 0x1ad08c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1AD090u;
label_1ad090:
    // 0x1ad090: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_1ad094:
    // 0x1ad094: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1ad098:
    // 0x1ad098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad09c:
    // 0x1ad09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0a0:
    // 0x1ad0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0a4:
    // 0x1ad0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0a8:
    // 0x1ad0a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0ac:
    // 0x1ad0ac: 0xc06b382  jal         func_1ACE08
label_1ad0b0:
    if (ctx->pc == 0x1AD0B0u) {
        ctx->pc = 0x1AD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0ACu;
        // 0x1ad0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0B4u;
        goto label_1ad0b4;
    }
    ctx->pc = 0x1AD0ACu;
    SET_GPR_U32(ctx, 31, 0x1AD0B4u);
    ctx->pc = 0x1AD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0ACu;
    // 0x1ad0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    { ctx->pc = 0x1ace08; return; }
    ctx->pc = 0x1AD0B4u;
label_1ad0b4:
    // 0x1ad0b4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_1ad0b8:
    // 0x1ad0b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1ad0bc:
    if (ctx->pc == 0x1AD0BCu) {
        ctx->pc = 0x1AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0B8u;
        // 0x1ad0bc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0C0u;
        goto label_1ad0c0;
    }
    ctx->pc = 0x1AD0B8u;
    {
        const bool branch_taken_0x1ad0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0B8u;
        // 0x1ad0bc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0b8) {
            ctx->pc = 0x1AD098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad098;
        }
    }
    ctx->pc = 0x1AD0C0u;
label_1ad0c0:
    // 0x1ad0c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad0c4:
    // 0x1ad0c4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0c8:
    // 0x1ad0c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad0cc:
    // 0x1ad0cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad0d0:
    // 0x1ad0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad0d4:
    // 0x1ad0d4: 0x3e00008  jr          $ra
label_1ad0d8:
    if (ctx->pc == 0x1AD0D8u) {
        ctx->pc = 0x1AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D4u;
        // 0x1ad0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0DCu;
        goto label_1ad0dc;
    }
    ctx->pc = 0x1AD0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D4u;
        // 0x1ad0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD0DCu;
label_1ad0dc:
    // 0x1ad0dc: 0x0  nop
    ctx->pc = 0x1ad0dcu;
    // NOP
label_1ad0e0:
    // 0x1ad0e0: 0x0  nop
    ctx->pc = 0x1ad0e0u;
    // NOP
label_1ad0e4:
    // 0x1ad0e4: 0x0  nop
    ctx->pc = 0x1ad0e4u;
    // NOP
label_1ad0e8:
    // 0x1ad0e8: 0x0  nop
    ctx->pc = 0x1ad0e8u;
    // NOP
label_1ad0ec:
    // 0x1ad0ec: 0x0  nop
    ctx->pc = 0x1ad0ecu;
    // NOP
label_1ad0f0:
    // 0x1ad0f0: 0x0  nop
    ctx->pc = 0x1ad0f0u;
    // NOP
label_1ad0f4:
    // 0x1ad0f4: 0x0  nop
    ctx->pc = 0x1ad0f4u;
    // NOP
label_1ad0f8:
    // 0x1ad0f8: 0x0  nop
    ctx->pc = 0x1ad0f8u;
    // NOP
label_1ad0fc:
    // 0x1ad0fc: 0x0  nop
    ctx->pc = 0x1ad0fcu;
    // NOP
label_1ad100:
    // 0x1ad100: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad100u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad104:
    // 0x1ad104: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad104u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad108:
    // 0x1ad108: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1ad108u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1ad10c:
    // 0x1ad10c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1ad10cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1ad110:
    // 0x1ad110: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1ad110u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1ad114:
    // 0x1ad114: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1ad114u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1ad118:
    // 0x1ad118: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1ad118u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1ad11c:
    // 0x1ad11c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1ad11cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1ad120:
    // 0x1ad120: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1ad120u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1ad124:
    // 0x1ad124: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1ad124u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1ad128:
    // 0x1ad128: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1ad128u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1ad12c:
    // 0x1ad12c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad12cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1ad130:
    // 0x1ad130: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad130u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1ad134:
    // 0x1ad134: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad134u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1ad138:
    // 0x1ad138: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad138u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1ad13c:
    // 0x1ad13c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad13cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1ad140:
    // 0x1ad140: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad140u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1ad144:
    // 0x1ad144: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1ad144u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1ad148:
    // 0x1ad148: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1ad148u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1ad14c:
    // 0x1ad14c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1ad14cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1ad150:
    // 0x1ad150: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1ad150u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1ad154:
    // 0x1ad154: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1ad154u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1ad158:
    // 0x1ad158: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1ad158u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1ad15c:
    // 0x1ad15c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1ad15cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1ad160:
    // 0x1ad160: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1ad160u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1ad164:
    // 0x1ad164: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1ad164u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1ad168:
    // 0x1ad168: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1ad168u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1ad16c:
    // 0x1ad16c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad16cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1ad170:
    // 0x1ad170: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad170u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1ad174:
    // 0x1ad174: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad174u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1ad178:
    // 0x1ad178: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad178u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1ad17c:
    // 0x1ad17c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ad180:
    // 0x1ad180: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad184:
    // 0x1ad184: 0xfc225c40  sd          $v0, 0x5C40($at)
    ctx->pc = 0x1ad184u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23616), GPR_U64(ctx, 2));
label_1ad188:
    // 0x1ad188: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1ad18c:
    // 0x1ad18c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad190:
    // 0x1ad190: 0xfc225c48  sd          $v0, 0x5C48($at)
    ctx->pc = 0x1ad190u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23624), GPR_U64(ctx, 2));
label_1ad194:
    // 0x1ad194: 0x1012  mflo        $v0
    ctx->pc = 0x1ad194u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ad198:
    // 0x1ad198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad19c:
    // 0x1ad19c: 0xfc225c50  sd          $v0, 0x5C50($at)
    ctx->pc = 0x1ad19cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23632), GPR_U64(ctx, 2));
label_1ad1a0:
    // 0x1ad1a0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1ad1a4:
    // 0x1ad1a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1a8:
    // 0x1ad1a8: 0xfc225c58  sd          $v0, 0x5C58($at)
    ctx->pc = 0x1ad1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23640), GPR_U64(ctx, 2));
label_1ad1ac:
    // 0x1ad1ac: 0x1028  mfsa        $v0
    ctx->pc = 0x1ad1acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1ad1b0:
    // 0x1ad1b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1b4:
    // 0x1ad1b4: 0xfc225c60  sd          $v0, 0x5C60($at)
    ctx->pc = 0x1ad1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23648), GPR_U64(ctx, 2));
label_1ad1b8:
    // 0x1ad1b8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1ad1bc:
    // 0x1ad1bc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1ad1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1ad1c0:
    // 0x1ad1c0: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1ad1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1ad1c4:
    // 0x1ad1c4: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1ad1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1ad1c8:
    // 0x1ad1c8: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1ad1cc:
    // 0x1ad1cc: 0x25085a40  addiu       $t0, $t0, 0x5A40
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23104));
label_1ad1d0:
    // 0x1ad1d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1d4:
    // 0x1ad1d4: 0xac265c68  sw          $a2, 0x5C68($at)
    ctx->pc = 0x1ad1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23656), GPR_U32(ctx, 6));
label_1ad1d8:
    // 0x1ad1d8: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
label_1ad1dc:
    // 0x1ad1dc: 0x2421d200  addiu       $at, $at, -0x2E00
    ctx->pc = 0x1ad1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955520));
label_1ad1e0:
    // 0x1ad1e0: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1ad1e0u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1ad1e4:
    // 0x1ad1e4: 0x40f  sync.p
    ctx->pc = 0x1ad1e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad1e8:
    // 0x1ad1e8: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad1ec:
    // 0x1ad1ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ad1f0:
    // 0x1ad1f0: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1ad1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1ad1f4:
    // 0x1ad1f4: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad1f4u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad1f8:
    // 0x1ad1f8: 0x40f  sync.p
    ctx->pc = 0x1ad1f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad1fc:
    // 0x1ad1fc: 0x42000018  eret
    ctx->pc = 0x1ad1fcu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad200:
    // 0x1ad200: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1ad204:
    // 0x1ad204: 0x8c215f50  lw          $at, 0x5F50($at)
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24400)));
label_1ad208:
    // 0x1ad208: 0x3c1d0037  lui         $sp, 0x37
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)55 << 16));
label_1ad20c:
    // 0x1ad20c: 0x20f809  jalr        $at
label_1ad210:
    if (ctx->pc == 0x1AD210u) {
        ctx->pc = 0x1AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD20Cu;
        // 0x1ad210: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD214u;
        goto label_1ad214;
    }
    ctx->pc = 0x1AD20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1AD214u);
        ctx->pc = 0x1AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD20Cu;
        // 0x1ad210: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD20Cu, 0x1AD214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD214u;
label_1ad214:
    // 0x1ad214: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_1ad218:
    // 0x1ad218: 0xc  syscall     0
    ctx->pc = 0x1ad218u;
    ctx->pc = 0x1AD21Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad21c:
    // 0x1ad21c: 0x0  nop
    ctx->pc = 0x1ad21cu;
    // NOP
label_1ad220:
    // 0x1ad220: 0x0  nop
    ctx->pc = 0x1ad220u;
    // NOP
label_1ad224:
    // 0x1ad224: 0x0  nop
    ctx->pc = 0x1ad224u;
    // NOP
label_1ad228:
    // 0x1ad228: 0x0  nop
    ctx->pc = 0x1ad228u;
    // NOP
label_1ad22c:
    // 0x1ad22c: 0x0  nop
    ctx->pc = 0x1ad22cu;
    // NOP
label_1ad230:
    // 0x1ad230: 0x0  nop
    ctx->pc = 0x1ad230u;
    // NOP
label_1ad234:
    // 0x1ad234: 0x0  nop
    ctx->pc = 0x1ad234u;
    // NOP
label_1ad238:
    // 0x1ad238: 0x0  nop
    ctx->pc = 0x1ad238u;
    // NOP
label_1ad23c:
    // 0x1ad23c: 0x0  nop
    ctx->pc = 0x1ad23cu;
    // NOP
label_1ad240:
    // 0x1ad240: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad240u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad244:
    // 0x1ad244: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_1ad248:
    // 0x1ad248: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x1ad248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_1ad24c:
    // 0x1ad24c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad24cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad250:
    // 0x1ad250: 0x40f  sync.p
    ctx->pc = 0x1ad250u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad254:
    // 0x1ad254: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad258:
    // 0x1ad258: 0x8c425c68  lw          $v0, 0x5C68($v0)
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23656)));
label_1ad25c:
    // 0x1ad25c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x1ad25cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_1ad260:
    // 0x1ad260: 0x40f  sync.p
    ctx->pc = 0x1ad260u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad264:
    // 0x1ad264: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad268:
    // 0x1ad268: 0xdc425c40  ld          $v0, 0x5C40($v0)
    ctx->pc = 0x1ad268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23616)));
label_1ad26c:
    // 0x1ad26c: 0x400011  mthi        $v0
    ctx->pc = 0x1ad26cu;
    ctx->hi = GPR_U64(ctx, 2);
label_1ad270:
    // 0x1ad270: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad274:
    // 0x1ad274: 0xdc425c48  ld          $v0, 0x5C48($v0)
    ctx->pc = 0x1ad274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23624)));
label_1ad278:
    // 0x1ad278: 0x70400011  mthi1       $v0
    ctx->pc = 0x1ad278u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_1ad27c:
    // 0x1ad27c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad280:
    // 0x1ad280: 0xdc425c50  ld          $v0, 0x5C50($v0)
    ctx->pc = 0x1ad280u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23632)));
label_1ad284:
    // 0x1ad284: 0x400013  mtlo        $v0
    ctx->pc = 0x1ad284u;
    ctx->lo = GPR_U64(ctx, 2);
label_1ad288:
    // 0x1ad288: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad28c:
    // 0x1ad28c: 0xdc425c58  ld          $v0, 0x5C58($v0)
    ctx->pc = 0x1ad28cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23640)));
label_1ad290:
    // 0x1ad290: 0x70400013  mtlo1       $v0
    ctx->pc = 0x1ad290u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_1ad294:
    // 0x1ad294: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad298:
    // 0x1ad298: 0xdc425c60  ld          $v0, 0x5C60($v0)
    ctx->pc = 0x1ad298u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23648)));
label_1ad29c:
    // 0x1ad29c: 0x400029  mtsa        $v0
    ctx->pc = 0x1ad29cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_1ad2a0:
    // 0x1ad2a0: 0x40f  sync.p
    ctx->pc = 0x1ad2a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad2a4:
    // 0x1ad2a4: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad2a4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad2a8:
    // 0x1ad2a8: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad2a8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad2ac:
    // 0x1ad2ac: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x1ad2acu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_1ad2b0:
    // 0x1ad2b0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x1ad2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_1ad2b4:
    // 0x1ad2b4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x1ad2b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_1ad2b8:
    // 0x1ad2b8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x1ad2b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_1ad2bc:
    // 0x1ad2bc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x1ad2bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_1ad2c0:
    // 0x1ad2c0: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x1ad2c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_1ad2c4:
    // 0x1ad2c4: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x1ad2c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_1ad2c8:
    // 0x1ad2c8: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x1ad2c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_1ad2cc:
    // 0x1ad2cc: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x1ad2ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_1ad2d0:
    // 0x1ad2d0: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_1ad2d4:
    // 0x1ad2d4: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad2d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_1ad2d8:
    // 0x1ad2d8: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad2d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_1ad2dc:
    // 0x1ad2dc: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad2dcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_1ad2e0:
    // 0x1ad2e0: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad2e0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_1ad2e4:
    // 0x1ad2e4: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad2e4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_1ad2e8:
    // 0x1ad2e8: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x1ad2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_1ad2ec:
    // 0x1ad2ec: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_1ad2f0:
    // 0x1ad2f0: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x1ad2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_1ad2f4:
    // 0x1ad2f4: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x1ad2f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_1ad2f8:
    // 0x1ad2f8: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x1ad2f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_1ad2fc:
    // 0x1ad2fc: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x1ad2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_1ad300:
    // 0x1ad300: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x1ad300u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_1ad304:
    // 0x1ad304: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x1ad304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_1ad308:
    // 0x1ad308: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x1ad308u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_1ad30c:
    // 0x1ad30c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x1ad30cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_1ad310:
    // 0x1ad310: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad310u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_1ad314:
    // 0x1ad314: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad314u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_1ad318:
    // 0x1ad318: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad318u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_1ad31c:
    // 0x1ad31c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad31cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_1ad320:
    // 0x1ad320: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x1ad320u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_1ad324:
    // 0x1ad324: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x1ad324u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_1ad328:
    // 0x1ad328: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x1ad328u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_1ad32c:
    // 0x1ad32c: 0x40f  sync.p
    ctx->pc = 0x1ad32cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad330:
    // 0x1ad330: 0x42000018  eret
    ctx->pc = 0x1ad330u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad334:
    // 0x1ad334: 0x0  nop
    ctx->pc = 0x1ad334u;
    // NOP
label_1ad338:
    // 0x1ad338: 0x0  nop
    ctx->pc = 0x1ad338u;
    // NOP
label_1ad33c:
    // 0x1ad33c: 0x0  nop
    ctx->pc = 0x1ad33cu;
    // NOP
label_1ad340:
    // 0x1ad340: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad344:
    // 0x1ad344: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad344u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad348:
    // 0x1ad348: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1ad348u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1ad34c:
    // 0x1ad34c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1ad34cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1ad350:
    // 0x1ad350: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1ad350u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1ad354:
    // 0x1ad354: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1ad354u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1ad358:
    // 0x1ad358: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1ad358u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1ad35c:
    // 0x1ad35c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1ad35cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1ad360:
    // 0x1ad360: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1ad360u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1ad364:
    // 0x1ad364: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1ad364u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1ad368:
    // 0x1ad368: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1ad368u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1ad36c:
    // 0x1ad36c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad36cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1ad370:
    // 0x1ad370: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad370u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1ad374:
    // 0x1ad374: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad374u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1ad378:
    // 0x1ad378: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad378u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1ad37c:
    // 0x1ad37c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad37cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1ad380:
    // 0x1ad380: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad380u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1ad384:
    // 0x1ad384: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1ad384u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1ad388:
    // 0x1ad388: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1ad388u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1ad38c:
    // 0x1ad38c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1ad38cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1ad390:
    // 0x1ad390: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1ad390u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1ad394:
    // 0x1ad394: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1ad394u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1ad398:
    // 0x1ad398: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1ad398u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1ad39c:
    // 0x1ad39c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1ad39cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1ad3a0:
    // 0x1ad3a0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1ad3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1ad3a4:
    // 0x1ad3a4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1ad3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1ad3a8:
    // 0x1ad3a8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1ad3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1ad3ac:
    // 0x1ad3ac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad3acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1ad3b0:
    // 0x1ad3b0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1ad3b4:
    // 0x1ad3b4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1ad3b8:
    // 0x1ad3b8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1ad3bc:
    // 0x1ad3bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ad3bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ad3c0:
    // 0x1ad3c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3c4:
    // 0x1ad3c4: 0xfc225c40  sd          $v0, 0x5C40($at)
    ctx->pc = 0x1ad3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23616), GPR_U64(ctx, 2));
label_1ad3c8:
    // 0x1ad3c8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1ad3c8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1ad3cc:
    // 0x1ad3cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3d0:
    // 0x1ad3d0: 0xfc225c48  sd          $v0, 0x5C48($at)
    ctx->pc = 0x1ad3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23624), GPR_U64(ctx, 2));
label_1ad3d4:
    // 0x1ad3d4: 0x1012  mflo        $v0
    ctx->pc = 0x1ad3d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ad3d8:
    // 0x1ad3d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3dc:
    // 0x1ad3dc: 0xfc225c50  sd          $v0, 0x5C50($at)
    ctx->pc = 0x1ad3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23632), GPR_U64(ctx, 2));
label_1ad3e0:
    // 0x1ad3e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1ad3e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1ad3e4:
    // 0x1ad3e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3e8:
    // 0x1ad3e8: 0xfc225c58  sd          $v0, 0x5C58($at)
    ctx->pc = 0x1ad3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23640), GPR_U64(ctx, 2));
label_1ad3ec:
    // 0x1ad3ec: 0x1028  mfsa        $v0
    ctx->pc = 0x1ad3ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1ad3f0:
    // 0x1ad3f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3f4:
    // 0x1ad3f4: 0xfc225c60  sd          $v0, 0x5C60($at)
    ctx->pc = 0x1ad3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23648), GPR_U64(ctx, 2));
label_1ad3f8:
    // 0x1ad3f8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1ad3fc:
    // 0x1ad3fc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1ad3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1ad400:
    // 0x1ad400: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1ad400u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1ad404:
    // 0x1ad404: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1ad404u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1ad408:
    // 0x1ad408: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x1ad408u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_1ad40c:
    // 0x1ad40c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1ad410:
    // 0x1ad410: 0x25295a40  addiu       $t1, $t1, 0x5A40
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23104));
label_1ad414:
    // 0x1ad414: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x1ad414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
label_1ad418:
    // 0x1ad418: 0x2421d43c  addiu       $at, $at, -0x2BC4
    ctx->pc = 0x1ad418u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294956092));
label_1ad41c:
    // 0x1ad41c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1ad41cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1ad420:
    // 0x1ad420: 0x40f  sync.p
    ctx->pc = 0x1ad420u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad424:
    // 0x1ad424: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad424u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad428:
    // 0x1ad428: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ad42c:
    // 0x1ad42c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1ad42cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1ad430:
    // 0x1ad430: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad430u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad434:
    // 0x1ad434: 0x40f  sync.p
    ctx->pc = 0x1ad434u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad438:
    // 0x1ad438: 0x42000018  eret
    ctx->pc = 0x1ad438u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad43c:
    // 0x1ad43c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x1ad43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_1ad440:
    // 0x1ad440: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1ad444:
    // 0x1ad444: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1ad444u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1ad448:
    // 0x1ad448: 0x8c215f58  lw          $at, 0x5F58($at)
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24408)));
label_1ad44c:
    // 0x1ad44c: 0x3c1d0037  lui         $sp, 0x37
    ctx->pc = 0x1ad44cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)55 << 16));
label_1ad450:
    // 0x1ad450: 0x20f809  jalr        $at
label_1ad454:
    if (ctx->pc == 0x1AD454u) {
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD458u;
        goto label_1ad458;
    }
    ctx->pc = 0x1AD450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1AD458u);
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD450u, 0x1AD458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD458u;
label_1ad458:
    // 0x1ad458: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x1ad458u;
    runtime->handleBreak(rdram, ctx);
label_1ad45c:
    // 0x1ad45c: 0x0  nop
    ctx->pc = 0x1ad45cu;
    // NOP
label_1ad460:
    // 0x1ad460: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1ad460u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_1ad464:
    // 0x1ad464: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ad468:
    // 0x1ad468: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ad468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ad46c:
    // 0x1ad46c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ad470:
    if (ctx->pc == 0x1AD470u) {
        ctx->pc = 0x1AD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD46Cu;
        // 0x1ad470: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD474u;
        goto label_1ad474;
    }
    ctx->pc = 0x1AD46Cu;
    {
        const bool branch_taken_0x1ad46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD46Cu;
        // 0x1ad470: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad46c) {
            ctx->pc = 0x1AD49Cu;
            goto label_1ad49c;
        }
    }
    ctx->pc = 0x1AD474u;
label_1ad474:
    // 0x1ad474: 0x0  nop
    ctx->pc = 0x1ad474u;
    // NOP
label_1ad478:
    // 0x1ad478: 0x42000039  di
    ctx->pc = 0x1ad478u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_1ad47c:
    // 0x1ad47c: 0x40f  sync.p
    ctx->pc = 0x1ad47cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad480:
    // 0x1ad480: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1ad480u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_1ad484:
    // 0x1ad484: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1ad488:
    // 0x1ad488: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ad488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ad48c:
    // 0x1ad48c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ad490:
    if (ctx->pc == 0x1AD490u) {
        ctx->pc = 0x1AD494u;
        goto label_1ad494;
    }
    ctx->pc = 0x1AD48Cu;
    {
        const bool branch_taken_0x1ad48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad48c) {
            ctx->pc = 0x1AD478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad478;
        }
    }
    ctx->pc = 0x1AD494u;
label_1ad494:
    // 0x1ad494: 0x3e00008  jr          $ra
label_1ad498:
    if (ctx->pc == 0x1AD498u) {
        ctx->pc = 0x1AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD494u;
        // 0x1ad498: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD49Cu;
        goto label_1ad49c;
    }
    ctx->pc = 0x1AD494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD494u;
        // 0x1ad498: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD49Cu;
label_1ad49c:
    // 0x1ad49c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4a0:
    // 0x1ad4a0: 0x3e00008  jr          $ra
label_1ad4a4:
    if (ctx->pc == 0x1AD4A4u) {
        ctx->pc = 0x1AD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4A0u;
        // 0x1ad4a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4A8u;
        goto label_1ad4a8;
    }
    ctx->pc = 0x1AD4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4A0u;
        // 0x1ad4a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD4A8u;
label_1ad4a8:
    // 0x1ad4a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1ad4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_1ad4ac:
    // 0x1ad4ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1ad4b0:
    // 0x1ad4b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ad4b4:
    // 0x1ad4b4: 0x42000038  ei
    ctx->pc = 0x1ad4b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1ad4b8:
    // 0x1ad4b8: 0x3e00008  jr          $ra
label_1ad4bc:
    if (ctx->pc == 0x1AD4BCu) {
        ctx->pc = 0x1AD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4B8u;
        // 0x1ad4bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4C0u;
        goto label_1ad4c0;
    }
    ctx->pc = 0x1AD4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4B8u;
        // 0x1ad4bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD4C0u;
label_1ad4c0:
    // 0x1ad4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ad4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ad4c4:
    // 0x1ad4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad4c8:
    // 0x1ad4c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ad4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ad4cc:
    // 0x1ad4cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4d0:
    // 0x1ad4d0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ad4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1ad4d4:
    // 0x1ad4d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ad4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1ad4d8:
    // 0x1ad4d8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1ad4dc:
    // 0x1ad4dc: 0xc069208  jal         func_1A4820
label_1ad4e0:
    if (ctx->pc == 0x1AD4E0u) {
        ctx->pc = 0x1AD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4DCu;
        // 0x1ad4e0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4E4u;
        goto label_1ad4e4;
    }
    ctx->pc = 0x1AD4DCu;
    SET_GPR_U32(ctx, 31, 0x1AD4E4u);
    ctx->pc = 0x1AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4DCu;
    // 0x1ad4e0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AD4E4u;
label_1ad4e4:
    // 0x1ad4e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1ad4e8:
    // 0x1ad4e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ad4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ad4ec:
    // 0x1ad4ec: 0xc069208  jal         func_1A4820
label_1ad4f0:
    if (ctx->pc == 0x1AD4F0u) {
        ctx->pc = 0x1AD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4ECu;
        // 0x1ad4f0: 0xac626288  sw          $v0, 0x6288($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4F4u;
        goto label_1ad4f4;
    }
    ctx->pc = 0x1AD4ECu;
    SET_GPR_U32(ctx, 31, 0x1AD4F4u);
    ctx->pc = 0x1AD4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4ECu;
    // 0x1ad4f0: 0xac626288  sw          $v0, 0x6288($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 25224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AD4F4u;
label_1ad4f4:
    // 0x1ad4f4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ad4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1ad4f8:
    // 0x1ad4f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ad4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ad4fc:
    // 0x1ad4fc: 0xac62628c  sw          $v0, 0x628C($v1)
    ctx->pc = 0x1ad4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25228), GPR_U32(ctx, 2));
label_1ad500:
    // 0x1ad500: 0x3e00008  jr          $ra
label_1ad504:
    if (ctx->pc == 0x1AD504u) {
        ctx->pc = 0x1AD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD500u;
        // 0x1ad504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD508u;
        goto label_1ad508;
    }
    ctx->pc = 0x1AD500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD500u;
        // 0x1ad504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD508u;
label_1ad508:
    // 0x1ad508: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1ad508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ad50c:
    // 0x1ad50c: 0xc  syscall     0
    ctx->pc = 0x1ad50cu;
    ctx->pc = 0x1AD510u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad510:
    // 0x1ad510: 0x3e00008  jr          $ra
label_1ad514:
    if (ctx->pc == 0x1AD514u) {
        ctx->pc = 0x1AD518u;
        goto label_1ad518;
    }
    ctx->pc = 0x1AD510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD518u;
label_1ad518:
    // 0x1ad518: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1ad518u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_1ad51c:
    // 0x1ad51c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_1ad520:
    if (ctx->pc == 0x1AD520u) {
        ctx->pc = 0x1AD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD51Cu;
        // 0x1ad520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD524u;
        goto label_1ad524;
    }
    ctx->pc = 0x1AD51Cu;
    {
        const bool branch_taken_0x1ad51c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD51Cu;
        // 0x1ad520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad51c) {
            ctx->pc = 0x1AD548u;
            goto label_1ad548;
        }
    }
    ctx->pc = 0x1AD524u;
label_1ad524:
    // 0x1ad524: 0x0  nop
    ctx->pc = 0x1ad524u;
    // NOP
label_1ad528:
    // 0x1ad528: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ad528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ad52c:
    // 0x1ad52c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ad52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1ad530:
    // 0x1ad530: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ad530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1ad534:
    // 0x1ad534: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1ad534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1ad538:
    // 0x1ad538: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ad538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ad53c:
    // 0x1ad53c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ad53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1ad540:
    // 0x1ad540: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ad544:
    if (ctx->pc == 0x1AD544u) {
        ctx->pc = 0x1AD548u;
        goto label_1ad548;
    }
    ctx->pc = 0x1AD540u;
    {
        const bool branch_taken_0x1ad540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad540) {
            ctx->pc = 0x1AD528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad528;
        }
    }
    ctx->pc = 0x1AD548u;
label_1ad548:
    // 0x1ad548: 0x3e00008  jr          $ra
label_1ad54c:
    if (ctx->pc == 0x1AD54Cu) {
        ctx->pc = 0x1AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD548u;
        // 0x1ad54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD550u;
        goto label_1ad550;
    }
    ctx->pc = 0x1AD548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD548u;
        // 0x1ad54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD550u;
label_1ad550:
    // 0x1ad550: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ad550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad554:
    // 0x1ad554: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
label_1ad558:
    if (ctx->pc == 0x1AD558u) {
        ctx->pc = 0x1AD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD554u;
        // 0x1ad558: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD55Cu;
        goto label_1ad55c;
    }
    ctx->pc = 0x1AD554u;
    {
        const bool branch_taken_0x1ad554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1AD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD554u;
        // 0x1ad558: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad554) {
            ctx->pc = 0x1AD584u;
            goto label_1ad584;
        }
    }
    ctx->pc = 0x1AD55Cu;
label_1ad55c:
    // 0x1ad55c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1ad560:
    if (ctx->pc == 0x1AD560u) {
        ctx->pc = 0x1AD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD55Cu;
        // 0x1ad560: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD564u;
        goto label_1ad564;
    }
    ctx->pc = 0x1AD55Cu;
    {
        const bool branch_taken_0x1ad55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad55c) {
            ctx->pc = 0x1AD560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD55Cu;
            // 0x1ad560: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD588u;
            goto label_1ad588;
        }
    }
    ctx->pc = 0x1AD564u;
label_1ad564:
    // 0x1ad564: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ad564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1ad568:
    // 0x1ad568: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ad568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad56c:
    // 0x1ad56c: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
label_1ad570:
    if (ctx->pc == 0x1AD570u) {
        ctx->pc = 0x1AD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD56Cu;
        // 0x1ad570: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD574u;
        goto label_1ad574;
    }
    ctx->pc = 0x1AD56Cu;
    {
        const bool branch_taken_0x1ad56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1AD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD56Cu;
        // 0x1ad570: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad56c) {
            ctx->pc = 0x1AD584u;
            goto label_1ad584;
        }
    }
    ctx->pc = 0x1AD574u;
label_1ad574:
    // 0x1ad574: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
label_1ad578:
    if (ctx->pc == 0x1AD578u) {
        ctx->pc = 0x1AD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD574u;
        // 0x1ad578: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD57Cu;
        goto label_1ad57c;
    }
    ctx->pc = 0x1AD574u;
    {
        const bool branch_taken_0x1ad574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad574) {
            ctx->pc = 0x1AD578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD574u;
            // 0x1ad578: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad568;
        }
    }
    ctx->pc = 0x1AD57Cu;
label_1ad57c:
    // 0x1ad57c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ad580:
    if (ctx->pc == 0x1AD580u) {
        ctx->pc = 0x1AD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD57Cu;
        // 0x1ad580: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD584u;
        goto label_1ad584;
    }
    ctx->pc = 0x1AD57Cu;
    {
        const bool branch_taken_0x1ad57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD57Cu;
        // 0x1ad580: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad57c) {
            ctx->pc = 0x1AD588u;
            goto label_1ad588;
        }
    }
    ctx->pc = 0x1AD584u;
label_1ad584:
    // 0x1ad584: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1ad584u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1ad588:
    // 0x1ad588: 0x3e00008  jr          $ra
label_1ad58c:
    if (ctx->pc == 0x1AD58Cu) {
        ctx->pc = 0x1AD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD588u;
        // 0x1ad58c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD590u;
        goto label_1ad590;
    }
    ctx->pc = 0x1AD588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD588u;
        // 0x1ad58c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD590u;
label_1ad590:
    // 0x1ad590: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x1ad590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_1ad594:
    // 0x1ad594: 0xc  syscall     0
    ctx->pc = 0x1ad594u;
    ctx->pc = 0x1AD598u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad598:
    // 0x1ad598: 0x3e00008  jr          $ra
label_1ad59c:
    if (ctx->pc == 0x1AD59Cu) {
        ctx->pc = 0x1AD5A0u;
        goto label_1ad5a0;
    }
    ctx->pc = 0x1AD598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD5A0u;
label_1ad5a0:
    // 0x1ad5a0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ad5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ad5a4:
    // 0x1ad5a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ad5a8:
    // 0x1ad5a8: 0x8c456270  lw          $a1, 0x6270($v0)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25200)));
label_1ad5ac:
    // 0x1ad5ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ad5b0:
    // 0x1ad5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ad5b4:
    // 0x1ad5b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ad5b8:
    // 0x1ad5b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad5bc:
    // 0x1ad5bc: 0xc06b542  jal         func_1AD508
label_1ad5c0:
    if (ctx->pc == 0x1AD5C0u) {
        ctx->pc = 0x1AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5BCu;
        // 0x1ad5c0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD5C4u;
        goto label_1ad5c4;
    }
    ctx->pc = 0x1AD5BCu;
    SET_GPR_U32(ctx, 31, 0x1AD5C4u);
    ctx->pc = 0x1AD5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5BCu;
    // 0x1ad5c0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD508u;
    goto label_1ad508;
    ctx->pc = 0x1AD5C4u;
label_1ad5c4:
    // 0x1ad5c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad5c8:
    // 0x1ad5c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad5cc:
    // 0x1ad5cc: 0x3e00008  jr          $ra
label_1ad5d0:
    if (ctx->pc == 0x1AD5D0u) {
        ctx->pc = 0x1AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5CCu;
        // 0x1ad5d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD5D4u;
        goto label_1ad5d4;
    }
    ctx->pc = 0x1AD5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5CCu;
        // 0x1ad5d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD5D4u;
label_1ad5d4:
    // 0x1ad5d4: 0x0  nop
    ctx->pc = 0x1ad5d4u;
    // NOP
label_1ad5d8:
    // 0x1ad5d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ad5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ad5dc:
    // 0x1ad5dc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ad5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ad5e0:
    // 0x1ad5e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ad5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1ad5e4:
    // 0x1ad5e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ad5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1ad5e8:
    // 0x1ad5e8: 0x3c15001b  lui         $s5, 0x1B
    ctx->pc = 0x1ad5e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)27 << 16));
label_1ad5ec:
    // 0x1ad5ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ad5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1ad5f0:
    // 0x1ad5f0: 0x3c14001b  lui         $s4, 0x1B
    ctx->pc = 0x1ad5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)27 << 16));
label_1ad5f4:
    // 0x1ad5f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ad5f8:
    // 0x1ad5f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ad5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ad5fc:
    // 0x1ad5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ad600:
    // 0x1ad600: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ad600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ad604:
    // 0x1ad604: 0x24506278  addiu       $s0, $v0, 0x6278
    ctx->pc = 0x1ad604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25208));
label_1ad608:
    // 0x1ad608: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ad608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1ad60c:
    // 0x1ad60c: 0x8c446278  lw          $a0, 0x6278($v0)
    ctx->pc = 0x1ad60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25208)));
label_1ad610:
    // 0x1ad610: 0xc06b5b6  jal         func_1AD6D8
label_1ad614:
    if (ctx->pc == 0x1AD614u) {
        ctx->pc = 0x1AD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD610u;
        // 0x1ad614: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD618u;
        goto label_1ad618;
    }
    ctx->pc = 0x1AD610u;
    SET_GPR_U32(ctx, 31, 0x1AD618u);
    ctx->pc = 0x1AD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD610u;
    // 0x1ad614: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6D8u;
    goto label_1ad6d8;
    ctx->pc = 0x1AD618u;
label_1ad618:
    // 0x1ad618: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1ad618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ad61c:
    // 0x1ad61c: 0xc06b5b6  jal         func_1AD6D8
label_1ad620:
    if (ctx->pc == 0x1AD620u) {
        ctx->pc = 0x1AD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD61Cu;
        // 0x1ad620: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD624u;
        goto label_1ad624;
    }
    ctx->pc = 0x1AD61Cu;
    SET_GPR_U32(ctx, 31, 0x1AD624u);
    ctx->pc = 0x1AD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD61Cu;
    // 0x1ad620: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6D8u;
    goto label_1ad6d8;
    ctx->pc = 0x1AD624u;
label_1ad624:
    // 0x1ad624: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ad624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1ad628:
    // 0x1ad628: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
label_1ad62c:
    // 0x1ad62c: 0xc06b564  jal         func_1AD590
label_1ad630:
    if (ctx->pc == 0x1AD630u) {
        ctx->pc = 0x1AD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD62Cu;
        // 0x1ad630: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD634u;
        goto label_1ad634;
    }
    ctx->pc = 0x1AD62Cu;
    SET_GPR_U32(ctx, 31, 0x1AD634u);
    ctx->pc = 0x1AD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD62Cu;
    // 0x1ad630: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    goto label_1ad590;
    ctx->pc = 0x1AD634u;
label_1ad634:
    // 0x1ad634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ad634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad638:
    // 0x1ad638: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1ad63c:
    // 0x1ad63c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
label_1ad640:
    // 0x1ad640: 0xc06b564  jal         func_1AD590
label_1ad644:
    if (ctx->pc == 0x1AD644u) {
        ctx->pc = 0x1AD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD640u;
        // 0x1ad644: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD648u;
        goto label_1ad648;
    }
    ctx->pc = 0x1AD640u;
    SET_GPR_U32(ctx, 31, 0x1AD648u);
    ctx->pc = 0x1AD644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD640u;
    // 0x1ad644: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    goto label_1ad590;
    ctx->pc = 0x1AD648u;
label_1ad648:
    // 0x1ad648: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1ad648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
label_1ad64c:
    // 0x1ad64c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad650:
    // 0x1ad650: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1ad650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_1ad654:
    // 0x1ad654: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
label_1ad658:
    if (ctx->pc == 0x1AD658u) {
        ctx->pc = 0x1AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD654u;
        // 0x1ad658: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD65Cu;
        goto label_1ad65c;
    }
    ctx->pc = 0x1AD654u;
    {
        const bool branch_taken_0x1ad654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD654u;
        // 0x1ad658: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad654) {
            ctx->pc = 0x1AD6A8u;
            goto label_1ad6a8;
        }
    }
    ctx->pc = 0x1AD65Cu;
label_1ad65c:
    // 0x1ad65c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1ad65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1ad660:
    // 0x1ad660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ad664:
    if (ctx->pc == 0x1AD664u) {
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD668u;
        goto label_1ad668;
    }
    ctx->pc = 0x1AD660u;
    {
        const bool branch_taken_0x1ad660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad660) {
            ctx->pc = 0x1AD680u;
            goto label_1ad680;
        }
    }
    ctx->pc = 0x1AD668u;
label_1ad668:
    // 0x1ad668: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
label_1ad66c:
    // 0x1ad66c: 0xc06b564  jal         func_1AD590
label_1ad670:
    if (ctx->pc == 0x1AD670u) {
        ctx->pc = 0x1AD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD66Cu;
        // 0x1ad670: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD674u;
        goto label_1ad674;
    }
    ctx->pc = 0x1AD66Cu;
    SET_GPR_U32(ctx, 31, 0x1AD674u);
    ctx->pc = 0x1AD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD66Cu;
    // 0x1ad670: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    goto label_1ad590;
    ctx->pc = 0x1AD674u;
label_1ad674:
    // 0x1ad674: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ad674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad678:
    // 0x1ad678: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ad67c:
    if (ctx->pc == 0x1AD67Cu) {
        ctx->pc = 0x1AD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD678u;
        // 0x1ad67c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD680u;
        goto label_1ad680;
    }
    ctx->pc = 0x1AD678u;
    {
        const bool branch_taken_0x1ad678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD678u;
        // 0x1ad67c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad678) {
            ctx->pc = 0x1AD698u;
            goto label_1ad698;
        }
    }
    ctx->pc = 0x1AD680u;
label_1ad680:
    // 0x1ad680: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1ad684:
    // 0x1ad684: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
label_1ad688:
    // 0x1ad688: 0xc06b564  jal         func_1AD590
label_1ad68c:
    if (ctx->pc == 0x1AD68Cu) {
        ctx->pc = 0x1AD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD688u;
        // 0x1ad68c: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD690u;
        goto label_1ad690;
    }
    ctx->pc = 0x1AD688u;
    SET_GPR_U32(ctx, 31, 0x1AD690u);
    ctx->pc = 0x1AD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD688u;
    // 0x1ad68c: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    goto label_1ad590;
    ctx->pc = 0x1AD690u;
label_1ad690:
    // 0x1ad690: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad694:
    // 0x1ad694: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_1ad698:
    // 0x1ad698: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
label_1ad69c:
    if (ctx->pc == 0x1AD69Cu) {
        ctx->pc = 0x1AD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD698u;
        // 0x1ad69c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD6A0u;
        goto label_1ad6a0;
    }
    ctx->pc = 0x1AD698u;
    {
        const bool branch_taken_0x1ad698 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1AD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD698u;
        // 0x1ad69c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad698) {
            ctx->pc = 0x1AD660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad660;
        }
    }
    ctx->pc = 0x1AD6A0u;
label_1ad6a0:
    // 0x1ad6a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ad6a4:
    if (ctx->pc == 0x1AD6A4u) {
        ctx->pc = 0x1AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6A0u;
        // 0x1ad6a4: 0xaed16270  sw          $s1, 0x6270($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD6A8u;
        goto label_1ad6a8;
    }
    ctx->pc = 0x1AD6A0u;
    {
        const bool branch_taken_0x1ad6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6A0u;
        // 0x1ad6a4: 0xaed16270  sw          $s1, 0x6270($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6a0) {
            ctx->pc = 0x1AD6ACu;
            goto label_1ad6ac;
        }
    }
    ctx->pc = 0x1AD6A8u;
label_1ad6a8:
    // 0x1ad6a8: 0xaed16270  sw          $s1, 0x6270($s6)
    ctx->pc = 0x1ad6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
label_1ad6ac:
    // 0x1ad6ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ad6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ad6b0:
    // 0x1ad6b0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ad6b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ad6b4:
    // 0x1ad6b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ad6b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ad6b8:
    // 0x1ad6b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ad6b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ad6bc:
    // 0x1ad6bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ad6bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad6c0:
    // 0x1ad6c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad6c4:
    // 0x1ad6c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad6c8:
    // 0x1ad6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad6cc:
    // 0x1ad6cc: 0x3e00008  jr          $ra
label_1ad6d0:
    if (ctx->pc == 0x1AD6D0u) {
        ctx->pc = 0x1AD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6CCu;
        // 0x1ad6d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD6D4u;
        goto label_1ad6d4;
    }
    ctx->pc = 0x1AD6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6CCu;
        // 0x1ad6d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        if (jumpTarget == 0x1AD700u) goto label_1ad700;
        if (jumpTarget == 0x1AD618u) goto label_1ad618;
        if (jumpTarget == 0x1AD624u) goto label_1ad624;
        return;
        #endif
    }
    ctx->pc = 0x1AD6D4u;
label_1ad6d4:
    // 0x1ad6d4: 0x0  nop
    ctx->pc = 0x1ad6d4u;
    // NOP
label_1ad6d8:
    // 0x1ad6d8: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1ad6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1ad6dc:
    // 0x1ad6dc: 0xc  syscall     0
    ctx->pc = 0x1ad6dcu;
    ctx->pc = 0x1AD6E0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad6e0:
    // 0x1ad6e0: 0x3e00008  jr          $ra
label_1ad6e4:
    if (ctx->pc == 0x1AD6E4u) {
        ctx->pc = 0x1AD6E8u;
        goto label_1ad6e8;
    }
    ctx->pc = 0x1AD6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD6E8u;
label_1ad6e8:
    // 0x1ad6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ad6ec:
    // 0x1ad6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ad6f0:
    // 0x1ad6f0: 0xc06b530  jal         func_1AD4C0
label_1ad6f4:
    if (ctx->pc == 0x1AD6F4u) {
        ctx->pc = 0x1AD6F8u;
        goto label_1ad6f8;
    }
    ctx->pc = 0x1AD6F0u;
    SET_GPR_U32(ctx, 31, 0x1AD6F8u);
    ctx->pc = 0x1AD4C0u;
    goto label_1ad4c0;
    ctx->pc = 0x1AD6F8u;
label_1ad6f8:
    // 0x1ad6f8: 0xc06b576  jal         func_1AD5D8
label_1ad6fc:
    if (ctx->pc == 0x1AD6FCu) {
        ctx->pc = 0x1AD700u;
        goto label_1ad700;
    }
    ctx->pc = 0x1AD6F8u;
    SET_GPR_U32(ctx, 31, 0x1AD700u);
    ctx->pc = 0x1AD5D8u;
    goto label_1ad5d8;
    ctx->pc = 0x1AD700u;
label_1ad700:
    // 0x1ad700: 0xc06b6ec  jal         func_1ADBB0
label_1ad704:
    if (ctx->pc == 0x1AD704u) {
        ctx->pc = 0x1AD708u;
        goto label_1ad708;
    }
    ctx->pc = 0x1AD700u;
    SET_GPR_U32(ctx, 31, 0x1AD708u);
    ctx->pc = 0x1ADBB0u;
    { ctx->pc = 0x1adbb0; return; }
    ctx->pc = 0x1AD708u;
label_1ad708:
    // 0x1ad708: 0xc06957e  jal         func_1A55F8
label_1ad70c:
    if (ctx->pc == 0x1AD70Cu) {
        ctx->pc = 0x1AD710u;
        goto label_1ad710;
    }
    ctx->pc = 0x1AD708u;
    SET_GPR_U32(ctx, 31, 0x1AD710u);
    ctx->pc = 0x1A55F8u;
    { ctx->pc = 0x1a55f8; return; }
    ctx->pc = 0x1AD710u;
label_1ad710:
    // 0x1ad710: 0xc06b5fe  jal         func_1AD7F8
label_1ad714:
    if (ctx->pc == 0x1AD714u) {
        ctx->pc = 0x1AD718u;
        goto label_1ad718;
    }
    ctx->pc = 0x1AD710u;
    SET_GPR_U32(ctx, 31, 0x1AD718u);
    ctx->pc = 0x1AD7F8u;
    { ctx->pc = 0x1ad7f8; return; }
    ctx->pc = 0x1AD718u;
label_1ad718:
    // 0x1ad718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad71c:
    // 0x1ad71c: 0x806b348  j           func_1ACD20
label_1ad720:
    if (ctx->pc == 0x1AD720u) {
        ctx->pc = 0x1AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD71Cu;
        // 0x1ad720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD724u;
        goto label_1ad724;
    }
    ctx->pc = 0x1AD71Cu;
    ctx->pc = 0x1AD720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD71Cu;
    // 0x1ad720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD20u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1acd20; return; }
    ctx->pc = 0x1AD724u;
label_1ad724:
    // 0x1ad724: 0x0  nop
    ctx->pc = 0x1ad724u;
    // NOP
label_1ad728:
    // 0x1ad728: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1ad728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1ad72c:
    // 0x1ad72c: 0xc  syscall     0
    ctx->pc = 0x1ad72cu;
    ctx->pc = 0x1AD730u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad730:
    // 0x1ad730: 0x3e00008  jr          $ra
label_1ad734:
    if (ctx->pc == 0x1AD734u) {
        ctx->pc = 0x1AD738u;
        goto label_1ad738;
    }
    ctx->pc = 0x1AD730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD738u;
label_1ad738:
    // 0x1ad738: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1ad738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ad73c:
    // 0x1ad73c: 0xc  syscall     0
    ctx->pc = 0x1ad73cu;
    ctx->pc = 0x1AD740u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1ad740u;
    return;
}

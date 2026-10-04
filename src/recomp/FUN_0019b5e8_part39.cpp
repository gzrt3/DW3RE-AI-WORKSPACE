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


void FUN_0019b5e8_part39(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1adec8u: goto label_1adec8;
        case 0x1adeccu: goto label_1adecc;
        case 0x1aded0u: goto label_1aded0;
        case 0x1aded4u: goto label_1aded4;
        case 0x1aded8u: goto label_1aded8;
        case 0x1adedcu: goto label_1adedc;
        case 0x1adee0u: goto label_1adee0;
        case 0x1adee4u: goto label_1adee4;
        case 0x1adee8u: goto label_1adee8;
        case 0x1adeecu: goto label_1adeec;
        case 0x1adef0u: goto label_1adef0;
        case 0x1adef4u: goto label_1adef4;
        case 0x1adef8u: goto label_1adef8;
        case 0x1adefcu: goto label_1adefc;
        case 0x1adf00u: goto label_1adf00;
        case 0x1adf04u: goto label_1adf04;
        case 0x1adf08u: goto label_1adf08;
        case 0x1adf0cu: goto label_1adf0c;
        case 0x1adf10u: goto label_1adf10;
        case 0x1adf14u: goto label_1adf14;
        case 0x1adf18u: goto label_1adf18;
        case 0x1adf1cu: goto label_1adf1c;
        case 0x1adf20u: goto label_1adf20;
        case 0x1adf24u: goto label_1adf24;
        case 0x1adf28u: goto label_1adf28;
        case 0x1adf2cu: goto label_1adf2c;
        case 0x1adf30u: goto label_1adf30;
        case 0x1adf34u: goto label_1adf34;
        case 0x1adf38u: goto label_1adf38;
        case 0x1adf3cu: goto label_1adf3c;
        case 0x1adf40u: goto label_1adf40;
        case 0x1adf44u: goto label_1adf44;
        case 0x1adf48u: goto label_1adf48;
        case 0x1adf4cu: goto label_1adf4c;
        case 0x1adf50u: goto label_1adf50;
        case 0x1adf54u: goto label_1adf54;
        case 0x1adf58u: goto label_1adf58;
        case 0x1adf5cu: goto label_1adf5c;
        case 0x1adf60u: goto label_1adf60;
        case 0x1adf64u: goto label_1adf64;
        case 0x1adf68u: goto label_1adf68;
        case 0x1adf6cu: goto label_1adf6c;
        case 0x1adf70u: goto label_1adf70;
        case 0x1adf74u: goto label_1adf74;
        case 0x1adf78u: goto label_1adf78;
        case 0x1adf7cu: goto label_1adf7c;
        case 0x1adf80u: goto label_1adf80;
        case 0x1adf84u: goto label_1adf84;
        case 0x1adf88u: goto label_1adf88;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adf90u: goto label_1adf90;
        case 0x1adf94u: goto label_1adf94;
        case 0x1adf98u: goto label_1adf98;
        case 0x1adf9cu: goto label_1adf9c;
        case 0x1adfa0u: goto label_1adfa0;
        case 0x1adfa4u: goto label_1adfa4;
        case 0x1adfa8u: goto label_1adfa8;
        case 0x1adfacu: goto label_1adfac;
        case 0x1adfb0u: goto label_1adfb0;
        case 0x1adfb4u: goto label_1adfb4;
        case 0x1adfb8u: goto label_1adfb8;
        case 0x1adfbcu: goto label_1adfbc;
        case 0x1adfc0u: goto label_1adfc0;
        case 0x1adfc4u: goto label_1adfc4;
        case 0x1adfc8u: goto label_1adfc8;
        case 0x1adfccu: goto label_1adfcc;
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1adfd4u: goto label_1adfd4;
        case 0x1adfd8u: goto label_1adfd8;
        case 0x1adfdcu: goto label_1adfdc;
        case 0x1adfe0u: goto label_1adfe0;
        case 0x1adfe4u: goto label_1adfe4;
        case 0x1adfe8u: goto label_1adfe8;
        case 0x1adfecu: goto label_1adfec;
        case 0x1adff0u: goto label_1adff0;
        case 0x1adff4u: goto label_1adff4;
        case 0x1adff8u: goto label_1adff8;
        case 0x1adffcu: goto label_1adffc;
        case 0x1ae000u: goto label_1ae000;
        case 0x1ae004u: goto label_1ae004;
        case 0x1ae008u: goto label_1ae008;
        case 0x1ae00cu: goto label_1ae00c;
        case 0x1ae010u: goto label_1ae010;
        case 0x1ae014u: goto label_1ae014;
        case 0x1ae018u: goto label_1ae018;
        case 0x1ae01cu: goto label_1ae01c;
        case 0x1ae020u: goto label_1ae020;
        case 0x1ae024u: goto label_1ae024;
        case 0x1ae028u: goto label_1ae028;
        case 0x1ae02cu: goto label_1ae02c;
        case 0x1ae030u: goto label_1ae030;
        case 0x1ae034u: goto label_1ae034;
        case 0x1ae038u: goto label_1ae038;
        case 0x1ae03cu: goto label_1ae03c;
        case 0x1ae040u: goto label_1ae040;
        case 0x1ae044u: goto label_1ae044;
        case 0x1ae048u: goto label_1ae048;
        case 0x1ae04cu: goto label_1ae04c;
        case 0x1ae050u: goto label_1ae050;
        case 0x1ae054u: goto label_1ae054;
        case 0x1ae058u: goto label_1ae058;
        case 0x1ae05cu: goto label_1ae05c;
        case 0x1ae060u: goto label_1ae060;
        case 0x1ae064u: goto label_1ae064;
        case 0x1ae068u: goto label_1ae068;
        case 0x1ae06cu: goto label_1ae06c;
        case 0x1ae070u: goto label_1ae070;
        case 0x1ae074u: goto label_1ae074;
        case 0x1ae078u: goto label_1ae078;
        case 0x1ae07cu: goto label_1ae07c;
        case 0x1ae080u: goto label_1ae080;
        case 0x1ae084u: goto label_1ae084;
        case 0x1ae088u: goto label_1ae088;
        case 0x1ae08cu: goto label_1ae08c;
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae094u: goto label_1ae094;
        case 0x1ae098u: goto label_1ae098;
        case 0x1ae09cu: goto label_1ae09c;
        case 0x1ae0a0u: goto label_1ae0a0;
        case 0x1ae0a4u: goto label_1ae0a4;
        case 0x1ae0a8u: goto label_1ae0a8;
        case 0x1ae0acu: goto label_1ae0ac;
        case 0x1ae0b0u: goto label_1ae0b0;
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0b8u: goto label_1ae0b8;
        case 0x1ae0bcu: goto label_1ae0bc;
        case 0x1ae0c0u: goto label_1ae0c0;
        case 0x1ae0c4u: goto label_1ae0c4;
        case 0x1ae0c8u: goto label_1ae0c8;
        case 0x1ae0ccu: goto label_1ae0cc;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0d4u: goto label_1ae0d4;
        case 0x1ae0d8u: goto label_1ae0d8;
        case 0x1ae0dcu: goto label_1ae0dc;
        case 0x1ae0e0u: goto label_1ae0e0;
        case 0x1ae0e4u: goto label_1ae0e4;
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae0ecu: goto label_1ae0ec;
        case 0x1ae0f0u: goto label_1ae0f0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae0f8u: goto label_1ae0f8;
        case 0x1ae0fcu: goto label_1ae0fc;
        case 0x1ae100u: goto label_1ae100;
        case 0x1ae104u: goto label_1ae104;
        case 0x1ae108u: goto label_1ae108;
        case 0x1ae10cu: goto label_1ae10c;
        case 0x1ae110u: goto label_1ae110;
        case 0x1ae114u: goto label_1ae114;
        case 0x1ae118u: goto label_1ae118;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae120u: goto label_1ae120;
        case 0x1ae124u: goto label_1ae124;
        case 0x1ae128u: goto label_1ae128;
        case 0x1ae12cu: goto label_1ae12c;
        case 0x1ae130u: goto label_1ae130;
        case 0x1ae134u: goto label_1ae134;
        case 0x1ae138u: goto label_1ae138;
        case 0x1ae13cu: goto label_1ae13c;
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae1f4u: goto label_1ae1f4;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae1fcu: goto label_1ae1fc;
        case 0x1ae200u: goto label_1ae200;
        case 0x1ae204u: goto label_1ae204;
        case 0x1ae208u: goto label_1ae208;
        case 0x1ae20cu: goto label_1ae20c;
        case 0x1ae210u: goto label_1ae210;
        case 0x1ae214u: goto label_1ae214;
        case 0x1ae218u: goto label_1ae218;
        case 0x1ae21cu: goto label_1ae21c;
        case 0x1ae220u: goto label_1ae220;
        case 0x1ae224u: goto label_1ae224;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae238u: goto label_1ae238;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae244u: goto label_1ae244;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae24cu: goto label_1ae24c;
        case 0x1ae250u: goto label_1ae250;
        case 0x1ae254u: goto label_1ae254;
        case 0x1ae258u: goto label_1ae258;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae260u: goto label_1ae260;
        case 0x1ae264u: goto label_1ae264;
        case 0x1ae268u: goto label_1ae268;
        case 0x1ae26cu: goto label_1ae26c;
        case 0x1ae270u: goto label_1ae270;
        case 0x1ae274u: goto label_1ae274;
        case 0x1ae278u: goto label_1ae278;
        case 0x1ae27cu: goto label_1ae27c;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae288u: goto label_1ae288;
        case 0x1ae28cu: goto label_1ae28c;
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae294u: goto label_1ae294;
        case 0x1ae298u: goto label_1ae298;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2a0u: goto label_1ae2a0;
        case 0x1ae2a4u: goto label_1ae2a4;
        case 0x1ae2a8u: goto label_1ae2a8;
        case 0x1ae2acu: goto label_1ae2ac;
        case 0x1ae2b0u: goto label_1ae2b0;
        case 0x1ae2b4u: goto label_1ae2b4;
        case 0x1ae2b8u: goto label_1ae2b8;
        case 0x1ae2bcu: goto label_1ae2bc;
        case 0x1ae2c0u: goto label_1ae2c0;
        case 0x1ae2c4u: goto label_1ae2c4;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2ccu: goto label_1ae2cc;
        case 0x1ae2d0u: goto label_1ae2d0;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2d8u: goto label_1ae2d8;
        case 0x1ae2dcu: goto label_1ae2dc;
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae380u: goto label_1ae380;
        case 0x1ae384u: goto label_1ae384;
        case 0x1ae388u: goto label_1ae388;
        case 0x1ae38cu: goto label_1ae38c;
        case 0x1ae390u: goto label_1ae390;
        case 0x1ae394u: goto label_1ae394;
        case 0x1ae398u: goto label_1ae398;
        case 0x1ae39cu: goto label_1ae39c;
        case 0x1ae3a0u: goto label_1ae3a0;
        case 0x1ae3a4u: goto label_1ae3a4;
        case 0x1ae3a8u: goto label_1ae3a8;
        case 0x1ae3acu: goto label_1ae3ac;
        case 0x1ae3b0u: goto label_1ae3b0;
        case 0x1ae3b4u: goto label_1ae3b4;
        case 0x1ae3b8u: goto label_1ae3b8;
        case 0x1ae3bcu: goto label_1ae3bc;
        case 0x1ae3c0u: goto label_1ae3c0;
        case 0x1ae3c4u: goto label_1ae3c4;
        case 0x1ae3c8u: goto label_1ae3c8;
        case 0x1ae3ccu: goto label_1ae3cc;
        case 0x1ae3d0u: goto label_1ae3d0;
        case 0x1ae3d4u: goto label_1ae3d4;
        case 0x1ae3d8u: goto label_1ae3d8;
        case 0x1ae3dcu: goto label_1ae3dc;
        case 0x1ae3e0u: goto label_1ae3e0;
        case 0x1ae3e4u: goto label_1ae3e4;
        case 0x1ae3e8u: goto label_1ae3e8;
        case 0x1ae3ecu: goto label_1ae3ec;
        case 0x1ae3f0u: goto label_1ae3f0;
        case 0x1ae3f4u: goto label_1ae3f4;
        case 0x1ae3f8u: goto label_1ae3f8;
        case 0x1ae3fcu: goto label_1ae3fc;
        case 0x1ae400u: goto label_1ae400;
        case 0x1ae404u: goto label_1ae404;
        case 0x1ae408u: goto label_1ae408;
        case 0x1ae40cu: goto label_1ae40c;
        case 0x1ae410u: goto label_1ae410;
        case 0x1ae414u: goto label_1ae414;
        case 0x1ae418u: goto label_1ae418;
        case 0x1ae41cu: goto label_1ae41c;
        case 0x1ae420u: goto label_1ae420;
        case 0x1ae424u: goto label_1ae424;
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae42cu: goto label_1ae42c;
        case 0x1ae430u: goto label_1ae430;
        case 0x1ae434u: goto label_1ae434;
        case 0x1ae438u: goto label_1ae438;
        case 0x1ae43cu: goto label_1ae43c;
        case 0x1ae440u: goto label_1ae440;
        case 0x1ae444u: goto label_1ae444;
        case 0x1ae448u: goto label_1ae448;
        case 0x1ae44cu: goto label_1ae44c;
        case 0x1ae450u: goto label_1ae450;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae458u: goto label_1ae458;
        case 0x1ae45cu: goto label_1ae45c;
        case 0x1ae460u: goto label_1ae460;
        case 0x1ae464u: goto label_1ae464;
        case 0x1ae468u: goto label_1ae468;
        case 0x1ae46cu: goto label_1ae46c;
        case 0x1ae470u: goto label_1ae470;
        case 0x1ae474u: goto label_1ae474;
        case 0x1ae478u: goto label_1ae478;
        case 0x1ae47cu: goto label_1ae47c;
        case 0x1ae480u: goto label_1ae480;
        case 0x1ae484u: goto label_1ae484;
        case 0x1ae488u: goto label_1ae488;
        case 0x1ae48cu: goto label_1ae48c;
        case 0x1ae490u: goto label_1ae490;
        case 0x1ae494u: goto label_1ae494;
        case 0x1ae498u: goto label_1ae498;
        case 0x1ae49cu: goto label_1ae49c;
        case 0x1ae4a0u: goto label_1ae4a0;
        case 0x1ae4a4u: goto label_1ae4a4;
        case 0x1ae4a8u: goto label_1ae4a8;
        case 0x1ae4acu: goto label_1ae4ac;
        case 0x1ae4b0u: goto label_1ae4b0;
        case 0x1ae4b4u: goto label_1ae4b4;
        case 0x1ae4b8u: goto label_1ae4b8;
        case 0x1ae4bcu: goto label_1ae4bc;
        case 0x1ae4c0u: goto label_1ae4c0;
        case 0x1ae4c4u: goto label_1ae4c4;
        case 0x1ae4c8u: goto label_1ae4c8;
        case 0x1ae4ccu: goto label_1ae4cc;
        case 0x1ae4d0u: goto label_1ae4d0;
        case 0x1ae4d4u: goto label_1ae4d4;
        case 0x1ae4d8u: goto label_1ae4d8;
        case 0x1ae4dcu: goto label_1ae4dc;
        case 0x1ae4e0u: goto label_1ae4e0;
        case 0x1ae4e4u: goto label_1ae4e4;
        case 0x1ae4e8u: goto label_1ae4e8;
        case 0x1ae4ecu: goto label_1ae4ec;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae4f4u: goto label_1ae4f4;
        case 0x1ae4f8u: goto label_1ae4f8;
        case 0x1ae4fcu: goto label_1ae4fc;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae504u: goto label_1ae504;
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae50cu: goto label_1ae50c;
        case 0x1ae510u: goto label_1ae510;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae518u: goto label_1ae518;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae520u: goto label_1ae520;
        case 0x1ae524u: goto label_1ae524;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae52cu: goto label_1ae52c;
        case 0x1ae530u: goto label_1ae530;
        case 0x1ae534u: goto label_1ae534;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae53cu: goto label_1ae53c;
        case 0x1ae540u: goto label_1ae540;
        case 0x1ae544u: goto label_1ae544;
        case 0x1ae548u: goto label_1ae548;
        case 0x1ae54cu: goto label_1ae54c;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae554u: goto label_1ae554;
        case 0x1ae558u: goto label_1ae558;
        case 0x1ae55cu: goto label_1ae55c;
        case 0x1ae560u: goto label_1ae560;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae568u: goto label_1ae568;
        case 0x1ae56cu: goto label_1ae56c;
        case 0x1ae570u: goto label_1ae570;
        case 0x1ae574u: goto label_1ae574;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae57cu: goto label_1ae57c;
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae584u: goto label_1ae584;
        case 0x1ae588u: goto label_1ae588;
        case 0x1ae58cu: goto label_1ae58c;
        case 0x1ae590u: goto label_1ae590;
        case 0x1ae594u: goto label_1ae594;
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae59cu: goto label_1ae59c;
        case 0x1ae5a0u: goto label_1ae5a0;
        case 0x1ae5a4u: goto label_1ae5a4;
        case 0x1ae5a8u: goto label_1ae5a8;
        case 0x1ae5acu: goto label_1ae5ac;
        case 0x1ae5b0u: goto label_1ae5b0;
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae5b8u: goto label_1ae5b8;
        case 0x1ae5bcu: goto label_1ae5bc;
        case 0x1ae5c0u: goto label_1ae5c0;
        case 0x1ae5c4u: goto label_1ae5c4;
        case 0x1ae5c8u: goto label_1ae5c8;
        case 0x1ae5ccu: goto label_1ae5cc;
        case 0x1ae5d0u: goto label_1ae5d0;
        case 0x1ae5d4u: goto label_1ae5d4;
        case 0x1ae5d8u: goto label_1ae5d8;
        case 0x1ae5dcu: goto label_1ae5dc;
        case 0x1ae5e0u: goto label_1ae5e0;
        case 0x1ae5e4u: goto label_1ae5e4;
        case 0x1ae5e8u: goto label_1ae5e8;
        case 0x1ae5ecu: goto label_1ae5ec;
        case 0x1ae5f0u: goto label_1ae5f0;
        case 0x1ae5f4u: goto label_1ae5f4;
        case 0x1ae5f8u: goto label_1ae5f8;
        case 0x1ae5fcu: goto label_1ae5fc;
        case 0x1ae600u: goto label_1ae600;
        case 0x1ae604u: goto label_1ae604;
        case 0x1ae608u: goto label_1ae608;
        case 0x1ae60cu: goto label_1ae60c;
        case 0x1ae610u: goto label_1ae610;
        case 0x1ae614u: goto label_1ae614;
        case 0x1ae618u: goto label_1ae618;
        case 0x1ae61cu: goto label_1ae61c;
        case 0x1ae620u: goto label_1ae620;
        case 0x1ae624u: goto label_1ae624;
        case 0x1ae628u: goto label_1ae628;
        case 0x1ae62cu: goto label_1ae62c;
        case 0x1ae630u: goto label_1ae630;
        case 0x1ae634u: goto label_1ae634;
        case 0x1ae638u: goto label_1ae638;
        case 0x1ae63cu: goto label_1ae63c;
        case 0x1ae640u: goto label_1ae640;
        case 0x1ae644u: goto label_1ae644;
        case 0x1ae648u: goto label_1ae648;
        case 0x1ae64cu: goto label_1ae64c;
        case 0x1ae650u: goto label_1ae650;
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae658u: goto label_1ae658;
        case 0x1ae65cu: goto label_1ae65c;
        case 0x1ae660u: goto label_1ae660;
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae668u: goto label_1ae668;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae670u: goto label_1ae670;
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae678u: goto label_1ae678;
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae680u: goto label_1ae680;
        case 0x1ae684u: goto label_1ae684;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae690u: goto label_1ae690;
        case 0x1ae694u: goto label_1ae694;
        default: return;
    }

label_1adec8:
    // 0x1adec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1adecc:
    // 0x1adecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aded0:
    // 0x1aded0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aded4:
    // 0x1aded4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aded8:
    // 0x1aded8: 0x3e00008  jr          $ra
label_1adedc:
    if (ctx->pc == 0x1ADEDCu) {
        ctx->pc = 0x1ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADED8u;
        // 0x1adedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADEE0u;
        goto label_1adee0;
    }
    ctx->pc = 0x1ADED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADED8u;
        // 0x1adedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADEE0u;
label_1adee0:
    // 0x1adee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1adee4:
    // 0x1adee4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1adee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1adee8:
    // 0x1adee8: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1adee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1adeec:
    // 0x1adeec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1adef0:
    // 0x1adef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1adef4:
    // 0x1adef4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1adef8:
    // 0x1adef8: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x1adef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_1adefc:
    // 0x1adefc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1adefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1adf00:
    // 0x1adf00: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x1adf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
label_1adf04:
    // 0x1adf04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1adf08:
    // 0x1adf08: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x1adf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
label_1adf0c:
    // 0x1adf0c: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x1adf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
label_1adf10:
    // 0x1adf10: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1adf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_1adf14:
    // 0x1adf14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1adf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1adf18:
    // 0x1adf18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1adf18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1adf1c:
    // 0x1adf1c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
label_1adf20:
    if (ctx->pc == 0x1ADF20u) {
        ctx->pc = 0x1ADF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF1Cu;
        // 0x1adf20: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF24u;
        goto label_1adf24;
    }
    ctx->pc = 0x1ADF1Cu;
    {
        const bool branch_taken_0x1adf1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF1Cu;
        // 0x1adf20: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf1c) {
            ctx->pc = 0x1ADF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adf00;
        }
    }
    ctx->pc = 0x1ADF24u;
label_1adf24:
    // 0x1adf24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1adf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1adf28:
    // 0x1adf28: 0x24905ec0  addiu       $s0, $a0, 0x5EC0
    ctx->pc = 0x1adf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
label_1adf2c:
    // 0x1adf2c: 0xac825ec0  sw          $v0, 0x5EC0($a0)
    ctx->pc = 0x1adf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24256), GPR_U32(ctx, 2));
label_1adf30:
    // 0x1adf30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf34:
    // 0x1adf34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1adf38:
    // 0x1adf38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1adf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1adf3c:
    // 0x1adf3c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1adf40:
    // 0x1adf40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adf44:
    // 0x1adf44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf48:
    // 0x1adf48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf4c:
    // 0x1adf4c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adf50:
    // 0x1adf50: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1adf50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf54:
    // 0x1adf54: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adf58:
    // 0x1adf58: 0xc069e2a  jal         func_1A78A8
label_1adf5c:
    if (ctx->pc == 0x1ADF5Cu) {
        ctx->pc = 0x1ADF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF58u;
        // 0x1adf5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF60u;
        goto label_1adf60;
    }
    ctx->pc = 0x1ADF58u;
    SET_GPR_U32(ctx, 31, 0x1ADF60u);
    ctx->pc = 0x1ADF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF58u;
    // 0x1adf5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ADF60u;
label_1adf60:
    // 0x1adf60: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_1adf64:
    if (ctx->pc == 0x1ADF64u) {
        ctx->pc = 0x1ADF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF60u;
        // 0x1adf64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF68u;
        goto label_1adf68;
    }
    ctx->pc = 0x1ADF60u;
    {
        const bool branch_taken_0x1adf60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adf60) {
            ctx->pc = 0x1ADF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF60u;
            // 0x1adf64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF6Cu;
            goto label_1adf6c;
        }
    }
    ctx->pc = 0x1ADF68u;
label_1adf68:
    // 0x1adf68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1adf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf6c:
    // 0x1adf6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1adf70:
    // 0x1adf70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adf74:
    // 0x1adf74: 0x3e00008  jr          $ra
label_1adf78:
    if (ctx->pc == 0x1ADF78u) {
        ctx->pc = 0x1ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF74u;
        // 0x1adf78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF7Cu;
        goto label_1adf7c;
    }
    ctx->pc = 0x1ADF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF74u;
        // 0x1adf78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF7Cu;
label_1adf7c:
    // 0x1adf7c: 0x0  nop
    ctx->pc = 0x1adf7cu;
    // NOP
label_1adf80:
    // 0x1adf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1adf84:
    // 0x1adf84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1adf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1adf88:
    // 0x1adf88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1adf8c:
    // 0x1adf8c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1adf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1adf90:
    // 0x1adf90: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1adf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1adf94:
    // 0x1adf94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1adf98:
    // 0x1adf98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1adf9c:
    // 0x1adf9c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1adf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1adfa0:
    // 0x1adfa0: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1adfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1adfa4:
    // 0x1adfa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1adfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adfa8:
    // 0x1adfa8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adfac:
    // 0x1adfac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adfb0:
    // 0x1adfb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adfb4:
    // 0x1adfb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adfb8:
    // 0x1adfb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1adfb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adfbc:
    // 0x1adfbc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1adfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adfc0:
    // 0x1adfc0: 0xc069e2a  jal         func_1A78A8
label_1adfc4:
    if (ctx->pc == 0x1ADFC4u) {
        ctx->pc = 0x1ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC0u;
        // 0x1adfc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFC8u;
        goto label_1adfc8;
    }
    ctx->pc = 0x1ADFC0u;
    SET_GPR_U32(ctx, 31, 0x1ADFC8u);
    ctx->pc = 0x1ADFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFC0u;
    // 0x1adfc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ADFC8u;
label_1adfc8:
    // 0x1adfc8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1adfcc:
    if (ctx->pc == 0x1ADFCCu) {
        ctx->pc = 0x1ADFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC8u;
        // 0x1adfcc: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFD0u;
        goto label_1adfd0;
    }
    ctx->pc = 0x1ADFC8u;
    {
        const bool branch_taken_0x1adfc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adfc8) {
            ctx->pc = 0x1ADFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADFC8u;
            // 0x1adfcc: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADFD8u;
            goto label_1adfd8;
        }
    }
    ctx->pc = 0x1ADFD0u;
label_1adfd0:
    // 0x1adfd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1adfd4:
    if (ctx->pc == 0x1ADFD4u) {
        ctx->pc = 0x1ADFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFD0u;
        // 0x1adfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFD8u;
        goto label_1adfd8;
    }
    ctx->pc = 0x1ADFD0u;
    {
        const bool branch_taken_0x1adfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFD0u;
        // 0x1adfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfd0) {
            ctx->pc = 0x1ADFF0u;
            goto label_1adff0;
        }
    }
    ctx->pc = 0x1ADFD8u;
label_1adfd8:
    // 0x1adfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adfdc:
    // 0x1adfdc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1adfe0:
    if (ctx->pc == 0x1ADFE0u) {
        ctx->pc = 0x1ADFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFDCu;
        // 0x1adfe0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFE4u;
        goto label_1adfe4;
    }
    ctx->pc = 0x1ADFDCu;
    {
        const bool branch_taken_0x1adfdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFDCu;
        // 0x1adfe0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfdc) {
            ctx->pc = 0x1ADFF0u;
            goto label_1adff0;
        }
    }
    ctx->pc = 0x1ADFE4u;
label_1adfe4:
    // 0x1adfe4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1adfe8:
    // 0x1adfe8: 0xac407210  sw          $zero, 0x7210($v0)
    ctx->pc = 0x1adfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29200), GPR_U32(ctx, 0));
label_1adfec:
    // 0x1adfec: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1adfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1adff0:
    // 0x1adff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1adff4:
    // 0x1adff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adff8:
    // 0x1adff8: 0x3e00008  jr          $ra
label_1adffc:
    if (ctx->pc == 0x1ADFFCu) {
        ctx->pc = 0x1ADFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF8u;
        // 0x1adffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE000u;
        goto label_1ae000;
    }
    ctx->pc = 0x1ADFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF8u;
        // 0x1adffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE000u;
label_1ae000:
    // 0x1ae000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ae004:
    // 0x1ae004: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ae004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ae008:
    // 0x1ae008: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ae008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ae00c:
    // 0x1ae00c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ae010:
    // 0x1ae010: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ae014:
    // 0x1ae014: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ae014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae018:
    // 0x1ae018: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ae018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1ae01c:
    // 0x1ae01c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae020:
    // 0x1ae020: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1ae020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1ae024:
    // 0x1ae024: 0x3282003f  andi        $v0, $s4, 0x3F
    ctx->pc = 0x1ae024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
label_1ae028:
    // 0x1ae028: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1ae028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1ae02c:
    // 0x1ae02c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ae02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1ae030:
    // 0x1ae030: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1ae030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1ae034:
    // 0x1ae034: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ae038:
    // 0x1ae038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ae03c:
    if (ctx->pc == 0x1AE03Cu) {
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE038u;
        // 0x1ae03c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE040u;
        goto label_1ae040;
    }
    ctx->pc = 0x1AE038u;
    {
        const bool branch_taken_0x1ae038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE038u;
        // 0x1ae03c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae038) {
            ctx->pc = 0x1AE064u;
            goto label_1ae064;
        }
    }
    ctx->pc = 0x1AE040u;
label_1ae040:
    // 0x1ae040: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae044:
    // 0x1ae044: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
label_1ae048:
    // 0x1ae048: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_1ae04c:
    if (ctx->pc == 0x1AE04Cu) {
        ctx->pc = 0x1AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE048u;
        // 0x1ae04c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE050u;
        goto label_1ae050;
    }
    ctx->pc = 0x1AE048u;
    {
        const bool branch_taken_0x1ae048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE048u;
        // 0x1ae04c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae048) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE050u;
label_1ae050:
    // 0x1ae050: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ae050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ae054:
    // 0x1ae054: 0xc08ee2e  jal         func_23B8B8
label_1ae058:
    if (ctx->pc == 0x1AE058u) {
        ctx->pc = 0x1AE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE054u;
        // 0x1ae058: 0x2484a890  addiu       $a0, $a0, -0x5770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE05Cu;
        goto label_1ae05c;
    }
    ctx->pc = 0x1AE054u;
    SET_GPR_U32(ctx, 31, 0x1AE05Cu);
    ctx->pc = 0x1AE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE054u;
    // 0x1ae058: 0x2484a890  addiu       $a0, $a0, -0x5770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1AE05Cu;
label_1ae05c:
    // 0x1ae05c: 0x10000055  b           . + 4 + (0x55 << 2)
label_1ae060:
    if (ctx->pc == 0x1AE060u) {
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE05Cu;
        // 0x1ae060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE064u;
        goto label_1ae064;
    }
    ctx->pc = 0x1AE05Cu;
    {
        const bool branch_taken_0x1ae05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE05Cu;
        // 0x1ae060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae05c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE064u;
label_1ae064:
    // 0x1ae064: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae068:
    // 0x1ae068: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae06c:
    // 0x1ae06c: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1ae06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae070:
    // 0x1ae070: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1ae070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae074:
    // 0x1ae074: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1ae074u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1ae078:
    // 0x1ae078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae07c:
    // 0x1ae07c: 0x27c25cd0  addiu       $v0, $fp, 0x5CD0
    ctx->pc = 0x1ae07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
label_1ae080:
    // 0x1ae080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae084:
    // 0x1ae084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae088:
    // 0x1ae088: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae08c:
    // 0x1ae08c: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
label_1ae090:
    if (ctx->pc == 0x1AE090u) {
        ctx->pc = 0x1AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE08Cu;
        // 0x1ae090: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE094u;
        goto label_1ae094;
    }
    ctx->pc = 0x1AE08Cu;
    {
        const bool branch_taken_0x1ae08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE08Cu;
        // 0x1ae090: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae08c) {
            ctx->pc = 0x1AE0BCu;
            goto label_1ae0bc;
        }
    }
    ctx->pc = 0x1AE094u;
label_1ae094:
    // 0x1ae094: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae098:
    // 0x1ae098: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
label_1ae09c:
    // 0x1ae09c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_1ae0a0:
    if (ctx->pc == 0x1AE0A0u) {
        ctx->pc = 0x1AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE09Cu;
        // 0x1ae0a0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0A4u;
        goto label_1ae0a4;
    }
    ctx->pc = 0x1AE09Cu;
    {
        const bool branch_taken_0x1ae09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE09Cu;
        // 0x1ae0a0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae09c) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE0A4u;
label_1ae0a4:
    // 0x1ae0a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae0a8:
    // 0x1ae0a8: 0x2484a8c0  addiu       $a0, $a0, -0x5740
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944960));
label_1ae0ac:
    // 0x1ae0ac: 0xc08ee2e  jal         func_23B8B8
label_1ae0b0:
    if (ctx->pc == 0x1AE0B0u) {
        ctx->pc = 0x1AE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ACu;
        // 0x1ae0b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0B4u;
        goto label_1ae0b4;
    }
    ctx->pc = 0x1AE0ACu;
    SET_GPR_U32(ctx, 31, 0x1AE0B4u);
    ctx->pc = 0x1AE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ACu;
    // 0x1ae0b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1AE0B4u;
label_1ae0b4:
    // 0x1ae0b4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1ae0b8:
    if (ctx->pc == 0x1AE0B8u) {
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B4u;
        // 0x1ae0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0BCu;
        goto label_1ae0bc;
    }
    ctx->pc = 0x1AE0B4u;
    {
        const bool branch_taken_0x1ae0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B4u;
        // 0x1ae0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b4) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE0BCu;
label_1ae0bc:
    // 0x1ae0bc: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1ae0bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1ae0c0:
    // 0x1ae0c0: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1ae0c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ae0c4:
    // 0x1ae0c4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1ae0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae0c8:
    // 0x1ae0c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae0cc:
    // 0x1ae0cc: 0x0  nop
    ctx->pc = 0x1ae0ccu;
    // NOP
label_1ae0d0:
    // 0x1ae0d0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1ae0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_1ae0d4:
    // 0x1ae0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae0d8:
    // 0x1ae0d8: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x1ae0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
label_1ae0dc:
    // 0x1ae0dc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ae0e0:
    // 0x1ae0e0: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x1ae0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
label_1ae0e4:
    // 0x1ae0e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ae0e8:
    // 0x1ae0e8: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x1ae0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_1ae0ec:
    // 0x1ae0ec: 0xc08e9ac  jal         func_23A6B0
label_1ae0f0:
    if (ctx->pc == 0x1AE0F0u) {
        ctx->pc = 0x1AE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ECu;
        // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0F4u;
        goto label_1ae0f4;
    }
    ctx->pc = 0x1AE0ECu;
    SET_GPR_U32(ctx, 31, 0x1AE0F4u);
    ctx->pc = 0x1AE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ECu;
    // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1AE0F4u;
label_1ae0f4:
    // 0x1ae0f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1ae0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1ae0f8:
    // 0x1ae0f8: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
label_1ae0fc:
    if (ctx->pc == 0x1AE0FCu) {
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE100u;
        goto label_1ae100;
    }
    ctx->pc = 0x1AE0F8u;
    {
        const bool branch_taken_0x1ae0f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0f8) {
            ctx->pc = 0x1AE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE100u;
label_1ae100:
    // 0x1ae100: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae104:
    // 0x1ae104: 0x26f05ec0  addiu       $s0, $s7, 0x5EC0
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24256));
label_1ae108:
    // 0x1ae108: 0xaef15ec0  sw          $s1, 0x5EC0($s7)
    ctx->pc = 0x1ae108u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24256), GPR_U32(ctx, 17));
label_1ae10c:
    // 0x1ae10c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ae110:
    // 0x1ae110: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1ae110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1ae114:
    // 0x1ae114: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1ae118:
    // 0x1ae118: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1ae118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1ae11c:
    // 0x1ae11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae120:
    // 0x1ae120: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1ae120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_1ae124:
    // 0x1ae124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae128:
    // 0x1ae128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae12c:
    // 0x1ae12c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae130:
    // 0x1ae130: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae134:
    // 0x1ae134: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae138:
    // 0x1ae138: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae13c:
    // 0x1ae13c: 0xc069e2a  jal         func_1A78A8
label_1ae140:
    if (ctx->pc == 0x1AE140u) {
        ctx->pc = 0x1AE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE13Cu;
        // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE144u;
        goto label_1ae144;
    }
    ctx->pc = 0x1AE13Cu;
    SET_GPR_U32(ctx, 31, 0x1AE144u);
    ctx->pc = 0x1AE140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE13Cu;
    // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AE144u;
label_1ae144:
    // 0x1ae144: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ae148:
    if (ctx->pc == 0x1AE148u) {
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE14Cu;
        goto label_1ae14c;
    }
    ctx->pc = 0x1AE144u;
    {
        const bool branch_taken_0x1ae144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae144) {
            ctx->pc = 0x1AE154u;
            goto label_1ae154;
        }
    }
    ctx->pc = 0x1AE14Cu;
label_1ae14c:
    // 0x1ae14c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ae150:
    if (ctx->pc == 0x1AE150u) {
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE154u;
        goto label_1ae154;
    }
    ctx->pc = 0x1AE14Cu;
    {
        const bool branch_taken_0x1ae14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae14c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE154u;
label_1ae154:
    // 0x1ae154: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae158:
    // 0x1ae158: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1ae158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1ae15c:
    // 0x1ae15c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae160:
    // 0x1ae160: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae164:
    // 0x1ae164: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1ae168:
    // 0x1ae168: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
label_1ae16c:
    // 0x1ae16c: 0x27c45cd0  addiu       $a0, $fp, 0x5CD0
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
label_1ae170:
    // 0x1ae170: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ae174:
    // 0x1ae174: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_1ae178:
    // 0x1ae178: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1ae17c:
    // 0x1ae17c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1ae180:
    // 0x1ae180: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae184:
    // 0x1ae184: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ae188:
    // 0x1ae188: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_1ae18c:
    // 0x1ae18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae190:
    // 0x1ae190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae194:
    // 0x1ae194: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ae194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1ae198:
    // 0x1ae198: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae19c:
    // 0x1ae19c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ae19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1ae1a0:
    // 0x1ae1a0: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1ae1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
label_1ae1a4:
    // 0x1ae1a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1a8:
    // 0x1ae1a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1ae1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_1ae1ac:
    // 0x1ae1ac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1ae1b0:
    // 0x1ae1b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae1b4:
    // 0x1ae1b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ae1b8:
    // 0x1ae1b8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ae1bc:
    // 0x1ae1bc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ae1c0:
    // 0x1ae1c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ae1c4:
    // 0x1ae1c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae1c8:
    // 0x1ae1c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ae1cc:
    // 0x1ae1cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae1d0:
    // 0x1ae1d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae1d4:
    // 0x1ae1d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae1d8:
    // 0x1ae1d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae1dc:
    // 0x1ae1dc: 0x3e00008  jr          $ra
label_1ae1e0:
    if (ctx->pc == 0x1AE1E0u) {
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1E4u;
        goto label_1ae1e4;
    }
    ctx->pc = 0x1AE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE1E4u;
label_1ae1e4:
    // 0x1ae1e4: 0x0  nop
    ctx->pc = 0x1ae1e4u;
    // NOP
label_1ae1e8:
    // 0x1ae1e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1ec:
    // 0x1ae1ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae1f0:
    // 0x1ae1f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae1f4:
    // 0x1ae1f4: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae1f8:
    // 0x1ae1f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae1fc:
    // 0x1ae1fc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae200:
    // 0x1ae200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ae204:
    // 0x1ae204: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae208:
    // 0x1ae208: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ae20c:
    // 0x1ae20c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ae210:
    // 0x1ae210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ae214:
    // 0x1ae214: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae218:
    // 0x1ae218: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ae21c:
    // 0x1ae21c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x1ae21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ae220:
    // 0x1ae220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ae220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ae224:
    // 0x1ae224: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1ae228:
    if (ctx->pc == 0x1AE228u) {
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE22Cu;
        goto label_1ae22c;
    }
    ctx->pc = 0x1AE224u;
    {
        const bool branch_taken_0x1ae224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae224) {
            ctx->pc = 0x1AE28Cu;
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE22Cu;
label_1ae22c:
    // 0x1ae22c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae230:
    // 0x1ae230: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ae230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ae234:
    // 0x1ae234: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1ae234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1ae238:
    // 0x1ae238: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1ae238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1ae23c:
    // 0x1ae23c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae240:
    // 0x1ae240: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ae240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_1ae244:
    // 0x1ae244: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1ae244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_1ae248:
    // 0x1ae248: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ae24c:
    // 0x1ae24c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x1ae24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_1ae250:
    // 0x1ae250: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1ae254:
    // 0x1ae254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae258:
    // 0x1ae258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae25c:
    // 0x1ae25c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae260:
    // 0x1ae260: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae264:
    // 0x1ae264: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae268:
    // 0x1ae268: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae26c:
    // 0x1ae26c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae270:
    // 0x1ae270: 0xc069e2a  jal         func_1A78A8
label_1ae274:
    if (ctx->pc == 0x1AE274u) {
        ctx->pc = 0x1AE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE270u;
        // 0x1ae274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE278u;
        goto label_1ae278;
    }
    ctx->pc = 0x1AE270u;
    SET_GPR_U32(ctx, 31, 0x1AE278u);
    ctx->pc = 0x1AE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE270u;
    // 0x1ae274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AE278u;
label_1ae278:
    // 0x1ae278: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ae27c:
    if (ctx->pc == 0x1AE27Cu) {
        ctx->pc = 0x1AE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE278u;
        // 0x1ae27c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE280u;
        goto label_1ae280;
    }
    ctx->pc = 0x1AE278u;
    {
        const bool branch_taken_0x1ae278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ae278) {
            ctx->pc = 0x1AE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE278u;
            // 0x1ae27c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE288u;
            goto label_1ae288;
        }
    }
    ctx->pc = 0x1AE280u;
label_1ae280:
    // 0x1ae280: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae284:
    if (ctx->pc == 0x1AE284u) {
        ctx->pc = 0x1AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE280u;
        // 0x1ae284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE288u;
        goto label_1ae288;
    }
    ctx->pc = 0x1AE280u;
    {
        const bool branch_taken_0x1ae280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE280u;
        // 0x1ae284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae280) {
            ctx->pc = 0x1AE28Cu;
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE288u;
label_1ae288:
    // 0x1ae288: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae28c:
    // 0x1ae28c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae290:
    // 0x1ae290: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae294:
    // 0x1ae294: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae298:
    // 0x1ae298: 0x3e00008  jr          $ra
label_1ae29c:
    if (ctx->pc == 0x1AE29Cu) {
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE298u;
        // 0x1ae29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2A0u;
        goto label_1ae2a0;
    }
    ctx->pc = 0x1AE298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE298u;
        // 0x1ae29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE2A0u;
label_1ae2a0:
    // 0x1ae2a0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae2a4:
    // 0x1ae2a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae2a8:
    // 0x1ae2a8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1ae2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1ae2ac:
    // 0x1ae2ac: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x1ae2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae2b0:
    // 0x1ae2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ae2b4:
    // 0x1ae2b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae2b8:
    // 0x1ae2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae2bc:
    // 0x1ae2bc: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae2c0:
    // 0x1ae2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae2c4:
    // 0x1ae2c4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ae2c8:
    // 0x1ae2c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ae2cc:
    // 0x1ae2cc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1ae2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ae2d0:
    // 0x1ae2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2d4:
    // 0x1ae2d4: 0xc069446  jal         func_1A5118
label_1ae2d8:
    if (ctx->pc == 0x1AE2D8u) {
        ctx->pc = 0x1AE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2D4u;
        // 0x1ae2d8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2DCu;
        goto label_1ae2dc;
    }
    ctx->pc = 0x1AE2D4u;
    SET_GPR_U32(ctx, 31, 0x1AE2DCu);
    ctx->pc = 0x1AE2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2D4u;
    // 0x1ae2d8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5118u;
    { ctx->pc = 0x1a5118; return; }
    ctx->pc = 0x1AE2DCu;
label_1ae2dc:
    // 0x1ae2dc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1ae2e0:
    // 0x1ae2e0: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1ae2e4:
    // 0x1ae2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae2e8:
    // 0x1ae2e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ae2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ae2ec:
    // 0x1ae2ec: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1ae2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ae2f0:
    // 0x1ae2f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ae2f4:
    // 0x1ae2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae2f8:
    // 0x1ae2f8: 0x3e00008  jr          $ra
label_1ae2fc:
    if (ctx->pc == 0x1AE2FCu) {
        ctx->pc = 0x1AE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2F8u;
        // 0x1ae2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE300u;
        goto label_1ae300;
    }
    ctx->pc = 0x1AE2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2F8u;
        // 0x1ae2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE300u;
label_1ae300:
    // 0x1ae300: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ae300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae304:
    // 0x1ae304: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae308:
    // 0x1ae308: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae30c:
    // 0x1ae30c: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1ae30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae310:
    // 0x1ae310: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae314:
    // 0x1ae314: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae318:
    // 0x1ae318: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae31c:
    // 0x1ae31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae320:
    // 0x1ae320: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae324:
    // 0x1ae324: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae328:
    // 0x1ae328: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae32c:
    // 0x1ae32c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae330:
    // 0x1ae330: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae334:
    if (ctx->pc == 0x1AE334u) {
        ctx->pc = 0x1AE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE330u;
        // 0x1ae334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE338u;
        goto label_1ae338;
    }
    ctx->pc = 0x1AE330u;
    {
        const bool branch_taken_0x1ae330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE330u;
        // 0x1ae334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae330) {
            ctx->pc = 0x1AE344u;
            goto label_1ae344;
        }
    }
    ctx->pc = 0x1AE338u;
label_1ae338:
    // 0x1ae338: 0xc06b8a8  jal         func_1AE2A0
label_1ae33c:
    if (ctx->pc == 0x1AE33Cu) {
        ctx->pc = 0x1AE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE338u;
        // 0x1ae33c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE340u;
        goto label_1ae340;
    }
    ctx->pc = 0x1AE338u;
    SET_GPR_U32(ctx, 31, 0x1AE340u);
    ctx->pc = 0x1AE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE338u;
    // 0x1ae33c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE340u;
label_1ae340:
    // 0x1ae340: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1ae344:
    // 0x1ae344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae348:
    // 0x1ae348: 0x3e00008  jr          $ra
label_1ae34c:
    if (ctx->pc == 0x1AE34Cu) {
        ctx->pc = 0x1AE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE348u;
        // 0x1ae34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE350u;
        goto label_1ae350;
    }
    ctx->pc = 0x1AE348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE348u;
        // 0x1ae34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE350u;
label_1ae350:
    // 0x1ae350: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae354:
    // 0x1ae354: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae358:
    // 0x1ae358: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae35c:
    // 0x1ae35c: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae360:
    // 0x1ae360: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae364:
    // 0x1ae364: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae368:
    // 0x1ae368: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae36c:
    // 0x1ae36c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae370:
    // 0x1ae370: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae374:
    // 0x1ae374: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae378:
    // 0x1ae378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae37c:
    // 0x1ae37c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae380:
    // 0x1ae380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae384:
    // 0x1ae384: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae388:
    // 0x1ae388: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ae38c:
    if (ctx->pc == 0x1AE38Cu) {
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE390u;
        goto label_1ae390;
    }
    ctx->pc = 0x1AE388u;
    {
        const bool branch_taken_0x1ae388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae388) {
            ctx->pc = 0x1AE398u;
            goto label_1ae398;
        }
    }
    ctx->pc = 0x1AE390u;
label_1ae390:
    // 0x1ae390: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae394:
    if (ctx->pc == 0x1AE394u) {
        ctx->pc = 0x1AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE390u;
        // 0x1ae394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE398u;
        goto label_1ae398;
    }
    ctx->pc = 0x1AE390u;
    {
        const bool branch_taken_0x1ae390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE390u;
        // 0x1ae394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae390) {
            ctx->pc = 0x1AE3B8u;
            goto label_1ae3b8;
        }
    }
    ctx->pc = 0x1AE398u;
label_1ae398:
    // 0x1ae398: 0xc06b8a8  jal         func_1AE2A0
label_1ae39c:
    if (ctx->pc == 0x1AE39Cu) {
        ctx->pc = 0x1AE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE398u;
        // 0x1ae39c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3A0u;
        goto label_1ae3a0;
    }
    ctx->pc = 0x1AE398u;
    SET_GPR_U32(ctx, 31, 0x1AE3A0u);
    ctx->pc = 0x1AE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE398u;
    // 0x1ae39c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE3A0u;
label_1ae3a0:
    // 0x1ae3a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3a4:
    // 0x1ae3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3a8:
    // 0x1ae3a8: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ae3ac:
    // 0x1ae3ac: 0xc08e93e  jal         func_23A4F8
label_1ae3b0:
    if (ctx->pc == 0x1AE3B0u) {
        ctx->pc = 0x1AE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3ACu;
        // 0x1ae3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3B4u;
        goto label_1ae3b4;
    }
    ctx->pc = 0x1AE3ACu;
    SET_GPR_U32(ctx, 31, 0x1AE3B4u);
    ctx->pc = 0x1AE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3ACu;
    // 0x1ae3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1AE3B4u;
label_1ae3b4:
    // 0x1ae3b4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ae3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ae3b8:
    // 0x1ae3b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae3bc:
    // 0x1ae3bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae3c0:
    // 0x1ae3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae3c4:
    // 0x1ae3c4: 0x3e00008  jr          $ra
label_1ae3c8:
    if (ctx->pc == 0x1AE3C8u) {
        ctx->pc = 0x1AE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3C4u;
        // 0x1ae3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3CCu;
        goto label_1ae3cc;
    }
    ctx->pc = 0x1AE3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3C4u;
        // 0x1ae3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3CCu;
label_1ae3cc:
    // 0x1ae3cc: 0x0  nop
    ctx->pc = 0x1ae3ccu;
    // NOP
label_1ae3d0:
    // 0x1ae3d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ae3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3d4:
    // 0x1ae3d4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae3d8:
    // 0x1ae3d8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae3dc:
    // 0x1ae3dc: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1ae3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae3e0:
    // 0x1ae3e0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae3e4:
    // 0x1ae3e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae3e8:
    // 0x1ae3e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae3ec:
    // 0x1ae3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae3f0:
    // 0x1ae3f0: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae3f4:
    // 0x1ae3f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae3f8:
    // 0x1ae3f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae3fc:
    // 0x1ae3fc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae400:
    // 0x1ae400: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1ae404:
    if (ctx->pc == 0x1AE404u) {
        ctx->pc = 0x1AE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE400u;
        // 0x1ae404: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE408u;
        goto label_1ae408;
    }
    ctx->pc = 0x1AE400u;
    {
        const bool branch_taken_0x1ae400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE400u;
        // 0x1ae404: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae400) {
            ctx->pc = 0x1AE43Cu;
            goto label_1ae43c;
        }
    }
    ctx->pc = 0x1AE408u;
label_1ae408:
    // 0x1ae408: 0xc06b8a8  jal         func_1AE2A0
label_1ae40c:
    if (ctx->pc == 0x1AE40Cu) {
        ctx->pc = 0x1AE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE408u;
        // 0x1ae40c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE410u;
        goto label_1ae410;
    }
    ctx->pc = 0x1AE408u;
    SET_GPR_U32(ctx, 31, 0x1AE410u);
    ctx->pc = 0x1AE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE408u;
    // 0x1ae40c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE410u;
label_1ae410:
    // 0x1ae410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae414:
    // 0x1ae414: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ae414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ae418:
    // 0x1ae418: 0x90820070  lbu         $v0, 0x70($a0)
    ctx->pc = 0x1ae418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_1ae41c:
    // 0x1ae41c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1ae420:
    if (ctx->pc == 0x1AE420u) {
        ctx->pc = 0x1AE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE41Cu;
        // 0x1ae420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE424u;
        goto label_1ae424;
    }
    ctx->pc = 0x1AE41Cu;
    {
        const bool branch_taken_0x1ae41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE41Cu;
        // 0x1ae420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae41c) {
            ctx->pc = 0x1AE440u;
            goto label_1ae440;
        }
    }
    ctx->pc = 0x1AE424u;
label_1ae424:
    // 0x1ae424: 0x90830071  lbu         $v1, 0x71($a0)
    ctx->pc = 0x1ae424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_1ae428:
    // 0x1ae428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae42c:
    // 0x1ae42c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1ae430:
    if (ctx->pc == 0x1AE430u) {
        ctx->pc = 0x1AE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE42Cu;
        // 0x1ae430: 0x90820070  lbu         $v0, 0x70($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE434u;
        goto label_1ae434;
    }
    ctx->pc = 0x1AE42Cu;
    {
        const bool branch_taken_0x1ae42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae42c) {
            ctx->pc = 0x1AE430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE42Cu;
            // 0x1ae430: 0x90820070  lbu         $v0, 0x70($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE440u;
            goto label_1ae440;
        }
    }
    ctx->pc = 0x1AE434u;
label_1ae434:
    // 0x1ae434: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae438:
    if (ctx->pc == 0x1AE438u) {
        ctx->pc = 0x1AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE434u;
        // 0x1ae438: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE43Cu;
        goto label_1ae43c;
    }
    ctx->pc = 0x1AE434u;
    {
        const bool branch_taken_0x1ae434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE434u;
        // 0x1ae438: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae434) {
            ctx->pc = 0x1AE440u;
            goto label_1ae440;
        }
    }
    ctx->pc = 0x1AE43Cu;
label_1ae43c:
    // 0x1ae43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae440:
    // 0x1ae440: 0x3e00008  jr          $ra
label_1ae444:
    if (ctx->pc == 0x1AE444u) {
        ctx->pc = 0x1AE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE440u;
        // 0x1ae444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE448u;
        goto label_1ae448;
    }
    ctx->pc = 0x1AE440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE440u;
        // 0x1ae444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE448u;
label_1ae448:
    // 0x1ae448: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1ae448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ae44c:
    // 0x1ae44c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae450:
    if (ctx->pc == 0x1AE450u) {
        ctx->pc = 0x1AE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE44Cu;
        // 0x1ae450: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE454u;
        goto label_1ae454;
    }
    ctx->pc = 0x1AE44Cu;
    {
        const bool branch_taken_0x1ae44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE44Cu;
        // 0x1ae450: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae44c) {
            ctx->pc = 0x1AE470u;
            goto label_1ae470;
        }
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae458:
    // 0x1ae458: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ae45c:
    // 0x1ae45c: 0x24427218  addiu       $v0, $v0, 0x7218
    ctx->pc = 0x1ae45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29208));
label_1ae460:
    // 0x1ae460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae464:
    // 0x1ae464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ae468:
    // 0x1ae468: 0x808f390  j           func_23CE40
label_1ae46c:
    if (ctx->pc == 0x1AE46Cu) {
        ctx->pc = 0x1AE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE468u;
        // 0x1ae46c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE470u;
        goto label_1ae470;
    }
    ctx->pc = 0x1AE468u;
    ctx->pc = 0x1AE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE468u;
    // 0x1ae46c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x1AE470u;
label_1ae470:
    // 0x1ae470: 0x9043a918  lbu         $v1, -0x56E8($v0)
    ctx->pc = 0x1ae470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945048)));
label_1ae474:
    // 0x1ae474: 0x3e00008  jr          $ra
label_1ae478:
    if (ctx->pc == 0x1AE478u) {
        ctx->pc = 0x1AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE474u;
        // 0x1ae478: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE47Cu;
        goto label_1ae47c;
    }
    ctx->pc = 0x1AE474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE474u;
        // 0x1ae478: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE47Cu;
label_1ae47c:
    // 0x1ae47c: 0x0  nop
    ctx->pc = 0x1ae47cu;
    // NOP
label_1ae480:
    // 0x1ae480: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae484:
    // 0x1ae484: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae488:
    // 0x1ae488: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae48c:
    // 0x1ae48c: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae490:
    // 0x1ae490: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae494:
    // 0x1ae494: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ae498:
    // 0x1ae498: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae49c:
    // 0x1ae49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae4a0:
    // 0x1ae4a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae4a4:
    // 0x1ae4a4: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae4a8:
    // 0x1ae4a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae4ac:
    // 0x1ae4ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae4b0:
    // 0x1ae4b0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae4b4:
    // 0x1ae4b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ae4b8:
    if (ctx->pc == 0x1AE4B8u) {
        ctx->pc = 0x1AE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4B4u;
        // 0x1ae4b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4BCu;
        goto label_1ae4bc;
    }
    ctx->pc = 0x1AE4B4u;
    {
        const bool branch_taken_0x1ae4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4B4u;
        // 0x1ae4b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4b4) {
            ctx->pc = 0x1AE4C4u;
            goto label_1ae4c4;
        }
    }
    ctx->pc = 0x1AE4BCu;
label_1ae4bc:
    // 0x1ae4bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ae4c0:
    if (ctx->pc == 0x1AE4C0u) {
        ctx->pc = 0x1AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4BCu;
        // 0x1ae4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4C4u;
        goto label_1ae4c4;
    }
    ctx->pc = 0x1AE4BCu;
    {
        const bool branch_taken_0x1ae4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4BCu;
        // 0x1ae4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4bc) {
            ctx->pc = 0x1AE4D4u;
            goto label_1ae4d4;
        }
    }
    ctx->pc = 0x1AE4C4u;
label_1ae4c4:
    // 0x1ae4c4: 0xc06b8a8  jal         func_1AE2A0
label_1ae4c8:
    if (ctx->pc == 0x1AE4C8u) {
        ctx->pc = 0x1AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4C4u;
        // 0x1ae4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4CCu;
        goto label_1ae4cc;
    }
    ctx->pc = 0x1AE4C4u;
    SET_GPR_U32(ctx, 31, 0x1AE4CCu);
    ctx->pc = 0x1AE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4C4u;
    // 0x1ae4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE4CCu;
label_1ae4cc:
    // 0x1ae4cc: 0xa0500071  sb          $s0, 0x71($v0)
    ctx->pc = 0x1ae4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 16));
label_1ae4d0:
    // 0x1ae4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae4d4:
    // 0x1ae4d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae4d8:
    // 0x1ae4d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae4dc:
    // 0x1ae4dc: 0x3e00008  jr          $ra
label_1ae4e0:
    if (ctx->pc == 0x1AE4E0u) {
        ctx->pc = 0x1AE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4DCu;
        // 0x1ae4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4E4u;
        goto label_1ae4e4;
    }
    ctx->pc = 0x1AE4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4DCu;
        // 0x1ae4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE4E4u;
label_1ae4e4:
    // 0x1ae4e4: 0x0  nop
    ctx->pc = 0x1ae4e4u;
    // NOP
label_1ae4e8:
    // 0x1ae4e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ae4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4ec:
    // 0x1ae4ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae4f0:
    // 0x1ae4f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae4f4:
    // 0x1ae4f4: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1ae4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae4f8:
    // 0x1ae4f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae4fc:
    // 0x1ae4fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae500:
    // 0x1ae500: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae504:
    // 0x1ae504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae508:
    // 0x1ae508: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae50c:
    // 0x1ae50c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae510:
    // 0x1ae510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae514:
    // 0x1ae514: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae518:
    // 0x1ae518: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae51c:
    if (ctx->pc == 0x1AE51Cu) {
        ctx->pc = 0x1AE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE518u;
        // 0x1ae51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE520u;
        goto label_1ae520;
    }
    ctx->pc = 0x1AE518u;
    {
        const bool branch_taken_0x1ae518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE518u;
        // 0x1ae51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae518) {
            ctx->pc = 0x1AE52Cu;
            goto label_1ae52c;
        }
    }
    ctx->pc = 0x1AE520u;
label_1ae520:
    // 0x1ae520: 0xc06b8a8  jal         func_1AE2A0
label_1ae524:
    if (ctx->pc == 0x1AE524u) {
        ctx->pc = 0x1AE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE520u;
        // 0x1ae524: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE528u;
        goto label_1ae528;
    }
    ctx->pc = 0x1AE520u;
    SET_GPR_U32(ctx, 31, 0x1AE528u);
    ctx->pc = 0x1AE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE520u;
    // 0x1ae524: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE528u;
label_1ae528:
    // 0x1ae528: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x1ae528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_1ae52c:
    // 0x1ae52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae530:
    // 0x1ae530: 0x3e00008  jr          $ra
label_1ae534:
    if (ctx->pc == 0x1AE534u) {
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE538u;
        goto label_1ae538;
    }
    ctx->pc = 0x1AE530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE538u;
label_1ae538:
    // 0x1ae538: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1ae538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ae53c:
    // 0x1ae53c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae540:
    if (ctx->pc == 0x1AE540u) {
        ctx->pc = 0x1AE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE53Cu;
        // 0x1ae540: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE544u;
        goto label_1ae544;
    }
    ctx->pc = 0x1AE53Cu;
    {
        const bool branch_taken_0x1ae53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE53Cu;
        // 0x1ae540: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae53c) {
            ctx->pc = 0x1AE560u;
            goto label_1ae560;
        }
    }
    ctx->pc = 0x1AE544u;
label_1ae544:
    // 0x1ae544: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae548:
    // 0x1ae548: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ae54c:
    // 0x1ae54c: 0x24427238  addiu       $v0, $v0, 0x7238
    ctx->pc = 0x1ae54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29240));
label_1ae550:
    // 0x1ae550: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae554:
    // 0x1ae554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ae558:
    // 0x1ae558: 0x808f390  j           func_23CE40
label_1ae55c:
    if (ctx->pc == 0x1AE55Cu) {
        ctx->pc = 0x1AE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE558u;
        // 0x1ae55c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE560u;
        goto label_1ae560;
    }
    ctx->pc = 0x1AE558u;
    ctx->pc = 0x1AE55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE558u;
    // 0x1ae55c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x1AE560u;
label_1ae560:
    // 0x1ae560: 0x9043a918  lbu         $v1, -0x56E8($v0)
    ctx->pc = 0x1ae560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945048)));
label_1ae564:
    // 0x1ae564: 0x3e00008  jr          $ra
label_1ae568:
    if (ctx->pc == 0x1AE568u) {
        ctx->pc = 0x1AE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE564u;
        // 0x1ae568: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE56Cu;
        goto label_1ae56c;
    }
    ctx->pc = 0x1AE564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE564u;
        // 0x1ae568: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE56Cu;
label_1ae56c:
    // 0x1ae56c: 0x0  nop
    ctx->pc = 0x1ae56cu;
    // NOP
label_1ae570:
    // 0x1ae570: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ae570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae574:
    // 0x1ae574: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae578:
    // 0x1ae578: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae57c:
    // 0x1ae57c: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1ae57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae580:
    // 0x1ae580: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae584:
    // 0x1ae584: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae588:
    // 0x1ae588: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae58c:
    // 0x1ae58c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae590:
    // 0x1ae590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae594:
    // 0x1ae594: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae598:
    // 0x1ae598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae59c:
    // 0x1ae59c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ae5a0:
    // 0x1ae5a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae5a4:
    // 0x1ae5a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae5a8:
    // 0x1ae5a8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae5ac:
    // 0x1ae5ac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1ae5b0:
    if (ctx->pc == 0x1AE5B0u) {
        ctx->pc = 0x1AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5ACu;
        // 0x1ae5b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5B4u;
        goto label_1ae5b4;
    }
    ctx->pc = 0x1AE5ACu;
    {
        const bool branch_taken_0x1ae5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5ACu;
        // 0x1ae5b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5ac) {
            ctx->pc = 0x1AE678u;
            goto label_1ae678;
        }
    }
    ctx->pc = 0x1AE5B4u;
label_1ae5b4:
    // 0x1ae5b4: 0xc06b8a8  jal         func_1AE2A0
label_1ae5b8:
    if (ctx->pc == 0x1AE5B8u) {
        ctx->pc = 0x1AE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5B4u;
        // 0x1ae5b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5BCu;
        goto label_1ae5bc;
    }
    ctx->pc = 0x1AE5B4u;
    SET_GPR_U32(ctx, 31, 0x1AE5BCu);
    ctx->pc = 0x1AE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5B4u;
    // 0x1ae5b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE5BCu;
label_1ae5bc:
    // 0x1ae5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae5c0:
    // 0x1ae5c0: 0x90850072  lbu         $a1, 0x72($a0)
    ctx->pc = 0x1ae5c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_1ae5c4:
    // 0x1ae5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae5c8:
    // 0x1ae5c8: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
label_1ae5cc:
    if (ctx->pc == 0x1AE5CCu) {
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C8u;
        // 0x1ae5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5D0u;
        goto label_1ae5d0;
    }
    ctx->pc = 0x1AE5C8u;
    {
        const bool branch_taken_0x1ae5c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C8u;
        // 0x1ae5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5c8) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1ae5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_1ae5d4:
    // 0x1ae5d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae5d8:
    // 0x1ae5d8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1ae5dc:
    if (ctx->pc == 0x1AE5DCu) {
        ctx->pc = 0x1AE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5D8u;
        // 0x1ae5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5E0u;
        goto label_1ae5e0;
    }
    ctx->pc = 0x1AE5D8u;
    {
        const bool branch_taken_0x1ae5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5D8u;
        // 0x1ae5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5d8) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE5E0u;
label_1ae5e0:
    // 0x1ae5e0: 0x9083006a  lbu         $v1, 0x6A($a0)
    ctx->pc = 0x1ae5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 106)));
label_1ae5e4:
    // 0x1ae5e4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1ae5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ae5e8:
    // 0x1ae5e8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1ae5ec:
    if (ctx->pc == 0x1AE5ECu) {
        ctx->pc = 0x1AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E8u;
        // 0x1ae5ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5F0u;
        goto label_1ae5f0;
    }
    ctx->pc = 0x1AE5E8u;
    {
        const bool branch_taken_0x1ae5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E8u;
        // 0x1ae5ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e8) {
            ctx->pc = 0x1AE678u;
            goto label_1ae678;
        }
    }
    ctx->pc = 0x1AE5F0u;
label_1ae5f0:
    // 0x1ae5f0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1ae5f4:
    if (ctx->pc == 0x1AE5F4u) {
        ctx->pc = 0x1AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F0u;
        // 0x1ae5f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5F8u;
        goto label_1ae5f8;
    }
    ctx->pc = 0x1AE5F0u;
    {
        const bool branch_taken_0x1ae5f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F0u;
        // 0x1ae5f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f0) {
            ctx->pc = 0x1AE600u;
            goto label_1ae600;
        }
    }
    ctx->pc = 0x1AE5F8u;
label_1ae5f8:
    // 0x1ae5f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1ae5fc:
    if (ctx->pc == 0x1AE5FCu) {
        ctx->pc = 0x1AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F8u;
        // 0x1ae5fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE600u;
        goto label_1ae600;
    }
    ctx->pc = 0x1AE5F8u;
    {
        const bool branch_taken_0x1ae5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F8u;
        // 0x1ae5fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f8) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE600u;
label_1ae600:
    // 0x1ae600: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_1ae604:
    if (ctx->pc == 0x1AE604u) {
        ctx->pc = 0x1AE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE600u;
        // 0x1ae604: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE608u;
        goto label_1ae608;
    }
    ctx->pc = 0x1AE600u;
    {
        const bool branch_taken_0x1ae600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE600u;
        // 0x1ae604: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae600) {
            ctx->pc = 0x1AE648u;
            goto label_1ae648;
        }
    }
    ctx->pc = 0x1AE608u;
label_1ae608:
    // 0x1ae608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ae60c:
    if (ctx->pc == 0x1AE60Cu) {
        ctx->pc = 0x1AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE608u;
        // 0x1ae60c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE610u;
        goto label_1ae610;
    }
    ctx->pc = 0x1AE608u;
    {
        const bool branch_taken_0x1ae608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE608u;
        // 0x1ae60c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae608) {
            ctx->pc = 0x1AE620u;
            goto label_1ae620;
        }
    }
    ctx->pc = 0x1AE610u;
label_1ae610:
    // 0x1ae610: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
label_1ae614:
    if (ctx->pc == 0x1AE614u) {
        ctx->pc = 0x1AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE610u;
        // 0x1ae614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE618u;
        goto label_1ae618;
    }
    ctx->pc = 0x1AE610u;
    {
        const bool branch_taken_0x1ae610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE610u;
        // 0x1ae614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae610) {
            ctx->pc = 0x1AE638u;
            goto label_1ae638;
        }
    }
    ctx->pc = 0x1AE618u;
label_1ae618:
    // 0x1ae618: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ae61c:
    if (ctx->pc == 0x1AE61Cu) {
        ctx->pc = 0x1AE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE618u;
        // 0x1ae61c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE620u;
        goto label_1ae620;
    }
    ctx->pc = 0x1AE618u;
    {
        const bool branch_taken_0x1ae618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE618u;
        // 0x1ae61c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae618) {
            ctx->pc = 0x1AE680u;
            goto label_1ae680;
        }
    }
    ctx->pc = 0x1AE620u;
label_1ae620:
    // 0x1ae620: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1ae624:
    if (ctx->pc == 0x1AE624u) {
        ctx->pc = 0x1AE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE620u;
        // 0x1ae624: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE628u;
        goto label_1ae628;
    }
    ctx->pc = 0x1AE620u;
    {
        const bool branch_taken_0x1ae620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE620u;
        // 0x1ae624: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae620) {
            ctx->pc = 0x1AE658u;
            goto label_1ae658;
        }
    }
    ctx->pc = 0x1AE628u;
label_1ae628:
    // 0x1ae628: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_1ae62c:
    if (ctx->pc == 0x1AE62Cu) {
        ctx->pc = 0x1AE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE628u;
        // 0x1ae62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE630u;
        goto label_1ae630;
    }
    ctx->pc = 0x1AE628u;
    {
        const bool branch_taken_0x1ae628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE628u;
        // 0x1ae62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae628) {
            ctx->pc = 0x1AE668u;
            goto label_1ae668;
        }
    }
    ctx->pc = 0x1AE630u;
label_1ae630:
    // 0x1ae630: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ae634:
    if (ctx->pc == 0x1AE634u) {
        ctx->pc = 0x1AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE630u;
        // 0x1ae634: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE638u;
        goto label_1ae638;
    }
    ctx->pc = 0x1AE630u;
    {
        const bool branch_taken_0x1ae630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE630u;
        // 0x1ae634: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae630) {
            ctx->pc = 0x1AE680u;
            goto label_1ae680;
        }
    }
    ctx->pc = 0x1AE638u;
label_1ae638:
    // 0x1ae638: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae63c:
    // 0x1ae63c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae640:
    // 0x1ae640: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ae644:
    if (ctx->pc == 0x1AE644u) {
        ctx->pc = 0x1AE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE640u;
        // 0x1ae644: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE648u;
        goto label_1ae648;
    }
    ctx->pc = 0x1AE640u;
    {
        const bool branch_taken_0x1ae640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE640u;
        // 0x1ae644: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae640) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE648u;
label_1ae648:
    // 0x1ae648: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae64c:
    // 0x1ae64c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae650:
    // 0x1ae650: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ae654:
    if (ctx->pc == 0x1AE654u) {
        ctx->pc = 0x1AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE650u;
        // 0x1ae654: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE658u;
        goto label_1ae658;
    }
    ctx->pc = 0x1AE650u;
    {
        const bool branch_taken_0x1ae650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE650u;
        // 0x1ae654: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae650) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE658u;
label_1ae658:
    // 0x1ae658: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae65c:
    // 0x1ae65c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae660:
    // 0x1ae660: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ae664:
    if (ctx->pc == 0x1AE664u) {
        ctx->pc = 0x1AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE660u;
        // 0x1ae664: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE668u;
        goto label_1ae668;
    }
    ctx->pc = 0x1AE660u;
    {
        const bool branch_taken_0x1ae660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE660u;
        // 0x1ae664: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae660) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE668u;
label_1ae668:
    // 0x1ae668: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae66c:
    // 0x1ae66c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae670:
    // 0x1ae670: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae674:
    if (ctx->pc == 0x1AE674u) {
        ctx->pc = 0x1AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE670u;
        // 0x1ae674: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE678u;
        goto label_1ae678;
    }
    ctx->pc = 0x1AE670u;
    {
        const bool branch_taken_0x1ae670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE670u;
        // 0x1ae674: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae670) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE678u;
label_1ae678:
    // 0x1ae678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae67c:
    // 0x1ae67c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae680:
    // 0x1ae680: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae684:
    // 0x1ae684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae688:
    // 0x1ae688: 0x3e00008  jr          $ra
label_1ae68c:
    if (ctx->pc == 0x1AE68Cu) {
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE690u;
        goto label_1ae690;
    }
    ctx->pc = 0x1AE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE690u;
label_1ae690:
    // 0x1ae690: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ae690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae694:
    // 0x1ae694: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x1ae698u;
    return;
}

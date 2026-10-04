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


void FUN_0014eba0_part327(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ede80u: goto label_1ede80;
        case 0x1ede84u: goto label_1ede84;
        case 0x1ede88u: goto label_1ede88;
        case 0x1ede8cu: goto label_1ede8c;
        case 0x1ede90u: goto label_1ede90;
        case 0x1ede94u: goto label_1ede94;
        case 0x1ede98u: goto label_1ede98;
        case 0x1ede9cu: goto label_1ede9c;
        case 0x1edea0u: goto label_1edea0;
        case 0x1edea4u: goto label_1edea4;
        case 0x1edea8u: goto label_1edea8;
        case 0x1edeacu: goto label_1edeac;
        case 0x1edeb0u: goto label_1edeb0;
        case 0x1edeb4u: goto label_1edeb4;
        case 0x1edeb8u: goto label_1edeb8;
        case 0x1edebcu: goto label_1edebc;
        case 0x1edec0u: goto label_1edec0;
        case 0x1edec4u: goto label_1edec4;
        case 0x1edec8u: goto label_1edec8;
        case 0x1edeccu: goto label_1edecc;
        case 0x1eded0u: goto label_1eded0;
        case 0x1eded4u: goto label_1eded4;
        case 0x1eded8u: goto label_1eded8;
        case 0x1ededcu: goto label_1ededc;
        case 0x1edee0u: goto label_1edee0;
        case 0x1edee4u: goto label_1edee4;
        case 0x1edee8u: goto label_1edee8;
        case 0x1edeecu: goto label_1edeec;
        case 0x1edef0u: goto label_1edef0;
        case 0x1edef4u: goto label_1edef4;
        case 0x1edef8u: goto label_1edef8;
        case 0x1edefcu: goto label_1edefc;
        case 0x1edf00u: goto label_1edf00;
        case 0x1edf04u: goto label_1edf04;
        case 0x1edf08u: goto label_1edf08;
        case 0x1edf0cu: goto label_1edf0c;
        case 0x1edf10u: goto label_1edf10;
        case 0x1edf14u: goto label_1edf14;
        case 0x1edf18u: goto label_1edf18;
        case 0x1edf1cu: goto label_1edf1c;
        case 0x1edf20u: goto label_1edf20;
        case 0x1edf24u: goto label_1edf24;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf2cu: goto label_1edf2c;
        case 0x1edf30u: goto label_1edf30;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edf38u: goto label_1edf38;
        case 0x1edf3cu: goto label_1edf3c;
        case 0x1edf40u: goto label_1edf40;
        case 0x1edf44u: goto label_1edf44;
        case 0x1edf48u: goto label_1edf48;
        case 0x1edf4cu: goto label_1edf4c;
        case 0x1edf50u: goto label_1edf50;
        case 0x1edf54u: goto label_1edf54;
        case 0x1edf58u: goto label_1edf58;
        case 0x1edf5cu: goto label_1edf5c;
        case 0x1edf60u: goto label_1edf60;
        case 0x1edf64u: goto label_1edf64;
        case 0x1edf68u: goto label_1edf68;
        case 0x1edf6cu: goto label_1edf6c;
        case 0x1edf70u: goto label_1edf70;
        case 0x1edf74u: goto label_1edf74;
        case 0x1edf78u: goto label_1edf78;
        case 0x1edf7cu: goto label_1edf7c;
        case 0x1edf80u: goto label_1edf80;
        case 0x1edf84u: goto label_1edf84;
        case 0x1edf88u: goto label_1edf88;
        case 0x1edf8cu: goto label_1edf8c;
        case 0x1edf90u: goto label_1edf90;
        case 0x1edf94u: goto label_1edf94;
        case 0x1edf98u: goto label_1edf98;
        case 0x1edf9cu: goto label_1edf9c;
        case 0x1edfa0u: goto label_1edfa0;
        case 0x1edfa4u: goto label_1edfa4;
        case 0x1edfa8u: goto label_1edfa8;
        case 0x1edfacu: goto label_1edfac;
        case 0x1edfb0u: goto label_1edfb0;
        case 0x1edfb4u: goto label_1edfb4;
        case 0x1edfb8u: goto label_1edfb8;
        case 0x1edfbcu: goto label_1edfbc;
        case 0x1edfc0u: goto label_1edfc0;
        case 0x1edfc4u: goto label_1edfc4;
        case 0x1edfc8u: goto label_1edfc8;
        case 0x1edfccu: goto label_1edfcc;
        case 0x1edfd0u: goto label_1edfd0;
        case 0x1edfd4u: goto label_1edfd4;
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1edfdcu: goto label_1edfdc;
        case 0x1edfe0u: goto label_1edfe0;
        case 0x1edfe4u: goto label_1edfe4;
        case 0x1edfe8u: goto label_1edfe8;
        case 0x1edfecu: goto label_1edfec;
        case 0x1edff0u: goto label_1edff0;
        case 0x1edff4u: goto label_1edff4;
        case 0x1edff8u: goto label_1edff8;
        case 0x1edffcu: goto label_1edffc;
        case 0x1ee000u: goto label_1ee000;
        case 0x1ee004u: goto label_1ee004;
        case 0x1ee008u: goto label_1ee008;
        case 0x1ee00cu: goto label_1ee00c;
        case 0x1ee010u: goto label_1ee010;
        case 0x1ee014u: goto label_1ee014;
        case 0x1ee018u: goto label_1ee018;
        case 0x1ee01cu: goto label_1ee01c;
        case 0x1ee020u: goto label_1ee020;
        case 0x1ee024u: goto label_1ee024;
        case 0x1ee028u: goto label_1ee028;
        case 0x1ee02cu: goto label_1ee02c;
        case 0x1ee030u: goto label_1ee030;
        case 0x1ee034u: goto label_1ee034;
        case 0x1ee038u: goto label_1ee038;
        case 0x1ee03cu: goto label_1ee03c;
        case 0x1ee040u: goto label_1ee040;
        case 0x1ee044u: goto label_1ee044;
        case 0x1ee048u: goto label_1ee048;
        case 0x1ee04cu: goto label_1ee04c;
        case 0x1ee050u: goto label_1ee050;
        case 0x1ee054u: goto label_1ee054;
        case 0x1ee058u: goto label_1ee058;
        case 0x1ee05cu: goto label_1ee05c;
        case 0x1ee060u: goto label_1ee060;
        case 0x1ee064u: goto label_1ee064;
        case 0x1ee068u: goto label_1ee068;
        case 0x1ee06cu: goto label_1ee06c;
        case 0x1ee070u: goto label_1ee070;
        case 0x1ee074u: goto label_1ee074;
        case 0x1ee078u: goto label_1ee078;
        case 0x1ee07cu: goto label_1ee07c;
        case 0x1ee080u: goto label_1ee080;
        case 0x1ee084u: goto label_1ee084;
        case 0x1ee088u: goto label_1ee088;
        case 0x1ee08cu: goto label_1ee08c;
        case 0x1ee090u: goto label_1ee090;
        case 0x1ee094u: goto label_1ee094;
        case 0x1ee098u: goto label_1ee098;
        case 0x1ee09cu: goto label_1ee09c;
        case 0x1ee0a0u: goto label_1ee0a0;
        case 0x1ee0a4u: goto label_1ee0a4;
        case 0x1ee0a8u: goto label_1ee0a8;
        case 0x1ee0acu: goto label_1ee0ac;
        case 0x1ee0b0u: goto label_1ee0b0;
        case 0x1ee0b4u: goto label_1ee0b4;
        case 0x1ee0b8u: goto label_1ee0b8;
        case 0x1ee0bcu: goto label_1ee0bc;
        case 0x1ee0c0u: goto label_1ee0c0;
        case 0x1ee0c4u: goto label_1ee0c4;
        case 0x1ee0c8u: goto label_1ee0c8;
        case 0x1ee0ccu: goto label_1ee0cc;
        case 0x1ee0d0u: goto label_1ee0d0;
        case 0x1ee0d4u: goto label_1ee0d4;
        case 0x1ee0d8u: goto label_1ee0d8;
        case 0x1ee0dcu: goto label_1ee0dc;
        case 0x1ee0e0u: goto label_1ee0e0;
        case 0x1ee0e4u: goto label_1ee0e4;
        case 0x1ee0e8u: goto label_1ee0e8;
        case 0x1ee0ecu: goto label_1ee0ec;
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee0f4u: goto label_1ee0f4;
        case 0x1ee0f8u: goto label_1ee0f8;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee100u: goto label_1ee100;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee110u: goto label_1ee110;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee11cu: goto label_1ee11c;
        case 0x1ee120u: goto label_1ee120;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee128u: goto label_1ee128;
        case 0x1ee12cu: goto label_1ee12c;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee134u: goto label_1ee134;
        case 0x1ee138u: goto label_1ee138;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee140u: goto label_1ee140;
        case 0x1ee144u: goto label_1ee144;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee14cu: goto label_1ee14c;
        case 0x1ee150u: goto label_1ee150;
        case 0x1ee154u: goto label_1ee154;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee15cu: goto label_1ee15c;
        case 0x1ee160u: goto label_1ee160;
        case 0x1ee164u: goto label_1ee164;
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        case 0x1ee21cu: goto label_1ee21c;
        case 0x1ee220u: goto label_1ee220;
        case 0x1ee224u: goto label_1ee224;
        case 0x1ee228u: goto label_1ee228;
        case 0x1ee22cu: goto label_1ee22c;
        case 0x1ee230u: goto label_1ee230;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee238u: goto label_1ee238;
        case 0x1ee23cu: goto label_1ee23c;
        case 0x1ee240u: goto label_1ee240;
        case 0x1ee244u: goto label_1ee244;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee24cu: goto label_1ee24c;
        case 0x1ee250u: goto label_1ee250;
        case 0x1ee254u: goto label_1ee254;
        case 0x1ee258u: goto label_1ee258;
        case 0x1ee25cu: goto label_1ee25c;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee264u: goto label_1ee264;
        case 0x1ee268u: goto label_1ee268;
        case 0x1ee26cu: goto label_1ee26c;
        case 0x1ee270u: goto label_1ee270;
        case 0x1ee274u: goto label_1ee274;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee27cu: goto label_1ee27c;
        case 0x1ee280u: goto label_1ee280;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee288u: goto label_1ee288;
        case 0x1ee28cu: goto label_1ee28c;
        case 0x1ee290u: goto label_1ee290;
        case 0x1ee294u: goto label_1ee294;
        case 0x1ee298u: goto label_1ee298;
        case 0x1ee29cu: goto label_1ee29c;
        case 0x1ee2a0u: goto label_1ee2a0;
        case 0x1ee2a4u: goto label_1ee2a4;
        case 0x1ee2a8u: goto label_1ee2a8;
        case 0x1ee2acu: goto label_1ee2ac;
        case 0x1ee2b0u: goto label_1ee2b0;
        case 0x1ee2b4u: goto label_1ee2b4;
        case 0x1ee2b8u: goto label_1ee2b8;
        case 0x1ee2bcu: goto label_1ee2bc;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee2c4u: goto label_1ee2c4;
        case 0x1ee2c8u: goto label_1ee2c8;
        case 0x1ee2ccu: goto label_1ee2cc;
        case 0x1ee2d0u: goto label_1ee2d0;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2d8u: goto label_1ee2d8;
        case 0x1ee2dcu: goto label_1ee2dc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2e8u: goto label_1ee2e8;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee2f8u: goto label_1ee2f8;
        case 0x1ee2fcu: goto label_1ee2fc;
        case 0x1ee300u: goto label_1ee300;
        case 0x1ee304u: goto label_1ee304;
        case 0x1ee308u: goto label_1ee308;
        case 0x1ee30cu: goto label_1ee30c;
        case 0x1ee310u: goto label_1ee310;
        case 0x1ee314u: goto label_1ee314;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee320u: goto label_1ee320;
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee328u: goto label_1ee328;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee338u: goto label_1ee338;
        case 0x1ee33cu: goto label_1ee33c;
        case 0x1ee340u: goto label_1ee340;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee348u: goto label_1ee348;
        case 0x1ee34cu: goto label_1ee34c;
        case 0x1ee350u: goto label_1ee350;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee358u: goto label_1ee358;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee360u: goto label_1ee360;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee368u: goto label_1ee368;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee370u: goto label_1ee370;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee37cu: goto label_1ee37c;
        case 0x1ee380u: goto label_1ee380;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee388u: goto label_1ee388;
        case 0x1ee38cu: goto label_1ee38c;
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee39cu: goto label_1ee39c;
        case 0x1ee3a0u: goto label_1ee3a0;
        case 0x1ee3a4u: goto label_1ee3a4;
        case 0x1ee3a8u: goto label_1ee3a8;
        case 0x1ee3acu: goto label_1ee3ac;
        case 0x1ee3b0u: goto label_1ee3b0;
        case 0x1ee3b4u: goto label_1ee3b4;
        case 0x1ee3b8u: goto label_1ee3b8;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c0u: goto label_1ee3c0;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3c8u: goto label_1ee3c8;
        case 0x1ee3ccu: goto label_1ee3cc;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3dcu: goto label_1ee3dc;
        case 0x1ee3e0u: goto label_1ee3e0;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee3ecu: goto label_1ee3ec;
        case 0x1ee3f0u: goto label_1ee3f0;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee3f8u: goto label_1ee3f8;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee400u: goto label_1ee400;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee40cu: goto label_1ee40c;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee418u: goto label_1ee418;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee450u: goto label_1ee450;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee458u: goto label_1ee458;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee468u: goto label_1ee468;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee478u: goto label_1ee478;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee480u: goto label_1ee480;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee488u: goto label_1ee488;
        case 0x1ee48cu: goto label_1ee48c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee498u: goto label_1ee498;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4a0u: goto label_1ee4a0;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4a8u: goto label_1ee4a8;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b0u: goto label_1ee4b0;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4c0u: goto label_1ee4c0;
        case 0x1ee4c4u: goto label_1ee4c4;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4ccu: goto label_1ee4cc;
        case 0x1ee4d0u: goto label_1ee4d0;
        case 0x1ee4d4u: goto label_1ee4d4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4e0u: goto label_1ee4e0;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4e8u: goto label_1ee4e8;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee4f4u: goto label_1ee4f4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee4fcu: goto label_1ee4fc;
        case 0x1ee500u: goto label_1ee500;
        case 0x1ee504u: goto label_1ee504;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee510u: goto label_1ee510;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee518u: goto label_1ee518;
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee524u: goto label_1ee524;
        case 0x1ee528u: goto label_1ee528;
        case 0x1ee52cu: goto label_1ee52c;
        case 0x1ee530u: goto label_1ee530;
        case 0x1ee534u: goto label_1ee534;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee540u: goto label_1ee540;
        case 0x1ee544u: goto label_1ee544;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee550u: goto label_1ee550;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee55cu: goto label_1ee55c;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee568u: goto label_1ee568;
        case 0x1ee56cu: goto label_1ee56c;
        case 0x1ee570u: goto label_1ee570;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee578u: goto label_1ee578;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee580u: goto label_1ee580;
        case 0x1ee584u: goto label_1ee584;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee58cu: goto label_1ee58c;
        case 0x1ee590u: goto label_1ee590;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee59cu: goto label_1ee59c;
        case 0x1ee5a0u: goto label_1ee5a0;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5acu: goto label_1ee5ac;
        case 0x1ee5b0u: goto label_1ee5b0;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5b8u: goto label_1ee5b8;
        case 0x1ee5bcu: goto label_1ee5bc;
        case 0x1ee5c0u: goto label_1ee5c0;
        case 0x1ee5c4u: goto label_1ee5c4;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5ccu: goto label_1ee5cc;
        case 0x1ee5d0u: goto label_1ee5d0;
        case 0x1ee5d4u: goto label_1ee5d4;
        case 0x1ee5d8u: goto label_1ee5d8;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee5e4u: goto label_1ee5e4;
        case 0x1ee5e8u: goto label_1ee5e8;
        case 0x1ee5ecu: goto label_1ee5ec;
        case 0x1ee5f0u: goto label_1ee5f0;
        case 0x1ee5f4u: goto label_1ee5f4;
        case 0x1ee5f8u: goto label_1ee5f8;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee600u: goto label_1ee600;
        case 0x1ee604u: goto label_1ee604;
        case 0x1ee608u: goto label_1ee608;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee610u: goto label_1ee610;
        case 0x1ee614u: goto label_1ee614;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee61cu: goto label_1ee61c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee624u: goto label_1ee624;
        case 0x1ee628u: goto label_1ee628;
        case 0x1ee62cu: goto label_1ee62c;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        default: return;
    }

label_1ede80:
    // 0x1ede80: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1ede80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ede84:
    // 0x1ede84: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1ede84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1ede88:
    // 0x1ede88: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x1ede88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_1ede8c:
    // 0x1ede8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ede8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ede90:
    // 0x1ede90: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_1ede94:
    if (ctx->pc == 0x1EDE94u) {
        ctx->pc = 0x1EDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE90u;
        // 0x1ede94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE98u;
        goto label_1ede98;
    }
    ctx->pc = 0x1EDE90u;
    {
        const bool branch_taken_0x1ede90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE90u;
        // 0x1ede94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede90) {
            ctx->pc = 0x1EE0A0u;
            goto label_1ee0a0;
        }
    }
    ctx->pc = 0x1EDE98u;
label_1ede98:
    // 0x1ede98: 0xc05b420  jal         func_16D080
label_1ede9c:
    if (ctx->pc == 0x1EDE9Cu) {
        ctx->pc = 0x1EDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE98u;
        // 0x1ede9c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDEA0u;
        goto label_1edea0;
    }
    ctx->pc = 0x1EDE98u;
    SET_GPR_U32(ctx, 31, 0x1EDEA0u);
    ctx->pc = 0x1EDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE98u;
    // 0x1ede9c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EDEA0u;
label_1edea0:
    // 0x1edea0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1edea4:
    // 0x1edea4: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1edea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1edea8:
    // 0x1edea8: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1edeac:
    if (ctx->pc == 0x1EDEACu) {
        ctx->pc = 0x1EDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEA8u;
        // 0x1edeac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDEB0u;
        goto label_1edeb0;
    }
    ctx->pc = 0x1EDEA8u;
    {
        const bool branch_taken_0x1edea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEA8u;
        // 0x1edeac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edea8) {
            ctx->pc = 0x1EE0A0u;
            goto label_1ee0a0;
        }
    }
    ctx->pc = 0x1EDEB0u;
label_1edeb0:
    // 0x1edeb0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1edeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1edeb4:
    // 0x1edeb4: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x1edeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_1edeb8:
    // 0x1edeb8: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1edeb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1edebc:
    // 0x1edebc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1edebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1edec0:
    // 0x1edec0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1edec4:
    if (ctx->pc == 0x1EDEC4u) {
        ctx->pc = 0x1EDEC8u;
        goto label_1edec8;
    }
    ctx->pc = 0x1EDEC0u;
    {
        const bool branch_taken_0x1edec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edec0) {
            ctx->pc = 0x1EDEFCu;
            goto label_1edefc;
        }
    }
    ctx->pc = 0x1EDEC8u;
label_1edec8:
    // 0x1edec8: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1edec8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1edecc:
    // 0x1edecc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1edeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eded0:
    // 0x1eded0: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x1eded0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_1eded4:
    // 0x1eded4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1eded8:
    // 0x1eded8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1ededc:
    if (ctx->pc == 0x1EDEDCu) {
        ctx->pc = 0x1EDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDED8u;
        // 0x1ededc: 0x27a200b8  addiu       $v0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDEE0u;
        goto label_1edee0;
    }
    ctx->pc = 0x1EDED8u;
    {
        const bool branch_taken_0x1eded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDED8u;
        // 0x1ededc: 0x27a200b8  addiu       $v0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eded8) {
            ctx->pc = 0x1EDF38u;
            goto label_1edf38;
        }
    }
    ctx->pc = 0x1EDEE0u;
label_1edee0:
    // 0x1edee0: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1edee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1edee4:
    // 0x1edee4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1edee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1edee8:
    // 0x1edee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edeec:
    // 0x1edeec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1edeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1edef0:
    // 0x1edef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edef4:
    // 0x1edef4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1edef8:
    if (ctx->pc == 0x1EDEF8u) {
        ctx->pc = 0x1EDEFCu;
        goto label_1edefc;
    }
    ctx->pc = 0x1EDEF4u;
    {
        const bool branch_taken_0x1edef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edef4) {
            ctx->pc = 0x1EDF38u;
            goto label_1edf38;
        }
    }
    ctx->pc = 0x1EDEFCu;
label_1edefc:
    // 0x1edefc: 0x0  nop
    ctx->pc = 0x1edefcu;
    // NOP
label_1edf00:
    // 0x1edf00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1edf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1edf04:
    // 0x1edf04: 0xc05b420  jal         func_16D080
label_1edf08:
    if (ctx->pc == 0x1EDF08u) {
        ctx->pc = 0x1EDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF04u;
        // 0x1edf08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDF0Cu;
        goto label_1edf0c;
    }
    ctx->pc = 0x1EDF04u;
    SET_GPR_U32(ctx, 31, 0x1EDF0Cu);
    ctx->pc = 0x1EDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF04u;
    // 0x1edf08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EDF0Cu;
label_1edf0c:
    // 0x1edf0c: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x1edf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1edf10:
    // 0x1edf10: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1edf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1edf14:
    // 0x1edf14: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1edf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1edf18:
    // 0x1edf18: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1edf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
label_1edf1c:
    // 0x1edf1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1edf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1edf20:
    // 0x1edf20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1edf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1edf24:
    // 0x1edf24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1edf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1edf28:
    // 0x1edf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edf2c:
    // 0x1edf2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edf30:
    // 0x1edf30: 0x10000018  b           . + 4 + (0x18 << 2)
label_1edf34:
    if (ctx->pc == 0x1EDF34u) {
        ctx->pc = 0x1EDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF30u;
        // 0x1edf34: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDF38u;
        goto label_1edf38;
    }
    ctx->pc = 0x1EDF30u;
    {
        const bool branch_taken_0x1edf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF30u;
        // 0x1edf34: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf30) {
            ctx->pc = 0x1EDF94u;
            goto label_1edf94;
        }
    }
    ctx->pc = 0x1EDF38u;
label_1edf38:
    // 0x1edf38: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1edf3c:
    // 0x1edf3c: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x1edf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_1edf40:
    // 0x1edf40: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1edf40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1edf44:
    // 0x1edf44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1edf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1edf48:
    // 0x1edf48: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1edf4c:
    if (ctx->pc == 0x1EDF4Cu) {
        ctx->pc = 0x1EDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF48u;
        // 0x1edf4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDF50u;
        goto label_1edf50;
    }
    ctx->pc = 0x1EDF48u;
    {
        const bool branch_taken_0x1edf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF48u;
        // 0x1edf4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf48) {
            ctx->pc = 0x1EDF94u;
            goto label_1edf94;
        }
    }
    ctx->pc = 0x1EDF50u;
label_1edf50:
    // 0x1edf50: 0x17c20010  bne         $fp, $v0, . + 4 + (0x10 << 2)
label_1edf54:
    if (ctx->pc == 0x1EDF54u) {
        ctx->pc = 0x1EDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF50u;
        // 0x1edf54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDF58u;
        goto label_1edf58;
    }
    ctx->pc = 0x1EDF50u;
    {
        const bool branch_taken_0x1edf50 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF50u;
        // 0x1edf54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf50) {
            ctx->pc = 0x1EDF94u;
            goto label_1edf94;
        }
    }
    ctx->pc = 0x1EDF58u;
label_1edf58:
    // 0x1edf58: 0xc05b420  jal         func_16D080
label_1edf5c:
    if (ctx->pc == 0x1EDF5Cu) {
        ctx->pc = 0x1EDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF58u;
        // 0x1edf5c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDF60u;
        goto label_1edf60;
    }
    ctx->pc = 0x1EDF58u;
    SET_GPR_U32(ctx, 31, 0x1EDF60u);
    ctx->pc = 0x1EDF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF58u;
    // 0x1edf5c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EDF60u;
label_1edf60:
    // 0x1edf60: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1edf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1edf64:
    // 0x1edf64: 0x8f848f48  lw          $a0, -0x70B8($gp)
    ctx->pc = 0x1edf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1edf68:
    // 0x1edf68: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1edf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1edf6c:
    // 0x1edf6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1edf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1edf70:
    // 0x1edf70: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1edf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1edf74:
    // 0x1edf74: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
label_1edf78:
    // 0x1edf78: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1edf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1edf7c:
    // 0x1edf7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1edf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1edf80:
    // 0x1edf80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1edf84:
    // 0x1edf84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1edf88:
    // 0x1edf88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edf8c:
    // 0x1edf8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edf90:
    // 0x1edf90: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1edf90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1edf94:
    // 0x1edf94: 0x0  nop
    ctx->pc = 0x1edf94u;
    // NOP
label_1edf98:
    // 0x1edf98: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1edf9c:
    // 0x1edf9c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1edf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1edfa0:
    // 0x1edfa0: 0x16620037  bne         $s3, $v0, . + 4 + (0x37 << 2)
label_1edfa4:
    if (ctx->pc == 0x1EDFA4u) {
        ctx->pc = 0x1EDFA8u;
        goto label_1edfa8;
    }
    ctx->pc = 0x1EDFA0u;
    {
        const bool branch_taken_0x1edfa0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edfa0) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EDFA8u;
label_1edfa8:
    // 0x1edfa8: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1edfa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1edfac:
    // 0x1edfac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1edfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1edfb0:
    // 0x1edfb0: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_1edfb4:
    // 0x1edfb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1edfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1edfb8:
    // 0x1edfb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1edfbc:
    if (ctx->pc == 0x1EDFBCu) {
        ctx->pc = 0x1EDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFB8u;
        // 0x1edfbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDFC0u;
        goto label_1edfc0;
    }
    ctx->pc = 0x1EDFB8u;
    {
        const bool branch_taken_0x1edfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFB8u;
        // 0x1edfbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfb8) {
            ctx->pc = 0x1EDFE4u;
            goto label_1edfe4;
        }
    }
    ctx->pc = 0x1EDFC0u;
label_1edfc0:
    // 0x1edfc0: 0xc05b420  jal         func_16D080
label_1edfc4:
    if (ctx->pc == 0x1EDFC4u) {
        ctx->pc = 0x1EDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFC0u;
        // 0x1edfc4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDFC8u;
        goto label_1edfc8;
    }
    ctx->pc = 0x1EDFC0u;
    SET_GPR_U32(ctx, 31, 0x1EDFC8u);
    ctx->pc = 0x1EDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFC0u;
    // 0x1edfc4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EDFC8u;
label_1edfc8:
    // 0x1edfc8: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1edfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1edfcc:
    // 0x1edfcc: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1edfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1edfd0:
    // 0x1edfd0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1edfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1edfd4:
    // 0x1edfd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edfd8:
    // 0x1edfd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1edfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1edfdc:
    // 0x1edfdc: 0x10000028  b           . + 4 + (0x28 << 2)
label_1edfe0:
    if (ctx->pc == 0x1EDFE0u) {
        ctx->pc = 0x1EDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFDCu;
        // 0x1edfe0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDFE4u;
        goto label_1edfe4;
    }
    ctx->pc = 0x1EDFDCu;
    {
        const bool branch_taken_0x1edfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFDCu;
        // 0x1edfe0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfdc) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EDFE4u;
label_1edfe4:
    // 0x1edfe4: 0x0  nop
    ctx->pc = 0x1edfe4u;
    // NOP
label_1edfe8:
    // 0x1edfe8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1edfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1edfec:
    // 0x1edfec: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x1edfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_1edff0:
    // 0x1edff0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1edff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1edff4:
    // 0x1edff4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1edff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1edff8:
    // 0x1edff8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1edffc:
    if (ctx->pc == 0x1EDFFCu) {
        ctx->pc = 0x1EDFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFF8u;
        // 0x1edffc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE000u;
        goto label_1ee000;
    }
    ctx->pc = 0x1EDFF8u;
    {
        const bool branch_taken_0x1edff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFF8u;
        // 0x1edffc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edff8) {
            ctx->pc = 0x1EE038u;
            goto label_1ee038;
        }
    }
    ctx->pc = 0x1EE000u;
label_1ee000:
    // 0x1ee000: 0xc05b420  jal         func_16D080
label_1ee004:
    if (ctx->pc == 0x1EE004u) {
        ctx->pc = 0x1EE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE000u;
        // 0x1ee004: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE008u;
        goto label_1ee008;
    }
    ctx->pc = 0x1EE000u;
    SET_GPR_U32(ctx, 31, 0x1EE008u);
    ctx->pc = 0x1EE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE000u;
    // 0x1ee004: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EE008u;
label_1ee008:
    // 0x1ee008: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1ee008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ee00c:
    // 0x1ee00c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ee00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ee010:
    // 0x1ee010: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ee010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee014:
    // 0x1ee014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ee014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ee018:
    // 0x1ee018: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ee01c:
    if (ctx->pc == 0x1EE01Cu) {
        ctx->pc = 0x1EE020u;
        goto label_1ee020;
    }
    ctx->pc = 0x1EE018u;
    {
        const bool branch_taken_0x1ee018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee018) {
            ctx->pc = 0x1EE02Cu;
            goto label_1ee02c;
        }
    }
    ctx->pc = 0x1EE020u;
label_1ee020:
    // 0x1ee020: 0x8f828f48  lw          $v0, -0x70B8($gp)
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ee024:
    // 0x1ee024: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ee028:
    if (ctx->pc == 0x1EE028u) {
        ctx->pc = 0x1EE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE024u;
        // 0x1ee028: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE02Cu;
        goto label_1ee02c;
    }
    ctx->pc = 0x1EE024u;
    {
        const bool branch_taken_0x1ee024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE024u;
        // 0x1ee028: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee024) {
            ctx->pc = 0x1EE030u;
            goto label_1ee030;
        }
    }
    ctx->pc = 0x1EE02Cu;
label_1ee02c:
    // 0x1ee02c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ee030:
    // 0x1ee030: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ee034:
    if (ctx->pc == 0x1EE034u) {
        ctx->pc = 0x1EE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE030u;
        // 0x1ee034: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE038u;
        goto label_1ee038;
    }
    ctx->pc = 0x1EE030u;
    {
        const bool branch_taken_0x1ee030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE030u;
        // 0x1ee034: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee030) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EE038u;
label_1ee038:
    // 0x1ee038: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ee038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ee03c:
    // 0x1ee03c: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x1ee03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_1ee040:
    // 0x1ee040: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1ee040u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1ee044:
    // 0x1ee044: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ee044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ee048:
    // 0x1ee048: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1ee04c:
    if (ctx->pc == 0x1EE04Cu) {
        ctx->pc = 0x1EE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE048u;
        // 0x1ee04c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE050u;
        goto label_1ee050;
    }
    ctx->pc = 0x1EE048u;
    {
        const bool branch_taken_0x1ee048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE048u;
        // 0x1ee04c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee048) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EE050u;
label_1ee050:
    // 0x1ee050: 0xc05b420  jal         func_16D080
label_1ee054:
    if (ctx->pc == 0x1EE054u) {
        ctx->pc = 0x1EE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE050u;
        // 0x1ee054: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE058u;
        goto label_1ee058;
    }
    ctx->pc = 0x1EE050u;
    SET_GPR_U32(ctx, 31, 0x1EE058u);
    ctx->pc = 0x1EE054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE050u;
    // 0x1ee054: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EE058u;
label_1ee058:
    // 0x1ee058: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ee05c:
    // 0x1ee05c: 0x8f838f48  lw          $v1, -0x70B8($gp)
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ee060:
    // 0x1ee060: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ee060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ee064:
    // 0x1ee064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ee064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee068:
    // 0x1ee068: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ee06c:
    // 0x1ee06c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee070:
    // 0x1ee070: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1ee074:
    if (ctx->pc == 0x1EE074u) {
        ctx->pc = 0x1EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE070u;
        // 0x1ee074: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE078u;
        goto label_1ee078;
    }
    ctx->pc = 0x1EE070u;
    {
        const bool branch_taken_0x1ee070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE070u;
        // 0x1ee074: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee070) {
            ctx->pc = 0x1EE07Cu;
            goto label_1ee07c;
        }
    }
    ctx->pc = 0x1EE078u;
label_1ee078:
    // 0x1ee078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee07c:
    // 0x1ee07c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ee07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ee080:
    // 0x1ee080: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1ee080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1ee084:
    // 0x1ee084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ee088:
    if (ctx->pc == 0x1EE088u) {
        ctx->pc = 0x1EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE084u;
        // 0x1ee088: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE08Cu;
        goto label_1ee08c;
    }
    ctx->pc = 0x1EE084u;
    {
        const bool branch_taken_0x1ee084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE084u;
        // 0x1ee088: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee084) {
            ctx->pc = 0x1EE0A0u;
            goto label_1ee0a0;
        }
    }
    ctx->pc = 0x1EE08Cu;
label_1ee08c:
    // 0x1ee08c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_1ee090:
    if (ctx->pc == 0x1EE090u) {
        ctx->pc = 0x1EE094u;
        goto label_1ee094;
    }
    ctx->pc = 0x1EE08Cu;
    {
        const bool branch_taken_0x1ee08c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee08c) {
            ctx->pc = 0x1EE0A0u;
            goto label_1ee0a0;
        }
    }
    ctx->pc = 0x1EE094u;
label_1ee094:
    // 0x1ee094: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ee094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ee098:
    // 0x1ee098: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1ee098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1ee09c:
    // 0x1ee09c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ee09cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ee0a0:
    // 0x1ee0a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ee0a4:
    // 0x1ee0a4: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1ee0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ee0a8:
    // 0x1ee0a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ee0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1ee0ac:
    // 0x1ee0ac: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
label_1ee0b0:
    if (ctx->pc == 0x1EE0B0u) {
        ctx->pc = 0x1EE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0ACu;
        // 0x1ee0b0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0B4u;
        goto label_1ee0b4;
    }
    ctx->pc = 0x1EE0ACu;
    {
        const bool branch_taken_0x1ee0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0ACu;
        // 0x1ee0b0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0ac) {
            ctx->pc = 0x1EDE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1ede58; return; }
        }
    }
    ctx->pc = 0x1EE0B4u;
label_1ee0b4:
    // 0x1ee0b4: 0x0  nop
    ctx->pc = 0x1ee0b4u;
    // NOP
label_1ee0b8:
    // 0x1ee0b8: 0x8f828f3c  lw          $v0, -0x70C4($gp)
    ctx->pc = 0x1ee0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938428)));
label_1ee0bc:
    // 0x1ee0bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1ee0c0:
    if (ctx->pc == 0x1EE0C0u) {
        ctx->pc = 0x1EE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0BCu;
        // 0x1ee0c0: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0C4u;
        goto label_1ee0c4;
    }
    ctx->pc = 0x1EE0BCu;
    {
        const bool branch_taken_0x1ee0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0BCu;
        // 0x1ee0c0: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0bc) {
            ctx->pc = 0x1EE10Cu;
            goto label_1ee10c;
        }
    }
    ctx->pc = 0x1EE0C4u;
label_1ee0c4:
    // 0x1ee0c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ee0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ee0c8:
    // 0x1ee0c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee0cc:
    // 0x1ee0cc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_1ee0d0:
    if (ctx->pc == 0x1EE0D0u) {
        ctx->pc = 0x1EE0D4u;
        goto label_1ee0d4;
    }
    ctx->pc = 0x1EE0CCu;
    {
        const bool branch_taken_0x1ee0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee0cc) {
            ctx->pc = 0x1EE0E0u;
            goto label_1ee0e0;
        }
    }
    ctx->pc = 0x1EE0D4u;
label_1ee0d4:
    // 0x1ee0d4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1ee0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1ee0d8:
    // 0x1ee0d8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_1ee0dc:
    if (ctx->pc == 0x1EE0DCu) {
        ctx->pc = 0x1EE0E0u;
        goto label_1ee0e0;
    }
    ctx->pc = 0x1EE0D8u;
    {
        const bool branch_taken_0x1ee0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee0d8) {
            ctx->pc = 0x1EE108u;
            goto label_1ee108;
        }
    }
    ctx->pc = 0x1EE0E0u;
label_1ee0e0:
    // 0x1ee0e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ee0e4:
    // 0x1ee0e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee0e8:
    // 0x1ee0e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ee0ec:
    if (ctx->pc == 0x1EE0ECu) {
        ctx->pc = 0x1EE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0E8u;
        // 0x1ee0ec: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0F0u;
        goto label_1ee0f0;
    }
    ctx->pc = 0x1EE0E8u;
    {
        const bool branch_taken_0x1ee0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0E8u;
        // 0x1ee0ec: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0e8) {
            ctx->pc = 0x1EE100u;
            goto label_1ee100;
        }
    }
    ctx->pc = 0x1EE0F0u;
label_1ee0f0:
    // 0x1ee0f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee0f4:
    // 0x1ee0f4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ee0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1ee0f8:
    // 0x1ee0f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ee0fc:
    if (ctx->pc == 0x1EE0FCu) {
        ctx->pc = 0x1EE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F8u;
        // 0x1ee0fc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE100u;
        goto label_1ee100;
    }
    ctx->pc = 0x1EE0F8u;
    {
        const bool branch_taken_0x1ee0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F8u;
        // 0x1ee0fc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0f8) {
            ctx->pc = 0x1EE108u;
            goto label_1ee108;
        }
    }
    ctx->pc = 0x1EE100u;
label_1ee100:
    // 0x1ee100: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ee100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1ee104:
    // 0x1ee104: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1ee104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_1ee108:
    // 0x1ee108: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1ee108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ee10c:
    // 0x1ee10c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1ee110:
    if (ctx->pc == 0x1EE110u) {
        ctx->pc = 0x1EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE10Cu;
        // 0x1ee110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE114u;
        goto label_1ee114;
    }
    ctx->pc = 0x1EE10Cu;
    {
        const bool branch_taken_0x1ee10c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE10Cu;
        // 0x1ee110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee10c) {
            ctx->pc = 0x1EE158u;
            goto label_1ee158;
        }
    }
    ctx->pc = 0x1EE114u;
label_1ee114:
    // 0x1ee114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee118:
    // 0x1ee118: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ee118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ee11c:
    // 0x1ee11c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ee11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee120:
    // 0x1ee120: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ee124:
    // 0x1ee124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee128:
    // 0x1ee128: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1ee12c:
    if (ctx->pc == 0x1EE12Cu) {
        ctx->pc = 0x1EE130u;
        goto label_1ee130;
    }
    ctx->pc = 0x1EE128u;
    {
        const bool branch_taken_0x1ee128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee128) {
            ctx->pc = 0x1EE148u;
            goto label_1ee148;
        }
    }
    ctx->pc = 0x1EE130u;
label_1ee130:
    // 0x1ee130: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1ee134:
    // 0x1ee134: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1ee134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1ee138:
    // 0x1ee138: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ee138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ee13c:
    // 0x1ee13c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ee140:
    // 0x1ee140: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee144:
    if (ctx->pc == 0x1EE144u) {
        ctx->pc = 0x1EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE140u;
        // 0x1ee144: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE148u;
        goto label_1ee148;
    }
    ctx->pc = 0x1EE140u;
    {
        const bool branch_taken_0x1ee140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE140u;
        // 0x1ee144: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee140) {
            ctx->pc = 0x1EE158u;
            goto label_1ee158;
        }
    }
    ctx->pc = 0x1EE148u;
label_1ee148:
    // 0x1ee148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ee14c:
    // 0x1ee14c: 0xd6102a  slt         $v0, $a2, $s6
    ctx->pc = 0x1ee14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ee150:
    // 0x1ee150: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1ee154:
    if (ctx->pc == 0x1EE154u) {
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE158u;
        goto label_1ee158;
    }
    ctx->pc = 0x1EE150u;
    {
        const bool branch_taken_0x1ee150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee150) {
            ctx->pc = 0x1EE120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee120;
        }
    }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1ee158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee15c:
    // 0x1ee15c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ee15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ee160:
    // 0x1ee160: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ee160u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ee164:
    // 0x1ee164: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ee164u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ee168:
    // 0x1ee168: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ee168u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ee16c:
    // 0x1ee16c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ee16cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee170:
    // 0x1ee170: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee174:
    // 0x1ee174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee178:
    // 0x1ee178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee17c:
    // 0x1ee17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee180:
    // 0x1ee180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee184:
    // 0x1ee184: 0x3e00008  jr          $ra
label_1ee188:
    if (ctx->pc == 0x1EE188u) {
        ctx->pc = 0x1EE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE184u;
        // 0x1ee188: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE18Cu;
        goto label_1ee18c;
    }
    ctx->pc = 0x1EE184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE184u;
        // 0x1ee188: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE18Cu;
label_1ee18c:
    // 0x1ee18c: 0x0  nop
    ctx->pc = 0x1ee18cu;
    // NOP
label_1ee190:
    // 0x1ee190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee194:
    // 0x1ee194: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee198:
    // 0x1ee198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee19c:
    // 0x1ee19c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ee1a0:
    // 0x1ee1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee1a4:
    // 0x1ee1a4: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1ee1a8:
    // 0x1ee1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee1ac:
    // 0x1ee1ac: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee1acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1ee1b0:
    // 0x1ee1b0: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1ee1b4:
    // 0x1ee1b4: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1ee1b8:
    // 0x1ee1b8: 0xc07aa5c  jal         func_1EA970
label_1ee1bc:
    if (ctx->pc == 0x1EE1BCu) {
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C0u;
        goto label_1ee1c0;
    }
    ctx->pc = 0x1EE1B8u;
    SET_GPR_U32(ctx, 31, 0x1EE1C0u);
    ctx->pc = 0x1EE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1B8u;
    // 0x1ee1bc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1EE1C0u;
label_1ee1c0:
    // 0x1ee1c0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee1c4:
    // 0x1ee1c4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ee1c8:
    // 0x1ee1c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1cc:
    // 0x1ee1cc: 0xc07aa7c  jal         func_1EA9F0
label_1ee1d0:
    if (ctx->pc == 0x1EE1D0u) {
        ctx->pc = 0x1EE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1CCu;
        // 0x1ee1d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1D4u;
        goto label_1ee1d4;
    }
    ctx->pc = 0x1EE1CCu;
    SET_GPR_U32(ctx, 31, 0x1EE1D4u);
    ctx->pc = 0x1EE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1CCu;
    // 0x1ee1d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1EE1D4u;
label_1ee1d4:
    // 0x1ee1d4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ee1d8:
    // 0x1ee1d8: 0xc07aaa8  jal         func_1EAAA0
label_1ee1dc:
    if (ctx->pc == 0x1EE1DCu) {
        ctx->pc = 0x1EE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1D8u;
        // 0x1ee1dc: 0x2484d0d0  addiu       $a0, $a0, -0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1E0u;
        goto label_1ee1e0;
    }
    ctx->pc = 0x1EE1D8u;
    SET_GPR_U32(ctx, 31, 0x1EE1E0u);
    ctx->pc = 0x1EE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1D8u;
    // 0x1ee1dc: 0x2484d0d0  addiu       $a0, $a0, -0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1EE1E0u;
label_1ee1e0:
    // 0x1ee1e0: 0xc07ab08  jal         func_1EAC20
label_1ee1e4:
    if (ctx->pc == 0x1EE1E4u) {
        ctx->pc = 0x1EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1E0u;
        // 0x1ee1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1E8u;
        goto label_1ee1e8;
    }
    ctx->pc = 0x1EE1E0u;
    SET_GPR_U32(ctx, 31, 0x1EE1E8u);
    ctx->pc = 0x1EE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1E0u;
    // 0x1ee1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1EE1E8u;
label_1ee1e8:
    // 0x1ee1e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1ec:
    // 0x1ee1ec: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee1f0:
    // 0x1ee1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee1f4:
    if (ctx->pc == 0x1EE1F4u) {
        ctx->pc = 0x1EE1F8u;
        goto label_1ee1f8;
    }
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1F8u;
label_1ee1f8:
    // 0x1ee1f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ee1fc:
    if (ctx->pc == 0x1EE1FCu) {
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F8u;
        // 0x1ee1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE200u;
        goto label_1ee200;
    }
    ctx->pc = 0x1EE1F8u;
    {
        const bool branch_taken_0x1ee1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F8u;
        // 0x1ee1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f8) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE200u;
label_1ee200:
    // 0x1ee200: 0xc07ab38  jal         func_1EACE0
label_1ee204:
    if (ctx->pc == 0x1EE204u) {
        ctx->pc = 0x1EE208u;
        goto label_1ee208;
    }
    ctx->pc = 0x1EE200u;
    SET_GPR_U32(ctx, 31, 0x1EE208u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE208u;
label_1ee208:
    // 0x1ee208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee20c:
    // 0x1ee20c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1ee210:
    if (ctx->pc == 0x1EE210u) {
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2a21003d  slti        $at, $s1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE214u;
        goto label_1ee214;
    }
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2a21003d  slti        $at, $s1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE240u;
            goto label_1ee240;
        }
    }
    ctx->pc = 0x1EE214u;
label_1ee214:
    // 0x1ee214: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ee218:
    if (ctx->pc == 0x1EE218u) {
        ctx->pc = 0x1EE21Cu;
        goto label_1ee21c;
    }
    ctx->pc = 0x1EE214u;
    {
        const bool branch_taken_0x1ee214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee214) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE21Cu;
label_1ee21c:
    // 0x1ee21c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ee220:
    // 0x1ee220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ee224:
    if (ctx->pc == 0x1EE224u) {
        ctx->pc = 0x1EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE220u;
        // 0x1ee224: 0x2a210079  slti        $at, $s1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE228u;
        goto label_1ee228;
    }
    ctx->pc = 0x1EE220u;
    {
        const bool branch_taken_0x1ee220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE220u;
        // 0x1ee224: 0x2a210079  slti        $at, $s1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee220) {
            ctx->pc = 0x1EE230u;
            goto label_1ee230;
        }
    }
    ctx->pc = 0x1EE228u;
label_1ee228:
    // 0x1ee228: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1ee22c:
    if (ctx->pc == 0x1EE22Cu) {
        ctx->pc = 0x1EE230u;
        goto label_1ee230;
    }
    ctx->pc = 0x1EE228u;
    {
        const bool branch_taken_0x1ee228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee228) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE230u;
label_1ee230:
    // 0x1ee230: 0xc07ab18  jal         func_1EAC60
label_1ee234:
    if (ctx->pc == 0x1EE234u) {
        ctx->pc = 0x1EE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE230u;
        // 0x1ee234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE238u;
        goto label_1ee238;
    }
    ctx->pc = 0x1EE230u;
    SET_GPR_U32(ctx, 31, 0x1EE238u);
    ctx->pc = 0x1EE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE230u;
    // 0x1ee234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE238u;
label_1ee238:
    // 0x1ee238: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee23c:
    if (ctx->pc == 0x1EE23Cu) {
        ctx->pc = 0x1EE240u;
        goto label_1ee240;
    }
    ctx->pc = 0x1EE238u;
    {
        const bool branch_taken_0x1ee238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee238) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE240u;
label_1ee240:
    // 0x1ee240: 0xc07ab38  jal         func_1EACE0
label_1ee244:
    if (ctx->pc == 0x1EE244u) {
        ctx->pc = 0x1EE248u;
        goto label_1ee248;
    }
    ctx->pc = 0x1EE240u;
    SET_GPR_U32(ctx, 31, 0x1EE248u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ee24c:
    if (ctx->pc == 0x1EE24Cu) {
        ctx->pc = 0x1EE250u;
        goto label_1ee250;
    }
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE250u;
label_1ee250:
    // 0x1ee250: 0xc07b48c  jal         func_1ED230
label_1ee254:
    if (ctx->pc == 0x1EE254u) {
        ctx->pc = 0x1EE258u;
        goto label_1ee258;
    }
    ctx->pc = 0x1EE250u;
    SET_GPR_U32(ctx, 31, 0x1EE258u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EE258u;
label_1ee258:
    // 0x1ee258: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_1ee25c:
    if (ctx->pc == 0x1EE25Cu) {
        ctx->pc = 0x1EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE258u;
        // 0x1ee25c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE260u;
        goto label_1ee260;
    }
    ctx->pc = 0x1EE258u;
    {
        const bool branch_taken_0x1ee258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE258u;
        // 0x1ee25c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee258) {
            ctx->pc = 0x1EE1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee1ec;
        }
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee264:
    // 0x1ee264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee268:
    // 0x1ee268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee26c:
    // 0x1ee26c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee270:
    // 0x1ee270: 0x3e00008  jr          $ra
label_1ee274:
    if (ctx->pc == 0x1EE274u) {
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE270u;
        // 0x1ee274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE278u;
        goto label_1ee278;
    }
    ctx->pc = 0x1EE270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE270u;
        // 0x1ee274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE278u;
label_1ee278:
    // 0x1ee278: 0x0  nop
    ctx->pc = 0x1ee278u;
    // NOP
label_1ee27c:
    // 0x1ee27c: 0x0  nop
    ctx->pc = 0x1ee27cu;
    // NOP
label_1ee280:
    // 0x1ee280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee284:
    // 0x1ee284: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ee288:
    // 0x1ee288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee28c:
    // 0x1ee28c: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1ee28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1ee290:
    // 0x1ee290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee294:
    // 0x1ee294: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1ee298:
    // 0x1ee298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee29c:
    // 0x1ee29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee2a0:
    // 0x1ee2a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee2a4:
    // 0x1ee2a4: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1ee2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1ee2a8:
    // 0x1ee2a8: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1ee2ac:
    // 0x1ee2ac: 0xc07aa5c  jal         func_1EA970
label_1ee2b0:
    if (ctx->pc == 0x1EE2B0u) {
        ctx->pc = 0x1EE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2ACu;
        // 0x1ee2b0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2B4u;
        goto label_1ee2b4;
    }
    ctx->pc = 0x1EE2ACu;
    SET_GPR_U32(ctx, 31, 0x1EE2B4u);
    ctx->pc = 0x1EE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2ACu;
    // 0x1ee2b0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1EE2B4u;
label_1ee2b4:
    // 0x1ee2b4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee2b8:
    // 0x1ee2b8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ee2bc:
    // 0x1ee2bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2c0:
    // 0x1ee2c0: 0xc07aa7c  jal         func_1EA9F0
label_1ee2c4:
    if (ctx->pc == 0x1EE2C4u) {
        ctx->pc = 0x1EE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2C0u;
        // 0x1ee2c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2C8u;
        goto label_1ee2c8;
    }
    ctx->pc = 0x1EE2C0u;
    SET_GPR_U32(ctx, 31, 0x1EE2C8u);
    ctx->pc = 0x1EE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2C0u;
    // 0x1ee2c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1EE2C8u;
label_1ee2c8:
    // 0x1ee2c8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ee2cc:
    // 0x1ee2cc: 0xc07aaa8  jal         func_1EAAA0
label_1ee2d0:
    if (ctx->pc == 0x1EE2D0u) {
        ctx->pc = 0x1EE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2CCu;
        // 0x1ee2d0: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2D4u;
        goto label_1ee2d4;
    }
    ctx->pc = 0x1EE2CCu;
    SET_GPR_U32(ctx, 31, 0x1EE2D4u);
    ctx->pc = 0x1EE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2CCu;
    // 0x1ee2d0: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1EE2D4u;
label_1ee2d4:
    // 0x1ee2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2d8:
    // 0x1ee2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2dc:
    // 0x1ee2dc: 0xc07aa94  jal         func_1EAA50
label_1ee2e0:
    if (ctx->pc == 0x1EE2E0u) {
        ctx->pc = 0x1EE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2DCu;
        // 0x1ee2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2E4u;
        goto label_1ee2e4;
    }
    ctx->pc = 0x1EE2DCu;
    SET_GPR_U32(ctx, 31, 0x1EE2E4u);
    ctx->pc = 0x1EE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2DCu;
    // 0x1ee2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1EE2E4u;
label_1ee2e4:
    // 0x1ee2e4: 0xc07ab08  jal         func_1EAC20
label_1ee2e8:
    if (ctx->pc == 0x1EE2E8u) {
        ctx->pc = 0x1EE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2E4u;
        // 0x1ee2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2ECu;
        goto label_1ee2ec;
    }
    ctx->pc = 0x1EE2E4u;
    SET_GPR_U32(ctx, 31, 0x1EE2ECu);
    ctx->pc = 0x1EE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2E4u;
    // 0x1ee2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1EE2ECu;
label_1ee2ec:
    // 0x1ee2ec: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee2f0:
    // 0x1ee2f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee2f4:
    if (ctx->pc == 0x1EE2F4u) {
        ctx->pc = 0x1EE2F8u;
        goto label_1ee2f8;
    }
    ctx->pc = 0x1EE2F0u;
    {
        const bool branch_taken_0x1ee2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2f0) {
            ctx->pc = 0x1EE300u;
            goto label_1ee300;
        }
    }
    ctx->pc = 0x1EE2F8u;
label_1ee2f8:
    // 0x1ee2f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ee2fc:
    if (ctx->pc == 0x1EE2FCu) {
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F8u;
        // 0x1ee2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE300u;
        goto label_1ee300;
    }
    ctx->pc = 0x1EE2F8u;
    {
        const bool branch_taken_0x1ee2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F8u;
        // 0x1ee2fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2f8) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE300u;
label_1ee300:
    // 0x1ee300: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1ee304:
    // 0x1ee304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee308:
    if (ctx->pc == 0x1EE308u) {
        ctx->pc = 0x1EE30Cu;
        goto label_1ee30c;
    }
    ctx->pc = 0x1EE304u;
    {
        const bool branch_taken_0x1ee304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee304) {
            ctx->pc = 0x1EE314u;
            goto label_1ee314;
        }
    }
    ctx->pc = 0x1EE30Cu;
label_1ee30c:
    // 0x1ee30c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1ee310:
    if (ctx->pc == 0x1EE310u) {
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE314u;
        goto label_1ee314;
    }
    ctx->pc = 0x1EE30Cu;
    {
        const bool branch_taken_0x1ee30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee30c) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE314u;
label_1ee314:
    // 0x1ee314: 0xc07ab38  jal         func_1EACE0
label_1ee318:
    if (ctx->pc == 0x1EE318u) {
        ctx->pc = 0x1EE31Cu;
        goto label_1ee31c;
    }
    ctx->pc = 0x1EE314u;
    SET_GPR_U32(ctx, 31, 0x1EE31Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE31Cu;
label_1ee31c:
    // 0x1ee31c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee320:
    // 0x1ee320: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1ee324:
    if (ctx->pc == 0x1EE324u) {
        ctx->pc = 0x1EE328u;
        goto label_1ee328;
    }
    ctx->pc = 0x1EE320u;
    {
        const bool branch_taken_0x1ee320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee320) {
            ctx->pc = 0x1EE36Cu;
            goto label_1ee36c;
        }
    }
    ctx->pc = 0x1EE328u;
label_1ee328:
    // 0x1ee328: 0xc07aaa4  jal         func_1EAA90
label_1ee32c:
    if (ctx->pc == 0x1EE32Cu) {
        ctx->pc = 0x1EE330u;
        goto label_1ee330;
    }
    ctx->pc = 0x1EE328u;
    SET_GPR_U32(ctx, 31, 0x1EE330u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x1EE330u;
label_1ee330:
    // 0x1ee330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee334:
    // 0x1ee334: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1ee338:
    if (ctx->pc == 0x1EE338u) {
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE334u;
        // 0x1ee338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE33Cu;
        goto label_1ee33c;
    }
    ctx->pc = 0x1EE334u;
    {
        const bool branch_taken_0x1ee334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE334u;
        // 0x1ee338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee334) {
            ctx->pc = 0x1EE34Cu;
            goto label_1ee34c;
        }
    }
    ctx->pc = 0x1EE33Cu;
label_1ee33c:
    // 0x1ee33c: 0xc07ab18  jal         func_1EAC60
label_1ee340:
    if (ctx->pc == 0x1EE340u) {
        ctx->pc = 0x1EE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE33Cu;
        // 0x1ee340: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE344u;
        goto label_1ee344;
    }
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE33Cu;
    // 0x1ee340: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ee348:
    if (ctx->pc == 0x1EE348u) {
        ctx->pc = 0x1EE34Cu;
        goto label_1ee34c;
    }
    ctx->pc = 0x1EE344u;
    {
        const bool branch_taken_0x1ee344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee344) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE34Cu;
label_1ee34c:
    // 0x1ee34c: 0x0  nop
    ctx->pc = 0x1ee34cu;
    // NOP
label_1ee350:
    // 0x1ee350: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee354:
    // 0x1ee354: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1ee358:
    if (ctx->pc == 0x1EE358u) {
        ctx->pc = 0x1EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE354u;
        // 0x1ee358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE35Cu;
        goto label_1ee35c;
    }
    ctx->pc = 0x1EE354u;
    {
        const bool branch_taken_0x1ee354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE354u;
        // 0x1ee358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee354) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE35Cu;
label_1ee35c:
    // 0x1ee35c: 0xc07ab18  jal         func_1EAC60
label_1ee360:
    if (ctx->pc == 0x1EE360u) {
        ctx->pc = 0x1EE364u;
        goto label_1ee364;
    }
    ctx->pc = 0x1EE35Cu;
    SET_GPR_U32(ctx, 31, 0x1EE364u);
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ee368:
    if (ctx->pc == 0x1EE368u) {
        ctx->pc = 0x1EE36Cu;
        goto label_1ee36c;
    }
    ctx->pc = 0x1EE364u;
    {
        const bool branch_taken_0x1ee364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee364) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE36Cu;
label_1ee36c:
    // 0x1ee36c: 0x0  nop
    ctx->pc = 0x1ee36cu;
    // NOP
label_1ee370:
    // 0x1ee370: 0xc07ab38  jal         func_1EACE0
label_1ee374:
    if (ctx->pc == 0x1EE374u) {
        ctx->pc = 0x1EE378u;
        goto label_1ee378;
    }
    ctx->pc = 0x1EE370u;
    SET_GPR_U32(ctx, 31, 0x1EE378u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE378u;
label_1ee378:
    // 0x1ee378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ee37c:
    if (ctx->pc == 0x1EE37Cu) {
        ctx->pc = 0x1EE380u;
        goto label_1ee380;
    }
    ctx->pc = 0x1EE378u;
    {
        const bool branch_taken_0x1ee378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee378) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE380u;
label_1ee380:
    // 0x1ee380: 0xc07b48c  jal         func_1ED230
label_1ee384:
    if (ctx->pc == 0x1EE384u) {
        ctx->pc = 0x1EE388u;
        goto label_1ee388;
    }
    ctx->pc = 0x1EE380u;
    SET_GPR_U32(ctx, 31, 0x1EE388u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EE388u;
label_1ee388:
    // 0x1ee388: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_1ee38c:
    if (ctx->pc == 0x1EE38Cu) {
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE388u;
        // 0x1ee38c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE390u;
        goto label_1ee390;
    }
    ctx->pc = 0x1EE388u;
    {
        const bool branch_taken_0x1ee388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE388u;
        // 0x1ee38c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee388) {
            ctx->pc = 0x1EE2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee2f0;
        }
    }
    ctx->pc = 0x1EE390u;
label_1ee390:
    // 0x1ee390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee394:
    // 0x1ee394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee398:
    // 0x1ee398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee39c:
    // 0x1ee39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee3a0:
    // 0x1ee3a0: 0x3e00008  jr          $ra
label_1ee3a4:
    if (ctx->pc == 0x1EE3A4u) {
        ctx->pc = 0x1EE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3A0u;
        // 0x1ee3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE3A8u;
        goto label_1ee3a8;
    }
    ctx->pc = 0x1EE3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3A0u;
        // 0x1ee3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE3A8u;
label_1ee3a8:
    // 0x1ee3a8: 0x0  nop
    ctx->pc = 0x1ee3a8u;
    // NOP
label_1ee3ac:
    // 0x1ee3ac: 0x0  nop
    ctx->pc = 0x1ee3acu;
    // NOP
label_1ee3b0:
    // 0x1ee3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ee3b4:
    // 0x1ee3b4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ee3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ee3b8:
    // 0x1ee3b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ee3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ee3bc:
    // 0x1ee3bc: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ee3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1ee3c0:
    // 0x1ee3c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ee3c4:
    // 0x1ee3c4: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1ee3c8:
    // 0x1ee3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ee3cc:
    // 0x1ee3cc: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1ee3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1ee3d0:
    // 0x1ee3d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ee3d4:
    // 0x1ee3d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ee3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3d8:
    // 0x1ee3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee3dc:
    // 0x1ee3dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee3e0:
    // 0x1ee3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee3e4:
    // 0x1ee3e4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1ee3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ee3e8:
    // 0x1ee3e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3ec:
    // 0x1ee3ec: 0xc07aa5c  jal         func_1EA970
label_1ee3f0:
    if (ctx->pc == 0x1EE3F0u) {
        ctx->pc = 0x1EE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3ECu;
        // 0x1ee3f0: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE3F4u;
        goto label_1ee3f4;
    }
    ctx->pc = 0x1EE3ECu;
    SET_GPR_U32(ctx, 31, 0x1EE3F4u);
    ctx->pc = 0x1EE3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3ECu;
    // 0x1ee3f0: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1EE3F4u;
label_1ee3f4:
    // 0x1ee3f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ee3f8:
    // 0x1ee3f8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ee3fc:
    // 0x1ee3fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee400:
    // 0x1ee400: 0xc07aa7c  jal         func_1EA9F0
label_1ee404:
    if (ctx->pc == 0x1EE404u) {
        ctx->pc = 0x1EE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE400u;
        // 0x1ee404: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE408u;
        goto label_1ee408;
    }
    ctx->pc = 0x1EE400u;
    SET_GPR_U32(ctx, 31, 0x1EE408u);
    ctx->pc = 0x1EE404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE400u;
    // 0x1ee404: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1EE408u;
label_1ee408:
    // 0x1ee408: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ee40c:
    // 0x1ee40c: 0xc07aaa8  jal         func_1EAAA0
label_1ee410:
    if (ctx->pc == 0x1EE410u) {
        ctx->pc = 0x1EE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE40Cu;
        // 0x1ee410: 0x2484d140  addiu       $a0, $a0, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE414u;
        goto label_1ee414;
    }
    ctx->pc = 0x1EE40Cu;
    SET_GPR_U32(ctx, 31, 0x1EE414u);
    ctx->pc = 0x1EE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE40Cu;
    // 0x1ee410: 0x2484d140  addiu       $a0, $a0, -0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1EE414u;
label_1ee414:
    // 0x1ee414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee418:
    // 0x1ee418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee41c:
    // 0x1ee41c: 0xc07aa94  jal         func_1EAA50
label_1ee420:
    if (ctx->pc == 0x1EE420u) {
        ctx->pc = 0x1EE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE41Cu;
        // 0x1ee420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE424u;
        goto label_1ee424;
    }
    ctx->pc = 0x1EE41Cu;
    SET_GPR_U32(ctx, 31, 0x1EE424u);
    ctx->pc = 0x1EE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE41Cu;
    // 0x1ee420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1EE424u;
label_1ee424:
    // 0x1ee424: 0xc07ab08  jal         func_1EAC20
label_1ee428:
    if (ctx->pc == 0x1EE428u) {
        ctx->pc = 0x1EE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE424u;
        // 0x1ee428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE42Cu;
        goto label_1ee42c;
    }
    ctx->pc = 0x1EE424u;
    SET_GPR_U32(ctx, 31, 0x1EE42Cu);
    ctx->pc = 0x1EE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE424u;
    // 0x1ee428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1EE42Cu;
label_1ee42c:
    // 0x1ee42c: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1ee430:
    // 0x1ee430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee434:
    if (ctx->pc == 0x1EE434u) {
        ctx->pc = 0x1EE438u;
        goto label_1ee438;
    }
    ctx->pc = 0x1EE430u;
    {
        const bool branch_taken_0x1ee430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee430) {
            ctx->pc = 0x1EE440u;
            goto label_1ee440;
        }
    }
    ctx->pc = 0x1EE438u;
label_1ee438:
    // 0x1ee438: 0x10000040  b           . + 4 + (0x40 << 2)
label_1ee43c:
    if (ctx->pc == 0x1EE43Cu) {
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE440u;
        goto label_1ee440;
    }
    ctx->pc = 0x1EE438u;
    {
        const bool branch_taken_0x1ee438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee438) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1ee444:
    // 0x1ee444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee448:
    if (ctx->pc == 0x1EE448u) {
        ctx->pc = 0x1EE44Cu;
        goto label_1ee44c;
    }
    ctx->pc = 0x1EE444u;
    {
        const bool branch_taken_0x1ee444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee444) {
            ctx->pc = 0x1EE454u;
            goto label_1ee454;
        }
    }
    ctx->pc = 0x1EE44Cu;
label_1ee44c:
    // 0x1ee44c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ee450:
    if (ctx->pc == 0x1EE450u) {
        ctx->pc = 0x1EE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE44Cu;
        // 0x1ee450: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE454u;
        goto label_1ee454;
    }
    ctx->pc = 0x1EE44Cu;
    {
        const bool branch_taken_0x1ee44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE44Cu;
        // 0x1ee450: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee44c) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE454u;
label_1ee454:
    // 0x1ee454: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
label_1ee458:
    if (ctx->pc == 0x1EE458u) {
        ctx->pc = 0x1EE45Cu;
        goto label_1ee45c;
    }
    ctx->pc = 0x1EE454u;
    {
        const bool branch_taken_0x1ee454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee454) {
            ctx->pc = 0x1EE4CCu;
            goto label_1ee4cc;
        }
    }
    ctx->pc = 0x1EE45Cu;
label_1ee45c:
    // 0x1ee45c: 0xc07ab38  jal         func_1EACE0
label_1ee460:
    if (ctx->pc == 0x1EE460u) {
        ctx->pc = 0x1EE464u;
        goto label_1ee464;
    }
    ctx->pc = 0x1EE45Cu;
    SET_GPR_U32(ctx, 31, 0x1EE464u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE464u;
label_1ee464:
    // 0x1ee464: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee468:
    // 0x1ee468: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_1ee46c:
    if (ctx->pc == 0x1EE46Cu) {
        ctx->pc = 0x1EE470u;
        goto label_1ee470;
    }
    ctx->pc = 0x1EE468u;
    {
        const bool branch_taken_0x1ee468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee468) {
            ctx->pc = 0x1EE4A8u;
            goto label_1ee4a8;
        }
    }
    ctx->pc = 0x1EE470u;
label_1ee470:
    // 0x1ee470: 0xc07aaa4  jal         func_1EAA90
label_1ee474:
    if (ctx->pc == 0x1EE474u) {
        ctx->pc = 0x1EE478u;
        goto label_1ee478;
    }
    ctx->pc = 0x1EE470u;
    SET_GPR_U32(ctx, 31, 0x1EE478u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x1EE478u;
label_1ee478:
    // 0x1ee478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee47c:
    // 0x1ee47c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee480:
    // 0x1ee480: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1ee484:
    if (ctx->pc == 0x1EE484u) {
        ctx->pc = 0x1EE488u;
        goto label_1ee488;
    }
    ctx->pc = 0x1EE480u;
    {
        const bool branch_taken_0x1ee480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ee480) {
            ctx->pc = 0x1EE494u;
            goto label_1ee494;
        }
    }
    ctx->pc = 0x1EE488u;
label_1ee488:
    // 0x1ee488: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee48c:
    // 0x1ee48c: 0x16220027  bne         $s1, $v0, . + 4 + (0x27 << 2)
label_1ee490:
    if (ctx->pc == 0x1EE490u) {
        ctx->pc = 0x1EE494u;
        goto label_1ee494;
    }
    ctx->pc = 0x1EE48Cu;
    {
        const bool branch_taken_0x1ee48c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee48c) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE494u;
label_1ee494:
    // 0x1ee494: 0x0  nop
    ctx->pc = 0x1ee494u;
    // NOP
label_1ee498:
    // 0x1ee498: 0xc07ab18  jal         func_1EAC60
label_1ee49c:
    if (ctx->pc == 0x1EE49Cu) {
        ctx->pc = 0x1EE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE498u;
        // 0x1ee49c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4A0u;
        goto label_1ee4a0;
    }
    ctx->pc = 0x1EE498u;
    SET_GPR_U32(ctx, 31, 0x1EE4A0u);
    ctx->pc = 0x1EE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE498u;
    // 0x1ee49c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1EE4A0u;
label_1ee4a0:
    // 0x1ee4a0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1ee4a4:
    if (ctx->pc == 0x1EE4A4u) {
        ctx->pc = 0x1EE4A8u;
        goto label_1ee4a8;
    }
    ctx->pc = 0x1EE4A0u;
    {
        const bool branch_taken_0x1ee4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4a0) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4A8u;
label_1ee4a8:
    // 0x1ee4a8: 0xc07ab38  jal         func_1EACE0
label_1ee4ac:
    if (ctx->pc == 0x1EE4ACu) {
        ctx->pc = 0x1EE4B0u;
        goto label_1ee4b0;
    }
    ctx->pc = 0x1EE4A8u;
    SET_GPR_U32(ctx, 31, 0x1EE4B0u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1EE4B0u;
label_1ee4b0:
    // 0x1ee4b0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ee4b4:
    if (ctx->pc == 0x1EE4B4u) {
        ctx->pc = 0x1EE4B8u;
        goto label_1ee4b8;
    }
    ctx->pc = 0x1EE4B0u;
    {
        const bool branch_taken_0x1ee4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4b0) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4B8u;
label_1ee4b8:
    // 0x1ee4b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ee4bc:
    // 0x1ee4bc: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
label_1ee4c0:
    if (ctx->pc == 0x1EE4C0u) {
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4C4u;
        goto label_1ee4c4;
    }
    ctx->pc = 0x1EE4BCu;
    {
        const bool branch_taken_0x1ee4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4bc) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE4C4u;
label_1ee4c4:
    // 0x1ee4c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ee4c8:
    if (ctx->pc == 0x1EE4C8u) {
        ctx->pc = 0x1EE4CCu;
        goto label_1ee4cc;
    }
    ctx->pc = 0x1EE4C4u;
    {
        const bool branch_taken_0x1ee4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4c4) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4CCu;
label_1ee4cc:
    // 0x1ee4cc: 0x0  nop
    ctx->pc = 0x1ee4ccu;
    // NOP
label_1ee4d0:
    // 0x1ee4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee4d4:
    // 0x1ee4d4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1ee4d8:
    if (ctx->pc == 0x1EE4D8u) {
        ctx->pc = 0x1EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4D4u;
        // 0x1ee4d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4DCu;
        goto label_1ee4dc;
    }
    ctx->pc = 0x1EE4D4u;
    {
        const bool branch_taken_0x1ee4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4D4u;
        // 0x1ee4d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4d4) {
            ctx->pc = 0x1EE4ECu;
            goto label_1ee4ec;
        }
    }
    ctx->pc = 0x1EE4DCu;
label_1ee4dc:
    // 0x1ee4dc: 0xc080f84  jal         func_203E10
label_1ee4e0:
    if (ctx->pc == 0x1EE4E0u) {
        ctx->pc = 0x1EE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4DCu;
        // 0x1ee4e0: 0xaf808f38  sw          $zero, -0x70C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4E4u;
        goto label_1ee4e4;
    }
    ctx->pc = 0x1EE4DCu;
    SET_GPR_U32(ctx, 31, 0x1EE4E4u);
    ctx->pc = 0x1EE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4DCu;
    // 0x1ee4e0: 0xaf808f38  sw          $zero, -0x70C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x1EE4E4u;
label_1ee4e4:
    // 0x1ee4e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ee4e8:
    if (ctx->pc == 0x1EE4E8u) {
        ctx->pc = 0x1EE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4E4u;
        // 0x1ee4e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4ECu;
        goto label_1ee4ec;
    }
    ctx->pc = 0x1EE4E4u;
    {
        const bool branch_taken_0x1ee4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4E4u;
        // 0x1ee4e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4e4) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4ECu;
label_1ee4ec:
    // 0x1ee4ec: 0x0  nop
    ctx->pc = 0x1ee4ecu;
    // NOP
label_1ee4f0:
    // 0x1ee4f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee4f4:
    // 0x1ee4f4: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1ee4f8:
    if (ctx->pc == 0x1EE4F8u) {
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4FCu;
        goto label_1ee4fc;
    }
    ctx->pc = 0x1EE4F4u;
    {
        const bool branch_taken_0x1ee4f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4f4) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE4FCu;
label_1ee4fc:
    // 0x1ee4fc: 0xc080a24  jal         func_202890
label_1ee500:
    if (ctx->pc == 0x1EE500u) {
        ctx->pc = 0x1EE504u;
        goto label_1ee504;
    }
    ctx->pc = 0x1EE4FCu;
    SET_GPR_U32(ctx, 31, 0x1EE504u);
    ctx->pc = 0x202890u;
    { ctx->pc = 0x202890; return; }
    ctx->pc = 0x1EE504u;
label_1ee504:
    // 0x1ee504: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ee504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee508:
    // 0x1ee508: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1ee50c:
    if (ctx->pc == 0x1EE50Cu) {
        ctx->pc = 0x1EE510u;
        goto label_1ee510;
    }
    ctx->pc = 0x1EE508u;
    {
        const bool branch_taken_0x1ee508 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee508) {
            ctx->pc = 0x1EE52Cu;
            goto label_1ee52c;
        }
    }
    ctx->pc = 0x1EE510u;
label_1ee510:
    // 0x1ee510: 0xc080f70  jal         func_203DC0
label_1ee514:
    if (ctx->pc == 0x1EE514u) {
        ctx->pc = 0x1EE518u;
        goto label_1ee518;
    }
    ctx->pc = 0x1EE510u;
    SET_GPR_U32(ctx, 31, 0x1EE518u);
    ctx->pc = 0x203DC0u;
    { ctx->pc = 0x203dc0; return; }
    ctx->pc = 0x1EE518u;
label_1ee518:
    // 0x1ee518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee51c:
    // 0x1ee51c: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_1ee520:
    if (ctx->pc == 0x1EE520u) {
        ctx->pc = 0x1EE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE51Cu;
        // 0x1ee520: 0xaf828f38  sw          $v0, -0x70C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE524u;
        goto label_1ee524;
    }
    ctx->pc = 0x1EE51Cu;
    {
        const bool branch_taken_0x1ee51c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1EE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE51Cu;
        // 0x1ee520: 0xaf828f38  sw          $v0, -0x70C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee51c) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE524u;
label_1ee524:
    // 0x1ee524: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee528:
    if (ctx->pc == 0x1EE528u) {
        ctx->pc = 0x1EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE524u;
        // 0x1ee528: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE52Cu;
        goto label_1ee52c;
    }
    ctx->pc = 0x1EE524u;
    {
        const bool branch_taken_0x1ee524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE524u;
        // 0x1ee528: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee524) {
            ctx->pc = 0x1EE53Cu;
            goto label_1ee53c;
        }
    }
    ctx->pc = 0x1EE52Cu;
label_1ee52c:
    // 0x1ee52c: 0xc07b48c  jal         func_1ED230
label_1ee530:
    if (ctx->pc == 0x1EE530u) {
        ctx->pc = 0x1EE534u;
        goto label_1ee534;
    }
    ctx->pc = 0x1EE52Cu;
    SET_GPR_U32(ctx, 31, 0x1EE534u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1EE534u;
label_1ee534:
    // 0x1ee534: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
label_1ee538:
    if (ctx->pc == 0x1EE538u) {
        ctx->pc = 0x1EE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE534u;
        // 0x1ee538: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE53Cu;
        goto label_1ee53c;
    }
    ctx->pc = 0x1EE534u;
    {
        const bool branch_taken_0x1ee534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE534u;
        // 0x1ee538: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee534) {
            ctx->pc = 0x1EE430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee430;
        }
    }
    ctx->pc = 0x1EE53Cu;
label_1ee53c:
    // 0x1ee53c: 0x0  nop
    ctx->pc = 0x1ee53cu;
    // NOP
label_1ee540:
    // 0x1ee540: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ee540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee544:
    // 0x1ee544: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ee544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee548:
    // 0x1ee548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee54c:
    // 0x1ee54c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee54cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee550:
    // 0x1ee550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee554:
    // 0x1ee554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee558:
    // 0x1ee558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee55c:
    // 0x1ee55c: 0x3e00008  jr          $ra
label_1ee560:
    if (ctx->pc == 0x1EE560u) {
        ctx->pc = 0x1EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE55Cu;
        // 0x1ee560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE564u;
        goto label_1ee564;
    }
    ctx->pc = 0x1EE55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE55Cu;
        // 0x1ee560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE564u;
label_1ee564:
    // 0x1ee564: 0x0  nop
    ctx->pc = 0x1ee564u;
    // NOP
label_1ee568:
    // 0x1ee568: 0x0  nop
    ctx->pc = 0x1ee568u;
    // NOP
label_1ee56c:
    // 0x1ee56c: 0x0  nop
    ctx->pc = 0x1ee56cu;
    // NOP
label_1ee570:
    // 0x1ee570: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ee570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ee574:
    // 0x1ee574: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1ee574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1ee578:
    // 0x1ee578: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1ee578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ee57c:
    // 0x1ee57c: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1ee580:
    // 0x1ee580: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1ee580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ee584:
    // 0x1ee584: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1ee588:
    // 0x1ee588: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ee58c:
    // 0x1ee58c: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x1ee58cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1ee590:
    // 0x1ee590: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ee590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ee594:
    // 0x1ee594: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1ee594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ee598:
    // 0x1ee598: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ee598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1ee59c:
    // 0x1ee59c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1ee59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1ee5a0:
    // 0x1ee5a0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ee5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ee5a4:
    // 0x1ee5a4: 0x90a40220  lbu         $a0, 0x220($a1)
    ctx->pc = 0x1ee5a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_1ee5a8:
    // 0x1ee5a8: 0x90a30221  lbu         $v1, 0x221($a1)
    ctx->pc = 0x1ee5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 545)));
label_1ee5ac:
    // 0x1ee5ac: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_1ee5b0:
    if (ctx->pc == 0x1EE5B0u) {
        ctx->pc = 0x1EE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5ACu;
        // 0x1ee5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5B4u;
        goto label_1ee5b4;
    }
    ctx->pc = 0x1EE5ACu;
    {
        const bool branch_taken_0x1ee5ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5ACu;
        // 0x1ee5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5ac) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5B4u;
label_1ee5b4:
    // 0x1ee5b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ee5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee5b8:
    // 0x1ee5b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1ee5bc:
    if (ctx->pc == 0x1EE5BCu) {
        ctx->pc = 0x1EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5B8u;
        // 0x1ee5bc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5C0u;
        goto label_1ee5c0;
    }
    ctx->pc = 0x1EE5B8u;
    {
        const bool branch_taken_0x1ee5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5B8u;
        // 0x1ee5bc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5b8) {
            ctx->pc = 0x1EE5C8u;
            goto label_1ee5c8;
        }
    }
    ctx->pc = 0x1EE5C0u;
label_1ee5c0:
    // 0x1ee5c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ee5c4:
    if (ctx->pc == 0x1EE5C4u) {
        ctx->pc = 0x1EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5C0u;
        // 0x1ee5c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5C8u;
        goto label_1ee5c8;
    }
    ctx->pc = 0x1EE5C0u;
    {
        const bool branch_taken_0x1ee5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5C0u;
        // 0x1ee5c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5c0) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5C8u;
label_1ee5c8:
    // 0x1ee5c8: 0x8ca3022c  lw          $v1, 0x22C($a1)
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 556)));
label_1ee5cc:
    // 0x1ee5cc: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1ee5d0:
    // 0x1ee5d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ee5d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee5d4:
    // 0x1ee5d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ee5d8:
    if (ctx->pc == 0x1EE5D8u) {
        ctx->pc = 0x1EE5DCu;
        goto label_1ee5dc;
    }
    ctx->pc = 0x1EE5D4u;
    {
        const bool branch_taken_0x1ee5d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5d4) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE5DCu;
label_1ee5dc:
    // 0x1ee5dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ee5e0:
    if (ctx->pc == 0x1EE5E0u) {
        ctx->pc = 0x1EE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5DCu;
        // 0x1ee5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5E4u;
        goto label_1ee5e4;
    }
    ctx->pc = 0x1EE5DCu;
    {
        const bool branch_taken_0x1ee5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5DCu;
        // 0x1ee5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5dc) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5E4u;
label_1ee5e4:
    // 0x1ee5e4: 0x8ca30228  lw          $v1, 0x228($a1)
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 552)));
label_1ee5e8:
    // 0x1ee5e8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ee5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee5ec:
    // 0x1ee5ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1ee5f0:
    if (ctx->pc == 0x1EE5F0u) {
        ctx->pc = 0x1EE5F4u;
        goto label_1ee5f4;
    }
    ctx->pc = 0x1EE5ECu;
    {
        const bool branch_taken_0x1ee5ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5ec) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5F4u;
label_1ee5f4:
    // 0x1ee5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee5f8:
    // 0x1ee5f8: 0x3e00008  jr          $ra
label_1ee5fc:
    if (ctx->pc == 0x1EE5FCu) {
        ctx->pc = 0x1EE600u;
        goto label_1ee600;
    }
    ctx->pc = 0x1EE5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE600u;
label_1ee600:
    // 0x1ee600: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ee604:
    // 0x1ee604: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee608:
    // 0x1ee608: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ee608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1ee60c:
    // 0x1ee60c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ee60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1ee610:
    // 0x1ee610: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1ee610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1ee614:
    // 0x1ee614: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ee614u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee618:
    // 0x1ee618: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ee618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1ee61c:
    // 0x1ee61c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ee61cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee620:
    // 0x1ee620: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ee620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1ee624:
    // 0x1ee624: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ee624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ee628:
    // 0x1ee628: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ee628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ee62c:
    // 0x1ee62c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ee62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ee630:
    // 0x1ee630: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ee630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ee634:
    // 0x1ee634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ee634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ee638:
    // 0x1ee638: 0xac202a00  sw          $zero, 0x2A00($at)
    ctx->pc = 0x1ee638u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10752), GPR_U32(ctx, 0));
label_1ee63c:
    // 0x1ee63c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee640:
    // 0x1ee640: 0xaf808f50  sw          $zero, -0x70B0($gp)
    ctx->pc = 0x1ee640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938448), GPR_U32(ctx, 0));
label_1ee644:
    // 0x1ee644: 0xac202a04  sw          $zero, 0x2A04($at)
    ctx->pc = 0x1ee644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10756), GPR_U32(ctx, 0));
label_1ee648:
    // 0x1ee648: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ee64c:
    // 0x1ee64c: 0xac202a08  sw          $zero, 0x2A08($at)
    ctx->pc = 0x1ee64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10760), GPR_U32(ctx, 0));
    ctx->pc = 0x1ee650u;
    return;
}

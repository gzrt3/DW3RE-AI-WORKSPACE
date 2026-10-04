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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dde20u: goto label_1dde20;
        case 0x1dde24u: goto label_1dde24;
        case 0x1dde28u: goto label_1dde28;
        case 0x1dde2cu: goto label_1dde2c;
        case 0x1dde30u: goto label_1dde30;
        case 0x1dde34u: goto label_1dde34;
        case 0x1dde38u: goto label_1dde38;
        case 0x1dde3cu: goto label_1dde3c;
        case 0x1dde40u: goto label_1dde40;
        case 0x1dde44u: goto label_1dde44;
        case 0x1dde48u: goto label_1dde48;
        case 0x1dde4cu: goto label_1dde4c;
        case 0x1dde50u: goto label_1dde50;
        case 0x1dde54u: goto label_1dde54;
        case 0x1dde58u: goto label_1dde58;
        case 0x1dde5cu: goto label_1dde5c;
        case 0x1dde60u: goto label_1dde60;
        case 0x1dde64u: goto label_1dde64;
        case 0x1dde68u: goto label_1dde68;
        case 0x1dde6cu: goto label_1dde6c;
        case 0x1dde70u: goto label_1dde70;
        case 0x1dde74u: goto label_1dde74;
        case 0x1dde78u: goto label_1dde78;
        case 0x1dde7cu: goto label_1dde7c;
        case 0x1dde80u: goto label_1dde80;
        case 0x1dde84u: goto label_1dde84;
        case 0x1dde88u: goto label_1dde88;
        case 0x1dde8cu: goto label_1dde8c;
        case 0x1dde90u: goto label_1dde90;
        case 0x1dde94u: goto label_1dde94;
        case 0x1dde98u: goto label_1dde98;
        case 0x1dde9cu: goto label_1dde9c;
        case 0x1ddea0u: goto label_1ddea0;
        case 0x1ddea4u: goto label_1ddea4;
        case 0x1ddea8u: goto label_1ddea8;
        case 0x1ddeacu: goto label_1ddeac;
        case 0x1ddeb0u: goto label_1ddeb0;
        case 0x1ddeb4u: goto label_1ddeb4;
        case 0x1ddeb8u: goto label_1ddeb8;
        case 0x1ddebcu: goto label_1ddebc;
        case 0x1ddec0u: goto label_1ddec0;
        case 0x1ddec4u: goto label_1ddec4;
        case 0x1ddec8u: goto label_1ddec8;
        case 0x1ddeccu: goto label_1ddecc;
        case 0x1dded0u: goto label_1dded0;
        case 0x1dded4u: goto label_1dded4;
        case 0x1dded8u: goto label_1dded8;
        case 0x1ddedcu: goto label_1ddedc;
        case 0x1ddee0u: goto label_1ddee0;
        case 0x1ddee4u: goto label_1ddee4;
        case 0x1ddee8u: goto label_1ddee8;
        case 0x1ddeecu: goto label_1ddeec;
        case 0x1ddef0u: goto label_1ddef0;
        case 0x1ddef4u: goto label_1ddef4;
        case 0x1ddef8u: goto label_1ddef8;
        case 0x1ddefcu: goto label_1ddefc;
        case 0x1ddf00u: goto label_1ddf00;
        case 0x1ddf04u: goto label_1ddf04;
        case 0x1ddf08u: goto label_1ddf08;
        case 0x1ddf0cu: goto label_1ddf0c;
        case 0x1ddf10u: goto label_1ddf10;
        case 0x1ddf14u: goto label_1ddf14;
        case 0x1ddf18u: goto label_1ddf18;
        case 0x1ddf1cu: goto label_1ddf1c;
        case 0x1ddf20u: goto label_1ddf20;
        case 0x1ddf24u: goto label_1ddf24;
        case 0x1ddf28u: goto label_1ddf28;
        case 0x1ddf2cu: goto label_1ddf2c;
        case 0x1ddf30u: goto label_1ddf30;
        case 0x1ddf34u: goto label_1ddf34;
        case 0x1ddf38u: goto label_1ddf38;
        case 0x1ddf3cu: goto label_1ddf3c;
        case 0x1ddf40u: goto label_1ddf40;
        case 0x1ddf44u: goto label_1ddf44;
        case 0x1ddf48u: goto label_1ddf48;
        case 0x1ddf4cu: goto label_1ddf4c;
        case 0x1ddf50u: goto label_1ddf50;
        case 0x1ddf54u: goto label_1ddf54;
        case 0x1ddf58u: goto label_1ddf58;
        case 0x1ddf5cu: goto label_1ddf5c;
        case 0x1ddf60u: goto label_1ddf60;
        case 0x1ddf64u: goto label_1ddf64;
        case 0x1ddf68u: goto label_1ddf68;
        case 0x1ddf6cu: goto label_1ddf6c;
        case 0x1ddf70u: goto label_1ddf70;
        case 0x1ddf74u: goto label_1ddf74;
        case 0x1ddf78u: goto label_1ddf78;
        case 0x1ddf7cu: goto label_1ddf7c;
        case 0x1ddf80u: goto label_1ddf80;
        case 0x1ddf84u: goto label_1ddf84;
        case 0x1ddf88u: goto label_1ddf88;
        case 0x1ddf8cu: goto label_1ddf8c;
        case 0x1ddf90u: goto label_1ddf90;
        case 0x1ddf94u: goto label_1ddf94;
        case 0x1ddf98u: goto label_1ddf98;
        case 0x1ddf9cu: goto label_1ddf9c;
        case 0x1ddfa0u: goto label_1ddfa0;
        case 0x1ddfa4u: goto label_1ddfa4;
        case 0x1ddfa8u: goto label_1ddfa8;
        case 0x1ddfacu: goto label_1ddfac;
        case 0x1ddfb0u: goto label_1ddfb0;
        case 0x1ddfb4u: goto label_1ddfb4;
        case 0x1ddfb8u: goto label_1ddfb8;
        case 0x1ddfbcu: goto label_1ddfbc;
        case 0x1ddfc0u: goto label_1ddfc0;
        case 0x1ddfc4u: goto label_1ddfc4;
        case 0x1ddfc8u: goto label_1ddfc8;
        case 0x1ddfccu: goto label_1ddfcc;
        case 0x1ddfd0u: goto label_1ddfd0;
        case 0x1ddfd4u: goto label_1ddfd4;
        case 0x1ddfd8u: goto label_1ddfd8;
        case 0x1ddfdcu: goto label_1ddfdc;
        case 0x1ddfe0u: goto label_1ddfe0;
        case 0x1ddfe4u: goto label_1ddfe4;
        case 0x1ddfe8u: goto label_1ddfe8;
        case 0x1ddfecu: goto label_1ddfec;
        case 0x1ddff0u: goto label_1ddff0;
        case 0x1ddff4u: goto label_1ddff4;
        case 0x1ddff8u: goto label_1ddff8;
        case 0x1ddffcu: goto label_1ddffc;
        case 0x1de000u: goto label_1de000;
        case 0x1de004u: goto label_1de004;
        case 0x1de008u: goto label_1de008;
        case 0x1de00cu: goto label_1de00c;
        case 0x1de010u: goto label_1de010;
        case 0x1de014u: goto label_1de014;
        case 0x1de018u: goto label_1de018;
        case 0x1de01cu: goto label_1de01c;
        case 0x1de020u: goto label_1de020;
        case 0x1de024u: goto label_1de024;
        case 0x1de028u: goto label_1de028;
        case 0x1de02cu: goto label_1de02c;
        case 0x1de030u: goto label_1de030;
        case 0x1de034u: goto label_1de034;
        case 0x1de038u: goto label_1de038;
        case 0x1de03cu: goto label_1de03c;
        case 0x1de040u: goto label_1de040;
        case 0x1de044u: goto label_1de044;
        case 0x1de048u: goto label_1de048;
        case 0x1de04cu: goto label_1de04c;
        case 0x1de050u: goto label_1de050;
        case 0x1de054u: goto label_1de054;
        case 0x1de058u: goto label_1de058;
        case 0x1de05cu: goto label_1de05c;
        case 0x1de060u: goto label_1de060;
        case 0x1de064u: goto label_1de064;
        case 0x1de068u: goto label_1de068;
        case 0x1de06cu: goto label_1de06c;
        case 0x1de070u: goto label_1de070;
        case 0x1de074u: goto label_1de074;
        case 0x1de078u: goto label_1de078;
        case 0x1de07cu: goto label_1de07c;
        case 0x1de080u: goto label_1de080;
        case 0x1de084u: goto label_1de084;
        case 0x1de088u: goto label_1de088;
        case 0x1de08cu: goto label_1de08c;
        case 0x1de090u: goto label_1de090;
        case 0x1de094u: goto label_1de094;
        case 0x1de098u: goto label_1de098;
        case 0x1de09cu: goto label_1de09c;
        case 0x1de0a0u: goto label_1de0a0;
        case 0x1de0a4u: goto label_1de0a4;
        case 0x1de0a8u: goto label_1de0a8;
        case 0x1de0acu: goto label_1de0ac;
        case 0x1de0b0u: goto label_1de0b0;
        case 0x1de0b4u: goto label_1de0b4;
        case 0x1de0b8u: goto label_1de0b8;
        case 0x1de0bcu: goto label_1de0bc;
        case 0x1de0c0u: goto label_1de0c0;
        case 0x1de0c4u: goto label_1de0c4;
        case 0x1de0c8u: goto label_1de0c8;
        case 0x1de0ccu: goto label_1de0cc;
        case 0x1de0d0u: goto label_1de0d0;
        case 0x1de0d4u: goto label_1de0d4;
        case 0x1de0d8u: goto label_1de0d8;
        case 0x1de0dcu: goto label_1de0dc;
        case 0x1de0e0u: goto label_1de0e0;
        case 0x1de0e4u: goto label_1de0e4;
        case 0x1de0e8u: goto label_1de0e8;
        case 0x1de0ecu: goto label_1de0ec;
        case 0x1de0f0u: goto label_1de0f0;
        case 0x1de0f4u: goto label_1de0f4;
        case 0x1de0f8u: goto label_1de0f8;
        case 0x1de0fcu: goto label_1de0fc;
        case 0x1de100u: goto label_1de100;
        case 0x1de104u: goto label_1de104;
        case 0x1de108u: goto label_1de108;
        case 0x1de10cu: goto label_1de10c;
        case 0x1de110u: goto label_1de110;
        case 0x1de114u: goto label_1de114;
        case 0x1de118u: goto label_1de118;
        case 0x1de11cu: goto label_1de11c;
        case 0x1de120u: goto label_1de120;
        case 0x1de124u: goto label_1de124;
        case 0x1de128u: goto label_1de128;
        case 0x1de12cu: goto label_1de12c;
        case 0x1de130u: goto label_1de130;
        case 0x1de134u: goto label_1de134;
        case 0x1de138u: goto label_1de138;
        case 0x1de13cu: goto label_1de13c;
        case 0x1de140u: goto label_1de140;
        case 0x1de144u: goto label_1de144;
        case 0x1de148u: goto label_1de148;
        case 0x1de14cu: goto label_1de14c;
        case 0x1de150u: goto label_1de150;
        case 0x1de154u: goto label_1de154;
        case 0x1de158u: goto label_1de158;
        case 0x1de15cu: goto label_1de15c;
        case 0x1de160u: goto label_1de160;
        case 0x1de164u: goto label_1de164;
        case 0x1de168u: goto label_1de168;
        case 0x1de16cu: goto label_1de16c;
        case 0x1de170u: goto label_1de170;
        case 0x1de174u: goto label_1de174;
        case 0x1de178u: goto label_1de178;
        case 0x1de17cu: goto label_1de17c;
        case 0x1de180u: goto label_1de180;
        case 0x1de184u: goto label_1de184;
        case 0x1de188u: goto label_1de188;
        case 0x1de18cu: goto label_1de18c;
        case 0x1de190u: goto label_1de190;
        case 0x1de194u: goto label_1de194;
        case 0x1de198u: goto label_1de198;
        case 0x1de19cu: goto label_1de19c;
        case 0x1de1a0u: goto label_1de1a0;
        case 0x1de1a4u: goto label_1de1a4;
        case 0x1de1a8u: goto label_1de1a8;
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1b0u: goto label_1de1b0;
        case 0x1de1b4u: goto label_1de1b4;
        case 0x1de1b8u: goto label_1de1b8;
        case 0x1de1bcu: goto label_1de1bc;
        case 0x1de1c0u: goto label_1de1c0;
        case 0x1de1c4u: goto label_1de1c4;
        case 0x1de1c8u: goto label_1de1c8;
        case 0x1de1ccu: goto label_1de1cc;
        case 0x1de1d0u: goto label_1de1d0;
        case 0x1de1d4u: goto label_1de1d4;
        case 0x1de1d8u: goto label_1de1d8;
        case 0x1de1dcu: goto label_1de1dc;
        case 0x1de1e0u: goto label_1de1e0;
        case 0x1de1e4u: goto label_1de1e4;
        case 0x1de1e8u: goto label_1de1e8;
        case 0x1de1ecu: goto label_1de1ec;
        case 0x1de1f0u: goto label_1de1f0;
        case 0x1de1f4u: goto label_1de1f4;
        case 0x1de1f8u: goto label_1de1f8;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de200u: goto label_1de200;
        case 0x1de204u: goto label_1de204;
        case 0x1de208u: goto label_1de208;
        case 0x1de20cu: goto label_1de20c;
        case 0x1de210u: goto label_1de210;
        case 0x1de214u: goto label_1de214;
        case 0x1de218u: goto label_1de218;
        case 0x1de21cu: goto label_1de21c;
        case 0x1de220u: goto label_1de220;
        case 0x1de224u: goto label_1de224;
        case 0x1de228u: goto label_1de228;
        case 0x1de22cu: goto label_1de22c;
        case 0x1de230u: goto label_1de230;
        case 0x1de234u: goto label_1de234;
        case 0x1de238u: goto label_1de238;
        case 0x1de23cu: goto label_1de23c;
        case 0x1de240u: goto label_1de240;
        case 0x1de244u: goto label_1de244;
        case 0x1de248u: goto label_1de248;
        case 0x1de24cu: goto label_1de24c;
        case 0x1de250u: goto label_1de250;
        case 0x1de254u: goto label_1de254;
        case 0x1de258u: goto label_1de258;
        case 0x1de25cu: goto label_1de25c;
        case 0x1de260u: goto label_1de260;
        case 0x1de264u: goto label_1de264;
        case 0x1de268u: goto label_1de268;
        case 0x1de26cu: goto label_1de26c;
        case 0x1de270u: goto label_1de270;
        case 0x1de274u: goto label_1de274;
        case 0x1de278u: goto label_1de278;
        case 0x1de27cu: goto label_1de27c;
        case 0x1de280u: goto label_1de280;
        case 0x1de284u: goto label_1de284;
        case 0x1de288u: goto label_1de288;
        case 0x1de28cu: goto label_1de28c;
        case 0x1de290u: goto label_1de290;
        case 0x1de294u: goto label_1de294;
        case 0x1de298u: goto label_1de298;
        case 0x1de29cu: goto label_1de29c;
        case 0x1de2a0u: goto label_1de2a0;
        case 0x1de2a4u: goto label_1de2a4;
        case 0x1de2a8u: goto label_1de2a8;
        case 0x1de2acu: goto label_1de2ac;
        case 0x1de2b0u: goto label_1de2b0;
        case 0x1de2b4u: goto label_1de2b4;
        case 0x1de2b8u: goto label_1de2b8;
        case 0x1de2bcu: goto label_1de2bc;
        case 0x1de2c0u: goto label_1de2c0;
        case 0x1de2c4u: goto label_1de2c4;
        case 0x1de2c8u: goto label_1de2c8;
        case 0x1de2ccu: goto label_1de2cc;
        case 0x1de2d0u: goto label_1de2d0;
        case 0x1de2d4u: goto label_1de2d4;
        case 0x1de2d8u: goto label_1de2d8;
        case 0x1de2dcu: goto label_1de2dc;
        case 0x1de2e0u: goto label_1de2e0;
        case 0x1de2e4u: goto label_1de2e4;
        case 0x1de2e8u: goto label_1de2e8;
        case 0x1de2ecu: goto label_1de2ec;
        case 0x1de2f0u: goto label_1de2f0;
        case 0x1de2f4u: goto label_1de2f4;
        case 0x1de2f8u: goto label_1de2f8;
        case 0x1de2fcu: goto label_1de2fc;
        case 0x1de300u: goto label_1de300;
        case 0x1de304u: goto label_1de304;
        case 0x1de308u: goto label_1de308;
        case 0x1de30cu: goto label_1de30c;
        case 0x1de310u: goto label_1de310;
        case 0x1de314u: goto label_1de314;
        case 0x1de318u: goto label_1de318;
        case 0x1de31cu: goto label_1de31c;
        case 0x1de320u: goto label_1de320;
        case 0x1de324u: goto label_1de324;
        case 0x1de328u: goto label_1de328;
        case 0x1de32cu: goto label_1de32c;
        case 0x1de330u: goto label_1de330;
        case 0x1de334u: goto label_1de334;
        case 0x1de338u: goto label_1de338;
        case 0x1de33cu: goto label_1de33c;
        case 0x1de340u: goto label_1de340;
        case 0x1de344u: goto label_1de344;
        case 0x1de348u: goto label_1de348;
        case 0x1de34cu: goto label_1de34c;
        case 0x1de350u: goto label_1de350;
        case 0x1de354u: goto label_1de354;
        case 0x1de358u: goto label_1de358;
        case 0x1de35cu: goto label_1de35c;
        case 0x1de360u: goto label_1de360;
        case 0x1de364u: goto label_1de364;
        case 0x1de368u: goto label_1de368;
        case 0x1de36cu: goto label_1de36c;
        case 0x1de370u: goto label_1de370;
        case 0x1de374u: goto label_1de374;
        case 0x1de378u: goto label_1de378;
        case 0x1de37cu: goto label_1de37c;
        case 0x1de380u: goto label_1de380;
        case 0x1de384u: goto label_1de384;
        case 0x1de388u: goto label_1de388;
        case 0x1de38cu: goto label_1de38c;
        case 0x1de390u: goto label_1de390;
        case 0x1de394u: goto label_1de394;
        case 0x1de398u: goto label_1de398;
        case 0x1de39cu: goto label_1de39c;
        case 0x1de3a0u: goto label_1de3a0;
        case 0x1de3a4u: goto label_1de3a4;
        case 0x1de3a8u: goto label_1de3a8;
        case 0x1de3acu: goto label_1de3ac;
        case 0x1de3b0u: goto label_1de3b0;
        case 0x1de3b4u: goto label_1de3b4;
        case 0x1de3b8u: goto label_1de3b8;
        case 0x1de3bcu: goto label_1de3bc;
        case 0x1de3c0u: goto label_1de3c0;
        case 0x1de3c4u: goto label_1de3c4;
        case 0x1de3c8u: goto label_1de3c8;
        case 0x1de3ccu: goto label_1de3cc;
        case 0x1de3d0u: goto label_1de3d0;
        case 0x1de3d4u: goto label_1de3d4;
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3e0u: goto label_1de3e0;
        case 0x1de3e4u: goto label_1de3e4;
        case 0x1de3e8u: goto label_1de3e8;
        case 0x1de3ecu: goto label_1de3ec;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de3f4u: goto label_1de3f4;
        case 0x1de3f8u: goto label_1de3f8;
        case 0x1de3fcu: goto label_1de3fc;
        case 0x1de400u: goto label_1de400;
        case 0x1de404u: goto label_1de404;
        case 0x1de408u: goto label_1de408;
        case 0x1de40cu: goto label_1de40c;
        case 0x1de410u: goto label_1de410;
        case 0x1de414u: goto label_1de414;
        case 0x1de418u: goto label_1de418;
        case 0x1de41cu: goto label_1de41c;
        case 0x1de420u: goto label_1de420;
        case 0x1de424u: goto label_1de424;
        case 0x1de428u: goto label_1de428;
        case 0x1de42cu: goto label_1de42c;
        case 0x1de430u: goto label_1de430;
        case 0x1de434u: goto label_1de434;
        case 0x1de438u: goto label_1de438;
        case 0x1de43cu: goto label_1de43c;
        case 0x1de440u: goto label_1de440;
        case 0x1de444u: goto label_1de444;
        case 0x1de448u: goto label_1de448;
        case 0x1de44cu: goto label_1de44c;
        case 0x1de450u: goto label_1de450;
        case 0x1de454u: goto label_1de454;
        case 0x1de458u: goto label_1de458;
        case 0x1de45cu: goto label_1de45c;
        case 0x1de460u: goto label_1de460;
        case 0x1de464u: goto label_1de464;
        case 0x1de468u: goto label_1de468;
        case 0x1de46cu: goto label_1de46c;
        case 0x1de470u: goto label_1de470;
        case 0x1de474u: goto label_1de474;
        case 0x1de478u: goto label_1de478;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de480u: goto label_1de480;
        case 0x1de484u: goto label_1de484;
        case 0x1de488u: goto label_1de488;
        case 0x1de48cu: goto label_1de48c;
        case 0x1de490u: goto label_1de490;
        case 0x1de494u: goto label_1de494;
        case 0x1de498u: goto label_1de498;
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a0u: goto label_1de4a0;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4a8u: goto label_1de4a8;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4b0u: goto label_1de4b0;
        case 0x1de4b4u: goto label_1de4b4;
        case 0x1de4b8u: goto label_1de4b8;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4ccu: goto label_1de4cc;
        case 0x1de4d0u: goto label_1de4d0;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4d8u: goto label_1de4d8;
        case 0x1de4dcu: goto label_1de4dc;
        case 0x1de4e0u: goto label_1de4e0;
        case 0x1de4e4u: goto label_1de4e4;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de4ecu: goto label_1de4ec;
        case 0x1de4f0u: goto label_1de4f0;
        case 0x1de4f4u: goto label_1de4f4;
        case 0x1de4f8u: goto label_1de4f8;
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de500u: goto label_1de500;
        case 0x1de504u: goto label_1de504;
        case 0x1de508u: goto label_1de508;
        case 0x1de50cu: goto label_1de50c;
        case 0x1de510u: goto label_1de510;
        case 0x1de514u: goto label_1de514;
        case 0x1de518u: goto label_1de518;
        case 0x1de51cu: goto label_1de51c;
        case 0x1de520u: goto label_1de520;
        case 0x1de524u: goto label_1de524;
        case 0x1de528u: goto label_1de528;
        case 0x1de52cu: goto label_1de52c;
        case 0x1de530u: goto label_1de530;
        case 0x1de534u: goto label_1de534;
        case 0x1de538u: goto label_1de538;
        case 0x1de53cu: goto label_1de53c;
        case 0x1de540u: goto label_1de540;
        case 0x1de544u: goto label_1de544;
        case 0x1de548u: goto label_1de548;
        case 0x1de54cu: goto label_1de54c;
        case 0x1de550u: goto label_1de550;
        case 0x1de554u: goto label_1de554;
        case 0x1de558u: goto label_1de558;
        case 0x1de55cu: goto label_1de55c;
        case 0x1de560u: goto label_1de560;
        case 0x1de564u: goto label_1de564;
        case 0x1de568u: goto label_1de568;
        case 0x1de56cu: goto label_1de56c;
        case 0x1de570u: goto label_1de570;
        case 0x1de574u: goto label_1de574;
        case 0x1de578u: goto label_1de578;
        case 0x1de57cu: goto label_1de57c;
        case 0x1de580u: goto label_1de580;
        case 0x1de584u: goto label_1de584;
        case 0x1de588u: goto label_1de588;
        case 0x1de58cu: goto label_1de58c;
        case 0x1de590u: goto label_1de590;
        case 0x1de594u: goto label_1de594;
        case 0x1de598u: goto label_1de598;
        case 0x1de59cu: goto label_1de59c;
        case 0x1de5a0u: goto label_1de5a0;
        case 0x1de5a4u: goto label_1de5a4;
        case 0x1de5a8u: goto label_1de5a8;
        case 0x1de5acu: goto label_1de5ac;
        case 0x1de5b0u: goto label_1de5b0;
        case 0x1de5b4u: goto label_1de5b4;
        case 0x1de5b8u: goto label_1de5b8;
        case 0x1de5bcu: goto label_1de5bc;
        case 0x1de5c0u: goto label_1de5c0;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5c8u: goto label_1de5c8;
        case 0x1de5ccu: goto label_1de5cc;
        case 0x1de5d0u: goto label_1de5d0;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5d8u: goto label_1de5d8;
        case 0x1de5dcu: goto label_1de5dc;
        case 0x1de5e0u: goto label_1de5e0;
        case 0x1de5e4u: goto label_1de5e4;
        case 0x1de5e8u: goto label_1de5e8;
        case 0x1de5ecu: goto label_1de5ec;
        default: return;
    }

label_1dde20:
    // 0x1dde20: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dde24:
    // 0x1dde24: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1dde24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1dde28:
    // 0x1dde28: 0xc07091c  jal         func_1C2470
label_1dde2c:
    if (ctx->pc == 0x1DDE2Cu) {
        ctx->pc = 0x1DDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE28u;
        // 0x1dde2c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE30u;
        goto label_1dde30;
    }
    ctx->pc = 0x1DDE28u;
    SET_GPR_U32(ctx, 31, 0x1DDE30u);
    ctx->pc = 0x1DDE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE28u;
    // 0x1dde2c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2470u, 0x1DDE28u, 0x1DDE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE30u;
label_1dde30:
    // 0x1dde30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dde30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dde34:
    // 0x1dde34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dde34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dde38:
    // 0x1dde38: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1dde38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1dde3c:
    // 0x1dde3c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1dde3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1dde40:
    // 0x1dde40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1dde40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1dde44:
    // 0x1dde44: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x1dde44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1dde48:
    // 0x1dde48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dde48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dde4c:
    // 0x1dde4c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1dde4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1dde50:
    // 0x1dde50: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1dde50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1dde54:
    // 0x1dde54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dde54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dde58:
    // 0x1dde58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1dde58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1dde5c:
    // 0x1dde5c: 0x26a20130  addiu       $v0, $s5, 0x130
    ctx->pc = 0x1dde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
label_1dde60:
    // 0x1dde60: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1dde60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1dde64:
    // 0x1dde64: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x1dde64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dde68:
    // 0x1dde68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dde68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dde6c:
    // 0x1dde6c: 0xc05de30  jal         func_1778C0
label_1dde70:
    if (ctx->pc == 0x1DDE70u) {
        ctx->pc = 0x1DDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE6Cu;
        // 0x1dde70: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE74u;
        goto label_1dde74;
    }
    ctx->pc = 0x1DDE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DDE74u);
    ctx->pc = 0x1DDE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE6Cu;
    // 0x1dde70: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DDE6Cu, 0x1DDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE74u;
label_1dde74:
    // 0x1dde74: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1dde78:
    // 0x1dde78: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x1dde78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1dde7c:
    // 0x1dde7c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1dde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1dde80:
    // 0x1dde80: 0xc08f20e  jal         func_23C838
label_1dde84:
    if (ctx->pc == 0x1DDE84u) {
        ctx->pc = 0x1DDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE80u;
        // 0x1dde84: 0x24a5c578  addiu       $a1, $a1, -0x3A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE88u;
        goto label_1dde88;
    }
    ctx->pc = 0x1DDE80u;
    SET_GPR_U32(ctx, 31, 0x1DDE88u);
    ctx->pc = 0x1DDE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE80u;
    // 0x1dde84: 0x24a5c578  addiu       $a1, $a1, -0x3A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1DDE88u;
label_1dde88:
    // 0x1dde88: 0x26a200f8  addiu       $v0, $s5, 0xF8
    ctx->pc = 0x1dde88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 248));
label_1dde8c:
    // 0x1dde8c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1dde8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dde90:
    // 0x1dde90: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1dde90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dde94:
    // 0x1dde94: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1dde94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1dde98:
    // 0x1dde98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dde98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dde9c:
    // 0x1dde9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dde9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ddea0:
    // 0x1ddea0: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x1ddea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1ddea4:
    // 0x1ddea4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1ddea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ddea8:
    // 0x1ddea8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1ddea8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ddeac:
    // 0x1ddeac: 0xc0708ac  jal         func_1C22B0
label_1ddeb0:
    if (ctx->pc == 0x1DDEB0u) {
        ctx->pc = 0x1DDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEACu;
        // 0x1ddeb0: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEB4u;
        goto label_1ddeb4;
    }
    ctx->pc = 0x1DDEACu;
    SET_GPR_U32(ctx, 31, 0x1DDEB4u);
    ctx->pc = 0x1DDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEACu;
    // 0x1ddeb0: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1DDEACu, 0x1DDEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEB4u;
label_1ddeb4:
    // 0x1ddeb4: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1ddeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1ddeb8:
    // 0x1ddeb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddebc:
    // 0x1ddebc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ddebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ddec0:
    // 0x1ddec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ddec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddec4:
    // 0x1ddec4: 0x27828c78  addiu       $v0, $gp, -0x7388
    ctx->pc = 0x1ddec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937720));
label_1ddec8:
    // 0x1ddec8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1ddec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1ddecc:
    // 0x1ddecc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ddeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1dded0:
    // 0x1dded0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dded4:
    // 0x1dded4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dded8:
    // 0x1dded8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1dded8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ddedc:
    // 0x1ddedc: 0x24080160  addiu       $t0, $zero, 0x160
    ctx->pc = 0x1ddedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1ddee0:
    // 0x1ddee0: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ddee4:
    // 0x1ddee4: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x1ddee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1ddee8:
    // 0x1ddee8: 0xc054c60  jal         func_153180
label_1ddeec:
    if (ctx->pc == 0x1DDEECu) {
        ctx->pc = 0x1DDEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEE8u;
        // 0x1ddeec: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEF0u;
        goto label_1ddef0;
    }
    ctx->pc = 0x1DDEE8u;
    SET_GPR_U32(ctx, 31, 0x1DDEF0u);
    ctx->pc = 0x1DDEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEE8u;
    // 0x1ddeec: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1DDEE8u, 0x1DDEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEF0u;
label_1ddef0:
    // 0x1ddef0: 0xc070834  jal         func_1C20D0
label_1ddef4:
    if (ctx->pc == 0x1DDEF4u) {
        ctx->pc = 0x1DDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEF0u;
        // 0x1ddef4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDEF8u;
        goto label_1ddef8;
    }
    ctx->pc = 0x1DDEF0u;
    SET_GPR_U32(ctx, 31, 0x1DDEF8u);
    ctx->pc = 0x1DDEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEF0u;
    // 0x1ddef4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1DDEF0u, 0x1DDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEF8u;
label_1ddef8:
    // 0x1ddef8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ddef8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddefc:
    // 0x1ddefc: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ddf00:
    // 0x1ddf00: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1ddf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1ddf04:
    // 0x1ddf04: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x1ddf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_1ddf08:
    // 0x1ddf08: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ddf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ddf0c:
    // 0x1ddf0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ddf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf10:
    // 0x1ddf10: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1ddf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1ddf14:
    // 0x1ddf14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ddf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ddf18:
    // 0x1ddf18: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1ddf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1ddf1c:
    // 0x1ddf1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ddf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf20:
    // 0x1ddf20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ddf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ddf24:
    // 0x1ddf24: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x1ddf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_1ddf28:
    // 0x1ddf28: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ddf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ddf2c:
    // 0x1ddf2c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ddf30:
    // 0x1ddf30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ddf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddf34:
    // 0x1ddf34: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1ddf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1ddf38:
    // 0x1ddf38: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1ddf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1ddf3c:
    // 0x1ddf3c: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1ddf3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ddf40:
    // 0x1ddf40: 0xc05dd88  jal         func_177620
label_1ddf44:
    if (ctx->pc == 0x1DDF44u) {
        ctx->pc = 0x1DDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF40u;
        // 0x1ddf44: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF48u;
        goto label_1ddf48;
    }
    ctx->pc = 0x1DDF40u;
    SET_GPR_U32(ctx, 31, 0x1DDF48u);
    ctx->pc = 0x1DDF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF40u;
    // 0x1ddf44: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1DDF40u, 0x1DDF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF48u;
label_1ddf48:
    // 0x1ddf48: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1ddf48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ddf4c:
    // 0x1ddf4c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1ddf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ddf50:
    // 0x1ddf50: 0xa2070330  sb          $a3, 0x330($s0)
    ctx->pc = 0x1ddf50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 816), (uint8_t)GPR_U32(ctx, 7));
label_1ddf54:
    // 0x1ddf54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ddf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ddf58:
    // 0x1ddf58: 0xa2070331  sb          $a3, 0x331($s0)
    ctx->pc = 0x1ddf58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 7));
label_1ddf5c:
    // 0x1ddf5c: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1ddf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1ddf60:
    // 0x1ddf60: 0xa2070332  sb          $a3, 0x332($s0)
    ctx->pc = 0x1ddf60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 818), (uint8_t)GPR_U32(ctx, 7));
label_1ddf64:
    // 0x1ddf64: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ddf64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ddf68:
    // 0x1ddf68: 0xa2040333  sb          $a0, 0x333($s0)
    ctx->pc = 0x1ddf68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 819), (uint8_t)GPR_U32(ctx, 4));
label_1ddf6c:
    // 0x1ddf6c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ddf70:
    // 0x1ddf70: 0xae030334  sw          $v1, 0x334($s0)
    ctx->pc = 0x1ddf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
label_1ddf74:
    // 0x1ddf74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ddf78:
    // 0x1ddf78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ddf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ddf7c:
    // 0x1ddf7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddf80:
    // 0x1ddf80: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1ddf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1ddf84:
    // 0x1ddf84: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x1ddf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_1ddf88:
    // 0x1ddf88: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x1ddf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
label_1ddf8c:
    // 0x1ddf8c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ddf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ddf90:
    // 0x1ddf90: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1ddf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1ddf94:
    // 0x1ddf94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ddf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf98:
    // 0x1ddf98: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1ddf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1ddf9c:
    // 0x1ddf9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ddf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ddfa0:
    // 0x1ddfa0: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1ddfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1ddfa4:
    // 0x1ddfa4: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x1ddfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_1ddfa8:
    // 0x1ddfa8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1ddfa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ddfac:
    // 0x1ddfac: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x1ddfacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_1ddfb0:
    // 0x1ddfb0: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1ddfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ddfb4:
    // 0x1ddfb4: 0xc05dd88  jal         func_177620
label_1ddfb8:
    if (ctx->pc == 0x1DDFB8u) {
        ctx->pc = 0x1DDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFB4u;
        // 0x1ddfb8: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFBCu;
        goto label_1ddfbc;
    }
    ctx->pc = 0x1DDFB4u;
    SET_GPR_U32(ctx, 31, 0x1DDFBCu);
    ctx->pc = 0x1DDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFB4u;
    // 0x1ddfb8: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1DDFB4u, 0x1DDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDFBCu;
label_1ddfbc:
    // 0x1ddfbc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1ddfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1ddfc0:
    // 0x1ddfc0: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1ddfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_1ddfc4:
    // 0x1ddfc4: 0xa20303d0  sb          $v1, 0x3D0($s0)
    ctx->pc = 0x1ddfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 976), (uint8_t)GPR_U32(ctx, 3));
label_1ddfc8:
    // 0x1ddfc8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1ddfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1ddfcc:
    // 0x1ddfcc: 0xa20503d1  sb          $a1, 0x3D1($s0)
    ctx->pc = 0x1ddfccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 977), (uint8_t)GPR_U32(ctx, 5));
label_1ddfd0:
    // 0x1ddfd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ddfd4:
    // 0x1ddfd4: 0xa20503d2  sb          $a1, 0x3D2($s0)
    ctx->pc = 0x1ddfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 978), (uint8_t)GPR_U32(ctx, 5));
label_1ddfd8:
    // 0x1ddfd8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ddfd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1ddfdc:
    // 0x1ddfdc: 0xa20403d3  sb          $a0, 0x3D3($s0)
    ctx->pc = 0x1ddfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 979), (uint8_t)GPR_U32(ctx, 4));
label_1ddfe0:
    // 0x1ddfe0: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x1ddfe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_1ddfe4:
    // 0x1ddfe4: 0xae0303d4  sw          $v1, 0x3D4($s0)
    ctx->pc = 0x1ddfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 3));
label_1ddfe8:
    // 0x1ddfe8: 0x26310088  addiu       $s1, $s1, 0x88
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_1ddfec:
    // 0x1ddfec: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1ddfecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ddff0:
    // 0x1ddff0: 0x1460ff81  bnez        $v1, . + 4 + (-0x7F << 2)
label_1ddff4:
    if (ctx->pc == 0x1DDFF4u) {
        ctx->pc = 0x1DDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFF0u;
        // 0x1ddff4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFF8u;
        goto label_1ddff8;
    }
    ctx->pc = 0x1DDFF0u;
    {
        const bool branch_taken_0x1ddff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFF0u;
        // 0x1ddff4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddff0) {
            ctx->pc = 0x1DDDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dddf8; return; }
        }
    }
    ctx->pc = 0x1DDFF8u;
label_1ddff8:
    // 0x1ddff8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1ddffc:
    // 0x1ddffc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ddffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1de000:
    // 0x1de000: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1de000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1de004:
    // 0x1de004: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1de008:
    // 0x1de008: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1de008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1de00c:
    // 0x1de00c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1de00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_1de010:
    // 0x1de010: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1de010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1de014:
    // 0x1de014: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1de014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de018:
    // 0x1de018: 0x1460fe4f  bnez        $v1, . + 4 + (-0x1B1 << 2)
label_1de01c:
    if (ctx->pc == 0x1DE01Cu) {
        ctx->pc = 0x1DE020u;
        goto label_1de020;
    }
    ctx->pc = 0x1DE018u;
    {
        const bool branch_taken_0x1de018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de018) {
            ctx->pc = 0x1DD958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dd958; return; }
        }
    }
    ctx->pc = 0x1DE020u;
label_1de020:
    // 0x1de020: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1de020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1de024:
    // 0x1de024: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1de024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1de028:
    // 0x1de028: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1de028u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1de02c:
    // 0x1de02c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1de02cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1de030:
    // 0x1de030: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1de030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1de034:
    // 0x1de034: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1de034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1de038:
    // 0x1de038: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1de038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1de03c:
    // 0x1de03c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1de03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1de040:
    // 0x1de040: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1de040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1de044:
    // 0x1de044: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1de044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1de048:
    // 0x1de048: 0x3e00008  jr          $ra
label_1de04c:
    if (ctx->pc == 0x1DE04Cu) {
        ctx->pc = 0x1DE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE048u;
        // 0x1de04c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE050u;
        goto label_1de050;
    }
    ctx->pc = 0x1DE048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE048u;
        // 0x1de04c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE050u;
label_1de050:
    // 0x1de050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1de054:
    // 0x1de054: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de058:
    // 0x1de058: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1de058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1de05c:
    // 0x1de05c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1de05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1de060:
    // 0x1de060: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1de060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1de064:
    // 0x1de064: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1de064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de068:
    // 0x1de068: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1de068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1de06c:
    // 0x1de06c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1de06cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de070:
    // 0x1de070: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1de070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1de074:
    // 0x1de074: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1de074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1de078:
    // 0x1de078: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1de078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1de07c:
    // 0x1de07c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1de080:
    // 0x1de080: 0xaf828ca0  sw          $v0, -0x7360($gp)
    ctx->pc = 0x1de080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
label_1de084:
    // 0x1de084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de088:
    // 0x1de088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de08c:
    // 0x1de08c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1de08cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1de090:
    // 0x1de090: 0xaf828c98  sw          $v0, -0x7368($gp)
    ctx->pc = 0x1de090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 2));
label_1de094:
    // 0x1de094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1de094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de098:
    // 0x1de098: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1de098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de09c:
    // 0x1de09c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1de09cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de0a0:
    // 0x1de0a0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1de0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1de0a4:
    // 0x1de0a4: 0x24420550  addiu       $v0, $v0, 0x550
    ctx->pc = 0x1de0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
label_1de0a8:
    // 0x1de0a8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1de0ac:
    // 0x1de0ac: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1de0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1de0b0:
    // 0x1de0b0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1de0b4:
    // 0x1de0b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1de0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1de0b8:
    // 0x1de0b8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1de0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de0bc:
    // 0x1de0bc: 0xc05e234  jal         func_1788D0
label_1de0c0:
    if (ctx->pc == 0x1DE0C0u) {
        ctx->pc = 0x1DE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0BCu;
        // 0x1de0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0C4u;
        goto label_1de0c4;
    }
    ctx->pc = 0x1DE0BCu;
    SET_GPR_U32(ctx, 31, 0x1DE0C4u);
    ctx->pc = 0x1DE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0BCu;
    // 0x1de0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1DE0BCu, 0x1DE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0C4u;
label_1de0c4:
    // 0x1de0c4: 0x26860148  addiu       $a2, $s4, 0x148
    ctx->pc = 0x1de0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 328));
label_1de0c8:
    // 0x1de0c8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1de0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1de0cc:
    // 0x1de0cc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1de0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1de0d0:
    // 0x1de0d0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x1de0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1de0d4:
    // 0x1de0d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1de0d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de0d8:
    // 0x1de0d8: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1de0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1de0dc:
    // 0x1de0dc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1de0dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de0e0:
    // 0x1de0e0: 0xc05e060  jal         func_178180
label_1de0e4:
    if (ctx->pc == 0x1DE0E4u) {
        ctx->pc = 0x1DE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0E0u;
        // 0x1de0e4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0E8u;
        goto label_1de0e8;
    }
    ctx->pc = 0x1DE0E0u;
    SET_GPR_U32(ctx, 31, 0x1DE0E8u);
    ctx->pc = 0x1DE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0E0u;
    // 0x1de0e4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1DE0E0u, 0x1DE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0E8u;
label_1de0e8:
    // 0x1de0e8: 0xa2400078  sb          $zero, 0x78($s2)
    ctx->pc = 0x1de0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 0));
label_1de0ec:
    // 0x1de0ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1de0f0:
    // 0x1de0f0: 0xa2400079  sb          $zero, 0x79($s2)
    ctx->pc = 0x1de0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 0));
label_1de0f4:
    // 0x1de0f4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1de0f8:
    // 0x1de0f8: 0xa240007a  sb          $zero, 0x7A($s2)
    ctx->pc = 0x1de0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 0));
label_1de0fc:
    // 0x1de0fc: 0xa240007b  sb          $zero, 0x7B($s2)
    ctx->pc = 0x1de0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 0));
label_1de100:
    // 0x1de100: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1de100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1de104:
    // 0x1de104: 0xa2400098  sb          $zero, 0x98($s2)
    ctx->pc = 0x1de104u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 0));
label_1de108:
    // 0x1de108: 0xa2400099  sb          $zero, 0x99($s2)
    ctx->pc = 0x1de108u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 0));
label_1de10c:
    // 0x1de10c: 0xa240009a  sb          $zero, 0x9A($s2)
    ctx->pc = 0x1de10cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 0));
label_1de110:
    // 0x1de110: 0xa240009b  sb          $zero, 0x9B($s2)
    ctx->pc = 0x1de110u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 0));
label_1de114:
    // 0x1de114: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x1de114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_1de118:
    // 0x1de118: 0xa2400088  sb          $zero, 0x88($s2)
    ctx->pc = 0x1de118u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 0));
label_1de11c:
    // 0x1de11c: 0xa2400089  sb          $zero, 0x89($s2)
    ctx->pc = 0x1de11cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 0));
label_1de120:
    // 0x1de120: 0xa240008a  sb          $zero, 0x8A($s2)
    ctx->pc = 0x1de120u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 0));
label_1de124:
    // 0x1de124: 0xa242008b  sb          $v0, 0x8B($s2)
    ctx->pc = 0x1de124u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 2));
label_1de128:
    // 0x1de128: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x1de128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_1de12c:
    // 0x1de12c: 0xa24000a8  sb          $zero, 0xA8($s2)
    ctx->pc = 0x1de12cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 168), (uint8_t)GPR_U32(ctx, 0));
label_1de130:
    // 0x1de130: 0xa24000a9  sb          $zero, 0xA9($s2)
    ctx->pc = 0x1de130u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 169), (uint8_t)GPR_U32(ctx, 0));
label_1de134:
    // 0x1de134: 0xa24000aa  sb          $zero, 0xAA($s2)
    ctx->pc = 0x1de134u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 170), (uint8_t)GPR_U32(ctx, 0));
label_1de138:
    // 0x1de138: 0xa24200ab  sb          $v0, 0xAB($s2)
    ctx->pc = 0x1de138u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 171), (uint8_t)GPR_U32(ctx, 2));
label_1de13c:
    // 0x1de13c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1de140:
    if (ctx->pc == 0x1DE140u) {
        ctx->pc = 0x1DE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE13Cu;
        // 0x1de140: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE144u;
        goto label_1de144;
    }
    ctx->pc = 0x1DE13Cu;
    {
        const bool branch_taken_0x1de13c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE13Cu;
        // 0x1de140: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de13c) {
            ctx->pc = 0x1DE150u;
            goto label_1de150;
        }
    }
    ctx->pc = 0x1DE144u;
label_1de144:
    // 0x1de144: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de148:
    // 0x1de148: 0x1000000a  b           . + 4 + (0xA << 2)
label_1de14c:
    if (ctx->pc == 0x1DE14Cu) {
        ctx->pc = 0x1DE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE148u;
        // 0x1de14c: 0xdc250528  ld          $a1, 0x528($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE150u;
        goto label_1de150;
    }
    ctx->pc = 0x1DE148u;
    {
        const bool branch_taken_0x1de148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE148u;
        // 0x1de14c: 0xdc250528  ld          $a1, 0x528($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de148) {
            ctx->pc = 0x1DE174u;
            goto label_1de174;
        }
    }
    ctx->pc = 0x1DE150u;
label_1de150:
    // 0x1de150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de154:
    // 0x1de154: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1de158:
    if (ctx->pc == 0x1DE158u) {
        ctx->pc = 0x1DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE154u;
        // 0x1de158: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE15Cu;
        goto label_1de15c;
    }
    ctx->pc = 0x1DE154u;
    {
        const bool branch_taken_0x1de154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE154u;
        // 0x1de158: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de154) {
            ctx->pc = 0x1DE164u;
            goto label_1de164;
        }
    }
    ctx->pc = 0x1DE15Cu;
label_1de15c:
    // 0x1de15c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1de160:
    if (ctx->pc == 0x1DE160u) {
        ctx->pc = 0x1DE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE15Cu;
        // 0x1de160: 0xdc250530  ld          $a1, 0x530($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE164u;
        goto label_1de164;
    }
    ctx->pc = 0x1DE15Cu;
    {
        const bool branch_taken_0x1de15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE15Cu;
        // 0x1de160: 0xdc250530  ld          $a1, 0x530($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de15c) {
            ctx->pc = 0x1DE174u;
            goto label_1de174;
        }
    }
    ctx->pc = 0x1DE164u;
label_1de164:
    // 0x1de164: 0x0  nop
    ctx->pc = 0x1de164u;
    // NOP
label_1de168:
    // 0x1de168: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de16c:
    // 0x1de16c: 0xdc250538  ld          $a1, 0x538($at)
    ctx->pc = 0x1de16cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1336)));
label_1de170:
    // 0x1de170: 0x0  nop
    ctx->pc = 0x1de170u;
    // NOP
label_1de174:
    // 0x1de174: 0x0  nop
    ctx->pc = 0x1de174u;
    // NOP
label_1de178:
    // 0x1de178: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1de178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1de17c:
    // 0x1de17c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1de17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1de180:
    // 0x1de180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1de180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de184:
    // 0x1de184: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1de184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1de188:
    // 0x1de188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de18c:
    // 0x1de18c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1de18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1de190:
    // 0x1de190: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1de190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_1de194:
    // 0x1de194: 0x26870148  addiu       $a3, $s4, 0x148
    ctx->pc = 0x1de194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 328));
label_1de198:
    // 0x1de198: 0x328affff  andi        $t2, $s4, 0xFFFF
    ctx->pc = 0x1de198u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_1de19c:
    // 0x1de19c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1de19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1de1a0:
    // 0x1de1a0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1de1a4:
    // 0x1de1a4: 0x24080029  addiu       $t0, $zero, 0x29
    ctx->pc = 0x1de1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1de1a8:
    // 0x1de1a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1de1a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de1ac:
    // 0x1de1ac: 0xc05de30  jal         func_1778C0
label_1de1b0:
    if (ctx->pc == 0x1DE1B0u) {
        ctx->pc = 0x1DE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1ACu;
        // 0x1de1b0: 0x240b0120  addiu       $t3, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1B4u;
        goto label_1de1b4;
    }
    ctx->pc = 0x1DE1ACu;
    SET_GPR_U32(ctx, 31, 0x1DE1B4u);
    ctx->pc = 0x1DE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1ACu;
    // 0x1de1b0: 0x240b0120  addiu       $t3, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DE1ACu, 0x1DE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B4u;
label_1de1b4:
    // 0x1de1b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1de1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1de1b8:
    // 0x1de1b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1de1bc:
    // 0x1de1bc: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1de1bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de1c0:
    // 0x1de1c0: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_1de1c4:
    if (ctx->pc == 0x1DE1C4u) {
        ctx->pc = 0x1DE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C0u;
        // 0x1de1c4: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1C8u;
        goto label_1de1c8;
    }
    ctx->pc = 0x1DE1C0u;
    {
        const bool branch_taken_0x1de1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C0u;
        // 0x1de1c4: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1c0) {
            ctx->pc = 0x1DE0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de0a0;
        }
    }
    ctx->pc = 0x1DE1C8u;
label_1de1c8:
    // 0x1de1c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1de1c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1de1cc:
    // 0x1de1cc: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x1de1ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de1d0:
    // 0x1de1d0: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_1de1d4:
    if (ctx->pc == 0x1DE1D4u) {
        ctx->pc = 0x1DE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D0u;
        // 0x1de1d4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1D8u;
        goto label_1de1d8;
    }
    ctx->pc = 0x1DE1D0u;
    {
        const bool branch_taken_0x1de1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D0u;
        // 0x1de1d4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1d0) {
            ctx->pc = 0x1DE094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de094;
        }
    }
    ctx->pc = 0x1DE1D8u;
label_1de1d8:
    // 0x1de1d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1de1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1de1dc:
    // 0x1de1dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1de1dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1de1e0:
    // 0x1de1e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1de1e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1de1e4:
    // 0x1de1e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1de1e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1de1e8:
    // 0x1de1e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1de1e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1de1ec:
    // 0x1de1ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1de1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1de1f0:
    // 0x1de1f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1de1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1de1f4:
    // 0x1de1f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1de1f8:
    // 0x1de1f8: 0x3e00008  jr          $ra
label_1de1fc:
    if (ctx->pc == 0x1DE1FCu) {
        ctx->pc = 0x1DE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1F8u;
        // 0x1de1fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE200u;
        goto label_1de200;
    }
    ctx->pc = 0x1DE1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1F8u;
        // 0x1de1fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE200u;
label_1de200:
    // 0x1de200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1de204:
    // 0x1de204: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1de204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de208:
    // 0x1de208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1de208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1de20c:
    // 0x1de20c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1de20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1de210:
    // 0x1de210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1de214:
    // 0x1de214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de218:
    // 0x1de218: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1de218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de21c:
    // 0x1de21c: 0x1083011e  beq         $a0, $v1, . + 4 + (0x11E << 2)
label_1de220:
    if (ctx->pc == 0x1DE220u) {
        ctx->pc = 0x1DE224u;
        goto label_1de224;
    }
    ctx->pc = 0x1DE21Cu;
    {
        const bool branch_taken_0x1de21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de21c) {
            ctx->pc = 0x1DE698u;
            { ctx->pc = 0x1de698; return; }
        }
    }
    ctx->pc = 0x1DE224u;
label_1de224:
    // 0x1de224: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1de224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1de228:
    // 0x1de228: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1de228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1de22c:
    // 0x1de22c: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1de22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1de230:
    // 0x1de230: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1de230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1de234:
    // 0x1de234: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1de234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1de238:
    // 0x1de238: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1de238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de23c:
    // 0x1de23c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1de23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de240:
    // 0x1de240: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1de240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1de244:
    // 0x1de244: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1de244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de248:
    // 0x1de248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1de248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1de24c:
    // 0x1de24c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1de24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1de250:
    // 0x1de250: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1de250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1de254:
    // 0x1de254: 0x24420550  addiu       $v0, $v0, 0x550
    ctx->pc = 0x1de254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
label_1de258:
    // 0x1de258: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1de258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1de25c:
    // 0x1de25c: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1de25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de260:
    // 0x1de260: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1de260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1de264:
    // 0x1de264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1de268:
    // 0x1de268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de26c:
    // 0x1de26c: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_1de270:
    if (ctx->pc == 0x1DE270u) {
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE274u;
        goto label_1de274;
    }
    ctx->pc = 0x1DE26Cu;
    {
        const bool branch_taken_0x1de26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de26c) {
            ctx->pc = 0x1DE2A4u;
            goto label_1de2a4;
        }
    }
    ctx->pc = 0x1DE274u;
label_1de274:
    // 0x1de274: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de278:
    // 0x1de278: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de27c:
    // 0x1de27c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1de27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1de280:
    // 0x1de280: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1de284:
    // 0x1de284: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1de284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de288:
    // 0x1de288: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1de288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1de28c:
    // 0x1de28c: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
label_1de290:
    if (ctx->pc == 0x1DE290u) {
        ctx->pc = 0x1DE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE28Cu;
        // 0x1de290: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE294u;
        goto label_1de294;
    }
    ctx->pc = 0x1DE28Cu;
    {
        const bool branch_taken_0x1de28c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE28Cu;
        // 0x1de290: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de28c) {
            ctx->pc = 0x1DE2E4u;
            goto label_1de2e4;
        }
    }
    ctx->pc = 0x1DE294u;
label_1de294:
    // 0x1de294: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1de294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1de298:
    // 0x1de298: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1de298u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1de29c:
    // 0x1de29c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1de2a0:
    if (ctx->pc == 0x1DE2A0u) {
        ctx->pc = 0x1DE2A4u;
        goto label_1de2a4;
    }
    ctx->pc = 0x1DE29Cu;
    {
        const bool branch_taken_0x1de29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de29c) {
            ctx->pc = 0x1DE2E4u;
            goto label_1de2e4;
        }
    }
    ctx->pc = 0x1DE2A4u;
label_1de2a4:
    // 0x1de2a4: 0x0  nop
    ctx->pc = 0x1de2a4u;
    // NOP
label_1de2a8:
    // 0x1de2a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1de2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de2ac:
    // 0x1de2ac: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_1de2b0:
    if (ctx->pc == 0x1DE2B0u) {
        ctx->pc = 0x1DE2B4u;
        goto label_1de2b4;
    }
    ctx->pc = 0x1DE2ACu;
    {
        const bool branch_taken_0x1de2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de2ac) {
            ctx->pc = 0x1DE2DCu;
            goto label_1de2dc;
        }
    }
    ctx->pc = 0x1DE2B4u;
label_1de2b4:
    // 0x1de2b4: 0x8f838c9c  lw          $v1, -0x7364($gp)
    ctx->pc = 0x1de2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de2b8:
    // 0x1de2b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1de2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1de2bc:
    // 0x1de2bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1de2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de2c0:
    // 0x1de2c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1de2c4:
    // 0x1de2c4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1de2c8:
    if (ctx->pc == 0x1DE2C8u) {
        ctx->pc = 0x1DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2C4u;
        // 0x1de2c8: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE2CCu;
        goto label_1de2cc;
    }
    ctx->pc = 0x1DE2C4u;
    {
        const bool branch_taken_0x1de2c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2C4u;
        // 0x1de2c8: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2c4) {
            ctx->pc = 0x1DE2E4u;
            goto label_1de2e4;
        }
    }
    ctx->pc = 0x1DE2CCu;
label_1de2cc:
    // 0x1de2cc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1de2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1de2d0:
    // 0x1de2d0: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x1de2d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_1de2d4:
    // 0x1de2d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1de2d8:
    if (ctx->pc == 0x1DE2D8u) {
        ctx->pc = 0x1DE2DCu;
        goto label_1de2dc;
    }
    ctx->pc = 0x1DE2D4u;
    {
        const bool branch_taken_0x1de2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de2d4) {
            ctx->pc = 0x1DE2E4u;
            goto label_1de2e4;
        }
    }
    ctx->pc = 0x1DE2DCu;
label_1de2dc:
    // 0x1de2dc: 0x0  nop
    ctx->pc = 0x1de2dcu;
    // NOP
label_1de2e0:
    // 0x1de2e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de2e4:
    // 0x1de2e4: 0x0  nop
    ctx->pc = 0x1de2e4u;
    // NOP
label_1de2e8:
    // 0x1de2e8: 0x248200d0  addiu       $v0, $a0, 0xD0
    ctx->pc = 0x1de2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1de2ec:
    // 0x1de2ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1de2f0:
    // 0x1de2f0: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1de2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1de2f4:
    // 0x1de2f4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1de2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1de2f8:
    // 0x1de2f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1de2fc:
    // 0x1de2fc: 0xa4a30080  sh          $v1, 0x80($a1)
    ctx->pc = 0x1de2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 3));
label_1de300:
    // 0x1de300: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1de300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1de304:
    // 0x1de304: 0xa4a200a0  sh          $v0, 0xA0($a1)
    ctx->pc = 0x1de304u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 2));
label_1de308:
    // 0x1de308: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1de308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de30c:
    // 0x1de30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de310:
    // 0x1de310: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_1de314:
    if (ctx->pc == 0x1DE314u) {
        ctx->pc = 0x1DE318u;
        goto label_1de318;
    }
    ctx->pc = 0x1DE310u;
    {
        const bool branch_taken_0x1de310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de310) {
            ctx->pc = 0x1DE3ECu;
            goto label_1de3ec;
        }
    }
    ctx->pc = 0x1DE318u;
label_1de318:
    // 0x1de318: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1de318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1de31c:
    // 0x1de31c: 0x14500033  bne         $v0, $s0, . + 4 + (0x33 << 2)
label_1de320:
    if (ctx->pc == 0x1DE320u) {
        ctx->pc = 0x1DE324u;
        goto label_1de324;
    }
    ctx->pc = 0x1DE31Cu;
    {
        const bool branch_taken_0x1de31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1de31c) {
            ctx->pc = 0x1DE3ECu;
            goto label_1de3ec;
        }
    }
    ctx->pc = 0x1DE324u;
label_1de324:
    // 0x1de324: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de328:
    // 0x1de328: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1de32c:
    if (ctx->pc == 0x1DE32Cu) {
        ctx->pc = 0x1DE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE328u;
        // 0x1de32c: 0x3046001f  andi        $a2, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE330u;
        goto label_1de330;
    }
    ctx->pc = 0x1DE328u;
    {
        const bool branch_taken_0x1de328 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE328u;
        // 0x1de32c: 0x3046001f  andi        $a2, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de328) {
            ctx->pc = 0x1DE33Cu;
            goto label_1de33c;
        }
    }
    ctx->pc = 0x1DE330u;
label_1de330:
    // 0x1de330: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1de334:
    if (ctx->pc == 0x1DE334u) {
        ctx->pc = 0x1DE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE330u;
        // 0x1de334: 0x28c10010  slti        $at, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE338u;
        goto label_1de338;
    }
    ctx->pc = 0x1DE330u;
    {
        const bool branch_taken_0x1de330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE330u;
        // 0x1de334: 0x28c10010  slti        $at, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de330) {
            ctx->pc = 0x1DE340u;
            goto label_1de340;
        }
    }
    ctx->pc = 0x1DE338u;
label_1de338:
    // 0x1de338: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1de338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_1de33c:
    // 0x1de33c: 0x28c10010  slti        $at, $a2, 0x10
    ctx->pc = 0x1de33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_1de340:
    // 0x1de340: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1de344:
    if (ctx->pc == 0x1DE344u) {
        ctx->pc = 0x1DE348u;
        goto label_1de348;
    }
    ctx->pc = 0x1DE340u;
    {
        const bool branch_taken_0x1de340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de340) {
            ctx->pc = 0x1DE394u;
            goto label_1de394;
        }
    }
    ctx->pc = 0x1DE348u;
label_1de348:
    // 0x1de348: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1de348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1de34c:
    // 0x1de34c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de350:
    if (ctx->pc == 0x1DE350u) {
        ctx->pc = 0x1DE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE34Cu;
        // 0x1de350: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE354u;
        goto label_1de354;
    }
    ctx->pc = 0x1DE34Cu;
    {
        const bool branch_taken_0x1de34c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE34Cu;
        // 0x1de350: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de34c) {
            ctx->pc = 0x1DE35Cu;
            goto label_1de35c;
        }
    }
    ctx->pc = 0x1DE354u;
label_1de354:
    // 0x1de354: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1de358:
    // 0x1de358: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1de358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1de35c:
    // 0x1de35c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1de35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1de360:
    // 0x1de360: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1de360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1de364:
    // 0x1de364: 0xa0a400a8  sb          $a0, 0xA8($a1)
    ctx->pc = 0x1de364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 4));
label_1de368:
    // 0x1de368: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1de368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
label_1de36c:
    // 0x1de36c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de370:
    if (ctx->pc == 0x1DE370u) {
        ctx->pc = 0x1DE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE36Cu;
        // 0x1de370: 0xa0a40088  sb          $a0, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE374u;
        goto label_1de374;
    }
    ctx->pc = 0x1DE36Cu;
    {
        const bool branch_taken_0x1de36c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE36Cu;
        // 0x1de370: 0xa0a40088  sb          $a0, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de36c) {
            ctx->pc = 0x1DE37Cu;
            goto label_1de37c;
        }
    }
    ctx->pc = 0x1DE374u;
label_1de374:
    // 0x1de374: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1de374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1de378:
    // 0x1de378: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1de378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1de37c:
    // 0x1de37c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1de37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1de380:
    // 0x1de380: 0xa0a200a9  sb          $v0, 0xA9($a1)
    ctx->pc = 0x1de380u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 2));
label_1de384:
    // 0x1de384: 0xa0a20089  sb          $v0, 0x89($a1)
    ctx->pc = 0x1de384u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 2));
label_1de388:
    // 0x1de388: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x1de388u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_1de38c:
    // 0x1de38c: 0x10000068  b           . + 4 + (0x68 << 2)
label_1de390:
    if (ctx->pc == 0x1DE390u) {
        ctx->pc = 0x1DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38Cu;
        // 0x1de390: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE394u;
        goto label_1de394;
    }
    ctx->pc = 0x1DE38Cu;
    {
        const bool branch_taken_0x1de38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38Cu;
        // 0x1de390: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38c) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE394u;
label_1de394:
    // 0x1de394: 0x0  nop
    ctx->pc = 0x1de394u;
    // NOP
label_1de398:
    // 0x1de398: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1de39c:
    // 0x1de39c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1de39cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de3a0:
    // 0x1de3a0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1de3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1de3a4:
    // 0x1de3a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de3a8:
    if (ctx->pc == 0x1DE3A8u) {
        ctx->pc = 0x1DE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3A4u;
        // 0x1de3a8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3ACu;
        goto label_1de3ac;
    }
    ctx->pc = 0x1DE3A4u;
    {
        const bool branch_taken_0x1de3a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3A4u;
        // 0x1de3a8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3a4) {
            ctx->pc = 0x1DE3B4u;
            goto label_1de3b4;
        }
    }
    ctx->pc = 0x1DE3ACu;
label_1de3ac:
    // 0x1de3ac: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1de3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1de3b0:
    // 0x1de3b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1de3b4:
    // 0x1de3b4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1de3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1de3b8:
    // 0x1de3b8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1de3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1de3bc:
    // 0x1de3bc: 0xa0a400a8  sb          $a0, 0xA8($a1)
    ctx->pc = 0x1de3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 4));
label_1de3c0:
    // 0x1de3c0: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1de3c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
label_1de3c4:
    // 0x1de3c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de3c8:
    if (ctx->pc == 0x1DE3C8u) {
        ctx->pc = 0x1DE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3C4u;
        // 0x1de3c8: 0xa0a40088  sb          $a0, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3CCu;
        goto label_1de3cc;
    }
    ctx->pc = 0x1DE3C4u;
    {
        const bool branch_taken_0x1de3c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3C4u;
        // 0x1de3c8: 0xa0a40088  sb          $a0, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3c4) {
            ctx->pc = 0x1DE3D4u;
            goto label_1de3d4;
        }
    }
    ctx->pc = 0x1DE3CCu;
label_1de3cc:
    // 0x1de3cc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1de3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1de3d0:
    // 0x1de3d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1de3d4:
    // 0x1de3d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1de3d8:
    // 0x1de3d8: 0xa0a200a9  sb          $v0, 0xA9($a1)
    ctx->pc = 0x1de3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 2));
label_1de3dc:
    // 0x1de3dc: 0xa0a20089  sb          $v0, 0x89($a1)
    ctx->pc = 0x1de3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 2));
label_1de3e0:
    // 0x1de3e0: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x1de3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_1de3e4:
    // 0x1de3e4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1de3e8:
    if (ctx->pc == 0x1DE3E8u) {
        ctx->pc = 0x1DE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3E4u;
        // 0x1de3e8: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3ECu;
        goto label_1de3ec;
    }
    ctx->pc = 0x1DE3E4u;
    {
        const bool branch_taken_0x1de3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3E4u;
        // 0x1de3e8: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3e4) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE3ECu;
label_1de3ec:
    // 0x1de3ec: 0x0  nop
    ctx->pc = 0x1de3ecu;
    // NOP
label_1de3f0:
    // 0x1de3f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de3f4:
    // 0x1de3f4: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_1de3f8:
    if (ctx->pc == 0x1DE3F8u) {
        ctx->pc = 0x1DE3FCu;
        goto label_1de3fc;
    }
    ctx->pc = 0x1DE3F4u;
    {
        const bool branch_taken_0x1de3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de3f4) {
            ctx->pc = 0x1DE518u;
            goto label_1de518;
        }
    }
    ctx->pc = 0x1DE3FCu;
label_1de3fc:
    // 0x1de3fc: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1de3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1de400:
    // 0x1de400: 0x14500045  bne         $v0, $s0, . + 4 + (0x45 << 2)
label_1de404:
    if (ctx->pc == 0x1DE404u) {
        ctx->pc = 0x1DE408u;
        goto label_1de408;
    }
    ctx->pc = 0x1DE400u;
    {
        const bool branch_taken_0x1de400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1de400) {
            ctx->pc = 0x1DE518u;
            goto label_1de518;
        }
    }
    ctx->pc = 0x1DE408u;
label_1de408:
    // 0x1de408: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de40c:
    // 0x1de40c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1de410:
    if (ctx->pc == 0x1DE410u) {
        ctx->pc = 0x1DE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE40Cu;
        // 0x1de410: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE414u;
        goto label_1de414;
    }
    ctx->pc = 0x1DE40Cu;
    {
        const bool branch_taken_0x1de40c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE40Cu;
        // 0x1de410: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de40c) {
            ctx->pc = 0x1DE420u;
            goto label_1de420;
        }
    }
    ctx->pc = 0x1DE414u;
label_1de414:
    // 0x1de414: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1de418:
    if (ctx->pc == 0x1DE418u) {
        ctx->pc = 0x1DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE414u;
        // 0x1de418: 0x28c10008  slti        $at, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE41Cu;
        goto label_1de41c;
    }
    ctx->pc = 0x1DE414u;
    {
        const bool branch_taken_0x1de414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE414u;
        // 0x1de418: 0x28c10008  slti        $at, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de414) {
            ctx->pc = 0x1DE424u;
            goto label_1de424;
        }
    }
    ctx->pc = 0x1DE41Cu;
label_1de41c:
    // 0x1de41c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1de41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1de420:
    // 0x1de420: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x1de420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_1de424:
    // 0x1de424: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1de428:
    if (ctx->pc == 0x1DE428u) {
        ctx->pc = 0x1DE42Cu;
        goto label_1de42c;
    }
    ctx->pc = 0x1DE424u;
    {
        const bool branch_taken_0x1de424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de424) {
            ctx->pc = 0x1DE49Cu;
            goto label_1de49c;
        }
    }
    ctx->pc = 0x1DE42Cu;
label_1de42c:
    // 0x1de42c: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x1de42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
label_1de430:
    // 0x1de430: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1de430u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de434:
    // 0x1de434: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de438:
    if (ctx->pc == 0x1DE438u) {
        ctx->pc = 0x1DE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE434u;
        // 0x1de438: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE43Cu;
        goto label_1de43c;
    }
    ctx->pc = 0x1DE434u;
    {
        const bool branch_taken_0x1de434 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE434u;
        // 0x1de438: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de434) {
            ctx->pc = 0x1DE444u;
            goto label_1de444;
        }
    }
    ctx->pc = 0x1DE43Cu;
label_1de43c:
    // 0x1de43c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de440:
    // 0x1de440: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de444:
    // 0x1de444: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x1de444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1de448:
    // 0x1de448: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1de448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1de44c:
    // 0x1de44c: 0xa0a300a8  sb          $v1, 0xA8($a1)
    ctx->pc = 0x1de44cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 3));
label_1de450:
    // 0x1de450: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1de450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de454:
    // 0x1de454: 0xa0a30088  sb          $v1, 0x88($a1)
    ctx->pc = 0x1de454u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 3));
label_1de458:
    // 0x1de458: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1de458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1de45c:
    // 0x1de45c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de460:
    if (ctx->pc == 0x1DE460u) {
        ctx->pc = 0x1DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE45Cu;
        // 0x1de460: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE464u;
        goto label_1de464;
    }
    ctx->pc = 0x1DE45Cu;
    {
        const bool branch_taken_0x1de45c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE45Cu;
        // 0x1de460: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de45c) {
            ctx->pc = 0x1DE46Cu;
            goto label_1de46c;
        }
    }
    ctx->pc = 0x1DE464u;
label_1de464:
    // 0x1de464: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de468:
    // 0x1de468: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de46c:
    // 0x1de46c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1de46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de470:
    // 0x1de470: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1de470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1de474:
    // 0x1de474: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1de474u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1de478:
    // 0x1de478: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1de478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_1de47c:
    // 0x1de47c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de480:
    if (ctx->pc == 0x1DE480u) {
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE484u;
        goto label_1de484;
    }
    ctx->pc = 0x1DE47Cu;
    {
        const bool branch_taken_0x1de47c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de47c) {
            ctx->pc = 0x1DE48Cu;
            goto label_1de48c;
        }
    }
    ctx->pc = 0x1DE484u;
label_1de484:
    // 0x1de484: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de488:
    // 0x1de488: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de48c:
    // 0x1de48c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1de48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de490:
    // 0x1de490: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x1de490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_1de494:
    // 0x1de494: 0x10000026  b           . + 4 + (0x26 << 2)
label_1de498:
    if (ctx->pc == 0x1DE498u) {
        ctx->pc = 0x1DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE494u;
        // 0x1de498: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE49Cu;
        goto label_1de49c;
    }
    ctx->pc = 0x1DE494u;
    {
        const bool branch_taken_0x1de494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE494u;
        // 0x1de498: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de494) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE49Cu;
label_1de49c:
    // 0x1de49c: 0x0  nop
    ctx->pc = 0x1de49cu;
    // NOP
label_1de4a0:
    // 0x1de4a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de4a4:
    // 0x1de4a4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1de4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de4a8:
    // 0x1de4a8: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x1de4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
label_1de4ac:
    // 0x1de4ac: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1de4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de4b0:
    // 0x1de4b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de4b4:
    if (ctx->pc == 0x1DE4B4u) {
        ctx->pc = 0x1DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4B0u;
        // 0x1de4b4: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4B8u;
        goto label_1de4b8;
    }
    ctx->pc = 0x1DE4B0u;
    {
        const bool branch_taken_0x1de4b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4B0u;
        // 0x1de4b4: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4b0) {
            ctx->pc = 0x1DE4C0u;
            goto label_1de4c0;
        }
    }
    ctx->pc = 0x1DE4B8u;
label_1de4b8:
    // 0x1de4b8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de4bc:
    // 0x1de4bc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de4bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de4c0:
    // 0x1de4c0: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x1de4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1de4c4:
    // 0x1de4c4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1de4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1de4c8:
    // 0x1de4c8: 0xa0a300a8  sb          $v1, 0xA8($a1)
    ctx->pc = 0x1de4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 3));
label_1de4cc:
    // 0x1de4cc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1de4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de4d0:
    // 0x1de4d0: 0xa0a30088  sb          $v1, 0x88($a1)
    ctx->pc = 0x1de4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 3));
label_1de4d4:
    // 0x1de4d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1de4d8:
    // 0x1de4d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de4dc:
    if (ctx->pc == 0x1DE4DCu) {
        ctx->pc = 0x1DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D8u;
        // 0x1de4dc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4E0u;
        goto label_1de4e0;
    }
    ctx->pc = 0x1DE4D8u;
    {
        const bool branch_taken_0x1de4d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D8u;
        // 0x1de4dc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4d8) {
            ctx->pc = 0x1DE4E8u;
            goto label_1de4e8;
        }
    }
    ctx->pc = 0x1DE4E0u;
label_1de4e0:
    // 0x1de4e0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de4e4:
    // 0x1de4e4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de4e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de4e8:
    // 0x1de4e8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1de4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de4ec:
    // 0x1de4ec: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1de4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1de4f0:
    // 0x1de4f0: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1de4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1de4f4:
    // 0x1de4f4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1de4f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_1de4f8:
    // 0x1de4f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de4fc:
    if (ctx->pc == 0x1DE4FCu) {
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE500u;
        goto label_1de500;
    }
    ctx->pc = 0x1DE4F8u;
    {
        const bool branch_taken_0x1de4f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f8) {
            ctx->pc = 0x1DE508u;
            goto label_1de508;
        }
    }
    ctx->pc = 0x1DE500u;
label_1de500:
    // 0x1de500: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de504:
    // 0x1de504: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de508:
    // 0x1de508: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1de508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de50c:
    // 0x1de50c: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x1de50cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_1de510:
    // 0x1de510: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de514:
    if (ctx->pc == 0x1DE514u) {
        ctx->pc = 0x1DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE510u;
        // 0x1de514: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE518u;
        goto label_1de518;
    }
    ctx->pc = 0x1DE510u;
    {
        const bool branch_taken_0x1de510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE510u;
        // 0x1de514: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de510) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE518u;
label_1de518:
    // 0x1de518: 0xa0a000a8  sb          $zero, 0xA8($a1)
    ctx->pc = 0x1de518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 0));
label_1de51c:
    // 0x1de51c: 0xa0a00088  sb          $zero, 0x88($a1)
    ctx->pc = 0x1de51cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 0));
label_1de520:
    // 0x1de520: 0xa0a000a9  sb          $zero, 0xA9($a1)
    ctx->pc = 0x1de520u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 0));
label_1de524:
    // 0x1de524: 0xa0a00089  sb          $zero, 0x89($a1)
    ctx->pc = 0x1de524u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 0));
label_1de528:
    // 0x1de528: 0xa0a000aa  sb          $zero, 0xAA($a1)
    ctx->pc = 0x1de528u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 0));
label_1de52c:
    // 0x1de52c: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x1de52cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
label_1de530:
    // 0x1de530: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de534:
    // 0x1de534: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1de538:
    if (ctx->pc == 0x1DE538u) {
        ctx->pc = 0x1DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE534u;
        // 0x1de538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE53Cu;
        goto label_1de53c;
    }
    ctx->pc = 0x1DE534u;
    {
        const bool branch_taken_0x1de534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE534u;
        // 0x1de538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de534) {
            ctx->pc = 0x1DE574u;
            goto label_1de574;
        }
    }
    ctx->pc = 0x1DE53Cu;
label_1de53c:
    // 0x1de53c: 0x8f838c9c  lw          $v1, -0x7364($gp)
    ctx->pc = 0x1de53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de540:
    // 0x1de540: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1de540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1de544:
    // 0x1de544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de548:
    // 0x1de548: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1de548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1de54c:
    // 0x1de54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de550:
    // 0x1de550: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1de554:
    // 0x1de554: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1de558:
    if (ctx->pc == 0x1DE558u) {
        ctx->pc = 0x1DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE554u;
        // 0x1de558: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE55Cu;
        goto label_1de55c;
    }
    ctx->pc = 0x1DE554u;
    {
        const bool branch_taken_0x1de554 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE554u;
        // 0x1de558: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de554) {
            ctx->pc = 0x1DE564u;
            goto label_1de564;
        }
    }
    ctx->pc = 0x1DE55Cu;
label_1de55c:
    // 0x1de55c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1de55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1de560:
    // 0x1de560: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1de560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1de564:
    // 0x1de564: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x1de564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1de568:
    // 0x1de568: 0x10000002  b           . + 4 + (0x2 << 2)
label_1de56c:
    if (ctx->pc == 0x1DE56Cu) {
        ctx->pc = 0x1DE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE568u;
        // 0x1de56c: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE570u;
        goto label_1de570;
    }
    ctx->pc = 0x1DE568u;
    {
        const bool branch_taken_0x1de568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE568u;
        // 0x1de56c: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de568) {
            ctx->pc = 0x1DE574u;
            goto label_1de574;
        }
    }
    ctx->pc = 0x1DE570u;
label_1de570:
    // 0x1de570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de574:
    // 0x1de574: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1de574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1de578:
    // 0x1de578: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x1de578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1de57c:
    // 0x1de57c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1de57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1de580:
    // 0x1de580: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1de584:
    // 0x1de584: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1de584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1de588:
    // 0x1de588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1de588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1de58c:
    // 0x1de58c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1de58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1de590:
    // 0x1de590: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1de590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1de594:
    // 0x1de594: 0xa4a30140  sh          $v1, 0x140($a1)
    ctx->pc = 0x1de594u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 3));
label_1de598:
    // 0x1de598: 0xa4a20150  sh          $v0, 0x150($a1)
    ctx->pc = 0x1de598u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 336), (uint16_t)GPR_U32(ctx, 2));
label_1de59c:
    // 0x1de59c: 0x8f868ca0  lw          $a2, -0x7360($gp)
    ctx->pc = 0x1de59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de5a0:
    // 0x1de5a0: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_1de5a4:
    if (ctx->pc == 0x1DE5A4u) {
        ctx->pc = 0x1DE5A8u;
        goto label_1de5a8;
    }
    ctx->pc = 0x1DE5A0u;
    {
        const bool branch_taken_0x1de5a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de5a0) {
            ctx->pc = 0x1DE5C8u;
            goto label_1de5c8;
        }
    }
    ctx->pc = 0x1DE5A8u;
label_1de5a8:
    // 0x1de5a8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de5ac:
    // 0x1de5ac: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1de5b0:
    // 0x1de5b0: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
label_1de5b4:
    if (ctx->pc == 0x1DE5B4u) {
        ctx->pc = 0x1DE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5B0u;
        // 0x1de5b4: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5B8u;
        goto label_1de5b8;
    }
    ctx->pc = 0x1DE5B0u;
    {
        const bool branch_taken_0x1de5b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5B0u;
        // 0x1de5b4: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5b0) {
            ctx->pc = 0x1DE5FCu;
            { ctx->pc = 0x1de5fc; return; }
        }
    }
    ctx->pc = 0x1DE5B8u;
label_1de5b8:
    // 0x1de5b8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1de5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1de5bc:
    // 0x1de5bc: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1de5bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1de5c0:
    // 0x1de5c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1de5c4:
    if (ctx->pc == 0x1DE5C4u) {
        ctx->pc = 0x1DE5C8u;
        goto label_1de5c8;
    }
    ctx->pc = 0x1DE5C0u;
    {
        const bool branch_taken_0x1de5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de5c0) {
            ctx->pc = 0x1DE5FCu;
            { ctx->pc = 0x1de5fc; return; }
        }
    }
    ctx->pc = 0x1DE5C8u;
label_1de5c8:
    // 0x1de5c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de5cc:
    // 0x1de5cc: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
label_1de5d0:
    if (ctx->pc == 0x1DE5D0u) {
        ctx->pc = 0x1DE5D4u;
        goto label_1de5d4;
    }
    ctx->pc = 0x1DE5CCu;
    {
        const bool branch_taken_0x1de5cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de5cc) {
            ctx->pc = 0x1DE5F8u;
            { ctx->pc = 0x1de5f8; return; }
        }
    }
    ctx->pc = 0x1DE5D4u;
label_1de5d4:
    // 0x1de5d4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de5d8:
    // 0x1de5d8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1de5dc:
    // 0x1de5dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1de5e0:
    if (ctx->pc == 0x1DE5E0u) {
        ctx->pc = 0x1DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5DCu;
        // 0x1de5e0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5E4u;
        goto label_1de5e4;
    }
    ctx->pc = 0x1DE5DCu;
    {
        const bool branch_taken_0x1de5dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5DCu;
        // 0x1de5e0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5dc) {
            ctx->pc = 0x1DE5ECu;
            goto label_1de5ec;
        }
    }
    ctx->pc = 0x1DE5E4u;
label_1de5e4:
    // 0x1de5e4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1de5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1de5e8:
    // 0x1de5e8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1de5e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1de5ec:
    // 0x1de5ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1de5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1de5f0u;
    return;
}

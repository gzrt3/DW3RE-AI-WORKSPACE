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


void FUN_0014eba0_part329(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        case 0x1eee54u: goto label_1eee54;
        case 0x1eee58u: goto label_1eee58;
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee60u: goto label_1eee60;
        case 0x1eee64u: goto label_1eee64;
        case 0x1eee68u: goto label_1eee68;
        case 0x1eee6cu: goto label_1eee6c;
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee7cu: goto label_1eee7c;
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee84u: goto label_1eee84;
        case 0x1eee88u: goto label_1eee88;
        case 0x1eee8cu: goto label_1eee8c;
        case 0x1eee90u: goto label_1eee90;
        case 0x1eee94u: goto label_1eee94;
        case 0x1eee98u: goto label_1eee98;
        case 0x1eee9cu: goto label_1eee9c;
        case 0x1eeea0u: goto label_1eeea0;
        case 0x1eeea4u: goto label_1eeea4;
        case 0x1eeea8u: goto label_1eeea8;
        case 0x1eeeacu: goto label_1eeeac;
        case 0x1eeeb0u: goto label_1eeeb0;
        case 0x1eeeb4u: goto label_1eeeb4;
        case 0x1eeeb8u: goto label_1eeeb8;
        case 0x1eeebcu: goto label_1eeebc;
        case 0x1eeec0u: goto label_1eeec0;
        case 0x1eeec4u: goto label_1eeec4;
        case 0x1eeec8u: goto label_1eeec8;
        case 0x1eeeccu: goto label_1eeecc;
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeed4u: goto label_1eeed4;
        case 0x1eeed8u: goto label_1eeed8;
        case 0x1eeedcu: goto label_1eeedc;
        case 0x1eeee0u: goto label_1eeee0;
        case 0x1eeee4u: goto label_1eeee4;
        case 0x1eeee8u: goto label_1eeee8;
        case 0x1eeeecu: goto label_1eeeec;
        case 0x1eeef0u: goto label_1eeef0;
        case 0x1eeef4u: goto label_1eeef4;
        case 0x1eeef8u: goto label_1eeef8;
        case 0x1eeefcu: goto label_1eeefc;
        case 0x1eef00u: goto label_1eef00;
        case 0x1eef04u: goto label_1eef04;
        case 0x1eef08u: goto label_1eef08;
        case 0x1eef0cu: goto label_1eef0c;
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef14u: goto label_1eef14;
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef1cu: goto label_1eef1c;
        case 0x1eef20u: goto label_1eef20;
        case 0x1eef24u: goto label_1eef24;
        case 0x1eef28u: goto label_1eef28;
        case 0x1eef2cu: goto label_1eef2c;
        case 0x1eef30u: goto label_1eef30;
        case 0x1eef34u: goto label_1eef34;
        case 0x1eef38u: goto label_1eef38;
        case 0x1eef3cu: goto label_1eef3c;
        case 0x1eef40u: goto label_1eef40;
        case 0x1eef44u: goto label_1eef44;
        case 0x1eef48u: goto label_1eef48;
        case 0x1eef4cu: goto label_1eef4c;
        case 0x1eef50u: goto label_1eef50;
        case 0x1eef54u: goto label_1eef54;
        case 0x1eef58u: goto label_1eef58;
        case 0x1eef5cu: goto label_1eef5c;
        case 0x1eef60u: goto label_1eef60;
        case 0x1eef64u: goto label_1eef64;
        case 0x1eef68u: goto label_1eef68;
        case 0x1eef6cu: goto label_1eef6c;
        case 0x1eef70u: goto label_1eef70;
        case 0x1eef74u: goto label_1eef74;
        case 0x1eef78u: goto label_1eef78;
        case 0x1eef7cu: goto label_1eef7c;
        case 0x1eef80u: goto label_1eef80;
        case 0x1eef84u: goto label_1eef84;
        case 0x1eef88u: goto label_1eef88;
        case 0x1eef8cu: goto label_1eef8c;
        case 0x1eef90u: goto label_1eef90;
        case 0x1eef94u: goto label_1eef94;
        case 0x1eef98u: goto label_1eef98;
        case 0x1eef9cu: goto label_1eef9c;
        case 0x1eefa0u: goto label_1eefa0;
        case 0x1eefa4u: goto label_1eefa4;
        case 0x1eefa8u: goto label_1eefa8;
        case 0x1eefacu: goto label_1eefac;
        case 0x1eefb0u: goto label_1eefb0;
        case 0x1eefb4u: goto label_1eefb4;
        case 0x1eefb8u: goto label_1eefb8;
        case 0x1eefbcu: goto label_1eefbc;
        case 0x1eefc0u: goto label_1eefc0;
        case 0x1eefc4u: goto label_1eefc4;
        case 0x1eefc8u: goto label_1eefc8;
        case 0x1eefccu: goto label_1eefcc;
        case 0x1eefd0u: goto label_1eefd0;
        case 0x1eefd4u: goto label_1eefd4;
        case 0x1eefd8u: goto label_1eefd8;
        case 0x1eefdcu: goto label_1eefdc;
        case 0x1eefe0u: goto label_1eefe0;
        case 0x1eefe4u: goto label_1eefe4;
        case 0x1eefe8u: goto label_1eefe8;
        case 0x1eefecu: goto label_1eefec;
        case 0x1eeff0u: goto label_1eeff0;
        case 0x1eeff4u: goto label_1eeff4;
        case 0x1eeff8u: goto label_1eeff8;
        case 0x1eeffcu: goto label_1eeffc;
        case 0x1ef000u: goto label_1ef000;
        case 0x1ef004u: goto label_1ef004;
        case 0x1ef008u: goto label_1ef008;
        case 0x1ef00cu: goto label_1ef00c;
        case 0x1ef010u: goto label_1ef010;
        case 0x1ef014u: goto label_1ef014;
        case 0x1ef018u: goto label_1ef018;
        case 0x1ef01cu: goto label_1ef01c;
        case 0x1ef020u: goto label_1ef020;
        case 0x1ef024u: goto label_1ef024;
        case 0x1ef028u: goto label_1ef028;
        case 0x1ef02cu: goto label_1ef02c;
        case 0x1ef030u: goto label_1ef030;
        case 0x1ef034u: goto label_1ef034;
        case 0x1ef038u: goto label_1ef038;
        case 0x1ef03cu: goto label_1ef03c;
        case 0x1ef040u: goto label_1ef040;
        case 0x1ef044u: goto label_1ef044;
        case 0x1ef048u: goto label_1ef048;
        case 0x1ef04cu: goto label_1ef04c;
        case 0x1ef050u: goto label_1ef050;
        case 0x1ef054u: goto label_1ef054;
        case 0x1ef058u: goto label_1ef058;
        case 0x1ef05cu: goto label_1ef05c;
        case 0x1ef060u: goto label_1ef060;
        case 0x1ef064u: goto label_1ef064;
        case 0x1ef068u: goto label_1ef068;
        case 0x1ef06cu: goto label_1ef06c;
        case 0x1ef070u: goto label_1ef070;
        case 0x1ef074u: goto label_1ef074;
        case 0x1ef078u: goto label_1ef078;
        case 0x1ef07cu: goto label_1ef07c;
        case 0x1ef080u: goto label_1ef080;
        case 0x1ef084u: goto label_1ef084;
        case 0x1ef088u: goto label_1ef088;
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef094u: goto label_1ef094;
        case 0x1ef098u: goto label_1ef098;
        case 0x1ef09cu: goto label_1ef09c;
        case 0x1ef0a0u: goto label_1ef0a0;
        case 0x1ef0a4u: goto label_1ef0a4;
        case 0x1ef0a8u: goto label_1ef0a8;
        case 0x1ef0acu: goto label_1ef0ac;
        case 0x1ef0b0u: goto label_1ef0b0;
        case 0x1ef0b4u: goto label_1ef0b4;
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef0bcu: goto label_1ef0bc;
        case 0x1ef0c0u: goto label_1ef0c0;
        case 0x1ef0c4u: goto label_1ef0c4;
        case 0x1ef0c8u: goto label_1ef0c8;
        case 0x1ef0ccu: goto label_1ef0cc;
        case 0x1ef0d0u: goto label_1ef0d0;
        case 0x1ef0d4u: goto label_1ef0d4;
        case 0x1ef0d8u: goto label_1ef0d8;
        case 0x1ef0dcu: goto label_1ef0dc;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0e8u: goto label_1ef0e8;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f0u: goto label_1ef0f0;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0f8u: goto label_1ef0f8;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef100u: goto label_1ef100;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef10cu: goto label_1ef10c;
        case 0x1ef110u: goto label_1ef110;
        case 0x1ef114u: goto label_1ef114;
        case 0x1ef118u: goto label_1ef118;
        case 0x1ef11cu: goto label_1ef11c;
        case 0x1ef120u: goto label_1ef120;
        case 0x1ef124u: goto label_1ef124;
        case 0x1ef128u: goto label_1ef128;
        case 0x1ef12cu: goto label_1ef12c;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef134u: goto label_1ef134;
        case 0x1ef138u: goto label_1ef138;
        case 0x1ef13cu: goto label_1ef13c;
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef144u: goto label_1ef144;
        case 0x1ef148u: goto label_1ef148;
        case 0x1ef14cu: goto label_1ef14c;
        case 0x1ef150u: goto label_1ef150;
        case 0x1ef154u: goto label_1ef154;
        case 0x1ef158u: goto label_1ef158;
        case 0x1ef15cu: goto label_1ef15c;
        case 0x1ef160u: goto label_1ef160;
        case 0x1ef164u: goto label_1ef164;
        case 0x1ef168u: goto label_1ef168;
        case 0x1ef16cu: goto label_1ef16c;
        case 0x1ef170u: goto label_1ef170;
        case 0x1ef174u: goto label_1ef174;
        case 0x1ef178u: goto label_1ef178;
        case 0x1ef17cu: goto label_1ef17c;
        case 0x1ef180u: goto label_1ef180;
        case 0x1ef184u: goto label_1ef184;
        case 0x1ef188u: goto label_1ef188;
        case 0x1ef18cu: goto label_1ef18c;
        case 0x1ef190u: goto label_1ef190;
        case 0x1ef194u: goto label_1ef194;
        case 0x1ef198u: goto label_1ef198;
        case 0x1ef19cu: goto label_1ef19c;
        case 0x1ef1a0u: goto label_1ef1a0;
        case 0x1ef1a4u: goto label_1ef1a4;
        case 0x1ef1a8u: goto label_1ef1a8;
        case 0x1ef1acu: goto label_1ef1ac;
        case 0x1ef1b0u: goto label_1ef1b0;
        case 0x1ef1b4u: goto label_1ef1b4;
        case 0x1ef1b8u: goto label_1ef1b8;
        case 0x1ef1bcu: goto label_1ef1bc;
        case 0x1ef1c0u: goto label_1ef1c0;
        case 0x1ef1c4u: goto label_1ef1c4;
        case 0x1ef1c8u: goto label_1ef1c8;
        case 0x1ef1ccu: goto label_1ef1cc;
        case 0x1ef1d0u: goto label_1ef1d0;
        case 0x1ef1d4u: goto label_1ef1d4;
        case 0x1ef1d8u: goto label_1ef1d8;
        case 0x1ef1dcu: goto label_1ef1dc;
        case 0x1ef1e0u: goto label_1ef1e0;
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef1e8u: goto label_1ef1e8;
        case 0x1ef1ecu: goto label_1ef1ec;
        case 0x1ef1f0u: goto label_1ef1f0;
        case 0x1ef1f4u: goto label_1ef1f4;
        case 0x1ef1f8u: goto label_1ef1f8;
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef200u: goto label_1ef200;
        case 0x1ef204u: goto label_1ef204;
        case 0x1ef208u: goto label_1ef208;
        case 0x1ef20cu: goto label_1ef20c;
        case 0x1ef210u: goto label_1ef210;
        case 0x1ef214u: goto label_1ef214;
        case 0x1ef218u: goto label_1ef218;
        case 0x1ef21cu: goto label_1ef21c;
        case 0x1ef220u: goto label_1ef220;
        case 0x1ef224u: goto label_1ef224;
        case 0x1ef228u: goto label_1ef228;
        case 0x1ef22cu: goto label_1ef22c;
        case 0x1ef230u: goto label_1ef230;
        case 0x1ef234u: goto label_1ef234;
        case 0x1ef238u: goto label_1ef238;
        case 0x1ef23cu: goto label_1ef23c;
        case 0x1ef240u: goto label_1ef240;
        case 0x1ef244u: goto label_1ef244;
        case 0x1ef248u: goto label_1ef248;
        case 0x1ef24cu: goto label_1ef24c;
        case 0x1ef250u: goto label_1ef250;
        case 0x1ef254u: goto label_1ef254;
        case 0x1ef258u: goto label_1ef258;
        case 0x1ef25cu: goto label_1ef25c;
        case 0x1ef260u: goto label_1ef260;
        case 0x1ef264u: goto label_1ef264;
        case 0x1ef268u: goto label_1ef268;
        case 0x1ef26cu: goto label_1ef26c;
        case 0x1ef270u: goto label_1ef270;
        case 0x1ef274u: goto label_1ef274;
        case 0x1ef278u: goto label_1ef278;
        case 0x1ef27cu: goto label_1ef27c;
        case 0x1ef280u: goto label_1ef280;
        case 0x1ef284u: goto label_1ef284;
        case 0x1ef288u: goto label_1ef288;
        case 0x1ef28cu: goto label_1ef28c;
        case 0x1ef290u: goto label_1ef290;
        case 0x1ef294u: goto label_1ef294;
        case 0x1ef298u: goto label_1ef298;
        case 0x1ef29cu: goto label_1ef29c;
        case 0x1ef2a0u: goto label_1ef2a0;
        case 0x1ef2a4u: goto label_1ef2a4;
        case 0x1ef2a8u: goto label_1ef2a8;
        case 0x1ef2acu: goto label_1ef2ac;
        case 0x1ef2b0u: goto label_1ef2b0;
        case 0x1ef2b4u: goto label_1ef2b4;
        case 0x1ef2b8u: goto label_1ef2b8;
        case 0x1ef2bcu: goto label_1ef2bc;
        case 0x1ef2c0u: goto label_1ef2c0;
        case 0x1ef2c4u: goto label_1ef2c4;
        case 0x1ef2c8u: goto label_1ef2c8;
        case 0x1ef2ccu: goto label_1ef2cc;
        case 0x1ef2d0u: goto label_1ef2d0;
        case 0x1ef2d4u: goto label_1ef2d4;
        case 0x1ef2d8u: goto label_1ef2d8;
        case 0x1ef2dcu: goto label_1ef2dc;
        case 0x1ef2e0u: goto label_1ef2e0;
        case 0x1ef2e4u: goto label_1ef2e4;
        case 0x1ef2e8u: goto label_1ef2e8;
        case 0x1ef2ecu: goto label_1ef2ec;
        case 0x1ef2f0u: goto label_1ef2f0;
        case 0x1ef2f4u: goto label_1ef2f4;
        case 0x1ef2f8u: goto label_1ef2f8;
        case 0x1ef2fcu: goto label_1ef2fc;
        case 0x1ef300u: goto label_1ef300;
        case 0x1ef304u: goto label_1ef304;
        case 0x1ef308u: goto label_1ef308;
        case 0x1ef30cu: goto label_1ef30c;
        case 0x1ef310u: goto label_1ef310;
        case 0x1ef314u: goto label_1ef314;
        case 0x1ef318u: goto label_1ef318;
        case 0x1ef31cu: goto label_1ef31c;
        case 0x1ef320u: goto label_1ef320;
        case 0x1ef324u: goto label_1ef324;
        case 0x1ef328u: goto label_1ef328;
        case 0x1ef32cu: goto label_1ef32c;
        case 0x1ef330u: goto label_1ef330;
        case 0x1ef334u: goto label_1ef334;
        case 0x1ef338u: goto label_1ef338;
        case 0x1ef33cu: goto label_1ef33c;
        case 0x1ef340u: goto label_1ef340;
        case 0x1ef344u: goto label_1ef344;
        case 0x1ef348u: goto label_1ef348;
        case 0x1ef34cu: goto label_1ef34c;
        case 0x1ef350u: goto label_1ef350;
        case 0x1ef354u: goto label_1ef354;
        case 0x1ef358u: goto label_1ef358;
        case 0x1ef35cu: goto label_1ef35c;
        case 0x1ef360u: goto label_1ef360;
        case 0x1ef364u: goto label_1ef364;
        case 0x1ef368u: goto label_1ef368;
        case 0x1ef36cu: goto label_1ef36c;
        case 0x1ef370u: goto label_1ef370;
        case 0x1ef374u: goto label_1ef374;
        case 0x1ef378u: goto label_1ef378;
        case 0x1ef37cu: goto label_1ef37c;
        case 0x1ef380u: goto label_1ef380;
        case 0x1ef384u: goto label_1ef384;
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef38cu: goto label_1ef38c;
        case 0x1ef390u: goto label_1ef390;
        case 0x1ef394u: goto label_1ef394;
        case 0x1ef398u: goto label_1ef398;
        case 0x1ef39cu: goto label_1ef39c;
        case 0x1ef3a0u: goto label_1ef3a0;
        case 0x1ef3a4u: goto label_1ef3a4;
        case 0x1ef3a8u: goto label_1ef3a8;
        case 0x1ef3acu: goto label_1ef3ac;
        case 0x1ef3b0u: goto label_1ef3b0;
        case 0x1ef3b4u: goto label_1ef3b4;
        case 0x1ef3b8u: goto label_1ef3b8;
        case 0x1ef3bcu: goto label_1ef3bc;
        case 0x1ef3c0u: goto label_1ef3c0;
        case 0x1ef3c4u: goto label_1ef3c4;
        case 0x1ef3c8u: goto label_1ef3c8;
        case 0x1ef3ccu: goto label_1ef3cc;
        case 0x1ef3d0u: goto label_1ef3d0;
        case 0x1ef3d4u: goto label_1ef3d4;
        case 0x1ef3d8u: goto label_1ef3d8;
        case 0x1ef3dcu: goto label_1ef3dc;
        case 0x1ef3e0u: goto label_1ef3e0;
        case 0x1ef3e4u: goto label_1ef3e4;
        case 0x1ef3e8u: goto label_1ef3e8;
        case 0x1ef3ecu: goto label_1ef3ec;
        case 0x1ef3f0u: goto label_1ef3f0;
        case 0x1ef3f4u: goto label_1ef3f4;
        case 0x1ef3f8u: goto label_1ef3f8;
        case 0x1ef3fcu: goto label_1ef3fc;
        case 0x1ef400u: goto label_1ef400;
        case 0x1ef404u: goto label_1ef404;
        case 0x1ef408u: goto label_1ef408;
        case 0x1ef40cu: goto label_1ef40c;
        case 0x1ef410u: goto label_1ef410;
        case 0x1ef414u: goto label_1ef414;
        case 0x1ef418u: goto label_1ef418;
        case 0x1ef41cu: goto label_1ef41c;
        case 0x1ef420u: goto label_1ef420;
        case 0x1ef424u: goto label_1ef424;
        case 0x1ef428u: goto label_1ef428;
        case 0x1ef42cu: goto label_1ef42c;
        case 0x1ef430u: goto label_1ef430;
        case 0x1ef434u: goto label_1ef434;
        case 0x1ef438u: goto label_1ef438;
        case 0x1ef43cu: goto label_1ef43c;
        case 0x1ef440u: goto label_1ef440;
        case 0x1ef444u: goto label_1ef444;
        case 0x1ef448u: goto label_1ef448;
        case 0x1ef44cu: goto label_1ef44c;
        case 0x1ef450u: goto label_1ef450;
        case 0x1ef454u: goto label_1ef454;
        case 0x1ef458u: goto label_1ef458;
        case 0x1ef45cu: goto label_1ef45c;
        case 0x1ef460u: goto label_1ef460;
        case 0x1ef464u: goto label_1ef464;
        case 0x1ef468u: goto label_1ef468;
        case 0x1ef46cu: goto label_1ef46c;
        case 0x1ef470u: goto label_1ef470;
        case 0x1ef474u: goto label_1ef474;
        case 0x1ef478u: goto label_1ef478;
        case 0x1ef47cu: goto label_1ef47c;
        case 0x1ef480u: goto label_1ef480;
        case 0x1ef484u: goto label_1ef484;
        case 0x1ef488u: goto label_1ef488;
        case 0x1ef48cu: goto label_1ef48c;
        case 0x1ef490u: goto label_1ef490;
        case 0x1ef494u: goto label_1ef494;
        case 0x1ef498u: goto label_1ef498;
        case 0x1ef49cu: goto label_1ef49c;
        case 0x1ef4a0u: goto label_1ef4a0;
        case 0x1ef4a4u: goto label_1ef4a4;
        case 0x1ef4a8u: goto label_1ef4a8;
        case 0x1ef4acu: goto label_1ef4ac;
        case 0x1ef4b0u: goto label_1ef4b0;
        case 0x1ef4b4u: goto label_1ef4b4;
        case 0x1ef4b8u: goto label_1ef4b8;
        case 0x1ef4bcu: goto label_1ef4bc;
        case 0x1ef4c0u: goto label_1ef4c0;
        case 0x1ef4c4u: goto label_1ef4c4;
        case 0x1ef4c8u: goto label_1ef4c8;
        case 0x1ef4ccu: goto label_1ef4cc;
        case 0x1ef4d0u: goto label_1ef4d0;
        case 0x1ef4d4u: goto label_1ef4d4;
        case 0x1ef4d8u: goto label_1ef4d8;
        case 0x1ef4dcu: goto label_1ef4dc;
        case 0x1ef4e0u: goto label_1ef4e0;
        case 0x1ef4e4u: goto label_1ef4e4;
        case 0x1ef4e8u: goto label_1ef4e8;
        case 0x1ef4ecu: goto label_1ef4ec;
        case 0x1ef4f0u: goto label_1ef4f0;
        case 0x1ef4f4u: goto label_1ef4f4;
        case 0x1ef4f8u: goto label_1ef4f8;
        case 0x1ef4fcu: goto label_1ef4fc;
        case 0x1ef500u: goto label_1ef500;
        case 0x1ef504u: goto label_1ef504;
        case 0x1ef508u: goto label_1ef508;
        case 0x1ef50cu: goto label_1ef50c;
        case 0x1ef510u: goto label_1ef510;
        case 0x1ef514u: goto label_1ef514;
        case 0x1ef518u: goto label_1ef518;
        case 0x1ef51cu: goto label_1ef51c;
        case 0x1ef520u: goto label_1ef520;
        case 0x1ef524u: goto label_1ef524;
        case 0x1ef528u: goto label_1ef528;
        case 0x1ef52cu: goto label_1ef52c;
        case 0x1ef530u: goto label_1ef530;
        case 0x1ef534u: goto label_1ef534;
        case 0x1ef538u: goto label_1ef538;
        case 0x1ef53cu: goto label_1ef53c;
        case 0x1ef540u: goto label_1ef540;
        case 0x1ef544u: goto label_1ef544;
        case 0x1ef548u: goto label_1ef548;
        case 0x1ef54cu: goto label_1ef54c;
        case 0x1ef550u: goto label_1ef550;
        case 0x1ef554u: goto label_1ef554;
        case 0x1ef558u: goto label_1ef558;
        case 0x1ef55cu: goto label_1ef55c;
        case 0x1ef560u: goto label_1ef560;
        case 0x1ef564u: goto label_1ef564;
        case 0x1ef568u: goto label_1ef568;
        case 0x1ef56cu: goto label_1ef56c;
        case 0x1ef570u: goto label_1ef570;
        case 0x1ef574u: goto label_1ef574;
        case 0x1ef578u: goto label_1ef578;
        case 0x1ef57cu: goto label_1ef57c;
        case 0x1ef580u: goto label_1ef580;
        case 0x1ef584u: goto label_1ef584;
        case 0x1ef588u: goto label_1ef588;
        case 0x1ef58cu: goto label_1ef58c;
        case 0x1ef590u: goto label_1ef590;
        case 0x1ef594u: goto label_1ef594;
        case 0x1ef598u: goto label_1ef598;
        case 0x1ef59cu: goto label_1ef59c;
        case 0x1ef5a0u: goto label_1ef5a0;
        case 0x1ef5a4u: goto label_1ef5a4;
        case 0x1ef5a8u: goto label_1ef5a8;
        case 0x1ef5acu: goto label_1ef5ac;
        case 0x1ef5b0u: goto label_1ef5b0;
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef5b8u: goto label_1ef5b8;
        case 0x1ef5bcu: goto label_1ef5bc;
        case 0x1ef5c0u: goto label_1ef5c0;
        case 0x1ef5c4u: goto label_1ef5c4;
        case 0x1ef5c8u: goto label_1ef5c8;
        case 0x1ef5ccu: goto label_1ef5cc;
        case 0x1ef5d0u: goto label_1ef5d0;
        case 0x1ef5d4u: goto label_1ef5d4;
        case 0x1ef5d8u: goto label_1ef5d8;
        case 0x1ef5dcu: goto label_1ef5dc;
        case 0x1ef5e0u: goto label_1ef5e0;
        case 0x1ef5e4u: goto label_1ef5e4;
        case 0x1ef5e8u: goto label_1ef5e8;
        case 0x1ef5ecu: goto label_1ef5ec;
        default: return;
    }

label_1eee20:
    // 0x1eee20: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1eee20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1eee24:
    // 0x1eee24: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1eee24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1eee28:
    // 0x1eee28: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1eee28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1eee2c:
    // 0x1eee2c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1eee2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eee30:
    // 0x1eee30: 0x0  nop
    ctx->pc = 0x1eee30u;
    // NOP
label_1eee34:
    // 0x1eee34: 0x0  nop
    ctx->pc = 0x1eee34u;
    // NOP
label_1eee38:
    // 0x1eee38: 0x1010  mfhi        $v0
    ctx->pc = 0x1eee38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eee3c:
    // 0x1eee3c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1eee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1eee40:
    // 0x1eee40: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1eee40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1eee44:
    // 0x1eee44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eee48:
    // 0x1eee48: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1eee4c:
    if (ctx->pc == 0x1EEE4Cu) {
        ctx->pc = 0x1EEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE48u;
        // 0x1eee4c: 0x28823  negu        $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE50u;
        goto label_1eee50;
    }
    ctx->pc = 0x1EEE48u;
    {
        const bool branch_taken_0x1eee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE48u;
        // 0x1eee4c: 0x28823  negu        $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee48) {
            ctx->pc = 0x1EEF04u;
            goto label_1eef04;
        }
    }
    ctx->pc = 0x1EEE50u;
label_1eee50:
    // 0x1eee50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eee54:
    // 0x1eee54: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1eee58:
    if (ctx->pc == 0x1EEE58u) {
        ctx->pc = 0x1EEE5Cu;
        goto label_1eee5c;
    }
    ctx->pc = 0x1EEE54u;
    {
        const bool branch_taken_0x1eee54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eee54) {
            ctx->pc = 0x1EEE94u;
            goto label_1eee94;
        }
    }
    ctx->pc = 0x1EEE5Cu;
label_1eee5c:
    // 0x1eee5c: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1eee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1eee60:
    // 0x1eee60: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eee64:
    // 0x1eee64: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eee68:
    // 0x1eee68: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1eee68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1eee6c:
    // 0x1eee6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1eee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1eee70:
    // 0x1eee70: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1eee74:
    // 0x1eee74: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1eee74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eee78:
    // 0x1eee78: 0x0  nop
    ctx->pc = 0x1eee78u;
    // NOP
label_1eee7c:
    // 0x1eee7c: 0x0  nop
    ctx->pc = 0x1eee7cu;
    // NOP
label_1eee80:
    // 0x1eee80: 0x1010  mfhi        $v0
    ctx->pc = 0x1eee80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eee84:
    // 0x1eee84: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1eee84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1eee88:
    // 0x1eee88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1eee88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1eee8c:
    // 0x1eee8c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1eee90:
    if (ctx->pc == 0x1EEE90u) {
        ctx->pc = 0x1EEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE8Cu;
        // 0x1eee90: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE94u;
        goto label_1eee94;
    }
    ctx->pc = 0x1EEE8Cu;
    {
        const bool branch_taken_0x1eee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE8Cu;
        // 0x1eee90: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee8c) {
            ctx->pc = 0x1EEF04u;
            goto label_1eef04;
        }
    }
    ctx->pc = 0x1EEE94u;
label_1eee94:
    // 0x1eee94: 0x0  nop
    ctx->pc = 0x1eee94u;
    // NOP
label_1eee98:
    // 0x1eee98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eee9c:
    // 0x1eee9c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1eeea0:
    if (ctx->pc == 0x1EEEA0u) {
        ctx->pc = 0x1EEEA4u;
        goto label_1eeea4;
    }
    ctx->pc = 0x1EEE9Cu;
    {
        const bool branch_taken_0x1eee9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eee9c) {
            ctx->pc = 0x1EEEE4u;
            goto label_1eeee4;
        }
    }
    ctx->pc = 0x1EEEA4u;
label_1eeea4:
    // 0x1eeea4: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x1eeea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1eeea8:
    // 0x1eeea8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eeeac:
    // 0x1eeeac: 0x3445aaab  ori         $a1, $v0, 0xAAAB
    ctx->pc = 0x1eeeacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eeeb0:
    // 0x1eeeb0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1eeeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1eeeb4:
    // 0x1eeeb4: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1eeeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1eeeb8:
    // 0x1eeeb8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1eeebc:
    // 0x1eeebc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1eeebcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1eeec0:
    // 0x1eeec0: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1eeec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eeec4:
    // 0x1eeec4: 0x0  nop
    ctx->pc = 0x1eeec4u;
    // NOP
label_1eeec8:
    // 0x1eeec8: 0x0  nop
    ctx->pc = 0x1eeec8u;
    // NOP
label_1eeecc:
    // 0x1eeecc: 0x2810  mfhi        $a1
    ctx->pc = 0x1eeeccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1eeed0:
    // 0x1eeed0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1eeed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1eeed4:
    // 0x1eeed4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1eeed4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_1eeed8:
    // 0x1eeed8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1eeed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1eeedc:
    // 0x1eeedc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eeee0:
    if (ctx->pc == 0x1EEEE0u) {
        ctx->pc = 0x1EEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEDCu;
        // 0x1eeee0: 0x458823  subu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEE4u;
        goto label_1eeee4;
    }
    ctx->pc = 0x1EEEDCu;
    {
        const bool branch_taken_0x1eeedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEDCu;
        // 0x1eeee0: 0x458823  subu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeedc) {
            ctx->pc = 0x1EEF04u;
            goto label_1eef04;
        }
    }
    ctx->pc = 0x1EEEE4u;
label_1eeee4:
    // 0x1eeee4: 0x0  nop
    ctx->pc = 0x1eeee4u;
    // NOP
label_1eeee8:
    // 0x1eeee8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eeee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eeeec:
    // 0x1eeeec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1eeef0:
    if (ctx->pc == 0x1EEEF0u) {
        ctx->pc = 0x1EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEECu;
        // 0x1eeef0: 0x24110030  addiu       $s1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEF4u;
        goto label_1eeef4;
    }
    ctx->pc = 0x1EEEECu;
    {
        const bool branch_taken_0x1eeeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEECu;
        // 0x1eeef0: 0x24110030  addiu       $s1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeeec) {
            ctx->pc = 0x1EEEFCu;
            goto label_1eeefc;
        }
    }
    ctx->pc = 0x1EEEF4u;
label_1eeef4:
    // 0x1eeef4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eeef8:
    if (ctx->pc == 0x1EEEF8u) {
        ctx->pc = 0x1EEEFCu;
        goto label_1eeefc;
    }
    ctx->pc = 0x1EEEF4u;
    {
        const bool branch_taken_0x1eeef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeef4) {
            ctx->pc = 0x1EEF04u;
            goto label_1eef04;
        }
    }
    ctx->pc = 0x1EEEFCu;
label_1eeefc:
    // 0x1eeefc: 0x0  nop
    ctx->pc = 0x1eeefcu;
    // NOP
label_1eef00:
    // 0x1eef00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eef00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eef04:
    // 0x1eef04: 0x0  nop
    ctx->pc = 0x1eef04u;
    // NOP
label_1eef08:
    // 0x1eef08: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1eef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1eef0c:
    // 0x1eef0c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1eef10:
    if (ctx->pc == 0x1EEF10u) {
        ctx->pc = 0x1EEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF0Cu;
        // 0x1eef10: 0x24120160  addiu       $s2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF14u;
        goto label_1eef14;
    }
    ctx->pc = 0x1EEF0Cu;
    {
        const bool branch_taken_0x1eef0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF0Cu;
        // 0x1eef10: 0x24120160  addiu       $s2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef0c) {
            ctx->pc = 0x1EEF1Cu;
            goto label_1eef1c;
        }
    }
    ctx->pc = 0x1EEF14u;
label_1eef14:
    // 0x1eef14: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1eef18:
    if (ctx->pc == 0x1EEF18u) {
        ctx->pc = 0x1EEF1Cu;
        goto label_1eef1c;
    }
    ctx->pc = 0x1EEF14u;
    {
        const bool branch_taken_0x1eef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef14) {
            ctx->pc = 0x1EEFC0u;
            goto label_1eefc0;
        }
    }
    ctx->pc = 0x1EEF1Cu;
label_1eef1c:
    // 0x1eef1c: 0x0  nop
    ctx->pc = 0x1eef1cu;
    // NOP
label_1eef20:
    // 0x1eef20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eef24:
    // 0x1eef24: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1eef28:
    if (ctx->pc == 0x1EEF28u) {
        ctx->pc = 0x1EEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF24u;
        // 0x1eef28: 0x26d20088  addiu       $s2, $s6, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF2Cu;
        goto label_1eef2c;
    }
    ctx->pc = 0x1EEF24u;
    {
        const bool branch_taken_0x1eef24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF24u;
        // 0x1eef28: 0x26d20088  addiu       $s2, $s6, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef24) {
            ctx->pc = 0x1EEF64u;
            goto label_1eef64;
        }
    }
    ctx->pc = 0x1EEF2Cu;
label_1eef2c:
    // 0x1eef2c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1eef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1eef30:
    // 0x1eef30: 0x2644ffe8  addiu       $a0, $s2, -0x18
    ctx->pc = 0x1eef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
label_1eef34:
    // 0x1eef34: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eef38:
    // 0x1eef38: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eef3c:
    // 0x1eef3c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1eef3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eef40:
    // 0x1eef40: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eef40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eef44:
    // 0x1eef44: 0x0  nop
    ctx->pc = 0x1eef44u;
    // NOP
label_1eef48:
    // 0x1eef48: 0x0  nop
    ctx->pc = 0x1eef48u;
    // NOP
label_1eef4c:
    // 0x1eef4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1eef4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eef50:
    // 0x1eef50: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1eef50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1eef54:
    // 0x1eef54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1eef54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1eef58:
    // 0x1eef58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eef5c:
    // 0x1eef5c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1eef60:
    if (ctx->pc == 0x1EEF60u) {
        ctx->pc = 0x1EEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF5Cu;
        // 0x1eef60: 0x2429023  subu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF64u;
        goto label_1eef64;
    }
    ctx->pc = 0x1EEF5Cu;
    {
        const bool branch_taken_0x1eef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF5Cu;
        // 0x1eef60: 0x2429023  subu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef5c) {
            ctx->pc = 0x1EEFC0u;
            goto label_1eefc0;
        }
    }
    ctx->pc = 0x1EEF64u;
label_1eef64:
    // 0x1eef64: 0x0  nop
    ctx->pc = 0x1eef64u;
    // NOP
label_1eef68:
    // 0x1eef68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eef6c:
    // 0x1eef6c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1eef70:
    if (ctx->pc == 0x1EEF70u) {
        ctx->pc = 0x1EEF74u;
        goto label_1eef74;
    }
    ctx->pc = 0x1EEF6Cu;
    {
        const bool branch_taken_0x1eef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eef6c) {
            ctx->pc = 0x1EEFACu;
            goto label_1eefac;
        }
    }
    ctx->pc = 0x1EEF74u;
label_1eef74:
    // 0x1eef74: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1eef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1eef78:
    // 0x1eef78: 0x2644ffe8  addiu       $a0, $s2, -0x18
    ctx->pc = 0x1eef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
label_1eef7c:
    // 0x1eef7c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eef80:
    // 0x1eef80: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eef84:
    // 0x1eef84: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1eef84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eef88:
    // 0x1eef88: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eef88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eef8c:
    // 0x1eef8c: 0x0  nop
    ctx->pc = 0x1eef8cu;
    // NOP
label_1eef90:
    // 0x1eef90: 0x0  nop
    ctx->pc = 0x1eef90u;
    // NOP
label_1eef94:
    // 0x1eef94: 0x1010  mfhi        $v0
    ctx->pc = 0x1eef94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eef98:
    // 0x1eef98: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1eef98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1eef9c:
    // 0x1eef9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1eef9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1eefa0:
    // 0x1eefa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eefa4:
    // 0x1eefa4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eefa8:
    if (ctx->pc == 0x1EEFA8u) {
        ctx->pc = 0x1EEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA4u;
        // 0x1eefa8: 0x24520018  addiu       $s2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEFACu;
        goto label_1eefac;
    }
    ctx->pc = 0x1EEFA4u;
    {
        const bool branch_taken_0x1eefa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA4u;
        // 0x1eefa8: 0x24520018  addiu       $s2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefa4) {
            ctx->pc = 0x1EEFC0u;
            goto label_1eefc0;
        }
    }
    ctx->pc = 0x1EEFACu;
label_1eefac:
    // 0x1eefac: 0x0  nop
    ctx->pc = 0x1eefacu;
    // NOP
label_1eefb0:
    // 0x1eefb0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eefb4:
    // 0x1eefb4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1eefb8:
    if (ctx->pc == 0x1EEFB8u) {
        ctx->pc = 0x1EEFBCu;
        goto label_1eefbc;
    }
    ctx->pc = 0x1EEFB4u;
    {
        const bool branch_taken_0x1eefb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eefb4) {
            ctx->pc = 0x1EEFC0u;
            goto label_1eefc0;
        }
    }
    ctx->pc = 0x1EEFBCu;
label_1eefbc:
    // 0x1eefbc: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x1eefbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1eefc0:
    // 0x1eefc0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eefc4:
    // 0x1eefc4: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
label_1eefc8:
    // 0x1eefc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1eefcc:
    // 0x1eefcc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eefd0:
    // 0x1eefd0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1eefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_1eefd4:
    // 0x1eefd4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eefd8:
    // 0x1eefd8: 0x24091760  addiu       $t1, $zero, 0x1760
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5984));
label_1eefdc:
    // 0x1eefdc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1eefdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1eefe0:
    // 0x1eefe0: 0x24842a60  addiu       $a0, $a0, 0x2A60
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10848));
label_1eefe4:
    // 0x1eefe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eefe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eefe8:
    // 0x1eefe8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1eefe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eefec:
    // 0x1eefec: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1eefecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1eeff0:
    // 0x1eeff0: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1eeff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1eeff4:
    // 0x1eeff4: 0x1494818  mult        $t1, $t2, $t1
    ctx->pc = 0x1eeff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_1eeff8:
    // 0x1eeff8: 0x24020bb0  addiu       $v0, $zero, 0xBB0
    ctx->pc = 0x1eeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2992));
label_1eeffc:
    // 0x1eeffc: 0x70621818  mult1       $v1, $v1, $v0
    ctx->pc = 0x1eeffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ef000:
    // 0x1ef000: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x1ef000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1ef004:
    // 0x1ef004: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ef004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ef008:
    // 0x1ef008: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1ef008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef00c:
    // 0x1ef00c: 0xc07c25c  jal         func_1F0970
label_1ef010:
    if (ctx->pc == 0x1EF010u) {
        ctx->pc = 0x1EF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF00Cu;
        // 0x1ef010: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF014u;
        goto label_1ef014;
    }
    ctx->pc = 0x1EF00Cu;
    SET_GPR_U32(ctx, 31, 0x1EF014u);
    ctx->pc = 0x1EF010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF00Cu;
    // 0x1ef010: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x1EF014u;
label_1ef014:
    // 0x1ef014: 0x8f828f50  lw          $v0, -0x70B0($gp)
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938448)));
label_1ef018:
    // 0x1ef018: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_1ef01c:
    if (ctx->pc == 0x1EF01Cu) {
        ctx->pc = 0x1EF020u;
        goto label_1ef020;
    }
    ctx->pc = 0x1EF018u;
    {
        const bool branch_taken_0x1ef018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef018) {
            ctx->pc = 0x1EF220u;
            goto label_1ef220;
        }
    }
    ctx->pc = 0x1EF020u;
label_1ef020:
    // 0x1ef020: 0x86a4000c  lh          $a0, 0xC($s5)
    ctx->pc = 0x1ef020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_1ef024:
    // 0x1ef024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef028:
    // 0x1ef028: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1ef02c:
    if (ctx->pc == 0x1EF02Cu) {
        ctx->pc = 0x1EF030u;
        goto label_1ef030;
    }
    ctx->pc = 0x1EF028u;
    {
        const bool branch_taken_0x1ef028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef028) {
            ctx->pc = 0x1EF03Cu;
            goto label_1ef03c;
        }
    }
    ctx->pc = 0x1EF030u;
label_1ef030:
    // 0x1ef030: 0x86a2000e  lh          $v0, 0xE($s5)
    ctx->pc = 0x1ef030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_1ef034:
    // 0x1ef034: 0x1443007a  bne         $v0, $v1, . + 4 + (0x7A << 2)
label_1ef038:
    if (ctx->pc == 0x1EF038u) {
        ctx->pc = 0x1EF03Cu;
        goto label_1ef03c;
    }
    ctx->pc = 0x1EF034u;
    {
        const bool branch_taken_0x1ef034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef034) {
            ctx->pc = 0x1EF220u;
            goto label_1ef220;
        }
    }
    ctx->pc = 0x1EF03Cu;
label_1ef03c:
    // 0x1ef03c: 0x0  nop
    ctx->pc = 0x1ef03cu;
    // NOP
label_1ef040:
    // 0x1ef040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef044:
    // 0x1ef044: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_1ef048:
    if (ctx->pc == 0x1EF048u) {
        ctx->pc = 0x1EF04Cu;
        goto label_1ef04c;
    }
    ctx->pc = 0x1EF044u;
    {
        const bool branch_taken_0x1ef044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef044) {
            ctx->pc = 0x1EF0F4u;
            goto label_1ef0f4;
        }
    }
    ctx->pc = 0x1EF04Cu;
label_1ef04c:
    // 0x1ef04c: 0x86a2000e  lh          $v0, 0xE($s5)
    ctx->pc = 0x1ef04cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_1ef050:
    // 0x1ef050: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
label_1ef054:
    if (ctx->pc == 0x1EF054u) {
        ctx->pc = 0x1EF058u;
        goto label_1ef058;
    }
    ctx->pc = 0x1EF050u;
    {
        const bool branch_taken_0x1ef050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef050) {
            ctx->pc = 0x1EF0F4u;
            goto label_1ef0f4;
        }
    }
    ctx->pc = 0x1EF058u;
label_1ef058:
    // 0x1ef058: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1ef058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1ef05c:
    // 0x1ef05c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1ef05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1ef060:
    // 0x1ef060: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x1ef060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ef064:
    // 0x1ef064: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1ef064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef068:
    // 0x1ef068: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ef068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef06c:
    // 0x1ef06c: 0xa6640620  sh          $a0, 0x620($s3)
    ctx->pc = 0x1ef06cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1568), (uint16_t)GPR_U32(ctx, 4));
label_1ef070:
    // 0x1ef070: 0x262200a8  addiu       $v0, $s1, 0xA8
    ctx->pc = 0x1ef070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_1ef074:
    // 0x1ef074: 0xa6630622  sh          $v1, 0x622($s3)
    ctx->pc = 0x1ef074u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1570), (uint16_t)GPR_U32(ctx, 3));
label_1ef078:
    // 0x1ef078: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ef078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ef07c:
    // 0x1ef07c: 0xae660624  sw          $a2, 0x624($s3)
    ctx->pc = 0x1ef07cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1572), GPR_U32(ctx, 6));
label_1ef080:
    // 0x1ef080: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef084:
    // 0x1ef084: 0xa6650630  sh          $a1, 0x630($s3)
    ctx->pc = 0x1ef084u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1584), (uint16_t)GPR_U32(ctx, 5));
label_1ef088:
    // 0x1ef088: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1ef08c:
    // 0x1ef08c: 0xa6630632  sh          $v1, 0x632($s3)
    ctx->pc = 0x1ef08cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1586), (uint16_t)GPR_U32(ctx, 3));
label_1ef090:
    // 0x1ef090: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ef094:
    // 0x1ef094: 0xae660634  sw          $a2, 0x634($s3)
    ctx->pc = 0x1ef094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1588), GPR_U32(ctx, 6));
label_1ef098:
    // 0x1ef098: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef09c:
    // 0x1ef09c: 0xa6640640  sh          $a0, 0x640($s3)
    ctx->pc = 0x1ef09cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1600), (uint16_t)GPR_U32(ctx, 4));
label_1ef0a0:
    // 0x1ef0a0: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x1ef0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1ef0a4:
    // 0x1ef0a4: 0xa6630642  sh          $v1, 0x642($s3)
    ctx->pc = 0x1ef0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1602), (uint16_t)GPR_U32(ctx, 3));
label_1ef0a8:
    // 0x1ef0a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ef0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ef0ac:
    // 0x1ef0ac: 0xae660644  sw          $a2, 0x644($s3)
    ctx->pc = 0x1ef0acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1604), GPR_U32(ctx, 6));
label_1ef0b0:
    // 0x1ef0b0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ef0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef0b4:
    // 0x1ef0b4: 0xa6650650  sh          $a1, 0x650($s3)
    ctx->pc = 0x1ef0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1616), (uint16_t)GPR_U32(ctx, 5));
label_1ef0b8:
    // 0x1ef0b8: 0xa6630652  sh          $v1, 0x652($s3)
    ctx->pc = 0x1ef0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1618), (uint16_t)GPR_U32(ctx, 3));
label_1ef0bc:
    // 0x1ef0bc: 0xae660654  sw          $a2, 0x654($s3)
    ctx->pc = 0x1ef0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1620), GPR_U32(ctx, 6));
label_1ef0c0:
    // 0x1ef0c0: 0xa66406d0  sh          $a0, 0x6D0($s3)
    ctx->pc = 0x1ef0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1744), (uint16_t)GPR_U32(ctx, 4));
label_1ef0c4:
    // 0x1ef0c4: 0xa66306d2  sh          $v1, 0x6D2($s3)
    ctx->pc = 0x1ef0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1746), (uint16_t)GPR_U32(ctx, 3));
label_1ef0c8:
    // 0x1ef0c8: 0xae6606d4  sw          $a2, 0x6D4($s3)
    ctx->pc = 0x1ef0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1748), GPR_U32(ctx, 6));
label_1ef0cc:
    // 0x1ef0cc: 0xa66506e0  sh          $a1, 0x6E0($s3)
    ctx->pc = 0x1ef0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1760), (uint16_t)GPR_U32(ctx, 5));
label_1ef0d0:
    // 0x1ef0d0: 0xa66306e2  sh          $v1, 0x6E2($s3)
    ctx->pc = 0x1ef0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1762), (uint16_t)GPR_U32(ctx, 3));
label_1ef0d4:
    // 0x1ef0d4: 0xae6606e4  sw          $a2, 0x6E4($s3)
    ctx->pc = 0x1ef0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1764), GPR_U32(ctx, 6));
label_1ef0d8:
    // 0x1ef0d8: 0xa66406f0  sh          $a0, 0x6F0($s3)
    ctx->pc = 0x1ef0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1776), (uint16_t)GPR_U32(ctx, 4));
label_1ef0dc:
    // 0x1ef0dc: 0xa66206f2  sh          $v0, 0x6F2($s3)
    ctx->pc = 0x1ef0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1778), (uint16_t)GPR_U32(ctx, 2));
label_1ef0e0:
    // 0x1ef0e0: 0xae6606f4  sw          $a2, 0x6F4($s3)
    ctx->pc = 0x1ef0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1780), GPR_U32(ctx, 6));
label_1ef0e4:
    // 0x1ef0e4: 0xa6650700  sh          $a1, 0x700($s3)
    ctx->pc = 0x1ef0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1792), (uint16_t)GPR_U32(ctx, 5));
label_1ef0e8:
    // 0x1ef0e8: 0xa6620702  sh          $v0, 0x702($s3)
    ctx->pc = 0x1ef0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1794), (uint16_t)GPR_U32(ctx, 2));
label_1ef0ec:
    // 0x1ef0ec: 0x10000061  b           . + 4 + (0x61 << 2)
label_1ef0f0:
    if (ctx->pc == 0x1EF0F0u) {
        ctx->pc = 0x1EF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0ECu;
        // 0x1ef0f0: 0xae660704  sw          $a2, 0x704($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1796), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0F4u;
        goto label_1ef0f4;
    }
    ctx->pc = 0x1EF0ECu;
    {
        const bool branch_taken_0x1ef0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0ECu;
        // 0x1ef0f0: 0xae660704  sw          $a2, 0x704($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1796), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0ec) {
            ctx->pc = 0x1EF274u;
            goto label_1ef274;
        }
    }
    ctx->pc = 0x1EF0F4u;
label_1ef0f4:
    // 0x1ef0f4: 0x0  nop
    ctx->pc = 0x1ef0f4u;
    // NOP
label_1ef0f8:
    // 0x1ef0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef0fc:
    // 0x1ef0fc: 0x14820024  bne         $a0, $v0, . + 4 + (0x24 << 2)
label_1ef100:
    if (ctx->pc == 0x1EF100u) {
        ctx->pc = 0x1EF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0FCu;
        // 0x1ef100: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF104u;
        goto label_1ef104;
    }
    ctx->pc = 0x1EF0FCu;
    {
        const bool branch_taken_0x1ef0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0FCu;
        // 0x1ef100: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0fc) {
            ctx->pc = 0x1EF190u;
            goto label_1ef190;
        }
    }
    ctx->pc = 0x1EF104u;
label_1ef104:
    // 0x1ef104: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1ef104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1ef108:
    // 0x1ef108: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ef10c:
    // 0x1ef10c: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1ef10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef110:
    // 0x1ef110: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef114:
    // 0x1ef114: 0xa6640620  sh          $a0, 0x620($s3)
    ctx->pc = 0x1ef114u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1568), (uint16_t)GPR_U32(ctx, 4));
label_1ef118:
    // 0x1ef118: 0x262200a8  addiu       $v0, $s1, 0xA8
    ctx->pc = 0x1ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_1ef11c:
    // 0x1ef11c: 0xa6630622  sh          $v1, 0x622($s3)
    ctx->pc = 0x1ef11cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1570), (uint16_t)GPR_U32(ctx, 3));
label_1ef120:
    // 0x1ef120: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ef124:
    // 0x1ef124: 0xae660624  sw          $a2, 0x624($s3)
    ctx->pc = 0x1ef124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1572), GPR_U32(ctx, 6));
label_1ef128:
    // 0x1ef128: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x1ef128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef12c:
    // 0x1ef12c: 0xa6650630  sh          $a1, 0x630($s3)
    ctx->pc = 0x1ef12cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1584), (uint16_t)GPR_U32(ctx, 5));
label_1ef130:
    // 0x1ef130: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x1ef130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1ef134:
    // 0x1ef134: 0xa6630632  sh          $v1, 0x632($s3)
    ctx->pc = 0x1ef134u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1586), (uint16_t)GPR_U32(ctx, 3));
label_1ef138:
    // 0x1ef138: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ef138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ef13c:
    // 0x1ef13c: 0xae660634  sw          $a2, 0x634($s3)
    ctx->pc = 0x1ef13cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1588), GPR_U32(ctx, 6));
label_1ef140:
    // 0x1ef140: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ef140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef144:
    // 0x1ef144: 0xa6640640  sh          $a0, 0x640($s3)
    ctx->pc = 0x1ef144u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1600), (uint16_t)GPR_U32(ctx, 4));
label_1ef148:
    // 0x1ef148: 0xa6620642  sh          $v0, 0x642($s3)
    ctx->pc = 0x1ef148u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1602), (uint16_t)GPR_U32(ctx, 2));
label_1ef14c:
    // 0x1ef14c: 0xae660644  sw          $a2, 0x644($s3)
    ctx->pc = 0x1ef14cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1604), GPR_U32(ctx, 6));
label_1ef150:
    // 0x1ef150: 0xa6650650  sh          $a1, 0x650($s3)
    ctx->pc = 0x1ef150u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1616), (uint16_t)GPR_U32(ctx, 5));
label_1ef154:
    // 0x1ef154: 0xa6620652  sh          $v0, 0x652($s3)
    ctx->pc = 0x1ef154u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1618), (uint16_t)GPR_U32(ctx, 2));
label_1ef158:
    // 0x1ef158: 0xae660654  sw          $a2, 0x654($s3)
    ctx->pc = 0x1ef158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1620), GPR_U32(ctx, 6));
label_1ef15c:
    // 0x1ef15c: 0xa66006d0  sh          $zero, 0x6D0($s3)
    ctx->pc = 0x1ef15cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1744), (uint16_t)GPR_U32(ctx, 0));
label_1ef160:
    // 0x1ef160: 0xa66006d2  sh          $zero, 0x6D2($s3)
    ctx->pc = 0x1ef160u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1746), (uint16_t)GPR_U32(ctx, 0));
label_1ef164:
    // 0x1ef164: 0xae6606d4  sw          $a2, 0x6D4($s3)
    ctx->pc = 0x1ef164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1748), GPR_U32(ctx, 6));
label_1ef168:
    // 0x1ef168: 0xa66006e0  sh          $zero, 0x6E0($s3)
    ctx->pc = 0x1ef168u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1760), (uint16_t)GPR_U32(ctx, 0));
label_1ef16c:
    // 0x1ef16c: 0xa66006e2  sh          $zero, 0x6E2($s3)
    ctx->pc = 0x1ef16cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1762), (uint16_t)GPR_U32(ctx, 0));
label_1ef170:
    // 0x1ef170: 0xae6606e4  sw          $a2, 0x6E4($s3)
    ctx->pc = 0x1ef170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1764), GPR_U32(ctx, 6));
label_1ef174:
    // 0x1ef174: 0xa66006f0  sh          $zero, 0x6F0($s3)
    ctx->pc = 0x1ef174u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1776), (uint16_t)GPR_U32(ctx, 0));
label_1ef178:
    // 0x1ef178: 0xa66006f2  sh          $zero, 0x6F2($s3)
    ctx->pc = 0x1ef178u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1778), (uint16_t)GPR_U32(ctx, 0));
label_1ef17c:
    // 0x1ef17c: 0xae6606f4  sw          $a2, 0x6F4($s3)
    ctx->pc = 0x1ef17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1780), GPR_U32(ctx, 6));
label_1ef180:
    // 0x1ef180: 0xa6600700  sh          $zero, 0x700($s3)
    ctx->pc = 0x1ef180u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1792), (uint16_t)GPR_U32(ctx, 0));
label_1ef184:
    // 0x1ef184: 0xa6600702  sh          $zero, 0x702($s3)
    ctx->pc = 0x1ef184u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1794), (uint16_t)GPR_U32(ctx, 0));
label_1ef188:
    // 0x1ef188: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1ef18c:
    if (ctx->pc == 0x1EF18Cu) {
        ctx->pc = 0x1EF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF188u;
        // 0x1ef18c: 0xae660704  sw          $a2, 0x704($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1796), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF190u;
        goto label_1ef190;
    }
    ctx->pc = 0x1EF188u;
    {
        const bool branch_taken_0x1ef188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF188u;
        // 0x1ef18c: 0xae660704  sw          $a2, 0x704($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1796), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef188) {
            ctx->pc = 0x1EF274u;
            goto label_1ef274;
        }
    }
    ctx->pc = 0x1EF190u;
label_1ef190:
    // 0x1ef190: 0xa6600620  sh          $zero, 0x620($s3)
    ctx->pc = 0x1ef190u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1568), (uint16_t)GPR_U32(ctx, 0));
label_1ef194:
    // 0x1ef194: 0xa6600622  sh          $zero, 0x622($s3)
    ctx->pc = 0x1ef194u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1570), (uint16_t)GPR_U32(ctx, 0));
label_1ef198:
    // 0x1ef198: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1ef198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef19c:
    // 0x1ef19c: 0xae660624  sw          $a2, 0x624($s3)
    ctx->pc = 0x1ef19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1572), GPR_U32(ctx, 6));
label_1ef1a0:
    // 0x1ef1a0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1ef1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1ef1a4:
    // 0x1ef1a4: 0xa6600630  sh          $zero, 0x630($s3)
    ctx->pc = 0x1ef1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1584), (uint16_t)GPR_U32(ctx, 0));
label_1ef1a8:
    // 0x1ef1a8: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ef1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef1ac:
    // 0x1ef1ac: 0xa6600632  sh          $zero, 0x632($s3)
    ctx->pc = 0x1ef1acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1586), (uint16_t)GPR_U32(ctx, 0));
label_1ef1b0:
    // 0x1ef1b0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1ef1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1ef1b4:
    // 0x1ef1b4: 0xae660634  sw          $a2, 0x634($s3)
    ctx->pc = 0x1ef1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1588), GPR_U32(ctx, 6));
label_1ef1b8:
    // 0x1ef1b8: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ef1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef1bc:
    // 0x1ef1bc: 0xa6600640  sh          $zero, 0x640($s3)
    ctx->pc = 0x1ef1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1600), (uint16_t)GPR_U32(ctx, 0));
label_1ef1c0:
    // 0x1ef1c0: 0x262200a8  addiu       $v0, $s1, 0xA8
    ctx->pc = 0x1ef1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_1ef1c4:
    // 0x1ef1c4: 0xa6600642  sh          $zero, 0x642($s3)
    ctx->pc = 0x1ef1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1602), (uint16_t)GPR_U32(ctx, 0));
label_1ef1c8:
    // 0x1ef1c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ef1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ef1cc:
    // 0x1ef1cc: 0xae660644  sw          $a2, 0x644($s3)
    ctx->pc = 0x1ef1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1604), GPR_U32(ctx, 6));
label_1ef1d0:
    // 0x1ef1d0: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x1ef1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef1d4:
    // 0x1ef1d4: 0xa6600650  sh          $zero, 0x650($s3)
    ctx->pc = 0x1ef1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1616), (uint16_t)GPR_U32(ctx, 0));
label_1ef1d8:
    // 0x1ef1d8: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x1ef1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1ef1dc:
    // 0x1ef1dc: 0xa6600652  sh          $zero, 0x652($s3)
    ctx->pc = 0x1ef1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1618), (uint16_t)GPR_U32(ctx, 0));
label_1ef1e0:
    // 0x1ef1e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ef1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ef1e4:
    // 0x1ef1e4: 0xae660654  sw          $a2, 0x654($s3)
    ctx->pc = 0x1ef1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1620), GPR_U32(ctx, 6));
label_1ef1e8:
    // 0x1ef1e8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ef1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef1ec:
    // 0x1ef1ec: 0xa66406d0  sh          $a0, 0x6D0($s3)
    ctx->pc = 0x1ef1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1744), (uint16_t)GPR_U32(ctx, 4));
label_1ef1f0:
    // 0x1ef1f0: 0xa66306d2  sh          $v1, 0x6D2($s3)
    ctx->pc = 0x1ef1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1746), (uint16_t)GPR_U32(ctx, 3));
label_1ef1f4:
    // 0x1ef1f4: 0xae6606d4  sw          $a2, 0x6D4($s3)
    ctx->pc = 0x1ef1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1748), GPR_U32(ctx, 6));
label_1ef1f8:
    // 0x1ef1f8: 0xa66506e0  sh          $a1, 0x6E0($s3)
    ctx->pc = 0x1ef1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1760), (uint16_t)GPR_U32(ctx, 5));
label_1ef1fc:
    // 0x1ef1fc: 0xa66306e2  sh          $v1, 0x6E2($s3)
    ctx->pc = 0x1ef1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1762), (uint16_t)GPR_U32(ctx, 3));
label_1ef200:
    // 0x1ef200: 0xae6606e4  sw          $a2, 0x6E4($s3)
    ctx->pc = 0x1ef200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1764), GPR_U32(ctx, 6));
label_1ef204:
    // 0x1ef204: 0xa66406f0  sh          $a0, 0x6F0($s3)
    ctx->pc = 0x1ef204u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1776), (uint16_t)GPR_U32(ctx, 4));
label_1ef208:
    // 0x1ef208: 0xa66206f2  sh          $v0, 0x6F2($s3)
    ctx->pc = 0x1ef208u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1778), (uint16_t)GPR_U32(ctx, 2));
label_1ef20c:
    // 0x1ef20c: 0xae6606f4  sw          $a2, 0x6F4($s3)
    ctx->pc = 0x1ef20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1780), GPR_U32(ctx, 6));
label_1ef210:
    // 0x1ef210: 0xa6650700  sh          $a1, 0x700($s3)
    ctx->pc = 0x1ef210u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1792), (uint16_t)GPR_U32(ctx, 5));
label_1ef214:
    // 0x1ef214: 0xa6620702  sh          $v0, 0x702($s3)
    ctx->pc = 0x1ef214u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1794), (uint16_t)GPR_U32(ctx, 2));
label_1ef218:
    // 0x1ef218: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ef21c:
    if (ctx->pc == 0x1EF21Cu) {
        ctx->pc = 0x1EF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF218u;
        // 0x1ef21c: 0xae660704  sw          $a2, 0x704($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1796), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF220u;
        goto label_1ef220;
    }
    ctx->pc = 0x1EF218u;
    {
        const bool branch_taken_0x1ef218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF218u;
        // 0x1ef21c: 0xae660704  sw          $a2, 0x704($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1796), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef218) {
            ctx->pc = 0x1EF274u;
            goto label_1ef274;
        }
    }
    ctx->pc = 0x1EF220u;
label_1ef220:
    // 0x1ef220: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef224:
    // 0x1ef224: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef228:
    // 0x1ef228: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1ef228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef22c:
    // 0x1ef22c: 0x0  nop
    ctx->pc = 0x1ef22cu;
    // NOP
label_1ef230:
    // 0x1ef230: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1ef234:
    // 0x1ef234: 0xa4a00620  sh          $zero, 0x620($a1)
    ctx->pc = 0x1ef234u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1568), (uint16_t)GPR_U32(ctx, 0));
label_1ef238:
    // 0x1ef238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ef23c:
    // 0x1ef23c: 0xa4a00622  sh          $zero, 0x622($a1)
    ctx->pc = 0x1ef23cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1570), (uint16_t)GPR_U32(ctx, 0));
label_1ef240:
    // 0x1ef240: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1ef240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ef244:
    // 0x1ef244: 0xaca60624  sw          $a2, 0x624($a1)
    ctx->pc = 0x1ef244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1572), GPR_U32(ctx, 6));
label_1ef248:
    // 0x1ef248: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x1ef248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_1ef24c:
    // 0x1ef24c: 0xa4a00630  sh          $zero, 0x630($a1)
    ctx->pc = 0x1ef24cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1584), (uint16_t)GPR_U32(ctx, 0));
label_1ef250:
    // 0x1ef250: 0xa4a00632  sh          $zero, 0x632($a1)
    ctx->pc = 0x1ef250u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1586), (uint16_t)GPR_U32(ctx, 0));
label_1ef254:
    // 0x1ef254: 0xaca60634  sw          $a2, 0x634($a1)
    ctx->pc = 0x1ef254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1588), GPR_U32(ctx, 6));
label_1ef258:
    // 0x1ef258: 0xa4a00640  sh          $zero, 0x640($a1)
    ctx->pc = 0x1ef258u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1600), (uint16_t)GPR_U32(ctx, 0));
label_1ef25c:
    // 0x1ef25c: 0xa4a00642  sh          $zero, 0x642($a1)
    ctx->pc = 0x1ef25cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1602), (uint16_t)GPR_U32(ctx, 0));
label_1ef260:
    // 0x1ef260: 0xaca60644  sw          $a2, 0x644($a1)
    ctx->pc = 0x1ef260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1604), GPR_U32(ctx, 6));
label_1ef264:
    // 0x1ef264: 0xa4a00650  sh          $zero, 0x650($a1)
    ctx->pc = 0x1ef264u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1616), (uint16_t)GPR_U32(ctx, 0));
label_1ef268:
    // 0x1ef268: 0xa4a00652  sh          $zero, 0x652($a1)
    ctx->pc = 0x1ef268u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1618), (uint16_t)GPR_U32(ctx, 0));
label_1ef26c:
    // 0x1ef26c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1ef270:
    if (ctx->pc == 0x1EF270u) {
        ctx->pc = 0x1EF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF26Cu;
        // 0x1ef270: 0xaca60654  sw          $a2, 0x654($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1620), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF274u;
        goto label_1ef274;
    }
    ctx->pc = 0x1EF26Cu;
    {
        const bool branch_taken_0x1ef26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF26Cu;
        // 0x1ef270: 0xaca60654  sw          $a2, 0x654($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1620), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef26c) {
            ctx->pc = 0x1EF22Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef22c;
        }
    }
    ctx->pc = 0x1EF274u;
label_1ef274:
    // 0x1ef274: 0x0  nop
    ctx->pc = 0x1ef274u;
    // NOP
label_1ef278:
    // 0x1ef278: 0x92aa0008  lbu         $t2, 0x8($s5)
    ctx->pc = 0x1ef278u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_1ef27c:
    // 0x1ef27c: 0x26640710  addiu       $a0, $s3, 0x710
    ctx->pc = 0x1ef27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1808));
label_1ef280:
    // 0x1ef280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef284:
    // 0x1ef284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ef284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef288:
    // 0x1ef288: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1ef288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ef28c:
    // 0x1ef28c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1ef28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ef290:
    // 0x1ef290: 0xc07c0d0  jal         func_1F0340
label_1ef294:
    if (ctx->pc == 0x1EF294u) {
        ctx->pc = 0x1EF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF290u;
        // 0x1ef294: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF298u;
        goto label_1ef298;
    }
    ctx->pc = 0x1EF290u;
    SET_GPR_U32(ctx, 31, 0x1EF298u);
    ctx->pc = 0x1EF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF290u;
    // 0x1ef294: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x1EF298u;
label_1ef298:
    // 0x1ef298: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1ef298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1ef29c:
    // 0x1ef29c: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x1ef29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_1ef2a0:
    // 0x1ef2a0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef2a4:
    // 0x1ef2a4: 0x340cfe00  ori         $t4, $zero, 0xFE00
    ctx->pc = 0x1ef2a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef2a8:
    // 0x1ef2a8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1ef2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ef2ac:
    // 0x1ef2ac: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ef2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef2b0:
    // 0x1ef2b0: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1ef2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1ef2b4:
    // 0x1ef2b4: 0xa6640a50  sh          $a0, 0xA50($s3)
    ctx->pc = 0x1ef2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2640), (uint16_t)GPR_U32(ctx, 4));
label_1ef2b8:
    // 0x1ef2b8: 0xa6630a52  sh          $v1, 0xA52($s3)
    ctx->pc = 0x1ef2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2642), (uint16_t)GPR_U32(ctx, 3));
label_1ef2bc:
    // 0x1ef2bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ef2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ef2c0:
    // 0x1ef2c0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ef2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef2c4:
    // 0x1ef2c4: 0xae6c0a54  sw          $t4, 0xA54($s3)
    ctx->pc = 0x1ef2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2644), GPR_U32(ctx, 12));
label_1ef2c8:
    // 0x1ef2c8: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x1ef2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1ef2cc:
    // 0x1ef2cc: 0xa6630a60  sh          $v1, 0xA60($s3)
    ctx->pc = 0x1ef2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2656), (uint16_t)GPR_U32(ctx, 3));
label_1ef2d0:
    // 0x1ef2d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ef2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ef2d4:
    // 0x1ef2d4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ef2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ef2d8:
    // 0x1ef2d8: 0xa6620a62  sh          $v0, 0xA62($s3)
    ctx->pc = 0x1ef2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2658), (uint16_t)GPR_U32(ctx, 2));
label_1ef2dc:
    // 0x1ef2dc: 0xae6c0a64  sw          $t4, 0xA64($s3)
    ctx->pc = 0x1ef2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2660), GPR_U32(ctx, 12));
label_1ef2e0:
    // 0x1ef2e0: 0x8f828f50  lw          $v0, -0x70B0($gp)
    ctx->pc = 0x1ef2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938448)));
label_1ef2e4:
    // 0x1ef2e4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1ef2e8:
    if (ctx->pc == 0x1EF2E8u) {
        ctx->pc = 0x1EF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2E4u;
        // 0x1ef2e8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF2ECu;
        goto label_1ef2ec;
    }
    ctx->pc = 0x1EF2E4u;
    {
        const bool branch_taken_0x1ef2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2E4u;
        // 0x1ef2e8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2e4) {
            ctx->pc = 0x1EF3ECu;
            goto label_1ef3ec;
        }
    }
    ctx->pc = 0x1EF2ECu;
label_1ef2ec:
    // 0x1ef2ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef2ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2f0:
    // 0x1ef2f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ef2f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2f4:
    // 0x1ef2f4: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x1ef2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1ef2f8:
    // 0x1ef2f8: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x1ef2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1ef2fc:
    // 0x1ef2fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1ef2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ef300:
    // 0x1ef300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef304:
    // 0x1ef304: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ef304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef308:
    // 0x1ef308: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ef308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ef30c:
    // 0x1ef30c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x1ef30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1ef310:
    // 0x1ef310: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1ef310u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ef314:
    // 0x1ef314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ef314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ef318:
    // 0x1ef318: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1ef318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1ef31c:
    // 0x1ef31c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1ef31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ef320:
    // 0x1ef320: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1ef320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ef324:
    // 0x1ef324: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1ef324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1ef328:
    // 0x1ef328: 0x2a81821  addu        $v1, $s5, $t0
    ctx->pc = 0x1ef328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
label_1ef32c:
    // 0x1ef32c: 0x246b000c  addiu       $t3, $v1, 0xC
    ctx->pc = 0x1ef32cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ef330:
    // 0x1ef330: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1ef330u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1ef334:
    // 0x1ef334: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1ef338:
    if (ctx->pc == 0x1EF338u) {
        ctx->pc = 0x1EF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF334u;
        // 0x1ef338: 0x2691821  addu        $v1, $s3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF33Cu;
        goto label_1ef33c;
    }
    ctx->pc = 0x1EF334u;
    {
        const bool branch_taken_0x1ef334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF334u;
        // 0x1ef338: 0x2691821  addu        $v1, $s3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef334) {
            ctx->pc = 0x1EF354u;
            goto label_1ef354;
        }
    }
    ctx->pc = 0x1EF33Cu;
label_1ef33c:
    // 0x1ef33c: 0xa0600ae0  sb          $zero, 0xAE0($v1)
    ctx->pc = 0x1ef33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2784), (uint8_t)GPR_U32(ctx, 0));
label_1ef340:
    // 0x1ef340: 0xa0600ae1  sb          $zero, 0xAE1($v1)
    ctx->pc = 0x1ef340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2785), (uint8_t)GPR_U32(ctx, 0));
label_1ef344:
    // 0x1ef344: 0xa0600ae2  sb          $zero, 0xAE2($v1)
    ctx->pc = 0x1ef344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2786), (uint8_t)GPR_U32(ctx, 0));
label_1ef348:
    // 0x1ef348: 0xa0600ae3  sb          $zero, 0xAE3($v1)
    ctx->pc = 0x1ef348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2787), (uint8_t)GPR_U32(ctx, 0));
label_1ef34c:
    // 0x1ef34c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1ef350:
    if (ctx->pc == 0x1EF350u) {
        ctx->pc = 0x1EF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF34Cu;
        // 0x1ef350: 0xac670ae4  sw          $a3, 0xAE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2788), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF354u;
        goto label_1ef354;
    }
    ctx->pc = 0x1EF34Cu;
    {
        const bool branch_taken_0x1ef34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF34Cu;
        // 0x1ef350: 0xac670ae4  sw          $a3, 0xAE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2788), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef34c) {
            ctx->pc = 0x1EF3CCu;
            goto label_1ef3cc;
        }
    }
    ctx->pc = 0x1EF354u;
label_1ef354:
    // 0x1ef354: 0x0  nop
    ctx->pc = 0x1ef354u;
    // NOP
label_1ef358:
    // 0x1ef358: 0xad1823  subu        $v1, $a1, $t5
    ctx->pc = 0x1ef358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_1ef35c:
    // 0x1ef35c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ef35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ef360:
    // 0x1ef360: 0x2695021  addu        $t2, $s3, $t1
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_1ef364:
    // 0x1ef364: 0xc3c023  subu        $t8, $a2, $v1
    ctx->pc = 0x1ef364u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1ef368:
    // 0x1ef368: 0xa5440af0  sh          $a0, 0xAF0($t2)
    ctx->pc = 0x1ef368u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2800), (uint16_t)GPR_U32(ctx, 4));
label_1ef36c:
    // 0x1ef36c: 0x1818c0  sll         $v1, $t8, 3
    ctx->pc = 0x1ef36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_1ef370:
    // 0x1ef370: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1ef370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ef374:
    // 0x1ef374: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1ef374u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
label_1ef378:
    // 0x1ef378: 0xa5430af2  sh          $v1, 0xAF2($t2)
    ctx->pc = 0x1ef378u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2802), (uint16_t)GPR_U32(ctx, 3));
label_1ef37c:
    // 0x1ef37c: 0x18c0c0  sll         $t8, $t8, 3
    ctx->pc = 0x1ef37cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_1ef380:
    // 0x1ef380: 0xad4c0af4  sw          $t4, 0xAF4($t2)
    ctx->pc = 0x1ef380u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 2804), GPR_U32(ctx, 12));
label_1ef384:
    // 0x1ef384: 0x27037900  addiu       $v1, $t8, 0x7900
    ctx->pc = 0x1ef384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 30976));
label_1ef388:
    // 0x1ef388: 0xa5420b00  sh          $v0, 0xB00($t2)
    ctx->pc = 0x1ef388u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2816), (uint16_t)GPR_U32(ctx, 2));
label_1ef38c:
    // 0x1ef38c: 0xa5430b02  sh          $v1, 0xB02($t2)
    ctx->pc = 0x1ef38cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2818), (uint16_t)GPR_U32(ctx, 3));
label_1ef390:
    // 0x1ef390: 0xad4c0b04  sw          $t4, 0xB04($t2)
    ctx->pc = 0x1ef390u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 2820), GPR_U32(ctx, 12));
label_1ef394:
    // 0x1ef394: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x1ef394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_1ef398:
    // 0x1ef398: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
label_1ef39c:
    if (ctx->pc == 0x1EF39Cu) {
        ctx->pc = 0x1EF3A0u;
        goto label_1ef3a0;
    }
    ctx->pc = 0x1EF398u;
    {
        const bool branch_taken_0x1ef398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ef398) {
            ctx->pc = 0x1EF3B8u;
            goto label_1ef3b8;
        }
    }
    ctx->pc = 0x1EF3A0u;
label_1ef3a0:
    // 0x1ef3a0: 0xa1510ae0  sb          $s1, 0xAE0($t2)
    ctx->pc = 0x1ef3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2784), (uint8_t)GPR_U32(ctx, 17));
label_1ef3a4:
    // 0x1ef3a4: 0xa1510ae1  sb          $s1, 0xAE1($t2)
    ctx->pc = 0x1ef3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2785), (uint8_t)GPR_U32(ctx, 17));
label_1ef3a8:
    // 0x1ef3a8: 0xa1510ae2  sb          $s1, 0xAE2($t2)
    ctx->pc = 0x1ef3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2786), (uint8_t)GPR_U32(ctx, 17));
label_1ef3ac:
    // 0x1ef3ac: 0xa14f0ae3  sb          $t7, 0xAE3($t2)
    ctx->pc = 0x1ef3acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2787), (uint8_t)GPR_U32(ctx, 15));
label_1ef3b0:
    // 0x1ef3b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ef3b4:
    if (ctx->pc == 0x1EF3B4u) {
        ctx->pc = 0x1EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3B0u;
        // 0x1ef3b4: 0xad470ae4  sw          $a3, 0xAE4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 2788), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF3B8u;
        goto label_1ef3b8;
    }
    ctx->pc = 0x1EF3B0u;
    {
        const bool branch_taken_0x1ef3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3B0u;
        // 0x1ef3b4: 0xad470ae4  sw          $a3, 0xAE4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 2788), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3b0) {
            ctx->pc = 0x1EF3CCu;
            goto label_1ef3cc;
        }
    }
    ctx->pc = 0x1EF3B8u;
label_1ef3b8:
    // 0x1ef3b8: 0xa14e0ae0  sb          $t6, 0xAE0($t2)
    ctx->pc = 0x1ef3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2784), (uint8_t)GPR_U32(ctx, 14));
label_1ef3bc:
    // 0x1ef3bc: 0xa14e0ae1  sb          $t6, 0xAE1($t2)
    ctx->pc = 0x1ef3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2785), (uint8_t)GPR_U32(ctx, 14));
label_1ef3c0:
    // 0x1ef3c0: 0xa14e0ae2  sb          $t6, 0xAE2($t2)
    ctx->pc = 0x1ef3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2786), (uint8_t)GPR_U32(ctx, 14));
label_1ef3c4:
    // 0x1ef3c4: 0xa14e0ae3  sb          $t6, 0xAE3($t2)
    ctx->pc = 0x1ef3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2787), (uint8_t)GPR_U32(ctx, 14));
label_1ef3c8:
    // 0x1ef3c8: 0xad470ae4  sw          $a3, 0xAE4($t2)
    ctx->pc = 0x1ef3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 2788), GPR_U32(ctx, 7));
label_1ef3cc:
    // 0x1ef3cc: 0x0  nop
    ctx->pc = 0x1ef3ccu;
    // NOP
label_1ef3d0:
    // 0x1ef3d0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1ef3d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1ef3d4:
    // 0x1ef3d4: 0x29a30002  slti        $v1, $t5, 0x2
    ctx->pc = 0x1ef3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ef3d8:
    // 0x1ef3d8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1ef3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_1ef3dc:
    // 0x1ef3dc: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_1ef3e0:
    if (ctx->pc == 0x1EF3E0u) {
        ctx->pc = 0x1EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3DCu;
        // 0x1ef3e0: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF3E4u;
        goto label_1ef3e4;
    }
    ctx->pc = 0x1EF3DCu;
    {
        const bool branch_taken_0x1ef3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3DCu;
        // 0x1ef3e0: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3dc) {
            ctx->pc = 0x1EF328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef328;
        }
    }
    ctx->pc = 0x1EF3E4u;
label_1ef3e4:
    // 0x1ef3e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ef3e8:
    if (ctx->pc == 0x1EF3E8u) {
        ctx->pc = 0x1EF3ECu;
        goto label_1ef3ec;
    }
    ctx->pc = 0x1EF3E4u;
    {
        const bool branch_taken_0x1ef3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3e4) {
            ctx->pc = 0x1EF41Cu;
            goto label_1ef41c;
        }
    }
    ctx->pc = 0x1EF3ECu;
label_1ef3ec:
    // 0x1ef3ec: 0x0  nop
    ctx->pc = 0x1ef3ecu;
    // NOP
label_1ef3f0:
    // 0x1ef3f0: 0xa2600ae0  sb          $zero, 0xAE0($s3)
    ctx->pc = 0x1ef3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2784), (uint8_t)GPR_U32(ctx, 0));
label_1ef3f4:
    // 0x1ef3f4: 0xa2600ae1  sb          $zero, 0xAE1($s3)
    ctx->pc = 0x1ef3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2785), (uint8_t)GPR_U32(ctx, 0));
label_1ef3f8:
    // 0x1ef3f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ef3fc:
    // 0x1ef3fc: 0xa2600ae2  sb          $zero, 0xAE2($s3)
    ctx->pc = 0x1ef3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2786), (uint8_t)GPR_U32(ctx, 0));
label_1ef400:
    // 0x1ef400: 0xa2600ae3  sb          $zero, 0xAE3($s3)
    ctx->pc = 0x1ef400u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2787), (uint8_t)GPR_U32(ctx, 0));
label_1ef404:
    // 0x1ef404: 0xae620ae4  sw          $v0, 0xAE4($s3)
    ctx->pc = 0x1ef404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2788), GPR_U32(ctx, 2));
label_1ef408:
    // 0x1ef408: 0xa2600b80  sb          $zero, 0xB80($s3)
    ctx->pc = 0x1ef408u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2944), (uint8_t)GPR_U32(ctx, 0));
label_1ef40c:
    // 0x1ef40c: 0xa2600b81  sb          $zero, 0xB81($s3)
    ctx->pc = 0x1ef40cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2945), (uint8_t)GPR_U32(ctx, 0));
label_1ef410:
    // 0x1ef410: 0xa2600b82  sb          $zero, 0xB82($s3)
    ctx->pc = 0x1ef410u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2946), (uint8_t)GPR_U32(ctx, 0));
label_1ef414:
    // 0x1ef414: 0xa2600b83  sb          $zero, 0xB83($s3)
    ctx->pc = 0x1ef414u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2947), (uint8_t)GPR_U32(ctx, 0));
label_1ef418:
    // 0x1ef418: 0xae620b84  sw          $v0, 0xB84($s3)
    ctx->pc = 0x1ef418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2948), GPR_U32(ctx, 2));
label_1ef41c:
    // 0x1ef41c: 0x0  nop
    ctx->pc = 0x1ef41cu;
    // NOP
label_1ef420:
    // 0x1ef420: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ef420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef424:
    // 0x1ef424: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ef424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ef428:
    // 0x1ef428: 0x240600bb  addiu       $a2, $zero, 0xBB
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_1ef42c:
    // 0x1ef42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ef42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef430:
    // 0x1ef430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef434:
    // 0x1ef434: 0xc066c72  jal         func_19B1C8
label_1ef438:
    if (ctx->pc == 0x1EF438u) {
        ctx->pc = 0x1EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF434u;
        // 0x1ef438: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF43Cu;
        goto label_1ef43c;
    }
    ctx->pc = 0x1EF434u;
    SET_GPR_U32(ctx, 31, 0x1EF43Cu);
    ctx->pc = 0x1EF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF434u;
    // 0x1ef438: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1EF43Cu;
label_1ef43c:
    // 0x1ef43c: 0x0  nop
    ctx->pc = 0x1ef43cu;
    // NOP
label_1ef440:
    // 0x1ef440: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1ef440u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1ef444:
    // 0x1ef444: 0x26d60024  addiu       $s6, $s6, 0x24
    ctx->pc = 0x1ef444u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
label_1ef448:
    // 0x1ef448: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1ef448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1ef44c:
    // 0x1ef44c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ef450:
    // 0x1ef450: 0x8f848f48  lw          $a0, -0x70B8($gp)
    ctx->pc = 0x1ef450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938440)));
label_1ef454:
    // 0x1ef454: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x1ef454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ef458:
    // 0x1ef458: 0x1460fe50  bnez        $v1, . + 4 + (-0x1B0 << 2)
label_1ef45c:
    if (ctx->pc == 0x1EF45Cu) {
        ctx->pc = 0x1EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF458u;
        // 0x1ef45c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF460u;
        goto label_1ef460;
    }
    ctx->pc = 0x1EF458u;
    {
        const bool branch_taken_0x1ef458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF458u;
        // 0x1ef45c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef458) {
            ctx->pc = 0x1EED9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1eed9c; return; }
        }
    }
    ctx->pc = 0x1EF460u;
label_1ef460:
    // 0x1ef460: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ef460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ef464:
    // 0x1ef464: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ef464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ef468:
    // 0x1ef468: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ef468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ef46c:
    // 0x1ef46c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ef46cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ef470:
    // 0x1ef470: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ef470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef474:
    // 0x1ef474: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef478:
    // 0x1ef478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef47c:
    // 0x1ef47c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef480:
    // 0x1ef480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef484:
    // 0x1ef484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef488:
    // 0x1ef488: 0x3e00008  jr          $ra
label_1ef48c:
    if (ctx->pc == 0x1EF48Cu) {
        ctx->pc = 0x1EF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF488u;
        // 0x1ef48c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF490u;
        goto label_1ef490;
    }
    ctx->pc = 0x1EF488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF488u;
        // 0x1ef48c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF490u;
label_1ef490:
    // 0x1ef490: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ef490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ef494:
    // 0x1ef494: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ef494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1ef498:
    // 0x1ef498: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ef498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ef49c:
    // 0x1ef49c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ef4a0:
    // 0x1ef4a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ef4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ef4a4:
    // 0x1ef4a4: 0x246339b0  addiu       $v1, $v1, 0x39B0
    ctx->pc = 0x1ef4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14768));
label_1ef4a8:
    // 0x1ef4a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ef4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ef4ac:
    // 0x1ef4ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ef4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ef4b0:
    // 0x1ef4b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ef4b4:
    // 0x1ef4b4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1ef4b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1ef4b8:
    // 0x1ef4b8: 0xaf808f58  sw          $zero, -0x70A8($gp)
    ctx->pc = 0x1ef4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938456), GPR_U32(ctx, 0));
label_1ef4bc:
    // 0x1ef4bc: 0xaf808f54  sw          $zero, -0x70AC($gp)
    ctx->pc = 0x1ef4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 0));
label_1ef4c0:
    // 0x1ef4c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ef4c4:
    // 0x1ef4c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ef4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ef4c8:
    // 0x1ef4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ef4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ef4cc:
    // 0x1ef4cc: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1ef4d0:
    // 0x1ef4d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ef4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef4d4:
    // 0x1ef4d4: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef4d8:
    // 0x1ef4d8: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x1ef4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1ef4dc:
    // 0x1ef4dc: 0x1500a  movz        $t2, $zero, $at
    ctx->pc = 0x1ef4dcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_1ef4e0:
    // 0x1ef4e0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1ef4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1ef4e4:
    // 0x1ef4e4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ef4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ef4e8:
    // 0x1ef4e8: 0x34498889  ori         $t1, $v0, 0x8889
    ctx->pc = 0x1ef4e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1ef4ec:
    // 0x1ef4ec: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x1ef4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_1ef4f0:
    // 0x1ef4f0: 0x12a0018  mult        $zero, $t1, $t2
    ctx->pc = 0x1ef4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ef4f4:
    // 0x1ef4f4: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1ef4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1ef4f8:
    // 0x1ef4f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ef4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ef4fc:
    // 0x1ef4fc: 0x24a5d170  addiu       $a1, $a1, -0x2E90
    ctx->pc = 0x1ef4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955376));
label_1ef500:
    // 0x1ef500: 0x1010  mfhi        $v0
    ctx->pc = 0x1ef500u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ef504:
    // 0x1ef504: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ef504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1ef508:
    // 0x1ef508: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ef508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ef50c:
    // 0x1ef50c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef510:
    // 0x1ef510: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x1ef510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ef514:
    // 0x1ef514: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1ef518:
    // 0x1ef518: 0x0  nop
    ctx->pc = 0x1ef518u;
    // NOP
label_1ef51c:
    // 0x1ef51c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ef51cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ef520:
    // 0x1ef520: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x1ef520u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ef524:
    // 0x1ef524: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ef524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ef528:
    // 0x1ef528: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ef528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ef52c:
    // 0x1ef52c: 0x3810  mfhi        $a3
    ctx->pc = 0x1ef52cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1ef530:
    // 0x1ef530: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef534:
    // 0x1ef534: 0x148001a  div         $zero, $t2, $t0
    ctx->pc = 0x1ef534u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ef538:
    // 0x1ef538: 0x0  nop
    ctx->pc = 0x1ef538u;
    // NOP
label_1ef53c:
    // 0x1ef53c: 0x0  nop
    ctx->pc = 0x1ef53cu;
    // NOP
label_1ef540:
    // 0x1ef540: 0x1810  mfhi        $v1
    ctx->pc = 0x1ef540u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ef544:
    // 0x1ef544: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ef544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ef548:
    // 0x1ef548: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ef548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef54c:
    // 0x1ef54c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ef54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ef550:
    // 0x1ef550: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ef550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef554:
    // 0x1ef554: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1ef554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ef558:
    // 0x1ef558: 0x1280018  mult        $zero, $t1, $t0
    ctx->pc = 0x1ef558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ef55c:
    // 0x1ef55c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1ef560:
    // 0x1ef560: 0x0  nop
    ctx->pc = 0x1ef560u;
    // NOP
label_1ef564:
    // 0x1ef564: 0x1010  mfhi        $v0
    ctx->pc = 0x1ef564u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ef568:
    // 0x1ef568: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ef56c:
    // 0x1ef56c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ef56cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ef570:
    // 0x1ef570: 0xc08f20e  jal         func_23C838
label_1ef574:
    if (ctx->pc == 0x1EF574u) {
        ctx->pc = 0x1EF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF570u;
        // 0x1ef574: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF578u;
        goto label_1ef578;
    }
    ctx->pc = 0x1EF570u;
    SET_GPR_U32(ctx, 31, 0x1EF578u);
    ctx->pc = 0x1EF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF570u;
    // 0x1ef574: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1EF578u;
label_1ef578:
    // 0x1ef578: 0xc07082c  jal         func_1C20B0
label_1ef57c:
    if (ctx->pc == 0x1EF57Cu) {
        ctx->pc = 0x1EF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF578u;
        // 0x1ef57c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF580u;
        goto label_1ef580;
    }
    ctx->pc = 0x1EF578u;
    SET_GPR_U32(ctx, 31, 0x1EF580u);
    ctx->pc = 0x1EF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF578u;
    // 0x1ef57c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1EF580u;
label_1ef580:
    // 0x1ef580: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ef580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef584:
    // 0x1ef584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef588:
    // 0x1ef588: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef58c:
    // 0x1ef58c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x1ef58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_1ef590:
    // 0x1ef590: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1ef590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ef594:
    // 0x1ef594: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x1ef594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
label_1ef598:
    // 0x1ef598: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1ef598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1ef59c:
    // 0x1ef59c: 0xc05e234  jal         func_1788D0
label_1ef5a0:
    if (ctx->pc == 0x1EF5A0u) {
        ctx->pc = 0x1EF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF59Cu;
        // 0x1ef5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF5A4u;
        goto label_1ef5a4;
    }
    ctx->pc = 0x1EF59Cu;
    SET_GPR_U32(ctx, 31, 0x1EF5A4u);
    ctx->pc = 0x1EF5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF59Cu;
    // 0x1ef5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1EF5A4u;
label_1ef5a4:
    // 0x1ef5a4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1ef5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ef5a8:
    // 0x1ef5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ef5ac:
    // 0x1ef5ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ef5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ef5b0:
    // 0x1ef5b0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ef5b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef5b4:
    // 0x1ef5b4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1ef5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1ef5b8:
    // 0x1ef5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef5bc:
    // 0x1ef5bc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ef5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ef5c0:
    // 0x1ef5c0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ef5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ef5c4:
    // 0x1ef5c4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ef5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ef5c8:
    // 0x1ef5c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ef5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5cc:
    // 0x1ef5cc: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_1ef5d0:
    // 0x1ef5d0: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x1ef5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ef5d4:
    // 0x1ef5d4: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1ef5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ef5d8:
    // 0x1ef5d8: 0x240a01c0  addiu       $t2, $zero, 0x1C0
    ctx->pc = 0x1ef5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ef5dc:
    // 0x1ef5dc: 0xc05de30  jal         func_1778C0
label_1ef5e0:
    if (ctx->pc == 0x1EF5E0u) {
        ctx->pc = 0x1EF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5DCu;
        // 0x1ef5e0: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF5E4u;
        goto label_1ef5e4;
    }
    ctx->pc = 0x1EF5DCu;
    SET_GPR_U32(ctx, 31, 0x1EF5E4u);
    ctx->pc = 0x1EF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5DCu;
    // 0x1ef5e0: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1EF5E4u;
label_1ef5e4:
    // 0x1ef5e4: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1ef5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1ef5e8:
    // 0x1ef5e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ef5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ef5ec:
    // 0x1ef5ec: 0x240601b0  addiu       $a2, $zero, 0x1B0
    ctx->pc = 0x1ef5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->pc = 0x1ef5f0u;
    return;
}

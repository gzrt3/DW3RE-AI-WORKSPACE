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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part63(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        case 0x2b9e80u: goto label_2b9e80;
        case 0x2b9e84u: goto label_2b9e84;
        case 0x2b9e88u: goto label_2b9e88;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f14u: goto label_2b9f14;
        case 0x2b9f18u: goto label_2b9f18;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f24u: goto label_2b9f24;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f30u: goto label_2b9f30;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f38u: goto label_2b9f38;
        case 0x2b9f3cu: goto label_2b9f3c;
        case 0x2b9f40u: goto label_2b9f40;
        case 0x2b9f44u: goto label_2b9f44;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f4cu: goto label_2b9f4c;
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f54u: goto label_2b9f54;
        case 0x2b9f58u: goto label_2b9f58;
        case 0x2b9f5cu: goto label_2b9f5c;
        case 0x2b9f60u: goto label_2b9f60;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f6cu: goto label_2b9f6c;
        case 0x2b9f70u: goto label_2b9f70;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f80u: goto label_2b9f80;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9f90u: goto label_2b9f90;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9f98u: goto label_2b9f98;
        case 0x2b9f9cu: goto label_2b9f9c;
        case 0x2b9fa0u: goto label_2b9fa0;
        case 0x2b9fa4u: goto label_2b9fa4;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9facu: goto label_2b9fac;
        case 0x2b9fb0u: goto label_2b9fb0;
        case 0x2b9fb4u: goto label_2b9fb4;
        case 0x2b9fb8u: goto label_2b9fb8;
        case 0x2b9fbcu: goto label_2b9fbc;
        case 0x2b9fc0u: goto label_2b9fc0;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fc8u: goto label_2b9fc8;
        case 0x2b9fccu: goto label_2b9fcc;
        case 0x2b9fd0u: goto label_2b9fd0;
        case 0x2b9fd4u: goto label_2b9fd4;
        case 0x2b9fd8u: goto label_2b9fd8;
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        case 0x2ba020u: goto label_2ba020;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba028u: goto label_2ba028;
        case 0x2ba02cu: goto label_2ba02c;
        case 0x2ba030u: goto label_2ba030;
        case 0x2ba034u: goto label_2ba034;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba03cu: goto label_2ba03c;
        case 0x2ba040u: goto label_2ba040;
        case 0x2ba044u: goto label_2ba044;
        case 0x2ba048u: goto label_2ba048;
        case 0x2ba04cu: goto label_2ba04c;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        case 0x2ba158u: goto label_2ba158;
        case 0x2ba15cu: goto label_2ba15c;
        case 0x2ba160u: goto label_2ba160;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba168u: goto label_2ba168;
        case 0x2ba16cu: goto label_2ba16c;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba174u: goto label_2ba174;
        case 0x2ba178u: goto label_2ba178;
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba180u: goto label_2ba180;
        case 0x2ba184u: goto label_2ba184;
        case 0x2ba188u: goto label_2ba188;
        case 0x2ba18cu: goto label_2ba18c;
        case 0x2ba190u: goto label_2ba190;
        case 0x2ba194u: goto label_2ba194;
        case 0x2ba198u: goto label_2ba198;
        case 0x2ba19cu: goto label_2ba19c;
        case 0x2ba1a0u: goto label_2ba1a0;
        case 0x2ba1a4u: goto label_2ba1a4;
        case 0x2ba1a8u: goto label_2ba1a8;
        case 0x2ba1acu: goto label_2ba1ac;
        case 0x2ba1b0u: goto label_2ba1b0;
        case 0x2ba1b4u: goto label_2ba1b4;
        case 0x2ba1b8u: goto label_2ba1b8;
        case 0x2ba1bcu: goto label_2ba1bc;
        case 0x2ba1c0u: goto label_2ba1c0;
        case 0x2ba1c4u: goto label_2ba1c4;
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba1ccu: goto label_2ba1cc;
        case 0x2ba1d0u: goto label_2ba1d0;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1d8u: goto label_2ba1d8;
        case 0x2ba1dcu: goto label_2ba1dc;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba3f4u: goto label_2ba3f4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba404u: goto label_2ba404;
        case 0x2ba408u: goto label_2ba408;
        case 0x2ba40cu: goto label_2ba40c;
        case 0x2ba410u: goto label_2ba410;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba418u: goto label_2ba418;
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba420u: goto label_2ba420;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba428u: goto label_2ba428;
        case 0x2ba42cu: goto label_2ba42c;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba434u: goto label_2ba434;
        case 0x2ba438u: goto label_2ba438;
        case 0x2ba43cu: goto label_2ba43c;
        case 0x2ba440u: goto label_2ba440;
        case 0x2ba444u: goto label_2ba444;
        case 0x2ba448u: goto label_2ba448;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba450u: goto label_2ba450;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba458u: goto label_2ba458;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba464u: goto label_2ba464;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba46cu: goto label_2ba46c;
        case 0x2ba470u: goto label_2ba470;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba47cu: goto label_2ba47c;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba484u: goto label_2ba484;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba48cu: goto label_2ba48c;
        case 0x2ba490u: goto label_2ba490;
        case 0x2ba494u: goto label_2ba494;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba49cu: goto label_2ba49c;
        case 0x2ba4a0u: goto label_2ba4a0;
        case 0x2ba4a4u: goto label_2ba4a4;
        case 0x2ba4a8u: goto label_2ba4a8;
        case 0x2ba4acu: goto label_2ba4ac;
        case 0x2ba4b0u: goto label_2ba4b0;
        case 0x2ba4b4u: goto label_2ba4b4;
        case 0x2ba4b8u: goto label_2ba4b8;
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4c0u: goto label_2ba4c0;
        case 0x2ba4c4u: goto label_2ba4c4;
        case 0x2ba4c8u: goto label_2ba4c8;
        case 0x2ba4ccu: goto label_2ba4cc;
        case 0x2ba4d0u: goto label_2ba4d0;
        case 0x2ba4d4u: goto label_2ba4d4;
        case 0x2ba4d8u: goto label_2ba4d8;
        case 0x2ba4dcu: goto label_2ba4dc;
        case 0x2ba4e0u: goto label_2ba4e0;
        case 0x2ba4e4u: goto label_2ba4e4;
        case 0x2ba4e8u: goto label_2ba4e8;
        case 0x2ba4ecu: goto label_2ba4ec;
        case 0x2ba4f0u: goto label_2ba4f0;
        case 0x2ba4f4u: goto label_2ba4f4;
        case 0x2ba4f8u: goto label_2ba4f8;
        case 0x2ba4fcu: goto label_2ba4fc;
        case 0x2ba500u: goto label_2ba500;
        case 0x2ba504u: goto label_2ba504;
        case 0x2ba508u: goto label_2ba508;
        case 0x2ba50cu: goto label_2ba50c;
        case 0x2ba510u: goto label_2ba510;
        case 0x2ba514u: goto label_2ba514;
        case 0x2ba518u: goto label_2ba518;
        case 0x2ba51cu: goto label_2ba51c;
        case 0x2ba520u: goto label_2ba520;
        case 0x2ba524u: goto label_2ba524;
        case 0x2ba528u: goto label_2ba528;
        case 0x2ba52cu: goto label_2ba52c;
        case 0x2ba530u: goto label_2ba530;
        case 0x2ba534u: goto label_2ba534;
        case 0x2ba538u: goto label_2ba538;
        case 0x2ba53cu: goto label_2ba53c;
        case 0x2ba540u: goto label_2ba540;
        case 0x2ba544u: goto label_2ba544;
        case 0x2ba548u: goto label_2ba548;
        case 0x2ba54cu: goto label_2ba54c;
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba554u: goto label_2ba554;
        case 0x2ba558u: goto label_2ba558;
        case 0x2ba55cu: goto label_2ba55c;
        case 0x2ba560u: goto label_2ba560;
        case 0x2ba564u: goto label_2ba564;
        case 0x2ba568u: goto label_2ba568;
        case 0x2ba56cu: goto label_2ba56c;
        case 0x2ba570u: goto label_2ba570;
        case 0x2ba574u: goto label_2ba574;
        case 0x2ba578u: goto label_2ba578;
        case 0x2ba57cu: goto label_2ba57c;
        case 0x2ba580u: goto label_2ba580;
        case 0x2ba584u: goto label_2ba584;
        case 0x2ba588u: goto label_2ba588;
        case 0x2ba58cu: goto label_2ba58c;
        case 0x2ba590u: goto label_2ba590;
        case 0x2ba594u: goto label_2ba594;
        case 0x2ba598u: goto label_2ba598;
        case 0x2ba59cu: goto label_2ba59c;
        case 0x2ba5a0u: goto label_2ba5a0;
        case 0x2ba5a4u: goto label_2ba5a4;
        case 0x2ba5a8u: goto label_2ba5a8;
        case 0x2ba5acu: goto label_2ba5ac;
        case 0x2ba5b0u: goto label_2ba5b0;
        case 0x2ba5b4u: goto label_2ba5b4;
        case 0x2ba5b8u: goto label_2ba5b8;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5c0u: goto label_2ba5c0;
        case 0x2ba5c4u: goto label_2ba5c4;
        case 0x2ba5c8u: goto label_2ba5c8;
        case 0x2ba5ccu: goto label_2ba5cc;
        case 0x2ba5d0u: goto label_2ba5d0;
        case 0x2ba5d4u: goto label_2ba5d4;
        case 0x2ba5d8u: goto label_2ba5d8;
        case 0x2ba5dcu: goto label_2ba5dc;
        case 0x2ba5e0u: goto label_2ba5e0;
        case 0x2ba5e4u: goto label_2ba5e4;
        case 0x2ba5e8u: goto label_2ba5e8;
        case 0x2ba5ecu: goto label_2ba5ec;
        case 0x2ba5f0u: goto label_2ba5f0;
        case 0x2ba5f4u: goto label_2ba5f4;
        case 0x2ba5f8u: goto label_2ba5f8;
        case 0x2ba5fcu: goto label_2ba5fc;
        case 0x2ba600u: goto label_2ba600;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba608u: goto label_2ba608;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba610u: goto label_2ba610;
        case 0x2ba614u: goto label_2ba614;
        default: return;
    }

label_2b9e48:
    // 0x2b9e48: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2b9e4c:
    // 0x2b9e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e50:
    // 0x2b9e50: 0x1f93ff8  .word       0x01F93FF8                   # dsll        $a3, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) << 31);
label_2b9e54:
    // 0x2b9e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e58:
    // 0x2b9e58: 0x1fb3ffb  .word       0x01FB3FFB                   # dsra        $a3, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e58u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 27) >> 31);
label_2b9e5c:
    // 0x2b9e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e60:
    // 0x2b9e60: 0x1fc3ffe  .word       0x01FC3FFE                   # dsrl32      $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) >> (32 + 31));
label_2b9e64:
    // 0x2b9e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e68:
    // 0x2b9e68: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2b9e6c:
    // 0x2b9e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e70:
    // 0x2b9e70: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B9E70 raw=0x03EFB805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9e74:
    // 0x2b9e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9e78:
    // 0x2b9e78: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2b9e7c:
    if (ctx->pc == 0x2B9E7Cu) {
        ctx->pc = 0x2B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E78u;
        // 0x2b9e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E80u;
        goto label_2b9e80;
    }
    ctx->pc = 0x2B9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E78u;
        // 0x2b9e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9E80u;
label_2b9e80:
    // 0x2b9e80: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2b9e84:
    // 0x2b9e84: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e84u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2b9e88:
    // 0x2b9e88: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e88u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2b9e8c:
    // 0x2b9e8c: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e8cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2b9e90:
    // 0x2b9e90: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2b9e90u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b9e94:
    // 0x2b9e94: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e94u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2b9e98:
    // 0x2b9e98: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9e98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9E98 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9e9c:
    // 0x2b9e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ea0:
    // 0x2b9ea0: 0x3efd804  sllv        $k1, $t7, $ra
    ctx->pc = 0x2b9ea0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b9ea4:
    // 0x2b9ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ea8:
    // 0x2b9ea8: 0x3efe007  srav        $gp, $t7, $ra
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b9eac:
    // 0x2b9eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9eb0:
    // 0x2b9eb0: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2b9eb4:
    if (ctx->pc == 0x2B9EB4u) {
        ctx->pc = 0x2B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB0u;
        // 0x2b9eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EB8u;
        goto label_2b9eb8;
    }
    ctx->pc = 0x2B9EB0u;
    {
        const bool branch_taken_0x2b9eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB0u;
        // 0x2b9eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9eb0) {
            ctx->pc = 0x2D5ED8u;
            return;
        }
    }
    ctx->pc = 0x2B9EB8u;
label_2b9eb8:
    // 0x2b9eb8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9eb8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b9ebc:
    // 0x2b9ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ec0:
    // 0x2b9ec0: 0xa8e0805  j           func_A382014
label_2b9ec4:
    if (ctx->pc == 0x2B9EC4u) {
        ctx->pc = 0x2B9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EC0u;
        // 0x2b9ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EC8u;
        goto label_2b9ec8;
    }
    ctx->pc = 0x2B9EC0u;
    ctx->pc = 0x2B9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EC0u;
    // 0x2b9ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B9EC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9EC8u;
label_2b9ec8:
    // 0x2b9ec8: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9ec8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9ecc:
    // 0x2b9ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ed0:
    // 0x2b9ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9ed4:
    // 0x2b9ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ed8:
    // 0x2b9ed8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b9ed8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b9edc:
    // 0x2b9edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ee0:
    // 0x2b9ee0: 0x420f0009  .word       0x420F0009                   # INVALID     $s0, $t7, 0x9 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9ee0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x9 at 0x2B9EE0 raw=0x420F0009"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9ee4:
    // 0x2b9ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ee8:
    // 0x2b9ee8: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2b9eec:
    if (ctx->pc == 0x2B9EECu) {
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EF0u;
        goto label_2b9ef0;
    }
    ctx->pc = 0x2B9EE8u;
    {
        const bool branch_taken_0x2b9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ee8) {
            ctx->pc = 0x2BA258u;
            goto label_2ba258;
        }
    }
    ctx->pc = 0x2B9EF0u;
label_2b9ef0:
    // 0x2b9ef0: 0x420f0040  .word       0x420F0040                   # INVALID     $s0, $t7, 0x40 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9ef0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2B9EF0 raw=0x420F0040"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9ef4:
    // 0x2b9ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ef8:
    // 0x2b9ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9efc:
    // 0x2b9efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f00:
    // 0x2b9f00: 0x420f001b  .word       0x420F001B                   # INVALID     $s0, $t7, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b9f00u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2B9F00 raw=0x420F001B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9f04:
    // 0x2b9f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f08:
    // 0x2b9f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9f0c:
    // 0x2b9f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f10:
    // 0x2b9f10: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b9f14:
    if (ctx->pc == 0x2B9F14u) {
        ctx->pc = 0x2B9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F10u;
        // 0x2b9f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F18u;
        goto label_2b9f18;
    }
    ctx->pc = 0x2B9F10u;
    {
        const bool branch_taken_0x2b9f10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F10u;
        // 0x2b9f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f10) {
            ctx->pc = 0x2BFF10u;
            return;
        }
    }
    ctx->pc = 0x2B9F18u;
label_2b9f18:
    // 0x2b9f18: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b9f18u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b9f1c:
    // 0x2b9f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f20:
    // 0x2b9f20: 0x400007b7  .word       0x400007B7                   # mfc0        $zero, Index # 000007B7 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b9f20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b9f24:
    // 0x2b9f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f28:
    // 0x2b9f28: 0xa213fff  j           func_884FFFC
label_2b9f2c:
    if (ctx->pc == 0x2B9F2Cu) {
        ctx->pc = 0x2B9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F28u;
        // 0x2b9f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F30u;
        goto label_2b9f30;
    }
    ctx->pc = 0x2B9F28u;
    ctx->pc = 0x2B9F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F28u;
    // 0x2b9f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B9F28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9F30u;
label_2b9f30:
    // 0x2b9f30: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2b9f30u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2b9f34:
    // 0x2b9f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f38:
    // 0x2b9f38: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2b9f3c:
    // 0x2b9f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f40:
    // 0x2b9f40: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2b9f40u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2b9f44:
    // 0x2b9f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f48:
    // 0x2b9f48: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2b9f4c:
    // 0x2b9f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f50:
    // 0x2b9f50: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2b9f50u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2b9f54:
    // 0x2b9f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f58:
    // 0x2b9f58: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b9f5c:
    if (ctx->pc == 0x2B9F5Cu) {
        ctx->pc = 0x2B9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F58u;
        // 0x2b9f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F60u;
        goto label_2b9f60;
    }
    ctx->pc = 0x2B9F58u;
    {
        const bool branch_taken_0x2b9f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F58u;
        // 0x2b9f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f58) {
            ctx->pc = 0x2D5F60u;
            return;
        }
    }
    ctx->pc = 0x2B9F60u;
label_2b9f60:
    // 0x2b9f60: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2b9f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b9f64:
    // 0x2b9f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f68:
    // 0x2b9f68: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2b9f68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b9f6c:
    // 0x2b9f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f70:
    // 0x2b9f70: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2b9f70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b9f74:
    // 0x2b9f74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f78:
    // 0x2b9f78: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2b9f78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b9f7c:
    // 0x2b9f7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f80:
    // 0x2b9f80: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b9f84:
    if (ctx->pc == 0x2B9F84u) {
        ctx->pc = 0x2B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F80u;
        // 0x2b9f84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F88u;
        goto label_2b9f88;
    }
    ctx->pc = 0x2B9F80u;
    {
        const bool branch_taken_0x2b9f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F80u;
        // 0x2b9f84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f80) {
            ctx->pc = 0x2D5F88u;
            return;
        }
    }
    ctx->pc = 0x2B9F88u;
label_2b9f88:
    // 0x2b9f88: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2b9f88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b9f8c:
    // 0x2b9f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f90:
    // 0x2b9f90: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2b9f90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b9f94:
    // 0x2b9f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9f98:
    // 0x2b9f98: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b9f9c:
    // 0x2b9f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fa0:
    // 0x2b9fa0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b9fa4:
    // 0x2b9fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fa8:
    // 0x2b9fa8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b9fac:
    if (ctx->pc == 0x2B9FACu) {
        ctx->pc = 0x2B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA8u;
        // 0x2b9fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FB0u;
        goto label_2b9fb0;
    }
    ctx->pc = 0x2B9FA8u;
    {
        const bool branch_taken_0x2b9fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA8u;
        // 0x2b9fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fa8) {
            ctx->pc = 0x2D5FB0u;
            return;
        }
    }
    ctx->pc = 0x2B9FB0u;
label_2b9fb0:
    // 0x2b9fb0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b9fb4:
    // 0x2b9fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fb8:
    // 0x2b9fb8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b9fbc:
    // 0x2b9fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fc0:
    // 0x2b9fc0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2b9fc0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b9fc4:
    // 0x2b9fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fc8:
    // 0x2b9fc8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2b9fc8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b9fcc:
    // 0x2b9fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fd0:
    // 0x2b9fd0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b9fd0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B9FD0 raw=0x48007800");
 /* MITIGATED */
label_2b9fd4:
    // 0x2b9fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fd8:
    // 0x2b9fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9fdc:
    // 0x2b9fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fe0:
    // 0x2b9fe0: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b9fe0u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b9fe4:
    // 0x2b9fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9fe8:
    // 0x2b9fe8: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b9fe8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b9fec:
    // 0x2b9fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ff0:
    // 0x2b9ff0: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b9ff4:
    // 0x2b9ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9ff8:
    // 0x2b9ff8: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b9ff8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b9ffc:
    // 0x2b9ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba000:
    // 0x2ba000: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2ba000u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2ba004:
    // 0x2ba004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba008:
    // 0x2ba008: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2ba00c:
    if (ctx->pc == 0x2BA00Cu) {
        ctx->pc = 0x2BA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA008u;
        // 0x2ba00c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA010u;
        goto label_2ba010;
    }
    ctx->pc = 0x2BA008u;
    {
        const bool branch_taken_0x2ba008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA008u;
        // 0x2ba00c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba008) {
            ctx->pc = 0x2D6010u;
            return;
        }
    }
    ctx->pc = 0x2BA010u;
label_2ba010:
    // 0x2ba010: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2ba010u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2ba014:
    // 0x2ba014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba018:
    // 0x2ba018: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2ba018u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2ba01c:
    // 0x2ba01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba020:
    // 0x2ba020: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2ba024:
    // 0x2ba024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba028:
    // 0x2ba028: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2ba028u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2ba02c:
    // 0x2ba02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba030:
    // 0x2ba030: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2ba034:
    if (ctx->pc == 0x2BA034u) {
        ctx->pc = 0x2BA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA030u;
        // 0x2ba034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA038u;
        goto label_2ba038;
    }
    ctx->pc = 0x2BA030u;
    {
        const bool branch_taken_0x2ba030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA030u;
        // 0x2ba034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba030) {
            ctx->pc = 0x2D6038u;
            return;
        }
    }
    ctx->pc = 0x2BA038u;
label_2ba038:
    // 0x2ba038: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2ba038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2ba03c:
    // 0x2ba03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba040:
    // 0x2ba040: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2ba040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2ba044:
    // 0x2ba044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba048:
    // 0x2ba048: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2ba048u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2ba04c:
    // 0x2ba04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba050:
    // 0x2ba050: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2ba050u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2ba054:
    // 0x2ba054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba058:
    // 0x2ba058: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2ba05c:
    if (ctx->pc == 0x2BA05Cu) {
        ctx->pc = 0x2BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA058u;
        // 0x2ba05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA060u;
        goto label_2ba060;
    }
    ctx->pc = 0x2BA058u;
    {
        const bool branch_taken_0x2ba058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA058u;
        // 0x2ba05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba058) {
            ctx->pc = 0x2D6060u;
            return;
        }
    }
    ctx->pc = 0x2BA060u;
label_2ba060:
    // 0x2ba060: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2ba060u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2ba064:
    // 0x2ba064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba068:
    // 0x2ba068: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2ba068u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2ba06c:
    // 0x2ba06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba070:
    // 0x2ba070: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2ba070u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2ba074:
    // 0x2ba074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba078:
    // 0x2ba078: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2ba078u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2ba07c:
    // 0x2ba07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba080:
    // 0x2ba080: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2ba080u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2ba084:
    // 0x2ba084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba088:
    // 0x2ba088: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba088u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA088 raw=0x48000800");
 /* MITIGATED */
label_2ba08c:
    // 0x2ba08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba090:
    // 0x2ba090: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba094:
    // 0x2ba094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba098:
    // 0x2ba098: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2ba09c:
    if (ctx->pc == 0x2BA09Cu) {
        ctx->pc = 0x2BA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA098u;
        // 0x2ba09c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0A0u;
        goto label_2ba0a0;
    }
    ctx->pc = 0x2BA098u;
    {
        const bool branch_taken_0x2ba098 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA098u;
        // 0x2ba09c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba098) {
            ctx->pc = 0x2BC098u;
            { ctx->pc = 0x2bc098; return; }
        }
    }
    ctx->pc = 0x2BA0A0u;
label_2ba0a0:
    // 0x2ba0a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba0a4:
    if (ctx->pc == 0x2BA0A4u) {
        ctx->pc = 0x2BA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A0u;
        // 0x2ba0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0A8u;
        goto label_2ba0a8;
    }
    ctx->pc = 0x2BA0A0u;
    {
        const bool branch_taken_0x2ba0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A0u;
        // 0x2ba0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0a0) {
            ctx->pc = 0x2D00A8u;
            return;
        }
    }
    ctx->pc = 0x2BA0A8u;
label_2ba0a8:
    // 0x2ba0a8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2ba0a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2ba0ac:
    // 0x2ba0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0b0:
    // 0x2ba0b0: 0x10050004  beq         $zero, $a1, . + 4 + (0x4 << 2)
label_2ba0b4:
    if (ctx->pc == 0x2BA0B4u) {
        ctx->pc = 0x2BA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0B0u;
        // 0x2ba0b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0B8u;
        goto label_2ba0b8;
    }
    ctx->pc = 0x2BA0B0u;
    {
        const bool branch_taken_0x2ba0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0B0u;
        // 0x2ba0b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0b0) {
            ctx->pc = 0x2BA0C4u;
            goto label_2ba0c4;
        }
    }
    ctx->pc = 0x2BA0B8u;
label_2ba0b8:
    // 0x2ba0b8: 0x800b2af0  lb          $t3, 0x2AF0($zero)
    ctx->pc = 0x2ba0b8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2AF0u));
label_2ba0bc:
    // 0x2ba0bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0c0:
    // 0x2ba0c0: 0xb0b1000  j           func_C2C4000
label_2ba0c4:
    if (ctx->pc == 0x2BA0C4u) {
        ctx->pc = 0x2BA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0C0u;
        // 0x2ba0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0C8u;
        goto label_2ba0c8;
    }
    ctx->pc = 0x2BA0C0u;
    ctx->pc = 0x2BA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0C0u;
    // 0x2ba0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BA0C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BA0C8u;
label_2ba0c8:
    // 0x2ba0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba0cc:
    // 0x2ba0cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0d0:
    // 0x2ba0d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba0d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba0d4:
    // 0x2ba0d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0d8:
    // 0x2ba0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba0dc:
    // 0x2ba0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0e0:
    // 0x2ba0e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2ba0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2ba0e4:
    // 0x2ba0e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0e8:
    // 0x2ba0e8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba0e8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA0E8 raw=0x48000800");
 /* MITIGATED */
label_2ba0ec:
    // 0x2ba0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0f0:
    // 0x2ba0f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba0f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba0f4:
    // 0x2ba0f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba0f8:
    // 0x2ba0f8: 0x420107f3  .word       0x420107F3                   # INVALID     $s0, $at, 0x7F3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba0f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x33 at 0x2BA0F8 raw=0x420107F3"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba0fc:
    // 0x2ba0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba100:
    // 0x2ba100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba104:
    // 0x2ba104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba108:
    // 0x2ba108: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2ba10c:
    // 0x2ba10c: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2ba110:
    // 0x2ba110: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba110u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2ba114:
    // 0x2ba114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba118:
    // 0x2ba118: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2ba11c:
    // 0x2ba11c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba11cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba120:
    // 0x2ba120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba124:
    // 0x2ba124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba128:
    // 0x2ba128: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2ba128u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2ba12c:
    // 0x2ba12c: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba12cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2ba130:
    // 0x2ba130: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2ba134:
    if (ctx->pc == 0x2BA134u) {
        ctx->pc = 0x2BA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA130u;
        // 0x2ba134: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA138u;
        goto label_2ba138;
    }
    ctx->pc = 0x2BA130u;
    {
        const bool branch_taken_0x2ba130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA130u;
        // 0x2ba134: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba130) {
            ctx->pc = 0x2BA2CCu;
            goto label_2ba2cc;
        }
    }
    ctx->pc = 0x2BA138u;
label_2ba138:
    // 0x2ba138: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2ba13c:
    if (ctx->pc == 0x2BA13Cu) {
        ctx->pc = 0x2BA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA138u;
        // 0x2ba13c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA140u;
        goto label_2ba140;
    }
    ctx->pc = 0x2BA138u;
    {
        const bool branch_taken_0x2ba138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA138u;
        // 0x2ba13c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba138) {
            ctx->pc = 0x2BA354u;
            goto label_2ba354;
        }
    }
    ctx->pc = 0x2BA140u;
label_2ba140:
    // 0x2ba140: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BA140 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba144:
    // 0x2ba144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba148:
    // 0x2ba148: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2ba148u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2ba14c:
    // 0x2ba14c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba150:
    // 0x2ba150: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2ba150u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2ba154:
    // 0x2ba154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba158:
    // 0x2ba158: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2ba158u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2ba15c:
    // 0x2ba15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba160:
    // 0x2ba160: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ba160u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2ba164:
    // 0x2ba164: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2ba164u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2ba168:
    // 0x2ba168: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ba168u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2ba16c:
    // 0x2ba16c: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2ba16cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2ba170:
    // 0x2ba170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba174:
    // 0x2ba174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba178:
    // 0x2ba178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba17c:
    // 0x2ba17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba180:
    // 0x2ba180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba184:
    // 0x2ba184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba188:
    // 0x2ba188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba18c:
    // 0x2ba18c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba18cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BA18C raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba190:
    // 0x2ba190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba194:
    // 0x2ba194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba198:
    // 0x2ba198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba19c:
    // 0x2ba19c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba19cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba1a0:
    // 0x2ba1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1a4:
    // 0x2ba1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba1a8:
    // 0x2ba1a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1ac:
    // 0x2ba1ac: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2ba1b0:
    // 0x2ba1b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1b4:
    // 0x2ba1b4: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2ba1b8:
    // 0x2ba1b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1bc:
    // 0x2ba1bc: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2ba1c0:
    // 0x2ba1c0: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ba1c0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2ba1c4:
    // 0x2ba1c4: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2ba1c4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2ba1c8:
    // 0x2ba1c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1cc:
    // 0x2ba1cc: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2ba1d0:
    // 0x2ba1d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1d4:
    // 0x2ba1d4: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1d4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2ba1d8:
    // 0x2ba1d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1dc:
    // 0x2ba1dc: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1dcu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2ba1e0:
    // 0x2ba1e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1e4:
    // 0x2ba1e4: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1e4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2ba1e8:
    // 0x2ba1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba1ec:
    // 0x2ba1ec: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1ecu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2ba1f0:
    // 0x2ba1f0: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba1f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BA1F0 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba1f4:
    // 0x2ba1f4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2ba1f4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2ba1f8:
    // 0x2ba1f8: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba1f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2ba1fc:
    // 0x2ba1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba200:
    // 0x2ba200: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba200u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2ba204:
    // 0x2ba204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba208:
    // 0x2ba208: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2ba208u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2ba20c:
    // 0x2ba20c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba20cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba210:
    // 0x2ba210: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2ba214:
    if (ctx->pc == 0x2BA214u) {
        ctx->pc = 0x2BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA210u;
        // 0x2ba214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA218u;
        goto label_2ba218;
    }
    ctx->pc = 0x2BA210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2BA218u);
        ctx->pc = 0x2BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA210u;
        // 0x2ba214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA210u, 0x2BA218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA218u;
label_2ba218:
    // 0x2ba218: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba218u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA218 raw=0x01F637FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba21c:
    // 0x2ba21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba220:
    // 0x2ba220: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2ba224:
    // 0x2ba224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba228:
    // 0x2ba228: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba228u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2ba22c:
    // 0x2ba22c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba22cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba230:
    // 0x2ba230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba234:
    // 0x2ba234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba238:
    // 0x2ba238: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba238u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2ba23c:
    // 0x2ba23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba240:
    // 0x2ba240: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BA240 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba244:
    // 0x2ba244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba248:
    // 0x2ba248: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2ba24c:
    if (ctx->pc == 0x2BA24Cu) {
        ctx->pc = 0x2BA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA248u;
        // 0x2ba24c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA250u;
        goto label_2ba250;
    }
    ctx->pc = 0x2BA248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA248u;
        // 0x2ba24c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA250u;
label_2ba250:
    // 0x2ba250: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2ba250u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2ba254:
    // 0x2ba254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba258:
    // 0x2ba258: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2ba25c:
    // 0x2ba25c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba25cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba260:
    // 0x2ba260: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2ba264:
    if (ctx->pc == 0x2BA264u) {
        ctx->pc = 0x2BA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA260u;
        // 0x2ba264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA268u;
        goto label_2ba268;
    }
    ctx->pc = 0x2BA260u;
    {
        const bool branch_taken_0x2ba260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA260u;
        // 0x2ba264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba260) {
            ctx->pc = 0x2BA264u;
            goto label_2ba264;
        }
    }
    ctx->pc = 0x2BA268u;
label_2ba268:
    // 0x2ba268: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2ba26c:
    if (ctx->pc == 0x2BA26Cu) {
        ctx->pc = 0x2BA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA268u;
        // 0x2ba26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA270u;
        goto label_2ba270;
    }
    ctx->pc = 0x2BA268u;
    {
        const bool branch_taken_0x2ba268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA268u;
        // 0x2ba26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba268) {
            ctx->pc = 0x2BA2ECu;
            goto label_2ba2ec;
        }
    }
    ctx->pc = 0x2BA270u;
label_2ba270:
    // 0x2ba270: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2ba274:
    if (ctx->pc == 0x2BA274u) {
        ctx->pc = 0x2BA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA270u;
        // 0x2ba274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA278u;
        goto label_2ba278;
    }
    ctx->pc = 0x2BA270u;
    {
        const bool branch_taken_0x2ba270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA270u;
        // 0x2ba274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba270) {
            ctx->pc = 0x2BA27Cu;
            goto label_2ba27c;
        }
    }
    ctx->pc = 0x2BA278u;
label_2ba278:
    // 0x2ba278: 0x0  nop
    ctx->pc = 0x2ba278u;
    // NOP
label_2ba27c:
    // 0x2ba27c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2ba27cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2ba280:
    // 0x2ba280: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba284:
    if (ctx->pc == 0x2BA284u) {
        ctx->pc = 0x2BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA280u;
        // 0x2ba284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA288u;
        goto label_2ba288;
    }
    ctx->pc = 0x2BA280u;
    {
        const bool branch_taken_0x2ba280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA280u;
        // 0x2ba284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba280) {
            ctx->pc = 0x2C0284u;
            return;
        }
    }
    ctx->pc = 0x2BA288u;
label_2ba288:
    // 0x2ba288: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2ba28c:
    if (ctx->pc == 0x2BA28Cu) {
        ctx->pc = 0x2BA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA288u;
        // 0x2ba28c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA290u;
        goto label_2ba290;
    }
    ctx->pc = 0x2BA288u;
    {
        const bool branch_taken_0x2ba288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA288u;
        // 0x2ba28c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba288) {
            ctx->pc = 0x2C030Cu;
            return;
        }
    }
    ctx->pc = 0x2BA290u;
label_2ba290:
    // 0x2ba290: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2ba294:
    if (ctx->pc == 0x2BA294u) {
        ctx->pc = 0x2BA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA290u;
        // 0x2ba294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA298u;
        goto label_2ba298;
    }
    ctx->pc = 0x2BA290u;
    {
        const bool branch_taken_0x2ba290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA290u;
        // 0x2ba294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba290) {
            ctx->pc = 0x2BA2A0u;
            goto label_2ba2a0;
        }
    }
    ctx->pc = 0x2BA298u;
label_2ba298:
    // 0x2ba298: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba29c:
    if (ctx->pc == 0x2BA29Cu) {
        ctx->pc = 0x2BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA298u;
        // 0x2ba29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2A0u;
        goto label_2ba2a0;
    }
    ctx->pc = 0x2BA298u;
    {
        const bool branch_taken_0x2ba298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA298u;
        // 0x2ba29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba298) {
            ctx->pc = 0x2BA29Cu;
            goto label_2ba29c;
        }
    }
    ctx->pc = 0x2BA2A0u;
label_2ba2a0:
    // 0x2ba2a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2a4:
    // 0x2ba2a4: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba2a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2ba2a8:
    // 0x2ba2a8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba2a8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba2ac:
    // 0x2ba2ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2b0:
    // 0x2ba2b0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba2b0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba2b4:
    // 0x2ba2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2b8:
    // 0x2ba2b8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba2b8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba2bc:
    // 0x2ba2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2c0:
    // 0x2ba2c0: 0x42020081  .word       0x42020081                   # tlbr # 00020080 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba2c0u;
    runtime->handleTLBR(rdram, ctx);
label_2ba2c4:
    // 0x2ba2c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2c8:
    // 0x2ba2c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2cc:
    // 0x2ba2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2d0:
    // 0x2ba2d0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba2d4:
    if (ctx->pc == 0x2BA2D4u) {
        ctx->pc = 0x2BA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D0u;
        // 0x2ba2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2D8u;
        goto label_2ba2d8;
    }
    ctx->pc = 0x2BA2D0u;
    {
        const bool branch_taken_0x2ba2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D0u;
        // 0x2ba2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2d0) {
            ctx->pc = 0x2CE2D8u;
            return;
        }
    }
    ctx->pc = 0x2BA2D8u;
label_2ba2d8:
    // 0x2ba2d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2dc:
    // 0x2ba2dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2e0:
    // 0x2ba2e0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba2e4:
    if (ctx->pc == 0x2BA2E4u) {
        ctx->pc = 0x2BA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2E0u;
        // 0x2ba2e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2E8u;
        goto label_2ba2e8;
    }
    ctx->pc = 0x2BA2E0u;
    {
        const bool branch_taken_0x2ba2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba2e0) {
            ctx->pc = 0x2BA2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA2E0u;
            // 0x2ba2e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC2D0u;
            { ctx->pc = 0x2bc2d0; return; }
        }
    }
    ctx->pc = 0x2BA2E8u;
label_2ba2e8:
    // 0x2ba2e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba2e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba2ec:
    // 0x2ba2ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba2f0:
    // 0x2ba2f0: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba2f4:
    if (ctx->pc == 0x2BA2F4u) {
        ctx->pc = 0x2BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F0u;
        // 0x2ba2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2F8u;
        goto label_2ba2f8;
    }
    ctx->pc = 0x2BA2F0u;
    {
        const bool branch_taken_0x2ba2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F0u;
        // 0x2ba2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2f0) {
            ctx->pc = 0x2C0374u;
            return;
        }
    }
    ctx->pc = 0x2BA2F8u;
label_2ba2f8:
    // 0x2ba2f8: 0x42020071  .word       0x42020071                   # INVALID     $s0, $v0, 0x71 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba2f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2BA2F8 raw=0x42020071"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba2fc:
    // 0x2ba2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba300:
    // 0x2ba300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba304:
    // 0x2ba304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba308:
    // 0x2ba308: 0x500b006d  beql        $zero, $t3, . + 4 + (0x6D << 2)
label_2ba30c:
    if (ctx->pc == 0x2BA30Cu) {
        ctx->pc = 0x2BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA308u;
        // 0x2ba30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA310u;
        goto label_2ba310;
    }
    ctx->pc = 0x2BA308u;
    {
        const bool branch_taken_0x2ba308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba308) {
            ctx->pc = 0x2BA30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA308u;
            // 0x2ba30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA4C0u;
            goto label_2ba4c0;
        }
    }
    ctx->pc = 0x2BA310u;
label_2ba310:
    // 0x2ba310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba314:
    // 0x2ba314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba318:
    // 0x2ba318: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2ba31c:
    if (ctx->pc == 0x2BA31Cu) {
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA320u;
        goto label_2ba320;
    }
    ctx->pc = 0x2BA318u;
    {
        const bool branch_taken_0x2ba318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba318) {
            ctx->pc = 0x2BA51Cu;
            goto label_2ba51c;
        }
    }
    ctx->pc = 0x2BA320u;
label_2ba320:
    // 0x2ba320: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2ba324:
    if (ctx->pc == 0x2BA324u) {
        ctx->pc = 0x2BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA320u;
        // 0x2ba324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA328u;
        goto label_2ba328;
    }
    ctx->pc = 0x2BA320u;
    {
        const bool branch_taken_0x2ba320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA320u;
        // 0x2ba324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba320) {
            ctx->pc = 0x2BA32Cu;
            goto label_2ba32c;
        }
    }
    ctx->pc = 0x2BA328u;
label_2ba328:
    // 0x2ba328: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2ba32c:
    if (ctx->pc == 0x2BA32Cu) {
        ctx->pc = 0x2BA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA328u;
        // 0x2ba32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA330u;
        goto label_2ba330;
    }
    ctx->pc = 0x2BA328u;
    {
        const bool branch_taken_0x2ba328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA328u;
        // 0x2ba32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba328) {
            ctx->pc = 0x2BA32Cu;
            goto label_2ba32c;
        }
    }
    ctx->pc = 0x2BA330u;
label_2ba330:
    // 0x2ba330: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba334:
    if (ctx->pc == 0x2BA334u) {
        ctx->pc = 0x2BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA330u;
        // 0x2ba334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA338u;
        goto label_2ba338;
    }
    ctx->pc = 0x2BA330u;
    {
        const bool branch_taken_0x2ba330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA330u;
        // 0x2ba334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba330) {
            ctx->pc = 0x2C03B4u;
            return;
        }
    }
    ctx->pc = 0x2BA338u;
label_2ba338:
    // 0x2ba338: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2ba33c:
    if (ctx->pc == 0x2BA33Cu) {
        ctx->pc = 0x2BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA338u;
        // 0x2ba33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA340u;
        goto label_2ba340;
    }
    ctx->pc = 0x2BA338u;
    {
        const bool branch_taken_0x2ba338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA338u;
        // 0x2ba33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba338) {
            ctx->pc = 0x2C033Cu;
            return;
        }
    }
    ctx->pc = 0x2BA340u;
label_2ba340:
    // 0x2ba340: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba340u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba344:
    // 0x2ba344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba348:
    // 0x2ba348: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba34c:
    if (ctx->pc == 0x2BA34Cu) {
        ctx->pc = 0x2BA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA348u;
        // 0x2ba34c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA350u;
        goto label_2ba350;
    }
    ctx->pc = 0x2BA348u;
    {
        const bool branch_taken_0x2ba348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA348u;
        // 0x2ba34c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba348) {
            ctx->pc = 0x2BA34Cu;
            goto label_2ba34c;
        }
    }
    ctx->pc = 0x2BA350u;
label_2ba350:
    // 0x2ba350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba354:
    // 0x2ba354: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba354u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2ba358:
    // 0x2ba358: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba35c:
    // 0x2ba35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba360:
    // 0x2ba360: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba364:
    // 0x2ba364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba368:
    // 0x2ba368: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba368u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba36c:
    // 0x2ba36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba370:
    // 0x2ba370: 0x4202006b  .word       0x4202006B                   # INVALID     $s0, $v0, 0x6B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba370u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2BA370 raw=0x4202006B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba374:
    // 0x2ba374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba378:
    // 0x2ba378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba37c:
    // 0x2ba37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba380:
    // 0x2ba380: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba384:
    if (ctx->pc == 0x2BA384u) {
        ctx->pc = 0x2BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA380u;
        // 0x2ba384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA388u;
        goto label_2ba388;
    }
    ctx->pc = 0x2BA380u;
    {
        const bool branch_taken_0x2ba380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA380u;
        // 0x2ba384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba380) {
            ctx->pc = 0x2CE388u;
            return;
        }
    }
    ctx->pc = 0x2BA388u;
label_2ba388:
    // 0x2ba388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba38c:
    // 0x2ba38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba390:
    // 0x2ba390: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba394:
    if (ctx->pc == 0x2BA394u) {
        ctx->pc = 0x2BA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA390u;
        // 0x2ba394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA398u;
        goto label_2ba398;
    }
    ctx->pc = 0x2BA390u;
    {
        const bool branch_taken_0x2ba390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba390) {
            ctx->pc = 0x2BA394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA390u;
            // 0x2ba394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC380u;
            { ctx->pc = 0x2bc380; return; }
        }
    }
    ctx->pc = 0x2BA398u;
label_2ba398:
    // 0x2ba398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba39c:
    // 0x2ba39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3a0:
    // 0x2ba3a0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba3a4:
    if (ctx->pc == 0x2BA3A4u) {
        ctx->pc = 0x2BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3A0u;
        // 0x2ba3a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3A8u;
        goto label_2ba3a8;
    }
    ctx->pc = 0x2BA3A0u;
    {
        const bool branch_taken_0x2ba3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3A0u;
        // 0x2ba3a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3a0) {
            ctx->pc = 0x2C03A4u;
            return;
        }
    }
    ctx->pc = 0x2BA3A8u;
label_2ba3a8:
    // 0x2ba3a8: 0x4202005b  .word       0x4202005B                   # INVALID     $s0, $v0, 0x5B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba3a8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2BA3A8 raw=0x4202005B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba3ac:
    // 0x2ba3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3b0:
    // 0x2ba3b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba3b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba3b4:
    // 0x2ba3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3b8:
    // 0x2ba3b8: 0x500b0057  beql        $zero, $t3, . + 4 + (0x57 << 2)
label_2ba3bc:
    if (ctx->pc == 0x2BA3BCu) {
        ctx->pc = 0x2BA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B8u;
        // 0x2ba3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3C0u;
        goto label_2ba3c0;
    }
    ctx->pc = 0x2BA3B8u;
    {
        const bool branch_taken_0x2ba3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba3b8) {
            ctx->pc = 0x2BA3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA3B8u;
            // 0x2ba3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA518u;
            goto label_2ba518;
        }
    }
    ctx->pc = 0x2BA3C0u;
label_2ba3c0:
    // 0x2ba3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba3c4:
    // 0x2ba3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3c8:
    // 0x2ba3c8: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2ba3cc:
    if (ctx->pc == 0x2BA3CCu) {
        ctx->pc = 0x2BA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3C8u;
        // 0x2ba3cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3D0u;
        goto label_2ba3d0;
    }
    ctx->pc = 0x2BA3C8u;
    {
        const bool branch_taken_0x2ba3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3C8u;
        // 0x2ba3cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3c8) {
            ctx->pc = 0x2BA4CCu;
            goto label_2ba4cc;
        }
    }
    ctx->pc = 0x2BA3D0u;
label_2ba3d0:
    // 0x2ba3d0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2ba3d4:
    if (ctx->pc == 0x2BA3D4u) {
        ctx->pc = 0x2BA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D0u;
        // 0x2ba3d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3D8u;
        goto label_2ba3d8;
    }
    ctx->pc = 0x2BA3D0u;
    {
        const bool branch_taken_0x2ba3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D0u;
        // 0x2ba3d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3d0) {
            ctx->pc = 0x2BA3D8u;
            goto label_2ba3d8;
        }
    }
    ctx->pc = 0x2BA3D8u;
label_2ba3d8:
    // 0x2ba3d8: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2ba3dc:
    if (ctx->pc == 0x2BA3DCu) {
        ctx->pc = 0x2BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D8u;
        // 0x2ba3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3E0u;
        goto label_2ba3e0;
    }
    ctx->pc = 0x2BA3D8u;
    {
        const bool branch_taken_0x2ba3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D8u;
        // 0x2ba3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3d8) {
            ctx->pc = 0x2BA3DCu;
            goto label_2ba3dc;
        }
    }
    ctx->pc = 0x2BA3E0u;
label_2ba3e0:
    // 0x2ba3e0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba3e4:
    if (ctx->pc == 0x2BA3E4u) {
        ctx->pc = 0x2BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E0u;
        // 0x2ba3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3E8u;
        goto label_2ba3e8;
    }
    ctx->pc = 0x2BA3E0u;
    {
        const bool branch_taken_0x2ba3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E0u;
        // 0x2ba3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3e0) {
            ctx->pc = 0x2C03E4u;
            return;
        }
    }
    ctx->pc = 0x2BA3E8u;
label_2ba3e8:
    // 0x2ba3e8: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2ba3ec:
    if (ctx->pc == 0x2BA3ECu) {
        ctx->pc = 0x2BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E8u;
        // 0x2ba3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3F0u;
        goto label_2ba3f0;
    }
    ctx->pc = 0x2BA3E8u;
    {
        const bool branch_taken_0x2ba3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E8u;
        // 0x2ba3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3e8) {
            ctx->pc = 0x2C046Cu;
            return;
        }
    }
    ctx->pc = 0x2BA3F0u;
label_2ba3f0:
    // 0x2ba3f0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba3f0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba3f4:
    // 0x2ba3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba3f8:
    // 0x2ba3f8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba3fc:
    if (ctx->pc == 0x2BA3FCu) {
        ctx->pc = 0x2BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3F8u;
        // 0x2ba3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA400u;
        goto label_2ba400;
    }
    ctx->pc = 0x2BA3F8u;
    {
        const bool branch_taken_0x2ba3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3F8u;
        // 0x2ba3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3f8) {
            ctx->pc = 0x2BA3FCu;
            goto label_2ba3fc;
        }
    }
    ctx->pc = 0x2BA400u;
label_2ba400:
    // 0x2ba400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba404:
    // 0x2ba404: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba404u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2ba408:
    // 0x2ba408: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba408u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba40c:
    // 0x2ba40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba410:
    // 0x2ba410: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba410u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba414:
    // 0x2ba414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba418:
    // 0x2ba418: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba418u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba41c:
    // 0x2ba41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba420:
    // 0x2ba420: 0x42020055  .word       0x42020055                   # INVALID     $s0, $v0, 0x55 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba420u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x15 at 0x2BA420 raw=0x42020055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba424:
    // 0x2ba424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba428:
    // 0x2ba428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba42c:
    // 0x2ba42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba430:
    // 0x2ba430: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba434:
    if (ctx->pc == 0x2BA434u) {
        ctx->pc = 0x2BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA430u;
        // 0x2ba434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA438u;
        goto label_2ba438;
    }
    ctx->pc = 0x2BA430u;
    {
        const bool branch_taken_0x2ba430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA430u;
        // 0x2ba434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba430) {
            ctx->pc = 0x2CE438u;
            return;
        }
    }
    ctx->pc = 0x2BA438u;
label_2ba438:
    // 0x2ba438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba43c:
    // 0x2ba43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba440:
    // 0x2ba440: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba444:
    if (ctx->pc == 0x2BA444u) {
        ctx->pc = 0x2BA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA440u;
        // 0x2ba444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA448u;
        goto label_2ba448;
    }
    ctx->pc = 0x2BA440u;
    {
        const bool branch_taken_0x2ba440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba440) {
            ctx->pc = 0x2BA444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA440u;
            // 0x2ba444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC430u;
            { ctx->pc = 0x2bc430; return; }
        }
    }
    ctx->pc = 0x2BA448u;
label_2ba448:
    // 0x2ba448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba44c:
    // 0x2ba44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba450:
    // 0x2ba450: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba454:
    if (ctx->pc == 0x2BA454u) {
        ctx->pc = 0x2BA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA450u;
        // 0x2ba454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA458u;
        goto label_2ba458;
    }
    ctx->pc = 0x2BA450u;
    {
        const bool branch_taken_0x2ba450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA450u;
        // 0x2ba454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba450) {
            ctx->pc = 0x2C04D4u;
            return;
        }
    }
    ctx->pc = 0x2BA458u;
label_2ba458:
    // 0x2ba458: 0x42020045  .word       0x42020045                   # INVALID     $s0, $v0, 0x45 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba458u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2BA458 raw=0x42020045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba45c:
    // 0x2ba45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba460:
    // 0x2ba460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba464:
    // 0x2ba464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba468:
    // 0x2ba468: 0x500b0041  beql        $zero, $t3, . + 4 + (0x41 << 2)
label_2ba46c:
    if (ctx->pc == 0x2BA46Cu) {
        ctx->pc = 0x2BA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA468u;
        // 0x2ba46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA470u;
        goto label_2ba470;
    }
    ctx->pc = 0x2BA468u;
    {
        const bool branch_taken_0x2ba468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba468) {
            ctx->pc = 0x2BA46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA468u;
            // 0x2ba46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA570u;
            goto label_2ba570;
        }
    }
    ctx->pc = 0x2BA470u;
label_2ba470:
    // 0x2ba470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba474:
    // 0x2ba474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba478:
    // 0x2ba478: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2ba47c:
    if (ctx->pc == 0x2BA47Cu) {
        ctx->pc = 0x2BA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA478u;
        // 0x2ba47c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA480u;
        goto label_2ba480;
    }
    ctx->pc = 0x2BA478u;
    {
        const bool branch_taken_0x2ba478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA478u;
        // 0x2ba47c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba478) {
            ctx->pc = 0x2BAC7Cu;
            { ctx->pc = 0x2bac7c; return; }
        }
    }
    ctx->pc = 0x2BA480u;
label_2ba480:
    // 0x2ba480: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2ba484:
    if (ctx->pc == 0x2BA484u) {
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA488u;
        goto label_2ba488;
    }
    ctx->pc = 0x2BA480u;
    {
        const bool branch_taken_0x2ba480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba480) {
            ctx->pc = 0x2BA4A4u;
            goto label_2ba4a4;
        }
    }
    ctx->pc = 0x2BA488u;
label_2ba488:
    // 0x2ba488: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2ba48c:
    if (ctx->pc == 0x2BA48Cu) {
        ctx->pc = 0x2BA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA488u;
        // 0x2ba48c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA490u;
        goto label_2ba490;
    }
    ctx->pc = 0x2BA488u;
    {
        const bool branch_taken_0x2ba488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA488u;
        // 0x2ba48c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba488) {
            ctx->pc = 0x2BA490u;
            goto label_2ba490;
        }
    }
    ctx->pc = 0x2BA490u;
label_2ba490:
    // 0x2ba490: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba494:
    if (ctx->pc == 0x2BA494u) {
        ctx->pc = 0x2BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA490u;
        // 0x2ba494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA498u;
        goto label_2ba498;
    }
    ctx->pc = 0x2BA490u;
    {
        const bool branch_taken_0x2ba490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA490u;
        // 0x2ba494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba490) {
            ctx->pc = 0x2C0514u;
            return;
        }
    }
    ctx->pc = 0x2BA498u;
label_2ba498:
    // 0x2ba498: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2ba49c:
    if (ctx->pc == 0x2BA49Cu) {
        ctx->pc = 0x2BA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA498u;
        // 0x2ba49c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4A0u;
        goto label_2ba4a0;
    }
    ctx->pc = 0x2BA498u;
    {
        const bool branch_taken_0x2ba498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA498u;
        // 0x2ba49c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba498) {
            ctx->pc = 0x2C049Cu;
            return;
        }
    }
    ctx->pc = 0x2BA4A0u;
label_2ba4a0:
    // 0x2ba4a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba4a4:
    // 0x2ba4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4a8:
    // 0x2ba4a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba4ac:
    if (ctx->pc == 0x2BA4ACu) {
        ctx->pc = 0x2BA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A8u;
        // 0x2ba4ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4B0u;
        goto label_2ba4b0;
    }
    ctx->pc = 0x2BA4A8u;
    {
        const bool branch_taken_0x2ba4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A8u;
        // 0x2ba4ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4a8) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA4B0u;
label_2ba4b0:
    // 0x2ba4b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4b4:
    // 0x2ba4b4: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba4b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2ba4b8:
    // 0x2ba4b8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba4b8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba4bc:
    // 0x2ba4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4c0:
    // 0x2ba4c0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba4c0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba4c4:
    // 0x2ba4c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4c8:
    // 0x2ba4c8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba4c8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba4cc:
    // 0x2ba4cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4d0:
    // 0x2ba4d0: 0x4202003f  .word       0x4202003F                   # INVALID     $s0, $v0, 0x3F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba4d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2BA4D0 raw=0x4202003F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba4d4:
    // 0x2ba4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4d8:
    // 0x2ba4d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4dc:
    // 0x2ba4dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4e0:
    // 0x2ba4e0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba4e4:
    if (ctx->pc == 0x2BA4E4u) {
        ctx->pc = 0x2BA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4E0u;
        // 0x2ba4e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4E8u;
        goto label_2ba4e8;
    }
    ctx->pc = 0x2BA4E0u;
    {
        const bool branch_taken_0x2ba4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4E0u;
        // 0x2ba4e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4e0) {
            ctx->pc = 0x2CE4E8u;
            return;
        }
    }
    ctx->pc = 0x2BA4E8u;
label_2ba4e8:
    // 0x2ba4e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4ec:
    // 0x2ba4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba4f0:
    // 0x2ba4f0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba4f4:
    if (ctx->pc == 0x2BA4F4u) {
        ctx->pc = 0x2BA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4F0u;
        // 0x2ba4f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4F8u;
        goto label_2ba4f8;
    }
    ctx->pc = 0x2BA4F0u;
    {
        const bool branch_taken_0x2ba4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba4f0) {
            ctx->pc = 0x2BA4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA4F0u;
            // 0x2ba4f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4E0u;
            { ctx->pc = 0x2bc4e0; return; }
        }
    }
    ctx->pc = 0x2BA4F8u;
label_2ba4f8:
    // 0x2ba4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba4fc:
    // 0x2ba4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba500:
    // 0x2ba500: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba504:
    if (ctx->pc == 0x2BA504u) {
        ctx->pc = 0x2BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA500u;
        // 0x2ba504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA508u;
        goto label_2ba508;
    }
    ctx->pc = 0x2BA500u;
    {
        const bool branch_taken_0x2ba500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA500u;
        // 0x2ba504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba500) {
            ctx->pc = 0x2C0504u;
            return;
        }
    }
    ctx->pc = 0x2BA508u;
label_2ba508:
    // 0x2ba508: 0x4202002f  .word       0x4202002F                   # INVALID     $s0, $v0, 0x2F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba508u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2F at 0x2BA508 raw=0x4202002F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba50c:
    // 0x2ba50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba510:
    // 0x2ba510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba514:
    // 0x2ba514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba518:
    // 0x2ba518: 0x500b002b  beql        $zero, $t3, . + 4 + (0x2B << 2)
label_2ba51c:
    if (ctx->pc == 0x2BA51Cu) {
        ctx->pc = 0x2BA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA518u;
        // 0x2ba51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA520u;
        goto label_2ba520;
    }
    ctx->pc = 0x2BA518u;
    {
        const bool branch_taken_0x2ba518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba518) {
            ctx->pc = 0x2BA51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA518u;
            // 0x2ba51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA5C8u;
            goto label_2ba5c8;
        }
    }
    ctx->pc = 0x2BA520u;
label_2ba520:
    // 0x2ba520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba524:
    // 0x2ba524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba528:
    // 0x2ba528: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2ba52c:
    if (ctx->pc == 0x2BA52Cu) {
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA530u;
        goto label_2ba530;
    }
    ctx->pc = 0x2BA528u;
    {
        const bool branch_taken_0x2ba528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba528) {
            ctx->pc = 0x2BA92Cu;
            { ctx->pc = 0x2ba92c; return; }
        }
    }
    ctx->pc = 0x2BA530u;
label_2ba530:
    // 0x2ba530: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2ba534:
    if (ctx->pc == 0x2BA534u) {
        ctx->pc = 0x2BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA530u;
        // 0x2ba534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA538u;
        goto label_2ba538;
    }
    ctx->pc = 0x2BA530u;
    {
        const bool branch_taken_0x2ba530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA530u;
        // 0x2ba534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba530) {
            ctx->pc = 0x2BA544u;
            goto label_2ba544;
        }
    }
    ctx->pc = 0x2BA538u;
label_2ba538:
    // 0x2ba538: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2ba53c:
    if (ctx->pc == 0x2BA53Cu) {
        ctx->pc = 0x2BA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA538u;
        // 0x2ba53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA540u;
        goto label_2ba540;
    }
    ctx->pc = 0x2BA538u;
    {
        const bool branch_taken_0x2ba538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA538u;
        // 0x2ba53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba538) {
            ctx->pc = 0x2BA540u;
            goto label_2ba540;
        }
    }
    ctx->pc = 0x2BA540u;
label_2ba540:
    // 0x2ba540: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2ba544:
    if (ctx->pc == 0x2BA544u) {
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA548u;
        goto label_2ba548;
    }
    ctx->pc = 0x2BA540u;
    {
        const bool branch_taken_0x2ba540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba540) {
            ctx->pc = 0x2C0544u;
            return;
        }
    }
    ctx->pc = 0x2BA548u;
label_2ba548:
    // 0x2ba548: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2ba54c:
    if (ctx->pc == 0x2BA54Cu) {
        ctx->pc = 0x2BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA548u;
        // 0x2ba54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA550u;
        goto label_2ba550;
    }
    ctx->pc = 0x2BA548u;
    {
        const bool branch_taken_0x2ba548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA548u;
        // 0x2ba54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba548) {
            ctx->pc = 0x2C05CCu;
            return;
        }
    }
    ctx->pc = 0x2BA550u;
label_2ba550:
    // 0x2ba550: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba550u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba554:
    // 0x2ba554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba558:
    // 0x2ba558: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba55c:
    if (ctx->pc == 0x2BA55Cu) {
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA558u;
        // 0x2ba55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA560u;
        goto label_2ba560;
    }
    ctx->pc = 0x2BA558u;
    {
        const bool branch_taken_0x2ba558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA558u;
        // 0x2ba55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba558) {
            ctx->pc = 0x2BA55Cu;
            goto label_2ba55c;
        }
    }
    ctx->pc = 0x2BA560u;
label_2ba560:
    // 0x2ba560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba564:
    // 0x2ba564: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba564u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2ba568:
    // 0x2ba568: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba568u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba56c:
    // 0x2ba56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba570:
    // 0x2ba570: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba570u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba574:
    // 0x2ba574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba578:
    // 0x2ba578: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba578u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba57c:
    // 0x2ba57c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba57cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba580:
    // 0x2ba580: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba580u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BA580 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba584:
    // 0x2ba584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba588:
    // 0x2ba588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba58c:
    // 0x2ba58c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba58cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba590:
    // 0x2ba590: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2ba594:
    if (ctx->pc == 0x2BA594u) {
        ctx->pc = 0x2BA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA590u;
        // 0x2ba594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA598u;
        goto label_2ba598;
    }
    ctx->pc = 0x2BA590u;
    {
        const bool branch_taken_0x2ba590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA590u;
        // 0x2ba594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba590) {
            ctx->pc = 0x2CE598u;
            return;
        }
    }
    ctx->pc = 0x2BA598u;
label_2ba598:
    // 0x2ba598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba59c:
    // 0x2ba59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5a0:
    // 0x2ba5a0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2ba5a4:
    if (ctx->pc == 0x2BA5A4u) {
        ctx->pc = 0x2BA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5A0u;
        // 0x2ba5a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5A8u;
        goto label_2ba5a8;
    }
    ctx->pc = 0x2BA5A0u;
    {
        const bool branch_taken_0x2ba5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ba5a0) {
            ctx->pc = 0x2BA5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5A0u;
            // 0x2ba5a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC590u;
            { ctx->pc = 0x2bc590; return; }
        }
    }
    ctx->pc = 0x2BA5A8u;
label_2ba5a8:
    // 0x2ba5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5ac:
    // 0x2ba5ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5b0:
    // 0x2ba5b0: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba5b4:
    if (ctx->pc == 0x2BA5B4u) {
        ctx->pc = 0x2BA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5B0u;
        // 0x2ba5b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5B8u;
        goto label_2ba5b8;
    }
    ctx->pc = 0x2BA5B0u;
    {
        const bool branch_taken_0x2ba5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5B0u;
        // 0x2ba5b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5b0) {
            ctx->pc = 0x2C0634u;
            return;
        }
    }
    ctx->pc = 0x2BA5B8u;
label_2ba5b8:
    // 0x2ba5b8: 0x42020019  .word       0x42020019                   # INVALID     $s0, $v0, 0x19 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba5b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x19 at 0x2BA5B8 raw=0x42020019"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba5bc:
    // 0x2ba5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5c0:
    // 0x2ba5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5c4:
    // 0x2ba5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5c8:
    // 0x2ba5c8: 0x500b0015  beql        $zero, $t3, . + 4 + (0x15 << 2)
label_2ba5cc:
    if (ctx->pc == 0x2BA5CCu) {
        ctx->pc = 0x2BA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5C8u;
        // 0x2ba5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5D0u;
        goto label_2ba5d0;
    }
    ctx->pc = 0x2BA5C8u;
    {
        const bool branch_taken_0x2ba5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2ba5c8) {
            ctx->pc = 0x2BA5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5C8u;
            // 0x2ba5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA620u;
            { ctx->pc = 0x2ba620; return; }
        }
    }
    ctx->pc = 0x2BA5D0u;
label_2ba5d0:
    // 0x2ba5d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5d4:
    // 0x2ba5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5d8:
    // 0x2ba5d8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2ba5d8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2ba5dc:
    // 0x2ba5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5e0:
    // 0x2ba5e0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2ba5e0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2ba5e4:
    // 0x2ba5e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba5e8:
    // 0x2ba5e8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2ba5ec:
    if (ctx->pc == 0x2BA5ECu) {
        ctx->pc = 0x2BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E8u;
        // 0x2ba5ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5F0u;
        goto label_2ba5f0;
    }
    ctx->pc = 0x2BA5E8u;
    {
        const bool branch_taken_0x2ba5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E8u;
        // 0x2ba5ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5e8) {
            ctx->pc = 0x2BA5ECu;
            goto label_2ba5ec;
        }
    }
    ctx->pc = 0x2BA5F0u;
label_2ba5f0:
    // 0x2ba5f0: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2ba5f4:
    if (ctx->pc == 0x2BA5F4u) {
        ctx->pc = 0x2BA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5F0u;
        // 0x2ba5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5F8u;
        goto label_2ba5f8;
    }
    ctx->pc = 0x2BA5F0u;
    {
        const bool branch_taken_0x2ba5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5F0u;
        // 0x2ba5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5f0) {
            ctx->pc = 0x2BA78Cu;
            { ctx->pc = 0x2ba78c; return; }
        }
    }
    ctx->pc = 0x2BA5F8u;
label_2ba5f8:
    // 0x2ba5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba5fc:
    // 0x2ba5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba600:
    // 0x2ba600: 0x5203080e  beql        $s0, $v1, . + 4 + (0x80E << 2)
label_2ba604:
    if (ctx->pc == 0x2BA604u) {
        ctx->pc = 0x2BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA600u;
        // 0x2ba604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA608u;
        goto label_2ba608;
    }
    ctx->pc = 0x2BA600u;
    {
        const bool branch_taken_0x2ba600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ba600) {
            ctx->pc = 0x2BA604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA600u;
            // 0x2ba604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC63Cu;
            { ctx->pc = 0x2bc63c; return; }
        }
    }
    ctx->pc = 0x2BA608u;
label_2ba608:
    // 0x2ba608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba60c:
    // 0x2ba60c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba60cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba610:
    // 0x2ba610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba614:
    // 0x2ba614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2ba618u;
    return;
}

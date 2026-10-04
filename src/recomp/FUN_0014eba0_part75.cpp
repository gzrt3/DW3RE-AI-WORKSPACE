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


void FUN_0014eba0_part75(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x172dc0u: goto label_172dc0;
        case 0x172dc4u: goto label_172dc4;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dccu: goto label_172dcc;
        case 0x172dd0u: goto label_172dd0;
        case 0x172dd4u: goto label_172dd4;
        case 0x172dd8u: goto label_172dd8;
        case 0x172ddcu: goto label_172ddc;
        case 0x172de0u: goto label_172de0;
        case 0x172de4u: goto label_172de4;
        case 0x172de8u: goto label_172de8;
        case 0x172decu: goto label_172dec;
        case 0x172df0u: goto label_172df0;
        case 0x172df4u: goto label_172df4;
        case 0x172df8u: goto label_172df8;
        case 0x172dfcu: goto label_172dfc;
        case 0x172e00u: goto label_172e00;
        case 0x172e04u: goto label_172e04;
        case 0x172e08u: goto label_172e08;
        case 0x172e0cu: goto label_172e0c;
        case 0x172e10u: goto label_172e10;
        case 0x172e14u: goto label_172e14;
        case 0x172e18u: goto label_172e18;
        case 0x172e1cu: goto label_172e1c;
        case 0x172e20u: goto label_172e20;
        case 0x172e24u: goto label_172e24;
        case 0x172e28u: goto label_172e28;
        case 0x172e2cu: goto label_172e2c;
        case 0x172e30u: goto label_172e30;
        case 0x172e34u: goto label_172e34;
        case 0x172e38u: goto label_172e38;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e40u: goto label_172e40;
        case 0x172e44u: goto label_172e44;
        case 0x172e48u: goto label_172e48;
        case 0x172e4cu: goto label_172e4c;
        case 0x172e50u: goto label_172e50;
        case 0x172e54u: goto label_172e54;
        case 0x172e58u: goto label_172e58;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e60u: goto label_172e60;
        case 0x172e64u: goto label_172e64;
        case 0x172e68u: goto label_172e68;
        case 0x172e6cu: goto label_172e6c;
        case 0x172e70u: goto label_172e70;
        case 0x172e74u: goto label_172e74;
        case 0x172e78u: goto label_172e78;
        case 0x172e7cu: goto label_172e7c;
        case 0x172e80u: goto label_172e80;
        case 0x172e84u: goto label_172e84;
        case 0x172e88u: goto label_172e88;
        case 0x172e8cu: goto label_172e8c;
        case 0x172e90u: goto label_172e90;
        case 0x172e94u: goto label_172e94;
        case 0x172e98u: goto label_172e98;
        case 0x172e9cu: goto label_172e9c;
        case 0x172ea0u: goto label_172ea0;
        case 0x172ea4u: goto label_172ea4;
        case 0x172ea8u: goto label_172ea8;
        case 0x172eacu: goto label_172eac;
        case 0x172eb0u: goto label_172eb0;
        case 0x172eb4u: goto label_172eb4;
        case 0x172eb8u: goto label_172eb8;
        case 0x172ebcu: goto label_172ebc;
        case 0x172ec0u: goto label_172ec0;
        case 0x172ec4u: goto label_172ec4;
        case 0x172ec8u: goto label_172ec8;
        case 0x172eccu: goto label_172ecc;
        case 0x172ed0u: goto label_172ed0;
        case 0x172ed4u: goto label_172ed4;
        case 0x172ed8u: goto label_172ed8;
        case 0x172edcu: goto label_172edc;
        case 0x172ee0u: goto label_172ee0;
        case 0x172ee4u: goto label_172ee4;
        case 0x172ee8u: goto label_172ee8;
        case 0x172eecu: goto label_172eec;
        case 0x172ef0u: goto label_172ef0;
        case 0x172ef4u: goto label_172ef4;
        case 0x172ef8u: goto label_172ef8;
        case 0x172efcu: goto label_172efc;
        case 0x172f00u: goto label_172f00;
        case 0x172f04u: goto label_172f04;
        case 0x172f08u: goto label_172f08;
        case 0x172f0cu: goto label_172f0c;
        case 0x172f10u: goto label_172f10;
        case 0x172f14u: goto label_172f14;
        case 0x172f18u: goto label_172f18;
        case 0x172f1cu: goto label_172f1c;
        case 0x172f20u: goto label_172f20;
        case 0x172f24u: goto label_172f24;
        case 0x172f28u: goto label_172f28;
        case 0x172f2cu: goto label_172f2c;
        case 0x172f30u: goto label_172f30;
        case 0x172f34u: goto label_172f34;
        case 0x172f38u: goto label_172f38;
        case 0x172f3cu: goto label_172f3c;
        case 0x172f40u: goto label_172f40;
        case 0x172f44u: goto label_172f44;
        case 0x172f48u: goto label_172f48;
        case 0x172f4cu: goto label_172f4c;
        case 0x172f50u: goto label_172f50;
        case 0x172f54u: goto label_172f54;
        case 0x172f58u: goto label_172f58;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f60u: goto label_172f60;
        case 0x172f64u: goto label_172f64;
        case 0x172f68u: goto label_172f68;
        case 0x172f6cu: goto label_172f6c;
        case 0x172f70u: goto label_172f70;
        case 0x172f74u: goto label_172f74;
        case 0x172f78u: goto label_172f78;
        case 0x172f7cu: goto label_172f7c;
        case 0x172f80u: goto label_172f80;
        case 0x172f84u: goto label_172f84;
        case 0x172f88u: goto label_172f88;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f90u: goto label_172f90;
        case 0x172f94u: goto label_172f94;
        case 0x172f98u: goto label_172f98;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fa0u: goto label_172fa0;
        case 0x172fa4u: goto label_172fa4;
        case 0x172fa8u: goto label_172fa8;
        case 0x172facu: goto label_172fac;
        case 0x172fb0u: goto label_172fb0;
        case 0x172fb4u: goto label_172fb4;
        case 0x172fb8u: goto label_172fb8;
        case 0x172fbcu: goto label_172fbc;
        case 0x172fc0u: goto label_172fc0;
        case 0x172fc4u: goto label_172fc4;
        case 0x172fc8u: goto label_172fc8;
        case 0x172fccu: goto label_172fcc;
        case 0x172fd0u: goto label_172fd0;
        case 0x172fd4u: goto label_172fd4;
        case 0x172fd8u: goto label_172fd8;
        case 0x172fdcu: goto label_172fdc;
        case 0x172fe0u: goto label_172fe0;
        case 0x172fe4u: goto label_172fe4;
        case 0x172fe8u: goto label_172fe8;
        case 0x172fecu: goto label_172fec;
        case 0x172ff0u: goto label_172ff0;
        case 0x172ff4u: goto label_172ff4;
        case 0x172ff8u: goto label_172ff8;
        case 0x172ffcu: goto label_172ffc;
        case 0x173000u: goto label_173000;
        case 0x173004u: goto label_173004;
        case 0x173008u: goto label_173008;
        case 0x17300cu: goto label_17300c;
        case 0x173010u: goto label_173010;
        case 0x173014u: goto label_173014;
        case 0x173018u: goto label_173018;
        case 0x17301cu: goto label_17301c;
        case 0x173020u: goto label_173020;
        case 0x173024u: goto label_173024;
        case 0x173028u: goto label_173028;
        case 0x17302cu: goto label_17302c;
        case 0x173030u: goto label_173030;
        case 0x173034u: goto label_173034;
        case 0x173038u: goto label_173038;
        case 0x17303cu: goto label_17303c;
        case 0x173040u: goto label_173040;
        case 0x173044u: goto label_173044;
        case 0x173048u: goto label_173048;
        case 0x17304cu: goto label_17304c;
        case 0x173050u: goto label_173050;
        case 0x173054u: goto label_173054;
        case 0x173058u: goto label_173058;
        case 0x17305cu: goto label_17305c;
        case 0x173060u: goto label_173060;
        case 0x173064u: goto label_173064;
        case 0x173068u: goto label_173068;
        case 0x17306cu: goto label_17306c;
        case 0x173070u: goto label_173070;
        case 0x173074u: goto label_173074;
        case 0x173078u: goto label_173078;
        case 0x17307cu: goto label_17307c;
        case 0x173080u: goto label_173080;
        case 0x173084u: goto label_173084;
        case 0x173088u: goto label_173088;
        case 0x17308cu: goto label_17308c;
        case 0x173090u: goto label_173090;
        case 0x173094u: goto label_173094;
        case 0x173098u: goto label_173098;
        case 0x17309cu: goto label_17309c;
        case 0x1730a0u: goto label_1730a0;
        case 0x1730a4u: goto label_1730a4;
        case 0x1730a8u: goto label_1730a8;
        case 0x1730acu: goto label_1730ac;
        case 0x1730b0u: goto label_1730b0;
        case 0x1730b4u: goto label_1730b4;
        case 0x1730b8u: goto label_1730b8;
        case 0x1730bcu: goto label_1730bc;
        case 0x1730c0u: goto label_1730c0;
        case 0x1730c4u: goto label_1730c4;
        case 0x1730c8u: goto label_1730c8;
        case 0x1730ccu: goto label_1730cc;
        case 0x1730d0u: goto label_1730d0;
        case 0x1730d4u: goto label_1730d4;
        case 0x1730d8u: goto label_1730d8;
        case 0x1730dcu: goto label_1730dc;
        case 0x1730e0u: goto label_1730e0;
        case 0x1730e4u: goto label_1730e4;
        case 0x1730e8u: goto label_1730e8;
        case 0x1730ecu: goto label_1730ec;
        case 0x1730f0u: goto label_1730f0;
        case 0x1730f4u: goto label_1730f4;
        case 0x1730f8u: goto label_1730f8;
        case 0x1730fcu: goto label_1730fc;
        case 0x173100u: goto label_173100;
        case 0x173104u: goto label_173104;
        case 0x173108u: goto label_173108;
        case 0x17310cu: goto label_17310c;
        case 0x173110u: goto label_173110;
        case 0x173114u: goto label_173114;
        case 0x173118u: goto label_173118;
        case 0x17311cu: goto label_17311c;
        case 0x173120u: goto label_173120;
        case 0x173124u: goto label_173124;
        case 0x173128u: goto label_173128;
        case 0x17312cu: goto label_17312c;
        case 0x173130u: goto label_173130;
        case 0x173134u: goto label_173134;
        case 0x173138u: goto label_173138;
        case 0x17313cu: goto label_17313c;
        case 0x173140u: goto label_173140;
        case 0x173144u: goto label_173144;
        case 0x173148u: goto label_173148;
        case 0x17314cu: goto label_17314c;
        case 0x173150u: goto label_173150;
        case 0x173154u: goto label_173154;
        case 0x173158u: goto label_173158;
        case 0x17315cu: goto label_17315c;
        case 0x173160u: goto label_173160;
        case 0x173164u: goto label_173164;
        case 0x173168u: goto label_173168;
        case 0x17316cu: goto label_17316c;
        case 0x173170u: goto label_173170;
        case 0x173174u: goto label_173174;
        case 0x173178u: goto label_173178;
        case 0x17317cu: goto label_17317c;
        case 0x173180u: goto label_173180;
        case 0x173184u: goto label_173184;
        case 0x173188u: goto label_173188;
        case 0x17318cu: goto label_17318c;
        case 0x173190u: goto label_173190;
        case 0x173194u: goto label_173194;
        case 0x173198u: goto label_173198;
        case 0x17319cu: goto label_17319c;
        case 0x1731a0u: goto label_1731a0;
        case 0x1731a4u: goto label_1731a4;
        case 0x1731a8u: goto label_1731a8;
        case 0x1731acu: goto label_1731ac;
        case 0x1731b0u: goto label_1731b0;
        case 0x1731b4u: goto label_1731b4;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731bcu: goto label_1731bc;
        case 0x1731c0u: goto label_1731c0;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731c8u: goto label_1731c8;
        case 0x1731ccu: goto label_1731cc;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731d4u: goto label_1731d4;
        case 0x1731d8u: goto label_1731d8;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731e0u: goto label_1731e0;
        case 0x1731e4u: goto label_1731e4;
        case 0x1731e8u: goto label_1731e8;
        case 0x1731ecu: goto label_1731ec;
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        case 0x173210u: goto label_173210;
        case 0x173214u: goto label_173214;
        case 0x173218u: goto label_173218;
        case 0x17321cu: goto label_17321c;
        case 0x173220u: goto label_173220;
        case 0x173224u: goto label_173224;
        case 0x173228u: goto label_173228;
        case 0x17322cu: goto label_17322c;
        case 0x173230u: goto label_173230;
        case 0x173234u: goto label_173234;
        case 0x173238u: goto label_173238;
        case 0x17323cu: goto label_17323c;
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        case 0x173258u: goto label_173258;
        case 0x17325cu: goto label_17325c;
        case 0x173260u: goto label_173260;
        case 0x173264u: goto label_173264;
        case 0x173268u: goto label_173268;
        case 0x17326cu: goto label_17326c;
        case 0x173270u: goto label_173270;
        case 0x173274u: goto label_173274;
        case 0x173278u: goto label_173278;
        case 0x17327cu: goto label_17327c;
        case 0x173280u: goto label_173280;
        case 0x173284u: goto label_173284;
        case 0x173288u: goto label_173288;
        case 0x17328cu: goto label_17328c;
        case 0x173290u: goto label_173290;
        case 0x173294u: goto label_173294;
        case 0x173298u: goto label_173298;
        case 0x17329cu: goto label_17329c;
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a4u: goto label_1732a4;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732acu: goto label_1732ac;
        case 0x1732b0u: goto label_1732b0;
        case 0x1732b4u: goto label_1732b4;
        case 0x1732b8u: goto label_1732b8;
        case 0x1732bcu: goto label_1732bc;
        case 0x1732c0u: goto label_1732c0;
        case 0x1732c4u: goto label_1732c4;
        case 0x1732c8u: goto label_1732c8;
        case 0x1732ccu: goto label_1732cc;
        case 0x1732d0u: goto label_1732d0;
        case 0x1732d4u: goto label_1732d4;
        case 0x1732d8u: goto label_1732d8;
        case 0x1732dcu: goto label_1732dc;
        case 0x1732e0u: goto label_1732e0;
        case 0x1732e4u: goto label_1732e4;
        case 0x1732e8u: goto label_1732e8;
        case 0x1732ecu: goto label_1732ec;
        case 0x1732f0u: goto label_1732f0;
        case 0x1732f4u: goto label_1732f4;
        case 0x1732f8u: goto label_1732f8;
        case 0x1732fcu: goto label_1732fc;
        case 0x173300u: goto label_173300;
        case 0x173304u: goto label_173304;
        case 0x173308u: goto label_173308;
        case 0x17330cu: goto label_17330c;
        case 0x173310u: goto label_173310;
        case 0x173314u: goto label_173314;
        case 0x173318u: goto label_173318;
        case 0x17331cu: goto label_17331c;
        case 0x173320u: goto label_173320;
        case 0x173324u: goto label_173324;
        case 0x173328u: goto label_173328;
        case 0x17332cu: goto label_17332c;
        case 0x173330u: goto label_173330;
        case 0x173334u: goto label_173334;
        case 0x173338u: goto label_173338;
        case 0x17333cu: goto label_17333c;
        case 0x173340u: goto label_173340;
        case 0x173344u: goto label_173344;
        case 0x173348u: goto label_173348;
        case 0x17334cu: goto label_17334c;
        case 0x173350u: goto label_173350;
        case 0x173354u: goto label_173354;
        case 0x173358u: goto label_173358;
        case 0x17335cu: goto label_17335c;
        case 0x173360u: goto label_173360;
        case 0x173364u: goto label_173364;
        case 0x173368u: goto label_173368;
        case 0x17336cu: goto label_17336c;
        case 0x173370u: goto label_173370;
        case 0x173374u: goto label_173374;
        case 0x173378u: goto label_173378;
        case 0x17337cu: goto label_17337c;
        case 0x173380u: goto label_173380;
        case 0x173384u: goto label_173384;
        case 0x173388u: goto label_173388;
        case 0x17338cu: goto label_17338c;
        case 0x173390u: goto label_173390;
        case 0x173394u: goto label_173394;
        case 0x173398u: goto label_173398;
        case 0x17339cu: goto label_17339c;
        case 0x1733a0u: goto label_1733a0;
        case 0x1733a4u: goto label_1733a4;
        case 0x1733a8u: goto label_1733a8;
        case 0x1733acu: goto label_1733ac;
        case 0x1733b0u: goto label_1733b0;
        case 0x1733b4u: goto label_1733b4;
        case 0x1733b8u: goto label_1733b8;
        case 0x1733bcu: goto label_1733bc;
        case 0x1733c0u: goto label_1733c0;
        case 0x1733c4u: goto label_1733c4;
        case 0x1733c8u: goto label_1733c8;
        case 0x1733ccu: goto label_1733cc;
        case 0x1733d0u: goto label_1733d0;
        case 0x1733d4u: goto label_1733d4;
        case 0x1733d8u: goto label_1733d8;
        case 0x1733dcu: goto label_1733dc;
        case 0x1733e0u: goto label_1733e0;
        case 0x1733e4u: goto label_1733e4;
        case 0x1733e8u: goto label_1733e8;
        case 0x1733ecu: goto label_1733ec;
        case 0x1733f0u: goto label_1733f0;
        case 0x1733f4u: goto label_1733f4;
        case 0x1733f8u: goto label_1733f8;
        case 0x1733fcu: goto label_1733fc;
        case 0x173400u: goto label_173400;
        case 0x173404u: goto label_173404;
        case 0x173408u: goto label_173408;
        case 0x17340cu: goto label_17340c;
        case 0x173410u: goto label_173410;
        case 0x173414u: goto label_173414;
        case 0x173418u: goto label_173418;
        case 0x17341cu: goto label_17341c;
        case 0x173420u: goto label_173420;
        case 0x173424u: goto label_173424;
        case 0x173428u: goto label_173428;
        case 0x17342cu: goto label_17342c;
        case 0x173430u: goto label_173430;
        case 0x173434u: goto label_173434;
        case 0x173438u: goto label_173438;
        case 0x17343cu: goto label_17343c;
        case 0x173440u: goto label_173440;
        case 0x173444u: goto label_173444;
        case 0x173448u: goto label_173448;
        case 0x17344cu: goto label_17344c;
        case 0x173450u: goto label_173450;
        case 0x173454u: goto label_173454;
        case 0x173458u: goto label_173458;
        case 0x17345cu: goto label_17345c;
        case 0x173460u: goto label_173460;
        case 0x173464u: goto label_173464;
        case 0x173468u: goto label_173468;
        case 0x17346cu: goto label_17346c;
        case 0x173470u: goto label_173470;
        case 0x173474u: goto label_173474;
        case 0x173478u: goto label_173478;
        case 0x17347cu: goto label_17347c;
        case 0x173480u: goto label_173480;
        case 0x173484u: goto label_173484;
        case 0x173488u: goto label_173488;
        case 0x17348cu: goto label_17348c;
        case 0x173490u: goto label_173490;
        case 0x173494u: goto label_173494;
        case 0x173498u: goto label_173498;
        case 0x17349cu: goto label_17349c;
        case 0x1734a0u: goto label_1734a0;
        case 0x1734a4u: goto label_1734a4;
        case 0x1734a8u: goto label_1734a8;
        case 0x1734acu: goto label_1734ac;
        case 0x1734b0u: goto label_1734b0;
        case 0x1734b4u: goto label_1734b4;
        case 0x1734b8u: goto label_1734b8;
        case 0x1734bcu: goto label_1734bc;
        case 0x1734c0u: goto label_1734c0;
        case 0x1734c4u: goto label_1734c4;
        case 0x1734c8u: goto label_1734c8;
        case 0x1734ccu: goto label_1734cc;
        case 0x1734d0u: goto label_1734d0;
        case 0x1734d4u: goto label_1734d4;
        case 0x1734d8u: goto label_1734d8;
        case 0x1734dcu: goto label_1734dc;
        case 0x1734e0u: goto label_1734e0;
        case 0x1734e4u: goto label_1734e4;
        case 0x1734e8u: goto label_1734e8;
        case 0x1734ecu: goto label_1734ec;
        case 0x1734f0u: goto label_1734f0;
        case 0x1734f4u: goto label_1734f4;
        case 0x1734f8u: goto label_1734f8;
        case 0x1734fcu: goto label_1734fc;
        case 0x173500u: goto label_173500;
        case 0x173504u: goto label_173504;
        case 0x173508u: goto label_173508;
        case 0x17350cu: goto label_17350c;
        case 0x173510u: goto label_173510;
        case 0x173514u: goto label_173514;
        case 0x173518u: goto label_173518;
        case 0x17351cu: goto label_17351c;
        case 0x173520u: goto label_173520;
        case 0x173524u: goto label_173524;
        case 0x173528u: goto label_173528;
        case 0x17352cu: goto label_17352c;
        case 0x173530u: goto label_173530;
        case 0x173534u: goto label_173534;
        case 0x173538u: goto label_173538;
        case 0x17353cu: goto label_17353c;
        case 0x173540u: goto label_173540;
        case 0x173544u: goto label_173544;
        case 0x173548u: goto label_173548;
        case 0x17354cu: goto label_17354c;
        case 0x173550u: goto label_173550;
        case 0x173554u: goto label_173554;
        case 0x173558u: goto label_173558;
        case 0x17355cu: goto label_17355c;
        case 0x173560u: goto label_173560;
        case 0x173564u: goto label_173564;
        case 0x173568u: goto label_173568;
        case 0x17356cu: goto label_17356c;
        case 0x173570u: goto label_173570;
        case 0x173574u: goto label_173574;
        case 0x173578u: goto label_173578;
        case 0x17357cu: goto label_17357c;
        case 0x173580u: goto label_173580;
        case 0x173584u: goto label_173584;
        case 0x173588u: goto label_173588;
        case 0x17358cu: goto label_17358c;
        default: return;
    }

label_172dc0:
    if (ctx->pc == 0x172DC0u) {
        ctx->pc = 0x172DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DBCu;
        // 0x172dc0: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DC4u;
        goto label_172dc4;
    }
    ctx->pc = 0x172DBCu;
    {
        const bool branch_taken_0x172dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DBCu;
        // 0x172dc0: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172dbc) {
            ctx->pc = 0x172DE0u;
            goto label_172de0;
        }
    }
    ctx->pc = 0x172DC4u;
label_172dc4:
    // 0x172dc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x172dc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_172dc8:
    // 0x172dc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_172dcc:
    // 0x172dcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172dd0:
    // 0x172dd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x172dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_172dd4:
    // 0x172dd4: 0x0  nop
    ctx->pc = 0x172dd4u;
    // NOP
label_172dd8:
    // 0x172dd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_172ddc:
    // 0x172ddc: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x172ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_172de0:
    // 0x172de0: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x172de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_172de4:
    // 0x172de4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_172de8:
    // 0x172de8: 0x96a30d74  lhu         $v1, 0xD74($s5)
    ctx->pc = 0x172de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3444)));
label_172dec:
    // 0x172dec: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x172decu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_172df0:
    // 0x172df0: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_172df4:
    if (ctx->pc == 0x172DF4u) {
        ctx->pc = 0x172DF8u;
        goto label_172df8;
    }
    ctx->pc = 0x172DF0u;
    {
        const bool branch_taken_0x172df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172df0) {
            ctx->pc = 0x172CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x172cc8; return; }
        }
    }
    ctx->pc = 0x172DF8u;
label_172df8:
    // 0x172df8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x172df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_172dfc:
    // 0x172dfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x172dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_172e00:
    // 0x172e00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x172e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_172e04:
    // 0x172e04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172e08:
    // 0x172e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172e0c:
    // 0x172e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172e10:
    // 0x172e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172e14:
    // 0x172e14: 0x3e00008  jr          $ra
label_172e18:
    if (ctx->pc == 0x172E18u) {
        ctx->pc = 0x172E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E14u;
        // 0x172e18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E1Cu;
        goto label_172e1c;
    }
    ctx->pc = 0x172E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E14u;
        // 0x172e18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172E1Cu;
label_172e1c:
    // 0x172e1c: 0x0  nop
    ctx->pc = 0x172e1cu;
    // NOP
label_172e20:
    // 0x172e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_172e24:
    // 0x172e24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x172e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_172e28:
    // 0x172e28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x172e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_172e2c:
    // 0x172e2c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x172e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_172e30:
    // 0x172e30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x172e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_172e34:
    // 0x172e34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x172e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_172e38:
    // 0x172e38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x172e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_172e3c:
    // 0x172e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172e40:
    // 0x172e40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_172e44:
    // 0x172e44: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x172e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_172e48:
    // 0x172e48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x172e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_172e4c:
    // 0x172e4c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x172e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_172e50:
    // 0x172e50: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x172e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_172e54:
    // 0x172e54: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x172e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_172e58:
    // 0x172e58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_172e5c:
    if (ctx->pc == 0x172E5Cu) {
        ctx->pc = 0x172E60u;
        goto label_172e60;
    }
    ctx->pc = 0x172E58u;
    {
        const bool branch_taken_0x172e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e58) {
            ctx->pc = 0x172E6Cu;
            goto label_172e6c;
        }
    }
    ctx->pc = 0x172E60u;
label_172e60:
    // 0x172e60: 0x96230d76  lhu         $v1, 0xD76($s1)
    ctx->pc = 0x172e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3446)));
label_172e64:
    // 0x172e64: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_172e68:
    if (ctx->pc == 0x172E68u) {
        ctx->pc = 0x172E6Cu;
        goto label_172e6c;
    }
    ctx->pc = 0x172E64u;
    {
        const bool branch_taken_0x172e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e64) {
            ctx->pc = 0x172FB0u;
            goto label_172fb0;
        }
    }
    ctx->pc = 0x172E6Cu;
label_172e6c:
    // 0x172e6c: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x172e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_172e70:
    // 0x172e70: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x172e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_172e74:
    // 0x172e74: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x172e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_172e78:
    // 0x172e78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_172e7c:
    // 0x172e7c: 0x26260d60  addiu       $a2, $s1, 0xD60
    ctx->pc = 0x172e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3424));
label_172e80:
    // 0x172e80: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x172e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_172e84:
    // 0x172e84: 0xc066d7a  jal         func_19B5E8
label_172e88:
    if (ctx->pc == 0x172E88u) {
        ctx->pc = 0x172E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E84u;
        // 0x172e88: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E8Cu;
        goto label_172e8c;
    }
    ctx->pc = 0x172E84u;
    SET_GPR_U32(ctx, 31, 0x172E8Cu);
    ctx->pc = 0x172E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E84u;
    // 0x172e88: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x172E8Cu;
label_172e8c:
    // 0x172e8c: 0xc07f1a0  jal         func_1FC680
label_172e90:
    if (ctx->pc == 0x172E90u) {
        ctx->pc = 0x172E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E8Cu;
        // 0x172e90: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E94u;
        goto label_172e94;
    }
    ctx->pc = 0x172E8Cu;
    SET_GPR_U32(ctx, 31, 0x172E94u);
    ctx->pc = 0x172E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E8Cu;
    // 0x172e90: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x172E94u;
label_172e94:
    // 0x172e94: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x172e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172e98:
    // 0x172e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172e9c:
    // 0x172e9c: 0x0  nop
    ctx->pc = 0x172e9cu;
    // NOP
label_172ea0:
    // 0x172ea0: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_172ea4:
    if (ctx->pc == 0x172EA4u) {
        ctx->pc = 0x172EA8u;
        goto label_172ea8;
    }
    ctx->pc = 0x172EA0u;
    {
        const bool branch_taken_0x172ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172ea0) {
            ctx->pc = 0x172FB0u;
            goto label_172fb0;
        }
    }
    ctx->pc = 0x172EA8u;
label_172ea8:
    // 0x172ea8: 0xc62c0d78  lwc1        $f12, 0xD78($s1)
    ctx->pc = 0x172ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_172eac:
    // 0x172eac: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x172eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_172eb0:
    // 0x172eb0: 0xc6340d7c  lwc1        $f20, 0xD7C($s1)
    ctx->pc = 0x172eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172eb4:
    // 0x172eb4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x172eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_172eb8:
    // 0x172eb8: 0x24844590  addiu       $a0, $a0, 0x4590
    ctx->pc = 0x172eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
label_172ebc:
    // 0x172ebc: 0xc066e14  jal         func_19B850
label_172ec0:
    if (ctx->pc == 0x172EC0u) {
        ctx->pc = 0x172EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EBCu;
        // 0x172ec0: 0x24a545b0  addiu       $a1, $a1, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EC4u;
        goto label_172ec4;
    }
    ctx->pc = 0x172EBCu;
    SET_GPR_U32(ctx, 31, 0x172EC4u);
    ctx->pc = 0x172EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EBCu;
    // 0x172ec0: 0x24a545b0  addiu       $a1, $a1, 0x45B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x172EC4u;
label_172ec4:
    // 0x172ec4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x172ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_172ec8:
    // 0x172ec8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x172ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_172ecc:
    // 0x172ecc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x172eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_172ed0:
    // 0x172ed0: 0x248445a0  addiu       $a0, $a0, 0x45A0
    ctx->pc = 0x172ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
label_172ed4:
    // 0x172ed4: 0xc066e14  jal         func_19B850
label_172ed8:
    if (ctx->pc == 0x172ED8u) {
        ctx->pc = 0x172ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172ED4u;
        // 0x172ed8: 0x24a545c0  addiu       $a1, $a1, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EDCu;
        goto label_172edc;
    }
    ctx->pc = 0x172ED4u;
    SET_GPR_U32(ctx, 31, 0x172EDCu);
    ctx->pc = 0x172ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172ED4u;
    // 0x172ed8: 0x24a545c0  addiu       $a1, $a1, 0x45C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x172EDCu;
label_172edc:
    // 0x172edc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_172ee0:
    // 0x172ee0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x172ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_172ee4:
    // 0x172ee4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x172ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_172ee8:
    // 0x172ee8: 0x24844580  addiu       $a0, $a0, 0x4580
    ctx->pc = 0x172ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
label_172eec:
    // 0x172eec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x172eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172ef0:
    // 0x172ef0: 0xc066e14  jal         func_19B850
label_172ef4:
    if (ctx->pc == 0x172EF4u) {
        ctx->pc = 0x172EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EF0u;
        // 0x172ef4: 0x24a54590  addiu       $a1, $a1, 0x4590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EF8u;
        goto label_172ef8;
    }
    ctx->pc = 0x172EF0u;
    SET_GPR_U32(ctx, 31, 0x172EF8u);
    ctx->pc = 0x172EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EF0u;
    // 0x172ef4: 0x24a54590  addiu       $a1, $a1, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x172EF8u;
label_172ef8:
    // 0x172ef8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_172efc:
    // 0x172efc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_172f00:
    // 0x172f00: 0x26240d10  addiu       $a0, $s1, 0xD10
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3344));
label_172f04:
    // 0x172f04: 0x24a54580  addiu       $a1, $a1, 0x4580
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17792));
label_172f08:
    // 0x172f08: 0xc066e08  jal         func_19B820
label_172f0c:
    if (ctx->pc == 0x172F0Cu) {
        ctx->pc = 0x172F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F08u;
        // 0x172f0c: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F10u;
        goto label_172f10;
    }
    ctx->pc = 0x172F08u;
    SET_GPR_U32(ctx, 31, 0x172F10u);
    ctx->pc = 0x172F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F08u;
    // 0x172f0c: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x172F10u;
label_172f10:
    // 0x172f10: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x172f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_172f14:
    // 0x172f14: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_172f18:
    // 0x172f18: 0x26240d20  addiu       $a0, $s1, 0xD20
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3360));
label_172f1c:
    // 0x172f1c: 0x24a54590  addiu       $a1, $a1, 0x4590
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
label_172f20:
    // 0x172f20: 0xc066e02  jal         func_19B808
label_172f24:
    if (ctx->pc == 0x172F24u) {
        ctx->pc = 0x172F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F20u;
        // 0x172f24: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F28u;
        goto label_172f28;
    }
    ctx->pc = 0x172F20u;
    SET_GPR_U32(ctx, 31, 0x172F28u);
    ctx->pc = 0x172F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F20u;
    // 0x172f24: 0x24c645a0  addiu       $a2, $a2, 0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x172F28u;
label_172f28:
    // 0x172f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172f2c:
    // 0x172f2c: 0xc066c5c  jal         func_19B170
label_172f30:
    if (ctx->pc == 0x172F30u) {
        ctx->pc = 0x172F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F2Cu;
        // 0x172f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F34u;
        goto label_172f34;
    }
    ctx->pc = 0x172F2Cu;
    SET_GPR_U32(ctx, 31, 0x172F34u);
    ctx->pc = 0x172F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F2Cu;
    // 0x172f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x172F34u;
label_172f34:
    // 0x172f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172f38:
    // 0x172f38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172f3c:
    // 0x172f3c: 0xc066d10  jal         func_19B440
label_172f40:
    if (ctx->pc == 0x172F40u) {
        ctx->pc = 0x172F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F3Cu;
        // 0x172f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F44u;
        goto label_172f44;
    }
    ctx->pc = 0x172F3Cu;
    SET_GPR_U32(ctx, 31, 0x172F44u);
    ctx->pc = 0x172F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F3Cu;
    // 0x172f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x172F44u;
label_172f44:
    // 0x172f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172f48:
    // 0x172f48: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x172f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_172f4c:
    // 0x172f4c: 0xc066d36  jal         func_19B4D8
label_172f50:
    if (ctx->pc == 0x172F50u) {
        ctx->pc = 0x172F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F4Cu;
        // 0x172f50: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F54u;
        goto label_172f54;
    }
    ctx->pc = 0x172F4Cu;
    SET_GPR_U32(ctx, 31, 0x172F54u);
    ctx->pc = 0x172F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F4Cu;
    // 0x172f50: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x172F54u;
label_172f54:
    // 0x172f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172f58:
    // 0x172f58: 0x26250d00  addiu       $a1, $s1, 0xD00
    ctx->pc = 0x172f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3328));
label_172f5c:
    // 0x172f5c: 0xc066d36  jal         func_19B4D8
label_172f60:
    if (ctx->pc == 0x172F60u) {
        ctx->pc = 0x172F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F5Cu;
        // 0x172f60: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F64u;
        goto label_172f64;
    }
    ctx->pc = 0x172F5Cu;
    SET_GPR_U32(ctx, 31, 0x172F64u);
    ctx->pc = 0x172F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F5Cu;
    // 0x172f60: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x172F64u;
label_172f64:
    // 0x172f64: 0xc066c46  jal         func_19B118
label_172f68:
    if (ctx->pc == 0x172F68u) {
        ctx->pc = 0x172F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F64u;
        // 0x172f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F6Cu;
        goto label_172f6c;
    }
    ctx->pc = 0x172F64u;
    SET_GPR_U32(ctx, 31, 0x172F6Cu);
    ctx->pc = 0x172F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F64u;
    // 0x172f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x172F6Cu;
label_172f6c:
    // 0x172f6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172f70:
    // 0x172f70: 0x1000000b  b           . + 4 + (0xB << 2)
label_172f74:
    if (ctx->pc == 0x172F74u) {
        ctx->pc = 0x172F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F70u;
        // 0x172f74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F78u;
        goto label_172f78;
    }
    ctx->pc = 0x172F70u;
    {
        const bool branch_taken_0x172f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F70u;
        // 0x172f74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f70) {
            ctx->pc = 0x172FA0u;
            goto label_172fa0;
        }
    }
    ctx->pc = 0x172F78u;
label_172f78:
    // 0x172f78: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_172f7c:
    // 0x172f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172f80:
    // 0x172f80: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x172f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_172f84:
    // 0x172f84: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x172f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_172f88:
    // 0x172f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172f8c:
    // 0x172f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172f90:
    // 0x172f90: 0xc066c72  jal         func_19B1C8
label_172f94:
    if (ctx->pc == 0x172F94u) {
        ctx->pc = 0x172F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F90u;
        // 0x172f94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F98u;
        goto label_172f98;
    }
    ctx->pc = 0x172F90u;
    SET_GPR_U32(ctx, 31, 0x172F98u);
    ctx->pc = 0x172F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F90u;
    // 0x172f94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x172F98u;
label_172f98:
    // 0x172f98: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x172f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_172f9c:
    // 0x172f9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x172f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_172fa0:
    // 0x172fa0: 0x96230d74  lhu         $v1, 0xD74($s1)
    ctx->pc = 0x172fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3444)));
label_172fa4:
    // 0x172fa4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x172fa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_172fa8:
    // 0x172fa8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_172fac:
    if (ctx->pc == 0x172FACu) {
        ctx->pc = 0x172FB0u;
        goto label_172fb0;
    }
    ctx->pc = 0x172FA8u;
    {
        const bool branch_taken_0x172fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172fa8) {
            ctx->pc = 0x172F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172f78;
        }
    }
    ctx->pc = 0x172FB0u;
label_172fb0:
    // 0x172fb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x172fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_172fb4:
    // 0x172fb4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x172fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172fb8:
    // 0x172fb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x172fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_172fbc:
    // 0x172fbc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x172fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172fc0:
    // 0x172fc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x172fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172fc4:
    // 0x172fc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172fc8:
    // 0x172fc8: 0x3e00008  jr          $ra
label_172fcc:
    if (ctx->pc == 0x172FCCu) {
        ctx->pc = 0x172FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC8u;
        // 0x172fcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FD0u;
        goto label_172fd0;
    }
    ctx->pc = 0x172FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC8u;
        // 0x172fcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172FD0u;
label_172fd0:
    // 0x172fd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x172fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_172fd4:
    // 0x172fd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_172fd8:
    // 0x172fd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x172fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_172fdc:
    // 0x172fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172fe0:
    // 0x172fe0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x172fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_172fe4:
    // 0x172fe4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x172fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_172fe8:
    // 0x172fe8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x172fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172fec:
    // 0x172fec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x172fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_172ff0:
    // 0x172ff0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x172ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_172ff4:
    // 0x172ff4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x172ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_172ff8:
    // 0x172ff8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x172ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_172ffc:
    // 0x172ffc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x172ffcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_173000:
    // 0x173000: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x173000u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_173004:
    // 0x173004: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x173004u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_173008:
    // 0x173008: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x173008u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17300c:
    // 0x17300c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x17300cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_173010:
    // 0x173010: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x173010u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_173014:
    // 0x173014: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_173018:
    // 0x173018: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x173018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17301c:
    // 0x17301c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17301cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173020:
    // 0x173020: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_173024:
    if (ctx->pc == 0x173024u) {
        ctx->pc = 0x173024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173020u;
        // 0x173024: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173028u;
        goto label_173028;
    }
    ctx->pc = 0x173020u;
    {
        const bool branch_taken_0x173020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173020u;
        // 0x173024: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173020) {
            ctx->pc = 0x1730A0u;
            goto label_1730a0;
        }
    }
    ctx->pc = 0x173028u;
label_173028:
    // 0x173028: 0xc066daa  jal         func_19B6A8
label_17302c:
    if (ctx->pc == 0x17302Cu) {
        ctx->pc = 0x17302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173028u;
        // 0x17302c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173030u;
        goto label_173030;
    }
    ctx->pc = 0x173028u;
    SET_GPR_U32(ctx, 31, 0x173030u);
    ctx->pc = 0x17302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173028u;
    // 0x17302c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x173030u;
label_173030:
    // 0x173030: 0xc066e44  jal         func_19B910
label_173034:
    if (ctx->pc == 0x173034u) {
        ctx->pc = 0x173034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173030u;
        // 0x173034: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173038u;
        goto label_173038;
    }
    ctx->pc = 0x173030u;
    SET_GPR_U32(ctx, 31, 0x173038u);
    ctx->pc = 0x173034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173030u;
    // 0x173034: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x173038u;
label_173038:
    // 0x173038: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17303c:
    // 0x17303c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17303cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_173040:
    // 0x173040: 0xc066e6c  jal         func_19B9B0
label_173044:
    if (ctx->pc == 0x173044u) {
        ctx->pc = 0x173044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173040u;
        // 0x173044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173048u;
        goto label_173048;
    }
    ctx->pc = 0x173040u;
    SET_GPR_U32(ctx, 31, 0x173048u);
    ctx->pc = 0x173044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173040u;
    // 0x173044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x173048u;
label_173048:
    // 0x173048: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x173048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17304c:
    // 0x17304c: 0x27b000e8  addiu       $s0, $sp, 0xE8
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_173050:
    // 0x173050: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x173050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173054:
    // 0x173054: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x173054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_173058:
    // 0x173058: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x173058u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_17305c:
    // 0x17305c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x17305cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_173060:
    // 0x173060: 0x46000344  c1          0x344
    ctx->pc = 0x173060u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_173064:
    // 0x173064: 0x0  nop
    ctx->pc = 0x173064u;
    // NOP
label_173068:
    // 0x173068: 0x0  nop
    ctx->pc = 0x173068u;
    // NOP
label_17306c:
    // 0x17306c: 0xc06d51e  jal         func_1B5478
label_173070:
    if (ctx->pc == 0x173070u) {
        ctx->pc = 0x173074u;
        goto label_173074;
    }
    ctx->pc = 0x17306Cu;
    SET_GPR_U32(ctx, 31, 0x173074u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x173074u;
label_173074:
    // 0x173074: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173078:
    // 0x173078: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x173078u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_17307c:
    // 0x17307c: 0xc066e96  jal         func_19BA58
label_173080:
    if (ctx->pc == 0x173080u) {
        ctx->pc = 0x173080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17307Cu;
        // 0x173080: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173084u;
        goto label_173084;
    }
    ctx->pc = 0x17307Cu;
    SET_GPR_U32(ctx, 31, 0x173084u);
    ctx->pc = 0x173080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17307Cu;
    // 0x173080: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x173084u;
label_173084:
    // 0x173084: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x173084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_173088:
    // 0x173088: 0xc06d51e  jal         func_1B5478
label_17308c:
    if (ctx->pc == 0x17308Cu) {
        ctx->pc = 0x17308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173088u;
        // 0x17308c: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173090u;
        goto label_173090;
    }
    ctx->pc = 0x173088u;
    SET_GPR_U32(ctx, 31, 0x173090u);
    ctx->pc = 0x17308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173088u;
    // 0x17308c: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x173090u;
label_173090:
    // 0x173090: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173094:
    // 0x173094: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x173094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_173098:
    // 0x173098: 0xc066ec0  jal         func_19BB00
label_17309c:
    if (ctx->pc == 0x17309Cu) {
        ctx->pc = 0x17309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173098u;
        // 0x17309c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730A0u;
        goto label_1730a0;
    }
    ctx->pc = 0x173098u;
    SET_GPR_U32(ctx, 31, 0x1730A0u);
    ctx->pc = 0x17309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173098u;
    // 0x17309c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1730A0u;
label_1730a0:
    // 0x1730a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1730a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1730a4:
    // 0x1730a4: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_1730a8:
    if (ctx->pc == 0x1730A8u) {
        ctx->pc = 0x1730A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730A4u;
        // 0x1730a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730ACu;
        goto label_1730ac;
    }
    ctx->pc = 0x1730A4u;
    {
        const bool branch_taken_0x1730a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730A4u;
        // 0x1730a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730a4) {
            ctx->pc = 0x1733BCu;
            goto label_1733bc;
        }
    }
    ctx->pc = 0x1730ACu;
label_1730ac:
    // 0x1730ac: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1730acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1730b0:
    // 0x1730b0: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1730b4:
    // 0x1730b4: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x1730b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_1730b8:
    // 0x1730b8: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x1730b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_1730bc:
    // 0x1730bc: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x1730bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
label_1730c0:
    // 0x1730c0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1730c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_1730c4:
    // 0x1730c4: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x1730c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_1730c8:
    // 0x1730c8: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1730c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_1730cc:
    // 0x1730cc: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_1730d0:
    if (ctx->pc == 0x1730D0u) {
        ctx->pc = 0x1730D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730CCu;
        // 0x1730d0: 0xac82008c  sw          $v0, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730D4u;
        goto label_1730d4;
    }
    ctx->pc = 0x1730CCu;
    {
        const bool branch_taken_0x1730cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1730D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730CCu;
        // 0x1730d0: 0xac82008c  sw          $v0, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730cc) {
            ctx->pc = 0x1730E4u;
            goto label_1730e4;
        }
    }
    ctx->pc = 0x1730D4u;
label_1730d4:
    // 0x1730d4: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_1730d8:
    // 0x1730d8: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x1730d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
label_1730dc:
    // 0x1730dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1730e0:
    if (ctx->pc == 0x1730E0u) {
        ctx->pc = 0x1730E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730DCu;
        // 0x1730e0: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730E4u;
        goto label_1730e4;
    }
    ctx->pc = 0x1730DCu;
    {
        const bool branch_taken_0x1730dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730DCu;
        // 0x1730e0: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730dc) {
            ctx->pc = 0x1730F0u;
            goto label_1730f0;
        }
    }
    ctx->pc = 0x1730E4u;
label_1730e4:
    // 0x1730e4: 0x0  nop
    ctx->pc = 0x1730e4u;
    // NOP
label_1730e8:
    // 0x1730e8: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x1730e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
label_1730ec:
    // 0x1730ec: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x1730ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_1730f0:
    // 0x1730f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1730f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1730f4:
    // 0x1730f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1730f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1730f8:
    // 0x1730f8: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x1730f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
label_1730fc:
    // 0x1730fc: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x1730fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
label_173100:
    // 0x173100: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_173104:
    // 0x173104: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x173104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173108:
    // 0x173108: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x173108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
label_17310c:
    // 0x17310c: 0x249200a0  addiu       $s2, $a0, 0xA0
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_173110:
    // 0x173110: 0x45010054  bc1t        . + 4 + (0x54 << 2)
label_173114:
    if (ctx->pc == 0x173114u) {
        ctx->pc = 0x173114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173110u;
        // 0x173114: 0x249100b0  addiu       $s1, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173118u;
        goto label_173118;
    }
    ctx->pc = 0x173110u;
    {
        const bool branch_taken_0x173110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173110u;
        // 0x173114: 0x249100b0  addiu       $s1, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173110) {
            ctx->pc = 0x173264u;
            goto label_173264;
        }
    }
    ctx->pc = 0x173118u;
label_173118:
    // 0x173118: 0xc08f0cc  jal         func_23C330
label_17311c:
    if (ctx->pc == 0x17311Cu) {
        ctx->pc = 0x173120u;
        goto label_173120;
    }
    ctx->pc = 0x173118u;
    SET_GPR_U32(ctx, 31, 0x173120u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x173120u;
label_173120:
    // 0x173120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173124:
    // 0x173124: 0x0  nop
    ctx->pc = 0x173124u;
    // NOP
label_173128:
    // 0x173128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17312c:
    // 0x17312c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_173130:
    // 0x173130: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x173130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_173134:
    // 0x173134: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_173138:
    // 0x173138: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17313c:
    // 0x17313c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_173140:
    // 0x173140: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_173144:
    // 0x173144: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x173144u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[2];
label_173148:
    // 0x173148: 0x0  nop
    ctx->pc = 0x173148u;
    // NOP
label_17314c:
    // 0x17314c: 0x0  nop
    ctx->pc = 0x17314cu;
    // NOP
label_173150:
    // 0x173150: 0xc08f0cc  jal         func_23C330
label_173154:
    if (ctx->pc == 0x173154u) {
        ctx->pc = 0x173158u;
        goto label_173158;
    }
    ctx->pc = 0x173150u;
    SET_GPR_U32(ctx, 31, 0x173158u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x173158u;
label_173158:
    // 0x173158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17315c:
    // 0x17315c: 0x0  nop
    ctx->pc = 0x17315cu;
    // NOP
label_173160:
    // 0x173160: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x173160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_173164:
    // 0x173164: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_173168:
    // 0x173168: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x173168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_17316c:
    // 0x17316c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17316cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_173170:
    // 0x173170: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173174:
    // 0x173174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173178:
    // 0x173178: 0x0  nop
    ctx->pc = 0x173178u;
    // NOP
label_17317c:
    // 0x17317c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17317cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_173180:
    // 0x173180: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x173180u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_173184:
    // 0x173184: 0x0  nop
    ctx->pc = 0x173184u;
    // NOP
label_173188:
    // 0x173188: 0x0  nop
    ctx->pc = 0x173188u;
    // NOP
label_17318c:
    // 0x17318c: 0xc08f0cc  jal         func_23C330
label_173190:
    if (ctx->pc == 0x173190u) {
        ctx->pc = 0x173194u;
        goto label_173194;
    }
    ctx->pc = 0x17318Cu;
    SET_GPR_U32(ctx, 31, 0x173194u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x173194u;
label_173194:
    // 0x173194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173198:
    // 0x173198: 0x0  nop
    ctx->pc = 0x173198u;
    // NOP
label_17319c:
    // 0x17319c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x17319cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1731a0:
    // 0x1731a0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1731a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1731a4:
    // 0x1731a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1731a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1731a8:
    // 0x1731a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1731ac:
    // 0x1731ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1731acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1731b0:
    // 0x1731b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1731b4:
    // 0x1731b4: 0x0  nop
    ctx->pc = 0x1731b4u;
    // NOP
label_1731b8:
    // 0x1731b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1731b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1731bc:
    // 0x1731bc: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x1731bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[26] = ctx->f[1] / ctx->f[0];
label_1731c0:
    // 0x1731c0: 0x0  nop
    ctx->pc = 0x1731c0u;
    // NOP
label_1731c4:
    // 0x1731c4: 0x0  nop
    ctx->pc = 0x1731c4u;
    // NOP
label_1731c8:
    // 0x1731c8: 0xc08f0cc  jal         func_23C330
label_1731cc:
    if (ctx->pc == 0x1731CCu) {
        ctx->pc = 0x1731D0u;
        goto label_1731d0;
    }
    ctx->pc = 0x1731C8u;
    SET_GPR_U32(ctx, 31, 0x1731D0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1731D0u;
label_1731d0:
    // 0x1731d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1731d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1731d4:
    // 0x1731d4: 0x0  nop
    ctx->pc = 0x1731d4u;
    // NOP
label_1731d8:
    // 0x1731d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1731d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1731dc:
    // 0x1731dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1731e0:
    // 0x1731e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1731e4:
    // 0x1731e4: 0x0  nop
    ctx->pc = 0x1731e4u;
    // NOP
label_1731e8:
    // 0x1731e8: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x1731e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[25] = ctx->f[1] / ctx->f[0];
label_1731ec:
    // 0x1731ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1731f0:
    // 0x1731f0: 0x0  nop
    ctx->pc = 0x1731f0u;
    // NOP
label_1731f4:
    // 0x1731f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1731f8:
    // 0x1731f8: 0x0  nop
    ctx->pc = 0x1731f8u;
    // NOP
label_1731fc:
    // 0x1731fc: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x1731fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173200:
    // 0x173200: 0x0  nop
    ctx->pc = 0x173200u;
    // NOP
label_173204:
    // 0x173204: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_173208:
    if (ctx->pc == 0x173208u) {
        ctx->pc = 0x17320Cu;
        goto label_17320c;
    }
    ctx->pc = 0x173204u;
    {
        const bool branch_taken_0x173204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173204) {
            ctx->pc = 0x173210u;
            goto label_173210;
        }
    }
    ctx->pc = 0x17320Cu;
label_17320c:
    // 0x17320c: 0x4600ce40  add.s       $f25, $f25, $f0
    ctx->pc = 0x17320cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_173210:
    // 0x173210: 0x4616ce42  mul.s       $f25, $f25, $f22
    ctx->pc = 0x173210u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
label_173214:
    // 0x173214: 0xc06d412  jal         func_1B5048
label_173218:
    if (ctx->pc == 0x173218u) {
        ctx->pc = 0x173218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173214u;
        // 0x173218: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17321Cu;
        goto label_17321c;
    }
    ctx->pc = 0x173214u;
    SET_GPR_U32(ctx, 31, 0x17321Cu);
    ctx->pc = 0x173218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173214u;
    // 0x173218: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x17321Cu;
label_17321c:
    // 0x17321c: 0x4600ce02  mul.s       $f24, $f25, $f0
    ctx->pc = 0x17321cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_173220:
    // 0x173220: 0xc06d412  jal         func_1B5048
label_173224:
    if (ctx->pc == 0x173224u) {
        ctx->pc = 0x173224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173220u;
        // 0x173224: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173228u;
        goto label_173228;
    }
    ctx->pc = 0x173220u;
    SET_GPR_U32(ctx, 31, 0x173228u);
    ctx->pc = 0x173224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173220u;
    // 0x173224: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x173228u;
label_173228:
    // 0x173228: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x173228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_17322c:
    // 0x17322c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x17322cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_173230:
    // 0x173230: 0xc06d4c0  jal         func_1B5300
label_173234:
    if (ctx->pc == 0x173234u) {
        ctx->pc = 0x173234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173230u;
        // 0x173234: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173238u;
        goto label_173238;
    }
    ctx->pc = 0x173230u;
    SET_GPR_U32(ctx, 31, 0x173238u);
    ctx->pc = 0x173234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173230u;
    // 0x173234: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x173238u;
label_173238:
    // 0x173238: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x173238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_17323c:
    // 0x17323c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17323cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_173240:
    // 0x173240: 0xc06d412  jal         func_1B5048
label_173244:
    if (ctx->pc == 0x173244u) {
        ctx->pc = 0x173244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173240u;
        // 0x173244: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173248u;
        goto label_173248;
    }
    ctx->pc = 0x173240u;
    SET_GPR_U32(ctx, 31, 0x173248u);
    ctx->pc = 0x173244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173240u;
    // 0x173244: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x173248u;
label_173248:
    // 0x173248: 0x4600cd02  mul.s       $f20, $f25, $f0
    ctx->pc = 0x173248u;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_17324c:
    // 0x17324c: 0xc06d4c0  jal         func_1B5300
label_173250:
    if (ctx->pc == 0x173250u) {
        ctx->pc = 0x173250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17324Cu;
        // 0x173250: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173254u;
        goto label_173254;
    }
    ctx->pc = 0x17324Cu;
    SET_GPR_U32(ctx, 31, 0x173254u);
    ctx->pc = 0x173250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17324Cu;
    // 0x173250: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x173254u;
label_173254:
    // 0x173254: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_173258:
    // 0x173258: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x173258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_17325c:
    // 0x17325c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_173260:
    if (ctx->pc == 0x173260u) {
        ctx->pc = 0x173260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17325Cu;
        // 0x173260: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173264u;
        goto label_173264;
    }
    ctx->pc = 0x17325Cu;
    {
        const bool branch_taken_0x17325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17325Cu;
        // 0x173260: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17325c) {
            ctx->pc = 0x17335Cu;
            goto label_17335c;
        }
    }
    ctx->pc = 0x173264u;
label_173264:
    // 0x173264: 0x0  nop
    ctx->pc = 0x173264u;
    // NOP
label_173268:
    // 0x173268: 0xc08f0cc  jal         func_23C330
label_17326c:
    if (ctx->pc == 0x17326Cu) {
        ctx->pc = 0x173270u;
        goto label_173270;
    }
    ctx->pc = 0x173268u;
    SET_GPR_U32(ctx, 31, 0x173270u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x173270u;
label_173270:
    // 0x173270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173274:
    // 0x173274: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x173274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_173278:
    // 0x173278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17327c:
    // 0x17327c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_173280:
    // 0x173280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173284:
    // 0x173284: 0x0  nop
    ctx->pc = 0x173284u;
    // NOP
label_173288:
    // 0x173288: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x173288u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
label_17328c:
    // 0x17328c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17328cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_173290:
    // 0x173290: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_173294:
    // 0x173294: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173298:
    // 0x173298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17329c:
    // 0x17329c: 0x0  nop
    ctx->pc = 0x17329cu;
    // NOP
label_1732a0:
    // 0x1732a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1732a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1732a4:
    // 0x1732a4: 0xc08f0cc  jal         func_23C330
label_1732a8:
    if (ctx->pc == 0x1732A8u) {
        ctx->pc = 0x1732A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732A4u;
        // 0x1732a8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732ACu;
        goto label_1732ac;
    }
    ctx->pc = 0x1732A4u;
    SET_GPR_U32(ctx, 31, 0x1732ACu);
    ctx->pc = 0x1732A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732A4u;
    // 0x1732a8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1732ACu;
label_1732ac:
    // 0x1732ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1732acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1732b0:
    // 0x1732b0: 0x0  nop
    ctx->pc = 0x1732b0u;
    // NOP
label_1732b4:
    // 0x1732b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1732b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1732b8:
    // 0x1732b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1732b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1732bc:
    // 0x1732bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1732bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1732c0:
    // 0x1732c0: 0x0  nop
    ctx->pc = 0x1732c0u;
    // NOP
label_1732c4:
    // 0x1732c4: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1732c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1732c8:
    // 0x1732c8: 0x0  nop
    ctx->pc = 0x1732c8u;
    // NOP
label_1732cc:
    // 0x1732cc: 0x0  nop
    ctx->pc = 0x1732ccu;
    // NOP
label_1732d0:
    // 0x1732d0: 0xc08f0cc  jal         func_23C330
label_1732d4:
    if (ctx->pc == 0x1732D4u) {
        ctx->pc = 0x1732D8u;
        goto label_1732d8;
    }
    ctx->pc = 0x1732D0u;
    SET_GPR_U32(ctx, 31, 0x1732D8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1732D8u;
label_1732d8:
    // 0x1732d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1732d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1732dc:
    // 0x1732dc: 0x0  nop
    ctx->pc = 0x1732dcu;
    // NOP
label_1732e0:
    // 0x1732e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1732e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1732e4:
    // 0x1732e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1732e8:
    // 0x1732e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1732e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1732ec:
    // 0x1732ec: 0x0  nop
    ctx->pc = 0x1732ecu;
    // NOP
label_1732f0:
    // 0x1732f0: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x1732f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[24] = ctx->f[1] / ctx->f[0];
label_1732f4:
    // 0x1732f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1732f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1732f8:
    // 0x1732f8: 0x0  nop
    ctx->pc = 0x1732f8u;
    // NOP
label_1732fc:
    // 0x1732fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1732fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173300:
    // 0x173300: 0x0  nop
    ctx->pc = 0x173300u;
    // NOP
label_173304:
    // 0x173304: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x173304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173308:
    // 0x173308: 0x0  nop
    ctx->pc = 0x173308u;
    // NOP
label_17330c:
    // 0x17330c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_173310:
    if (ctx->pc == 0x173310u) {
        ctx->pc = 0x173314u;
        goto label_173314;
    }
    ctx->pc = 0x17330Cu;
    {
        const bool branch_taken_0x17330c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17330c) {
            ctx->pc = 0x173318u;
            goto label_173318;
        }
    }
    ctx->pc = 0x173314u;
label_173314:
    // 0x173314: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x173314u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_173318:
    // 0x173318: 0xc06d412  jal         func_1B5048
label_17331c:
    if (ctx->pc == 0x17331Cu) {
        ctx->pc = 0x17331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173318u;
        // 0x17331c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173320u;
        goto label_173320;
    }
    ctx->pc = 0x173318u;
    SET_GPR_U32(ctx, 31, 0x173320u);
    ctx->pc = 0x17331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173318u;
    // 0x17331c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x173320u;
label_173320:
    // 0x173320: 0x4617b042  mul.s       $f1, $f22, $f23
    ctx->pc = 0x173320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
label_173324:
    // 0x173324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x173324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_173328:
    // 0x173328: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x173328u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_17332c:
    // 0x17332c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17332cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_173330:
    // 0x173330: 0xc06d4c0  jal         func_1B5300
label_173334:
    if (ctx->pc == 0x173334u) {
        ctx->pc = 0x173334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173330u;
        // 0x173334: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173338u;
        goto label_173338;
    }
    ctx->pc = 0x173330u;
    SET_GPR_U32(ctx, 31, 0x173338u);
    ctx->pc = 0x173334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173330u;
    // 0x173334: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x173338u;
label_173338:
    // 0x173338: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_17333c:
    // 0x17333c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_173340:
    // 0x173340: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x173340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173344:
    // 0x173344: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x173344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173348:
    // 0x173348: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x173348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_17334c:
    // 0x17334c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x17334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_173350:
    // 0x173350: 0x4618b002  mul.s       $f0, $f22, $f24
    ctx->pc = 0x173350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
label_173354:
    // 0x173354: 0xc066d7a  jal         func_19B5E8
label_173358:
    if (ctx->pc == 0x173358u) {
        ctx->pc = 0x173358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173354u;
        // 0x173358: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17335Cu;
        goto label_17335c;
    }
    ctx->pc = 0x173354u;
    SET_GPR_U32(ctx, 31, 0x17335Cu);
    ctx->pc = 0x173358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173354u;
    // 0x173358: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x17335Cu;
label_17335c:
    // 0x17335c: 0x0  nop
    ctx->pc = 0x17335cu;
    // NOP
label_173360:
    // 0x173360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173364:
    // 0x173364: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x173364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173368:
    // 0x173368: 0x26a50d60  addiu       $a1, $s5, 0xD60
    ctx->pc = 0x173368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3424));
label_17336c:
    // 0x17336c: 0xc6a00d80  lwc1        $f0, 0xD80($s5)
    ctx->pc = 0x17336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173370:
    // 0x173370: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_173374:
    // 0x173374: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x173374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_173378:
    // 0x173378: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x173378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17337c:
    // 0x17337c: 0xc6a00d80  lwc1        $f0, 0xD80($s5)
    ctx->pc = 0x17337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173380:
    // 0x173380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_173384:
    // 0x173384: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x173384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_173388:
    // 0x173388: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x173388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17338c:
    // 0x17338c: 0xc6a00d80  lwc1        $f0, 0xD80($s5)
    ctx->pc = 0x17338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173390:
    // 0x173390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_173394:
    // 0x173394: 0xc066e26  jal         func_19B898
label_173398:
    if (ctx->pc == 0x173398u) {
        ctx->pc = 0x173398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173394u;
        // 0x173398: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17339Cu;
        goto label_17339c;
    }
    ctx->pc = 0x173394u;
    SET_GPR_U32(ctx, 31, 0x17339Cu);
    ctx->pc = 0x173398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173394u;
    // 0x173398: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17339Cu;
label_17339c:
    // 0x17339c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17339cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1733a0:
    // 0x1733a0: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x1733a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1733a4:
    // 0x1733a4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1733a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1733a8:
    // 0x1733a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1733a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1733ac:
    // 0x1733ac: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1733acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1733b0:
    // 0x1733b0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1733b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1733b4:
    // 0x1733b4: 0x96a30d70  lhu         $v1, 0xD70($s5)
    ctx->pc = 0x1733b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3440)));
label_1733b8:
    // 0x1733b8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1733b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1733bc:
    // 0x1733bc: 0x0  nop
    ctx->pc = 0x1733bcu;
    // NOP
label_1733c0:
    // 0x1733c0: 0x96a30d74  lhu         $v1, 0xD74($s5)
    ctx->pc = 0x1733c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3444)));
label_1733c4:
    // 0x1733c4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1733c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1733c8:
    // 0x1733c8: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
label_1733cc:
    if (ctx->pc == 0x1733CCu) {
        ctx->pc = 0x1733D0u;
        goto label_1733d0;
    }
    ctx->pc = 0x1733C8u;
    {
        const bool branch_taken_0x1733c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1733c8) {
            ctx->pc = 0x1730ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1730ac;
        }
    }
    ctx->pc = 0x1733D0u;
label_1733d0:
    // 0x1733d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1733d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1733d4:
    // 0x1733d4: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1733d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1733d8:
    // 0x1733d8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1733d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1733dc:
    // 0x1733dc: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1733dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1733e0:
    // 0x1733e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1733e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1733e4:
    // 0x1733e4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1733e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1733e8:
    // 0x1733e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1733e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1733ec:
    // 0x1733ec: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1733ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1733f0:
    // 0x1733f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1733f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1733f4:
    // 0x1733f4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1733f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1733f8:
    // 0x1733f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1733f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1733fc:
    // 0x1733fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1733fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_173400:
    // 0x173400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173404:
    // 0x173404: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x173404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_173408:
    // 0x173408: 0x3e00008  jr          $ra
label_17340c:
    if (ctx->pc == 0x17340Cu) {
        ctx->pc = 0x17340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173408u;
        // 0x17340c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173410u;
        goto label_173410;
    }
    ctx->pc = 0x173408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173408u;
        // 0x17340c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173410u;
label_173410:
    // 0x173410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_173414:
    // 0x173414: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x173414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_173418:
    // 0x173418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17341c:
    // 0x17341c: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x17341cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_173420:
    // 0x173420: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_173424:
    // 0x173424: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x173424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_173428:
    // 0x173428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17342c:
    // 0x17342c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17342cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_173430:
    // 0x173430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_173434:
    // 0x173434: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x173434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_173438:
    // 0x173438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17343c:
    // 0x17343c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x17343cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_173440:
    // 0x173440: 0xac830d00  sw          $v1, 0xD00($a0)
    ctx->pc = 0x173440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 3));
label_173444:
    // 0x173444: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x173444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_173448:
    // 0x173448: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x173448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_17344c:
    // 0x17344c: 0xac800d04  sw          $zero, 0xD04($a0)
    ctx->pc = 0x17344cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 0));
label_173450:
    // 0x173450: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x173450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_173454:
    // 0x173454: 0xac800d08  sw          $zero, 0xD08($a0)
    ctx->pc = 0x173454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 0));
label_173458:
    // 0x173458: 0x34473431  ori         $a3, $v0, 0x3431
    ctx->pc = 0x173458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13361);
label_17345c:
    // 0x17345c: 0xac830d0c  sw          $v1, 0xD0C($a0)
    ctx->pc = 0x17345cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 3));
label_173460:
    // 0x173460: 0x3c0251ab  lui         $v0, 0x51AB
    ctx->pc = 0x173460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20907 << 16));
label_173464:
    // 0x173464: 0xac800d5c  sw          $zero, 0xD5C($a0)
    ctx->pc = 0x173464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3420), GPR_U32(ctx, 0));
label_173468:
    // 0x173468: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x173468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_17346c:
    // 0x17346c: 0xac870d58  sw          $a3, 0xD58($a0)
    ctx->pc = 0x17346cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3416), GPR_U32(ctx, 7));
label_173470:
    // 0x173470: 0xac830d54  sw          $v1, 0xD54($a0)
    ctx->pc = 0x173470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3412), GPR_U32(ctx, 3));
label_173474:
    // 0x173474: 0x34028040  ori         $v0, $zero, 0x8040
    ctx->pc = 0x173474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_173478:
    // 0x173478: 0xac820d50  sw          $v0, 0xD50($a0)
    ctx->pc = 0x173478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3408), GPR_U32(ctx, 2));
label_17347c:
    // 0x17347c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x17347cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
label_173480:
    // 0x173480: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x173480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_173484:
    // 0x173484: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x173484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_173488:
    // 0x173488: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x173488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_17348c:
    // 0x17348c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_173490:
    // 0x173490: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x173490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_173494:
    // 0x173494: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x173494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_173498:
    // 0x173498: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x173498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_17349c:
    // 0x17349c: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x17349cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1734a0:
    // 0x1734a0: 0xdc2e1fa0  ld          $t6, 0x1FA0($at)
    ctx->pc = 0x1734a0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 1), 8096)));
label_1734a4:
    // 0x1734a4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1734a8:
    // 0x1734a8: 0x344a1001  ori         $t2, $v0, 0x1001
    ctx->pc = 0x1734a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_1734ac:
    // 0x1734ac: 0x240c0061  addiu       $t4, $zero, 0x61
    ctx->pc = 0x1734acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_1734b0:
    // 0x1734b0: 0x240b0015  addiu       $t3, $zero, 0x15
    ctx->pc = 0x1734b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1734b4:
    // 0x1734b4: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1734b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1734b8:
    // 0x1734b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1734b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1734bc:
    // 0x1734bc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1734bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1734c0:
    // 0x1734c0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1734c4:
    // 0x1734c4: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x1734c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_1734c8:
    // 0x1734c8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1734cc:
    // 0x1734cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1734ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1734d0:
    // 0x1734d0: 0xfc8e0020  sd          $t6, 0x20($a0)
    ctx->pc = 0x1734d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 14));
label_1734d4:
    // 0x1734d4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1734d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1734d8:
    // 0x1734d8: 0xdc2e1fa8  ld          $t6, 0x1FA8($at)
    ctx->pc = 0x1734d8u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 1), 8104)));
label_1734dc:
    // 0x1734dc: 0xfc8e0028  sd          $t6, 0x28($a0)
    ctx->pc = 0x1734dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 14));
label_1734e0:
    // 0x1734e0: 0xfc860030  sd          $a2, 0x30($a0)
    ctx->pc = 0x1734e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
label_1734e4:
    // 0x1734e4: 0xfc8d0038  sd          $t5, 0x38($a0)
    ctx->pc = 0x1734e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 13));
label_1734e8:
    // 0x1734e8: 0xfc8c0040  sd          $t4, 0x40($a0)
    ctx->pc = 0x1734e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 12));
label_1734ec:
    // 0x1734ec: 0xfc8b0048  sd          $t3, 0x48($a0)
    ctx->pc = 0x1734ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 11));
label_1734f0:
    // 0x1734f0: 0xfc8a0050  sd          $t2, 0x50($a0)
    ctx->pc = 0x1734f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 10));
label_1734f4:
    // 0x1734f4: 0xfc890058  sd          $t1, 0x58($a0)
    ctx->pc = 0x1734f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 9));
label_1734f8:
    // 0x1734f8: 0xfc880060  sd          $t0, 0x60($a0)
    ctx->pc = 0x1734f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 8));
label_1734fc:
    // 0x1734fc: 0xfc870068  sd          $a3, 0x68($a0)
    ctx->pc = 0x1734fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 7));
label_173500:
    // 0x173500: 0xfc830070  sd          $v1, 0x70($a0)
    ctx->pc = 0x173500u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 3));
label_173504:
    // 0x173504: 0xfc820078  sd          $v0, 0x78($a0)
    ctx->pc = 0x173504u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 2));
label_173508:
    // 0x173508: 0xc066e26  jal         func_19B898
label_17350c:
    if (ctx->pc == 0x17350Cu) {
        ctx->pc = 0x17350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173508u;
        // 0x17350c: 0x26640d60  addiu       $a0, $s3, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173510u;
        goto label_173510;
    }
    ctx->pc = 0x173508u;
    SET_GPR_U32(ctx, 31, 0x173510u);
    ctx->pc = 0x17350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173508u;
    // 0x17350c: 0x26640d60  addiu       $a0, $s3, 0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x173510u;
label_173510:
    // 0x173510: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_173514:
    // 0x173514: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_173518:
    // 0x173518: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x173518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_17351c:
    // 0x17351c: 0xae630d78  sw          $v1, 0xD78($s3)
    ctx->pc = 0x17351cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3448), GPR_U32(ctx, 3));
label_173520:
    // 0x173520: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x173520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_173524:
    // 0x173524: 0xae630d7c  sw          $v1, 0xD7C($s3)
    ctx->pc = 0x173524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3452), GPR_U32(ctx, 3));
label_173528:
    // 0x173528: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x173528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_17352c:
    // 0x17352c: 0xa6600d72  sh          $zero, 0xD72($s3)
    ctx->pc = 0x17352cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3442), (uint16_t)GPR_U32(ctx, 0));
label_173530:
    // 0x173530: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x173530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_173534:
    // 0x173534: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_173538:
    if (ctx->pc == 0x173538u) {
        ctx->pc = 0x173538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173534u;
        // 0x173538: 0xa6710d70  sh          $s1, 0xD70($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3440), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17353Cu;
        goto label_17353c;
    }
    ctx->pc = 0x173534u;
    {
        const bool branch_taken_0x173534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x173538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173534u;
        // 0x173538: 0xa6710d70  sh          $s1, 0xD70($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3440), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173534) {
            ctx->pc = 0x173548u;
            goto label_173548;
        }
    }
    ctx->pc = 0x17353Cu;
label_17353c:
    // 0x17353c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_173540:
    // 0x173540: 0x10000002  b           . + 4 + (0x2 << 2)
label_173544:
    if (ctx->pc == 0x173544u) {
        ctx->pc = 0x173544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173540u;
        // 0x173544: 0xa6620d74  sh          $v0, 0xD74($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173548u;
        goto label_173548;
    }
    ctx->pc = 0x173540u;
    {
        const bool branch_taken_0x173540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173540u;
        // 0x173544: 0xa6620d74  sh          $v0, 0xD74($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173540) {
            ctx->pc = 0x17354Cu;
            goto label_17354c;
        }
    }
    ctx->pc = 0x173548u;
label_173548:
    // 0x173548: 0xa6620d74  sh          $v0, 0xD74($s3)
    ctx->pc = 0x173548u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3444), (uint16_t)GPR_U32(ctx, 2));
label_17354c:
    // 0x17354c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_173550:
    // 0x173550: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x173550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_173554:
    // 0x173554: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_173558:
    if (ctx->pc == 0x173558u) {
        ctx->pc = 0x173558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173554u;
        // 0x173558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17355Cu;
        goto label_17355c;
    }
    ctx->pc = 0x173554u;
    {
        const bool branch_taken_0x173554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173554u;
        // 0x173558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173554) {
            ctx->pc = 0x173564u;
            goto label_173564;
        }
    }
    ctx->pc = 0x17355Cu;
label_17355c:
    // 0x17355c: 0x10000002  b           . + 4 + (0x2 << 2)
label_173560:
    if (ctx->pc == 0x173560u) {
        ctx->pc = 0x173560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17355Cu;
        // 0x173560: 0xa6620d76  sh          $v0, 0xD76($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3446), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173564u;
        goto label_173564;
    }
    ctx->pc = 0x17355Cu;
    {
        const bool branch_taken_0x17355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17355Cu;
        // 0x173560: 0xa6620d76  sh          $v0, 0xD76($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3446), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17355c) {
            ctx->pc = 0x173568u;
            goto label_173568;
        }
    }
    ctx->pc = 0x173564u;
label_173564:
    // 0x173564: 0xa6600d76  sh          $zero, 0xD76($s3)
    ctx->pc = 0x173564u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3446), (uint16_t)GPR_U32(ctx, 0));
label_173568:
    // 0x173568: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_17356c:
    // 0x17356c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17356cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173570:
    // 0x173570: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x173570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_173574:
    // 0x173574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173578:
    // 0x173578: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x173578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_17357c:
    // 0x17357c: 0xae630d80  sw          $v1, 0xD80($s3)
    ctx->pc = 0x17357cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3456), GPR_U32(ctx, 3));
label_173580:
    // 0x173580: 0xc07145c  jal         func_1C5170
label_173584:
    if (ctx->pc == 0x173584u) {
        ctx->pc = 0x173584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173580u;
        // 0x173584: 0xae620d84  sw          $v0, 0xD84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173588u;
        goto label_173588;
    }
    ctx->pc = 0x173580u;
    SET_GPR_U32(ctx, 31, 0x173588u);
    ctx->pc = 0x173584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173580u;
    // 0x173584: 0xae620d84  sw          $v0, 0xD84($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 3460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5170u;
    { ctx->pc = 0x1c5170; return; }
    ctx->pc = 0x173588u;
label_173588:
    // 0x173588: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17358c:
    // 0x17358c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17358cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x173590u;
    return;
}
